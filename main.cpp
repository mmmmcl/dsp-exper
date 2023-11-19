/*
 * @Date: 2023-10-22 02:40:06
 * @LastEditors: zxh vocvocal@163.com
 * @LastEditTime: 2023-11-19 06:51:12
 * @FilePath: /dsp_work/main.cpp
 */
#include "dtw.hpp"
#include "fftw3.h"
#include "mel_filter.hpp"
#include <iostream>
#include <math.h>
#include <opencv2/core/mat.hpp>
#include <opencv2/highgui.hpp>
#include <opencv4/opencv2/opencv.hpp>
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <vector>
#define N 100
#define E 2.71828182845904523536
#define T 0.75
#define PI 3.14159265358979323846
int sample_rate = 1000;
int nfilt = 2;

int main()
{

    fftw_complex *din, *out;
    fftw_plan p;
    din = (fftw_complex *)fftw_malloc(sizeof(fftw_complex) * N);
    out = (fftw_complex *)fftw_malloc(sizeof(fftw_complex) * N);
    if ((din == NULL) || (out == NULL))
    {
        printf("Error:insufficient available memory\n");
    }
    else
    {
        for (int i = 0; i < N; i++) /*测试数据*/
        {
            din[i][0] = cos(2 * PI * i / N);
            din[i][1] = 0;
        }
    }
    p = fftw_plan_dft_1d(N, din, out, FFTW_FORWARD, FFTW_ESTIMATE);
    fftw_execute(p); /* repeat as needed */
    fftw_destroy_plan(p);
    fftw_cleanup();
    std::vector<std::vector<double>> fbank(nfilt, std::vector<double>(N, 0));

    CreateMelFilters(fbank, nfilt, N, sample_rate);
    for (int i = 0; i < nfilt; i++)
    {
        for (int j = 0; j < N; j++)
            std::cout << fbank[i][j] << " ";
        ;
        std::cout << std::endl;
    }
    // std::cout<<std::endl;
    // std::vector<double> data;
    // for (i = 0; i<N; i++)/*OUTPUT*/
    // {
    // 	data.push_back(pow(out[i][0]*out[i][0]+out[i][1]*out[i][1], 0.5));
    // 	std::cout<<pow(out[i][0]*out[i][0]+out[i][1]*out[i][1], 0.5)<<std::endl;
    // }
    // if (din != NULL) fftw_free(din);
    // if (out != NULL) fftw_free(out);
    // cv::Mat background=cv::Mat::zeros(1200,1200,CV_8UC1);
    // for(int i=0;i<1024;i++)
    // {
    // 	cv::circle(background,cv::Point(i,data[i]),1,cv::Scalar(255),-1);
    // }

    // cv::imshow("background",background);
    // cv::waitKey(0);
    std::vector<std::vector<double>> M1 = {{1.0, 2.0, 3.0}, {4.0, 5.0, 6.0}, {7.0, 8.0, 9.0}};
    std::vector<std::vector<double>> M2 = {{9.0, 8.0, 7.0}, {3.0, 2.0, 1.0}};

    double result = GetDtwCost(M1, M2);

    std::cout << "DTW Distance: " << result << std::endl;

    return 0;
}
