/**
  ***********************************************************
  @file   /st/spec/STM32F103x6_gpio.hpp
  @brief  Support: STM32F103C4, STM32F103R4, STM32F103T4, 
          STM32F103C6, STM32F103R6 and STM32F103T6     
  ***********************************************************
**/

#pragma once




namespace mpp::io
{
  inline namespace STM32F103x6_gpio
  {
    enum class Port { 
      A = GPIOA_BASE,
      B = GPIOB_BASE,
      C = GPIOC_BASE,
      D = GPIOD_BASE,
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

        default: return false;
      }
    }
  } // inline namespace 
} // namespace mpp::io 
  

 
