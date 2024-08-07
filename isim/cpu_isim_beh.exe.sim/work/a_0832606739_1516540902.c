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
static const char *ng0 = "D:/cpuuu/alu.vhd";
extern char *WORK_P_2160719778;
extern char *IEEE_P_2592010699;
extern char *IEEE_P_3620187407;

char *ieee_p_2592010699_sub_1697423399_503743352(char *, char *, char *, char *, char *, char *);
char *ieee_p_2592010699_sub_1735675855_503743352(char *, char *, char *, char *, char *, char *);
char *ieee_p_2592010699_sub_1837678034_503743352(char *, char *, char *, char *);
char *ieee_p_2592010699_sub_795620321_503743352(char *, char *, char *, char *, char *, char *);
char *ieee_p_3620187407_sub_767668596_3965413181(char *, char *, char *, char *, char *, char *);
char *ieee_p_3620187407_sub_767740470_3965413181(char *, char *, char *, char *, char *, char *);


static void work_a_0832606739_1516540902_p_0(char *t0)
{
    char t30[16];
    char t34[16];
    char *t1;
    char *t2;
    char *t3;
    int t4;
    char *t5;
    int t6;
    char *t7;
    int t8;
    char *t9;
    int t10;
    char *t11;
    int t12;
    char *t13;
    int t14;
    char *t15;
    int t16;
    char *t17;
    int t18;
    char *t19;
    int t20;
    char *t21;
    int t22;
    int64 t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    unsigned int t31;
    unsigned int t32;
    unsigned char t33;

LAB0:    xsi_set_current_line(14, ng0);
    t1 = (t0 + 776U);
    t2 = *((char **)t1);
    t1 = ((WORK_P_2160719778) + 672U);
    t3 = *((char **)t1);
    t4 = xsi_mem_cmp(t3, t2, 4U);
    if (t4 == 1)
        goto LAB3;

LAB14:    t1 = ((WORK_P_2160719778) + 740U);
    t5 = *((char **)t1);
    t6 = xsi_mem_cmp(t5, t2, 4U);
    if (t6 == 1)
        goto LAB4;

LAB15:    t1 = ((WORK_P_2160719778) + 808U);
    t7 = *((char **)t1);
    t8 = xsi_mem_cmp(t7, t2, 4U);
    if (t8 == 1)
        goto LAB5;

LAB16:    t1 = ((WORK_P_2160719778) + 944U);
    t9 = *((char **)t1);
    t10 = xsi_mem_cmp(t9, t2, 4U);
    if (t10 == 1)
        goto LAB6;

LAB17:    t1 = ((WORK_P_2160719778) + 876U);
    t11 = *((char **)t1);
    t12 = xsi_mem_cmp(t11, t2, 4U);
    if (t12 == 1)
        goto LAB7;

LAB18:    t1 = ((WORK_P_2160719778) + 1012U);
    t13 = *((char **)t1);
    t14 = xsi_mem_cmp(t13, t2, 4U);
    if (t14 == 1)
        goto LAB8;

LAB19:    t1 = ((WORK_P_2160719778) + 1080U);
    t15 = *((char **)t1);
    t16 = xsi_mem_cmp(t15, t2, 4U);
    if (t16 == 1)
        goto LAB9;

LAB20:    t1 = ((WORK_P_2160719778) + 1148U);
    t17 = *((char **)t1);
    t18 = xsi_mem_cmp(t17, t2, 4U);
    if (t18 == 1)
        goto LAB10;

LAB21:    t1 = ((WORK_P_2160719778) + 1216U);
    t19 = *((char **)t1);
    t20 = xsi_mem_cmp(t19, t2, 4U);
    if (t20 == 1)
        goto LAB11;

LAB22:    t1 = ((WORK_P_2160719778) + 1284U);
    t21 = *((char **)t1);
    t22 = xsi_mem_cmp(t21, t2, 4U);
    if (t22 == 1)
        goto LAB12;

LAB23:
LAB13:    xsi_set_current_line(36, ng0);
    t23 = (1 * 1000LL);
    t1 = (t0 + 2872);
    t3 = (t0 + 1768);
    t5 = (t3 + 32U);
    t7 = *((char **)t5);
    t9 = (t7 + 40U);
    t11 = *((char **)t9);
    memcpy(t11, t1, 16U);
    xsi_driver_first_trans_delta(t3, 0U, 16U, t23);
    t13 = (t0 + 1768);
    xsi_driver_intertial_reject(t13, t23, t23);

LAB2:    t1 = (t0 + 1724);
    *((int *)t1) = 1;

LAB1:    return;
LAB3:    xsi_set_current_line(16, ng0);
    t23 = (1 * 1000LL);
    t1 = (t0 + 592U);
    t24 = *((char **)t1);
    t1 = (t0 + 1768);
    t25 = (t1 + 32U);
    t26 = *((char **)t25);
    t27 = (t26 + 40U);
    t28 = *((char **)t27);
    memcpy(t28, t24, 16U);
    xsi_driver_first_trans_delta(t1, 0U, 16U, t23);
    t29 = (t0 + 1768);
    xsi_driver_intertial_reject(t29, t23, t23);
    goto LAB2;

LAB4:    xsi_set_current_line(18, ng0);
    t23 = (1 * 1000LL);
    t1 = (t0 + 592U);
    t2 = *((char **)t1);
    t1 = (t0 + 596U);
    t3 = *((char **)t1);
    t5 = (t0 + 684U);
    t7 = *((char **)t5);
    t5 = (t0 + 688U);
    t9 = *((char **)t5);
    t11 = ieee_p_2592010699_sub_795620321_503743352(IEEE_P_2592010699, t30, t2, t3, t7, t9);
    t13 = (t30 + 12U);
    t31 = *((unsigned int *)t13);
    t32 = (1U * t31);
    t33 = (16U != t32);
    if (t33 == 1)
        goto LAB25;

LAB26:    t15 = (t0 + 1768);
    t17 = (t15 + 32U);
    t19 = *((char **)t17);
    t21 = (t19 + 40U);
    t24 = *((char **)t21);
    memcpy(t24, t11, 16U);
    xsi_driver_first_trans_delta(t15, 0U, 16U, t23);
    t25 = (t0 + 1768);
    xsi_driver_intertial_reject(t25, t23, t23);
    goto LAB2;

LAB5:    xsi_set_current_line(20, ng0);
    t23 = (1 * 1000LL);
    t1 = (t0 + 592U);
    t2 = *((char **)t1);
    t1 = (t0 + 596U);
    t3 = *((char **)t1);
    t5 = (t0 + 684U);
    t7 = *((char **)t5);
    t5 = (t0 + 688U);
    t9 = *((char **)t5);
    t11 = ieee_p_2592010699_sub_1735675855_503743352(IEEE_P_2592010699, t30, t2, t3, t7, t9);
    t13 = (t30 + 12U);
    t31 = *((unsigned int *)t13);
    t32 = (1U * t31);
    t33 = (16U != t32);
    if (t33 == 1)
        goto LAB27;

LAB28:    t15 = (t0 + 1768);
    t17 = (t15 + 32U);
    t19 = *((char **)t17);
    t21 = (t19 + 40U);
    t24 = *((char **)t21);
    memcpy(t24, t11, 16U);
    xsi_driver_first_trans_delta(t15, 0U, 16U, t23);
    t25 = (t0 + 1768);
    xsi_driver_intertial_reject(t25, t23, t23);
    goto LAB2;

LAB6:    xsi_set_current_line(22, ng0);
    t23 = (1 * 1000LL);
    t1 = (t0 + 592U);
    t2 = *((char **)t1);
    t1 = (t0 + 596U);
    t3 = *((char **)t1);
    t5 = (t0 + 684U);
    t7 = *((char **)t5);
    t5 = (t0 + 688U);
    t9 = *((char **)t5);
    t11 = ieee_p_2592010699_sub_1697423399_503743352(IEEE_P_2592010699, t30, t2, t3, t7, t9);
    t13 = (t30 + 12U);
    t31 = *((unsigned int *)t13);
    t32 = (1U * t31);
    t33 = (16U != t32);
    if (t33 == 1)
        goto LAB29;

LAB30:    t15 = (t0 + 1768);
    t17 = (t15 + 32U);
    t19 = *((char **)t17);
    t21 = (t19 + 40U);
    t24 = *((char **)t21);
    memcpy(t24, t11, 16U);
    xsi_driver_first_trans_delta(t15, 0U, 16U, t23);
    t25 = (t0 + 1768);
    xsi_driver_intertial_reject(t25, t23, t23);
    goto LAB2;

LAB7:    xsi_set_current_line(24, ng0);
    t23 = (1 * 1000LL);
    t1 = (t0 + 592U);
    t2 = *((char **)t1);
    t1 = (t0 + 596U);
    t3 = *((char **)t1);
    t5 = ieee_p_2592010699_sub_1837678034_503743352(IEEE_P_2592010699, t30, t2, t3);
    t7 = (t30 + 12U);
    t31 = *((unsigned int *)t7);
    t32 = (1U * t31);
    t33 = (16U != t32);
    if (t33 == 1)
        goto LAB31;

LAB32:    t9 = (t0 + 1768);
    t11 = (t9 + 32U);
    t13 = *((char **)t11);
    t15 = (t13 + 40U);
    t17 = *((char **)t15);
    memcpy(t17, t5, 16U);
    xsi_driver_first_trans_delta(t9, 0U, 16U, t23);
    t19 = (t0 + 1768);
    xsi_driver_intertial_reject(t19, t23, t23);
    goto LAB2;

LAB8:    xsi_set_current_line(26, ng0);
    t23 = (1 * 1000LL);
    t1 = (t0 + 592U);
    t2 = *((char **)t1);
    t1 = (t0 + 596U);
    t3 = *((char **)t1);
    t5 = (t0 + 684U);
    t7 = *((char **)t5);
    t5 = (t0 + 688U);
    t9 = *((char **)t5);
    t11 = ieee_p_3620187407_sub_767668596_3965413181(IEEE_P_3620187407, t30, t2, t3, t7, t9);
    t13 = (t30 + 12U);
    t31 = *((unsigned int *)t13);
    t32 = (1U * t31);
    t33 = (16U != t32);
    if (t33 == 1)
        goto LAB33;

LAB34:    t15 = (t0 + 1768);
    t17 = (t15 + 32U);
    t19 = *((char **)t17);
    t21 = (t19 + 40U);
    t24 = *((char **)t21);
    memcpy(t24, t11, 16U);
    xsi_driver_first_trans_delta(t15, 0U, 16U, t23);
    t25 = (t0 + 1768);
    xsi_driver_intertial_reject(t25, t23, t23);
    goto LAB2;

LAB9:    xsi_set_current_line(28, ng0);
    t23 = (1 * 1000LL);
    t1 = (t0 + 592U);
    t2 = *((char **)t1);
    t1 = (t0 + 596U);
    t3 = *((char **)t1);
    t5 = (t0 + 684U);
    t7 = *((char **)t5);
    t5 = (t0 + 688U);
    t9 = *((char **)t5);
    t11 = ieee_p_3620187407_sub_767740470_3965413181(IEEE_P_3620187407, t30, t2, t3, t7, t9);
    t13 = (t30 + 12U);
    t31 = *((unsigned int *)t13);
    t32 = (1U * t31);
    t33 = (16U != t32);
    if (t33 == 1)
        goto LAB35;

LAB36:    t15 = (t0 + 1768);
    t17 = (t15 + 32U);
    t19 = *((char **)t17);
    t21 = (t19 + 40U);
    t24 = *((char **)t21);
    memcpy(t24, t11, 16U);
    xsi_driver_first_trans_delta(t15, 0U, 16U, t23);
    t25 = (t0 + 1768);
    xsi_driver_intertial_reject(t25, t23, t23);
    goto LAB2;

LAB10:    xsi_set_current_line(30, ng0);
    t23 = (1 * 1000LL);
    t1 = (t0 + 592U);
    t2 = *((char **)t1);
    t1 = (t0 + 596U);
    t3 = *((char **)t1);
    t5 = (t0 + 2824);
    t9 = (t34 + 0U);
    t11 = (t9 + 0U);
    *((int *)t11) = 0;
    t11 = (t9 + 4U);
    *((int *)t11) = 15;
    t11 = (t9 + 8U);
    *((int *)t11) = 1;
    t4 = (15 - 0);
    t31 = (t4 * 1);
    t31 = (t31 + 1);
    t11 = (t9 + 12U);
    *((unsigned int *)t11) = t31;
    t11 = ieee_p_3620187407_sub_767668596_3965413181(IEEE_P_3620187407, t30, t2, t3, t5, t34);
    t13 = (t30 + 12U);
    t31 = *((unsigned int *)t13);
    t32 = (1U * t31);
    t33 = (16U != t32);
    if (t33 == 1)
        goto LAB37;

LAB38:    t15 = (t0 + 1768);
    t17 = (t15 + 32U);
    t19 = *((char **)t17);
    t21 = (t19 + 40U);
    t24 = *((char **)t21);
    memcpy(t24, t11, 16U);
    xsi_driver_first_trans_delta(t15, 0U, 16U, t23);
    t25 = (t0 + 1768);
    xsi_driver_intertial_reject(t25, t23, t23);
    goto LAB2;

LAB11:    xsi_set_current_line(32, ng0);
    t23 = (1 * 1000LL);
    t1 = (t0 + 592U);
    t2 = *((char **)t1);
    t1 = (t0 + 596U);
    t3 = *((char **)t1);
    t5 = (t0 + 2840);
    t9 = (t34 + 0U);
    t11 = (t9 + 0U);
    *((int *)t11) = 0;
    t11 = (t9 + 4U);
    *((int *)t11) = 15;
    t11 = (t9 + 8U);
    *((int *)t11) = 1;
    t4 = (15 - 0);
    t31 = (t4 * 1);
    t31 = (t31 + 1);
    t11 = (t9 + 12U);
    *((unsigned int *)t11) = t31;
    t11 = ieee_p_3620187407_sub_767740470_3965413181(IEEE_P_3620187407, t30, t2, t3, t5, t34);
    t13 = (t30 + 12U);
    t31 = *((unsigned int *)t13);
    t32 = (1U * t31);
    t33 = (16U != t32);
    if (t33 == 1)
        goto LAB39;

LAB40:    t15 = (t0 + 1768);
    t17 = (t15 + 32U);
    t19 = *((char **)t17);
    t21 = (t19 + 40U);
    t24 = *((char **)t21);
    memcpy(t24, t11, 16U);
    xsi_driver_first_trans_delta(t15, 0U, 16U, t23);
    t25 = (t0 + 1768);
    xsi_driver_intertial_reject(t25, t23, t23);
    goto LAB2;

LAB12:    xsi_set_current_line(34, ng0);
    t23 = (1 * 1000LL);
    t1 = (t0 + 2856);
    t3 = (t0 + 1768);
    t5 = (t3 + 32U);
    t7 = *((char **)t5);
    t9 = (t7 + 40U);
    t11 = *((char **)t9);
    memcpy(t11, t1, 16U);
    xsi_driver_first_trans_delta(t3, 0U, 16U, t23);
    t13 = (t0 + 1768);
    xsi_driver_intertial_reject(t13, t23, t23);
    goto LAB2;

LAB24:;
LAB25:    xsi_size_not_matching(16U, t32, 0);
    goto LAB26;

LAB27:    xsi_size_not_matching(16U, t32, 0);
    goto LAB28;

LAB29:    xsi_size_not_matching(16U, t32, 0);
    goto LAB30;

LAB31:    xsi_size_not_matching(16U, t32, 0);
    goto LAB32;

LAB33:    xsi_size_not_matching(16U, t32, 0);
    goto LAB34;

LAB35:    xsi_size_not_matching(16U, t32, 0);
    goto LAB36;

LAB37:    xsi_size_not_matching(16U, t32, 0);
    goto LAB38;

LAB39:    xsi_size_not_matching(16U, t32, 0);
    goto LAB40;

}


extern void work_a_0832606739_1516540902_init()
{
	static char *pe[] = {(void *)work_a_0832606739_1516540902_p_0};
	xsi_register_didat("work_a_0832606739_1516540902", "isim/cpu_isim_beh.exe.sim/work/a_0832606739_1516540902.didat");
	xsi_register_executes(pe);
}
