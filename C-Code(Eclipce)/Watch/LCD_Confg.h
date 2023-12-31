/*
 * LCD_Confg.h
 *
 *  Created on: ١٢‏/٠٩‏/٢٠٢٣
 *      Author: vmk9p-'
 */

#ifndef LCD_CONFG_H_
#define LCD_CONFG_H_

/*************** You Will Put The BIT_MODE  ****************************/
/****************** You have 2 Choices  ********************************/
/************** (1)BIT_MODE4 ********(2)BIT_MODE8 **********************/
/***********************************************************************/
#define BIT_MODE	BIT_MODE4
/***********************************************************************/

/***********************************************************************/
/**************** You Will Put The LCD_DATA_PORT  **********************/
/**************** You have 4 Choices ***********************************/
/**************** (1)DIO_PORTA ********(2)DIO_PORTA*********************/
/**************** (1)DIO_PORTC ********(2)DIO_PORTD*********************/
/***********************************************************************/
#define DATA_PORT	DIO_PORTA
/***********************************************************************/
/***********If 4 Bit Mode I Will Select The Last Four Bits *************/
/***********************************************************************/


/***********************************************************************/
/*************** You Will Put The LCD_CONTROL_PORT AND PINS ************/
/**************** You have 4 Choices (For THE PORT) ********************/
/**************** (1)DIO_PORTA ********(2)DIO_PORTA*********************/
/**************** (1)DIO_PORTC ********(2)DIO_PORTD*********************/
/***********************************************************************/
/***********************************************************************/
#define CONTROL_PORT			DIO_PORTC
#define REG_SELC_RS				DIO_PIN0
#define Read_Write_SELEC_RW		DIO_PIN1
#define ENABLE_SIG				DIO_PIN2
/***********************************************************************/
/***********************************************************************/

/* There Is Function Which You Give It The Float Num And It Print it ***/
/**************** It Need To Set The Number Of Floating Numbers  *******/
/**************** You have 3 Choices ***********************************/
/**************** (1) 1 ************************************************/
/**************** (2) 2 ************************************************/
/**************** (3) 3 ************************************************/
#define FLOAT_NUMS	0
/***********************************************************************/



#endif /* LCD_CONFG_H_ */
