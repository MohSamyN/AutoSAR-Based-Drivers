/*==================================================================================================
* Project      :  
* Platform     : 
* Layer        : Microcontroller Abstraction Layer
* Stack        : I/O Stack
* Module       : Port Driver
* File Name    : Port.c
==================================================================================================*/


/*=================================================================================================
*                                          INCLUDE FILES                                         
* 1) system and project includes
* 2) needed interfaces from external units
* 3) internal and external interfaces from this unit
=================================================================================================*/
/**
* Include Port header file.
*/
#include "Port.h"

/*=================================================================================================
*                            LOCAL TYPEDEFS (STRUCTURES, UNIONS, ENUMS)                           
=================================================================================================*/

/*=================================================================================================
*                                           LOCAL MACROS                                             
=================================================================================================*/

/*=================================================================================================
*                                         LOCAL CONSTANTS                                       
=================================================================================================*/

/*=================================================================================================
*                                         LOCAL VARIABLES 
=================================================================================================*/

/*=================================================================================================
*                                         GLOBAL CONSTANTS
=================================================================================================*/

/*=================================================================================================
*                                         GLOBAL VARIABLES
=================================================================================================*/

/*=================================================================================================
*                                    LOCAL FUNCTION PROTOTYPES                                   
=================================================================================================*/

/*=================================================================================================
*                                         LOCAL FUNCTIONS                                       
=================================================================================================*/

/*=================================================================================================
*                                         GLOBAL FUNCTIONS
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
)
{

}

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
)
{

}

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
)
{

}

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
)
{
    
}

/* End of File */
