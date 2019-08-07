/* 
	Editor: https://www.visualmicro.com/
			visual micro and the arduino ide ignore this code during compilation. this code is automatically maintained by visualmicro, manual changes to this file will be overwritten
			the contents of the _vm sub folder can be deleted prior to publishing a project
			all non-arduino files created by visual micro and all visual studio project or solution files can be freely deleted and are not required to compile a sketch (do not delete your own code!).
			note: debugger breakpoints are stored in '.sln' or '.asln' files, knowledge of last uploaded breakpoints is stored in the upload.vmps.xml file. Both files are required to continue a previous debug session without needing to compile and upload again
	
	Hardware: Arduino/Genuino Uno, Platform=avr, Package=arduino
*/

#define __AVR_ATmega328p__
#define __AVR_ATmega328P__
#define ARDUINO 10809
#define ARDUINO_MAIN
#define F_CPU 16000000L
#define __AVR__
#define F_CPU 16000000L
#define ARDUINO 10809
#define ARDUINO_AVR_UNO
#define ARDUINO_ARCH_AVR
//
//
void selectMode();
void blingMode();
void clickSound();
int toggleSound();
int selectMaxScore();
int selectMaxSpeed();
void introLoop();
void pingPlay();
void printText(int x, int y, const char* color, int size, const char* text);
void gameStart();
void showWinner();
void gameOver();
void endSound();
void paddleSound();
void pointSound();
void selectSound();
void startSound();
void wallSound();
void drawBitmap(const uint8_t *bitmap);
void animateBitmap(const uint8_t *bitmap, uint8_t w, uint8_t h);

#include "pins_arduino.h" 
#include "arduino.h"
#include "DC27_PING_Badge.ino"
