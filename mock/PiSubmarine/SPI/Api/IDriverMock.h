#pragma once

#include <gmock/gmock.h>
#include "PiSubmarine/SPI/Api/IDriver.h"

namespace PiSubmarine::SPI::Api
{
    class IDriverMock : public IDriver
    {
    public:
        MOCK_METHOD(bool, WriteRead,
                    (uint8_t* txData, uint8_t* rxData, std::size_t len),
                    (override));
    };
}
