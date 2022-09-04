/*
 * lifo.h
 *
 *  Created on: Sep 3, 2022
 *      Author: Salma Tarek
 *      Driver : Lifo.h
 */

#ifndef LIFO_H_
#define LIFO_H_
#include"stdio.h"
#include"platform.h"


//Defining User-Configuration Width
#define Element_Width unsigned char
//Define Size of Buffer
#define MAX 10

//Defining Structure Contains LIFO Pramaters
typedef struct {
	unsigned int size;
	unsigned int count;
	Element_Width* head;
	Element_Width* tail;
}SBuff_t;

//Defining Status of LIFO
typedef enum { Lifo_no_error ,
	Lifo_full,
	Lifo_empty,
	Lifo_Null

}Lifo_Status;

//Prototype for User APIs

Lifo_Status Lifo_Is_Empty(SBuff_t * lifo);
Lifo_Status Lifo_Is_Full(SBuff_t * lifo);
Lifo_Status Lifo_init(SBuff_t * lifo , Element_Width * Buf,unsigned int length );







#endif /* LIFO_H_ */
