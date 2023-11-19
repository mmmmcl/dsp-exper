/*
 * @Date: 2023-11-19 04:31:33
 * @LastEditors: zxh vocvocal@163.com
 * @LastEditTime: 2023-11-19 05:43:34
 * @FilePath: /dsp_work/fftw3/include/mel_filt.hpp
 */
#ifndef _MEL_FILT_
#include <iostream>
#include <vector>
#include <cmath>
void CreateMelFilters(std::vector<std::vector<double>>&fbank,int nfilt,int NFFT,double sample_rate);


#endif