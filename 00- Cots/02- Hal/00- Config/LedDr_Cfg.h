/**********************************************************************************************************************

 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *         File:  LedDr_Cfg.h
 *       Module:  -
 *
 *  Description:  <Write File DESCRIPTION here>     
 *  
 *********************************************************************************************************************/
#ifndef LED_DR_CFG_H
#define LED_DR_CFG_H

/**********************************************************************************************************************
 * INCLUDES
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  GLOBAL CINFIG MACROS
 *********************************************************************************************************************/
#define LED_ATTCH_NUM 1
#if  LED_ATTCH_NUM == 1
	#define LED0_PIN  (GPIO_PinIndex_type)P0
	#define LED0_PORT (GPIO_PortID_type)PORTE_ID
#elif LED_ATTCH_NUM > 1
	/*Add the configuration for each pin here*/
	#define INIT_LED_ARR PinCfg[0].PinPort = PORTE_ID; PinCfg[0].PinIndex = P0;\
						 PinCfg[1].PinPort = PORTE_ID; PinCfg[1].PinIndex = P1

#endif
/**********************************************************************************************************************
 *  GLOBAL FUNCTION MACROS
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *  GLOBAL DATA TYPES AND STRUCTURES
 *********************************************************************************************************************/


 
#endif  /* LED_DR_CFG_H */

/**********************************************************************************************************************
 *  END OF FILE: LedDr_Cfg.h
 *********************************************************************************************************************/
