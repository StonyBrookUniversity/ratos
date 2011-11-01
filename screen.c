#include "common.h"
uint16 *video = (uint16 *) 0xB8000;
static uint32 screenx = 0;
static uint32 screeny = 0;
#define SCREENWIDTH 80
void putch(char ch)
{
	if(ch == 10 )
	{
		screenx = 0;
		screeny++;
		return;
	}	
	int screenpos = screenx + screeny*SCREENWIDTH;
	uint16 screenvalue = 0;
	uint8 background = 0;
	uint8 foreground = 7;
	screenvalue = background<<12;
	screenvalue = screenvalue | foreground<<8;
	screenvalue = screenvalue | ch;
	video[screenpos] = screenvalue;//ch | attribute;//screenvalue;
	screenx++;
	if(screenx > SCREENWIDTH ){
		screenx = 1;
		screeny++;
	}
}

void clr()
{
	int i,j;
	screenx = 0;
	screeny = 0;
	for(i=0;i<40;i++){
		for(j=0;j<80;j++){
			putch(32);
		}
	}
	screenx = 0;
	screeny = 0;
}

void puts(char *str)
{
	int i = 0;
	while(str[i]!='\0'){
		putch(str[i]);
		i++;
	}
}

int reverseint(int num)
{
	int temp = 0 ;
	while(num)
	{
		temp = temp + num % 10;
		temp = temp * 10;
		num = num / 10;
	}
	return temp/10;
}
	
void putint(int num)
{
	if( num == 0 )
	{
		putch('0');
	}
	int i;
	num = reverseint(num);
	while( num )
	{
		putch((num%10)+48);
		num= num/10;
	}
}		
