/**********************************************************************************************************************

 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *         File:  GPIO.h
 *       Module:  GPIO
 *
 *  Description:  header file for GPIO Module    
 *  
 *********************************************************************************************************************/
#ifndef GPIO_H
#define GPIO_H

/**********************************************************************************************************************
 * INCLUDES
 *********************************************************************************************************************/
#include "GPIO_Types.h"
#include "GPIO_Cfg.h"

/**********************************************************************************************************************
 *  GLOBAL CONSTANT MACROS 
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  GLOBAL FUNCTION MACROS
 *********************************************************************************************************************/
/**********************************************************************************************************************
 *  GLOBAL DATA TYPES AND STRUCTURES
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *  GLOBAL DATA PROTOTYPES
 *********************************************************************************************************************/

 
/**********************************************************************************************************************
 *  GLOBAL FUNCTION PROTOTYPES
 *********************************************************************************************************************/
/******************************************************************************
* \Syntax          :                                  
* \Description     :                               
*                                                                             
* \Sync\Async      : Asynchronous                                               
* \Reentrancy      : Reentrant                                             
* \Parameters (in) : None                     
* \Parameters (out): None                                                      
* \Return value:   : None
*******************************************************************************/
void GPIO_CfgPins (GPIO_PinCfg_type * PtrArrPins, uint8 CopyNumPins);
void GPIO_PinMan  (GPIO_PortID_type PortId, GPIO_PinIndex_type PinIndix,GPIO_PinLvl_type PinState);
void GPIO_PinTog  (GPIO_PortID_type PortId, GPIO_PinIndex_type PinIndix);

/*functions to be implemented,, KEIL sim cant mask GPIOs*/
/*
void GPIO_NibMan  (GPIO_PortID_type PortId, GPIO_NibleHL_type NibleSide, uint8 NibleVal);
void GPIO_PortMan (GPIO_PortID_type PortId, uint8 PortVal);
void GPIO_PortMask(GPIO_PortID_type PortId, uint8 ManMask, uint8 MaskVal);
*/
#endif  /* GPIO_H */
/**********************************************************************************************************************
 *  END OF FILE: GPIO.h
 *********************************************************************************************************************/
