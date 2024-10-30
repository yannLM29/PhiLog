cmake_minimum_required(VERSION 3.10)
set (CMAKE_CXX_STANDARD 17)

set(PROJECT_NAME "PhiLog")
project(${PROJECT_NAME} VERSION 0.0.1)

################ DIRECTORIES ################
set(PROJECT_DIR .)
set(PROJECT_SOURCE_DIR ${PROJECT_DIR}/src)

################ SOURCE FILES ################
set(SRC_FILES
    ${PROJECT_SOURCE_DIR}/PhiLog.hpp
)

################ TARGET ################
add_library(${PROJECT_NAME} STATIC
    ${SRC_FILES}
)

target_include_directories(${PROJECT_NAME} PUBLIC
    ${PROJECT_SOURCE_DIR}
)

set_target_properties(${PROJECT_NAME} PROPERTIES LINKER_LANGUAGE CXX)