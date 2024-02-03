#include <avr/io.h>
#include <util/delay.h>
#include "ws2812b.h"
#include "debug.h"

int main(void){

  WS2812B_Init();
  Display_Init();
  debug_init();
  
  int i=0;
  
  while(1){
    
	Display_Send_Row(i);
	Display_Send_Row(i);
	Display_Send_Row(i);
	Display_Send_Row(i);
	Display_Send_Row(i);
	Display_Send_Row(i);
	Display_Send_Row(i);
	Display_Send_Row(i);
	i++;
	_delay_ms(100);
	
  }
}