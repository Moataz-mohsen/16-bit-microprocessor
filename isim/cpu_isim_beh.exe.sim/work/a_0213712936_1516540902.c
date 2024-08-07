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
static const char *ng0 = "D:/cpuuu/trireg.vhd";



static void work_a_0213712936_1516540902_p_0(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    unsigned char t5;
    char *t6;
    char *t7;
    unsigned char t8;
    unsigned char t9;
    char *t10;
    char *t11;

LAB0:    t1 = (t0 + 1620U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(15, ng0);

LAB6:    t2 = (t0 + 1960);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB7;

LAB1:    return;
LAB4:    t6 = (t0 + 1960);
    *((int *)t6) = 0;
    xsi_set_current_line(16, ng0);
    t2 = (t0 + 592U);
    t4 = *((char **)t2);
    t2 = (t0 + 2012);
    t6 = (t2 + 32U);
    t7 = *((char **)t6);
    t10 = (t7 + 40U);
    t11 = *((char **)t10);
    memcpy(t11, t4, 16U);
    xsi_driver_first_trans_fast(t2);
    goto LAB2;

LAB5:    t4 = (t0 + 752U);
    t5 = xsi_signal_has_event(t4);
    if (t5 == 1)
        goto LAB8;

LAB9:    t3 = (unsigned char)0;

LAB10:    if (t3 == 1)
        goto LAB4;
    else
        goto LAB6;

LAB7:    goto LAB5;

LAB8:    t6 = (t0 + 776U);
    t7 = *((char **)t6);
    t8 = *((unsigned char *)t7);
    t9 = (t8 == (unsigned char)3);
    t3 = t9;
    goto LAB10;

}

static void work_a_0213712936_1516540902_p_1(char *t0)
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
    char *t12;

LAB0:    xsi_set_current_line(20, ng0);
    t1 = (t0 + 684U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB2;

LAB4:    t1 = (t0 + 684U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)2);
    if (t4 != 0)
        goto LAB5;

LAB6:    xsi_set_current_line(26, ng0);
    t5 = (1 * 1000LL);
    t1 = (t0 + 3158);
    t6 = (t0 + 2048);
    t7 = (t6 + 32U);
    t8 = *((char **)t7);
    t9 = (t8 + 40U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 16U);
    xsi_driver_first_trans_delta(t6, 0U, 16U, t5);
    t11 = (t0 + 2048);
    xsi_driver_intertial_reject(t11, t5, t5);

LAB3:    t1 = (t0 + 1968);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(21, ng0);
    t5 = (1 * 1000LL);
    t1 = (t0 + 960U);
    t6 = *((char **)t1);
    t1 = (t0 + 2048);
    t7 = (t1 + 32U);
    t8 = *((char **)t7);
    t9 = (t8 + 40U);
    t10 = *((char **)t9);
    memcpy(t10, t6, 16U);
    xsi_driver_first_trans_delta(t1, 0U, 16U, t5);
    t11 = (t0 + 2048);
    xsi_driver_intertial_reject(t11, t5, t5);
    goto LAB3;

LAB5:    xsi_set_current_line(23, ng0);
    t5 = (1 * 1000LL);
    t1 = (t0 + 3142);
    t7 = (t0 + 2048);
    t8 = (t7 + 32U);
    t9 = *((char **)t8);
    t10 = (t9 + 40U);
    t11 = *((char **)t10);
    memcpy(t11, t1, 16U);
    xsi_driver_first_trans_delta(t7, 0U, 16U, t5);
    t12 = (t0 + 2048);
    xsi_driver_intertial_reject(t12, t5, t5);
    goto LAB3;

}


extern void work_a_0213712936_1516540902_init()
{
	static char *pe[] = {(void *)work_a_0213712936_1516540902_p_0,(void *)work_a_0213712936_1516540902_p_1};
	xsi_register_didat("work_a_0213712936_1516540902", "isim/cpu_isim_beh.exe.sim/work/a_0213712936_1516540902.didat");
	xsi_register_executes(pe);
}
