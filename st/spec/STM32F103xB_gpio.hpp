/**
  ***********************************************************
  @file   /st/spec/STM32F103xB_gpio.hpp
  @brief  Support: STM32F103C8, STM32F103R8, STM32F103T8, 
          STM32F103V8, STM32F103CB, STM32F103RB,
		  STM32F103TB and STM32F103VB    
  ***********************************************************
**/

#pragma once




namespace mpp::io
{
  inline namespace STM32F103xB_gpio
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
  

 
