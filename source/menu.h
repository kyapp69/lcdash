/*! \file menu.h 
	\brief	The "menu" header file for the LCDash system
*/

#ifndef _MENU_H_
#define _MENU_H_

#include "gauge.h"


#define NOT_PRESSED 0 	/*!< The button was not pressed */
#define RELEASED	1	/*!< The button was released */
#define PRESSED		2	/*!< The button was pressed */



//menus here-------------------------
#define EXIT_MENU				0
#define MENU_MAIN				1
#define MENU_SYSTEM_INFO		2
#define MENU_SYSTEM_SETTINGS	3
#define MENU_BRIGHTNESS			4
#define MENU_GAUGE_SETTINGS		5
#define MENU_SELECT_LAYOUT		6
#define MENU_CHANGE_MINMAX		7
#define MENU_CHANGE_PARAMETER	8
#define MENU_1WIZARD			9
#define MENU_2WIZARD			10
#define MENU_3WIZARD			11
#define MENU_4WIZARD			12
#define MENU_45WIZARD			13
#define MENU_5WIZARD			14
#define MENU_6WIZARD			15
#define MENU_SENSORSETUP		16
#define MENU_CALIBRATE			17
#define MENU_CALIBRATEVSS		18
#define MENU_CHOOSETABLE		19
#define MENU_EDITTABLE			20
#define MENU_TUNING				21





#define SCROLLBAR_WIDTH 5
#define SCROLL_INDICATOR_HEIGHT 4


#define MENU_FIRMWARE_MAX_SIZE	25


/////////////////////////////////////////
/*! 
	Including external unsigned chars for rewritting the eeprom 
	In the menu system the user can rewrite the eeprom when the change there brightness, touch screen calibration, and gauge settings... etc 
*/
/////////////////////////////////////////
//EEMEM unsigned char ee_brightness;
//EEMEM unsigned char ee_brightness_saved;
extern EEMEM unsigned char ee_isCalibrated;








/////////////////////////////////////////
/*! Goes to the main menu */
/////////////////////////////////////////

unsigned char handle_menu(unsigned char menu_id);

unsigned char menu_main(void);
unsigned char menu_system_info();
unsigned char menu_system_settings();
unsigned char menu_brightness();
unsigned char menu_gauge_settings();
unsigned char menu_modify_gauge(char * description, GAUGE * g, unsigned char * alarm);
unsigned char menu_selectLayout();
unsigned char menu_sensorsetup();
unsigned char menu_calibratevss();
unsigned char menu_calibrate();
unsigned char menu_editTable();
unsigned char menu_tuning();
unsigned char menu_editTable();
/////////////////////////////////////////
/*!
   Select Parameter -Lets ask the user which parameter they want for the gauge.
   \param g The gauge to modify
   \param description The text description to display in this menu
   \returns the chosen parameter.
*/
/////////////////////////////////////////
unsigned char menu_selectParameter(GAUGE * g, char * description);


float menu_getNumberFromUser(char * display_msg); //!<Getting a number from the user through a keypad

#endif
