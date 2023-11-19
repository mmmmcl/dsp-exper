cmake_minimum_required(VERSION 3.0.0)
project(test VERSION 0.1.0 LANGUAGES C CXX)


find_package(FFTW3 REQUIRED)
find_package(OpenCV REQUIRED)

include_directories(${OpenCV_INCLUDE_DIRS} dtw/include mel/include)

add_subdirectory(dtw)
add_subdirectory(mel)

add_executable(main main.cpp)
target_link_libraries(
    main
    fftw3
    ${OpenCV_LIBS}
    mel
    dtw
)
  
set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
