cmake_minimum_required(VERSION 2.6)

project(Shroud)



aux_source_directory(./src SRC)
aux_source_directory(./src/shared SRC2)

add_executable(Shroud ${SRC} ${SRC2})
