/*
 * @Date: 2023-11-19 05:46:09
 * @LastEditors: zxh vocvocal@163.com
 * @LastEditTime: 2023-11-19 05:54:40
 * @FilePath: /dsp_work/fftw3/src/dtw.cpp
 */
#include <vector>
#include "opencv2/core/cvdef.h"
#include "dtw.hpp"
double distance(const std::vector<double>& x1, const std::vector<double>& x2) {
    double sum = 0;
    for (size_t i = 0; i < x1.size(); ++i) {
        sum += std::abs(x1[i] - x2[i]);
    }
    return sum;
}

// Function to perform Dynamic Time Warping (DTW) between two matrices M1 and M2
double GetDtwCost(const std::vector<std::vector<double>>& M1, const std::vector<std::vector<double>>& M2) {
    // Initialize arrays with size M1.size() * M2.size()
    size_t M1_len = M1.size();
    size_t M2_len = M2.size();
    std::vector<std::vector<double>> cost(M1_len, std::vector<double>(M2_len, 0));

    // Initialize distance array
    std::vector<std::vector<double>> dis;
    for (size_t i = 0; i < M1_len; ++i) {
        std::vector<double> dis_row;
        for (size_t j = 0; j < M2_len; ++j) {
            dis_row.push_back(distance(M1[i], M2[j]));
        }
        dis.push_back(dis_row);
    }

    // Initialize the first row and column of the cost array
    cost[0][0] = dis[0][0];
    for (size_t i = 1; i < M1_len; ++i) {
        cost[i][0] = cost[i - 1][0] + dis[i][0];
    }
    for (size_t j = 1; j < M2_len; ++j) {
        cost[0][j] = cost[0][j - 1] + dis[0][j];
    }

    // Dynamic Programming for DTW
    for (size_t i = 1; i < M1_len; ++i) {
        for (size_t j = 1; j < M2_len; ++j) {
            cost[i][j] = MIN(cost[i - 1][j] + dis[i][j], 
                                   MIN(cost[i - 1][j - 1] + dis[i][j] * 2, 
                                   cost[i][j - 1] + dis[i][j]));
        }
    }

    return cost[M1_len - 1][M2_len - 1];
}