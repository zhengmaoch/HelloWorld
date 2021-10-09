SET(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")
# 开启调试信息
SET(CMAKE_BUILD_TYPE debug)
# set(CMAKE_BUILD_TYPE "Release")

# 头文件所在的路径包含进去
include_directories(${PROJECT_SOURCE_DIR}/include)
# 将可执行文件输出到文件夹bin中
SET(EXECUTABLE_OUTPUT_PATH  ${PROJECT_SOURCE_DIR}/bin)

#将src 文件夹下的全部源文件添加到SRC_LIST这个集合中
aux_source_directory(. SRC_LIST)
# 将集合SRC_LIST中的全部文件进行add
add_executable(main ${SRC_LIST})