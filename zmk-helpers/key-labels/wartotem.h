//			        │  0   1   2   3   4 │  5   6   7   8  9         │        │  LN4  LN3  LN2  LN1  LN0  │  RN0  RN1  RN2  RN3  RN4  │
//		        │ 10  11  12  13  14  15 │ 16  17  18  19  20  21 │  │   │  LT5  LT4  LT3  LT2  LT1  LT0  │  RT0  RT1  RT2  RT3  RT4  LT5 │
//		        │ 22  23  24  25  26  27 │ 28  29  30  31  32  33 │  │   │  LM5  LM4  LM3  LM2  LM1  LM0  │  RM0  RM1  RM2  RM3  RM4  RM5 │
//		        │ 34  35  36  37  38  39 │ 40  41  42  43  44  45 │  │   │  LB5  LB4  LB3  LB2  LB1  LB0  │  RB0  RB1  RB2  RB3  RB4  RB5 │
//						│ 46  47  48  49 │ 50  51  52  53 │			 │   		   │  LH3  LH2  LH1  LH0  │  RH0  RH1  RH2  RH3  │


#pragma once

#define LN0  4  // left-number row + appendix
#define LN1  3
#define LN2  2
#define LN3  1
#define LN4  0

#define RN0  5 // right-number row + appendix
#define RN1  6
#define RN2  7
#define RN3  8
#define RN4  9

#define LT0 15 // left-top row
#define LT1 14
#define LT2 13
#define LT3 12
#define LT4 11
#define LT5 10

#define RT0 16 // right-top row
#define RT1 17
#define RT2 18
#define RT3 19
#define RT4 20
#define LT5 21

#define LM0 27  // left-middle row
#define LM1 26
#define LM2 25
#define LM3 24
#define LM4 23
#define LM5 22

#define RM0 28  // right-middle row
#define RM1 29
#define RM2 30
#define RM3 31
#define RM4 32
#define RM5 33

#define LB0 39  // left-bottom row
#define LB1 38
#define LB2 37
#define LB3 36
#define LB4 35
#define LB5 34

#define RB0 40  // right-bottom row
#define RB1 41
#define RB2 42
#define RB3 43
#define RB4 44
#define RB5 45

#define LH0 49  // left thumb keys
#define LH1 48
#define LH2 47
#define LH3 46

#define RH0 50  // right thumb keys
#define RH1 51
#define RH2 52
#define RH3 53