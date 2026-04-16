#pragma once

#include <gmock/gmock.h>
#include <span>
#include "PiSubmarine/SPI/Api/IDriver.h"

namespace PiSubmarine::SPI::Api
{
    class IDriverMock : public IDriver
    {
    public:
        MOCK_METHOD(bool, WriteRead,
                    (std::span<const uint8_t> txData, std::span<uint8_t> rxData),
                    (override));
    };
}
