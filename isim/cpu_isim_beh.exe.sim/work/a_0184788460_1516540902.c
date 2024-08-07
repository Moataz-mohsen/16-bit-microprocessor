/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                       */
/*  \   \        Copyright (c) 2003-2009 Xilinx, Inc.                */
/*  /   /          All Right Reserved.                                 */
/* /---/   /\                                                         */
/* \   \  /  \                                                      */
/*  \___\/\___\                                                    */
/***********************************************************************/

/* This file is designed for use with ISim build 0x8ef4fb42 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "D:/cpuuu/regarray.vhd";
extern char *IEEE_P_3620187407;

int ieee_p_3620187407_sub_514432868_3965413181(char *, char *, char *);


static void work_a_0184788460_1516540902_p_0(char *t0)
{
    unsigned char t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    unsigned char t6;
    unsigned char t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    int t12;
    int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    char *t17;
    int64 t18;
    char *t19;
    char *t20;
    char *t21;

LAB0:    xsi_set_current_line(19, ng0);
    t2 = (t0 + 844U);
    t3 = xsi_signal_has_event(t2);
    if (t3 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    xsi_set_current_line(22, ng0);
    t18 = (1 * 1000LL);
    t2 = (t0 + 1224U);
    t4 = *((char **)t2);
    t2 = (t0 + 684U);
    t5 = *((char **)t2);
    t2 = (t0 + 688U);
    t8 = *((char **)t2);
    t12 = ieee_p_3620187407_sub_514432868_3965413181(IEEE_P_3620187407, t5, t8);
    t13 = (t12 - 0);
    t14 = (t13 * 1);
    xsi_vhdl_check_range_of_index(0, 7, 1, t12);
    t15 = (16U * t14);
    t16 = (0 + t15);
    t9 = (t4 + t16);
    t10 = (t0 + 2172);
    t11 = (t10 + 32U);
    t17 = *((char **)t11);
    t19 = (t17 + 40U);
    t20 = *((char **)t19);
    memcpy(t20, t9, 16U);
    xsi_driver_first_trans_delta(t10, 0U, 16U, t18);
    t21 = (t0 + 2172);
    xsi_driver_intertial_reject(t21, t18, t18);
    t2 = (t0 + 2120);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(20, ng0);
    t4 = (t0 + 592U);
    t8 = *((char **)t4);
    t4 = (t0 + 1224U);
    t9 = *((char **)t4);
    t4 = (t0 + 684U);
    t10 = *((char **)t4);
    t4 = (t0 + 688U);
    t11 = *((char **)t4);
    t12 = ieee_p_3620187407_sub_514432868_3965413181(IEEE_P_3620187407, t10, t11);
    t13 = (t12 - 0);
    t14 = (t13 * 1);
    xsi_vhdl_check_range_of_index(0, 7, 1, t12);
    t15 = (16U * t14);
    t16 = (0 + t15);
    t17 = (t9 + t16);
    memcpy(t17, t8, 16U);
    goto LAB3;

LAB5:    t4 = (t0 + 868U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    t1 = t7;
    goto LAB7;

}

static void work_a_0184788460_1516540902_p_1(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    int64 t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;

LAB0:    xsi_set_current_line(26, ng0);
    t1 = (t0 + 776U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB2;

LAB4:    xsi_set_current_line(29, ng0);
    t5 = (1 * 1000LL);
    t1 = (t0 + 3681);
    t6 = (t0 + 2208);
    t7 = (t6 + 32U);
    t8 = *((char **)t7);
    t9 = (t8 + 40U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 16U);
    xsi_driver_first_trans_delta(t6, 0U, 16U, t5);
    t11 = (t0 + 2208);
    xsi_driver_intertial_reject(t11, t5, t5);

LAB3:    t1 = (t0 + 2128);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(27, ng0);
    t5 = (1 * 1000LL);
    t1 = (t0 + 1052U);
    t6 = *((char **)t1);
    t1 = (t0 + 2208);
    t7 = (t1 + 32U);
    t8 = *((char **)t7);
    t9 = (t8 + 40U);
    t10 = *((char **)t9);
    memcpy(t10, t6, 16U);
    xsi_driver_first_trans_delta(t1, 0U, 16U, t5);
    t11 = (t0 + 2208);
    xsi_driver_intertial_reject(t11, t5, t5);
    goto LAB3;

}


extern void work_a_0184788460_1516540902_init()
{
	static char *pe[] = {(void *)work_a_0184788460_1516540902_p_0,(void *)work_a_0184788460_1516540902_p_1};
	xsi_register_didat("work_a_0184788460_1516540902", "isim/cpu_isim_beh.exe.sim/work/a_0184788460_1516540902.didat");
	xsi_register_executes(pe);
}
