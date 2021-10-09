# 将可执行文件输出到文件夹bin中
SET(EXECUTABLE_OUTPUT_PATH  ${PROJECT_SOURCE_DIR}/bin)

#将src 文件夹下的全部源文件添加到SRC_LIST这个集合中
aux_source_directory(. SRC_LIST)
# 将集合SRC_LIST中的全部文件进行add
add_executable(main ${SRC_LIST})

target_link_libraries(main hello)