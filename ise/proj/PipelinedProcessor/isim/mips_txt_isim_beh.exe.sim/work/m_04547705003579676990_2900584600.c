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

/* This file is designed for use with ISim build 0xfbc00daa */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "/media/shared/SharedFile/ISE Files/ProcessorDesign/ise/src/tmp1/mudv.v";
static int ng1[] = {0, 0};
static int ng2[] = {1, 0};
static unsigned int ng3[] = {0U, 0U};
static unsigned int ng4[] = {1U, 0U};
static unsigned int ng5[] = {2U, 0U};
static unsigned int ng6[] = {3U, 0U};
static unsigned int ng7[] = {4U, 0U};



static void Always_24_0(char *t0)
{
    char t13[8];
    char t23[8];
    char t37[8];
    char t44[8];
    char t89[8];
    char t91[16];
    char t92[16];
    char t93[16];
    char t94[16];
    char t95[16];
    char t96[16];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    char *t12;
    char *t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    char *t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    char *t30;
    char *t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    char *t35;
    char *t36;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    char *t43;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    char *t48;
    char *t49;
    char *t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    char *t58;
    char *t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    int t68;
    int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    char *t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    char *t82;
    char *t83;
    char *t84;
    char *t85;
    char *t86;
    char *t87;
    char *t88;
    char *t90;

LAB0:    t1 = (t0 + 5232U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(24, ng0);
    t2 = (t0 + 5552);
    *((int *)t2) = 1;
    t3 = (t0 + 5264);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(24, ng0);

LAB5:    xsi_set_current_line(25, ng0);
    t4 = (t0 + 2160U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(33, ng0);
    t2 = (t0 + 3360);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t13, 0, 8);
    t5 = (t4 + 4);
    t6 = *((unsigned int *)t5);
    t7 = (~(t6));
    t8 = *((unsigned int *)t4);
    t9 = (t8 & t7);
    t10 = (t9 & 1U);
    if (t10 != 0)
        goto LAB13;

LAB11:    if (*((unsigned int *)t5) == 0)
        goto LAB10;

LAB12:    t11 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t11) = 1;

LAB13:    t12 = (t13 + 4);
    t14 = (t4 + 4);
    t15 = *((unsigned int *)t4);
    t16 = (~(t15));
    *((unsigned int *)t13) = t16;
    *((unsigned int *)t12) = 0;
    if (*((unsigned int *)t14) != 0)
        goto LAB15;

LAB14:    t21 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t21 & 1U);
    t22 = *((unsigned int *)t12);
    *((unsigned int *)t12) = (t22 & 1U);
    memset(t23, 0, 8);
    t24 = (t13 + 4);
    t25 = *((unsigned int *)t24);
    t26 = (~(t25));
    t27 = *((unsigned int *)t13);
    t28 = (t27 & t26);
    t29 = (t28 & 1U);
    if (t29 != 0)
        goto LAB16;

LAB17:    if (*((unsigned int *)t24) != 0)
        goto LAB18;

LAB19:    t31 = (t23 + 4);
    t32 = *((unsigned int *)t23);
    t33 = *((unsigned int *)t31);
    t34 = (t32 || t33);
    if (t34 > 0)
        goto LAB20;

LAB21:    memcpy(t44, t23, 8);

LAB22:    t76 = (t44 + 4);
    t77 = *((unsigned int *)t76);
    t78 = (~(t77));
    t79 = *((unsigned int *)t44);
    t80 = (t79 & t78);
    t81 = (t80 != 0);
    if (t81 > 0)
        goto LAB30;

LAB31:    xsi_set_current_line(46, ng0);
    t2 = (t0 + 3360);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    memset(t13, 0, 8);
    t11 = (t5 + 4);
    t6 = *((unsigned int *)t11);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 & 1U);
    if (t10 != 0)
        goto LAB48;

LAB49:    if (*((unsigned int *)t11) != 0)
        goto LAB50;

LAB51:    t14 = (t13 + 4);
    t15 = *((unsigned int *)t13);
    t16 = *((unsigned int *)t14);
    t17 = (t15 || t16);
    if (t17 > 0)
        goto LAB52;

LAB53:    memcpy(t44, t13, 8);

LAB54:    t84 = (t44 + 4);
    t75 = *((unsigned int *)t84);
    t77 = (~(t75));
    t78 = *((unsigned int *)t44);
    t79 = (t78 & t77);
    t80 = (t79 != 0);
    if (t80 > 0)
        goto LAB66;

LAB67:    xsi_set_current_line(48, ng0);
    t2 = (t0 + 3360);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    memset(t13, 0, 8);
    t11 = (t5 + 4);
    t6 = *((unsigned int *)t11);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 & 1U);
    if (t10 != 0)
        goto LAB70;

LAB71:    if (*((unsigned int *)t11) != 0)
        goto LAB72;

LAB73:    t14 = (t13 + 4);
    t15 = *((unsigned int *)t13);
    t16 = *((unsigned int *)t14);
    t17 = (t15 || t16);
    if (t17 > 0)
        goto LAB74;

LAB75:    memcpy(t44, t13, 8);

LAB76:    t84 = (t44 + 4);
    t75 = *((unsigned int *)t84);
    t77 = (~(t75));
    t78 = *((unsigned int *)t44);
    t79 = (t78 & t77);
    t80 = (t79 != 0);
    if (t80 > 0)
        goto LAB88;

LAB89:    xsi_set_current_line(70, ng0);

LAB111:    xsi_set_current_line(71, ng0);
    t2 = (t0 + 2640U);
    t4 = *((char **)t2);

LAB112:    t2 = ((char*)((ng4)));
    t68 = xsi_vlog_unsigned_case_compare(t4, 2, t2, 2);
    if (t68 == 1)
        goto LAB113;

LAB114:    t2 = ((char*)((ng5)));
    t68 = xsi_vlog_unsigned_case_compare(t4, 2, t2, 2);
    if (t68 == 1)
        goto LAB115;

LAB116:
LAB118:
LAB117:
LAB119:
LAB90:
LAB68:
LAB32:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(25, ng0);

LAB9:    xsi_set_current_line(26, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 3680);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 32, 0LL);
    xsi_set_current_line(27, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3520);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);
    xsi_set_current_line(28, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3840);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);
    xsi_set_current_line(29, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4000);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);
    xsi_set_current_line(30, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4160);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 3, 0LL);
    xsi_set_current_line(31, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3360);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(32, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4320);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    goto LAB8;

LAB10:    *((unsigned int *)t13) = 1;
    goto LAB13;

LAB15:    t17 = *((unsigned int *)t13);
    t18 = *((unsigned int *)t14);
    *((unsigned int *)t13) = (t17 | t18);
    t19 = *((unsigned int *)t12);
    t20 = *((unsigned int *)t14);
    *((unsigned int *)t12) = (t19 | t20);
    goto LAB14;

LAB16:    *((unsigned int *)t23) = 1;
    goto LAB19;

LAB18:    t30 = (t23 + 4);
    *((unsigned int *)t23) = 1;
    *((unsigned int *)t30) = 1;
    goto LAB19;

LAB20:    t35 = (t0 + 2320U);
    t36 = *((char **)t35);
    memset(t37, 0, 8);
    t35 = (t36 + 4);
    t38 = *((unsigned int *)t35);
    t39 = (~(t38));
    t40 = *((unsigned int *)t36);
    t41 = (t40 & t39);
    t42 = (t41 & 1U);
    if (t42 != 0)
        goto LAB23;

LAB24:    if (*((unsigned int *)t35) != 0)
        goto LAB25;

LAB26:    t45 = *((unsigned int *)t23);
    t46 = *((unsigned int *)t37);
    t47 = (t45 & t46);
    *((unsigned int *)t44) = t47;
    t48 = (t23 + 4);
    t49 = (t37 + 4);
    t50 = (t44 + 4);
    t51 = *((unsigned int *)t48);
    t52 = *((unsigned int *)t49);
    t53 = (t51 | t52);
    *((unsigned int *)t50) = t53;
    t54 = *((unsigned int *)t50);
    t55 = (t54 != 0);
    if (t55 == 1)
        goto LAB27;

LAB28:
LAB29:    goto LAB22;

LAB23:    *((unsigned int *)t37) = 1;
    goto LAB26;

LAB25:    t43 = (t37 + 4);
    *((unsigned int *)t37) = 1;
    *((unsigned int *)t43) = 1;
    goto LAB26;

LAB27:    t56 = *((unsigned int *)t44);
    t57 = *((unsigned int *)t50);
    *((unsigned int *)t44) = (t56 | t57);
    t58 = (t23 + 4);
    t59 = (t37 + 4);
    t60 = *((unsigned int *)t23);
    t61 = (~(t60));
    t62 = *((unsigned int *)t58);
    t63 = (~(t62));
    t64 = *((unsigned int *)t37);
    t65 = (~(t64));
    t66 = *((unsigned int *)t59);
    t67 = (~(t66));
    t68 = (t61 & t63);
    t69 = (t65 & t67);
    t70 = (~(t68));
    t71 = (~(t69));
    t72 = *((unsigned int *)t50);
    *((unsigned int *)t50) = (t72 & t70);
    t73 = *((unsigned int *)t50);
    *((unsigned int *)t50) = (t73 & t71);
    t74 = *((unsigned int *)t44);
    *((unsigned int *)t44) = (t74 & t70);
    t75 = *((unsigned int *)t44);
    *((unsigned int *)t44) = (t75 & t71);
    goto LAB29;

LAB30:    xsi_set_current_line(33, ng0);

LAB33:    xsi_set_current_line(34, ng0);
    t82 = ((char*)((ng2)));
    t83 = (t0 + 3360);
    xsi_vlogvar_wait_assign_value(t83, t82, 0, 0, 1, 0LL);
    xsi_set_current_line(35, ng0);
    t2 = (t0 + 2800U);
    t3 = *((char **)t2);
    t2 = (t0 + 3840);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 32, 0LL);
    xsi_set_current_line(36, ng0);
    t2 = (t0 + 2960U);
    t3 = *((char **)t2);
    t2 = (t0 + 4000);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 32, 0LL);
    xsi_set_current_line(37, ng0);
    t2 = (t0 + 2480U);
    t3 = *((char **)t2);
    t2 = (t0 + 4160);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 3, 0LL);
    xsi_set_current_line(38, ng0);
    t2 = (t0 + 2480U);
    t3 = *((char **)t2);

LAB34:    t2 = ((char*)((ng3)));
    t68 = xsi_vlog_unsigned_case_compare(t3, 3, t2, 3);
    if (t68 == 1)
        goto LAB35;

LAB36:    t2 = ((char*)((ng4)));
    t68 = xsi_vlog_unsigned_case_compare(t3, 3, t2, 3);
    if (t68 == 1)
        goto LAB37;

LAB38:    t2 = ((char*)((ng5)));
    t68 = xsi_vlog_unsigned_case_compare(t3, 3, t2, 3);
    if (t68 == 1)
        goto LAB39;

LAB40:    t2 = ((char*)((ng6)));
    t68 = xsi_vlog_unsigned_case_compare(t3, 3, t2, 3);
    if (t68 == 1)
        goto LAB41;

LAB42:    t2 = ((char*)((ng7)));
    t68 = xsi_vlog_unsigned_case_compare(t3, 3, t2, 3);
    if (t68 == 1)
        goto LAB43;

LAB44:
LAB46:
LAB45:
LAB47:    goto LAB32;

LAB35:    xsi_set_current_line(39, ng0);
    t4 = (t0 + 472);
    t5 = *((char **)t4);
    t4 = ((char*)((ng2)));
    memset(t13, 0, 8);
    xsi_vlog_signed_minus(t13, 32, t5, 32, t4, 32);
    t11 = (t0 + 4320);
    xsi_vlogvar_wait_assign_value(t11, t13, 0, 0, 4, 0LL);
    goto LAB47;

LAB37:    xsi_set_current_line(40, ng0);
    t4 = (t0 + 472);
    t5 = *((char **)t4);
    t4 = ((char*)((ng2)));
    memset(t13, 0, 8);
    xsi_vlog_signed_minus(t13, 32, t5, 32, t4, 32);
    t11 = (t0 + 4320);
    xsi_vlogvar_wait_assign_value(t11, t13, 0, 0, 4, 0LL);
    goto LAB47;

LAB39:    xsi_set_current_line(41, ng0);
    t4 = (t0 + 608);
    t5 = *((char **)t4);
    t4 = ((char*)((ng2)));
    memset(t13, 0, 8);
    xsi_vlog_signed_minus(t13, 32, t5, 32, t4, 32);
    t11 = (t0 + 4320);
    xsi_vlogvar_wait_assign_value(t11, t13, 0, 0, 4, 0LL);
    goto LAB47;

LAB41:    xsi_set_current_line(42, ng0);
    t4 = (t0 + 608);
    t5 = *((char **)t4);
    t4 = ((char*)((ng2)));
    memset(t13, 0, 8);
    xsi_vlog_signed_minus(t13, 32, t5, 32, t4, 32);
    t11 = (t0 + 4320);
    xsi_vlogvar_wait_assign_value(t11, t13, 0, 0, 4, 0LL);
    goto LAB47;

LAB43:    xsi_set_current_line(43, ng0);
    t4 = (t0 + 472);
    t5 = *((char **)t4);
    t4 = ((char*)((ng2)));
    memset(t13, 0, 8);
    xsi_vlog_signed_minus(t13, 32, t5, 32, t4, 32);
    t11 = (t0 + 4320);
    xsi_vlogvar_wait_assign_value(t11, t13, 0, 0, 4, 0LL);
    goto LAB47;

LAB48:    *((unsigned int *)t13) = 1;
    goto LAB51;

LAB50:    t12 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t12) = 1;
    goto LAB51;

LAB52:    t24 = (t0 + 4320);
    t30 = (t24 + 56U);
    t31 = *((char **)t30);
    t35 = ((char*)((ng1)));
    memset(t23, 0, 8);
    t36 = (t31 + 4);
    t43 = (t35 + 4);
    t18 = *((unsigned int *)t31);
    t19 = *((unsigned int *)t35);
    t20 = (t18 ^ t19);
    t21 = *((unsigned int *)t36);
    t22 = *((unsigned int *)t43);
    t25 = (t21 ^ t22);
    t26 = (t20 | t25);
    t27 = *((unsigned int *)t36);
    t28 = *((unsigned int *)t43);
    t29 = (t27 | t28);
    t32 = (~(t29));
    t33 = (t26 & t32);
    if (t33 != 0)
        goto LAB56;

LAB55:    if (t29 != 0)
        goto LAB57;

LAB58:    memset(t37, 0, 8);
    t49 = (t23 + 4);
    t34 = *((unsigned int *)t49);
    t38 = (~(t34));
    t39 = *((unsigned int *)t23);
    t40 = (t39 & t38);
    t41 = (t40 & 1U);
    if (t41 != 0)
        goto LAB59;

LAB60:    if (*((unsigned int *)t49) != 0)
        goto LAB61;

LAB62:    t42 = *((unsigned int *)t13);
    t45 = *((unsigned int *)t37);
    t46 = (t42 & t45);
    *((unsigned int *)t44) = t46;
    t58 = (t13 + 4);
    t59 = (t37 + 4);
    t76 = (t44 + 4);
    t47 = *((unsigned int *)t58);
    t51 = *((unsigned int *)t59);
    t52 = (t47 | t51);
    *((unsigned int *)t76) = t52;
    t53 = *((unsigned int *)t76);
    t54 = (t53 != 0);
    if (t54 == 1)
        goto LAB63;

LAB64:
LAB65:    goto LAB54;

LAB56:    *((unsigned int *)t23) = 1;
    goto LAB58;

LAB57:    t48 = (t23 + 4);
    *((unsigned int *)t23) = 1;
    *((unsigned int *)t48) = 1;
    goto LAB58;

LAB59:    *((unsigned int *)t37) = 1;
    goto LAB62;

LAB61:    t50 = (t37 + 4);
    *((unsigned int *)t37) = 1;
    *((unsigned int *)t50) = 1;
    goto LAB62;

LAB63:    t55 = *((unsigned int *)t44);
    t56 = *((unsigned int *)t76);
    *((unsigned int *)t44) = (t55 | t56);
    t82 = (t13 + 4);
    t83 = (t37 + 4);
    t57 = *((unsigned int *)t13);
    t60 = (~(t57));
    t61 = *((unsigned int *)t82);
    t62 = (~(t61));
    t63 = *((unsigned int *)t37);
    t64 = (~(t63));
    t65 = *((unsigned int *)t83);
    t66 = (~(t65));
    t68 = (t60 & t62);
    t69 = (t64 & t66);
    t67 = (~(t68));
    t70 = (~(t69));
    t71 = *((unsigned int *)t76);
    *((unsigned int *)t76) = (t71 & t67);
    t72 = *((unsigned int *)t76);
    *((unsigned int *)t76) = (t72 & t70);
    t73 = *((unsigned int *)t44);
    *((unsigned int *)t44) = (t73 & t67);
    t74 = *((unsigned int *)t44);
    *((unsigned int *)t44) = (t74 & t70);
    goto LAB65;

LAB66:    xsi_set_current_line(46, ng0);

LAB69:    xsi_set_current_line(47, ng0);
    t85 = (t0 + 4320);
    t86 = (t85 + 56U);
    t87 = *((char **)t86);
    t88 = ((char*)((ng2)));
    memset(t89, 0, 8);
    xsi_vlog_unsigned_minus(t89, 32, t87, 4, t88, 32);
    t90 = (t0 + 4320);
    xsi_vlogvar_wait_assign_value(t90, t89, 0, 0, 4, 0LL);
    goto LAB68;

LAB70:    *((unsigned int *)t13) = 1;
    goto LAB73;

LAB72:    t12 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t12) = 1;
    goto LAB73;

LAB74:    t24 = (t0 + 4320);
    t30 = (t24 + 56U);
    t31 = *((char **)t30);
    t35 = ((char*)((ng1)));
    memset(t23, 0, 8);
    t36 = (t31 + 4);
    t43 = (t35 + 4);
    t18 = *((unsigned int *)t31);
    t19 = *((unsigned int *)t35);
    t20 = (t18 ^ t19);
    t21 = *((unsigned int *)t36);
    t22 = *((unsigned int *)t43);
    t25 = (t21 ^ t22);
    t26 = (t20 | t25);
    t27 = *((unsigned int *)t36);
    t28 = *((unsigned int *)t43);
    t29 = (t27 | t28);
    t32 = (~(t29));
    t33 = (t26 & t32);
    if (t33 != 0)
        goto LAB80;

LAB77:    if (t29 != 0)
        goto LAB79;

LAB78:    *((unsigned int *)t23) = 1;

LAB80:    memset(t37, 0, 8);
    t49 = (t23 + 4);
    t34 = *((unsigned int *)t49);
    t38 = (~(t34));
    t39 = *((unsigned int *)t23);
    t40 = (t39 & t38);
    t41 = (t40 & 1U);
    if (t41 != 0)
        goto LAB81;

LAB82:    if (*((unsigned int *)t49) != 0)
        goto LAB83;

LAB84:    t42 = *((unsigned int *)t13);
    t45 = *((unsigned int *)t37);
    t46 = (t42 & t45);
    *((unsigned int *)t44) = t46;
    t58 = (t13 + 4);
    t59 = (t37 + 4);
    t76 = (t44 + 4);
    t47 = *((unsigned int *)t58);
    t51 = *((unsigned int *)t59);
    t52 = (t47 | t51);
    *((unsigned int *)t76) = t52;
    t53 = *((unsigned int *)t76);
    t54 = (t53 != 0);
    if (t54 == 1)
        goto LAB85;

LAB86:
LAB87:    goto LAB76;

LAB79:    t48 = (t23 + 4);
    *((unsigned int *)t23) = 1;
    *((unsigned int *)t48) = 1;
    goto LAB80;

LAB81:    *((unsigned int *)t37) = 1;
    goto LAB84;

LAB83:    t50 = (t37 + 4);
    *((unsigned int *)t37) = 1;
    *((unsigned int *)t50) = 1;
    goto LAB84;

LAB85:    t55 = *((unsigned int *)t44);
    t56 = *((unsigned int *)t76);
    *((unsigned int *)t44) = (t55 | t56);
    t82 = (t13 + 4);
    t83 = (t37 + 4);
    t57 = *((unsigned int *)t13);
    t60 = (~(t57));
    t61 = *((unsigned int *)t82);
    t62 = (~(t61));
    t63 = *((unsigned int *)t37);
    t64 = (~(t63));
    t65 = *((unsigned int *)t83);
    t66 = (~(t65));
    t68 = (t60 & t62);
    t69 = (t64 & t66);
    t67 = (~(t68));
    t70 = (~(t69));
    t71 = *((unsigned int *)t76);
    *((unsigned int *)t76) = (t71 & t67);
    t72 = *((unsigned int *)t76);
    *((unsigned int *)t76) = (t72 & t70);
    t73 = *((unsigned int *)t44);
    *((unsigned int *)t44) = (t73 & t67);
    t74 = *((unsigned int *)t44);
    *((unsigned int *)t44) = (t74 & t70);
    goto LAB87;

LAB88:    xsi_set_current_line(48, ng0);

LAB91:    xsi_set_current_line(49, ng0);
    t85 = ((char*)((ng1)));
    t86 = (t0 + 3360);
    xsi_vlogvar_wait_assign_value(t86, t85, 0, 0, 1, 0LL);
    xsi_set_current_line(50, ng0);
    t2 = (t0 + 4160);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);

LAB92:    t11 = ((char*)((ng3)));
    t68 = xsi_vlog_unsigned_case_compare(t5, 3, t11, 3);
    if (t68 == 1)
        goto LAB93;

LAB94:    t2 = ((char*)((ng4)));
    t68 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 3);
    if (t68 == 1)
        goto LAB95;

LAB96:    t2 = ((char*)((ng5)));
    t68 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 3);
    if (t68 == 1)
        goto LAB97;

LAB98:    t2 = ((char*)((ng6)));
    t68 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 3);
    if (t68 == 1)
        goto LAB99;

LAB100:    t2 = ((char*)((ng7)));
    t68 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 3);
    if (t68 == 1)
        goto LAB101;

LAB102:
LAB104:
LAB103:
LAB105:    goto LAB90;

LAB93:    xsi_set_current_line(51, ng0);

LAB106:    xsi_set_current_line(52, ng0);
    t12 = (t0 + 3840);
    t14 = (t12 + 56U);
    t24 = *((char **)t14);
    xsi_vlogtype_sign_extend(t91, 64, t24, 32);
    t30 = (t0 + 4000);
    t31 = (t30 + 56U);
    t35 = *((char **)t31);
    xsi_vlogtype_sign_extend(t92, 64, t35, 32);
    xsi_vlog_signed_multiply(t93, 64, t91, 64, t92, 64);
    t36 = (t0 + 3520);
    xsi_vlogvar_wait_assign_value(t36, t93, 0, 0, 32, 0LL);
    t43 = (t0 + 3680);
    xsi_vlogvar_wait_assign_value(t43, t93, 32, 0, 32, 0LL);
    goto LAB105;

LAB95:    xsi_set_current_line(54, ng0);

LAB107:    xsi_set_current_line(55, ng0);
    t4 = (t0 + 3840);
    t11 = (t4 + 56U);
    t12 = *((char **)t11);
    t14 = (t0 + 4000);
    t24 = (t14 + 56U);
    t30 = *((char **)t24);
    xsi_vlog_unsigned_multiply(t91, 64, t12, 32, t30, 32);
    t31 = (t0 + 3520);
    xsi_vlogvar_wait_assign_value(t31, t91, 0, 0, 32, 0LL);
    t35 = (t0 + 3680);
    xsi_vlogvar_wait_assign_value(t35, t91, 32, 0, 32, 0LL);
    goto LAB105;

LAB97:    xsi_set_current_line(57, ng0);

LAB108:    xsi_set_current_line(58, ng0);
    t4 = (t0 + 3840);
    t11 = (t4 + 56U);
    t12 = *((char **)t11);
    t14 = (t0 + 4000);
    t24 = (t14 + 56U);
    t30 = *((char **)t24);
    memset(t37, 0, 8);
    xsi_vlog_signed_mod(t37, 32, t12, 32, t30, 32);
    t31 = (t0 + 3680);
    xsi_vlogvar_wait_assign_value(t31, t37, 0, 0, 32, 0LL);
    xsi_set_current_line(59, ng0);
    t2 = (t0 + 3840);
    t4 = (t2 + 56U);
    t11 = *((char **)t4);
    t12 = (t0 + 4000);
    t14 = (t12 + 56U);
    t24 = *((char **)t14);
    memset(t37, 0, 8);
    xsi_vlog_signed_divide(t37, 32, t11, 32, t24, 32);
    t30 = (t0 + 3520);
    xsi_vlogvar_wait_assign_value(t30, t37, 0, 0, 32, 0LL);
    goto LAB105;

LAB99:    xsi_set_current_line(61, ng0);

LAB109:    xsi_set_current_line(62, ng0);
    t4 = (t0 + 3840);
    t11 = (t4 + 56U);
    t12 = *((char **)t11);
    t14 = ((char*)((ng3)));
    xsi_vlogtype_concat(t91, 33, 33, 2U, t14, 1, t12, 32);
    t24 = (t0 + 4000);
    t30 = (t24 + 56U);
    t31 = *((char **)t30);
    t35 = ((char*)((ng3)));
    xsi_vlogtype_concat(t92, 33, 33, 2U, t35, 1, t31, 32);
    xsi_vlog_unsigned_mod(t93, 33, t91, 33, t92, 33);
    t36 = (t0 + 3680);
    xsi_vlogvar_wait_assign_value(t36, t93, 0, 0, 32, 0LL);
    xsi_set_current_line(63, ng0);
    t2 = (t0 + 3840);
    t4 = (t2 + 56U);
    t11 = *((char **)t4);
    t12 = ((char*)((ng3)));
    xsi_vlogtype_concat(t91, 33, 33, 2U, t12, 1, t11, 32);
    t14 = (t0 + 4000);
    t24 = (t14 + 56U);
    t30 = *((char **)t24);
    t31 = ((char*)((ng3)));
    xsi_vlogtype_concat(t92, 33, 33, 2U, t31, 1, t30, 32);
    xsi_vlog_unsigned_divide(t93, 33, t91, 33, t92, 33);
    t35 = (t0 + 3520);
    xsi_vlogvar_wait_assign_value(t35, t93, 0, 0, 32, 0LL);
    goto LAB105;

LAB101:    xsi_set_current_line(65, ng0);

LAB110:    xsi_set_current_line(66, ng0);
    t4 = (t0 + 3520);
    t11 = (t4 + 56U);
    t12 = *((char **)t11);
    t14 = (t0 + 3680);
    t24 = (t14 + 56U);
    t30 = *((char **)t24);
    xsi_vlogtype_concat(t92, 64, 64, 2U, t30, 32, t12, 32);
    t31 = (t0 + 3840);
    t35 = (t31 + 56U);
    t36 = *((char **)t35);
    xsi_vlogtype_sign_extend(t93, 64, t36, 32);
    t43 = (t0 + 4000);
    t48 = (t43 + 56U);
    t49 = *((char **)t48);
    xsi_vlogtype_sign_extend(t94, 64, t49, 32);
    xsi_vlog_signed_multiply(t95, 64, t93, 64, t94, 64);
    xsi_vlog_signed_minus(t96, 64, t92, 64, t95, 64);
    t50 = (t0 + 3520);
    xsi_vlogvar_assign_value(t50, t96, 0, 0, 32);
    t58 = (t0 + 3680);
    xsi_vlogvar_assign_value(t58, t96, 32, 0, 32);
    goto LAB105;

LAB113:    xsi_set_current_line(72, ng0);

LAB120:    xsi_set_current_line(73, ng0);
    t11 = (t0 + 2800U);
    t12 = *((char **)t11);
    t11 = (t0 + 3520);
    xsi_vlogvar_wait_assign_value(t11, t12, 0, 0, 32, 0LL);
    goto LAB119;

LAB115:    xsi_set_current_line(75, ng0);

LAB121:    xsi_set_current_line(76, ng0);
    t11 = (t0 + 2800U);
    t12 = *((char **)t11);
    t11 = (t0 + 3680);
    xsi_vlogvar_wait_assign_value(t11, t12, 0, 0, 32, 0LL);
    goto LAB119;

}


extern void work_m_04547705003579676990_2900584600_init()
{
	static char *pe[] = {(void *)Always_24_0};
	xsi_register_didat("work_m_04547705003579676990_2900584600", "isim/mips_txt_isim_beh.exe.sim/work/m_04547705003579676990_2900584600.didat");
	xsi_register_executes(pe);
}
