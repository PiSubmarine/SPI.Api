#pragma once

#include <cstdint>

namespace PiSubmarine::SPI::Api
{
	template<typename T>
	concept DriverConcept = requires(T driver, uint8_t* txData, uint8_t* rxData, std::size_t len)
	{
		{ driver.WriteRead(txData, rxData, len) } -> std::same_as<bool>;
	};

}