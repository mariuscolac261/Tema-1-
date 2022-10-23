cmake_minimum_required(VERSION 3.23)
project(Proiect)

set(CMAKE_CXX_STANDARD 14)

add_executable(Proiect main.cpp GPUs.cpp GPUs.h CPUs.cpp CPUs.h Motherboards.cpp Motherboards.h PowerSupplies.cpp PowerSupplies.h RamMemories.cpp RamMemories.h Cases.cpp Cases.h)
