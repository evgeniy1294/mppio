#pragma once

#if defined (STM32F1) 
  #include "st/stgpio_v1.hpp"
#elif defined (STM32F4)||(STM32G0)||(STM32MP1)
  #include "st/stgpio_v3.hpp"
#elif defined (GD32VF103)
  #include "gigadevice/gdgpio_v1.hpp"
#else
  #error "You must define supported MCU series"
#endif


namespace mpp::io {

    template < class... IO >
    class IoSet final
    {
      public:
        inline constexpr static void Init()  { ( IO::Init(), ... ); };   
        inline constexpr static void Set()   { ( IO::Set(), ... ); };
        inline constexpr static void Reset() { ( IO::Reset(), ... ); };
        inline constexpr static void Toggle(){ ( IO::Toggle(), ... ); };
    };
  
}
