# ** Project Description: Digital-Clock-and-Stop-Watch **

**Introduction:**
#Project_Description: Programmable Digital Clock & Stop Watch
The Programmable Digital Clock is a versatile timekeeping device built around the ATmega32 microcontroller. It features a user-friendly interface using an LCD display and five push buttons, allowing users to display and edit time and date information effortlessly and also can be used as stop watch to give alarm when finish counting.

#Key_Components:
ATmega32 Microcontroller
LCD Display
Six Push Buttons (2 Mode switch, Increase, Decrease, Move Right, Move Left)

#Operation_Modes:
(1)Normal Counting Mode:
-The clock displays real-time data, including seconds, minutes, hours, days, and months, on the LCD screen.
-Users can move to the edit mode using the "Mode" button.

(2)Edit Mode:
-Activated by pressing the "OK(Up)" button in Normal Counting Mode
OR by pressing the "OK(Down)" button in Stop Watch Mode.
-In Edit Mode, users can fine-tune the time and date settings.
-The "Right" and "Left" buttons navigate through different units (e.g., from seconds to minutes).
-The "Up" and "Down" buttons adjust the values of the selected unit.
-Pressing "OK" confirms the changes and returns to Normal Counting Mode.

(3)Stop Watch Mode:
-Users can put the target time (at edit mode) .
-When the user press on "Ok(Down)" Mode Button it will counting from target time to 0 time and when reach to zero it will give alarm and stop counting

#Software_and_Drivers:
-The project uses standard AVR libraries such as STD_TYPES.h and BIT_MATH.h.

-MCAL (Microcontroller Abstraction Layer) includes a
*TIMER0 driver (TIMER0_Init.h) in CTC Mode for timekeeping and
*DIO Driver (DIO_Int.h) for interacting with the LCD.
*Two External Interrupts (One For Ok(Up) Button and Another For Ok(Down) Button).

-The HAL (Hardware Abstraction Layer) includes an LCD driver for displaying information on the LCD screen (LCD_Init.h).

#Functionality:
-The ATmega32 microcontroller acts as the brain of the system, handling user inputs and updating the display.
-The LCD display provides a clear and readable interface for time and date information.
-The push buttons allow users to switch between modes, navigate, and edit the settings intuitively.


