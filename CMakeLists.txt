cmake_minimum_required(VERSION 3.10) # compatibilités de CMake
project(main_exe) # nom du projet : "main_exe"

set(CMAKE_BUILD_TYPE debug) # compilation en mode debug
set(CMAKE_CXX_FLAGS "-Wall -Wextra -std=c++11") # options

file( # liste des fichiers à compiler
	GLOB_RECURSE # recherche récursive
	source_files # fichiers listés dans une variable source_files
	src/*.cpp
)

add_executable( # création de l’exécutable binaire du projet
	main_exe # nom du binaire
	${source_files} # liste des fichiers compilés pour le linking
)