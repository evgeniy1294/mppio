﻿/**
  ***********************************************************
  @file   /st/spec/STM32F446_gpio_v1_0.hpp
  @brief  This is autogenerated file        
  ***********************************************************
**/

#pragma once


namespace mpp::io
{
  inline namespace STM32F446_gpio_v1_0
  {
    enum class Port { 
      A = GPIOA_BASE,
      B = GPIOB_BASE,
      C = GPIOC_BASE,
      D = GPIOD_BASE,
      E = GPIOE_BASE,
      F = GPIOF_BASE,
      G = GPIOG_BASE,
      H = GPIOH_BASE,
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
        case Port::F: return IO::kPin < 16u;
        case Port::G: return IO::kPin < 16u;
        case Port::H: return IO::kPin < 2u;

        default: return false;
      }
    }


    

    struct PA0  
    {
      constexpr static Port kPort = Port::A;
      constexpr static std::uint32_t kPin = 0u;
      enum { TIM2_CH1 = 1ul,  TIM2_ETR = 1ul,  TIM5_CH1 = 2ul,  TIM8_ETR = 3ul,  UART4_TX = 8ul,  USART2_CTS = 7ul, }; 
    };

    struct PA1  
    {
      constexpr static Port kPort = Port::A;
      constexpr static std::uint32_t kPin = 1u;
      enum { QUADSPI_BK1_IO3 = 9ul,  SAI2_MCLK_B = 10ul,  TIM2_CH2 = 1ul,  TIM5_CH2 = 2ul,  UART4_RX = 8ul,  USART2_RTS = 7ul, }; 
    };

    struct PA10 
    {
      constexpr static Port kPort = Port::A;
      constexpr static std::uint32_t kPin = 10u;
      enum { DCMI_D1 = 13ul,  TIM1_CH3 = 1ul,  USART1_RX = 7ul,  USB_OTG_FS_ID = 10ul, }; 
    };

    struct PA11 
    {
      constexpr static Port kPort = Port::A;
      constexpr static std::uint32_t kPin = 11u;
      enum { CAN1_RX = 9ul,  TIM1_CH4 = 1ul,  USART1_CTS = 7ul,  USB_OTG_FS_DM = 10ul, }; 
    };

    struct PA12 
    {
      constexpr static Port kPort = Port::A;
      constexpr static std::uint32_t kPin = 12u;
      enum { CAN1_TX = 9ul,  SAI2_FS_B = 8ul,  TIM1_ETR = 1ul,  USART1_RTS = 7ul,  USB_OTG_FS_DP = 10ul, }; 
    };

    struct PA13 
    {
      constexpr static Port kPort = Port::A;
      constexpr static std::uint32_t kPin = 13u;
      enum { SYS_JTMS_SWDIO = 0ul, }; 
    };

    struct PA14 
    {
      constexpr static Port kPort = Port::A;
      constexpr static std::uint32_t kPin = 14u;
      enum { SYS_JTCK_SWCLK = 0ul, }; 
    };

    struct PA15 
    {
      constexpr static Port kPort = Port::A;
      constexpr static std::uint32_t kPin = 15u;
      enum { CEC = 4ul,  I2S1_WS = 5ul,  I2S3_WS = 6ul,  SPI1_NSS = 5ul,  SPI3_NSS = 6ul,  SYS_JTDI = 0ul,  TIM2_CH1 = 1ul,  TIM2_ETR = 1ul,  UART4_RTS = 8ul, }; 
    };

    struct PA2  
    {
      constexpr static Port kPort = Port::A;
      constexpr static std::uint32_t kPin = 2u;
      enum { SAI2_SCK_B = 8ul,  TIM2_CH3 = 1ul,  TIM5_CH3 = 2ul,  TIM9_CH1 = 3ul,  USART2_TX = 7ul, }; 
    };

    struct PA3  
    {
      constexpr static Port kPort = Port::A;
      constexpr static std::uint32_t kPin = 3u;
      enum { SAI1_FS_A = 6ul,  TIM2_CH4 = 1ul,  TIM5_CH4 = 2ul,  TIM9_CH2 = 3ul,  USART2_RX = 7ul,  USB_OTG_HS_ULPI_D0 = 10ul, }; 
    };

    struct PA4  
    {
      constexpr static Port kPort = Port::A;
      constexpr static std::uint32_t kPin = 4u;
      enum { DCMI_HSYNC = 13ul,  I2S1_WS = 5ul,  I2S3_WS = 6ul,  SPI1_NSS = 5ul,  SPI3_NSS = 6ul,  USART2_CK = 7ul,  USB_OTG_HS_SOF = 12ul, }; 
    };

    struct PA5  
    {
      constexpr static Port kPort = Port::A;
      constexpr static std::uint32_t kPin = 5u;
      enum { I2S1_CK = 5ul,  SPI1_SCK = 5ul,  TIM2_CH1 = 1ul,  TIM2_ETR = 1ul,  TIM8_CH1N = 3ul,  USB_OTG_HS_ULPI_CK = 10ul, }; 
    };

    struct PA6  
    {
      constexpr static Port kPort = Port::A;
      constexpr static std::uint32_t kPin = 6u;
      enum { DCMI_PIXCLK = 13ul,  I2S2_MCK = 6ul,  SPI1_MISO = 5ul,  TIM13_CH1 = 9ul,  TIM1_BKIN = 1ul,  TIM3_CH1 = 2ul,  TIM8_BKIN = 3ul, }; 
    };

    struct PA7  
    {
      constexpr static Port kPort = Port::A;
      constexpr static std::uint32_t kPin = 7u;
      enum { FMC_SDNWE = 12ul,  I2S1_SD = 5ul,  SPI1_MOSI = 5ul,  TIM14_CH1 = 9ul,  TIM1_CH1N = 1ul,  TIM3_CH2 = 2ul,  TIM8_CH1N = 3ul, }; 
    };

    struct PA8  
    {
      constexpr static Port kPort = Port::A;
      constexpr static std::uint32_t kPin = 8u;
      enum { I2C3_SCL = 4ul,  RCC_MCO_1 = 0ul,  TIM1_CH1 = 1ul,  USART1_CK = 7ul,  USB_OTG_FS_SOF = 10ul, }; 
    };

    struct PA9  
    {
      constexpr static Port kPort = Port::A;
      constexpr static std::uint32_t kPin = 9u;
      enum { DCMI_D0 = 13ul,  I2C3_SMBA = 4ul,  I2S2_CK = 5ul,  SAI1_SD_B = 6ul,  SPI2_SCK = 5ul,  TIM1_CH2 = 1ul,  USART1_TX = 7ul, }; 
    };

    struct PB0  
    {
      constexpr static Port kPort = Port::B;
      constexpr static std::uint32_t kPin = 0u;
      enum { I2S3_SD = 7ul,  SDIO_D1 = 12ul,  SPI3_MOSI = 7ul,  TIM1_CH2N = 1ul,  TIM3_CH3 = 2ul,  TIM8_CH2N = 3ul,  UART4_CTS = 8ul,  USB_OTG_HS_ULPI_D1 = 10ul, }; 
    };

    struct PB1  
    {
      constexpr static Port kPort = Port::B;
      constexpr static std::uint32_t kPin = 1u;
      enum { SDIO_D2 = 12ul,  TIM1_CH3N = 1ul,  TIM3_CH4 = 2ul,  TIM8_CH3N = 3ul,  USB_OTG_HS_ULPI_D2 = 10ul, }; 
    };

    struct PB10 
    {
      constexpr static Port kPort = Port::B;
      constexpr static std::uint32_t kPin = 10u;
      enum { I2C2_SCL = 4ul,  I2S2_CK = 5ul,  SAI1_SCK_A = 6ul,  SPI2_SCK = 5ul,  TIM2_CH3 = 1ul,  USART3_TX = 7ul,  USB_OTG_HS_ULPI_D3 = 10ul, }; 
    };

    struct PB11 
    {
      constexpr static Port kPort = Port::B;
      constexpr static std::uint32_t kPin = 11u;
      enum { I2C2_SDA = 4ul,  SAI2_SD_A = 8ul,  TIM2_CH4 = 1ul,  USART3_RX = 7ul,  USB_OTG_HS_ULPI_D4 = 10ul, }; 
    };

    struct PB12 
    {
      constexpr static Port kPort = Port::B;
      constexpr static std::uint32_t kPin = 12u;
      enum { CAN2_RX = 9ul,  I2C2_SMBA = 4ul,  I2S2_WS = 5ul,  SAI1_SCK_B = 6ul,  SPI2_NSS = 5ul,  TIM1_BKIN = 1ul,  USART3_CK = 7ul,  USB_OTG_HS_ID = 12ul,  USB_OTG_HS_ULPI_D5 = 10ul, }; 
    };

    struct PB13 
    {
      constexpr static Port kPort = Port::B;
      constexpr static std::uint32_t kPin = 13u;
      enum { CAN2_TX = 9ul,  I2S2_CK = 5ul,  SPI2_SCK = 5ul,  TIM1_CH1N = 1ul,  USART3_CTS = 7ul,  USB_OTG_HS_ULPI_D6 = 10ul, }; 
    };

    struct PB14 
    {
      constexpr static Port kPort = Port::B;
      constexpr static std::uint32_t kPin = 14u;
      enum { SPI2_MISO = 5ul,  TIM12_CH1 = 9ul,  TIM1_CH2N = 1ul,  TIM8_CH2N = 3ul,  USART3_RTS = 7ul,  USB_OTG_HS_DM = 12ul, }; 
    };

    struct PB15 
    {
      constexpr static Port kPort = Port::B;
      constexpr static std::uint32_t kPin = 15u;
      enum { I2S2_SD = 5ul,  RTC_REFIN = 0ul,  SPI2_MOSI = 5ul,  TIM12_CH2 = 9ul,  TIM1_CH3N = 1ul,  TIM8_CH3N = 3ul,  USB_OTG_HS_DP = 12ul, }; 
    };

    struct PB2  
    {
      constexpr static Port kPort = Port::B;
      constexpr static std::uint32_t kPin = 2u;
      enum { I2S3_SD = 7ul,  QUADSPI_CLK = 9ul,  SAI1_SD_A = 6ul,  SDIO_CK = 12ul,  SPI3_MOSI = 7ul,  TIM2_CH4 = 1ul,  USB_OTG_HS_ULPI_D4 = 10ul, }; 
    };

    struct PB3  
    {
      constexpr static Port kPort = Port::B;
      constexpr static std::uint32_t kPin = 3u;
      enum { I2C2_SDA = 4ul,  I2S1_CK = 5ul,  I2S3_CK = 6ul,  SPI1_SCK = 5ul,  SPI3_SCK = 6ul,  SYS_JTDO_SWO = 0ul,  TIM2_CH2 = 1ul, }; 
    };

    struct PB4  
    {
      constexpr static Port kPort = Port::B;
      constexpr static std::uint32_t kPin = 4u;
      enum { I2C3_SDA = 4ul,  I2S2_WS = 7ul,  SPI1_MISO = 5ul,  SPI2_NSS = 7ul,  SPI3_MISO = 6ul,  SYS_JTRST = 0ul,  TIM3_CH1 = 2ul, }; 
    };

    struct PB5  
    {
      constexpr static Port kPort = Port::B;
      constexpr static std::uint32_t kPin = 5u;
      enum { CAN2_RX = 9ul,  DCMI_D10 = 13ul,  FMC_SDCKE1 = 12ul,  I2C1_SMBA = 4ul,  I2S1_SD = 5ul,  I2S3_SD = 6ul,  SPI1_MOSI = 5ul,  SPI3_MOSI = 6ul,  TIM3_CH2 = 2ul,  USB_OTG_HS_ULPI_D7 = 10ul, }; 
    };

    struct PB6  
    {
      constexpr static Port kPort = Port::B;
      constexpr static std::uint32_t kPin = 6u;
      enum { CAN2_TX = 9ul,  CEC = 3ul,  DCMI_D5 = 13ul,  FMC_SDNE1 = 12ul,  I2C1_SCL = 4ul,  QUADSPI_BK1_NCS = 10ul,  TIM4_CH1 = 2ul,  USART1_TX = 7ul, }; 
    };

    struct PB7  
    {
      constexpr static Port kPort = Port::B;
      constexpr static std::uint32_t kPin = 7u;
      enum { DCMI_VSYNC = 13ul,  FMC_NL = 12ul,  I2C1_SDA = 4ul,  SPDIFRX_IN0 = 8ul,  TIM4_CH2 = 2ul,  USART1_RX = 7ul, }; 
    };

    struct PB8  
    {
      constexpr static Port kPort = Port::B;
      constexpr static std::uint32_t kPin = 8u;
      enum { CAN1_RX = 9ul,  DCMI_D6 = 13ul,  I2C1_SCL = 4ul,  SDIO_D4 = 12ul,  TIM10_CH1 = 3ul,  TIM2_CH1 = 1ul,  TIM2_ETR = 1ul,  TIM4_CH3 = 2ul, }; 
    };

    struct PB9  
    {
      constexpr static Port kPort = Port::B;
      constexpr static std::uint32_t kPin = 9u;
      enum { CAN1_TX = 9ul,  DCMI_D7 = 13ul,  I2C1_SDA = 4ul,  I2S2_WS = 5ul,  SAI1_FS_B = 6ul,  SDIO_D5 = 12ul,  SPI2_NSS = 5ul,  TIM11_CH1 = 3ul,  TIM2_CH2 = 1ul,  TIM4_CH4 = 2ul, }; 
    };

    struct PC0  
    {
      constexpr static Port kPort = Port::C;
      constexpr static std::uint32_t kPin = 0u;
      enum { FMC_SDNWE = 12ul,  SAI1_MCLK_B = 6ul,  USB_OTG_HS_ULPI_STP = 10ul, }; 
    };

    struct PC1  
    {
      constexpr static Port kPort = Port::C;
      constexpr static std::uint32_t kPin = 1u;
      enum { I2S2_SD = 7ul,  I2S3_SD = 5ul,  SAI1_SD_A = 6ul,  SPI2_MOSI = 7ul,  SPI3_MOSI = 5ul, }; 
    };

    struct PC10 
    {
      constexpr static Port kPort = Port::C;
      constexpr static std::uint32_t kPin = 10u;
      enum { DCMI_D8 = 13ul,  I2S3_CK = 6ul,  QUADSPI_BK1_IO1 = 9ul,  SDIO_D2 = 12ul,  SPI3_SCK = 6ul,  UART4_TX = 8ul,  USART3_TX = 7ul, }; 
    };

    struct PC11 
    {
      constexpr static Port kPort = Port::C;
      constexpr static std::uint32_t kPin = 11u;
      enum { DCMI_D4 = 13ul,  QUADSPI_BK2_NCS = 9ul,  SDIO_D3 = 12ul,  SPI3_MISO = 6ul,  UART4_RX = 8ul,  USART3_RX = 7ul, }; 
    };

    struct PC12 
    {
      constexpr static Port kPort = Port::C;
      constexpr static std::uint32_t kPin = 12u;
      enum { DCMI_D9 = 13ul,  I2C2_SDA = 4ul,  I2S3_SD = 6ul,  SDIO_CK = 12ul,  SPI3_MOSI = 6ul,  UART5_TX = 8ul,  USART3_CK = 7ul, }; 
    };

    struct PC13 
    {
      constexpr static Port kPort = Port::C;
      constexpr static std::uint32_t kPin = 13u; 
    };

    struct PC14 
    {
      constexpr static Port kPort = Port::C;
      constexpr static std::uint32_t kPin = 14u;
    };

    struct PC15 
    {
      constexpr static Port kPort = Port::C;
      constexpr static std::uint32_t kPin = 15u; 
    };

    struct PC2  
    {
      constexpr static Port kPort = Port::C;
      constexpr static std::uint32_t kPin = 2u;
      enum { FMC_SDNE0 = 12ul,  SPI2_MISO = 5ul,  USB_OTG_HS_ULPI_DIR = 10ul, }; 
    };

    struct PC3  
    {
      constexpr static Port kPort = Port::C;
      constexpr static std::uint32_t kPin = 3u;
      enum { FMC_SDCKE0 = 12ul,  I2S2_SD = 5ul,  SPI2_MOSI = 5ul,  USB_OTG_HS_ULPI_NXT = 10ul, }; 
    };

    struct PC4  
    {
      constexpr static Port kPort = Port::C;
      constexpr static std::uint32_t kPin = 4u;
      enum { FMC_SDNE0 = 12ul,  I2S1_MCK = 5ul,  SPDIFRX_IN2 = 8ul, }; 
    };

    struct PC5  
    {
      constexpr static Port kPort = Port::C;
      constexpr static std::uint32_t kPin = 5u;
      enum { FMC_SDCKE0 = 12ul,  SPDIFRX_IN3 = 8ul,  USART3_RX = 7ul, }; 
    };

    struct PC6  
    {
      constexpr static Port kPort = Port::C;
      constexpr static std::uint32_t kPin = 6u;
      enum { DCMI_D0 = 13ul,  FMPI2C1_SCL = 4ul,  I2S2_MCK = 5ul,  SDIO_D6 = 12ul,  TIM3_CH1 = 2ul,  TIM8_CH1 = 3ul,  USART6_TX = 8ul, }; 
    };

    struct PC7  
    {
      constexpr static Port kPort = Port::C;
      constexpr static std::uint32_t kPin = 7u;
      enum { DCMI_D1 = 13ul,  FMPI2C1_SDA = 4ul,  I2S2_CK = 5ul,  I2S3_MCK = 6ul,  SDIO_D7 = 12ul,  SPDIFRX_IN1 = 7ul,  SPI2_SCK = 5ul,  TIM3_CH2 = 2ul,  TIM8_CH2 = 3ul,  USART6_RX = 8ul, }; 
    };

    struct PC8  
    {
      constexpr static Port kPort = Port::C;
      constexpr static std::uint32_t kPin = 8u;
      enum { DCMI_D2 = 13ul,  SDIO_D0 = 12ul,  SYS_TRACED0 = 0ul,  TIM3_CH3 = 2ul,  TIM8_CH3 = 3ul,  UART5_RTS = 7ul,  USART6_CK = 8ul, }; 
    };

    struct PC9  
    {
      constexpr static Port kPort = Port::C;
      constexpr static std::uint32_t kPin = 9u;
      enum { DCMI_D3 = 13ul,  I2C3_SDA = 4ul,  I2S_CKIN = 5ul,  QUADSPI_BK1_IO0 = 9ul,  RCC_MCO_2 = 0ul,  SDIO_D1 = 12ul,  TIM3_CH4 = 2ul,  TIM8_CH4 = 3ul,  UART5_CTS = 7ul, }; 
    };

    struct PD0  
    {
      constexpr static Port kPort = Port::D;
      constexpr static std::uint32_t kPin = 0u;
      enum { CAN1_RX = 9ul,  FMC_D2 = 12ul,  FMC_DA2 = 12ul,  I2S3_SD = 6ul,  SPI3_MOSI = 6ul,  SPI4_MISO = 5ul, }; 
    };

    struct PD1  
    {
      constexpr static Port kPort = Port::D;
      constexpr static std::uint32_t kPin = 1u;
      enum { CAN1_TX = 9ul,  FMC_D3 = 12ul,  FMC_DA3 = 12ul,  I2S2_WS = 7ul,  SPI2_NSS = 7ul, }; 
    };

    struct PD10 
    {
      constexpr static Port kPort = Port::D;
      constexpr static std::uint32_t kPin = 10u;
      enum { FMC_D15 = 12ul,  FMC_DA15 = 12ul,  USART3_CK = 7ul, }; 
    };

    struct PD11 
    {
      constexpr static Port kPort = Port::D;
      constexpr static std::uint32_t kPin = 11u;
      enum { FMC_A16 = 12ul,  FMPI2C1_SMBA = 4ul,  QUADSPI_BK1_IO0 = 9ul,  SAI2_SD_A = 10ul,  USART3_CTS = 7ul, }; 
    };

    struct PD12 
    {
      constexpr static Port kPort = Port::D;
      constexpr static std::uint32_t kPin = 12u;
      enum { FMC_A17 = 12ul,  FMPI2C1_SCL = 4ul,  QUADSPI_BK1_IO1 = 9ul,  SAI2_FS_A = 10ul,  TIM4_CH1 = 2ul,  USART3_RTS = 7ul, }; 
    };

    struct PD13 
    {
      constexpr static Port kPort = Port::D;
      constexpr static std::uint32_t kPin = 13u;
      enum { FMC_A18 = 12ul,  FMPI2C1_SDA = 4ul,  QUADSPI_BK1_IO3 = 9ul,  SAI2_SCK_A = 10ul,  TIM4_CH2 = 2ul, }; 
    };

    struct PD14 
    {
      constexpr static Port kPort = Port::D;
      constexpr static std::uint32_t kPin = 14u;
      enum { FMC_D0 = 12ul,  FMC_DA0 = 12ul,  FMPI2C1_SCL = 4ul,  SAI2_SCK_A = 8ul,  TIM4_CH3 = 2ul, }; 
    };

    struct PD15 
    {
      constexpr static Port kPort = Port::D;
      constexpr static std::uint32_t kPin = 15u;
      enum { FMC_D1 = 12ul,  FMC_DA1 = 12ul,  FMPI2C1_SDA = 4ul,  TIM4_CH4 = 2ul, }; 
    };

    struct PD2  
    {
      constexpr static Port kPort = Port::D;
      constexpr static std::uint32_t kPin = 2u;
      enum { DCMI_D11 = 13ul,  SDIO_CMD = 12ul,  TIM3_ETR = 2ul,  UART5_RX = 8ul, }; 
    };

    struct PD3  
    {
      constexpr static Port kPort = Port::D;
      constexpr static std::uint32_t kPin = 3u;
      enum { DCMI_D5 = 13ul,  FMC_CLK = 12ul,  I2S2_CK = 5ul,  QUADSPI_CLK = 9ul,  SPI2_SCK = 5ul,  SYS_TRACED1 = 0ul,  USART2_CTS = 7ul, }; 
    };

    struct PD4  
    {
      constexpr static Port kPort = Port::D;
      constexpr static std::uint32_t kPin = 4u;
      enum { FMC_NOE = 12ul,  USART2_RTS = 7ul, }; 
    };

    struct PD5  
    {
      constexpr static Port kPort = Port::D;
      constexpr static std::uint32_t kPin = 5u;
      enum { FMC_NWE = 12ul,  USART2_TX = 7ul, }; 
    };

    struct PD6  
    {
      constexpr static Port kPort = Port::D;
      constexpr static std::uint32_t kPin = 6u;
      enum { DCMI_D10 = 13ul,  FMC_NWAIT = 12ul,  I2S3_SD = 5ul,  SAI1_SD_A = 6ul,  SPI3_MOSI = 5ul,  USART2_RX = 7ul, }; 
    };

    struct PD7  
    {
      constexpr static Port kPort = Port::D;
      constexpr static std::uint32_t kPin = 7u;
      enum { FMC_NE1 = 12ul,  SPDIFRX_IN0 = 8ul,  USART2_CK = 7ul, }; 
    };

    struct PD8  
    {
      constexpr static Port kPort = Port::D;
      constexpr static std::uint32_t kPin = 8u;
      enum { FMC_D13 = 12ul,  FMC_DA13 = 12ul,  SPDIFRX_IN1 = 8ul,  USART3_TX = 7ul, }; 
    };

    struct PD9  
    {
      constexpr static Port kPort = Port::D;
      constexpr static std::uint32_t kPin = 9u;
      enum { FMC_D14 = 12ul,  FMC_DA14 = 12ul,  USART3_RX = 7ul, }; 
    };

    struct PE0  
    {
      constexpr static Port kPort = Port::E;
      constexpr static std::uint32_t kPin = 0u;
      enum { DCMI_D2 = 13ul,  FMC_NBL0 = 12ul,  SAI2_MCLK_A = 10ul,  TIM4_ETR = 2ul, }; 
    };

    struct PE1  
    {
      constexpr static Port kPort = Port::E;
      constexpr static std::uint32_t kPin = 1u;
      enum { DCMI_D3 = 13ul,  FMC_NBL1 = 12ul, }; 
    };

    struct PE10 
    {
      constexpr static Port kPort = Port::E;
      constexpr static std::uint32_t kPin = 10u;
      enum { FMC_D7 = 12ul,  FMC_DA7 = 12ul,  QUADSPI_BK2_IO3 = 10ul,  TIM1_CH2N = 1ul, }; 
    };

    struct PE11 
    {
      constexpr static Port kPort = Port::E;
      constexpr static std::uint32_t kPin = 11u;
      enum { FMC_D8 = 12ul,  FMC_DA8 = 12ul,  SAI2_SD_B = 10ul,  SPI4_NSS = 5ul,  TIM1_CH2 = 1ul, }; 
    };

    struct PE12 
    {
      constexpr static Port kPort = Port::E;
      constexpr static std::uint32_t kPin = 12u;
      enum { FMC_D9 = 12ul,  FMC_DA9 = 12ul,  SAI2_SCK_B = 10ul,  SPI4_SCK = 5ul,  TIM1_CH3N = 1ul, }; 
    };

    struct PE13 
    {
      constexpr static Port kPort = Port::E;
      constexpr static std::uint32_t kPin = 13u;
      enum { FMC_D10 = 12ul,  FMC_DA10 = 12ul,  SAI2_FS_B = 10ul,  SPI4_MISO = 5ul,  TIM1_CH3 = 1ul, }; 
    };

    struct PE14 
    {
      constexpr static Port kPort = Port::E;
      constexpr static std::uint32_t kPin = 14u;
      enum { FMC_D11 = 12ul,  FMC_DA11 = 12ul,  SAI2_MCLK_B = 10ul,  SPI4_MOSI = 5ul,  TIM1_CH4 = 1ul, }; 
    };

    struct PE15 
    {
      constexpr static Port kPort = Port::E;
      constexpr static std::uint32_t kPin = 15u;
      enum { FMC_D12 = 12ul,  FMC_DA12 = 12ul,  TIM1_BKIN = 1ul, }; 
    };

    struct PE2  
    {
      constexpr static Port kPort = Port::E;
      constexpr static std::uint32_t kPin = 2u;
      enum { FMC_A23 = 12ul,  QUADSPI_BK1_IO2 = 9ul,  SAI1_MCLK_A = 6ul,  SPI4_SCK = 5ul,  SYS_TRACECLK = 0ul, }; 
    };

    struct PE3  
    {
      constexpr static Port kPort = Port::E;
      constexpr static std::uint32_t kPin = 3u;
      enum { FMC_A19 = 12ul,  SAI1_SD_B = 6ul,  SYS_TRACED0 = 0ul, }; 
    };

    struct PE4  
    {
      constexpr static Port kPort = Port::E;
      constexpr static std::uint32_t kPin = 4u;
      enum { DCMI_D4 = 13ul,  FMC_A20 = 12ul,  SAI1_FS_A = 6ul,  SPI4_NSS = 5ul,  SYS_TRACED1 = 0ul, }; 
    };

    struct PE5  
    {
      constexpr static Port kPort = Port::E;
      constexpr static std::uint32_t kPin = 5u;
      enum { DCMI_D6 = 13ul,  FMC_A21 = 12ul,  SAI1_SCK_A = 6ul,  SPI4_MISO = 5ul,  SYS_TRACED2 = 0ul,  TIM9_CH1 = 3ul, }; 
    };

    struct PE6  
    {
      constexpr static Port kPort = Port::E;
      constexpr static std::uint32_t kPin = 6u;
      enum { DCMI_D7 = 13ul,  FMC_A22 = 12ul,  SAI1_SD_A = 6ul,  SPI4_MOSI = 5ul,  SYS_TRACED3 = 0ul,  TIM9_CH2 = 3ul, }; 
    };

    struct PE7  
    {
      constexpr static Port kPort = Port::E;
      constexpr static std::uint32_t kPin = 7u;
      enum { FMC_D4 = 12ul,  FMC_DA4 = 12ul,  QUADSPI_BK2_IO0 = 10ul,  TIM1_ETR = 1ul,  UART5_RX = 8ul, }; 
    };

    struct PE8  
    {
      constexpr static Port kPort = Port::E;
      constexpr static std::uint32_t kPin = 8u;
      enum { FMC_D5 = 12ul,  FMC_DA5 = 12ul,  QUADSPI_BK2_IO1 = 10ul,  TIM1_CH1N = 1ul,  UART5_TX = 8ul, }; 
    };

    struct PE9  
    {
      constexpr static Port kPort = Port::E;
      constexpr static std::uint32_t kPin = 9u;
      enum { FMC_D6 = 12ul,  FMC_DA6 = 12ul,  QUADSPI_BK2_IO2 = 10ul,  TIM1_CH1 = 1ul, }; 
    };

    struct PF0  
    {
      constexpr static Port kPort = Port::F;
      constexpr static std::uint32_t kPin = 0u;
      enum { FMC_A0 = 12ul,  I2C2_SDA = 4ul, }; 
    };

    struct PF1  
    {
      constexpr static Port kPort = Port::F;
      constexpr static std::uint32_t kPin = 1u;
      enum { FMC_A1 = 12ul,  I2C2_SCL = 4ul, }; 
    };

    struct PF10 
    {
      constexpr static Port kPort = Port::F;
      constexpr static std::uint32_t kPin = 10u;
      enum { DCMI_D11 = 13ul, }; 
    };

    struct PF11 
    {
      constexpr static Port kPort = Port::F;
      constexpr static std::uint32_t kPin = 11u;
      enum { DCMI_D12 = 13ul,  FMC_SDNRAS = 12ul,  SAI2_SD_B = 10ul, }; 
    };

    struct PF12 
    {
      constexpr static Port kPort = Port::F;
      constexpr static std::uint32_t kPin = 12u;
      enum { FMC_A6 = 12ul, }; 
    };

    struct PF13 
    {
      constexpr static Port kPort = Port::F;
      constexpr static std::uint32_t kPin = 13u;
      enum { FMC_A7 = 12ul,  FMPI2C1_SMBA = 4ul, }; 
    };

    struct PF14 
    {
      constexpr static Port kPort = Port::F;
      constexpr static std::uint32_t kPin = 14u;
      enum { FMC_A8 = 12ul,  FMPI2C1_SCL = 4ul, }; 
    };

    struct PF15 
    {
      constexpr static Port kPort = Port::F;
      constexpr static std::uint32_t kPin = 15u;
      enum { FMC_A9 = 12ul,  FMPI2C1_SDA = 4ul, }; 
    };

    struct PF2  
    {
      constexpr static Port kPort = Port::F;
      constexpr static std::uint32_t kPin = 2u;
      enum { FMC_A2 = 12ul,  I2C2_SMBA = 4ul, }; 
    };

    struct PF3  
    {
      constexpr static Port kPort = Port::F;
      constexpr static std::uint32_t kPin = 3u;
      enum { FMC_A3 = 12ul, }; 
    };

    struct PF4  
    {
      constexpr static Port kPort = Port::F;
      constexpr static std::uint32_t kPin = 4u;
      enum { FMC_A4 = 12ul, }; 
    };

    struct PF5  
    {
      constexpr static Port kPort = Port::F;
      constexpr static std::uint32_t kPin = 5u;
      enum { FMC_A5 = 12ul, }; 
    };

    struct PF6  
    {
      constexpr static Port kPort = Port::F;
      constexpr static std::uint32_t kPin = 6u;
      enum { QUADSPI_BK1_IO3 = 9ul,  SAI1_SD_B = 6ul,  TIM10_CH1 = 3ul, }; 
    };

    struct PF7  
    {
      constexpr static Port kPort = Port::F;
      constexpr static std::uint32_t kPin = 7u;
      enum { QUADSPI_BK1_IO2 = 9ul,  SAI1_MCLK_B = 6ul,  TIM11_CH1 = 3ul, }; 
    };

    struct PF8  
    {
      constexpr static Port kPort = Port::F;
      constexpr static std::uint32_t kPin = 8u;
      enum { QUADSPI_BK1_IO0 = 10ul,  SAI1_SCK_B = 6ul,  TIM13_CH1 = 9ul, }; 
    };

    struct PF9  
    {
      constexpr static Port kPort = Port::F;
      constexpr static std::uint32_t kPin = 9u;
      enum { QUADSPI_BK1_IO1 = 10ul,  SAI1_FS_B = 6ul,  TIM14_CH1 = 9ul, }; 
    };

    struct PG0  
    {
      constexpr static Port kPort = Port::G;
      constexpr static std::uint32_t kPin = 0u;
      enum { FMC_A10 = 12ul, }; 
    };

    struct PG1  
    {
      constexpr static Port kPort = Port::G;
      constexpr static std::uint32_t kPin = 1u;
      enum { FMC_A11 = 12ul, }; 
    };

    struct PG10 
    {
      constexpr static Port kPort = Port::G;
      constexpr static std::uint32_t kPin = 10u;
      enum { DCMI_D2 = 13ul,  FMC_NE3 = 12ul,  SAI2_SD_B = 10ul, }; 
    };

    struct PG11 
    {
      constexpr static Port kPort = Port::G;
      constexpr static std::uint32_t kPin = 11u;
      enum { DCMI_D3 = 13ul,  SPDIFRX_IN0 = 7ul,  SPI4_SCK = 6ul, }; 
    };

    struct PG12 
    {
      constexpr static Port kPort = Port::G;
      constexpr static std::uint32_t kPin = 12u;
      enum { FMC_NE4 = 12ul,  SPDIFRX_IN1 = 7ul,  SPI4_MISO = 6ul,  USART6_RTS = 8ul, }; 
    };

    struct PG13 
    {
      constexpr static Port kPort = Port::G;
      constexpr static std::uint32_t kPin = 13u;
      enum { FMC_A24 = 12ul,  SPI4_MOSI = 6ul,  SYS_TRACED2 = 0ul,  USART6_CTS = 8ul, }; 
    };

    struct PG14 
    {
      constexpr static Port kPort = Port::G;
      constexpr static std::uint32_t kPin = 14u;
      enum { FMC_A25 = 12ul,  QUADSPI_BK2_IO3 = 9ul,  SPI4_NSS = 6ul,  SYS_TRACED3 = 0ul,  USART6_TX = 8ul, }; 
    };

    struct PG15 
    {
      constexpr static Port kPort = Port::G;
      constexpr static std::uint32_t kPin = 15u;
      enum { DCMI_D13 = 13ul,  FMC_SDNCAS = 12ul,  USART6_CTS = 8ul, }; 
    };

    struct PG2  
    {
      constexpr static Port kPort = Port::G;
      constexpr static std::uint32_t kPin = 2u;
      enum { FMC_A12 = 12ul, }; 
    };

    struct PG3  
    {
      constexpr static Port kPort = Port::G;
      constexpr static std::uint32_t kPin = 3u;
      enum { FMC_A13 = 12ul, }; 
    };

    struct PG4  
    {
      constexpr static Port kPort = Port::G;
      constexpr static std::uint32_t kPin = 4u;
      enum { FMC_A14 = 12ul,  FMC_BA0 = 12ul, }; 
    };

    struct PG5  
    {
      constexpr static Port kPort = Port::G;
      constexpr static std::uint32_t kPin = 5u;
      enum { FMC_A15 = 12ul,  FMC_BA1 = 12ul, }; 
    };

    struct PG6  
    {
      constexpr static Port kPort = Port::G;
      constexpr static std::uint32_t kPin = 6u;
      enum { DCMI_D12 = 13ul,  QUADSPI_BK1_NCS = 10ul, }; 
    };

    struct PG7  
    {
      constexpr static Port kPort = Port::G;
      constexpr static std::uint32_t kPin = 7u;
      enum { DCMI_D13 = 13ul,  FMC_INT3 = 12ul,  USART6_CK = 8ul, }; 
    };

    struct PG8  
    {
      constexpr static Port kPort = Port::G;
      constexpr static std::uint32_t kPin = 8u;
      enum { FMC_SDCLK = 12ul,  SPDIFRX_IN2 = 7ul,  USART6_RTS = 8ul, }; 
    };

    struct PG9  
    {
      constexpr static Port kPort = Port::G;
      constexpr static std::uint32_t kPin = 9u;
      enum { DCMI_VSYNC = 13ul,  FMC_NCE3 = 12ul,  FMC_NE2 = 12ul,  QUADSPI_BK2_IO2 = 9ul,  SAI2_FS_B = 10ul,  SPDIFRX_IN3 = 7ul,  USART6_RX = 8ul, }; 
    };

    struct PH0  
    {
      constexpr static Port kPort = Port::H;
      constexpr static std::uint32_t kPin = 0u;
    };

    struct PH1  
    {
      constexpr static Port kPort = Port::H;
      constexpr static std::uint32_t kPin = 1u; 
    };
    
  } // inline namespace 
} // namespace mpp::io 
 