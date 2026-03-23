message("${_build_cmake_local}")
include("${_build_cmake_local}")

add_library(PiSubmarine.Api.Internal.SPI INTERFACE)
target_include_directories(PiSubmarine.Api.Internal.SPI INTERFACE "${CMAKE_CURRENT_SOURCE_DIR}/../public")
PiSubmarineInitTarget(PiSubmarine.Api.Internal.SPI)