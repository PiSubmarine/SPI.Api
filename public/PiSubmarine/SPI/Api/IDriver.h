#pragma once

#include <cstddef>
#include <cstdint>
#include <span>

namespace PiSubmarine::SPI::Api
{
    class IDriver
    {
    public:
        virtual ~IDriver() = default;
        virtual bool WriteRead(std::span<const uint8_t> txData, std::span<uint8_t> rxData) = 0;
    };
}
