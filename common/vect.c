//=====================================================================//
/*!	@file
	@brief	R78 グループ・ベクター関係
    @author 平松邦仁 (hira@rvf-rc45.net)
	@copyright	Copyright (C) 2016 Kunihito Hiramatsu @n
				Released under the MIT license @n
				https://github.com/hirakuni45/RL78/blob/master/LICENSE
*/
//=====================================================================//
#include "common/vect.h"

extern void start(void);

//-----------------------------------------------------------------//
/*!
	@brief  無効タスクエントリー（割り込み）
*/
//-----------------------------------------------------------------//
void NULL_intr(void)
{
}


#pragma GCC optimize ("O0")
//-----------------------------------------------------------------//
/*!
	@brief  リセットベクター設定
*/
//-----------------------------------------------------------------//
const void* vec_[] __attribute__ ((section (".vec"))) = {
	start,
};


void UART0_TX_intr(void) __attribute__((weak));
//-----------------------------------------------------------------//
/*!
	@brief  UART0-TX 割り込み
*/
//-----------------------------------------------------------------//
void UART0_TX_intr(void) { }


void UART0_RX_intr(void) __attribute__((weak));
//-----------------------------------------------------------------//
/*!
	@brief  UART0-RX 割り込み
*/
//-----------------------------------------------------------------//
void UART0_RX_intr(void) { }


void UART0_ER_intr(void) __attribute__((weak));
//-----------------------------------------------------------------//
/*!
	@brief  UART0-ER 割り込み
*/
//-----------------------------------------------------------------//
void UART0_ER_intr(void) { }


void UART1_TX_intr(void) __attribute__((weak));
//-----------------------------------------------------------------//
/*!
	@brief  UART1-TX 割り込み
*/
//-----------------------------------------------------------------//
void UART1_TX_intr(void) { }


void UART1_RX_intr(void) __attribute__((weak));
//-----------------------------------------------------------------//
/*!
	@brief  UART1-RX 割り込み
*/
//-----------------------------------------------------------------//
void UART1_RX_intr(void) { }


void UART1_ER_intr(void) __attribute__((weak));
//-----------------------------------------------------------------//
/*!
	@brief  UART1-ER 割り込み
*/
//-----------------------------------------------------------------//
void UART1_ER_intr(void) { }


void TM00_intr(void) __attribute__((weak));
//-----------------------------------------------------------------//
/*!
	@brief  TM00 割り込み
*/
//-----------------------------------------------------------------//
void TM00_intr(void) { }


void TM01_intr(void) __attribute__((weak));
//-----------------------------------------------------------------//
/*!
	@brief  TM01 割り込み
*/
//-----------------------------------------------------------------//
void TM01_intr(void) { }


void TM02_intr(void) __attribute__((weak));
//-----------------------------------------------------------------//
/*!
	@brief  TM02 割り込み
*/
//-----------------------------------------------------------------//
void TM02_intr(void) { }


void TM03_intr(void) __attribute__((weak));
//-----------------------------------------------------------------//
/*!
	@brief  TM03 割り込み
*/
//-----------------------------------------------------------------//
void TM03_intr(void) { }


void ADC_intr(void) __attribute__((weak));
//-----------------------------------------------------------------//
/*!
	@brief  ADC 割り込み
*/
//-----------------------------------------------------------------//
void ADC_intr(void) { }


void ITM_intr(void) __attribute__((weak));
//-----------------------------------------------------------------//
/*!
	@brief  ITM 割り込み
*/
//-----------------------------------------------------------------//
void ITM_intr(void) { }


void TM04_intr(void) __attribute__((weak));
//-----------------------------------------------------------------//
/*!
	@brief  TM04 割り込み
*/
//-----------------------------------------------------------------//
void TM04_intr(void) { }


void TM05_intr(void) __attribute__((weak));
//-----------------------------------------------------------------//
/*!
	@brief  TM05 割り込み
*/
//-----------------------------------------------------------------//
void TM05_intr(void) { }


void TM06_intr(void) __attribute__((weak));
//-----------------------------------------------------------------//
/*!
	@brief  TM06 割り込み
*/
//-----------------------------------------------------------------//
void TM06_intr(void) { }


void TM07_intr(void) __attribute__((weak));
//-----------------------------------------------------------------//
/*!
	@brief  TM07 割り込み
*/
//-----------------------------------------------------------------//
void TM07_intr(void) { }


void TM10_intr(void) __attribute__((weak));
//-----------------------------------------------------------------//
/*!
	@brief  TM10 割り込み
*/
//-----------------------------------------------------------------//
void TM10_intr(void) { }


void TM11_intr(void) __attribute__((weak));
//-----------------------------------------------------------------//
/*!
	@brief  TM11 割り込み
*/
//-----------------------------------------------------------------//
void TM11_intr(void) { }


void TM12_intr(void) __attribute__((weak));
//-----------------------------------------------------------------//
/*!
	@brief  TM12 割り込み
*/
//-----------------------------------------------------------------//
void TM12_intr(void) { }


void TM13_intr(void) __attribute__((weak));
//-----------------------------------------------------------------//
/*!
	@brief  TM13 割り込み
*/
//-----------------------------------------------------------------//
void TM13_intr(void) { }


void TM14_intr(void) __attribute__((weak));
//-----------------------------------------------------------------//
/*!
	@brief  TM14 割り込み
*/
//-----------------------------------------------------------------//
void TM14_intr(void) { }


void TM15_intr(void) __attribute__((weak));
//-----------------------------------------------------------------//
/*!
	@brief  TM15 割り込み
*/
//-----------------------------------------------------------------//
void TM15_intr(void) { }


void TM16_intr(void) __attribute__((weak));
//-----------------------------------------------------------------//
/*!
	@brief  TM16 割り込み
*/
//-----------------------------------------------------------------//
void TM16_intr(void) { }


void TM17_intr(void) __attribute__((weak));
//-----------------------------------------------------------------//
/*!
	@brief  TM17 割り込み
*/
//-----------------------------------------------------------------//
void TM17_intr(void) { }


//-----------------------------------------------------------------//
/*!
	@brief  割り込みベクターテーブルの定義
*/
//-----------------------------------------------------------------//
const void* intr_vec_tables[] __attribute__ ((section (".ivec"))) = {
	/*  0 INTWDTI                  */  (void*)NULL_intr,  /* ウォッチドッグ・タイマのインターバル　*/
	/*  1 INTLVL                   */  (void*)NULL_intr,  /* 電圧検出 */
	/*  2 INTP0                    */  (void*)NULL_intr,
	/*  3 INTP1                    */  (void*)NULL_intr,
	/*  4 INTP2                    */  (void*)NULL_intr,
	/*  5 INTP3                    */  (void*)NULL_intr,
	/*  6 INTP4                    */  (void*)NULL_intr,
	/*  7 INTP5                    */  (void*)NULL_intr,
	/*  8 INTST2/INTCSI20/INTIIC20 */  (void*)NULL_intr,
	/*  9 INTSR2/INTCSI21/INTIIC21 */  (void*)NULL_intr,
	/* 10 INTSRE2/INTTM11H         */  (void*)NULL_intr,
	/* 11 INTDMA0                  */  (void*)NULL_intr,
	/* 12 INTDMA1                  */  (void*)NULL_intr,
	/* 13 UART0-TX                 */  (void*)UART0_TX_intr,
	/* 14 UART0-RX                 */  (void*)UART0_RX_intr,
	/* 15 UART0-ER                 */  (void*)UART0_ER_intr,
	/* 16 UART1-TX                 */  (void*)UART1_TX_intr,
	/* 17 UART1-RX                 */  (void*)UART1_RX_intr, 
	/* 18 UART1-ER                 */  (void*)UART1_ER_intr,
	/* 19 INTIICA0                 */  (void*)NULL_intr,
	/* 20 INTTM00                  */  (void*)TM00_intr,
	/* 21 INTTM01                  */  (void*)TM01_intr,
	/* 22 INTTM02                  */  (void*)TM02_intr,
	/* 23 INTTM03                  */  (void*)TM03_intr,
	/* 24 INTAD                    */  (void*)ADC_intr,
	/* 25 INTRTC                   */  (void*)NULL_intr,
	/* 26 INTIT                    */  (void*)ITM_intr,
	/* 27 INTKR                    */  (void*)NULL_intr,
	/* 28 INTST3/INTCSI30/INTIIC30 */  (void*)NULL_intr,
	/* 29 INTSR3/INTCSI31/INTIIC31 */  (void*)NULL_intr,
	/* 30 INTTM13                  */  (void*)NULL_intr,
	/* 31 INTTM04                  */  (void*)TM04_intr,
	/* 32 INTTM05                  */  (void*)TM05_intr,
	/* 33 INTTM06                  */  (void*)TM06_intr,
	/* 34 INTTM07                  */  (void*)TM07_intr,
	/* 35 INTP6                    */  (void*)NULL_intr,
	/* 36 INTP7                    */  (void*)NULL_intr,
	/* 37 INTP8                    */  (void*)NULL_intr,
	/* 38 INTP9                    */  (void*)NULL_intr,
	/* 39 INTP10                   */  (void*)NULL_intr,
	/* 40 INTP11                   */  (void*)NULL_intr,
	/* 41 INTTM10                  */  (void*)TM10_intr,
	/* 42 INTTM11                  */  (void*)TM11_intr,
	/* 43 INTTM12                  */  (void*)TM12_intr,
	/* 44 INTSRE3/INTTM13H         */  (void*)TM13_intr,
	/* 45 INTMD                    */  (void*)NULL_intr,
	/* 46 INTIICA1                 */  (void*)NULL_intr,
	/* 47 INTFL                    */  (void*)NULL_intr,
	/* 48 INTDMA2                  */  (void*)NULL_intr,
	/* 49 INTDMA3                  */  (void*)NULL_intr,
	/* 50 INTTM14                  */  (void*)TM14_intr,
	/* 51 INTTM15                  */  (void*)TM15_intr,
	/* 52 INTTM16                  */  (void*)TM16_intr,
	/* 53 INTTM17                  */  (void*)TM17_intr,
	/* 54                          */  (void*)NULL_intr,
	/* 55                          */  (void*)NULL_intr,
	/* 56                          */  (void*)NULL_intr,
	/* 57                          */  (void*)NULL_intr,
	/* 58                          */  (void*)NULL_intr,
	/* 59                          */  (void*)NULL_intr,
	/* 60                          */  (void*)NULL_intr,
	/* 61                          */  (void*)NULL_intr
};
