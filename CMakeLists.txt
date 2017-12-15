set (CMAKE_CXX_FLAGS "-std=c++11 -g -ftest-coverage -fprofile-arcs")

project(callpath_test)

set (SRC_DIR ${CMAKE_SOURCE_DIR})
set (CMAKE_LIBRARY_OUTPUT_DIRECTORY ${SRC_DIR}/bin)
set (CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${SRC_DIR}/bin)
set (CMAKE_RUNTIME_OUTPUT_DIRECTORY ${SRC_DIR}/bin)


subdirs(src)


add_custom_target(clean-all
    COMMAND ${CMAKE_BUILD_TOOL} clean
    COMMAND rm -rf ${SRC_DIR}/bin/*
    )
