/*
 * Instance header file for PIC32CZ8110CA90208
 *
 * Copyright (c) 2021 Microchip Technology Inc. and its subsidiaries.
 *
 * Subject to your compliance with these terms, you may use Microchip software and any derivatives
 * exclusively with Microchip products. It is your responsibility to comply with third party license
 * terms applicable to your use of third party software (including open source software) that may
 * accompany Microchip software.
 *
 * THIS SOFTWARE IS SUPPLIED BY MICROCHIP "AS IS". NO WARRANTIES, WHETHER EXPRESS, IMPLIED OR STATUTORY,
 * APPLY TO THIS SOFTWARE, INCLUDING ANY IMPLIED WARRANTIES OF NON-INFRINGEMENT, MERCHANTABILITY, AND
 * FITNESS FOR A PARTICULAR PURPOSE.
 *
 * IN NO EVENT WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE, INCIDENTAL OR CONSEQUENTIAL
 * LOSS, DAMAGE, COST OR EXPENSE OF ANY KIND WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF
 * MICROCHIP HAS BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE FORESEEABLE. TO THE FULLEST EXTENT
 * ALLOWED BY LAW, MICROCHIP'S TOTAL LIABILITY ON ALL CLAIMS IN ANY WAY RELATED TO THIS SOFTWARE WILL NOT
 * EXCEED THE AMOUNT OF FEES, IF ANY, THAT YOU HAVE PAID DIRECTLY TO MICROCHIP FOR THIS SOFTWARE.
 *
 */

/* file generated from device description version 2021-07-22T19:46:10Z */
#ifndef _PIC32CZCA90_ADC_INSTANCE_
#define _PIC32CZCA90_ADC_INSTANCE_


/* ========== Instance Parameter definitions for ADC peripheral ========== */
#define ADC_APB_FIFO_DEPTH                       _UL_(16)   /* Number of Words in APB FIFO */
#define ADC_CHNSAR_NMBR1                         _UL_(16)   /* Number of Channels on SARCORE number 1 */
#define ADC_CHNSAR_NMBR2                         _UL_(8)    /* Number of Channels on SARCORE number 2 */
#define ADC_CHNSAR_NMBR3                         _UL_(8)    /* Number of Channels on SARCORE number 3 */
#define ADC_CHNSAR_NMBR4                         _UL_(7)    /* Number of Channels on SARCORE number 4 */
#define ADC_DCMP_NMBR                            _UL_(4)    /* Number of Digital Comparators Max=4 */
#define ADC_DMAC_ID_PFFRDY                       _UL_(75)   
#define ADC_EARLY_INTR_PRESENT                   _UL_(1)    /* Early Interrupts Present */
#define ADC_FLTR_NMBR                            _UL_(4)    /* Number of Digital Filters, Max=0 */
#define ADC_GCLK_ID                              _UL_(41)   /* Index of Generic Clock */
#define ADC_OCP_ADDR_WIDTH                       _UL_(16)   /* OCP Address Width */
#define ADC_OCP_FIFO_DEPTH                       _UL_(16)   /* Number of Words in OCP DMA FIFO */
#define ADC_OCP_PORT_PRESENT                     _UL_(0)    /* OCP DMA Bus Master Present */
#define ADC_SARCORE_NMBR                         _UL_(4)    /* Number of SARCOREs. Max=4, Min-1 */
#define ADC_TRGS_NMBR                            _UL_(16)   /* Number of Trigger Sources, Max=16 */
#define ADC_VREF_STARTUP_TIME                    _UL_(50)   /* Number of Control Clock cycles for VREF to stabalize */
#define ADC_INSTANCE_ID                          _UL_(43)   /* Instance index for ADC */
#define ADC_MCLK_ID_APB                          _UL_(51)   /* Index for ADC APB clock */
#define ADC_PAC_ID                               _UL_(43)   /* Index for ADC registers write protection */

#endif /* _PIC32CZCA90_ADC_INSTANCE_ */