cmake_minimum_required(VERSION 3.20)

include(FetchContent)

project(PiSubmarine.Api.Internal.SPI.Test LANGUAGES CXX)

set(PiSubmarine.Api.Internal.SPI.Test.Sources
        "PiSubmarine/Api/Internal/SPI/IDriverTest.cpp")

enable_testing()

# spdlog
find_package(spdlog)
find_package(GTest)

add_executable(PiSubmarine.Api.Internal.SPI.Test ${PiSubmarine.Api.Internal.SPI.Test.Sources})
PiSubmarineInitTarget(PiSubmarine.Api.Internal.SPI.Test)

target_link_libraries(PiSubmarine.Api.Internal.SPI.Test PRIVATE PiSubmarine.Api.Internal.SPI)
target_link_libraries(PiSubmarine.Api.Internal.SPI.Test PRIVATE spdlog::spdlog)
target_link_libraries(PiSubmarine.Api.Internal.SPI.Test PRIVATE GTest::gtest_main)
include(GoogleTest)
gtest_discover_tests(PiSubmarine.Api.Internal.SPI.Test)