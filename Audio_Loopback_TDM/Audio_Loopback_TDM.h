/*********************************************************************************
Copyright(c) 2019 Analog Devices, Inc. All Rights Reserved.
This software is proprietary and confidential. By using this software you agree
to the terms of the associated Analog Devices License Agreement.
*********************************************************************************/

/*****************************************************************************
 * Audio_Loopback_TDM.h
 *****************************************************************************/

#ifndef __AUDIO_LOOPBACK_TDM_H__
#define __AUDIO_LOOPBACK_TDM_H__

/* Add your custom header content here */

#include <stdint.h>
#include <stdio.h>

/* Enable this macro for continuous audio */
#define ADI_CONFIG_CONTINUOUS_AUDIO		1



#define COUNT 4

#define SPORT_DEVICE_4A 			4u			/* SPORT device number */
#define SPORT_DEVICE_4B 			4u			/* SPORT device number */
#define TWIDEVNUM     				2u         /* TWI device number */

#define BITRATE       				(100u)      /* kHz */
#define DUTYCYCLE     				(50u)       /* percent */
#define PRESCALEVALUE 				(12u)       /* fSCLK/10MHz (112.5 sclk0_0) */
#define BUFFER_SIZE   				(8u)

#define TARGETADDR    				(0x38u)     /* hardware address */
#define TARGETADDR_1962    			(0x04u)     /* hardware address of adau1962 DAC */
#define TARGETADDR_1979    			(0x11u)     /* hardware address of adau1979 ADC */

#define SPORT_4A_SPU  					57
#define SPORT_4B_SPU   					58

#define DMA_NUM_DESC 				2u

#define SUCCESS   0
#define FAILED   -1


#define CHECK_RESULT(eResult) \
        if(eResult != 0)\
		{\
			return (1);\
        }

#define REPORT_ERROR        	 printf
#define DEBUG_INFORMATION        printf

#endif /* __AUDIO_LOOPBACK_TDM_H__ */
