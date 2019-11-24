/*-----------------------------------------------------------------------------/
 * File: usart.h                                                               /
 * Author: Neraildes                                                           /
 *                                                                             /
 * Revis�o 1.0.0                                                               /
 * Created on 25 de Dezembro de 2017, 11:44                                    /
 * Descri��o:                                                                  /
 *		Fun��es de configura��o e comunica��o serial                           /
 *                                                                             /
 * Revis�o 1.0.1                                                               /
 * Modificado em  18/04/2018, 15:38                                            /
 * Altera��es                                                                  /
 *     - Incluido c�digo para trabalhar com 20Mhz                              /
 -----------------------------------------------------------------------------*/

//#include "global.h"
 //#include "usart.h"

#ifndef USART_H
#define USART_H


#define RX_MAX_WAIT_TIME 30

#define USART_put_enter() USART_putc(13)

#define COMMA 0x2C


void USART_to_Protocol(t_usart_protocol *usart_protocol);
void USART_init(unsigned long baudrate);
void USART_putc(char value);
void USART_put_int(int value);
void USART_put_float24(float value);
void USART_put_long(unsigned long value);
void USART_put_string(char *vetor);
void USART_put_buffer(char *vetor, unsigned int size);
unsigned char USART_input_buffer(void);


#endif
