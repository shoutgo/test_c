#CMake最低版本号要求
cmake_minimum_required (VERSION 2.8)
#项目信息
project (demo)
#指定生成目标
add_executable (main.c mytool1.c mytool2.c)
