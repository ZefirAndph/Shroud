cmake_minimum_required(VERSION 2.6)

project(Shroud)



aux_source_directory(./src/wdt WDT)
add_executable(WDT ${WDT})
