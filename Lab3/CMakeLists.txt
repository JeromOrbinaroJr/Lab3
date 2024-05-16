cmake_minimum_required(VERSION 3.10)
project(Lab 2 Number 2)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

add_executable(MyExecutable BankCard.h BankCardStructure.h DataLoader.h DebitCard.h DebitCardStructure.h main.cpp BankCard.cpp BankCardStructure.h DataLoader.cpp DebirCard.cpp DebitCardStructure.cpp)