/**
  ***********************************************************
  @file   /st/spec/STM32F107xC_gpio.hpp
  @brief  Support: STM32F107RB, STM32F107VB, STM32F107RC and STM32F107VC 
  ***********************************************************
**/

#pragma once




namespace mpp::io
{
  inline namespace STM32F107xC_gpio
  {
    enum class Port { 
      A = GPIOA_BASE,
      B = GPIOB_BASE,
      C = GPIOC_BASE,
      D = GPIOD_BASE,
      E = GPIOE_BASE,
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
  

 
