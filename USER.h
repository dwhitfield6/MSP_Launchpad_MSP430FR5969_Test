/******************************************************************************/
/* Change log                                                                 *
 *
 *
 *
 * Date         Revision    Comments
 * MM/DD/YY
 * --------     ---------   ----------------------------------------------------
 * 10/04/15     3.0_DW0a    Initial project make.
/******************************************************************************/

/******************************************************************************/
/* Files to Include                                                           */
/******************************************************************************/
#ifndef USER_H
#define	USER_H

#include <msp430.h>

#include "USER.h"
#include "SYSTEM.h"

/******************************************************************************/
/* Firmware Version
/******************************************************************************/
#define CPU_VERSION    "63"
#define CPU_REVISION   "00"
#define CPU_ALPHA      ""                 /* use "" for no alpha.  */
#define CPU_BRANCH     "DW0a"                 /* use "" for no branch. */

/******************************************************************************/
/* PCB board
 *
 * This code is used with boards:
 * 1. Catalyst_PCB_revA             (use configuration "PCB_A__pic32MX350F128L")
/******************************************************************************/
#define MSP430FR5969_LAUNCHPAD

/******************************************************************************/
/* Defines                                                                    */
/******************************************************************************/
#define ON 1
#define OFF 0
#define TRUE 1
#define FALSE 0
#define INPUT 1
#define OUTPUT 0
#define PASS 1
#define FAIL 0
#define YES 1
#define NO 0

/******************************************************************************/
/* Pin Defines                                                                */
/******************************************************************************/

/************* Red LED *************/
/* Connected to the red LED indicator */
#define RedLEDTris	TRISDbits.TRISD3
#define RedLED 0x00000008 //RD3

/******************************************************************************/
/* Version variables                                                          */
/******************************************************************************/
extern const unsigned char Version[];
extern const unsigned char Revision[];
extern const unsigned char Alpha[];
extern const unsigned char Branch_Version[];

/******************************************************************************/
/* User Global Variable Declaration                                           */
/******************************************************************************/

/******************************************************************************/
/* Macro Functions                                                            */
/******************************************************************************/

/******************************************************************************/
/* Function prototypes                                                        */
/******************************************************************************/
void Init_App(void);
void Init_System (void);

#endif	/* USER_H */