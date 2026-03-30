message("${_build_cmake_local}")
include("${_build_cmake_local}")

add_library(PiSubmarine.SPI.Api.Mock INTERFACE
        PiSubmarine/SPI/Api/IDriverMock.h
)
target_include_directories(PiSubmarine.SPI.Api.Mock INTERFACE "${CMAKE_CURRENT_SOURCE_DIR}")
PiSubmarineInitTarget(PiSubmarine.SPI.Api.Mock)

find_package(GTest)
target_link_libraries(PiSubmarine.SPI.Api.Mock INTERFACE GTest::gtest_main GTest::gmock_main)