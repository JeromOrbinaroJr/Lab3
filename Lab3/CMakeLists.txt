cmake_minimum_required(VERSION 3.10)
project(Lab3)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

add_executable(MyExecutable BankCard.h DebitCard.h Structure.h DataLoader.h main.cpp BankCard.cpp DebitCard.cpp Structure.cpp)