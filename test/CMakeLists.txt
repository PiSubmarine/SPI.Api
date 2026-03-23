cmake_minimum_required(VERSION 3.20)

include(FetchContent)

project(PiSubmarine.SPI.Api.Test LANGUAGES CXX)

set(PiSubmarine.SPI.Api.Test.Sources
        "PiSubmarine/SPI/Api/IDriverTest.cpp")

enable_testing()

# spdlog
find_package(spdlog)
find_package(GTest)

add_executable(PiSubmarine.SPI.Api.Test ${PiSubmarine.SPI.Api.Test.Sources})
PiSubmarineInitTarget(PiSubmarine.SPI.Api.Test)

target_link_libraries(PiSubmarine.SPI.Api.Test PRIVATE PiSubmarine.SPI.Api)
target_link_libraries(PiSubmarine.SPI.Api.Test PRIVATE spdlog::spdlog)
target_link_libraries(PiSubmarine.SPI.Api.Test PRIVATE GTest::gtest_main)
include(GoogleTest)
gtest_discover_tests(PiSubmarine.SPI.Api.Test)