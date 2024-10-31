cmake_minimum_required(VERSION 3.10)
set (CMAKE_CXX_STANDARD 17)

set(PROJECT_NAME "PhiLog")
project(${PROJECT_NAME} VERSION 1.0.0)

################ DIRECTORIES ################
set(PROJECT_DIR .)
set(PROJECT_SOURCE_DIR ${PROJECT_DIR}/src)

################ SOURCE FILES ################
set(SRC_FILES
    ${PROJECT_SOURCE_DIR}/PhiLog.hpp
    ${PROJECT_SOURCE_DIR}/PhiLog.cpp
    ${PROJECT_SOURCE_DIR}/LogLevel.hpp
    ${PROJECT_SOURCE_DIR}/IOutput.hpp
)

set(SRC_OUTPUTS_FILES
    ${PROJECT_SOURCE_DIR}/Outputs/StdOutput.hpp
)

################ TARGET ################
add_library(${PROJECT_NAME} STATIC
    ${SRC_FILES}
    ${SRC_OUTPUTS_FILES}
)

target_include_directories(${PROJECT_NAME} PUBLIC
    ${PROJECT_SOURCE_DIR}
)

set_target_properties(${PROJECT_NAME} PROPERTIES LINKER_LANGUAGE CXX)

################ MACROS ################
target_compile_definitions(${PROJECT_NAME} PUBLIC
    PHILOG_VERSION="${PROJECT_VERSION}"
)