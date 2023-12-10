/*==================================================================================================
* Project      :  
* Platform     : 
* Layer        : Microcontroller Abstraction Layer
* Stack        : I/O Stack
* Module       : Port Driver
* File Name    : Port.h
==================================================================================================*/


#ifndef PORT_H
#define PORT_H

/*=================================================================================================
*                                          INCLUDE FILES                                         
* 1) system and project includes
* 2) needed interfaces from external units
* 3) internal and external interfaces from this unit
=================================================================================================*/
/**
* Include Platform Types header file.
*/
#include "PlatformTypes.h"

/*=================================================================================================
*                                            CONSTANTS                                             
=================================================================================================*/

/*=================================================================================================
*                                        DEFINES AND MACROS                                      
=================================================================================================*/

/*=================================================================================================
*                                              ENUMS                                             
=================================================================================================*/
/**
 * Possible directions of a port pin. 
 */
typedef enum
{
    /** Sets port pin as input. */
    PORT_PIN_IN,
    /** Sets port pin as output. */
    PORT_PIN_OUT
} Port_PinDirectionType;

/*=================================================================================================
*                                  STRUCTURES AND OTHER TYPEDEFS                                
=================================================================================================*/
/**
 * Type of the external data structure containing the initialization data for this module. 
 */
typedef struct
{
    /** Pin mode (e.g. DIO, ADC, SPI …). */
    uint8 u8PinMode;
    /** Pin direction (input, output). */
    uint8 u8PinDirection;
    /** Pin level init value. */
    uint8 u8PinLevelInitValue;
    /** Pin direction changeable during runtime (STD_ON/STD_OFF). */
    uint8 u8PinDirectionChangeable;
    /** Pin mode changeable during runtime (STD_ON/STD_OFF). */
    uint8 u8PinModeChangeable;
} Port_ConfigType;

/**
 * Data type for the symbolic name of a port pin. 
 */
typedef uint8 Port_PinType;

/**
 * Different port pin modes. 
 */
typedef uint8 Port_PinModeType;

/*=================================================================================================
*                                   GLOBAL VARIABLE DECLARATIONS
=================================================================================================*/

/*=================================================================================================
*                                       FUNCTION PROTOTYPES                                      
=================================================================================================*/
/*************************************************************************************************
 * Service Name       : Port_Init                                                                *
 * Sync/Async         : Synchronous                                                              *
 * Reentrancy         : Non Reentrant                                                            *
 * Parameters (in)    : Config Ptr - Pointer to configuration set                                *
 * Parameters (inout) : None                                                                     *
 * Parameters (out)   : None                                                                     *
 * Return Value       : None                                                                     *
 * Description        : Initializes the Port Driver module                                       *
 *************************************************************************************************/
void Port_Init( 
    const Port_ConfigType* ConfigPtr 
);

/*************************************************************************************************
 * Service Name       : Port_SetPinDirection                                                     *
 * Sync/Async         : Synchronous                                                              *
 * Reentrancy         : Reentrant                                                                *
 * Parameters (in)    : Pin       - Port Pin ID number                                           *
 *                      Direction - Port Pin Direction                                           *
 * Parameters (inout) : None                                                                     *
 * Parameters (out)   : None                                                                     *
 * Return Value       : None                                                                     *
 * Description        : Sets the port pin direction                                              *
 *************************************************************************************************/
void Port_SetPinDirection( 
    Port_PinType Pin, 
    Port_PinDirectionType Direction 
);

/*************************************************************************************************
 * Service Name       : Port_RefreshPortDirection                                                *
 * Sync/Async         : Synchronous                                                              *
 * Reentrancy         : Non Reentrant                                                            *
 * Parameters (in)    : None                                                                     *
 * Parameters (inout) : None                                                                     *
 * Parameters (out)   : None                                                                     *
 * Return Value       : None                                                                     *
 * Description        : Refreshes port direction                                                 *
 *************************************************************************************************/
void Port_RefreshPortDirection( 
    void 
);

/*************************************************************************************************
 * Service Name       : Port_SetPinMode                                                          *
 * Sync/Async         : Synchronous                                                              *
 * Reentrancy         : Reentrant                                                                *
 * Parameters (in)    : Pin  - Port Pin ID number                                                *
 *                      Mode - New Port Pin mode to be set on port pin                           * 
 * Parameters (inout) : None                                                                     *
 * Parameters (out)   : None                                                                     *
 * Return Value       : None                                                                     *
 * Description        : Sets the port pin mode                                                   *
 *************************************************************************************************/
void Port_SetPinMode( 
    Port_PinType Pin, 
    Port_PinModeType Mode 
);

#endif /* PORT_H */
