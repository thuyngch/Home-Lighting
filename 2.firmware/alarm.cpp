/******************************************************************************
 *	Include
 *****************************************************************************/
#include "alarm.h"


/******************************************************************************
 * Global
 *****************************************************************************/


/******************************************************************************
 * Static
 *****************************************************************************/
#define		H_START		17
#define		M_START		30

#define		H_END		22
#define		M_END		00


/******************************************************************************
 *	Function
 *****************************************************************************/
/*
 *  Description:
 *
 *  Input:
 *
 *  Output:
 */
void autoLight(){
	static bool enabled = true;
	if(checkInterval(H_START, M_START, H_END, M_END)){
		if(enabled){
      Serial.println("Auto turn on light based on NTP time.");
			lightOn();
			enabled = false;
		}
	}
	else{
		if(!enabled){
      Serial.println("Auto turn off light based on NTP time.");
      lightOff();
      enabled = true;
		}
	}
}
//-----------------------------------------------------------------------------
/*
 *  Description:
 *
 *  Input:
 *
 *  Output:
 */
//-----------------------------------------------------------------------------
/*
 *  Description:
 *
 *  Input:
 *
 *  Output:
 */
//-----------------------------------------------------------------------------

