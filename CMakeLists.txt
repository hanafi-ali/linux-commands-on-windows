cmake_minimum_required(VERSION 3.24)
project(linux-commands-on-windows)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

set(CMAKE_CXX_FLAGS "-fno-rtti -fno-exceptions")
set(CMAKE_CXX_FLAGS_DEBUG "-Wall -Wextra -Wfloat-equal -Wconversion -Wsign-conversion -Warith-conversion -Werror")
set(CMAKE_CXX_FLAGS_RELEASE "-Ofast -mtune=native")

add_executable(ls src/ls.cpp)
add_executable(clear src/clear.cpp)
add_executable(pwd src/pwd.cpp)
add_executable(vim src/vim.cpp)
