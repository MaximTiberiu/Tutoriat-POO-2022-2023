cmake_minimum_required(VERSION 3.23)
project(p01)

set(CMAKE_CXX_STANDARD 14)

add_executable(p01 main.cpp src/Magazin.cpp headers/Magazin.hpp src/Raft.cpp headers/Raft.hpp src/CasaMarcat.cpp headers/CasaMarcat.hpp src/Client.cpp headers/Client.hpp src/Produs.cpp headers/Produs.hpp src/CosCumparaturi.cpp headers/CosCumparaturi.hpp src/ClientObisnuit.cpp headers/ClientObisnuit.hpp src/ClientFidel.cpp headers/ClientFidel.hpp src/ClientSpecial.cpp headers/ClientSpecial.hpp src/Aplicatie.cpp headers/Aplicatie.hpp src/Exceptions.cpp headers/Exceptions.hpp)
