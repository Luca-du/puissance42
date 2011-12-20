cmake_minimum_required(VERSION 2.6) 

project(puissance42)

include_directories(include)

file(
    GLOB_RECURSE
    source_files
    src/*.c
    include/*.h
)

add_executable(
    puissance42
    ${source_files}
)
