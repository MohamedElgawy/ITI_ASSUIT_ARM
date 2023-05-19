/******************************************************************************/
/* Auther                : Peter Essam                                       */
/* Version               : V1.0.0                                             */
/* Date                  : 19 -5- 2023                                         */
/******************************************************************************/

/******************************************************************************/
/*              Guard of File with Call on time in .c                         */
/******************************************************************************/

#ifndef MNVIC_PRIVATE_H_
#define MNVIC_PRIVATE_H_

/******************************************************************************/
/*                              Register Definitions                          */
/*----------------------------------------------------------------------------*/
/*    - Developer can't edit in it                                            */
/*    - Design :                                                              */
/*                         -   #define        : YES                           */
/*                         -   Struct         : NO                            */
/*                         -   Union          : NO                            */
/******************************************************************************/

/******************************************************************************/
/*              Object Like Macro For NVIC Base Address Registers              */
/******************************************************************************/

#define MNVIC_BASE_ADDRESS		(0xE000E100)

/******************************************************************************/
/*                         Macros of NVIC Register Map                         */
/******************************************************************************/

/*ISER start from 0xE000E100*/
#define	NVIC_ISER0		(*((volatile u32*)(MNVIC_BASE_ADDRESS+0x000)))
#define	NVIC_ISER1		(*((volatile u32*)(MNVIC_BASE_ADDRESS+0x004))

/*ICER start from 0xE000E180*/
#define	NVIC_ICER0		(*((volatile u32*)(MNVIC_BASE_ADDRESS+0x080)))
#define	NVIC_ICER1		(*((volatile u32*)(MNVIC_BASE_ADDRESS+0x084)))

/*ISPR start from 0xE000E200*/
#define	NVIC_ISPR0		(*((volatile u32*)(MNVIC_BASE_ADDRESS+0x100)))
#define	NVIC_ISPR1		(*((volatile u32*)(MNVIC_BASE_ADDRESS+0x104)))

/*ICPR start from 0xE000E280*/
#define	NVIC_ICPR0		(*((volatile u32*)(MNVIC_BASE_ADDRESS+0x180)))
#define	NVIC_ICPR1		(*((volatile u32*)(MNVIC_BASE_ADDRESS+0x184)))

/*IABR start from 0xE000300*/
#define	NVIC_IABR0		(*((volatile u32*)(MNVIC_BASE_ADDRESS+0x200)))
#define	NVIC_IABR1		(*((volatile u32*)(MNVIC_BASE_ADDRESS+0x204)))

/*IPR start from 0xE000E400*/
#define	NVIC_IPR0  		 (*((volatile u32*)(MNVIC_BASE_ADDRESS+0x300)))
#define NVIC_IPR1        (*((volatile u32*)(MNVIC_BASE_ADDRESS+0x304)))

#define NVIC_STIR        (*((volatile u32*)(MNVIC_BASE_ADDRESS+0xE00)))

#endif /* MNVIC_PRIVATE_H_ */















