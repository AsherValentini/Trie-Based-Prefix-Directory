cmake_minimum_required(VERSION 3.10)
project(trie-based-prefix-directory)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include_directories(include src)
add_executable(prog
	src/main.cpp
)
