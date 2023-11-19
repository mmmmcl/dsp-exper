cmake_minimum_required(VERSION 3.0.0)
project(dtw VERSION 0.1.0)


aux_source_directory(./src ALL_SRCS)
add_library(dtw STATIC ${ALL_SRCS})