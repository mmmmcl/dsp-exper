/*
 * @Date: 2023-11-19 04:31:52
 * @LastEditors: zxh vocvocal@163.com
 * @LastEditTime: 2023-11-19 06:50:35
 * @FilePath: /dsp_work/mel/src/mel_filt.cpp
 */
#include <iostream>
#include "mel_filter.hpp"
void CreateMelFilters(std::vector<std::vector<double>>&fbank,int nfilt,int NFFT,double sample_rate)
{
    std::vector<double> mel_points,hz_points,bin;
	double low_freq_mel = 0;
	double high_freq_mel = 2595 * log10(1 + (sample_rate / 2) / 700);
	double mel_step=(high_freq_mel-low_freq_mel)/(nfilt+2);

	for(int i=0;i<nfilt+2;i++)
	{	
		mel_points.push_back(low_freq_mel+i*mel_step);
		hz_points.push_back(700 * ((pow( 10,mel_points[i]/2595) ) - 1));
        bin.push_back(round(hz_points[i]/(sample_rate/2)*NFFT/2));
	}
    for(auto b :bin)
        std::cout<<b<<" ";
    std::cout<<std::endl;

    for(int i=1;i<nfilt+1;i++)
    {
        int left=bin[i-1];
        int right=bin[i+1];
        int center=bin[i];
        for(int j=left;j<center;j++)
        {
            fbank[i-1][j]=(j-bin[i-1])/(bin[i]-bin[i-1]);
        }
        for(int j=center;j<right;j++)
        {
            fbank[i-1][j]=(bin[i+1]-j)/(bin[i+1]-bin[i]);
        }
    }    
}