/******************************************************************************/
/* Change log                                                                 *
 *
 *
 *
 * Date         Revision    Comments
 * MM/DD/YY
 * --------     ---------   ----------------------------------------------------
 * 07/28/15     1.0_DW0a    Initial project make.
/******************************************************************************/

/******************************************************************************/
/* Contains Functions for PIC initialization
 *
/******************************************************************************/

/******************************************************************************/
/* Files to Include                                                           */
/******************************************************************************/
#include <msp430.h>

#include "USER.h"
#include "SYSTEM.h"

/******************************************************************************/
/* Version variables                                                          */
/******************************************************************************/
const unsigned char Version[]        = CPU_VERSION;
const unsigned char Revision[]       = CPU_REVISION;
const unsigned char Alpha[]          = CPU_ALPHA;
const unsigned char Branch_Version[] = CPU_BRANCH;

/******************************************************************************/
/* User Global Variable Declaration                                           */
/******************************************************************************/

/******************************************************************************/
/* Inline Functions
/******************************************************************************/

/******************************************************************************/
/* Functions
/******************************************************************************/

/******************************************************************************/
/* Init_App
 *
 * The function initializes the application. It sets the pins and pull-ups.
/******************************************************************************/
void Init_App(void)
{
	/*
	 * Disable the GPIO power-on default high-impedance mode
	 * to activate previously configured port settings
	 */
    PM5CTL0 &= ~LOCKLPM5;

    /*~~~~~~~~~~~~~ Red LED ~~~~~~~~~~~~~~~~~*/
    P1DIR |= 0x01;                          // Set P1.0 to output direction
    //RedLEDTris          = OUTPUT;

}

/******************************************************************************/
/* Init_System
 *
 * The function initializes the modules.
/******************************************************************************/
void Init_System(void)
{

}

/*-----------------------------------------------------------------------------/
 End of File
/-----------------------------------------------------------------------------*/
