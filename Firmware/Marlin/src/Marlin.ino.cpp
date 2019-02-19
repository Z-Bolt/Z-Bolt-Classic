# 1 "/var/folders/f8/0nbgjblx40xgg4znkdxpq8hc0000gn/T/tmpWD6Aby"
#include <Arduino.h>
# 1 "/Users/aleksei/Mine/z-bolt-sources/Z-Bolt-Classic/Firmware/Marlin/src/Marlin.ino"
# 37 "/Users/aleksei/Mine/z-bolt-sources/Z-Bolt-Classic/Firmware/Marlin/src/Marlin.ino"
#include "MarlinConfig.h"

 #if ENABLED(ULTRA_LCD)
  #if ENABLED(LCD_I2C_TYPE_PCF8575)
    #include <Wire.h>
    #include <LiquidCrystal_I2C.h>
  #elif ENABLED(LCD_I2C_TYPE_MCP23017) || ENABLED(LCD_I2C_TYPE_MCP23008)
    #include <Wire.h>
    #include <LiquidTWI2.h>
  #elif ENABLED(LCM1602)
    #include <Wire.h>
    #include <LCD.h>
    #include <LiquidCrystal_I2C.h>
  #elif ENABLED(DOGLCD)
    #include <U8glib.h>
  #else
    #include <LiquidCrystal.h>
  #endif
#endif

 #if HAS_DIGIPOTSS
  #include <SPI.h>
#endif

 #if ENABLED(DIGIPOT_I2C)
  #include <Wire.h>
#endif

 #if ENABLED(HAVE_TMCDRIVER)
  #include <SPI.h>
  #include <TMC26XStepper.h>
#endif

 #if ENABLED(HAVE_TMC2130DRIVER)
  #include <SPI.h>
  #include <Trinamic_TMC2130.h>
#endif

 #if ENABLED(HAVE_L6470DRIVER)
  #include <SPI.h>
  #include <L6470.h>
#endif