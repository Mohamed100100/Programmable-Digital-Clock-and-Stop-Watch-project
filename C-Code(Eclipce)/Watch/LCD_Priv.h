/*
 * LCD_Priv.h
 *
 *  Created on: ١٢‏/٠٩‏/٢٠٢٣
 *      Author: vmk9p-'
 */

#ifndef LCD_PRIV_H_
#define LCD_PRIV_H_

#define BIT_MODE4	4
#define BIT_MODE8	8


#define END_LINE_1_ADD	(0x0f+1)
#define END_LINE_2_ADD	(0x4f+1)

u8 LCD_u8ReadBusyFlagAndAddress(void);

u32 Get_Power(u8 value ,u8 power);


#endif /* LCD_PRIV_H_ */
