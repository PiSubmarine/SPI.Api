#pragma once

#include <gtest/gtest.h>
#include "PiSubmarine/SPI/Api/IDriver.h"
#include "PiSubmarine/SPI/Api/DriverConcept.h"

#include <cstdint>

namespace PiSubmarine::SPI::Api
{
    TEST(IDriverTest, Test1)
    {
        static_assert(DriverConcept<IDriver>, "IDriver must satisfy DriverConcept");


    }
}