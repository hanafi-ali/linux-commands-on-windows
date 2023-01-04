cmake_minimum_required(VERSION 3.24)
project(linux-commands-on-windows)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

set(CMAKE_CXX_FLAGS "-fno-rtti -fno-exceptions")
set(CMAKE_CXX_FLAGS_DEBUG "-Wall -Wextra -Wfloat-equal -Wconversion -Wsign-conversion -Warith-conversion -Werror")
set(CMAKE_CXX_FLAGS_RELEASE "-Ofast -mtune=native")

set(apps cat clear ls pwd vim
        cc cdm ci cr cu
        ga gcm gd gp gpl gs gsp gst gsw
        ni nr nrb nrd nrs
        pa pam pamr pas pat)

foreach(app IN LISTS apps)
    add_executable(${app} src/${app}.cpp)
endforeach()
