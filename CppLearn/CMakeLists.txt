cmake_minimum_required(VERSION 4.3)
project(CppLearn)
add_compile_options(-finput-charset=UTF-8)
add_compile_options(-fexec-charset=UTF-8)

set(CMAKE_CXX_STANDARD 20)

add_library(CppLearn SHARED library.cpp
        shuzu.cpp
        "2wei.shu.zu.cpp"
        ×Ö·û´®string.cpp
        shuzu.cpp)
