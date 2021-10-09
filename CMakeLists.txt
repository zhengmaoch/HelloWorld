#
cmake_minimum_required(VERSION 3.0)
# 根据自己的工程名修改
project(HELLO)
# 设置C++编译选项，也可以通过指令ADD_DEFINITIONS()添加
SET(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")
# 开启调试信息
SET(CMAKE_BUILD_TYPE debug)
# set(CMAKE_BUILD_TYPE "Release")

message(STATUS "This is BINARY dir " ${PROJECT_BINARY_DIR}) 
message(STATUS "This is SOURCE dir " ${PROJECT_SOURCE_DIR})

# 头文件所在的路径包含进去
include_directories(${PROJECT_SOURCE_DIR}/include)

ADD_SUBDIRECTORY(lib)
ADD_SUBDIRECTORY(src bin)

# INSTALL(FILES COPYRIGHT README DESTINATION share/doc/cmake/t2)
# INSTALL(PROGRAMS runhello.sh DESTINATION bin)
# INSTALL(DIRECTORY doc/ DESTINATION share/doc/cmake/t2)

add_test(maintest ${PROJECT_BINARY_DIR}/bin/main)
enable_testing()