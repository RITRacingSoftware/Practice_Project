//includes, you don't have to worry about these for the project, but they allow you to use functions in other modules
#include "FreeRTOS.h"
#include "task.h"
#include "timers.h"
#include "semphr.h"
#ifdef SIMULATION
#include "BmsSimClient.h"
#endif

#include <stdio.h>
#include <string.h>

#include "HAL_Clock.h"
#include "HAL_Can.h"
#include "HAL_Gpio.h"
#include "HAL_CurrentSensor.h"
#include "HAL_EEPROM.h"
#include "HAL_Watchdog.h"
#include "HAL_SlaveChips.h"
#include "HAL_Uart.h"
#include "HAL_Aio.h"

#include "f29BmsConfig.h"

#include "BatteryModel.h"
#include "CAN.h"
#include "CellBalancer.h"
#include "ChargeMonitor.h"
#include "CurrentMonitor.h"
#include "CurrentSense.h"
#include "DriveMonitor.h"
#include "FaultManager.h"
#include "NTCALUG01T_LUT.h"
#include "PackMonitor.h"
#include "Periodic.h"
#include "SlaveInterface.h"
#include "SOCestimator.h"
#include "StatusLed.h"
#include "TempConverter.h"
#include "TempModel.h"
#include "semphr.h"

/**
 * This is a practice project to get some experience coding in C. The project is to make a
 * simple battery management system. The basic idea will be to read a voltage (a potentiometer
 * connected to the microcontroller) simulating a battery cell, and to turn on an LED when the 
 * voltage of the "battery cell" goes below a threshold.
 * 
 * To do this, I have modified the BMS repository (folder). I got rid of almost everything in the main function
 * so that you can write your code here. You will be able to use the driver funcrtions to control the use the Aio
 * (Analog input/output) module to read the voltage, and the Gpio (General purpose input/output) to turn the LED 
 * on and off. These functions are located in modules in the driver folder, since they are drivers to interact with
 * the microcontroller/hardware. The helpful modules for this project are HAL_Aio and HAL_Gpio
 * 
 * Useful functions:
 * - uint16_t HAL_Aio_read(AIOpin_e pin); (from HAL_Aio.h) (Use AIOpin_VOLTAGE for the pin parameter)
 * - void HAL_Gpio_write(GpioPin_e pin, bool state); (from HAL_Gpio.h) (Use GpioPin_STATUS_LED for the pin parameter)
 * 
 * Note: To get the actual voltage value from the value returned from the HAL_Aio_read function, use the equation:
 * float voltage = ((float)returned_value / 4096) * 3.3V
 * 
 * When you are ready, Cory can help you set up the circuit and connect it to the microcontroller
 * Create a project reading a ADC voltage, turning on a light below a certain voltage
 * Copy HAL_Aio over from VC
 * LED output: PA8
 * Voltage input: PA1? 
*/

int main(int argc, char** argv)
{
    /** 
     * SETUP
    */

    // initialize all HAL stuff
    HAL_Clock_init();
    
    HAL_Gpio_init(); 
    HAL_Aio_init();
    // HAL_Uart_init();

    /**
     * LOOP
    */
    
    for(;;)
    {
        
    }

    return 0;
}


