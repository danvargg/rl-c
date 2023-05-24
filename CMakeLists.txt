cmake_minimum_required(VERSION 3.25)
project(rl_c C)

set(CMAKE_C_STANDARD 11)

add_executable(rl_c
        one_o_one.c matrix_mult.c)
