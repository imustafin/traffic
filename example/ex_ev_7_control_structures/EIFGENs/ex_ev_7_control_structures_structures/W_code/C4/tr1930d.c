/*
 * Class TRAFFIC_LINE_SCHEDULE
 */

#include "eif_macros.h"

#ifdef __cplusplus
extern "C" {
#endif


static int16 gen_type0_1930 [] = {0,1468,1885,-1};
static int16 gen_type1_1930 [] = {0,1467,1885,-1};
static int16 gen_type2_1930 [] = {0,1462,1885,-1};
static int16 gen_type3_1930 [] = {0,1428,1885,-1};
static int16 gen_type4_1930 [] = {0,1467,1885,-1};


static struct desc_info desc_1930[] = {
	{(BODY_INDEX) -1, (BODY_INDEX) -1, (int16) -1, (int16 *) 0},

	{(BODY_INDEX) 1, (BODY_INDEX) -1, (int16) 774, (int16 *) 0}, 
	{(BODY_INDEX) 2, (BODY_INDEX) -1, (int16) 774, (int16 *) 0}, 
	{(BODY_INDEX) 3, (BODY_INDEX) -1, (int16) -1, (int16 *) 0}, 
	{(BODY_INDEX) 4, (BODY_INDEX) -1, (int16) -1, (int16 *) 0}, 
	{(BODY_INDEX) 9472, (BODY_INDEX) -1, (int16) -1, (int16 *) 0}, 
	{(BODY_INDEX) 6, (BODY_INDEX) -1, (int16) -1, (int16 *) 0}, 
	{(BODY_INDEX) 7, (BODY_INDEX) -1, (int16) -1, (int16 *) 0}, 
	{(BODY_INDEX) 8, (BODY_INDEX) -1, (int16) -1, (int16 *) 0}, 
	{(BODY_INDEX) 9, (BODY_INDEX) -1, (int16) -1, (int16 *) 0}, 
	{(BODY_INDEX) 10, (BODY_INDEX) -1, (int16) -1, (int16 *) 0}, 
	{(BODY_INDEX) 11, (BODY_INDEX) -1, (int16) 1929, (int16 *) 0}, 
	{(BODY_INDEX) 10503, (BODY_INDEX) -1, (int16) -1, (int16 *) 0}, 
	{(BODY_INDEX) 13, (BODY_INDEX) -1, (int16) -1, (int16 *) 0}, 
	{(BODY_INDEX) 14, (BODY_INDEX) -1, (int16) 0, (int16 *) 0}, 
	{(BODY_INDEX) 15, (BODY_INDEX) -1, (int16) 0, (int16 *) 0}, 
	{(BODY_INDEX) 16, (BODY_INDEX) -1, (int16) 1929, (int16 *) 0}, 
	{(BODY_INDEX) 17, (BODY_INDEX) -1, (int16) 1929, (int16 *) 0}, 
	{(BODY_INDEX) 18, (BODY_INDEX) -1, (int16) 0, (int16 *) 0}, 
	{(BODY_INDEX) 19, (BODY_INDEX) -1, (int16) -1, (int16 *) 0}, 
	{(BODY_INDEX) 20, (BODY_INDEX) -1, (int16) -1, (int16 *) 0}, 
	{(BODY_INDEX) 21, (BODY_INDEX) -1, (int16) 124, (int16 *) 0}, 
	{(BODY_INDEX) 22, (BODY_INDEX) -1, (int16) 774, (int16 *) 0}, 
	{(BODY_INDEX) 23, (BODY_INDEX) -1, (int16) 774, (int16 *) 0}, 
	{(BODY_INDEX) 24, (BODY_INDEX) -1, (int16) -1, (int16 *) 0}, 
	{(BODY_INDEX) 25, (BODY_INDEX) -1, (int16) 133, (int16 *) 0}, 
	{(BODY_INDEX) 26, (BODY_INDEX) -1, (int16) -1, (int16 *) 0}, 
	{(BODY_INDEX) 27, (BODY_INDEX) -1, (int16) -1, (int16 *) 0}, 
	{(BODY_INDEX) 28, (BODY_INDEX) -1, (int16) -1, (int16 *) 0}, 
	{(BODY_INDEX) 29, (BODY_INDEX) -1, (int16) 1929, (int16 *) 0}, 
	{(BODY_INDEX) 30, (BODY_INDEX) -1, (int16) -1, (int16 *) 0}, 
	{(BODY_INDEX) 10463, (BODY_INDEX) -1, (int16) -1, (int16 *) 0}, 
	{(BODY_INDEX) 11059, (BODY_INDEX) -1, (int16) -1, (int16 *) 0}, 
	{(BODY_INDEX) 10465, (BODY_INDEX) -1, (int16) -1, (int16 *) 0}, 
	{(BODY_INDEX) 10468, (BODY_INDEX) -1, (int16) 1885, (int16 *) 0}, 
	{(BODY_INDEX) -1, (BODY_INDEX) 8, (int16) -1, (int16 *) 0}, 
	{(BODY_INDEX) -1, (BODY_INDEX) 12, (int16) -1, (int16 *) 0}, 
	{(BODY_INDEX) 10475, (BODY_INDEX) -1, (int16) -1, (int16 *) 0}, 
	{(BODY_INDEX) 10477, (BODY_INDEX) -1, (int16) -1, (int16 *) 0}, 
	{(BODY_INDEX) 10478, (BODY_INDEX) -1, (int16) -1, (int16 *) 0}, 
	{(BODY_INDEX) 10482, (BODY_INDEX) -1, (int16) -1, (int16 *) 0}, 
	{(BODY_INDEX) 10484, (BODY_INDEX) -1, (int16) -1, (int16 *) 0}, 
	{(BODY_INDEX) 10485, (BODY_INDEX) -1, (int16) -1, (int16 *) 0}, 
	{(BODY_INDEX) 10486, (BODY_INDEX) -1, (int16) -1, (int16 *) 0}, 
	{(BODY_INDEX) 8166, (BODY_INDEX) -1, (int16) -1, (int16 *) 0}, 
	{(BODY_INDEX) 8167, (BODY_INDEX) -1, (int16) -1, (int16 *) 0}, 
	{(BODY_INDEX) 8168, (BODY_INDEX) -1, (int16) -1, (int16 *) 0}, 
	{(BODY_INDEX) 8169, (BODY_INDEX) -1, (int16) -1, (int16 *) 0}, 
	{(BODY_INDEX) 10491, (BODY_INDEX) -1, (int16) -1, (int16 *) 0}, 
	{(BODY_INDEX) 10492, (BODY_INDEX) -1, (int16) -1, (int16 *) 0}, 
	{(BODY_INDEX) 10494, (BODY_INDEX) -1, (int16) -1, (int16 *) 0}, 
	{(BODY_INDEX) 10495, (BODY_INDEX) -1, (int16) -1, (int16 *) 0}, 
	{(BODY_INDEX) 10497, (BODY_INDEX) -1, (int16) -1, (int16 *) 0}, 
	{(BODY_INDEX) 10498, (BODY_INDEX) -1, (int16) -1, (int16 *) 0}, 
	{(BODY_INDEX) 10499, (BODY_INDEX) -1, (int16) 0, (int16 *) 0}, 
	{(BODY_INDEX) 10500, (BODY_INDEX) -1, (int16) 1468, gen_type0_1930}, 
	{(BODY_INDEX) 10501, (BODY_INDEX) -1, (int16) 1467, gen_type1_1930}, 
	{(BODY_INDEX) 10504, (BODY_INDEX) -1, (int16) 1462, gen_type2_1930}, 
	{(BODY_INDEX) 10507, (BODY_INDEX) -1, (int16) -1, (int16 *) 0}, 
	{(BODY_INDEX) 10508, (BODY_INDEX) -1, (int16) -1, (int16 *) 0}, 
	{(BODY_INDEX) 11067, (BODY_INDEX) -1, (int16) -1, (int16 *) 0}, 
	{(BODY_INDEX) 8468, (BODY_INDEX) -1, (int16) -1, (int16 *) 0}, 
	{(BODY_INDEX) 8060, (BODY_INDEX) -1, (int16) -1, (int16 *) 0}, 
	{(BODY_INDEX) -1, (BODY_INDEX) 4, (int16) -1, (int16 *) 0}, 
	{(BODY_INDEX) 8061, (BODY_INDEX) -1, (int16) -1, (int16 *) 0}, 
	{(BODY_INDEX) 8062, (BODY_INDEX) -1, (int16) -1, (int16 *) 0}, 
	{(BODY_INDEX) 8063, (BODY_INDEX) -1, (int16) -1, (int16 *) 0}, 
	{(BODY_INDEX) 8170, (BODY_INDEX) -1, (int16) 1428, gen_type3_1930}, 
	{(BODY_INDEX) 11068, (BODY_INDEX) 16, (int16) -1, (int16 *) 0}, 
	{(BODY_INDEX) 11060, (BODY_INDEX) -1, (int16) 1885, (int16 *) 0}, 
	{(BODY_INDEX) 9056, (BODY_INDEX) -1, (int16) -1, (int16 *) 0}, 
	{(BODY_INDEX) 9057, (BODY_INDEX) -1, (int16) -1, (int16 *) 0}, 
	{(BODY_INDEX) 11087, (BODY_INDEX) -1, (int16) -1, (int16 *) 0}, 
	{(BODY_INDEX) 11045, (BODY_INDEX) -1, (int16) -1, (int16 *) 0}, 
	{(BODY_INDEX) 11066, (BODY_INDEX) -1, (int16) 546, (int16 *) 0}, 
	{(BODY_INDEX) 11071, (BODY_INDEX) -1, (int16) -1, (int16 *) 0}, 
	{(BODY_INDEX) 11080, (BODY_INDEX) -1, (int16) -1, (int16 *) 0}, 
	{(BODY_INDEX) -1, (BODY_INDEX) 0, (int16) 1467, gen_type4_1930}, 
	{(BODY_INDEX) 10313, (BODY_INDEX) -1, (int16) -1, (int16 *) 0}, 
	{(BODY_INDEX) 10466, (BODY_INDEX) -1, (int16) 1885, (int16 *) 0}, 
	{(BODY_INDEX) 10467, (BODY_INDEX) -1, (int16) 1885, (int16 *) 0}, 
	{(BODY_INDEX) 11072, (BODY_INDEX) -1, (int16) -1, (int16 *) 0}, 
	{(BODY_INDEX) 10483, (BODY_INDEX) -1, (int16) -1, (int16 *) 0}, 
	{(BODY_INDEX) 10318, (BODY_INDEX) -1, (int16) -1, (int16 *) 0}, 
	{(BODY_INDEX) 11070, (BODY_INDEX) -1, (int16) -1, (int16 *) 0}, 
	{(BODY_INDEX) 27585, (BODY_INDEX) -1, (int16) -1, (int16 *) 0}, 
	{(BODY_INDEX) 11061, (BODY_INDEX) -1, (int16) 1885, (int16 *) 0}, 
	{(BODY_INDEX) 11062, (BODY_INDEX) -1, (int16) 1885, (int16 *) 0}, 
	{(BODY_INDEX) 11072, (BODY_INDEX) -1, (int16) -1, (int16 *) 0}, 
	{(BODY_INDEX) 10483, (BODY_INDEX) -1, (int16) -1, (int16 *) 0}, 
	{(BODY_INDEX) 9156, (BODY_INDEX) -1, (int16) -1, (int16 *) 0}, 
	{(BODY_INDEX) 11081, (BODY_INDEX) -1, (int16) -1, (int16 *) 0}, 
	{(BODY_INDEX) 11065, (BODY_INDEX) 20, (int16) -1, (int16 *) 0}, 
	{(BODY_INDEX) 9159, (BODY_INDEX) -1, (int16) -1, (int16 *) 0}, 
	{(BODY_INDEX) 8164, (BODY_INDEX) -1, (int16) -1, (int16 *) 0}, 
	{(BODY_INDEX) 9473, (BODY_INDEX) -1, (int16) -1, (int16 *) 0}, 
	{(BODY_INDEX) 11076, (BODY_INDEX) -1, (int16) -1, (int16 *) 0}, 
	{(BODY_INDEX) 11077, (BODY_INDEX) -1, (int16) -1, (int16 *) 0}, 
	{(BODY_INDEX) 9397, (BODY_INDEX) -1, (int16) -1, (int16 *) 0}, 
	{(BODY_INDEX) 11069, (BODY_INDEX) -1, (int16) -1, (int16 *) 0}, 
	{(BODY_INDEX) 11073, (BODY_INDEX) -1, (int16) -1, (int16 *) 0}, 
	{(BODY_INDEX) 9170, (BODY_INDEX) -1, (int16) -1, (int16 *) 0}, 
	{(BODY_INDEX) 11084, (BODY_INDEX) -1, (int16) -1, (int16 *) 0}, 
	{(BODY_INDEX) 9173, (BODY_INDEX) -1, (int16) -1, (int16 *) 0}, 
	{(BODY_INDEX) 11044, (BODY_INDEX) -1, (int16) -1, (int16 *) 0}, 
	{(BODY_INDEX) 11046, (BODY_INDEX) -1, (int16) -1, (int16 *) 0}, 
	{(BODY_INDEX) 11049, (BODY_INDEX) -1, (int16) -1, (int16 *) 0}, 
	{(BODY_INDEX) 9160, (BODY_INDEX) -1, (int16) 485, (int16 *) 0}, 
	{(BODY_INDEX) 9159, (BODY_INDEX) -1, (int16) -1, (int16 *) 0}, 
	{(BODY_INDEX) 11057, (BODY_INDEX) -1, (int16) -1, (int16 *) 0}, 
	{(BODY_INDEX) 11058, (BODY_INDEX) -1, (int16) -1, (int16 *) 0}, 
	{(BODY_INDEX) 11043, (BODY_INDEX) -1, (int16) -1, (int16 *) 0}, 
	{(BODY_INDEX) 11053, (BODY_INDEX) -1, (int16) -1, (int16 *) 0}, 
	{(BODY_INDEX) 11054, (BODY_INDEX) -1, (int16) -1, (int16 *) 0}, 
	{(BODY_INDEX) 11055, (BODY_INDEX) -1, (int16) 1929, (int16 *) 0}, 
	{(BODY_INDEX) 11068, (BODY_INDEX) 16, (int16) -1, (int16 *) 0}, 
	{(BODY_INDEX) 11065, (BODY_INDEX) 20, (int16) -1, (int16 *) 0}, 
	{(BODY_INDEX) 10466, (BODY_INDEX) -1, (int16) 1885, (int16 *) 0}, 
	{(BODY_INDEX) 10467, (BODY_INDEX) -1, (int16) 1885, (int16 *) 0}, 
	{(BODY_INDEX) 10473, (BODY_INDEX) -1, (int16) 485, (int16 *) 0}, 
	{(BODY_INDEX) 10470, (BODY_INDEX) -1, (int16) -1, (int16 *) 0}, 
	{(BODY_INDEX) 11083, (BODY_INDEX) -1, (int16) -1, (int16 *) 0}, 
	{(BODY_INDEX) 11042, (BODY_INDEX) -1, (int16) -1, (int16 *) 0}, 
	{(BODY_INDEX) 11060, (BODY_INDEX) -1, (int16) 1885, (int16 *) 0}, 
	{(BODY_INDEX) 9168, (BODY_INDEX) -1, (int16) -1, (int16 *) 0}, 
	{(BODY_INDEX) 11075, (BODY_INDEX) -1, (int16) -1, (int16 *) 0}, 
	{(BODY_INDEX) 8166, (BODY_INDEX) -1, (int16) -1, (int16 *) 0}, 
	{(BODY_INDEX) 8167, (BODY_INDEX) -1, (int16) -1, (int16 *) 0}, 
	{(BODY_INDEX) 8168, (BODY_INDEX) -1, (int16) -1, (int16 *) 0}, 
	{(BODY_INDEX) 8169, (BODY_INDEX) -1, (int16) -1, (int16 *) 0}, 
	{(BODY_INDEX) 11082, (BODY_INDEX) -1, (int16) -1, (int16 *) 0}, 
	{(BODY_INDEX) 11085, (BODY_INDEX) -1, (int16) -1, (int16 *) 0}, 
	{(BODY_INDEX) 11086, (BODY_INDEX) -1, (int16) -1, (int16 *) 0}, 
	{(BODY_INDEX) 11088, (BODY_INDEX) -1, (int16) -1, (int16 *) 0}, 
	{(BODY_INDEX) 11089, (BODY_INDEX) -1, (int16) -1, (int16 *) 0}, 
	{(BODY_INDEX) 11047, (BODY_INDEX) -1, (int16) -1, (int16 *) 0}, 
	{(BODY_INDEX) 11048, (BODY_INDEX) -1, (int16) -1, (int16 *) 0}, 
	{(BODY_INDEX) 11052, (BODY_INDEX) -1, (int16) 1929, (int16 *) 0}, 
	{(BODY_INDEX) 11063, (BODY_INDEX) -1, (int16) 1885, (int16 *) 0}, 
	{(BODY_INDEX) 11064, (BODY_INDEX) -1, (int16) 1885, (int16 *) 0}, 
	{(BODY_INDEX) 11074, (BODY_INDEX) -1, (int16) -1, (int16 *) 0}, 
	{(BODY_INDEX) 11079, (BODY_INDEX) -1, (int16) -1, (int16 *) 0}, 
	{(BODY_INDEX) 9166, (BODY_INDEX) -1, (int16) -1, (int16 *) 0}, 
	{(BODY_INDEX) 9167, (BODY_INDEX) -1, (int16) -1, (int16 *) 0}, 
	{(BODY_INDEX) 9169, (BODY_INDEX) -1, (int16) -1, (int16 *) 0}, 
	{(BODY_INDEX) 11050, (BODY_INDEX) -1, (int16) -1, (int16 *) 0}, 
	{(BODY_INDEX) 11051, (BODY_INDEX) -1, (int16) 1929, (int16 *) 0}, 
	{(BODY_INDEX) 8159, (BODY_INDEX) -1, (int16) -1, (int16 *) 0}, 
	{(BODY_INDEX) 8160, (BODY_INDEX) -1, (int16) -1, (int16 *) 0}, 
	{(BODY_INDEX) -1, (BODY_INDEX)-1, (int16) -1, (int16 *) 0},
	{(BODY_INDEX) 8372, (BODY_INDEX) -1, (int16) -1, (int16 *) 0}, 
	{(BODY_INDEX) 9060, (BODY_INDEX) -1, (int16) -1, (int16 *) 0}, 
	{(BODY_INDEX) 8163, (BODY_INDEX) -1, (int16) -1, (int16 *) 0}, 
	{(BODY_INDEX) 9751, (BODY_INDEX) -1, (int16) -1, (int16 *) 0}, 
	{(BODY_INDEX) 9752, (BODY_INDEX) -1, (int16) -1, (int16 *) 0}, 
	{(BODY_INDEX) 9747, (BODY_INDEX) -1, (int16) -1, (int16 *) 0}, 
	{(BODY_INDEX) 9749, (BODY_INDEX) -1, (int16) -1, (int16 *) 0}, 
	{(BODY_INDEX) 10496, (BODY_INDEX) -1, (int16) -1, (int16 *) 0}, 
	{(BODY_INDEX) 9402, (BODY_INDEX) -1, (int16) -1, (int16 *) 0}, 
	{(BODY_INDEX) 10471, (BODY_INDEX) -1, (int16) -1, (int16 *) 0}, 
	{(BODY_INDEX) 9748, (BODY_INDEX) -1, (int16) -1, (int16 *) 0}, 
	{(BODY_INDEX) 9474, (BODY_INDEX) -1, (int16) -1, (int16 *) 0}, 
	{(BODY_INDEX) 11078, (BODY_INDEX) -1, (int16) -1, (int16 *) 0}, 
	{(BODY_INDEX) 8161, (BODY_INDEX) -1, (int16) -1, (int16 *) 0}, 
};
extern void Init1930(void);
void Init1930(void)
{
	IDSC(desc_1930, 0, RTUD(1929));
	IDSC(desc_1930 + 1, 1, RTUD(1929));
	IDSC(desc_1930 + 31, 4, RTUD(1929));
	IDSC(desc_1930 + 60, 39, RTUD(1929));
	IDSC(desc_1930 + 68, 43, RTUD(1929));
	IDSC(desc_1930 + 69, 46, RTUD(1929));
	IDSC(desc_1930 + 74, 50, RTUD(1929));
	IDSC(desc_1930 + 77, 54, RTUD(1929));
	IDSC(desc_1930 + 84, 86, RTUD(1929));
	IDSC(desc_1930 + 85, 1593, RTUD(1929));
	IDSC(desc_1930 + 86, 102, RTUD(1929));
	IDSC(desc_1930 + 90, 115, RTUD(1929));
	IDSC(desc_1930 + 98, 131, RTUD(1929));
	IDSC(desc_1930 + 107, 138, RTUD(1929));
	IDSC(desc_1930 + 108, 140, RTUD(1929));
	IDSC(desc_1930 + 109, 160, RTUD(1929));
	IDSC(desc_1930 + 121, 161, RTUD(1929));
	IDSC(desc_1930 + 123, 163, RTUD(1929));
	IDSC(desc_1930 + 130, 166, RTUD(1929));
	IDSC(desc_1930 + 138, 171, RTUD(1929));
	IDSC(desc_1930 + 153, 177, RTUD(1929));
	IDSC(desc_1930 + 158, 193, RTUD(1929));
	IDSC(desc_1930 + 159, 195, RTUD(1929));
	IDSC(desc_1930 + 161, 200, RTUD(1929));
}

#ifdef __cplusplus
}
#endif

