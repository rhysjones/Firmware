#ifndef THERMISTORTABLES_H_
#define THERMISTORTABLES_H_

#include "Marlin.h"

#define OVERSAMPLENR 16

#if (THERMISTORHEATER_0 == 1) || (THERMISTORHEATER_1 == 1)  || (THERMISTORHEATER_2 == 1) || (THERMISTORBED == 1) //100k bed thermistor

const short temptable_1[][2] PROGMEM = {
{       23*OVERSAMPLENR ,       300     },
{       25*OVERSAMPLENR ,       295     },
{       27*OVERSAMPLENR ,       290     },
{       28*OVERSAMPLENR ,       285     },
{       31*OVERSAMPLENR ,       280     },
{       33*OVERSAMPLENR ,       275     },
{       35*OVERSAMPLENR ,       270     },
{       38*OVERSAMPLENR ,       265     },
{       41*OVERSAMPLENR ,       260     },
{       44*OVERSAMPLENR ,       255     },
{       48*OVERSAMPLENR ,       250     },
{       52*OVERSAMPLENR ,       245     },
{       56*OVERSAMPLENR ,       240     },
{       61*OVERSAMPLENR ,       235     },
{       66*OVERSAMPLENR ,       230     },
{       71*OVERSAMPLENR ,       225     },
{       78*OVERSAMPLENR ,       220     },
{       84*OVERSAMPLENR ,       215     },
{       92*OVERSAMPLENR ,       210     },
{       100*OVERSAMPLENR        ,       205     },
{       109*OVERSAMPLENR        ,       200     },
{       120*OVERSAMPLENR        ,       195     },
{       131*OVERSAMPLENR        ,       190     },
{       143*OVERSAMPLENR        ,       185     },
{       156*OVERSAMPLENR        ,       180     },
{       171*OVERSAMPLENR        ,       175     },
{       187*OVERSAMPLENR        ,       170     },
{       205*OVERSAMPLENR        ,       165     },
{       224*OVERSAMPLENR        ,       160     },
{       245*OVERSAMPLENR        ,       155     },
{       268*OVERSAMPLENR        ,       150     },
{       293*OVERSAMPLENR        ,       145     },
{       320*OVERSAMPLENR        ,       140     },
{       348*OVERSAMPLENR        ,       135     },
{       379*OVERSAMPLENR        ,       130     },
{       411*OVERSAMPLENR        ,       125     },
{       445*OVERSAMPLENR        ,       120     },
{       480*OVERSAMPLENR        ,       115     },
{       516*OVERSAMPLENR        ,       110     },
{       553*OVERSAMPLENR        ,       105     },
{       591*OVERSAMPLENR        ,       100     },
{       628*OVERSAMPLENR        ,       95      },
{       665*OVERSAMPLENR        ,       90      },
{       702*OVERSAMPLENR        ,       85      },
{       737*OVERSAMPLENR        ,       80      },
{       770*OVERSAMPLENR        ,       75      },
{       801*OVERSAMPLENR        ,       70      },
{       830*OVERSAMPLENR        ,       65      },
{       857*OVERSAMPLENR        ,       60      },
{       881*OVERSAMPLENR        ,       55      },
{       903*OVERSAMPLENR        ,       50      },
{       922*OVERSAMPLENR        ,       45      },
{       939*OVERSAMPLENR        ,       40      },
{       954*OVERSAMPLENR        ,       35      },
{       966*OVERSAMPLENR        ,       30      },
{       977*OVERSAMPLENR        ,       25      },
{       985*OVERSAMPLENR        ,       20      },
{       993*OVERSAMPLENR        ,       15      },
{       999*OVERSAMPLENR        ,       10      },
{       1004*OVERSAMPLENR       ,       5       },
{       1008*OVERSAMPLENR       ,       0       } //safety
};
#endif
#if (THERMISTORHEATER_0 == 2) || (THERMISTORHEATER_1 == 2) || (THERMISTORHEATER_2 == 2) || (THERMISTORBED == 2) //200k bed thermistor
const short temptable_2[][2] PROGMEM = {
   {1*OVERSAMPLENR, 848},
   {54*OVERSAMPLENR, 275},
   {107*OVERSAMPLENR, 228},
   {160*OVERSAMPLENR, 202},
   {213*OVERSAMPLENR, 185},
   {266*OVERSAMPLENR, 171},
   {319*OVERSAMPLENR, 160},
   {372*OVERSAMPLENR, 150},
   {425*OVERSAMPLENR, 141},
   {478*OVERSAMPLENR, 133},
   {531*OVERSAMPLENR, 125},
   {584*OVERSAMPLENR, 118},
   {637*OVERSAMPLENR, 110},
   {690*OVERSAMPLENR, 103},
   {743*OVERSAMPLENR, 95},
   {796*OVERSAMPLENR, 86},
   {849*OVERSAMPLENR, 77},
   {902*OVERSAMPLENR, 65},
   {955*OVERSAMPLENR, 49},
   {1008*OVERSAMPLENR, 17},
   {1020*OVERSAMPLENR, 0} //safety
};

#endif
#if (THERMISTORHEATER_0 == 3) || (THERMISTORHEATER_1 == 3) || (THERMISTORHEATER_2 == 3) || (THERMISTORBED == 3) //mendel-parts
const short temptable_3[][2] PROGMEM = {
                {1*OVERSAMPLENR,864},
                {21*OVERSAMPLENR,300},
                {25*OVERSAMPLENR,290},
                {29*OVERSAMPLENR,280},
                {33*OVERSAMPLENR,270},
                {39*OVERSAMPLENR,260},
                {46*OVERSAMPLENR,250},
                {54*OVERSAMPLENR,240},
                {64*OVERSAMPLENR,230},
                {75*OVERSAMPLENR,220},
                {90*OVERSAMPLENR,210},
                {107*OVERSAMPLENR,200},
                {128*OVERSAMPLENR,190},
                {154*OVERSAMPLENR,180},
                {184*OVERSAMPLENR,170},
                {221*OVERSAMPLENR,160},
                {265*OVERSAMPLENR,150},
                {316*OVERSAMPLENR,140},
                {375*OVERSAMPLENR,130},
                {441*OVERSAMPLENR,120},
                {513*OVERSAMPLENR,110},
                {588*OVERSAMPLENR,100},
                {734*OVERSAMPLENR,80},
                {856*OVERSAMPLENR,60},
                {938*OVERSAMPLENR,40},
                {986*OVERSAMPLENR,20},
                {1008*OVERSAMPLENR,0},
                {1018*OVERSAMPLENR,-20}
        };

#endif
#if (THERMISTORHEATER_0 == 4) || (THERMISTORHEATER_1 == 4) || (THERMISTORHEATER_2 == 4) || (THERMISTORBED == 4) //10k thermistor
const short temptable_4[][2] PROGMEM = {
   {1*OVERSAMPLENR, 430},
   {54*OVERSAMPLENR, 137},
   {107*OVERSAMPLENR, 107},
   {160*OVERSAMPLENR, 91},
   {213*OVERSAMPLENR, 80},
   {266*OVERSAMPLENR, 71},
   {319*OVERSAMPLENR, 64},
   {372*OVERSAMPLENR, 57},
   {425*OVERSAMPLENR, 51},
   {478*OVERSAMPLENR, 46},
   {531*OVERSAMPLENR, 41},
   {584*OVERSAMPLENR, 35},
   {637*OVERSAMPLENR, 30},
   {690*OVERSAMPLENR, 25},
   {743*OVERSAMPLENR, 20},
   {796*OVERSAMPLENR, 14},
   {849*OVERSAMPLENR, 7},
   {902*OVERSAMPLENR, 0},
   {955*OVERSAMPLENR, -11},
   {1008*OVERSAMPLENR, -35}
};
#endif

#if (THERMISTORHEATER_0 == 5) || (THERMISTORHEATER_1 == 5) || (THERMISTORHEATER_2 == 5) || (THERMISTORBED == 5) //100k ParCan thermistor (104GT-2)
const short temptable_5[][2] PROGMEM = {
{1*OVERSAMPLENR, 713},
{18*OVERSAMPLENR, 316},
{35*OVERSAMPLENR, 266},
{52*OVERSAMPLENR, 239},
{69*OVERSAMPLENR, 221},
{86*OVERSAMPLENR, 208},
{103*OVERSAMPLENR, 197},
{120*OVERSAMPLENR, 188},
{137*OVERSAMPLENR, 181},
{154*OVERSAMPLENR, 174},
{171*OVERSAMPLENR, 169},
{188*OVERSAMPLENR, 163},
{205*OVERSAMPLENR, 159},
{222*OVERSAMPLENR, 154},
{239*OVERSAMPLENR, 150},
{256*OVERSAMPLENR, 147},
{273*OVERSAMPLENR, 143},
{290*OVERSAMPLENR, 140},
{307*OVERSAMPLENR, 136},
{324*OVERSAMPLENR, 133},
{341*OVERSAMPLENR, 130},
{358*OVERSAMPLENR, 128},
{375*OVERSAMPLENR, 125},
{392*OVERSAMPLENR, 122},
{409*OVERSAMPLENR, 120},
{426*OVERSAMPLENR, 117},
{443*OVERSAMPLENR, 115},
{460*OVERSAMPLENR, 112},
{477*OVERSAMPLENR, 110},
{494*OVERSAMPLENR, 108},
{511*OVERSAMPLENR, 106},
{528*OVERSAMPLENR, 103},
{545*OVERSAMPLENR, 101},
{562*OVERSAMPLENR, 99},
{579*OVERSAMPLENR, 97},
{596*OVERSAMPLENR, 95},
{613*OVERSAMPLENR, 92},
{630*OVERSAMPLENR, 90},
{647*OVERSAMPLENR, 88},
{664*OVERSAMPLENR, 86},
{681*OVERSAMPLENR, 84},
{698*OVERSAMPLENR, 81},
{715*OVERSAMPLENR, 79},
{732*OVERSAMPLENR, 77},
{749*OVERSAMPLENR, 75},
{766*OVERSAMPLENR, 72},
{783*OVERSAMPLENR, 70},
{800*OVERSAMPLENR, 67},
{817*OVERSAMPLENR, 64},
{834*OVERSAMPLENR, 61},
{851*OVERSAMPLENR, 58},
{868*OVERSAMPLENR, 55},
{885*OVERSAMPLENR, 52},
{902*OVERSAMPLENR, 48},
{919*OVERSAMPLENR, 44},
{936*OVERSAMPLENR, 40},
{953*OVERSAMPLENR, 34},
{970*OVERSAMPLENR, 28},
{987*OVERSAMPLENR, 20},
{1004*OVERSAMPLENR, 8},
{1021*OVERSAMPLENR, 0}
};
#endif

#if (THERMISTORHEATER_0 == 6) || (THERMISTORHEATER_1 == 6) || (THERMISTORHEATER_2 == 6) || (THERMISTORBED == 6) // 100k Epcos Extruder thermistor
const short temptable_6[][2] PROGMEM = {
// Thermistor lookup table for RepRap Temperature Sensor Boards (http://make.rrrf.org/ts)
// Made with createTemperatureLookup.py (http://svn.reprap.org/trunk/reprap/firmware/Arduino/utilities/createTemperatureLookup.py)
// ./createTemperatureLookup.py --r0=100000 --t0=25 --r1=0 --r2=4700 --beta=3960 --max-adc=1023
// r0: 100000
// t0: 25
// r1: 0
// r2: 4700
// beta: 3960
// max adc: 1023
   {1*OVERSAMPLENR, 929},
   {21*OVERSAMPLENR, 349},
   {41*OVERSAMPLENR, 288},
   {61*OVERSAMPLENR, 257},
   {81*OVERSAMPLENR, 236},
   {101*OVERSAMPLENR, 221},
   {121*OVERSAMPLENR, 208},
   {141*OVERSAMPLENR, 198},
   {161*OVERSAMPLENR, 190},
   {181*OVERSAMPLENR, 182},
   {201*OVERSAMPLENR, 176},
   {221*OVERSAMPLENR, 170},
   {241*OVERSAMPLENR, 164},
   {261*OVERSAMPLENR, 159},
   {281*OVERSAMPLENR, 154},
   {301*OVERSAMPLENR, 150},
   {321*OVERSAMPLENR, 146},
   {341*OVERSAMPLENR, 142},
   {361*OVERSAMPLENR, 138},
   {381*OVERSAMPLENR, 135},
   {401*OVERSAMPLENR, 131},
   {421*OVERSAMPLENR, 128},
   {441*OVERSAMPLENR, 125},
   {461*OVERSAMPLENR, 121},
   {481*OVERSAMPLENR, 118},
   {501*OVERSAMPLENR, 115},
   {521*OVERSAMPLENR, 112},
   {541*OVERSAMPLENR, 109},
   {561*OVERSAMPLENR, 107},
   {581*OVERSAMPLENR, 104},
   {601*OVERSAMPLENR, 101},
   {621*OVERSAMPLENR, 98},
   {641*OVERSAMPLENR, 95},
   {661*OVERSAMPLENR, 92},
   {681*OVERSAMPLENR, 89},
   {701*OVERSAMPLENR, 86},
   {721*OVERSAMPLENR, 83},
   {741*OVERSAMPLENR, 80},
   {761*OVERSAMPLENR, 77},
   {781*OVERSAMPLENR, 74},
   {801*OVERSAMPLENR, 71},
   {821*OVERSAMPLENR, 67},
   {841*OVERSAMPLENR, 63},
   {861*OVERSAMPLENR, 59},
   {881*OVERSAMPLENR, 55},
   {901*OVERSAMPLENR, 51},
   {921*OVERSAMPLENR, 45},
   {941*OVERSAMPLENR, 39},
   {961*OVERSAMPLENR, 32},
   {981*OVERSAMPLENR, 23},
   {1001*OVERSAMPLENR, 9},
   {1021*OVERSAMPLENR, 0}
}; 
#endif

#if (THERMISTORHEATER_0 == 7) || (THERMISTORHEATER_1 == 7) || (THERMISTORHEATER_2 == 7) || (THERMISTORBED == 7) // 100k Bed Thermistor
const short temptable_7[][2] PROGMEM = {
   {1*OVERSAMPLENR, 864},
   {21*OVERSAMPLENR, 337},
   {41*OVERSAMPLENR, 279},
   {61*OVERSAMPLENR, 249},
   {81*OVERSAMPLENR, 229},
   {101*OVERSAMPLENR, 215},
   {121*OVERSAMPLENR, 203},
   {141*OVERSAMPLENR, 193},
   {161*OVERSAMPLENR, 185},
   {181*OVERSAMPLENR, 178},
   {201*OVERSAMPLENR, 171},
   {221*OVERSAMPLENR, 166},
   {241*OVERSAMPLENR, 160},
   {261*OVERSAMPLENR, 155},
   {281*OVERSAMPLENR, 151},
   {301*OVERSAMPLENR, 147},
   {321*OVERSAMPLENR, 143},
   {341*OVERSAMPLENR, 139},
   {361*OVERSAMPLENR, 135},
   {381*OVERSAMPLENR, 132},
   {401*OVERSAMPLENR, 128},
   {421*OVERSAMPLENR, 125},
   {441*OVERSAMPLENR, 122},
   {461*OVERSAMPLENR, 119},
   {481*OVERSAMPLENR, 116},
   {501*OVERSAMPLENR, 113},
   {521*OVERSAMPLENR, 110},
   {541*OVERSAMPLENR, 107},
   {561*OVERSAMPLENR, 105},
   {581*OVERSAMPLENR, 102},
   {601*OVERSAMPLENR, 99},
   {621*OVERSAMPLENR, 96},
   {641*OVERSAMPLENR, 93},
   {661*OVERSAMPLENR, 91},
   {681*OVERSAMPLENR, 88},
   {701*OVERSAMPLENR, 85},
   {721*OVERSAMPLENR, 82},
   {741*OVERSAMPLENR, 79},
   {761*OVERSAMPLENR, 76},
   {781*OVERSAMPLENR, 73},
   {801*OVERSAMPLENR, 70},
   {821*OVERSAMPLENR, 66},
   {841*OVERSAMPLENR, 63},
   {861*OVERSAMPLENR, 59},
   {881*OVERSAMPLENR, 55},
   {901*OVERSAMPLENR, 50},
   {921*OVERSAMPLENR, 45},
   {941*OVERSAMPLENR, 39},
   {961*OVERSAMPLENR, 32},
   {981*OVERSAMPLENR, 23},
   {1001*OVERSAMPLENR, 10},
   {1021*OVERSAMPLENR, 0}
};
#endif
//
#if (THERMISTORHEATER_0 == 100) || (THERMISTORHEATER_1 == 100) || (THERMISTORHEATER_2 == 100) || (THERMISTORBED == 100) // 100k DO-35 NTC
const short temptable_100[][2] PROGMEM = {
   {1*OVERSAMPLENR, 929},
   {36*OVERSAMPLENR, 299},
   {71*OVERSAMPLENR, 246},
   {106*OVERSAMPLENR, 217},
   {141*OVERSAMPLENR, 198},
   {176*OVERSAMPLENR, 184},
   {211*OVERSAMPLENR, 173},
   {246*OVERSAMPLENR, 163},
   {281*OVERSAMPLENR, 154},
   {316*OVERSAMPLENR, 147},
   {351*OVERSAMPLENR, 140},
   {386*OVERSAMPLENR, 134},
   {421*OVERSAMPLENR, 128},
   {456*OVERSAMPLENR, 122},
   {491*OVERSAMPLENR, 117},
   {526*OVERSAMPLENR, 112},
   {561*OVERSAMPLENR, 107},
   {596*OVERSAMPLENR, 102},
   {631*OVERSAMPLENR, 97},
   {666*OVERSAMPLENR, 91},
   {701*OVERSAMPLENR, 86},
   {736*OVERSAMPLENR, 81},
   {771*OVERSAMPLENR, 76},
   {806*OVERSAMPLENR, 70},
   {841*OVERSAMPLENR, 63},
   {876*OVERSAMPLENR, 56},
   {911*OVERSAMPLENR, 48},
   {946*OVERSAMPLENR, 38},
   {981*OVERSAMPLENR, 23},
   {1005*OVERSAMPLENR, 5},
   {1016*OVERSAMPLENR, 0}
};
#endif
#if (THERMISTORHEATER_0 == 101) || (THERMISTORHEATER_1 == 101) || (THERMISTORHEATER_2 == 101) || (THERMISTORBED == 101) // 100k Honeywell 135-104LAG-J01
const short temptable_101[][2] PROGMEM = {
   {1*OVERSAMPLENR, 704},
   {54*OVERSAMPLENR, 216},
   {107*OVERSAMPLENR, 175},
   {160*OVERSAMPLENR, 152},
   {213*OVERSAMPLENR, 137},
   {266*OVERSAMPLENR, 125},
   {319*OVERSAMPLENR, 115},
   {372*OVERSAMPLENR, 106},
   {425*OVERSAMPLENR, 99},
   {478*OVERSAMPLENR, 91},
   {531*OVERSAMPLENR, 85},
   {584*OVERSAMPLENR, 78},
   {637*OVERSAMPLENR, 71},
   {690*OVERSAMPLENR, 65},
   {743*OVERSAMPLENR, 58},
   {796*OVERSAMPLENR, 50},
   {849*OVERSAMPLENR, 42},
   {902*OVERSAMPLENR, 31},
   {955*OVERSAMPLENR, 17},
   {1008*OVERSAMPLENR, 0}
};
#endif

#define _TT_NAME(_N) temptable_ ## _N
#define TT_NAME(_N) _TT_NAME(_N)

#ifdef THERMISTORHEATER_0
  #define heater_0_temptable TT_NAME(THERMISTORHEATER_0)
  #define heater_0_temptable_len (sizeof(heater_0_temptable)/sizeof(*heater_0_temptable))
#else
#ifdef HEATER_0_USES_THERMISTOR
  #error No heater 0 thermistor table specified
#else  // HEATER_0_USES_THERMISTOR
  #define heater_0_temptable 0
  #define heater_0_temptable_len 0
#endif // HEATER_0_USES_THERMISTOR
#endif

#ifdef THERMISTORHEATER_1
  #define heater_1_temptable TT_NAME(THERMISTORHEATER_1)
  #define heater_1_temptable_len (sizeof(heater_1_temptable)/sizeof(*heater_1_temptable))
#else
#ifdef HEATER_1_USES_THERMISTOR
  #error No heater 1 thermistor table specified
#else  // HEATER_1_USES_THERMISTOR
  #define heater_1_temptable 0
  #define heater_1_temptable_len 0
#endif // HEATER_1_USES_THERMISTOR
#endif

#ifdef THERMISTORHEATER_2
  #define heater_2_temptable TT_NAME(THERMISTORHEATER_2)
  #define heater_2_temptable_len (sizeof(heater_2_temptable)/sizeof(*heater_2_temptable))
#else
#ifdef HEATER_2_USES_THERMISTOR
  #error No heater 2 thermistor table specified
#else  // HEATER_2_USES_THERMISTOR
  #define heater_2_temptable 0
  #define heater_2_temptable_len 0
#endif // HEATER_2_USES_THERMISTOR
#endif

#ifdef THERMISTORBED
  #define bedtemptable TT_NAME(THERMISTORBED)
  #define bedtemptable_len (sizeof(bedtemptable)/sizeof(*bedtemptable))
#else
#ifdef BED_USES_THERMISTOR
  #error No bed thermistor table specified
#endif // BED_USES_THERMISTOR
#endif

#endif //THERMISTORTABLES_H_

