cmake_minimum_required(VERSION 3.20)
project(Workshop03 C)

set(CMAKE_C_STANDARD 11)
set(CMAKE_C_STANDARD_REQUIRED ON)

# Bat canh bao day du cho moi target
add_compile_options(-Wall -Wextra)

# Moi Program_N.c co main() rieng -> moi file la mot executable rieng
file(GLOB PROGRAM_SOURCES "${CMAKE_CURRENT_SOURCE_DIR}/Program_*.c")

foreach(src ${PROGRAM_SOURCES})
    get_filename_component(target_name ${src} NAME_WE)
    add_executable(${target_name} ${src})
endforeach()
