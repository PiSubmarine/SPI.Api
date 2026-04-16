#pragma once

#include <span>

namespace PiSubmarine::SPI::Api
{
    template<typename T>
    concept DriverConcept = requires(T driver)
    {
        { driver.WriteRead(std::span<const uint8_t>{}, std::span<uint8_t>{}) } -> std::same_as<bool>;
    };

}
