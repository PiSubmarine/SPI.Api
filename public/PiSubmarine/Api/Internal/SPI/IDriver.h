#pragma once

#include <cstdint>

namespace PiSubmarine::Api::Internal::SPI
{
    class IDriver
    {
    public:
        virtual ~IDriver() = default;
        virtual bool WriteRead(uint8_t* txData, uint8_t* rxData, size_t len) = 0;
    };
}