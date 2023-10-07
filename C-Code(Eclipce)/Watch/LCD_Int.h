/*
 * LCD_Int.h
 *
 *  Created on: ١٢‏/٠٩‏/٢٠٢٣
 *      Author: vmk9p-'
 */

#ifndef LCD_INT_H_
#define LCD_INT_H_

/***********************************************************************/
/*******************Macros For Command Parameters***********************/
/***********************************************************************/
#define LCD_CURSUROFF_BLINKOFF	   0x0c
#define LCD_CURSUROFF_BLINKON      0x0d
#define LCD_CURSURON_BLINKOFF      0x0e
#define LCD_CURSURON_BLINKON       0x0f
/***********************************************************************/
#define LCD_DECRESEON_SHIFTCUROFF  0x04
#define LCD_DECRESEON_SHIFTCURON   0x05
#define LCD_INCRESEON_SHIFTCUROFF  0x06
#define LCD_INCRESEON_SHIFTCURON   0x07
/***********************************************************************/
#define LCD_CGRAM_INDEX0	0
#define LCD_CGRAM_INDEX1	1
#define LCD_CGRAM_INDEX2	2
#define LCD_CGRAM_INDEX3	3
#define LCD_CGRAM_INDEX4	4
#define LCD_CGRAM_INDEX5	5
#define LCD_CGRAM_INDEX6	6
#define LCD_CGRAM_INDEX7	7
/***********************************************************************/

/*This Function Make The Address Counter Of The DDRAM SET At
 * Certain Value On The Screen */
void LCD_vidGotoxy (u8 Y,u8 X);

/*This Function Take The Hex Of the Command And Write it in The Data
 * Port To be Executed*/
void LCD_vidSendCommand(u8 u8CmdCpy);

/*This Function Define The DATA PORT and CONTROL PINS AND LCD Initiate*/
void LCD_vidInit(void);

/*This Function Take The ASCII Of the Char And Write it in The Data
 * Port To be Printed in the Screen*/
void LCD_vidWriteCharctr(u8 u8DataCpy);

/*This Function Take The Array Of The ASCII Of the Chars And Write it
 * in The Data Port In XY Cell To be Printed in the Screen*/
void LCD_vidWriteStringAtPossition (u8* pu8StringCpy, u8 Y ,u8 X);

/*This Function Take The Array OF ASCII Of the Char And Write it in The Data
 * Port To be Printed in the Screen*/
void LCD_vidWriteString (u8* pu8StringCpy);

/*Clears Entire Display And Sets DDRAM Address To 00H. */
void LCD_vidClearScrean(void);

/*Sets DDRAM Address To 00H In AC And Returns Shifted Display To
 * Its Original Position.
 * The Contents Of DDRAM Remain Unchanged*/
void LCD_vidReturnHome(void);

/*This Function Turn Off The Screen And Save The Last Data */
void LCD_vidTurnOff(void);

/*This Function Turn On  The Screen And Save The Last Data */
void LCD_vidTurnOn(void);

/*This Function Take The Address Of The Special Character And Set It
 * In The CGRAM At The Given Index */
void LCD_vidStoreSpecialChar(u8 *poiPattarn , u8 u8CGRAMIndex);

/*This Function Display The Character Stored In The CGRAM */
void LCD_vidDisplaySpecialChar(u8 u8CGRAMIndex);

/*This Function Take The Float Number And Write it in The Data
 * Port To be Printed in the Screen
 * Don't Forget Casting*/
void LCD_vidWriteflt(f32 f32DataCpy);

#endif /* LCD_INT_H_ */
