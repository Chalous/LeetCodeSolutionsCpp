cmake_minimum_required(VERSION 3.0.0)
project(leetcodeSolutionsCpp VERSION 0.1.0)

include(CTest)
enable_testing()

aux_source_directory(./src SrcFiles)
add_executable(leetcodeSolutionsCpp ${SrcFiles})

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
