

#include <avr/io.h>
#include <util/delay.h>
#include "ws2812b.h"
#include "display.h"

typedef struct display_t{
  uint8_t Red;
  uint8_t Green;
  uint8_t Blue;
  uint8_t Pos;
}display_t;

display_t Display;

void Display_Init(void){
  Display.Red=0;
  Display.Green=1;
  Display.Blue=0;
  Display.Pos=0;
}

void Display_Send_Row(uint8_t val){
  for(int i=7;i>=0;i--){
    if(val & (1<<i)){
      WS2812B_Send_Pixel(Display.Red, Display.Green, Display.Blue);
    }else{
      WS2812B_Send_Pixel(0, 0, 0);
    }
  }
}