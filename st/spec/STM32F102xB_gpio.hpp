/**
  ***********************************************************
  @file   /st/spec/STM32F102xB_gpio.hpp
  @brief  Support: STM32F102C8, STM32F102R8, STM32F102CB and STM32F102RB     
  ***********************************************************
**/

#pragma once



namespace mpp::io
{
  inline namespace STM32F102xB_gpio
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
  

 
