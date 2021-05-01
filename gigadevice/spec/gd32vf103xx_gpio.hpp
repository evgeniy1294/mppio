/**
  ***********************************************************
  @file   /src/gpio/gigadevice/spec/gd32vf103xx_gpio.hpp
  @brief  Support gd32vf103 series 
  ***********************************************************
**/

#pragma once




namespace mpp::io
{
  inline namespace gd32vf103xx
  {
    enum class Port { 
      A = GPIOA,
      B = GPIOB,
      C = GPIOC,
      D = GPIOD,
      E = GPIOE,
    };

    template< typename IO >
    constexpr bool IsValidIo()
    {
      switch(IO::kPort)
      { 
        case Port::A: return IO::kPin < 16u;
        case Port::B: return IO::kPin < 16u;
        case Port::C: return IO::kPin < 16u;
        case Port::D: return IO::kPin < 16u;
        case Port::E: return IO::kPin < 16u;

        default: return false;
      }
    }
  } // inline namespace 
} // namespace mpp::io
   
