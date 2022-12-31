/*
 * segment.c
 *
 * Created: 11/6/2022 2:39:27 PM
 *  Author: 20100
 */ 

#include "MEMMAP.h"


void segment1(char n)
{

	char arr[]={0x3f,0x06,0x5b,0x4f,0x66,0x6d,0x7d,0x07,0x7f,0x6f};
	
	PORTA=arr[n]<<1;
	
}

