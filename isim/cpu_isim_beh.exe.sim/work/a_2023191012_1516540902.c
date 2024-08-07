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
static const char *ng0 = "D:/cpuuu/reg.vhd";



static void work_a_2023191012_1516540902_p_0(char *t0)
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
    int64 t10;
    char *t11;
    char *t12;
    char *t13;

LAB0:    t1 = (t0 + 1436U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(13, ng0);

LAB6:    t2 = (t0 + 1632);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB7;

LAB1:    return;
LAB4:    t6 = (t0 + 1632);
    *((int *)t6) = 0;
    xsi_set_current_line(14, ng0);
    t10 = (1 * 1000LL);
    t2 = (t0 + 592U);
    t4 = *((char **)t2);
    t2 = (t0 + 1676);
    t6 = (t2 + 32U);
    t7 = *((char **)t6);
    t11 = (t7 + 40U);
    t12 = *((char **)t11);
    memcpy(t12, t4, 16U);
    xsi_driver_first_trans_delta(t2, 0U, 16U, t10);
    t13 = (t0 + 1676);
    xsi_driver_intertial_reject(t13, t10, t10);
    goto LAB2;

LAB5:    t4 = (t0 + 660U);
    t5 = xsi_signal_has_event(t4);
    if (t5 == 1)
        goto LAB8;

LAB9:    t3 = (unsigned char)0;

LAB10:    if (t3 == 1)
        goto LAB4;
    else
        goto LAB6;

LAB7:    goto LAB5;

LAB8:    t6 = (t0 + 684U);
    t7 = *((char **)t6);
    t8 = *((unsigned char *)t7);
    t9 = (t8 == (unsigned char)3);
    t3 = t9;
    goto LAB10;

}


extern void work_a_2023191012_1516540902_init()
{
	static char *pe[] = {(void *)work_a_2023191012_1516540902_p_0};
	xsi_register_didat("work_a_2023191012_1516540902", "isim/cpu_isim_beh.exe.sim/work/a_2023191012_1516540902.didat");
	xsi_register_executes(pe);
}
