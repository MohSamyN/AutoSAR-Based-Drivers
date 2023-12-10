/*==================================================================================================
* Project      :  
* Platform     : 
* Layer        : AUTOSAR Libraries
* Stack        : -
* Module       : Platform Types
* File Name    : PlatformTypes.h
==================================================================================================*/


#ifndef PLATFORMTYPES_H
#define PLATFORMTYPES_H

/*=================================================================================================
*                                          INCLUDE FILES                                         
* 1) system and project includes
* 2) needed interfaces from external units
* 3) internal and external interfaces from this unit
=================================================================================================*/

/*=================================================================================================
*                                            CONSTANTS                                             
=================================================================================================*/

/*=================================================================================================
*                                        DEFINES AND MACROS                                      
=================================================================================================*/

/*=================================================================================================
*                                              ENUMS                                             
=================================================================================================*/

/*=================================================================================================
*                                  STRUCTURES AND OTHER TYPEDEFS                                
=================================================================================================*/
/**
* The standard AUTOSAR type boolean shall be implemented on basis of an eight bits long unsigned 
* integer.
*/
typedef unsigned char boolean;

/**
* Unsigned 8 bit integer with range of 0..+255 (0x00..0xFF) - 8 bits.
*/
typedef unsigned char uint8;

/**
* Unsigned 16 bit integer with range of 0..+65535 (0x0000..0xFFFF) - 16 bits.
*/
typedef unsigned short uint16;

/**
* Unsigned 32 bit integer with range of 0..+4294967295 (0x00000000..0xFFFFFFFF) - 32 bits.
*/
typedef unsigned int uint32;

/**
* Unsigned 64 bit integer with range of 0..18446744073709551615 
* (0x0000000000000000..0xFFFFFFFFFFFFFFFF) - 64 bits.
*/
typedef unsigned long long uint64;

/**
* Signed 8 bit integer with range of -128 ..+127 (0x80..0x7F) - 7 bits + 1 sign bit.
*/
typedef signed char sint8;

/**
* Signed 16 bit integer with range of -32768 ..+32767 (0x8000..0x7FFF) - 15 bits + 1 sign bit.
*/
typedef signed short sint16;

/**
* Signed 32 bit integer with range of -2147483648.. +2147483647 (0x80000000..0x7FFFFFFF) - 
* 31 bits + 1 sign bit.
*/
typedef signed int sint32;

/**
* Signed 64 bit integer with range of -9223372036854775808..9223372036854775807 
* (0x8000000000000000..0x7FFFFFFFFFFFFFFF) - 63 bits + 1 sign bit.
*/
typedef signed long long sint64;

/**
* 32-bit long floating point data type.
*/
typedef float float32;

/**
* 64-bit long floating point data type.
*/
typedef double float64;

/*=================================================================================================
*                                   GLOBAL VARIABLE DECLARATIONS
=================================================================================================*/

/*=================================================================================================
*                                       FUNCTION PROTOTYPES                                      
=================================================================================================*/

#endif /* PLATFORMTYPES_H */
