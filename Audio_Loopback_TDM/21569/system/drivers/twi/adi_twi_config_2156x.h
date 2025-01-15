/*
 **
 ** Source file generated on Feb 6, 2018 at 16:27:21.
 **
 ** Copyright (C) 2018 Analog Devices Inc., All Rights Reserved.
 **
 ** This file is generated automatically based upon the options selected in 
 ** the twi configuration dialog. Changes to this configuration should be made by
 ** changing the appropriate options rather than editing this file.
 **
 */

/*!
* @file      adi_twi_config_2156x.h
*
* @brief     TWI driver static configuration Header file
*
* @details
*            TWI driver static configuration Header file
*/
#ifndef __ADI_TWI_CONGIF_H__
#define __ADI_TWI_CONFIG_H__

#include <sys/platform.h>
#include <stdint.h>

/*! Specifies the number of active TWI devices accordingly the memory allotted will be optimized */
#define ADI_TWI_NUM_DEVICES                   6u

/*!TWI0 Instance*/
/*!Select TWI0 Instance */
#define ADI_TWI0_INSTANCE                     		1u

/*! Specifies the Prescale value for internal time reference*/
#define ADI_TWI0_CTL_PRESCALE              	 	  	(12u)
/*! Specifies the TWI clock frequency IN kHz*/
#define ADI_TWI0_CLK_FREQ              	 	 	  	(100u)
/*! Specifies the TWI clock duty cycle */
#define ADI_TWI0_DUTY_CYCLE              	 	  	(50u)
/*! Specifies the TWI Master Address register Configuration */
#define ADI_TWI0_MSTRADDR_ADDR 				 	 	(255u)
/*! Specifies the TWI Slave address register Configuration */
#define ADI_TWI0_SLVADDR_ADDR				     	(255u)



/*!TWI1 Instance*/
/*!Select TWI1 Instance */
#define ADI_TWI1_INSTANCE                     		1u

/*! Specifies the Prescale value for internal time reference*/
#define ADI_TWI1_CTL_PRESCALE              	 	  	(12u)
/*! Specifies the TWI clock frequency IN kHz*/
#define ADI_TWI1_CLK_FREQ              	 	 	  	(100u)
/*! Specifies the TWI clock duty cycle */
#define ADI_TWI1_DUTY_CYCLE              	 	  	(50u)
/*! Specifies the TWI Master Address register Configuration */
#define ADI_TWI1_MSTRADDR_ADDR 				 	 	(255u)
/*! Specifies the TWI Slave address register Configuration */
#define ADI_TWI1_SLVADDR_ADDR				     	(255u)


/*!TWI2 Instance*/
/*!Select TWI2 Instance */
#define ADI_TWI2_INSTANCE                    		 1u

/*! Specifies the Prescale value for internal time reference*/
#define ADI_TWI2_CTL_PRESCALE              	 	  	(12u)
/*! Specifies the TWI clock frequency IN kHz*/
#define ADI_TWI2_CLK_FREQ              	 	 	  	(100u)
/*! Specifies the TWI clock duty cycle */
#define ADI_TWI2_DUTY_CYCLE              	 	  	(50u)
/*! Specifies the TWI Master Address register Configuration */
#define ADI_TWI2_MSTRADDR_ADDR 				 	 	(255u)
/*! Specifies the TWI Slave address register Configuration */
#define ADI_TWI2_SLVADDR_ADDR				     	(255u)


/*!TWI3 Instance*/
/*!Select TWI3 Instance */
#define ADI_TWI3_INSTANCE                    		 1u

/*! Specifies the Prescale value for internal time reference*/
#define ADI_TWI3_CTL_PRESCALE              	 	  	(12u)
/*! Specifies the TWI clock frequency IN kHz*/
#define ADI_TWI3_CLK_FREQ              	 	 	  	(100u)
/*! Specifies the TWI clock duty cycle */
#define ADI_TWI3_DUTY_CYCLE              	 	  	(50u)
/*! Specifies the TWI Master Address register Configuration */
#define ADI_TWI3_MSTRADDR_ADDR 				 	 	(255u)
/*! Specifies the TWI Slave address register Configuration */
#define ADI_TWI3_SLVADDR_ADDR				     	(255u)



/*!TWI4 Instance*/
/*!Select TWI4 Instance */
#define ADI_TWI4_INSTANCE                    		 1u

/*! Specifies the Prescale value for internal time reference*/
#define ADI_TWI4_CTL_PRESCALE              	 	  	(12u)
/*! Specifies the TWI clock frequency IN kHz*/
#define ADI_TWI4_CLK_FREQ              	 	 	  	(100u)
/*! Specifies the TWI clock duty cycle */
#define ADI_TWI4_DUTY_CYCLE              	 	  	(50u)
/*! Specifies the TWI Master Address register Configuration */
#define ADI_TWI4_MSTRADDR_ADDR 				 	 	(255u)
/*! Specifies the TWI Slave address register Configuration */
#define ADI_TWI4_SLVADDR_ADDR				     	(255u)


/*!TWI5 Instance*/
/*!Select TWI5 Instance */
#define ADI_TWI5_INSTANCE                    		 1u

/*! Specifies the Prescale value for internal time reference*/
#define ADI_TWI5_CTL_PRESCALE              	 	  	(12u)
/*! Specifies the TWI clock frequency IN kHz*/
#define ADI_TWI5_CLK_FREQ              	 	 	  	(100u)
/*! Specifies the TWI clock duty cycle */
#define ADI_TWI5_DUTY_CYCLE              	 	  	(50u)
/*! Specifies the TWI Master Address register Configuration */
#define ADI_TWI5_MSTRADDR_ADDR 				 	 	(255u)
/*! Specifies the TWI Slave address register Configuration */
#define ADI_TWI5_SLVADDR_ADDR				     	(255u)

		
#endif /*__ADI_TWI_CONGIF_H__*/
