SET(LIBRARY_OUTPUT_PATH ${PROJECT_BINARY_DIR}/lib)
#将src 文件夹下的全部源文件添加到SRC_LIST这个集合中
aux_source_directory(. LIB_LIST)
# 将集合LIB_LIST中的全部文件进行add

add_library(hello SHARED ${LIB_LIST})
# VERSION指代动态库版本，SOVERSION指代API版本
SET_TARGET_PROPERTIES(hello PROPERTIES VERSION 1.2 SOVERSION 1)

add_library(hello_static STATIC ${LIB_LIST})
# 设置输出的名称
SET_TARGET_PROPERTIES(hello_static PROPERTIES OUTPUT_NAME "hello")
GET_TARGET_PROPERTY(OUTPUT_VALUE hello_static OUTPUT_NAME)
MESSAGE(STATUS "This is the hello_static OUTPUT_NAME: " ${OUTPUT_VALUE})