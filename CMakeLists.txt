#
cmake_minimum_required(VERSION 3.0)

project(HELLO) # 根据自己的工程名修改
message(STATUS "This is BINARY dir " ${PROJECT_BINARY_DIR}) 
message(STATUS "This is SOURCE dir " ${PROJECT_SOURCE_DIR})

ADD_SUBDIRECTORY(lib)
ADD_SUBDIRECTORY(src bin)

# INSTALL(FILES COPYRIGHT README DESTINATION share/doc/cmake/t2)
# INSTALL(PROGRAMS runhello.sh DESTINATION bin)
# INSTALL(DIRECTORY doc/ DESTINATION share/doc/cmake/t2)