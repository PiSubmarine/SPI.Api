message("${_build_cmake_local}")
include("${_build_cmake_local}")

add_library(PiSubmarine.SPI.Api INTERFACE)
target_include_directories(PiSubmarine.SPI.Api INTERFACE "${CMAKE_CURRENT_SOURCE_DIR}/../public")
PiSubmarineInitTarget(PiSubmarine.SPI.Api)