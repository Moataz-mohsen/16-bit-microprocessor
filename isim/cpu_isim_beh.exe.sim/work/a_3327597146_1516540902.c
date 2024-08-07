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
static const char *ng0 = "D:/cpuuu/shift.vhd";
extern char *IEEE_P_2592010699;



static void work_a_3327597146_1516540902_p_0(char *t0)
{
    char t15[16];
    char t16[16];
    char *t1;
    char *t2;
    unsigned char t3;
    int64 t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    int t17;
    unsigned int t18;
    char *t19;
    char *t20;
    unsigned int t21;
    unsigned int t22;
    int t23;
    unsigned int t24;
    unsigned char t25;
    char *t26;
    char *t27;
    static char *nl0[] = {&&LAB3, &&LAB4, &&LAB5, &&LAB6, &&LAB7};

LAB0:    xsi_set_current_line(13, ng0);
    t1 = (t0 + 684U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (char *)((nl0) + t3);
    goto **((char **)t1);

LAB2:    t1 = (t0 + 1632);
    *((int *)t1) = 1;

LAB1:    return;
LAB3:    xsi_set_current_line(15, ng0);
    t4 = (1 * 1000LL);
    t5 = (t0 + 592U);
    t6 = *((char **)t5);
    t5 = (t0 + 1676);
    t7 = (t5 + 32U);
    t8 = *((char **)t7);
    t9 = (t8 + 40U);
    t10 = *((char **)t9);
    memcpy(t10, t6, 16U);
    xsi_driver_first_trans_delta(t5, 0U, 16U, t4);
    t11 = (t0 + 1676);
    xsi_driver_intertial_reject(t11, t4, t4);
    goto LAB2;

LAB4:    xsi_set_current_line(17, ng0);
    t4 = (1 * 1000LL);
    t1 = (t0 + 592U);
    t2 = *((char **)t1);
    t12 = (15 - 14);
    t13 = (t12 * 1U);
    t14 = (0 + t13);
    t1 = (t2 + t14);
    t6 = ((IEEE_P_2592010699) + 2332);
    t7 = (t16 + 0U);
    t8 = (t7 + 0U);
    *((int *)t8) = 14;
    t8 = (t7 + 4U);
    *((int *)t8) = 0;
    t8 = (t7 + 8U);
    *((int *)t8) = -1;
    t17 = (0 - 14);
    t18 = (t17 * -1);
    t18 = (t18 + 1);
    t8 = (t7 + 12U);
    *((unsigned int *)t8) = t18;
    t5 = xsi_base_array_concat(t5, t15, t6, (char)97, t1, t16, (char)99, (unsigned char)2, (char)101);
    t18 = (15U + 1U);
    t3 = (16U != t18);
    if (t3 == 1)
        goto LAB8;

LAB9:    t8 = (t0 + 1676);
    t9 = (t8 + 32U);
    t10 = *((char **)t9);
    t11 = (t10 + 40U);
    t19 = *((char **)t11);
    memcpy(t19, t5, 16U);
    xsi_driver_first_trans_delta(t8, 0U, 16U, t4);
    t20 = (t0 + 1676);
    xsi_driver_intertial_reject(t20, t4, t4);
    goto LAB2;

LAB5:    xsi_set_current_line(19, ng0);
    t4 = (1 * 1000LL);
    t1 = (t0 + 592U);
    t2 = *((char **)t1);
    t12 = (15 - 15);
    t13 = (t12 * 1U);
    t14 = (0 + t13);
    t1 = (t2 + t14);
    t6 = ((IEEE_P_2592010699) + 2332);
    t7 = (t16 + 0U);
    t8 = (t7 + 0U);
    *((int *)t8) = 15;
    t8 = (t7 + 4U);
    *((int *)t8) = 1;
    t8 = (t7 + 8U);
    *((int *)t8) = -1;
    t17 = (1 - 15);
    t18 = (t17 * -1);
    t18 = (t18 + 1);
    t8 = (t7 + 12U);
    *((unsigned int *)t8) = t18;
    t5 = xsi_base_array_concat(t5, t15, t6, (char)99, (unsigned char)2, (char)97, t1, t16, (char)101);
    t18 = (1U + 15U);
    t3 = (16U != t18);
    if (t3 == 1)
        goto LAB10;

LAB11:    t8 = (t0 + 1676);
    t9 = (t8 + 32U);
    t10 = *((char **)t9);
    t11 = (t10 + 40U);
    t19 = *((char **)t11);
    memcpy(t19, t5, 16U);
    xsi_driver_first_trans_delta(t8, 0U, 16U, t4);
    t20 = (t0 + 1676);
    xsi_driver_intertial_reject(t20, t4, t4);
    goto LAB2;

LAB6:    xsi_set_current_line(21, ng0);
    t4 = (1 * 1000LL);
    t1 = (t0 + 592U);
    t2 = *((char **)t1);
    t12 = (15 - 14);
    t13 = (t12 * 1U);
    t14 = (0 + t13);
    t1 = (t2 + t14);
    t5 = (t0 + 592U);
    t6 = *((char **)t5);
    t17 = (15 - 15);
    t18 = (t17 * -1);
    t21 = (1U * t18);
    t22 = (0 + t21);
    t5 = (t6 + t22);
    t3 = *((unsigned char *)t5);
    t8 = ((IEEE_P_2592010699) + 2332);
    t9 = (t16 + 0U);
    t10 = (t9 + 0U);
    *((int *)t10) = 14;
    t10 = (t9 + 4U);
    *((int *)t10) = 0;
    t10 = (t9 + 8U);
    *((int *)t10) = -1;
    t23 = (0 - 14);
    t24 = (t23 * -1);
    t24 = (t24 + 1);
    t10 = (t9 + 12U);
    *((unsigned int *)t10) = t24;
    t7 = xsi_base_array_concat(t7, t15, t8, (char)97, t1, t16, (char)99, t3, (char)101);
    t24 = (15U + 1U);
    t25 = (16U != t24);
    if (t25 == 1)
        goto LAB12;

LAB13:    t10 = (t0 + 1676);
    t11 = (t10 + 32U);
    t19 = *((char **)t11);
    t20 = (t19 + 40U);
    t26 = *((char **)t20);
    memcpy(t26, t7, 16U);
    xsi_driver_first_trans_delta(t10, 0U, 16U, t4);
    t27 = (t0 + 1676);
    xsi_driver_intertial_reject(t27, t4, t4);
    goto LAB2;

LAB7:    xsi_set_current_line(23, ng0);
    t4 = (1 * 1000LL);
    t1 = (t0 + 592U);
    t2 = *((char **)t1);
    t17 = (0 - 15);
    t12 = (t17 * -1);
    t13 = (1U * t12);
    t14 = (0 + t13);
    t1 = (t2 + t14);
    t3 = *((unsigned char *)t1);
    t5 = (t0 + 592U);
    t6 = *((char **)t5);
    t18 = (15 - 15);
    t21 = (t18 * 1U);
    t22 = (0 + t21);
    t5 = (t6 + t22);
    t8 = ((IEEE_P_2592010699) + 2332);
    t9 = (t16 + 0U);
    t10 = (t9 + 0U);
    *((int *)t10) = 15;
    t10 = (t9 + 4U);
    *((int *)t10) = 1;
    t10 = (t9 + 8U);
    *((int *)t10) = -1;
    t23 = (1 - 15);
    t24 = (t23 * -1);
    t24 = (t24 + 1);
    t10 = (t9 + 12U);
    *((unsigned int *)t10) = t24;
    t7 = xsi_base_array_concat(t7, t15, t8, (char)99, t3, (char)97, t5, t16, (char)101);
    t24 = (1U + 15U);
    t25 = (16U != t24);
    if (t25 == 1)
        goto LAB14;

LAB15:    t10 = (t0 + 1676);
    t11 = (t10 + 32U);
    t19 = *((char **)t11);
    t20 = (t19 + 40U);
    t26 = *((char **)t20);
    memcpy(t26, t7, 16U);
    xsi_driver_first_trans_delta(t10, 0U, 16U, t4);
    t27 = (t0 + 1676);
    xsi_driver_intertial_reject(t27, t4, t4);
    goto LAB2;

LAB8:    xsi_size_not_matching(16U, t18, 0);
    goto LAB9;

LAB10:    xsi_size_not_matching(16U, t18, 0);
    goto LAB11;

LAB12:    xsi_size_not_matching(16U, t24, 0);
    goto LAB13;

LAB14:    xsi_size_not_matching(16U, t24, 0);
    goto LAB15;

}


extern void work_a_3327597146_1516540902_init()
{
	static char *pe[] = {(void *)work_a_3327597146_1516540902_p_0};
	xsi_register_didat("work_a_3327597146_1516540902", "isim/cpu_isim_beh.exe.sim/work/a_3327597146_1516540902.didat");
	xsi_register_executes(pe);
}
