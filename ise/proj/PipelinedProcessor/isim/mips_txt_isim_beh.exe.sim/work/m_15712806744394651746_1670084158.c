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
static const char *ng0 = "/media/shared/SharedFile/ISE Files/ProcessorDesign/ise/src/tmp1/stlctl.v";
static unsigned int ng1[] = {0U, 0U};
static unsigned int ng2[] = {2U, 0U};
static unsigned int ng3[] = {3U, 0U};
static int ng4[] = {0, 0};
static int ng5[] = {2, 0};
static int ng6[] = {1, 0};
static int ng7[] = {4, 0};
static int ng8[] = {5, 0};
static unsigned int ng9[] = {63U, 0U};
static unsigned int ng10[] = {8U, 0U};
static unsigned int ng11[] = {17U, 0U};
static unsigned int ng12[] = {19U, 0U};
static unsigned int ng13[] = {16U, 0U};
static unsigned int ng14[] = {18U, 0U};
static unsigned int ng15[] = {12U, 0U};
static unsigned int ng16[] = {13U, 0U};
static unsigned int ng17[] = {15U, 0U};
static unsigned int ng18[] = {1U, 0U};



static void NetDecl_24_0(char *t0)
{
    char t4[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    unsigned int t25;
    unsigned int t26;
    char *t27;
    unsigned int t28;
    unsigned int t29;
    char *t30;
    unsigned int t31;
    unsigned int t32;
    char *t33;

LAB0:    t1 = (t0 + 8120U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(24, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng1)));
    memset(t4, 0, 8);
    t5 = (t3 + 4);
    t6 = (t2 + 4);
    t7 = *((unsigned int *)t3);
    t8 = *((unsigned int *)t2);
    t9 = (t7 ^ t8);
    t10 = *((unsigned int *)t5);
    t11 = *((unsigned int *)t6);
    t12 = (t10 ^ t11);
    t13 = (t9 | t12);
    t14 = *((unsigned int *)t5);
    t15 = *((unsigned int *)t6);
    t16 = (t14 | t15);
    t17 = (~(t16));
    t18 = (t13 & t17);
    if (t18 != 0)
        goto LAB7;

LAB4:    if (t16 != 0)
        goto LAB6;

LAB5:    *((unsigned int *)t4) = 1;

LAB7:    t20 = (t0 + 15384);
    t21 = (t20 + 56U);
    t22 = *((char **)t21);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    memset(t24, 0, 8);
    t25 = 1U;
    t26 = t25;
    t27 = (t4 + 4);
    t28 = *((unsigned int *)t4);
    t25 = (t25 & t28);
    t29 = *((unsigned int *)t27);
    t26 = (t26 & t29);
    t30 = (t24 + 4);
    t31 = *((unsigned int *)t24);
    *((unsigned int *)t24) = (t31 | t25);
    t32 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t32 | t26);
    xsi_driver_vfirst_trans(t20, 0, 0U);
    t33 = (t0 + 14888);
    *((int *)t33) = 1;

LAB1:    return;
LAB6:    t19 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t19) = 1;
    goto LAB7;

}

static void NetDecl_24_1(char *t0)
{
    char t4[8];
    char t22[8];
    char t38[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;
    char *t20;
    char *t21;
    char *t23;
    char *t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    char *t37;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    char *t42;
    char *t43;
    char *t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    char *t52;
    char *t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    char *t66;
    char *t67;
    char *t68;
    char *t69;
    char *t70;
    unsigned int t71;
    unsigned int t72;
    char *t73;
    unsigned int t74;
    unsigned int t75;
    char *t76;
    unsigned int t77;
    unsigned int t78;
    char *t79;

LAB0:    t1 = (t0 + 8368U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(25, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng2)));
    memset(t4, 0, 8);
    t5 = (t3 + 4);
    t6 = (t2 + 4);
    t7 = *((unsigned int *)t3);
    t8 = *((unsigned int *)t2);
    t9 = (t7 ^ t8);
    t10 = *((unsigned int *)t5);
    t11 = *((unsigned int *)t6);
    t12 = (t10 ^ t11);
    t13 = (t9 | t12);
    t14 = *((unsigned int *)t5);
    t15 = *((unsigned int *)t6);
    t16 = (t14 | t15);
    t17 = (~(t16));
    t18 = (t13 & t17);
    if (t18 != 0)
        goto LAB7;

LAB4:    if (t16 != 0)
        goto LAB6;

LAB5:    *((unsigned int *)t4) = 1;

LAB7:    t20 = (t0 + 1048U);
    t21 = *((char **)t20);
    t20 = ((char*)((ng3)));
    memset(t22, 0, 8);
    t23 = (t21 + 4);
    t24 = (t20 + 4);
    t25 = *((unsigned int *)t21);
    t26 = *((unsigned int *)t20);
    t27 = (t25 ^ t26);
    t28 = *((unsigned int *)t23);
    t29 = *((unsigned int *)t24);
    t30 = (t28 ^ t29);
    t31 = (t27 | t30);
    t32 = *((unsigned int *)t23);
    t33 = *((unsigned int *)t24);
    t34 = (t32 | t33);
    t35 = (~(t34));
    t36 = (t31 & t35);
    if (t36 != 0)
        goto LAB11;

LAB8:    if (t34 != 0)
        goto LAB10;

LAB9:    *((unsigned int *)t22) = 1;

LAB11:    t39 = *((unsigned int *)t4);
    t40 = *((unsigned int *)t22);
    t41 = (t39 | t40);
    *((unsigned int *)t38) = t41;
    t42 = (t4 + 4);
    t43 = (t22 + 4);
    t44 = (t38 + 4);
    t45 = *((unsigned int *)t42);
    t46 = *((unsigned int *)t43);
    t47 = (t45 | t46);
    *((unsigned int *)t44) = t47;
    t48 = *((unsigned int *)t44);
    t49 = (t48 != 0);
    if (t49 == 1)
        goto LAB12;

LAB13:
LAB14:    t66 = (t0 + 15448);
    t67 = (t66 + 56U);
    t68 = *((char **)t67);
    t69 = (t68 + 56U);
    t70 = *((char **)t69);
    memset(t70, 0, 8);
    t71 = 1U;
    t72 = t71;
    t73 = (t38 + 4);
    t74 = *((unsigned int *)t38);
    t71 = (t71 & t74);
    t75 = *((unsigned int *)t73);
    t72 = (t72 & t75);
    t76 = (t70 + 4);
    t77 = *((unsigned int *)t70);
    *((unsigned int *)t70) = (t77 | t71);
    t78 = *((unsigned int *)t76);
    *((unsigned int *)t76) = (t78 | t72);
    xsi_driver_vfirst_trans(t66, 0, 0U);
    t79 = (t0 + 14904);
    *((int *)t79) = 1;

LAB1:    return;
LAB6:    t19 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t19) = 1;
    goto LAB7;

LAB10:    t37 = (t22 + 4);
    *((unsigned int *)t22) = 1;
    *((unsigned int *)t37) = 1;
    goto LAB11;

LAB12:    t50 = *((unsigned int *)t38);
    t51 = *((unsigned int *)t44);
    *((unsigned int *)t38) = (t50 | t51);
    t52 = (t4 + 4);
    t53 = (t22 + 4);
    t54 = *((unsigned int *)t52);
    t55 = (~(t54));
    t56 = *((unsigned int *)t4);
    t57 = (t56 & t55);
    t58 = *((unsigned int *)t53);
    t59 = (~(t58));
    t60 = *((unsigned int *)t22);
    t61 = (t60 & t59);
    t62 = (~(t57));
    t63 = (~(t61));
    t64 = *((unsigned int *)t44);
    *((unsigned int *)t44) = (t64 & t62);
    t65 = *((unsigned int *)t44);
    *((unsigned int *)t44) = (t65 & t63);
    goto LAB14;

}

static void NetDecl_24_2(char *t0)
{
    char t3[8];
    char t13[8];
    char t31[8];
    char t36[8];
    char t52[8];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    char *t29;
    char *t30;
    char *t32;
    char *t33;
    char *t34;
    char *t35;
    char *t37;
    char *t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    char *t51;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    char *t56;
    char *t57;
    char *t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    char *t66;
    char *t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    int t76;
    int t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    char *t84;
    char *t85;
    char *t86;
    char *t87;
    char *t88;
    unsigned int t89;
    unsigned int t90;
    char *t91;
    unsigned int t92;
    unsigned int t93;
    char *t94;
    unsigned int t95;
    unsigned int t96;
    char *t97;

LAB0:    t1 = (t0 + 8616U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(26, ng0);
    t2 = (t0 + 1048U);
    t4 = *((char **)t2);
    memset(t3, 0, 8);
    t2 = (t3 + 4);
    t5 = (t4 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (t6 >> 3);
    *((unsigned int *)t3) = t7;
    t8 = *((unsigned int *)t5);
    t9 = (t8 >> 3);
    *((unsigned int *)t2) = t9;
    t10 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t10 & 7U);
    t11 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t11 & 7U);
    t12 = ((char*)((ng4)));
    memset(t13, 0, 8);
    t14 = (t3 + 4);
    t15 = (t12 + 4);
    t16 = *((unsigned int *)t3);
    t17 = *((unsigned int *)t12);
    t18 = (t16 ^ t17);
    t19 = *((unsigned int *)t14);
    t20 = *((unsigned int *)t15);
    t21 = (t19 ^ t20);
    t22 = (t18 | t21);
    t23 = *((unsigned int *)t14);
    t24 = *((unsigned int *)t15);
    t25 = (t23 | t24);
    t26 = (~(t25));
    t27 = (t22 & t26);
    if (t27 != 0)
        goto LAB7;

LAB4:    if (t25 != 0)
        goto LAB6;

LAB5:    *((unsigned int *)t13) = 1;

LAB7:    t29 = (t0 + 1048U);
    t30 = *((char **)t29);
    t29 = (t0 + 1008U);
    t32 = (t29 + 72U);
    t33 = *((char **)t32);
    t34 = ((char*)((ng5)));
    xsi_vlog_generic_get_index_select_value(t31, 32, t30, t33, 2, t34, 32, 1);
    t35 = ((char*)((ng6)));
    memset(t36, 0, 8);
    t37 = (t31 + 4);
    t38 = (t35 + 4);
    t39 = *((unsigned int *)t31);
    t40 = *((unsigned int *)t35);
    t41 = (t39 ^ t40);
    t42 = *((unsigned int *)t37);
    t43 = *((unsigned int *)t38);
    t44 = (t42 ^ t43);
    t45 = (t41 | t44);
    t46 = *((unsigned int *)t37);
    t47 = *((unsigned int *)t38);
    t48 = (t46 | t47);
    t49 = (~(t48));
    t50 = (t45 & t49);
    if (t50 != 0)
        goto LAB11;

LAB8:    if (t48 != 0)
        goto LAB10;

LAB9:    *((unsigned int *)t36) = 1;

LAB11:    t53 = *((unsigned int *)t13);
    t54 = *((unsigned int *)t36);
    t55 = (t53 & t54);
    *((unsigned int *)t52) = t55;
    t56 = (t13 + 4);
    t57 = (t36 + 4);
    t58 = (t52 + 4);
    t59 = *((unsigned int *)t56);
    t60 = *((unsigned int *)t57);
    t61 = (t59 | t60);
    *((unsigned int *)t58) = t61;
    t62 = *((unsigned int *)t58);
    t63 = (t62 != 0);
    if (t63 == 1)
        goto LAB12;

LAB13:
LAB14:    t84 = (t0 + 15512);
    t85 = (t84 + 56U);
    t86 = *((char **)t85);
    t87 = (t86 + 56U);
    t88 = *((char **)t87);
    memset(t88, 0, 8);
    t89 = 1U;
    t90 = t89;
    t91 = (t52 + 4);
    t92 = *((unsigned int *)t52);
    t89 = (t89 & t92);
    t93 = *((unsigned int *)t91);
    t90 = (t90 & t93);
    t94 = (t88 + 4);
    t95 = *((unsigned int *)t88);
    *((unsigned int *)t88) = (t95 | t89);
    t96 = *((unsigned int *)t94);
    *((unsigned int *)t94) = (t96 | t90);
    xsi_driver_vfirst_trans(t84, 0, 0U);
    t97 = (t0 + 14920);
    *((int *)t97) = 1;

LAB1:    return;
LAB6:    t28 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t28) = 1;
    goto LAB7;

LAB10:    t51 = (t36 + 4);
    *((unsigned int *)t36) = 1;
    *((unsigned int *)t51) = 1;
    goto LAB11;

LAB12:    t64 = *((unsigned int *)t52);
    t65 = *((unsigned int *)t58);
    *((unsigned int *)t52) = (t64 | t65);
    t66 = (t13 + 4);
    t67 = (t36 + 4);
    t68 = *((unsigned int *)t13);
    t69 = (~(t68));
    t70 = *((unsigned int *)t66);
    t71 = (~(t70));
    t72 = *((unsigned int *)t36);
    t73 = (~(t72));
    t74 = *((unsigned int *)t67);
    t75 = (~(t74));
    t76 = (t69 & t71);
    t77 = (t73 & t75);
    t78 = (~(t76));
    t79 = (~(t77));
    t80 = *((unsigned int *)t58);
    *((unsigned int *)t58) = (t80 & t78);
    t81 = *((unsigned int *)t58);
    *((unsigned int *)t58) = (t81 & t79);
    t82 = *((unsigned int *)t52);
    *((unsigned int *)t52) = (t82 & t78);
    t83 = *((unsigned int *)t52);
    *((unsigned int *)t52) = (t83 & t79);
    goto LAB14;

}

static void NetDecl_24_3(char *t0)
{
    char t3[8];
    char t13[8];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    char *t32;
    char *t33;
    unsigned int t34;
    unsigned int t35;
    char *t36;
    unsigned int t37;
    unsigned int t38;
    char *t39;
    unsigned int t40;
    unsigned int t41;
    char *t42;

LAB0:    t1 = (t0 + 8864U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(27, ng0);
    t2 = (t0 + 1048U);
    t4 = *((char **)t2);
    memset(t3, 0, 8);
    t2 = (t3 + 4);
    t5 = (t4 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (t6 >> 3);
    *((unsigned int *)t3) = t7;
    t8 = *((unsigned int *)t5);
    t9 = (t8 >> 3);
    *((unsigned int *)t2) = t9;
    t10 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t10 & 7U);
    t11 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t11 & 7U);
    t12 = ((char*)((ng6)));
    memset(t13, 0, 8);
    t14 = (t3 + 4);
    t15 = (t12 + 4);
    t16 = *((unsigned int *)t3);
    t17 = *((unsigned int *)t12);
    t18 = (t16 ^ t17);
    t19 = *((unsigned int *)t14);
    t20 = *((unsigned int *)t15);
    t21 = (t19 ^ t20);
    t22 = (t18 | t21);
    t23 = *((unsigned int *)t14);
    t24 = *((unsigned int *)t15);
    t25 = (t23 | t24);
    t26 = (~(t25));
    t27 = (t22 & t26);
    if (t27 != 0)
        goto LAB7;

LAB4:    if (t25 != 0)
        goto LAB6;

LAB5:    *((unsigned int *)t13) = 1;

LAB7:    t29 = (t0 + 15576);
    t30 = (t29 + 56U);
    t31 = *((char **)t30);
    t32 = (t31 + 56U);
    t33 = *((char **)t32);
    memset(t33, 0, 8);
    t34 = 1U;
    t35 = t34;
    t36 = (t13 + 4);
    t37 = *((unsigned int *)t13);
    t34 = (t34 & t37);
    t38 = *((unsigned int *)t36);
    t35 = (t35 & t38);
    t39 = (t33 + 4);
    t40 = *((unsigned int *)t33);
    *((unsigned int *)t33) = (t40 | t34);
    t41 = *((unsigned int *)t39);
    *((unsigned int *)t39) = (t41 | t35);
    xsi_driver_vfirst_trans(t29, 0, 0U);
    t42 = (t0 + 14936);
    *((int *)t42) = 1;

LAB1:    return;
LAB6:    t28 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t28) = 1;
    goto LAB7;

}

static void NetDecl_24_4(char *t0)
{
    char t3[8];
    char t13[8];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    char *t32;
    char *t33;
    unsigned int t34;
    unsigned int t35;
    char *t36;
    unsigned int t37;
    unsigned int t38;
    char *t39;
    unsigned int t40;
    unsigned int t41;
    char *t42;

LAB0:    t1 = (t0 + 9112U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(28, ng0);
    t2 = (t0 + 1048U);
    t4 = *((char **)t2);
    memset(t3, 0, 8);
    t2 = (t3 + 4);
    t5 = (t4 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (t6 >> 3);
    *((unsigned int *)t3) = t7;
    t8 = *((unsigned int *)t5);
    t9 = (t8 >> 3);
    *((unsigned int *)t2) = t9;
    t10 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t10 & 7U);
    t11 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t11 & 7U);
    t12 = ((char*)((ng7)));
    memset(t13, 0, 8);
    t14 = (t3 + 4);
    t15 = (t12 + 4);
    t16 = *((unsigned int *)t3);
    t17 = *((unsigned int *)t12);
    t18 = (t16 ^ t17);
    t19 = *((unsigned int *)t14);
    t20 = *((unsigned int *)t15);
    t21 = (t19 ^ t20);
    t22 = (t18 | t21);
    t23 = *((unsigned int *)t14);
    t24 = *((unsigned int *)t15);
    t25 = (t23 | t24);
    t26 = (~(t25));
    t27 = (t22 & t26);
    if (t27 != 0)
        goto LAB7;

LAB4:    if (t25 != 0)
        goto LAB6;

LAB5:    *((unsigned int *)t13) = 1;

LAB7:    t29 = (t0 + 15640);
    t30 = (t29 + 56U);
    t31 = *((char **)t30);
    t32 = (t31 + 56U);
    t33 = *((char **)t32);
    memset(t33, 0, 8);
    t34 = 1U;
    t35 = t34;
    t36 = (t13 + 4);
    t37 = *((unsigned int *)t13);
    t34 = (t34 & t37);
    t38 = *((unsigned int *)t36);
    t35 = (t35 & t38);
    t39 = (t33 + 4);
    t40 = *((unsigned int *)t33);
    *((unsigned int *)t33) = (t40 | t34);
    t41 = *((unsigned int *)t39);
    *((unsigned int *)t39) = (t41 | t35);
    xsi_driver_vfirst_trans(t29, 0, 0U);
    t42 = (t0 + 14952);
    *((int *)t42) = 1;

LAB1:    return;
LAB6:    t28 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t28) = 1;
    goto LAB7;

}

static void NetDecl_24_5(char *t0)
{
    char t3[8];
    char t13[8];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    char *t32;
    char *t33;
    unsigned int t34;
    unsigned int t35;
    char *t36;
    unsigned int t37;
    unsigned int t38;
    char *t39;
    unsigned int t40;
    unsigned int t41;
    char *t42;

LAB0:    t1 = (t0 + 9360U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(29, ng0);
    t2 = (t0 + 1048U);
    t4 = *((char **)t2);
    memset(t3, 0, 8);
    t2 = (t3 + 4);
    t5 = (t4 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (t6 >> 3);
    *((unsigned int *)t3) = t7;
    t8 = *((unsigned int *)t5);
    t9 = (t8 >> 3);
    *((unsigned int *)t2) = t9;
    t10 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t10 & 7U);
    t11 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t11 & 7U);
    t12 = ((char*)((ng8)));
    memset(t13, 0, 8);
    t14 = (t3 + 4);
    t15 = (t12 + 4);
    t16 = *((unsigned int *)t3);
    t17 = *((unsigned int *)t12);
    t18 = (t16 ^ t17);
    t19 = *((unsigned int *)t14);
    t20 = *((unsigned int *)t15);
    t21 = (t19 ^ t20);
    t22 = (t18 | t21);
    t23 = *((unsigned int *)t14);
    t24 = *((unsigned int *)t15);
    t25 = (t23 | t24);
    t26 = (~(t25));
    t27 = (t22 & t26);
    if (t27 != 0)
        goto LAB7;

LAB4:    if (t25 != 0)
        goto LAB6;

LAB5:    *((unsigned int *)t13) = 1;

LAB7:    t29 = (t0 + 15704);
    t30 = (t29 + 56U);
    t31 = *((char **)t30);
    t32 = (t31 + 56U);
    t33 = *((char **)t32);
    memset(t33, 0, 8);
    t34 = 1U;
    t35 = t34;
    t36 = (t13 + 4);
    t37 = *((unsigned int *)t13);
    t34 = (t34 & t37);
    t38 = *((unsigned int *)t36);
    t35 = (t35 & t38);
    t39 = (t33 + 4);
    t40 = *((unsigned int *)t33);
    *((unsigned int *)t33) = (t40 | t34);
    t41 = *((unsigned int *)t39);
    *((unsigned int *)t39) = (t41 | t35);
    xsi_driver_vfirst_trans(t29, 0, 0U);
    t42 = (t0 + 14968);
    *((int *)t42) = 1;

LAB1:    return;
LAB6:    t28 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t28) = 1;
    goto LAB7;

}

static void NetDecl_31_6(char *t0)
{
    char t4[8];
    char t20[8];
    char t34[8];
    char t50[8];
    char t58[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;
    char *t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    char *t27;
    char *t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    char *t32;
    char *t33;
    char *t35;
    char *t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    char *t49;
    char *t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    char *t57;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    char *t62;
    char *t63;
    char *t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    char *t72;
    char *t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    int t82;
    int t83;
    unsigned int t84;
    unsigned int t85;
    unsigned int t86;
    unsigned int t87;
    unsigned int t88;
    unsigned int t89;
    char *t90;
    char *t91;
    char *t92;
    char *t93;
    char *t94;
    unsigned int t95;
    unsigned int t96;
    char *t97;
    unsigned int t98;
    unsigned int t99;
    char *t100;
    unsigned int t101;
    unsigned int t102;
    char *t103;

LAB0:    t1 = (t0 + 9608U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(32, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng1)));
    memset(t4, 0, 8);
    t5 = (t3 + 4);
    t6 = (t2 + 4);
    t7 = *((unsigned int *)t3);
    t8 = *((unsigned int *)t2);
    t9 = (t7 ^ t8);
    t10 = *((unsigned int *)t5);
    t11 = *((unsigned int *)t6);
    t12 = (t10 ^ t11);
    t13 = (t9 | t12);
    t14 = *((unsigned int *)t5);
    t15 = *((unsigned int *)t6);
    t16 = (t14 | t15);
    t17 = (~(t16));
    t18 = (t13 & t17);
    if (t18 != 0)
        goto LAB7;

LAB4:    if (t16 != 0)
        goto LAB6;

LAB5:    *((unsigned int *)t4) = 1;

LAB7:    memset(t20, 0, 8);
    t21 = (t4 + 4);
    t22 = *((unsigned int *)t21);
    t23 = (~(t22));
    t24 = *((unsigned int *)t4);
    t25 = (t24 & t23);
    t26 = (t25 & 1U);
    if (t26 != 0)
        goto LAB8;

LAB9:    if (*((unsigned int *)t21) != 0)
        goto LAB10;

LAB11:    t28 = (t20 + 4);
    t29 = *((unsigned int *)t20);
    t30 = *((unsigned int *)t28);
    t31 = (t29 || t30);
    if (t31 > 0)
        goto LAB12;

LAB13:    memcpy(t58, t20, 8);

LAB14:    t90 = (t0 + 15768);
    t91 = (t90 + 56U);
    t92 = *((char **)t91);
    t93 = (t92 + 56U);
    t94 = *((char **)t93);
    memset(t94, 0, 8);
    t95 = 1U;
    t96 = t95;
    t97 = (t58 + 4);
    t98 = *((unsigned int *)t58);
    t95 = (t95 & t98);
    t99 = *((unsigned int *)t97);
    t96 = (t96 & t99);
    t100 = (t94 + 4);
    t101 = *((unsigned int *)t94);
    *((unsigned int *)t94) = (t101 | t95);
    t102 = *((unsigned int *)t100);
    *((unsigned int *)t100) = (t102 | t96);
    xsi_driver_vfirst_trans(t90, 0, 0U);
    t103 = (t0 + 14984);
    *((int *)t103) = 1;

LAB1:    return;
LAB6:    t19 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t19) = 1;
    goto LAB7;

LAB8:    *((unsigned int *)t20) = 1;
    goto LAB11;

LAB10:    t27 = (t20 + 4);
    *((unsigned int *)t20) = 1;
    *((unsigned int *)t27) = 1;
    goto LAB11;

LAB12:    t32 = (t0 + 1208U);
    t33 = *((char **)t32);
    t32 = ((char*)((ng9)));
    memset(t34, 0, 8);
    t35 = (t33 + 4);
    t36 = (t32 + 4);
    t37 = *((unsigned int *)t33);
    t38 = *((unsigned int *)t32);
    t39 = (t37 ^ t38);
    t40 = *((unsigned int *)t35);
    t41 = *((unsigned int *)t36);
    t42 = (t40 ^ t41);
    t43 = (t39 | t42);
    t44 = *((unsigned int *)t35);
    t45 = *((unsigned int *)t36);
    t46 = (t44 | t45);
    t47 = (~(t46));
    t48 = (t43 & t47);
    if (t48 != 0)
        goto LAB18;

LAB15:    if (t46 != 0)
        goto LAB17;

LAB16:    *((unsigned int *)t34) = 1;

LAB18:    memset(t50, 0, 8);
    t51 = (t34 + 4);
    t52 = *((unsigned int *)t51);
    t53 = (~(t52));
    t54 = *((unsigned int *)t34);
    t55 = (t54 & t53);
    t56 = (t55 & 1U);
    if (t56 != 0)
        goto LAB19;

LAB20:    if (*((unsigned int *)t51) != 0)
        goto LAB21;

LAB22:    t59 = *((unsigned int *)t20);
    t60 = *((unsigned int *)t50);
    t61 = (t59 & t60);
    *((unsigned int *)t58) = t61;
    t62 = (t20 + 4);
    t63 = (t50 + 4);
    t64 = (t58 + 4);
    t65 = *((unsigned int *)t62);
    t66 = *((unsigned int *)t63);
    t67 = (t65 | t66);
    *((unsigned int *)t64) = t67;
    t68 = *((unsigned int *)t64);
    t69 = (t68 != 0);
    if (t69 == 1)
        goto LAB23;

LAB24:
LAB25:    goto LAB14;

LAB17:    t49 = (t34 + 4);
    *((unsigned int *)t34) = 1;
    *((unsigned int *)t49) = 1;
    goto LAB18;

LAB19:    *((unsigned int *)t50) = 1;
    goto LAB22;

LAB21:    t57 = (t50 + 4);
    *((unsigned int *)t50) = 1;
    *((unsigned int *)t57) = 1;
    goto LAB22;

LAB23:    t70 = *((unsigned int *)t58);
    t71 = *((unsigned int *)t64);
    *((unsigned int *)t58) = (t70 | t71);
    t72 = (t20 + 4);
    t73 = (t50 + 4);
    t74 = *((unsigned int *)t20);
    t75 = (~(t74));
    t76 = *((unsigned int *)t72);
    t77 = (~(t76));
    t78 = *((unsigned int *)t50);
    t79 = (~(t78));
    t80 = *((unsigned int *)t73);
    t81 = (~(t80));
    t82 = (t75 & t77);
    t83 = (t79 & t81);
    t84 = (~(t82));
    t85 = (~(t83));
    t86 = *((unsigned int *)t64);
    *((unsigned int *)t64) = (t86 & t84);
    t87 = *((unsigned int *)t64);
    *((unsigned int *)t64) = (t87 & t85);
    t88 = *((unsigned int *)t58);
    *((unsigned int *)t58) = (t88 & t84);
    t89 = *((unsigned int *)t58);
    *((unsigned int *)t58) = (t89 & t85);
    goto LAB25;

}

static void NetDecl_31_7(char *t0)
{
    char t5[8];
    char t21[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    char *t20;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    char *t25;
    char *t26;
    char *t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    char *t35;
    char *t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    int t45;
    int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    char *t53;
    char *t54;
    char *t55;
    char *t56;
    char *t57;
    unsigned int t58;
    unsigned int t59;
    char *t60;
    unsigned int t61;
    unsigned int t62;
    char *t63;
    unsigned int t64;
    unsigned int t65;
    char *t66;

LAB0:    t1 = (t0 + 9856U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(34, ng0);
    t2 = (t0 + 2968U);
    t3 = *((char **)t2);
    t2 = (t0 + 1208U);
    t4 = *((char **)t2);
    t2 = ((char*)((ng10)));
    memset(t5, 0, 8);
    t6 = (t4 + 4);
    t7 = (t2 + 4);
    t8 = *((unsigned int *)t4);
    t9 = *((unsigned int *)t2);
    t10 = (t8 ^ t9);
    t11 = *((unsigned int *)t6);
    t12 = *((unsigned int *)t7);
    t13 = (t11 ^ t12);
    t14 = (t10 | t13);
    t15 = *((unsigned int *)t6);
    t16 = *((unsigned int *)t7);
    t17 = (t15 | t16);
    t18 = (~(t17));
    t19 = (t14 & t18);
    if (t19 != 0)
        goto LAB7;

LAB4:    if (t17 != 0)
        goto LAB6;

LAB5:    *((unsigned int *)t5) = 1;

LAB7:    t22 = *((unsigned int *)t3);
    t23 = *((unsigned int *)t5);
    t24 = (t22 & t23);
    *((unsigned int *)t21) = t24;
    t25 = (t3 + 4);
    t26 = (t5 + 4);
    t27 = (t21 + 4);
    t28 = *((unsigned int *)t25);
    t29 = *((unsigned int *)t26);
    t30 = (t28 | t29);
    *((unsigned int *)t27) = t30;
    t31 = *((unsigned int *)t27);
    t32 = (t31 != 0);
    if (t32 == 1)
        goto LAB8;

LAB9:
LAB10:    t53 = (t0 + 15832);
    t54 = (t53 + 56U);
    t55 = *((char **)t54);
    t56 = (t55 + 56U);
    t57 = *((char **)t56);
    memset(t57, 0, 8);
    t58 = 1U;
    t59 = t58;
    t60 = (t21 + 4);
    t61 = *((unsigned int *)t21);
    t58 = (t58 & t61);
    t62 = *((unsigned int *)t60);
    t59 = (t59 & t62);
    t63 = (t57 + 4);
    t64 = *((unsigned int *)t57);
    *((unsigned int *)t57) = (t64 | t58);
    t65 = *((unsigned int *)t63);
    *((unsigned int *)t63) = (t65 | t59);
    xsi_driver_vfirst_trans(t53, 0, 0U);
    t66 = (t0 + 15000);
    *((int *)t66) = 1;

LAB1:    return;
LAB6:    t20 = (t5 + 4);
    *((unsigned int *)t5) = 1;
    *((unsigned int *)t20) = 1;
    goto LAB7;

LAB8:    t33 = *((unsigned int *)t21);
    t34 = *((unsigned int *)t27);
    *((unsigned int *)t21) = (t33 | t34);
    t35 = (t3 + 4);
    t36 = (t5 + 4);
    t37 = *((unsigned int *)t3);
    t38 = (~(t37));
    t39 = *((unsigned int *)t35);
    t40 = (~(t39));
    t41 = *((unsigned int *)t5);
    t42 = (~(t41));
    t43 = *((unsigned int *)t36);
    t44 = (~(t43));
    t45 = (t38 & t40);
    t46 = (t42 & t44);
    t47 = (~(t45));
    t48 = (~(t46));
    t49 = *((unsigned int *)t27);
    *((unsigned int *)t27) = (t49 & t47);
    t50 = *((unsigned int *)t27);
    *((unsigned int *)t27) = (t50 & t48);
    t51 = *((unsigned int *)t21);
    *((unsigned int *)t21) = (t51 & t47);
    t52 = *((unsigned int *)t21);
    *((unsigned int *)t21) = (t52 & t48);
    goto LAB10;

}

static void NetDecl_31_8(char *t0)
{
    char t4[8];
    char t14[8];
    char t30[8];
    char t64[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    char *t15;
    char *t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    char *t29;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    char *t34;
    char *t35;
    char *t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    char *t44;
    char *t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    int t54;
    int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    char *t62;
    char *t63;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    char *t68;
    char *t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    char *t77;
    char *t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    int t82;
    unsigned int t83;
    unsigned int t84;
    unsigned int t85;
    int t86;
    unsigned int t87;
    unsigned int t88;
    unsigned int t89;
    unsigned int t90;
    char *t91;
    char *t92;
    char *t93;
    char *t94;
    char *t95;
    unsigned int t96;
    unsigned int t97;
    char *t98;
    unsigned int t99;
    unsigned int t100;
    char *t101;
    unsigned int t102;
    unsigned int t103;
    char *t104;

LAB0:    t1 = (t0 + 10104U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(35, ng0);
    t2 = (t0 + 2968U);
    t3 = *((char **)t2);
    t2 = (t0 + 1208U);
    t5 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t4 + 4);
    t6 = (t5 + 4);
    t7 = *((unsigned int *)t5);
    t8 = (t7 >> 3);
    *((unsigned int *)t4) = t8;
    t9 = *((unsigned int *)t6);
    t10 = (t9 >> 3);
    *((unsigned int *)t2) = t10;
    t11 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t11 & 7U);
    t12 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t12 & 7U);
    t13 = ((char*)((ng3)));
    memset(t14, 0, 8);
    t15 = (t4 + 4);
    t16 = (t13 + 4);
    t17 = *((unsigned int *)t4);
    t18 = *((unsigned int *)t13);
    t19 = (t17 ^ t18);
    t20 = *((unsigned int *)t15);
    t21 = *((unsigned int *)t16);
    t22 = (t20 ^ t21);
    t23 = (t19 | t22);
    t24 = *((unsigned int *)t15);
    t25 = *((unsigned int *)t16);
    t26 = (t24 | t25);
    t27 = (~(t26));
    t28 = (t23 & t27);
    if (t28 != 0)
        goto LAB7;

LAB4:    if (t26 != 0)
        goto LAB6;

LAB5:    *((unsigned int *)t14) = 1;

LAB7:    t31 = *((unsigned int *)t3);
    t32 = *((unsigned int *)t14);
    t33 = (t31 & t32);
    *((unsigned int *)t30) = t33;
    t34 = (t3 + 4);
    t35 = (t14 + 4);
    t36 = (t30 + 4);
    t37 = *((unsigned int *)t34);
    t38 = *((unsigned int *)t35);
    t39 = (t37 | t38);
    *((unsigned int *)t36) = t39;
    t40 = *((unsigned int *)t36);
    t41 = (t40 != 0);
    if (t41 == 1)
        goto LAB8;

LAB9:
LAB10:    t62 = (t0 + 3928U);
    t63 = *((char **)t62);
    t65 = *((unsigned int *)t30);
    t66 = *((unsigned int *)t63);
    t67 = (t65 | t66);
    *((unsigned int *)t64) = t67;
    t62 = (t30 + 4);
    t68 = (t63 + 4);
    t69 = (t64 + 4);
    t70 = *((unsigned int *)t62);
    t71 = *((unsigned int *)t68);
    t72 = (t70 | t71);
    *((unsigned int *)t69) = t72;
    t73 = *((unsigned int *)t69);
    t74 = (t73 != 0);
    if (t74 == 1)
        goto LAB11;

LAB12:
LAB13:    t91 = (t0 + 15896);
    t92 = (t91 + 56U);
    t93 = *((char **)t92);
    t94 = (t93 + 56U);
    t95 = *((char **)t94);
    memset(t95, 0, 8);
    t96 = 1U;
    t97 = t96;
    t98 = (t64 + 4);
    t99 = *((unsigned int *)t64);
    t96 = (t96 & t99);
    t100 = *((unsigned int *)t98);
    t97 = (t97 & t100);
    t101 = (t95 + 4);
    t102 = *((unsigned int *)t95);
    *((unsigned int *)t95) = (t102 | t96);
    t103 = *((unsigned int *)t101);
    *((unsigned int *)t101) = (t103 | t97);
    xsi_driver_vfirst_trans(t91, 0, 0U);
    t104 = (t0 + 15016);
    *((int *)t104) = 1;

LAB1:    return;
LAB6:    t29 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t29) = 1;
    goto LAB7;

LAB8:    t42 = *((unsigned int *)t30);
    t43 = *((unsigned int *)t36);
    *((unsigned int *)t30) = (t42 | t43);
    t44 = (t3 + 4);
    t45 = (t14 + 4);
    t46 = *((unsigned int *)t3);
    t47 = (~(t46));
    t48 = *((unsigned int *)t44);
    t49 = (~(t48));
    t50 = *((unsigned int *)t14);
    t51 = (~(t50));
    t52 = *((unsigned int *)t45);
    t53 = (~(t52));
    t54 = (t47 & t49);
    t55 = (t51 & t53);
    t56 = (~(t54));
    t57 = (~(t55));
    t58 = *((unsigned int *)t36);
    *((unsigned int *)t36) = (t58 & t56);
    t59 = *((unsigned int *)t36);
    *((unsigned int *)t36) = (t59 & t57);
    t60 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t60 & t56);
    t61 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t61 & t57);
    goto LAB10;

LAB11:    t75 = *((unsigned int *)t64);
    t76 = *((unsigned int *)t69);
    *((unsigned int *)t64) = (t75 | t76);
    t77 = (t30 + 4);
    t78 = (t63 + 4);
    t79 = *((unsigned int *)t77);
    t80 = (~(t79));
    t81 = *((unsigned int *)t30);
    t82 = (t81 & t80);
    t83 = *((unsigned int *)t78);
    t84 = (~(t83));
    t85 = *((unsigned int *)t63);
    t86 = (t85 & t84);
    t87 = (~(t82));
    t88 = (~(t86));
    t89 = *((unsigned int *)t69);
    *((unsigned int *)t69) = (t89 & t87);
    t90 = *((unsigned int *)t69);
    *((unsigned int *)t69) = (t90 & t88);
    goto LAB13;

}

static void NetDecl_31_9(char *t0)
{
    char t5[8];
    char t21[8];
    char t36[8];
    char t52[8];
    char t60[8];
    char t88[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    char *t20;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    char *t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    char *t34;
    char *t35;
    char *t37;
    char *t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    char *t51;
    char *t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    char *t59;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    char *t64;
    char *t65;
    char *t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    char *t74;
    char *t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    int t79;
    unsigned int t80;
    unsigned int t81;
    unsigned int t82;
    int t83;
    unsigned int t84;
    unsigned int t85;
    unsigned int t86;
    unsigned int t87;
    unsigned int t89;
    unsigned int t90;
    unsigned int t91;
    char *t92;
    char *t93;
    char *t94;
    unsigned int t95;
    unsigned int t96;
    unsigned int t97;
    unsigned int t98;
    unsigned int t99;
    unsigned int t100;
    unsigned int t101;
    char *t102;
    char *t103;
    unsigned int t104;
    unsigned int t105;
    unsigned int t106;
    unsigned int t107;
    unsigned int t108;
    unsigned int t109;
    unsigned int t110;
    unsigned int t111;
    int t112;
    int t113;
    unsigned int t114;
    unsigned int t115;
    unsigned int t116;
    unsigned int t117;
    unsigned int t118;
    unsigned int t119;
    char *t120;
    char *t121;
    char *t122;
    char *t123;
    char *t124;
    unsigned int t125;
    unsigned int t126;
    char *t127;
    unsigned int t128;
    unsigned int t129;
    char *t130;
    unsigned int t131;
    unsigned int t132;
    char *t133;

LAB0:    t1 = (t0 + 10352U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(36, ng0);
    t2 = (t0 + 2968U);
    t3 = *((char **)t2);
    t2 = (t0 + 1208U);
    t4 = *((char **)t2);
    t2 = ((char*)((ng11)));
    memset(t5, 0, 8);
    t6 = (t4 + 4);
    t7 = (t2 + 4);
    t8 = *((unsigned int *)t4);
    t9 = *((unsigned int *)t2);
    t10 = (t8 ^ t9);
    t11 = *((unsigned int *)t6);
    t12 = *((unsigned int *)t7);
    t13 = (t11 ^ t12);
    t14 = (t10 | t13);
    t15 = *((unsigned int *)t6);
    t16 = *((unsigned int *)t7);
    t17 = (t15 | t16);
    t18 = (~(t17));
    t19 = (t14 & t18);
    if (t19 != 0)
        goto LAB7;

LAB4:    if (t17 != 0)
        goto LAB6;

LAB5:    *((unsigned int *)t5) = 1;

LAB7:    memset(t21, 0, 8);
    t22 = (t5 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t5);
    t26 = (t25 & t24);
    t27 = (t26 & 1U);
    if (t27 != 0)
        goto LAB8;

LAB9:    if (*((unsigned int *)t22) != 0)
        goto LAB10;

LAB11:    t29 = (t21 + 4);
    t30 = *((unsigned int *)t21);
    t31 = (!(t30));
    t32 = *((unsigned int *)t29);
    t33 = (t31 || t32);
    if (t33 > 0)
        goto LAB12;

LAB13:    memcpy(t60, t21, 8);

LAB14:    t89 = *((unsigned int *)t3);
    t90 = *((unsigned int *)t60);
    t91 = (t89 & t90);
    *((unsigned int *)t88) = t91;
    t92 = (t3 + 4);
    t93 = (t60 + 4);
    t94 = (t88 + 4);
    t95 = *((unsigned int *)t92);
    t96 = *((unsigned int *)t93);
    t97 = (t95 | t96);
    *((unsigned int *)t94) = t97;
    t98 = *((unsigned int *)t94);
    t99 = (t98 != 0);
    if (t99 == 1)
        goto LAB26;

LAB27:
LAB28:    t120 = (t0 + 15960);
    t121 = (t120 + 56U);
    t122 = *((char **)t121);
    t123 = (t122 + 56U);
    t124 = *((char **)t123);
    memset(t124, 0, 8);
    t125 = 1U;
    t126 = t125;
    t127 = (t88 + 4);
    t128 = *((unsigned int *)t88);
    t125 = (t125 & t128);
    t129 = *((unsigned int *)t127);
    t126 = (t126 & t129);
    t130 = (t124 + 4);
    t131 = *((unsigned int *)t124);
    *((unsigned int *)t124) = (t131 | t125);
    t132 = *((unsigned int *)t130);
    *((unsigned int *)t130) = (t132 | t126);
    xsi_driver_vfirst_trans(t120, 0, 0U);
    t133 = (t0 + 15032);
    *((int *)t133) = 1;

LAB1:    return;
LAB6:    t20 = (t5 + 4);
    *((unsigned int *)t5) = 1;
    *((unsigned int *)t20) = 1;
    goto LAB7;

LAB8:    *((unsigned int *)t21) = 1;
    goto LAB11;

LAB10:    t28 = (t21 + 4);
    *((unsigned int *)t21) = 1;
    *((unsigned int *)t28) = 1;
    goto LAB11;

LAB12:    t34 = (t0 + 1208U);
    t35 = *((char **)t34);
    t34 = ((char*)((ng12)));
    memset(t36, 0, 8);
    t37 = (t35 + 4);
    t38 = (t34 + 4);
    t39 = *((unsigned int *)t35);
    t40 = *((unsigned int *)t34);
    t41 = (t39 ^ t40);
    t42 = *((unsigned int *)t37);
    t43 = *((unsigned int *)t38);
    t44 = (t42 ^ t43);
    t45 = (t41 | t44);
    t46 = *((unsigned int *)t37);
    t47 = *((unsigned int *)t38);
    t48 = (t46 | t47);
    t49 = (~(t48));
    t50 = (t45 & t49);
    if (t50 != 0)
        goto LAB18;

LAB15:    if (t48 != 0)
        goto LAB17;

LAB16:    *((unsigned int *)t36) = 1;

LAB18:    memset(t52, 0, 8);
    t53 = (t36 + 4);
    t54 = *((unsigned int *)t53);
    t55 = (~(t54));
    t56 = *((unsigned int *)t36);
    t57 = (t56 & t55);
    t58 = (t57 & 1U);
    if (t58 != 0)
        goto LAB19;

LAB20:    if (*((unsigned int *)t53) != 0)
        goto LAB21;

LAB22:    t61 = *((unsigned int *)t21);
    t62 = *((unsigned int *)t52);
    t63 = (t61 | t62);
    *((unsigned int *)t60) = t63;
    t64 = (t21 + 4);
    t65 = (t52 + 4);
    t66 = (t60 + 4);
    t67 = *((unsigned int *)t64);
    t68 = *((unsigned int *)t65);
    t69 = (t67 | t68);
    *((unsigned int *)t66) = t69;
    t70 = *((unsigned int *)t66);
    t71 = (t70 != 0);
    if (t71 == 1)
        goto LAB23;

LAB24:
LAB25:    goto LAB14;

LAB17:    t51 = (t36 + 4);
    *((unsigned int *)t36) = 1;
    *((unsigned int *)t51) = 1;
    goto LAB18;

LAB19:    *((unsigned int *)t52) = 1;
    goto LAB22;

LAB21:    t59 = (t52 + 4);
    *((unsigned int *)t52) = 1;
    *((unsigned int *)t59) = 1;
    goto LAB22;

LAB23:    t72 = *((unsigned int *)t60);
    t73 = *((unsigned int *)t66);
    *((unsigned int *)t60) = (t72 | t73);
    t74 = (t21 + 4);
    t75 = (t52 + 4);
    t76 = *((unsigned int *)t74);
    t77 = (~(t76));
    t78 = *((unsigned int *)t21);
    t79 = (t78 & t77);
    t80 = *((unsigned int *)t75);
    t81 = (~(t80));
    t82 = *((unsigned int *)t52);
    t83 = (t82 & t81);
    t84 = (~(t79));
    t85 = (~(t83));
    t86 = *((unsigned int *)t66);
    *((unsigned int *)t66) = (t86 & t84);
    t87 = *((unsigned int *)t66);
    *((unsigned int *)t66) = (t87 & t85);
    goto LAB25;

LAB26:    t100 = *((unsigned int *)t88);
    t101 = *((unsigned int *)t94);
    *((unsigned int *)t88) = (t100 | t101);
    t102 = (t3 + 4);
    t103 = (t60 + 4);
    t104 = *((unsigned int *)t3);
    t105 = (~(t104));
    t106 = *((unsigned int *)t102);
    t107 = (~(t106));
    t108 = *((unsigned int *)t60);
    t109 = (~(t108));
    t110 = *((unsigned int *)t103);
    t111 = (~(t110));
    t112 = (t105 & t107);
    t113 = (t109 & t111);
    t114 = (~(t112));
    t115 = (~(t113));
    t116 = *((unsigned int *)t94);
    *((unsigned int *)t94) = (t116 & t114);
    t117 = *((unsigned int *)t94);
    *((unsigned int *)t94) = (t117 & t115);
    t118 = *((unsigned int *)t88);
    *((unsigned int *)t88) = (t118 & t114);
    t119 = *((unsigned int *)t88);
    *((unsigned int *)t88) = (t119 & t115);
    goto LAB28;

}

static void NetDecl_31_10(char *t0)
{
    char t5[8];
    char t21[8];
    char t36[8];
    char t52[8];
    char t60[8];
    char t88[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    char *t20;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    char *t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    char *t34;
    char *t35;
    char *t37;
    char *t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    char *t51;
    char *t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    char *t59;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    char *t64;
    char *t65;
    char *t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    char *t74;
    char *t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    int t79;
    unsigned int t80;
    unsigned int t81;
    unsigned int t82;
    int t83;
    unsigned int t84;
    unsigned int t85;
    unsigned int t86;
    unsigned int t87;
    unsigned int t89;
    unsigned int t90;
    unsigned int t91;
    char *t92;
    char *t93;
    char *t94;
    unsigned int t95;
    unsigned int t96;
    unsigned int t97;
    unsigned int t98;
    unsigned int t99;
    unsigned int t100;
    unsigned int t101;
    char *t102;
    char *t103;
    unsigned int t104;
    unsigned int t105;
    unsigned int t106;
    unsigned int t107;
    unsigned int t108;
    unsigned int t109;
    unsigned int t110;
    unsigned int t111;
    int t112;
    int t113;
    unsigned int t114;
    unsigned int t115;
    unsigned int t116;
    unsigned int t117;
    unsigned int t118;
    unsigned int t119;
    char *t120;
    char *t121;
    char *t122;
    char *t123;
    char *t124;
    unsigned int t125;
    unsigned int t126;
    char *t127;
    unsigned int t128;
    unsigned int t129;
    char *t130;
    unsigned int t131;
    unsigned int t132;
    char *t133;

LAB0:    t1 = (t0 + 10600U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(37, ng0);
    t2 = (t0 + 2968U);
    t3 = *((char **)t2);
    t2 = (t0 + 1208U);
    t4 = *((char **)t2);
    t2 = ((char*)((ng13)));
    memset(t5, 0, 8);
    t6 = (t4 + 4);
    t7 = (t2 + 4);
    t8 = *((unsigned int *)t4);
    t9 = *((unsigned int *)t2);
    t10 = (t8 ^ t9);
    t11 = *((unsigned int *)t6);
    t12 = *((unsigned int *)t7);
    t13 = (t11 ^ t12);
    t14 = (t10 | t13);
    t15 = *((unsigned int *)t6);
    t16 = *((unsigned int *)t7);
    t17 = (t15 | t16);
    t18 = (~(t17));
    t19 = (t14 & t18);
    if (t19 != 0)
        goto LAB7;

LAB4:    if (t17 != 0)
        goto LAB6;

LAB5:    *((unsigned int *)t5) = 1;

LAB7:    memset(t21, 0, 8);
    t22 = (t5 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t5);
    t26 = (t25 & t24);
    t27 = (t26 & 1U);
    if (t27 != 0)
        goto LAB8;

LAB9:    if (*((unsigned int *)t22) != 0)
        goto LAB10;

LAB11:    t29 = (t21 + 4);
    t30 = *((unsigned int *)t21);
    t31 = (!(t30));
    t32 = *((unsigned int *)t29);
    t33 = (t31 || t32);
    if (t33 > 0)
        goto LAB12;

LAB13:    memcpy(t60, t21, 8);

LAB14:    t89 = *((unsigned int *)t3);
    t90 = *((unsigned int *)t60);
    t91 = (t89 & t90);
    *((unsigned int *)t88) = t91;
    t92 = (t3 + 4);
    t93 = (t60 + 4);
    t94 = (t88 + 4);
    t95 = *((unsigned int *)t92);
    t96 = *((unsigned int *)t93);
    t97 = (t95 | t96);
    *((unsigned int *)t94) = t97;
    t98 = *((unsigned int *)t94);
    t99 = (t98 != 0);
    if (t99 == 1)
        goto LAB26;

LAB27:
LAB28:    t120 = (t0 + 16024);
    t121 = (t120 + 56U);
    t122 = *((char **)t121);
    t123 = (t122 + 56U);
    t124 = *((char **)t123);
    memset(t124, 0, 8);
    t125 = 1U;
    t126 = t125;
    t127 = (t88 + 4);
    t128 = *((unsigned int *)t88);
    t125 = (t125 & t128);
    t129 = *((unsigned int *)t127);
    t126 = (t126 & t129);
    t130 = (t124 + 4);
    t131 = *((unsigned int *)t124);
    *((unsigned int *)t124) = (t131 | t125);
    t132 = *((unsigned int *)t130);
    *((unsigned int *)t130) = (t132 | t126);
    xsi_driver_vfirst_trans(t120, 0, 0U);
    t133 = (t0 + 15048);
    *((int *)t133) = 1;

LAB1:    return;
LAB6:    t20 = (t5 + 4);
    *((unsigned int *)t5) = 1;
    *((unsigned int *)t20) = 1;
    goto LAB7;

LAB8:    *((unsigned int *)t21) = 1;
    goto LAB11;

LAB10:    t28 = (t21 + 4);
    *((unsigned int *)t21) = 1;
    *((unsigned int *)t28) = 1;
    goto LAB11;

LAB12:    t34 = (t0 + 1208U);
    t35 = *((char **)t34);
    t34 = ((char*)((ng14)));
    memset(t36, 0, 8);
    t37 = (t35 + 4);
    t38 = (t34 + 4);
    t39 = *((unsigned int *)t35);
    t40 = *((unsigned int *)t34);
    t41 = (t39 ^ t40);
    t42 = *((unsigned int *)t37);
    t43 = *((unsigned int *)t38);
    t44 = (t42 ^ t43);
    t45 = (t41 | t44);
    t46 = *((unsigned int *)t37);
    t47 = *((unsigned int *)t38);
    t48 = (t46 | t47);
    t49 = (~(t48));
    t50 = (t45 & t49);
    if (t50 != 0)
        goto LAB18;

LAB15:    if (t48 != 0)
        goto LAB17;

LAB16:    *((unsigned int *)t36) = 1;

LAB18:    memset(t52, 0, 8);
    t53 = (t36 + 4);
    t54 = *((unsigned int *)t53);
    t55 = (~(t54));
    t56 = *((unsigned int *)t36);
    t57 = (t56 & t55);
    t58 = (t57 & 1U);
    if (t58 != 0)
        goto LAB19;

LAB20:    if (*((unsigned int *)t53) != 0)
        goto LAB21;

LAB22:    t61 = *((unsigned int *)t21);
    t62 = *((unsigned int *)t52);
    t63 = (t61 | t62);
    *((unsigned int *)t60) = t63;
    t64 = (t21 + 4);
    t65 = (t52 + 4);
    t66 = (t60 + 4);
    t67 = *((unsigned int *)t64);
    t68 = *((unsigned int *)t65);
    t69 = (t67 | t68);
    *((unsigned int *)t66) = t69;
    t70 = *((unsigned int *)t66);
    t71 = (t70 != 0);
    if (t71 == 1)
        goto LAB23;

LAB24:
LAB25:    goto LAB14;

LAB17:    t51 = (t36 + 4);
    *((unsigned int *)t36) = 1;
    *((unsigned int *)t51) = 1;
    goto LAB18;

LAB19:    *((unsigned int *)t52) = 1;
    goto LAB22;

LAB21:    t59 = (t52 + 4);
    *((unsigned int *)t52) = 1;
    *((unsigned int *)t59) = 1;
    goto LAB22;

LAB23:    t72 = *((unsigned int *)t60);
    t73 = *((unsigned int *)t66);
    *((unsigned int *)t60) = (t72 | t73);
    t74 = (t21 + 4);
    t75 = (t52 + 4);
    t76 = *((unsigned int *)t74);
    t77 = (~(t76));
    t78 = *((unsigned int *)t21);
    t79 = (t78 & t77);
    t80 = *((unsigned int *)t75);
    t81 = (~(t80));
    t82 = *((unsigned int *)t52);
    t83 = (t82 & t81);
    t84 = (~(t79));
    t85 = (~(t83));
    t86 = *((unsigned int *)t66);
    *((unsigned int *)t66) = (t86 & t84);
    t87 = *((unsigned int *)t66);
    *((unsigned int *)t66) = (t87 & t85);
    goto LAB25;

LAB26:    t100 = *((unsigned int *)t88);
    t101 = *((unsigned int *)t94);
    *((unsigned int *)t88) = (t100 | t101);
    t102 = (t3 + 4);
    t103 = (t60 + 4);
    t104 = *((unsigned int *)t3);
    t105 = (~(t104));
    t106 = *((unsigned int *)t102);
    t107 = (~(t106));
    t108 = *((unsigned int *)t60);
    t109 = (~(t108));
    t110 = *((unsigned int *)t103);
    t111 = (~(t110));
    t112 = (t105 & t107);
    t113 = (t109 & t111);
    t114 = (~(t112));
    t115 = (~(t113));
    t116 = *((unsigned int *)t94);
    *((unsigned int *)t94) = (t116 & t114);
    t117 = *((unsigned int *)t94);
    *((unsigned int *)t94) = (t117 & t115);
    t118 = *((unsigned int *)t88);
    *((unsigned int *)t88) = (t118 & t114);
    t119 = *((unsigned int *)t88);
    *((unsigned int *)t88) = (t119 & t115);
    goto LAB28;

}

static void NetDecl_31_11(char *t0)
{
    char t4[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    unsigned int t25;
    unsigned int t26;
    char *t27;
    unsigned int t28;
    unsigned int t29;
    char *t30;
    unsigned int t31;
    unsigned int t32;
    char *t33;

LAB0:    t1 = (t0 + 10848U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(39, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng10)));
    memset(t4, 0, 8);
    t5 = (t3 + 4);
    t6 = (t2 + 4);
    t7 = *((unsigned int *)t3);
    t8 = *((unsigned int *)t2);
    t9 = (t7 ^ t8);
    t10 = *((unsigned int *)t5);
    t11 = *((unsigned int *)t6);
    t12 = (t10 ^ t11);
    t13 = (t9 | t12);
    t14 = *((unsigned int *)t5);
    t15 = *((unsigned int *)t6);
    t16 = (t14 | t15);
    t17 = (~(t16));
    t18 = (t13 & t17);
    if (t18 != 0)
        goto LAB7;

LAB4:    if (t16 != 0)
        goto LAB6;

LAB5:    *((unsigned int *)t4) = 1;

LAB7:    t20 = (t0 + 16088);
    t21 = (t20 + 56U);
    t22 = *((char **)t21);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    memset(t24, 0, 8);
    t25 = 1U;
    t26 = t25;
    t27 = (t4 + 4);
    t28 = *((unsigned int *)t4);
    t25 = (t25 & t28);
    t29 = *((unsigned int *)t27);
    t26 = (t26 & t29);
    t30 = (t24 + 4);
    t31 = *((unsigned int *)t24);
    *((unsigned int *)t24) = (t31 | t25);
    t32 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t32 | t26);
    xsi_driver_vfirst_trans(t20, 0, 0U);
    t33 = (t0 + 15064);
    *((int *)t33) = 1;

LAB1:    return;
LAB6:    t19 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t19) = 1;
    goto LAB7;

}

static void NetDecl_31_12(char *t0)
{
    char t4[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    unsigned int t25;
    unsigned int t26;
    char *t27;
    unsigned int t28;
    unsigned int t29;
    char *t30;
    unsigned int t31;
    unsigned int t32;
    char *t33;

LAB0:    t1 = (t0 + 11096U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(40, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng15)));
    memset(t4, 0, 8);
    t5 = (t3 + 4);
    t6 = (t2 + 4);
    t7 = *((unsigned int *)t3);
    t8 = *((unsigned int *)t2);
    t9 = (t7 ^ t8);
    t10 = *((unsigned int *)t5);
    t11 = *((unsigned int *)t6);
    t12 = (t10 ^ t11);
    t13 = (t9 | t12);
    t14 = *((unsigned int *)t5);
    t15 = *((unsigned int *)t6);
    t16 = (t14 | t15);
    t17 = (~(t16));
    t18 = (t13 & t17);
    if (t18 != 0)
        goto LAB7;

LAB4:    if (t16 != 0)
        goto LAB6;

LAB5:    *((unsigned int *)t4) = 1;

LAB7:    t20 = (t0 + 16152);
    t21 = (t20 + 56U);
    t22 = *((char **)t21);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    memset(t24, 0, 8);
    t25 = 1U;
    t26 = t25;
    t27 = (t4 + 4);
    t28 = *((unsigned int *)t4);
    t25 = (t25 & t28);
    t29 = *((unsigned int *)t27);
    t26 = (t26 & t29);
    t30 = (t24 + 4);
    t31 = *((unsigned int *)t24);
    *((unsigned int *)t24) = (t31 | t25);
    t32 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t32 | t26);
    xsi_driver_vfirst_trans(t20, 0, 0U);
    t33 = (t0 + 15080);
    *((int *)t33) = 1;

LAB1:    return;
LAB6:    t19 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t19) = 1;
    goto LAB7;

}

static void NetDecl_31_13(char *t0)
{
    char t4[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    unsigned int t25;
    unsigned int t26;
    char *t27;
    unsigned int t28;
    unsigned int t29;
    char *t30;
    unsigned int t31;
    unsigned int t32;
    char *t33;

LAB0:    t1 = (t0 + 11344U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(41, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng16)));
    memset(t4, 0, 8);
    t5 = (t3 + 4);
    t6 = (t2 + 4);
    t7 = *((unsigned int *)t3);
    t8 = *((unsigned int *)t2);
    t9 = (t7 ^ t8);
    t10 = *((unsigned int *)t5);
    t11 = *((unsigned int *)t6);
    t12 = (t10 ^ t11);
    t13 = (t9 | t12);
    t14 = *((unsigned int *)t5);
    t15 = *((unsigned int *)t6);
    t16 = (t14 | t15);
    t17 = (~(t16));
    t18 = (t13 & t17);
    if (t18 != 0)
        goto LAB7;

LAB4:    if (t16 != 0)
        goto LAB6;

LAB5:    *((unsigned int *)t4) = 1;

LAB7:    t20 = (t0 + 16216);
    t21 = (t20 + 56U);
    t22 = *((char **)t21);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    memset(t24, 0, 8);
    t25 = 1U;
    t26 = t25;
    t27 = (t4 + 4);
    t28 = *((unsigned int *)t4);
    t25 = (t25 & t28);
    t29 = *((unsigned int *)t27);
    t26 = (t26 & t29);
    t30 = (t24 + 4);
    t31 = *((unsigned int *)t24);
    *((unsigned int *)t24) = (t31 | t25);
    t32 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t32 | t26);
    xsi_driver_vfirst_trans(t20, 0, 0U);
    t33 = (t0 + 15096);
    *((int *)t33) = 1;

LAB1:    return;
LAB6:    t19 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t19) = 1;
    goto LAB7;

}

static void NetDecl_31_14(char *t0)
{
    char t4[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    unsigned int t25;
    unsigned int t26;
    char *t27;
    unsigned int t28;
    unsigned int t29;
    char *t30;
    unsigned int t31;
    unsigned int t32;
    char *t33;

LAB0:    t1 = (t0 + 11592U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(42, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng17)));
    memset(t4, 0, 8);
    t5 = (t3 + 4);
    t6 = (t2 + 4);
    t7 = *((unsigned int *)t3);
    t8 = *((unsigned int *)t2);
    t9 = (t7 ^ t8);
    t10 = *((unsigned int *)t5);
    t11 = *((unsigned int *)t6);
    t12 = (t10 ^ t11);
    t13 = (t9 | t12);
    t14 = *((unsigned int *)t5);
    t15 = *((unsigned int *)t6);
    t16 = (t14 | t15);
    t17 = (~(t16));
    t18 = (t13 & t17);
    if (t18 != 0)
        goto LAB7;

LAB4:    if (t16 != 0)
        goto LAB6;

LAB5:    *((unsigned int *)t4) = 1;

LAB7:    t20 = (t0 + 16280);
    t21 = (t20 + 56U);
    t22 = *((char **)t21);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    memset(t24, 0, 8);
    t25 = 1U;
    t26 = t25;
    t27 = (t4 + 4);
    t28 = *((unsigned int *)t4);
    t25 = (t25 & t28);
    t29 = *((unsigned int *)t27);
    t26 = (t26 & t29);
    t30 = (t24 + 4);
    t31 = *((unsigned int *)t24);
    *((unsigned int *)t24) = (t31 | t25);
    t32 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t32 | t26);
    xsi_driver_vfirst_trans(t20, 0, 0U);
    t33 = (t0 + 15112);
    *((int *)t33) = 1;

LAB1:    return;
LAB6:    t19 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t19) = 1;
    goto LAB7;

}

static void NetDecl_31_15(char *t0)
{
    char t3[8];
    char t13[8];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    char *t32;
    char *t33;
    unsigned int t34;
    unsigned int t35;
    char *t36;
    unsigned int t37;
    unsigned int t38;
    char *t39;
    unsigned int t40;
    unsigned int t41;
    char *t42;

LAB0:    t1 = (t0 + 11840U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(44, ng0);
    t2 = (t0 + 1048U);
    t4 = *((char **)t2);
    memset(t3, 0, 8);
    t2 = (t3 + 4);
    t5 = (t4 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (t6 >> 0);
    *((unsigned int *)t3) = t7;
    t8 = *((unsigned int *)t5);
    t9 = (t8 >> 0);
    *((unsigned int *)t2) = t9;
    t10 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t10 & 7U);
    t11 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t11 & 7U);
    t12 = ((char*)((ng1)));
    memset(t13, 0, 8);
    t14 = (t3 + 4);
    t15 = (t12 + 4);
    t16 = *((unsigned int *)t3);
    t17 = *((unsigned int *)t12);
    t18 = (t16 ^ t17);
    t19 = *((unsigned int *)t14);
    t20 = *((unsigned int *)t15);
    t21 = (t19 ^ t20);
    t22 = (t18 | t21);
    t23 = *((unsigned int *)t14);
    t24 = *((unsigned int *)t15);
    t25 = (t23 | t24);
    t26 = (~(t25));
    t27 = (t22 & t26);
    if (t27 != 0)
        goto LAB7;

LAB4:    if (t25 != 0)
        goto LAB6;

LAB5:    *((unsigned int *)t13) = 1;

LAB7:    t29 = (t0 + 16344);
    t30 = (t29 + 56U);
    t31 = *((char **)t30);
    t32 = (t31 + 56U);
    t33 = *((char **)t32);
    memset(t33, 0, 8);
    t34 = 1U;
    t35 = t34;
    t36 = (t13 + 4);
    t37 = *((unsigned int *)t13);
    t34 = (t34 & t37);
    t38 = *((unsigned int *)t36);
    t35 = (t35 & t38);
    t39 = (t33 + 4);
    t40 = *((unsigned int *)t33);
    *((unsigned int *)t33) = (t40 | t34);
    t41 = *((unsigned int *)t39);
    *((unsigned int *)t39) = (t41 | t35);
    xsi_driver_vfirst_trans(t29, 0, 0U);
    t42 = (t0 + 15128);
    *((int *)t42) = 1;

LAB1:    return;
LAB6:    t28 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t28) = 1;
    goto LAB7;

}

static void NetDecl_31_16(char *t0)
{
    char t3[8];
    char t13[8];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    char *t32;
    char *t33;
    unsigned int t34;
    unsigned int t35;
    char *t36;
    unsigned int t37;
    unsigned int t38;
    char *t39;
    unsigned int t40;
    unsigned int t41;
    char *t42;

LAB0:    t1 = (t0 + 12088U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(45, ng0);
    t2 = (t0 + 1048U);
    t4 = *((char **)t2);
    memset(t3, 0, 8);
    t2 = (t3 + 4);
    t5 = (t4 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (t6 >> 0);
    *((unsigned int *)t3) = t7;
    t8 = *((unsigned int *)t5);
    t9 = (t8 >> 0);
    *((unsigned int *)t2) = t9;
    t10 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t10 & 7U);
    t11 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t11 & 7U);
    t12 = ((char*)((ng18)));
    memset(t13, 0, 8);
    t14 = (t3 + 4);
    t15 = (t12 + 4);
    t16 = *((unsigned int *)t3);
    t17 = *((unsigned int *)t12);
    t18 = (t16 ^ t17);
    t19 = *((unsigned int *)t14);
    t20 = *((unsigned int *)t15);
    t21 = (t19 ^ t20);
    t22 = (t18 | t21);
    t23 = *((unsigned int *)t14);
    t24 = *((unsigned int *)t15);
    t25 = (t23 | t24);
    t26 = (~(t25));
    t27 = (t22 & t26);
    if (t27 != 0)
        goto LAB7;

LAB4:    if (t25 != 0)
        goto LAB6;

LAB5:    *((unsigned int *)t13) = 1;

LAB7:    t29 = (t0 + 16408);
    t30 = (t29 + 56U);
    t31 = *((char **)t30);
    t32 = (t31 + 56U);
    t33 = *((char **)t32);
    memset(t33, 0, 8);
    t34 = 1U;
    t35 = t34;
    t36 = (t13 + 4);
    t37 = *((unsigned int *)t13);
    t34 = (t34 & t37);
    t38 = *((unsigned int *)t36);
    t35 = (t35 & t38);
    t39 = (t33 + 4);
    t40 = *((unsigned int *)t33);
    *((unsigned int *)t33) = (t40 | t34);
    t41 = *((unsigned int *)t39);
    *((unsigned int *)t39) = (t41 | t35);
    xsi_driver_vfirst_trans(t29, 0, 0U);
    t42 = (t0 + 15144);
    *((int *)t42) = 1;

LAB1:    return;
LAB6:    t28 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t28) = 1;
    goto LAB7;

}

static void NetDecl_31_17(char *t0)
{
    char t3[8];
    char t13[8];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    char *t32;
    char *t33;
    unsigned int t34;
    unsigned int t35;
    char *t36;
    unsigned int t37;
    unsigned int t38;
    char *t39;
    unsigned int t40;
    unsigned int t41;
    char *t42;

LAB0:    t1 = (t0 + 12336U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(46, ng0);
    t2 = (t0 + 1048U);
    t4 = *((char **)t2);
    memset(t3, 0, 8);
    t2 = (t3 + 4);
    t5 = (t4 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (t6 >> 0);
    *((unsigned int *)t3) = t7;
    t8 = *((unsigned int *)t5);
    t9 = (t8 >> 0);
    *((unsigned int *)t2) = t9;
    t10 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t10 & 7U);
    t11 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t11 & 7U);
    t12 = ((char*)((ng3)));
    memset(t13, 0, 8);
    t14 = (t3 + 4);
    t15 = (t12 + 4);
    t16 = *((unsigned int *)t3);
    t17 = *((unsigned int *)t12);
    t18 = (t16 ^ t17);
    t19 = *((unsigned int *)t14);
    t20 = *((unsigned int *)t15);
    t21 = (t19 ^ t20);
    t22 = (t18 | t21);
    t23 = *((unsigned int *)t14);
    t24 = *((unsigned int *)t15);
    t25 = (t23 | t24);
    t26 = (~(t25));
    t27 = (t22 & t26);
    if (t27 != 0)
        goto LAB7;

LAB4:    if (t25 != 0)
        goto LAB6;

LAB5:    *((unsigned int *)t13) = 1;

LAB7:    t29 = (t0 + 16472);
    t30 = (t29 + 56U);
    t31 = *((char **)t30);
    t32 = (t31 + 56U);
    t33 = *((char **)t32);
    memset(t33, 0, 8);
    t34 = 1U;
    t35 = t34;
    t36 = (t13 + 4);
    t37 = *((unsigned int *)t13);
    t34 = (t34 & t37);
    t38 = *((unsigned int *)t36);
    t35 = (t35 & t38);
    t39 = (t33 + 4);
    t40 = *((unsigned int *)t33);
    *((unsigned int *)t33) = (t40 | t34);
    t41 = *((unsigned int *)t39);
    *((unsigned int *)t39) = (t41 | t35);
    xsi_driver_vfirst_trans(t29, 0, 0U);
    t42 = (t0 + 15160);
    *((int *)t42) = 1;

LAB1:    return;
LAB6:    t28 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t28) = 1;
    goto LAB7;

}

static void NetDecl_31_18(char *t0)
{
    char t4[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    unsigned int t25;
    unsigned int t26;
    char *t27;
    unsigned int t28;
    unsigned int t29;
    char *t30;
    unsigned int t31;
    unsigned int t32;
    char *t33;

LAB0:    t1 = (t0 + 12584U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(48, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng3)));
    memset(t4, 0, 8);
    t5 = (t3 + 4);
    t6 = (t2 + 4);
    t7 = *((unsigned int *)t3);
    t8 = *((unsigned int *)t2);
    t9 = (t7 ^ t8);
    t10 = *((unsigned int *)t5);
    t11 = *((unsigned int *)t6);
    t12 = (t10 ^ t11);
    t13 = (t9 | t12);
    t14 = *((unsigned int *)t5);
    t15 = *((unsigned int *)t6);
    t16 = (t14 | t15);
    t17 = (~(t16));
    t18 = (t13 & t17);
    if (t18 != 0)
        goto LAB7;

LAB4:    if (t16 != 0)
        goto LAB6;

LAB5:    *((unsigned int *)t4) = 1;

LAB7:    t20 = (t0 + 16536);
    t21 = (t20 + 56U);
    t22 = *((char **)t21);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    memset(t24, 0, 8);
    t25 = 1U;
    t26 = t25;
    t27 = (t4 + 4);
    t28 = *((unsigned int *)t4);
    t25 = (t25 & t28);
    t29 = *((unsigned int *)t27);
    t26 = (t26 & t29);
    t30 = (t24 + 4);
    t31 = *((unsigned int *)t24);
    *((unsigned int *)t24) = (t31 | t25);
    t32 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t32 | t26);
    xsi_driver_vfirst_trans(t20, 0, 0U);
    t33 = (t0 + 15176);
    *((int *)t33) = 1;

LAB1:    return;
LAB6:    t19 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t19) = 1;
    goto LAB7;

}

static void NetDecl_51_19(char *t0)
{
    char t3[8];
    char t4[8];
    char t21[8];
    char t22[8];
    char t40[8];
    char t41[8];
    char t45[8];
    char t74[8];
    char t103[8];
    char t146[8];
    char t147[8];
    char *t1;
    char *t2;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    char *t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    char *t23;
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
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    char *t42;
    char *t43;
    char *t44;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
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
    int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    char *t72;
    char *t73;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    char *t78;
    char *t79;
    unsigned int t80;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    unsigned int t84;
    unsigned int t85;
    unsigned int t86;
    char *t87;
    char *t88;
    unsigned int t89;
    unsigned int t90;
    unsigned int t91;
    int t92;
    unsigned int t93;
    unsigned int t94;
    unsigned int t95;
    int t96;
    unsigned int t97;
    unsigned int t98;
    unsigned int t99;
    unsigned int t100;
    char *t101;
    char *t102;
    unsigned int t104;
    unsigned int t105;
    unsigned int t106;
    char *t107;
    char *t108;
    unsigned int t109;
    unsigned int t110;
    unsigned int t111;
    unsigned int t112;
    unsigned int t113;
    unsigned int t114;
    unsigned int t115;
    char *t116;
    char *t117;
    unsigned int t118;
    unsigned int t119;
    unsigned int t120;
    int t121;
    unsigned int t122;
    unsigned int t123;
    unsigned int t124;
    int t125;
    unsigned int t126;
    unsigned int t127;
    unsigned int t128;
    unsigned int t129;
    char *t130;
    unsigned int t131;
    unsigned int t132;
    unsigned int t133;
    unsigned int t134;
    unsigned int t135;
    char *t136;
    char *t137;
    unsigned int t138;
    unsigned int t139;
    unsigned int t140;
    char *t141;
    unsigned int t142;
    unsigned int t143;
    unsigned int t144;
    unsigned int t145;
    char *t148;
    char *t149;
    unsigned int t150;
    unsigned int t151;
    unsigned int t152;
    unsigned int t153;
    unsigned int t154;
    char *t155;
    char *t156;
    unsigned int t157;
    unsigned int t158;
    unsigned int t159;
    char *t160;
    unsigned int t161;
    unsigned int t162;
    unsigned int t163;
    unsigned int t164;
    char *t165;
    char *t166;
    char *t167;
    char *t168;
    char *t169;
    char *t170;
    unsigned int t171;
    unsigned int t172;
    char *t173;
    unsigned int t174;
    unsigned int t175;
    char *t176;
    unsigned int t177;
    unsigned int t178;
    char *t179;

LAB0:    t1 = (t0 + 12832U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(51, ng0);
    t2 = (t0 + 4088U);
    t5 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t5 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 & 1U);
    if (t10 != 0)
        goto LAB4;

LAB5:    if (*((unsigned int *)t2) != 0)
        goto LAB6;

LAB7:    t12 = (t4 + 4);
    t13 = *((unsigned int *)t4);
    t14 = *((unsigned int *)t12);
    t15 = (t13 || t14);
    if (t15 > 0)
        goto LAB8;

LAB9:    t17 = *((unsigned int *)t4);
    t18 = (~(t17));
    t19 = *((unsigned int *)t12);
    t20 = (t18 || t19);
    if (t20 > 0)
        goto LAB10;

LAB11:    if (*((unsigned int *)t12) > 0)
        goto LAB12;

LAB13:    if (*((unsigned int *)t4) > 0)
        goto LAB14;

LAB15:    memcpy(t3, t21, 8);

LAB16:    t166 = (t0 + 16600);
    t167 = (t166 + 56U);
    t168 = *((char **)t167);
    t169 = (t168 + 56U);
    t170 = *((char **)t169);
    memset(t170, 0, 8);
    t171 = 3U;
    t172 = t171;
    t173 = (t3 + 4);
    t174 = *((unsigned int *)t3);
    t171 = (t171 & t174);
    t175 = *((unsigned int *)t173);
    t172 = (t172 & t175);
    t176 = (t170 + 4);
    t177 = *((unsigned int *)t170);
    *((unsigned int *)t170) = (t177 | t171);
    t178 = *((unsigned int *)t176);
    *((unsigned int *)t176) = (t178 | t172);
    xsi_driver_vfirst_trans(t166, 0, 1U);
    t179 = (t0 + 15192);
    *((int *)t179) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t4) = 1;
    goto LAB7;

LAB6:    t11 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB7;

LAB8:    t16 = ((char*)((ng4)));
    goto LAB9;

LAB10:    t23 = (t0 + 3288U);
    t24 = *((char **)t23);
    memset(t22, 0, 8);
    t23 = (t24 + 4);
    t25 = *((unsigned int *)t23);
    t26 = (~(t25));
    t27 = *((unsigned int *)t24);
    t28 = (t27 & t26);
    t29 = (t28 & 1U);
    if (t29 != 0)
        goto LAB17;

LAB18:    if (*((unsigned int *)t23) != 0)
        goto LAB19;

LAB20:    t31 = (t22 + 4);
    t32 = *((unsigned int *)t22);
    t33 = *((unsigned int *)t31);
    t34 = (t32 || t33);
    if (t34 > 0)
        goto LAB21;

LAB22:    t36 = *((unsigned int *)t22);
    t37 = (~(t36));
    t38 = *((unsigned int *)t31);
    t39 = (t37 || t38);
    if (t39 > 0)
        goto LAB23;

LAB24:    if (*((unsigned int *)t31) > 0)
        goto LAB25;

LAB26:    if (*((unsigned int *)t22) > 0)
        goto LAB27;

LAB28:    memcpy(t21, t40, 8);

LAB29:    goto LAB11;

LAB12:    xsi_vlog_unsigned_bit_combine(t3, 32, t16, 32, t21, 32);
    goto LAB16;

LAB14:    memcpy(t3, t16, 8);
    goto LAB16;

LAB17:    *((unsigned int *)t22) = 1;
    goto LAB20;

LAB19:    t30 = (t22 + 4);
    *((unsigned int *)t22) = 1;
    *((unsigned int *)t30) = 1;
    goto LAB20;

LAB21:    t35 = ((char*)((ng4)));
    goto LAB22;

LAB23:    t42 = (t0 + 2968U);
    t43 = *((char **)t42);
    t42 = (t0 + 3448U);
    t44 = *((char **)t42);
    t46 = *((unsigned int *)t43);
    t47 = *((unsigned int *)t44);
    t48 = (t46 | t47);
    *((unsigned int *)t45) = t48;
    t42 = (t43 + 4);
    t49 = (t44 + 4);
    t50 = (t45 + 4);
    t51 = *((unsigned int *)t42);
    t52 = *((unsigned int *)t49);
    t53 = (t51 | t52);
    *((unsigned int *)t50) = t53;
    t54 = *((unsigned int *)t50);
    t55 = (t54 != 0);
    if (t55 == 1)
        goto LAB30;

LAB31:
LAB32:    t72 = (t0 + 3608U);
    t73 = *((char **)t72);
    t75 = *((unsigned int *)t45);
    t76 = *((unsigned int *)t73);
    t77 = (t75 | t76);
    *((unsigned int *)t74) = t77;
    t72 = (t45 + 4);
    t78 = (t73 + 4);
    t79 = (t74 + 4);
    t80 = *((unsigned int *)t72);
    t81 = *((unsigned int *)t78);
    t82 = (t80 | t81);
    *((unsigned int *)t79) = t82;
    t83 = *((unsigned int *)t79);
    t84 = (t83 != 0);
    if (t84 == 1)
        goto LAB33;

LAB34:
LAB35:    t101 = (t0 + 3768U);
    t102 = *((char **)t101);
    t104 = *((unsigned int *)t74);
    t105 = *((unsigned int *)t102);
    t106 = (t104 | t105);
    *((unsigned int *)t103) = t106;
    t101 = (t74 + 4);
    t107 = (t102 + 4);
    t108 = (t103 + 4);
    t109 = *((unsigned int *)t101);
    t110 = *((unsigned int *)t107);
    t111 = (t109 | t110);
    *((unsigned int *)t108) = t111;
    t112 = *((unsigned int *)t108);
    t113 = (t112 != 0);
    if (t113 == 1)
        goto LAB36;

LAB37:
LAB38:    memset(t41, 0, 8);
    t130 = (t103 + 4);
    t131 = *((unsigned int *)t130);
    t132 = (~(t131));
    t133 = *((unsigned int *)t103);
    t134 = (t133 & t132);
    t135 = (t134 & 1U);
    if (t135 != 0)
        goto LAB39;

LAB40:    if (*((unsigned int *)t130) != 0)
        goto LAB41;

LAB42:    t137 = (t41 + 4);
    t138 = *((unsigned int *)t41);
    t139 = *((unsigned int *)t137);
    t140 = (t138 || t139);
    if (t140 > 0)
        goto LAB43;

LAB44:    t142 = *((unsigned int *)t41);
    t143 = (~(t142));
    t144 = *((unsigned int *)t137);
    t145 = (t143 || t144);
    if (t145 > 0)
        goto LAB45;

LAB46:    if (*((unsigned int *)t137) > 0)
        goto LAB47;

LAB48:    if (*((unsigned int *)t41) > 0)
        goto LAB49;

LAB50:    memcpy(t40, t146, 8);

LAB51:    goto LAB24;

LAB25:    xsi_vlog_unsigned_bit_combine(t21, 32, t35, 32, t40, 32);
    goto LAB29;

LAB27:    memcpy(t21, t35, 8);
    goto LAB29;

LAB30:    t56 = *((unsigned int *)t45);
    t57 = *((unsigned int *)t50);
    *((unsigned int *)t45) = (t56 | t57);
    t58 = (t43 + 4);
    t59 = (t44 + 4);
    t60 = *((unsigned int *)t58);
    t61 = (~(t60));
    t62 = *((unsigned int *)t43);
    t63 = (t62 & t61);
    t64 = *((unsigned int *)t59);
    t65 = (~(t64));
    t66 = *((unsigned int *)t44);
    t67 = (t66 & t65);
    t68 = (~(t63));
    t69 = (~(t67));
    t70 = *((unsigned int *)t50);
    *((unsigned int *)t50) = (t70 & t68);
    t71 = *((unsigned int *)t50);
    *((unsigned int *)t50) = (t71 & t69);
    goto LAB32;

LAB33:    t85 = *((unsigned int *)t74);
    t86 = *((unsigned int *)t79);
    *((unsigned int *)t74) = (t85 | t86);
    t87 = (t45 + 4);
    t88 = (t73 + 4);
    t89 = *((unsigned int *)t87);
    t90 = (~(t89));
    t91 = *((unsigned int *)t45);
    t92 = (t91 & t90);
    t93 = *((unsigned int *)t88);
    t94 = (~(t93));
    t95 = *((unsigned int *)t73);
    t96 = (t95 & t94);
    t97 = (~(t92));
    t98 = (~(t96));
    t99 = *((unsigned int *)t79);
    *((unsigned int *)t79) = (t99 & t97);
    t100 = *((unsigned int *)t79);
    *((unsigned int *)t79) = (t100 & t98);
    goto LAB35;

LAB36:    t114 = *((unsigned int *)t103);
    t115 = *((unsigned int *)t108);
    *((unsigned int *)t103) = (t114 | t115);
    t116 = (t74 + 4);
    t117 = (t102 + 4);
    t118 = *((unsigned int *)t116);
    t119 = (~(t118));
    t120 = *((unsigned int *)t74);
    t121 = (t120 & t119);
    t122 = *((unsigned int *)t117);
    t123 = (~(t122));
    t124 = *((unsigned int *)t102);
    t125 = (t124 & t123);
    t126 = (~(t121));
    t127 = (~(t125));
    t128 = *((unsigned int *)t108);
    *((unsigned int *)t108) = (t128 & t126);
    t129 = *((unsigned int *)t108);
    *((unsigned int *)t108) = (t129 & t127);
    goto LAB38;

LAB39:    *((unsigned int *)t41) = 1;
    goto LAB42;

LAB41:    t136 = (t41 + 4);
    *((unsigned int *)t41) = 1;
    *((unsigned int *)t136) = 1;
    goto LAB42;

LAB43:    t141 = ((char*)((ng6)));
    goto LAB44;

LAB45:    t148 = (t0 + 3128U);
    t149 = *((char **)t148);
    memset(t147, 0, 8);
    t148 = (t149 + 4);
    t150 = *((unsigned int *)t148);
    t151 = (~(t150));
    t152 = *((unsigned int *)t149);
    t153 = (t152 & t151);
    t154 = (t153 & 1U);
    if (t154 != 0)
        goto LAB52;

LAB53:    if (*((unsigned int *)t148) != 0)
        goto LAB54;

LAB55:    t156 = (t147 + 4);
    t157 = *((unsigned int *)t147);
    t158 = *((unsigned int *)t156);
    t159 = (t157 || t158);
    if (t159 > 0)
        goto LAB56;

LAB57:    t161 = *((unsigned int *)t147);
    t162 = (~(t161));
    t163 = *((unsigned int *)t156);
    t164 = (t162 || t163);
    if (t164 > 0)
        goto LAB58;

LAB59:    if (*((unsigned int *)t156) > 0)
        goto LAB60;

LAB61:    if (*((unsigned int *)t147) > 0)
        goto LAB62;

LAB63:    memcpy(t146, t165, 8);

LAB64:    goto LAB46;

LAB47:    xsi_vlog_unsigned_bit_combine(t40, 32, t141, 32, t146, 32);
    goto LAB51;

LAB49:    memcpy(t40, t141, 8);
    goto LAB51;

LAB52:    *((unsigned int *)t147) = 1;
    goto LAB55;

LAB54:    t155 = (t147 + 4);
    *((unsigned int *)t147) = 1;
    *((unsigned int *)t155) = 1;
    goto LAB55;

LAB56:    t160 = ((char*)((ng4)));
    goto LAB57;

LAB58:    t165 = ((char*)((ng4)));
    goto LAB59;

LAB60:    xsi_vlog_unsigned_bit_combine(t146, 32, t160, 32, t165, 32);
    goto LAB64;

LAB62:    memcpy(t146, t160, 8);
    goto LAB64;

}

static void NetDecl_60_20(char *t0)
{
    char t4[8];
    char t17[8];
    char t33[8];
    char t41[8];
    char t73[8];
    char t88[8];
    char t103[8];
    char t111[8];
    char t143[8];
    char t158[8];
    char t161[8];
    char t169[8];
    char *t1;
    char *t2;
    char *t3;
    unsigned int t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    char *t10;
    char *t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    char *t16;
    char *t18;
    char *t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    char *t32;
    char *t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    char *t40;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    char *t45;
    char *t46;
    char *t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    char *t55;
    char *t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    int t65;
    int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    char *t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    char *t80;
    char *t81;
    unsigned int t82;
    unsigned int t83;
    unsigned int t84;
    char *t85;
    char *t86;
    char *t87;
    char *t89;
    unsigned int t90;
    unsigned int t91;
    unsigned int t92;
    unsigned int t93;
    unsigned int t94;
    unsigned int t95;
    unsigned int t96;
    unsigned int t97;
    unsigned int t98;
    unsigned int t99;
    unsigned int t100;
    unsigned int t101;
    char *t102;
    char *t104;
    unsigned int t105;
    unsigned int t106;
    unsigned int t107;
    unsigned int t108;
    unsigned int t109;
    char *t110;
    unsigned int t112;
    unsigned int t113;
    unsigned int t114;
    char *t115;
    char *t116;
    char *t117;
    unsigned int t118;
    unsigned int t119;
    unsigned int t120;
    unsigned int t121;
    unsigned int t122;
    unsigned int t123;
    unsigned int t124;
    char *t125;
    char *t126;
    unsigned int t127;
    unsigned int t128;
    unsigned int t129;
    unsigned int t130;
    unsigned int t131;
    unsigned int t132;
    unsigned int t133;
    unsigned int t134;
    int t135;
    int t136;
    unsigned int t137;
    unsigned int t138;
    unsigned int t139;
    unsigned int t140;
    unsigned int t141;
    unsigned int t142;
    char *t144;
    unsigned int t145;
    unsigned int t146;
    unsigned int t147;
    unsigned int t148;
    unsigned int t149;
    char *t150;
    char *t151;
    unsigned int t152;
    unsigned int t153;
    unsigned int t154;
    char *t155;
    char *t156;
    char *t157;
    char *t159;
    char *t160;
    char *t162;
    unsigned int t163;
    unsigned int t164;
    unsigned int t165;
    unsigned int t166;
    unsigned int t167;
    char *t168;
    unsigned int t170;
    unsigned int t171;
    unsigned int t172;
    char *t173;
    char *t174;
    char *t175;
    unsigned int t176;
    unsigned int t177;
    unsigned int t178;
    unsigned int t179;
    unsigned int t180;
    unsigned int t181;
    unsigned int t182;
    char *t183;
    char *t184;
    unsigned int t185;
    unsigned int t186;
    unsigned int t187;
    unsigned int t188;
    unsigned int t189;
    unsigned int t190;
    unsigned int t191;
    unsigned int t192;
    int t193;
    int t194;
    unsigned int t195;
    unsigned int t196;
    unsigned int t197;
    unsigned int t198;
    unsigned int t199;
    unsigned int t200;
    char *t201;
    char *t202;
    char *t203;
    char *t204;
    char *t205;
    unsigned int t206;
    unsigned int t207;
    char *t208;
    unsigned int t209;
    unsigned int t210;
    char *t211;
    unsigned int t212;
    unsigned int t213;
    char *t214;

LAB0:    t1 = (t0 + 13080U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(60, ng0);
    t2 = (t0 + 1848U);
    t3 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t3 + 4);
    t5 = *((unsigned int *)t2);
    t6 = (~(t5));
    t7 = *((unsigned int *)t3);
    t8 = (t7 & t6);
    t9 = (t8 & 1U);
    if (t9 != 0)
        goto LAB4;

LAB5:    if (*((unsigned int *)t2) != 0)
        goto LAB6;

LAB7:    t11 = (t4 + 4);
    t12 = *((unsigned int *)t4);
    t13 = *((unsigned int *)t11);
    t14 = (t12 || t13);
    if (t14 > 0)
        goto LAB8;

LAB9:    memcpy(t41, t4, 8);

LAB10:    memset(t73, 0, 8);
    t74 = (t41 + 4);
    t75 = *((unsigned int *)t74);
    t76 = (~(t75));
    t77 = *((unsigned int *)t41);
    t78 = (t77 & t76);
    t79 = (t78 & 1U);
    if (t79 != 0)
        goto LAB22;

LAB23:    if (*((unsigned int *)t74) != 0)
        goto LAB24;

LAB25:    t81 = (t73 + 4);
    t82 = *((unsigned int *)t73);
    t83 = *((unsigned int *)t81);
    t84 = (t82 || t83);
    if (t84 > 0)
        goto LAB26;

LAB27:    memcpy(t111, t73, 8);

LAB28:    memset(t143, 0, 8);
    t144 = (t111 + 4);
    t145 = *((unsigned int *)t144);
    t146 = (~(t145));
    t147 = *((unsigned int *)t111);
    t148 = (t147 & t146);
    t149 = (t148 & 1U);
    if (t149 != 0)
        goto LAB40;

LAB41:    if (*((unsigned int *)t144) != 0)
        goto LAB42;

LAB43:    t151 = (t143 + 4);
    t152 = *((unsigned int *)t143);
    t153 = *((unsigned int *)t151);
    t154 = (t152 || t153);
    if (t154 > 0)
        goto LAB44;

LAB45:    memcpy(t169, t143, 8);

LAB46:    t201 = (t0 + 16664);
    t202 = (t201 + 56U);
    t203 = *((char **)t202);
    t204 = (t203 + 56U);
    t205 = *((char **)t204);
    memset(t205, 0, 8);
    t206 = 1U;
    t207 = t206;
    t208 = (t169 + 4);
    t209 = *((unsigned int *)t169);
    t206 = (t206 & t209);
    t210 = *((unsigned int *)t208);
    t207 = (t207 & t210);
    t211 = (t205 + 4);
    t212 = *((unsigned int *)t205);
    *((unsigned int *)t205) = (t212 | t206);
    t213 = *((unsigned int *)t211);
    *((unsigned int *)t211) = (t213 | t207);
    xsi_driver_vfirst_trans(t201, 0, 0U);
    t214 = (t0 + 15208);
    *((int *)t214) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t4) = 1;
    goto LAB7;

LAB6:    t10 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t10) = 1;
    goto LAB7;

LAB8:    t15 = (t0 + 2008U);
    t16 = *((char **)t15);
    t15 = ((char*)((ng4)));
    memset(t17, 0, 8);
    t18 = (t16 + 4);
    t19 = (t15 + 4);
    t20 = *((unsigned int *)t16);
    t21 = *((unsigned int *)t15);
    t22 = (t20 ^ t21);
    t23 = *((unsigned int *)t18);
    t24 = *((unsigned int *)t19);
    t25 = (t23 ^ t24);
    t26 = (t22 | t25);
    t27 = *((unsigned int *)t18);
    t28 = *((unsigned int *)t19);
    t29 = (t27 | t28);
    t30 = (~(t29));
    t31 = (t26 & t30);
    if (t31 != 0)
        goto LAB12;

LAB11:    if (t29 != 0)
        goto LAB13;

LAB14:    memset(t33, 0, 8);
    t34 = (t17 + 4);
    t35 = *((unsigned int *)t34);
    t36 = (~(t35));
    t37 = *((unsigned int *)t17);
    t38 = (t37 & t36);
    t39 = (t38 & 1U);
    if (t39 != 0)
        goto LAB15;

LAB16:    if (*((unsigned int *)t34) != 0)
        goto LAB17;

LAB18:    t42 = *((unsigned int *)t4);
    t43 = *((unsigned int *)t33);
    t44 = (t42 & t43);
    *((unsigned int *)t41) = t44;
    t45 = (t4 + 4);
    t46 = (t33 + 4);
    t47 = (t41 + 4);
    t48 = *((unsigned int *)t45);
    t49 = *((unsigned int *)t46);
    t50 = (t48 | t49);
    *((unsigned int *)t47) = t50;
    t51 = *((unsigned int *)t47);
    t52 = (t51 != 0);
    if (t52 == 1)
        goto LAB19;

LAB20:
LAB21:    goto LAB10;

LAB12:    *((unsigned int *)t17) = 1;
    goto LAB14;

LAB13:    t32 = (t17 + 4);
    *((unsigned int *)t17) = 1;
    *((unsigned int *)t32) = 1;
    goto LAB14;

LAB15:    *((unsigned int *)t33) = 1;
    goto LAB18;

LAB17:    t40 = (t33 + 4);
    *((unsigned int *)t33) = 1;
    *((unsigned int *)t40) = 1;
    goto LAB18;

LAB19:    t53 = *((unsigned int *)t41);
    t54 = *((unsigned int *)t47);
    *((unsigned int *)t41) = (t53 | t54);
    t55 = (t4 + 4);
    t56 = (t33 + 4);
    t57 = *((unsigned int *)t4);
    t58 = (~(t57));
    t59 = *((unsigned int *)t55);
    t60 = (~(t59));
    t61 = *((unsigned int *)t33);
    t62 = (~(t61));
    t63 = *((unsigned int *)t56);
    t64 = (~(t63));
    t65 = (t58 & t60);
    t66 = (t62 & t64);
    t67 = (~(t65));
    t68 = (~(t66));
    t69 = *((unsigned int *)t47);
    *((unsigned int *)t47) = (t69 & t67);
    t70 = *((unsigned int *)t47);
    *((unsigned int *)t47) = (t70 & t68);
    t71 = *((unsigned int *)t41);
    *((unsigned int *)t41) = (t71 & t67);
    t72 = *((unsigned int *)t41);
    *((unsigned int *)t41) = (t72 & t68);
    goto LAB21;

LAB22:    *((unsigned int *)t73) = 1;
    goto LAB25;

LAB24:    t80 = (t73 + 4);
    *((unsigned int *)t73) = 1;
    *((unsigned int *)t80) = 1;
    goto LAB25;

LAB26:    t85 = (t0 + 1368U);
    t86 = *((char **)t85);
    t85 = (t0 + 2008U);
    t87 = *((char **)t85);
    memset(t88, 0, 8);
    t85 = (t86 + 4);
    t89 = (t87 + 4);
    t90 = *((unsigned int *)t86);
    t91 = *((unsigned int *)t87);
    t92 = (t90 ^ t91);
    t93 = *((unsigned int *)t85);
    t94 = *((unsigned int *)t89);
    t95 = (t93 ^ t94);
    t96 = (t92 | t95);
    t97 = *((unsigned int *)t85);
    t98 = *((unsigned int *)t89);
    t99 = (t97 | t98);
    t100 = (~(t99));
    t101 = (t96 & t100);
    if (t101 != 0)
        goto LAB32;

LAB29:    if (t99 != 0)
        goto LAB31;

LAB30:    *((unsigned int *)t88) = 1;

LAB32:    memset(t103, 0, 8);
    t104 = (t88 + 4);
    t105 = *((unsigned int *)t104);
    t106 = (~(t105));
    t107 = *((unsigned int *)t88);
    t108 = (t107 & t106);
    t109 = (t108 & 1U);
    if (t109 != 0)
        goto LAB33;

LAB34:    if (*((unsigned int *)t104) != 0)
        goto LAB35;

LAB36:    t112 = *((unsigned int *)t73);
    t113 = *((unsigned int *)t103);
    t114 = (t112 & t113);
    *((unsigned int *)t111) = t114;
    t115 = (t73 + 4);
    t116 = (t103 + 4);
    t117 = (t111 + 4);
    t118 = *((unsigned int *)t115);
    t119 = *((unsigned int *)t116);
    t120 = (t118 | t119);
    *((unsigned int *)t117) = t120;
    t121 = *((unsigned int *)t117);
    t122 = (t121 != 0);
    if (t122 == 1)
        goto LAB37;

LAB38:
LAB39:    goto LAB28;

LAB31:    t102 = (t88 + 4);
    *((unsigned int *)t88) = 1;
    *((unsigned int *)t102) = 1;
    goto LAB32;

LAB33:    *((unsigned int *)t103) = 1;
    goto LAB36;

LAB35:    t110 = (t103 + 4);
    *((unsigned int *)t103) = 1;
    *((unsigned int *)t110) = 1;
    goto LAB36;

LAB37:    t123 = *((unsigned int *)t111);
    t124 = *((unsigned int *)t117);
    *((unsigned int *)t111) = (t123 | t124);
    t125 = (t73 + 4);
    t126 = (t103 + 4);
    t127 = *((unsigned int *)t73);
    t128 = (~(t127));
    t129 = *((unsigned int *)t125);
    t130 = (~(t129));
    t131 = *((unsigned int *)t103);
    t132 = (~(t131));
    t133 = *((unsigned int *)t126);
    t134 = (~(t133));
    t135 = (t128 & t130);
    t136 = (t132 & t134);
    t137 = (~(t135));
    t138 = (~(t136));
    t139 = *((unsigned int *)t117);
    *((unsigned int *)t117) = (t139 & t137);
    t140 = *((unsigned int *)t117);
    *((unsigned int *)t117) = (t140 & t138);
    t141 = *((unsigned int *)t111);
    *((unsigned int *)t111) = (t141 & t137);
    t142 = *((unsigned int *)t111);
    *((unsigned int *)t111) = (t142 & t138);
    goto LAB39;

LAB40:    *((unsigned int *)t143) = 1;
    goto LAB43;

LAB42:    t150 = (t143 + 4);
    *((unsigned int *)t143) = 1;
    *((unsigned int *)t150) = 1;
    goto LAB43;

LAB44:    t155 = (t0 + 2168U);
    t156 = *((char **)t155);
    t155 = (t0 + 6008U);
    t157 = *((char **)t155);
    memset(t158, 0, 8);
    t155 = (t156 + 4);
    if (*((unsigned int *)t155) != 0)
        goto LAB48;

LAB47:    t159 = (t157 + 4);
    if (*((unsigned int *)t159) != 0)
        goto LAB48;

LAB51:    if (*((unsigned int *)t156) > *((unsigned int *)t157))
        goto LAB49;

LAB50:    memset(t161, 0, 8);
    t162 = (t158 + 4);
    t163 = *((unsigned int *)t162);
    t164 = (~(t163));
    t165 = *((unsigned int *)t158);
    t166 = (t165 & t164);
    t167 = (t166 & 1U);
    if (t167 != 0)
        goto LAB52;

LAB53:    if (*((unsigned int *)t162) != 0)
        goto LAB54;

LAB55:    t170 = *((unsigned int *)t143);
    t171 = *((unsigned int *)t161);
    t172 = (t170 & t171);
    *((unsigned int *)t169) = t172;
    t173 = (t143 + 4);
    t174 = (t161 + 4);
    t175 = (t169 + 4);
    t176 = *((unsigned int *)t173);
    t177 = *((unsigned int *)t174);
    t178 = (t176 | t177);
    *((unsigned int *)t175) = t178;
    t179 = *((unsigned int *)t175);
    t180 = (t179 != 0);
    if (t180 == 1)
        goto LAB56;

LAB57:
LAB58:    goto LAB46;

LAB48:    t160 = (t158 + 4);
    *((unsigned int *)t158) = 1;
    *((unsigned int *)t160) = 1;
    goto LAB50;

LAB49:    *((unsigned int *)t158) = 1;
    goto LAB50;

LAB52:    *((unsigned int *)t161) = 1;
    goto LAB55;

LAB54:    t168 = (t161 + 4);
    *((unsigned int *)t161) = 1;
    *((unsigned int *)t168) = 1;
    goto LAB55;

LAB56:    t181 = *((unsigned int *)t169);
    t182 = *((unsigned int *)t175);
    *((unsigned int *)t169) = (t181 | t182);
    t183 = (t143 + 4);
    t184 = (t161 + 4);
    t185 = *((unsigned int *)t143);
    t186 = (~(t185));
    t187 = *((unsigned int *)t183);
    t188 = (~(t187));
    t189 = *((unsigned int *)t161);
    t190 = (~(t189));
    t191 = *((unsigned int *)t184);
    t192 = (~(t191));
    t193 = (t186 & t188);
    t194 = (t190 & t192);
    t195 = (~(t193));
    t196 = (~(t194));
    t197 = *((unsigned int *)t175);
    *((unsigned int *)t175) = (t197 & t195);
    t198 = *((unsigned int *)t175);
    *((unsigned int *)t175) = (t198 & t196);
    t199 = *((unsigned int *)t169);
    *((unsigned int *)t169) = (t199 & t195);
    t200 = *((unsigned int *)t169);
    *((unsigned int *)t169) = (t200 & t196);
    goto LAB58;

}

static void NetDecl_64_21(char *t0)
{
    char t4[8];
    char t17[8];
    char t33[8];
    char t41[8];
    char t73[8];
    char t88[8];
    char t103[8];
    char t111[8];
    char t143[8];
    char t158[8];
    char t161[8];
    char t169[8];
    char *t1;
    char *t2;
    char *t3;
    unsigned int t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    char *t10;
    char *t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    char *t16;
    char *t18;
    char *t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    char *t32;
    char *t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    char *t40;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    char *t45;
    char *t46;
    char *t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    char *t55;
    char *t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    int t65;
    int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    char *t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    char *t80;
    char *t81;
    unsigned int t82;
    unsigned int t83;
    unsigned int t84;
    char *t85;
    char *t86;
    char *t87;
    char *t89;
    unsigned int t90;
    unsigned int t91;
    unsigned int t92;
    unsigned int t93;
    unsigned int t94;
    unsigned int t95;
    unsigned int t96;
    unsigned int t97;
    unsigned int t98;
    unsigned int t99;
    unsigned int t100;
    unsigned int t101;
    char *t102;
    char *t104;
    unsigned int t105;
    unsigned int t106;
    unsigned int t107;
    unsigned int t108;
    unsigned int t109;
    char *t110;
    unsigned int t112;
    unsigned int t113;
    unsigned int t114;
    char *t115;
    char *t116;
    char *t117;
    unsigned int t118;
    unsigned int t119;
    unsigned int t120;
    unsigned int t121;
    unsigned int t122;
    unsigned int t123;
    unsigned int t124;
    char *t125;
    char *t126;
    unsigned int t127;
    unsigned int t128;
    unsigned int t129;
    unsigned int t130;
    unsigned int t131;
    unsigned int t132;
    unsigned int t133;
    unsigned int t134;
    int t135;
    int t136;
    unsigned int t137;
    unsigned int t138;
    unsigned int t139;
    unsigned int t140;
    unsigned int t141;
    unsigned int t142;
    char *t144;
    unsigned int t145;
    unsigned int t146;
    unsigned int t147;
    unsigned int t148;
    unsigned int t149;
    char *t150;
    char *t151;
    unsigned int t152;
    unsigned int t153;
    unsigned int t154;
    char *t155;
    char *t156;
    char *t157;
    char *t159;
    char *t160;
    char *t162;
    unsigned int t163;
    unsigned int t164;
    unsigned int t165;
    unsigned int t166;
    unsigned int t167;
    char *t168;
    unsigned int t170;
    unsigned int t171;
    unsigned int t172;
    char *t173;
    char *t174;
    char *t175;
    unsigned int t176;
    unsigned int t177;
    unsigned int t178;
    unsigned int t179;
    unsigned int t180;
    unsigned int t181;
    unsigned int t182;
    char *t183;
    char *t184;
    unsigned int t185;
    unsigned int t186;
    unsigned int t187;
    unsigned int t188;
    unsigned int t189;
    unsigned int t190;
    unsigned int t191;
    unsigned int t192;
    int t193;
    int t194;
    unsigned int t195;
    unsigned int t196;
    unsigned int t197;
    unsigned int t198;
    unsigned int t199;
    unsigned int t200;
    char *t201;
    char *t202;
    char *t203;
    char *t204;
    char *t205;
    unsigned int t206;
    unsigned int t207;
    char *t208;
    unsigned int t209;
    unsigned int t210;
    char *t211;
    unsigned int t212;
    unsigned int t213;
    char *t214;

LAB0:    t1 = (t0 + 13328U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(64, ng0);
    t2 = (t0 + 1848U);
    t3 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t3 + 4);
    t5 = *((unsigned int *)t2);
    t6 = (~(t5));
    t7 = *((unsigned int *)t3);
    t8 = (t7 & t6);
    t9 = (t8 & 1U);
    if (t9 != 0)
        goto LAB4;

LAB5:    if (*((unsigned int *)t2) != 0)
        goto LAB6;

LAB7:    t11 = (t4 + 4);
    t12 = *((unsigned int *)t4);
    t13 = *((unsigned int *)t11);
    t14 = (t12 || t13);
    if (t14 > 0)
        goto LAB8;

LAB9:    memcpy(t41, t4, 8);

LAB10:    memset(t73, 0, 8);
    t74 = (t41 + 4);
    t75 = *((unsigned int *)t74);
    t76 = (~(t75));
    t77 = *((unsigned int *)t41);
    t78 = (t77 & t76);
    t79 = (t78 & 1U);
    if (t79 != 0)
        goto LAB22;

LAB23:    if (*((unsigned int *)t74) != 0)
        goto LAB24;

LAB25:    t81 = (t73 + 4);
    t82 = *((unsigned int *)t73);
    t83 = *((unsigned int *)t81);
    t84 = (t82 || t83);
    if (t84 > 0)
        goto LAB26;

LAB27:    memcpy(t111, t73, 8);

LAB28:    memset(t143, 0, 8);
    t144 = (t111 + 4);
    t145 = *((unsigned int *)t144);
    t146 = (~(t145));
    t147 = *((unsigned int *)t111);
    t148 = (t147 & t146);
    t149 = (t148 & 1U);
    if (t149 != 0)
        goto LAB40;

LAB41:    if (*((unsigned int *)t144) != 0)
        goto LAB42;

LAB43:    t151 = (t143 + 4);
    t152 = *((unsigned int *)t143);
    t153 = *((unsigned int *)t151);
    t154 = (t152 || t153);
    if (t154 > 0)
        goto LAB44;

LAB45:    memcpy(t169, t143, 8);

LAB46:    t201 = (t0 + 16728);
    t202 = (t201 + 56U);
    t203 = *((char **)t202);
    t204 = (t203 + 56U);
    t205 = *((char **)t204);
    memset(t205, 0, 8);
    t206 = 1U;
    t207 = t206;
    t208 = (t169 + 4);
    t209 = *((unsigned int *)t169);
    t206 = (t206 & t209);
    t210 = *((unsigned int *)t208);
    t207 = (t207 & t210);
    t211 = (t205 + 4);
    t212 = *((unsigned int *)t205);
    *((unsigned int *)t205) = (t212 | t206);
    t213 = *((unsigned int *)t211);
    *((unsigned int *)t211) = (t213 | t207);
    xsi_driver_vfirst_trans(t201, 0, 0U);
    t214 = (t0 + 15224);
    *((int *)t214) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t4) = 1;
    goto LAB7;

LAB6:    t10 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t10) = 1;
    goto LAB7;

LAB8:    t15 = (t0 + 2008U);
    t16 = *((char **)t15);
    t15 = ((char*)((ng4)));
    memset(t17, 0, 8);
    t18 = (t16 + 4);
    t19 = (t15 + 4);
    t20 = *((unsigned int *)t16);
    t21 = *((unsigned int *)t15);
    t22 = (t20 ^ t21);
    t23 = *((unsigned int *)t18);
    t24 = *((unsigned int *)t19);
    t25 = (t23 ^ t24);
    t26 = (t22 | t25);
    t27 = *((unsigned int *)t18);
    t28 = *((unsigned int *)t19);
    t29 = (t27 | t28);
    t30 = (~(t29));
    t31 = (t26 & t30);
    if (t31 != 0)
        goto LAB12;

LAB11:    if (t29 != 0)
        goto LAB13;

LAB14:    memset(t33, 0, 8);
    t34 = (t17 + 4);
    t35 = *((unsigned int *)t34);
    t36 = (~(t35));
    t37 = *((unsigned int *)t17);
    t38 = (t37 & t36);
    t39 = (t38 & 1U);
    if (t39 != 0)
        goto LAB15;

LAB16:    if (*((unsigned int *)t34) != 0)
        goto LAB17;

LAB18:    t42 = *((unsigned int *)t4);
    t43 = *((unsigned int *)t33);
    t44 = (t42 & t43);
    *((unsigned int *)t41) = t44;
    t45 = (t4 + 4);
    t46 = (t33 + 4);
    t47 = (t41 + 4);
    t48 = *((unsigned int *)t45);
    t49 = *((unsigned int *)t46);
    t50 = (t48 | t49);
    *((unsigned int *)t47) = t50;
    t51 = *((unsigned int *)t47);
    t52 = (t51 != 0);
    if (t52 == 1)
        goto LAB19;

LAB20:
LAB21:    goto LAB10;

LAB12:    *((unsigned int *)t17) = 1;
    goto LAB14;

LAB13:    t32 = (t17 + 4);
    *((unsigned int *)t17) = 1;
    *((unsigned int *)t32) = 1;
    goto LAB14;

LAB15:    *((unsigned int *)t33) = 1;
    goto LAB18;

LAB17:    t40 = (t33 + 4);
    *((unsigned int *)t33) = 1;
    *((unsigned int *)t40) = 1;
    goto LAB18;

LAB19:    t53 = *((unsigned int *)t41);
    t54 = *((unsigned int *)t47);
    *((unsigned int *)t41) = (t53 | t54);
    t55 = (t4 + 4);
    t56 = (t33 + 4);
    t57 = *((unsigned int *)t4);
    t58 = (~(t57));
    t59 = *((unsigned int *)t55);
    t60 = (~(t59));
    t61 = *((unsigned int *)t33);
    t62 = (~(t61));
    t63 = *((unsigned int *)t56);
    t64 = (~(t63));
    t65 = (t58 & t60);
    t66 = (t62 & t64);
    t67 = (~(t65));
    t68 = (~(t66));
    t69 = *((unsigned int *)t47);
    *((unsigned int *)t47) = (t69 & t67);
    t70 = *((unsigned int *)t47);
    *((unsigned int *)t47) = (t70 & t68);
    t71 = *((unsigned int *)t41);
    *((unsigned int *)t41) = (t71 & t67);
    t72 = *((unsigned int *)t41);
    *((unsigned int *)t41) = (t72 & t68);
    goto LAB21;

LAB22:    *((unsigned int *)t73) = 1;
    goto LAB25;

LAB24:    t80 = (t73 + 4);
    *((unsigned int *)t73) = 1;
    *((unsigned int *)t80) = 1;
    goto LAB25;

LAB26:    t85 = (t0 + 1528U);
    t86 = *((char **)t85);
    t85 = (t0 + 2008U);
    t87 = *((char **)t85);
    memset(t88, 0, 8);
    t85 = (t86 + 4);
    t89 = (t87 + 4);
    t90 = *((unsigned int *)t86);
    t91 = *((unsigned int *)t87);
    t92 = (t90 ^ t91);
    t93 = *((unsigned int *)t85);
    t94 = *((unsigned int *)t89);
    t95 = (t93 ^ t94);
    t96 = (t92 | t95);
    t97 = *((unsigned int *)t85);
    t98 = *((unsigned int *)t89);
    t99 = (t97 | t98);
    t100 = (~(t99));
    t101 = (t96 & t100);
    if (t101 != 0)
        goto LAB32;

LAB29:    if (t99 != 0)
        goto LAB31;

LAB30:    *((unsigned int *)t88) = 1;

LAB32:    memset(t103, 0, 8);
    t104 = (t88 + 4);
    t105 = *((unsigned int *)t104);
    t106 = (~(t105));
    t107 = *((unsigned int *)t88);
    t108 = (t107 & t106);
    t109 = (t108 & 1U);
    if (t109 != 0)
        goto LAB33;

LAB34:    if (*((unsigned int *)t104) != 0)
        goto LAB35;

LAB36:    t112 = *((unsigned int *)t73);
    t113 = *((unsigned int *)t103);
    t114 = (t112 & t113);
    *((unsigned int *)t111) = t114;
    t115 = (t73 + 4);
    t116 = (t103 + 4);
    t117 = (t111 + 4);
    t118 = *((unsigned int *)t115);
    t119 = *((unsigned int *)t116);
    t120 = (t118 | t119);
    *((unsigned int *)t117) = t120;
    t121 = *((unsigned int *)t117);
    t122 = (t121 != 0);
    if (t122 == 1)
        goto LAB37;

LAB38:
LAB39:    goto LAB28;

LAB31:    t102 = (t88 + 4);
    *((unsigned int *)t88) = 1;
    *((unsigned int *)t102) = 1;
    goto LAB32;

LAB33:    *((unsigned int *)t103) = 1;
    goto LAB36;

LAB35:    t110 = (t103 + 4);
    *((unsigned int *)t103) = 1;
    *((unsigned int *)t110) = 1;
    goto LAB36;

LAB37:    t123 = *((unsigned int *)t111);
    t124 = *((unsigned int *)t117);
    *((unsigned int *)t111) = (t123 | t124);
    t125 = (t73 + 4);
    t126 = (t103 + 4);
    t127 = *((unsigned int *)t73);
    t128 = (~(t127));
    t129 = *((unsigned int *)t125);
    t130 = (~(t129));
    t131 = *((unsigned int *)t103);
    t132 = (~(t131));
    t133 = *((unsigned int *)t126);
    t134 = (~(t133));
    t135 = (t128 & t130);
    t136 = (t132 & t134);
    t137 = (~(t135));
    t138 = (~(t136));
    t139 = *((unsigned int *)t117);
    *((unsigned int *)t117) = (t139 & t137);
    t140 = *((unsigned int *)t117);
    *((unsigned int *)t117) = (t140 & t138);
    t141 = *((unsigned int *)t111);
    *((unsigned int *)t111) = (t141 & t137);
    t142 = *((unsigned int *)t111);
    *((unsigned int *)t111) = (t142 & t138);
    goto LAB39;

LAB40:    *((unsigned int *)t143) = 1;
    goto LAB43;

LAB42:    t150 = (t143 + 4);
    *((unsigned int *)t143) = 1;
    *((unsigned int *)t150) = 1;
    goto LAB43;

LAB44:    t155 = (t0 + 2168U);
    t156 = *((char **)t155);
    t155 = (t0 + 6008U);
    t157 = *((char **)t155);
    memset(t158, 0, 8);
    t155 = (t156 + 4);
    if (*((unsigned int *)t155) != 0)
        goto LAB48;

LAB47:    t159 = (t157 + 4);
    if (*((unsigned int *)t159) != 0)
        goto LAB48;

LAB51:    if (*((unsigned int *)t156) > *((unsigned int *)t157))
        goto LAB49;

LAB50:    memset(t161, 0, 8);
    t162 = (t158 + 4);
    t163 = *((unsigned int *)t162);
    t164 = (~(t163));
    t165 = *((unsigned int *)t158);
    t166 = (t165 & t164);
    t167 = (t166 & 1U);
    if (t167 != 0)
        goto LAB52;

LAB53:    if (*((unsigned int *)t162) != 0)
        goto LAB54;

LAB55:    t170 = *((unsigned int *)t143);
    t171 = *((unsigned int *)t161);
    t172 = (t170 & t171);
    *((unsigned int *)t169) = t172;
    t173 = (t143 + 4);
    t174 = (t161 + 4);
    t175 = (t169 + 4);
    t176 = *((unsigned int *)t173);
    t177 = *((unsigned int *)t174);
    t178 = (t176 | t177);
    *((unsigned int *)t175) = t178;
    t179 = *((unsigned int *)t175);
    t180 = (t179 != 0);
    if (t180 == 1)
        goto LAB56;

LAB57:
LAB58:    goto LAB46;

LAB48:    t160 = (t158 + 4);
    *((unsigned int *)t158) = 1;
    *((unsigned int *)t160) = 1;
    goto LAB50;

LAB49:    *((unsigned int *)t158) = 1;
    goto LAB50;

LAB52:    *((unsigned int *)t161) = 1;
    goto LAB55;

LAB54:    t168 = (t161 + 4);
    *((unsigned int *)t161) = 1;
    *((unsigned int *)t168) = 1;
    goto LAB55;

LAB56:    t181 = *((unsigned int *)t169);
    t182 = *((unsigned int *)t175);
    *((unsigned int *)t169) = (t181 | t182);
    t183 = (t143 + 4);
    t184 = (t161 + 4);
    t185 = *((unsigned int *)t143);
    t186 = (~(t185));
    t187 = *((unsigned int *)t183);
    t188 = (~(t187));
    t189 = *((unsigned int *)t161);
    t190 = (~(t189));
    t191 = *((unsigned int *)t184);
    t192 = (~(t191));
    t193 = (t186 & t188);
    t194 = (t190 & t192);
    t195 = (~(t193));
    t196 = (~(t194));
    t197 = *((unsigned int *)t175);
    *((unsigned int *)t175) = (t197 & t195);
    t198 = *((unsigned int *)t175);
    *((unsigned int *)t175) = (t198 & t196);
    t199 = *((unsigned int *)t169);
    *((unsigned int *)t169) = (t199 & t195);
    t200 = *((unsigned int *)t169);
    *((unsigned int *)t169) = (t200 & t196);
    goto LAB58;

}

static void NetDecl_68_22(char *t0)
{
    char t4[8];
    char t17[8];
    char t33[8];
    char t41[8];
    char t73[8];
    char t88[8];
    char t103[8];
    char t111[8];
    char t143[8];
    char t158[8];
    char t161[8];
    char t169[8];
    char *t1;
    char *t2;
    char *t3;
    unsigned int t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    char *t10;
    char *t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    char *t16;
    char *t18;
    char *t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    char *t32;
    char *t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    char *t40;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    char *t45;
    char *t46;
    char *t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    char *t55;
    char *t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    int t65;
    int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    char *t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    char *t80;
    char *t81;
    unsigned int t82;
    unsigned int t83;
    unsigned int t84;
    char *t85;
    char *t86;
    char *t87;
    char *t89;
    unsigned int t90;
    unsigned int t91;
    unsigned int t92;
    unsigned int t93;
    unsigned int t94;
    unsigned int t95;
    unsigned int t96;
    unsigned int t97;
    unsigned int t98;
    unsigned int t99;
    unsigned int t100;
    unsigned int t101;
    char *t102;
    char *t104;
    unsigned int t105;
    unsigned int t106;
    unsigned int t107;
    unsigned int t108;
    unsigned int t109;
    char *t110;
    unsigned int t112;
    unsigned int t113;
    unsigned int t114;
    char *t115;
    char *t116;
    char *t117;
    unsigned int t118;
    unsigned int t119;
    unsigned int t120;
    unsigned int t121;
    unsigned int t122;
    unsigned int t123;
    unsigned int t124;
    char *t125;
    char *t126;
    unsigned int t127;
    unsigned int t128;
    unsigned int t129;
    unsigned int t130;
    unsigned int t131;
    unsigned int t132;
    unsigned int t133;
    unsigned int t134;
    int t135;
    int t136;
    unsigned int t137;
    unsigned int t138;
    unsigned int t139;
    unsigned int t140;
    unsigned int t141;
    unsigned int t142;
    char *t144;
    unsigned int t145;
    unsigned int t146;
    unsigned int t147;
    unsigned int t148;
    unsigned int t149;
    char *t150;
    char *t151;
    unsigned int t152;
    unsigned int t153;
    unsigned int t154;
    char *t155;
    char *t156;
    char *t157;
    char *t159;
    char *t160;
    char *t162;
    unsigned int t163;
    unsigned int t164;
    unsigned int t165;
    unsigned int t166;
    unsigned int t167;
    char *t168;
    unsigned int t170;
    unsigned int t171;
    unsigned int t172;
    char *t173;
    char *t174;
    char *t175;
    unsigned int t176;
    unsigned int t177;
    unsigned int t178;
    unsigned int t179;
    unsigned int t180;
    unsigned int t181;
    unsigned int t182;
    char *t183;
    char *t184;
    unsigned int t185;
    unsigned int t186;
    unsigned int t187;
    unsigned int t188;
    unsigned int t189;
    unsigned int t190;
    unsigned int t191;
    unsigned int t192;
    int t193;
    int t194;
    unsigned int t195;
    unsigned int t196;
    unsigned int t197;
    unsigned int t198;
    unsigned int t199;
    unsigned int t200;
    char *t201;
    char *t202;
    char *t203;
    char *t204;
    char *t205;
    unsigned int t206;
    unsigned int t207;
    char *t208;
    unsigned int t209;
    unsigned int t210;
    char *t211;
    unsigned int t212;
    unsigned int t213;
    char *t214;

LAB0:    t1 = (t0 + 13576U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(68, ng0);
    t2 = (t0 + 2328U);
    t3 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t3 + 4);
    t5 = *((unsigned int *)t2);
    t6 = (~(t5));
    t7 = *((unsigned int *)t3);
    t8 = (t7 & t6);
    t9 = (t8 & 1U);
    if (t9 != 0)
        goto LAB4;

LAB5:    if (*((unsigned int *)t2) != 0)
        goto LAB6;

LAB7:    t11 = (t4 + 4);
    t12 = *((unsigned int *)t4);
    t13 = *((unsigned int *)t11);
    t14 = (t12 || t13);
    if (t14 > 0)
        goto LAB8;

LAB9:    memcpy(t41, t4, 8);

LAB10:    memset(t73, 0, 8);
    t74 = (t41 + 4);
    t75 = *((unsigned int *)t74);
    t76 = (~(t75));
    t77 = *((unsigned int *)t41);
    t78 = (t77 & t76);
    t79 = (t78 & 1U);
    if (t79 != 0)
        goto LAB22;

LAB23:    if (*((unsigned int *)t74) != 0)
        goto LAB24;

LAB25:    t81 = (t73 + 4);
    t82 = *((unsigned int *)t73);
    t83 = *((unsigned int *)t81);
    t84 = (t82 || t83);
    if (t84 > 0)
        goto LAB26;

LAB27:    memcpy(t111, t73, 8);

LAB28:    memset(t143, 0, 8);
    t144 = (t111 + 4);
    t145 = *((unsigned int *)t144);
    t146 = (~(t145));
    t147 = *((unsigned int *)t111);
    t148 = (t147 & t146);
    t149 = (t148 & 1U);
    if (t149 != 0)
        goto LAB40;

LAB41:    if (*((unsigned int *)t144) != 0)
        goto LAB42;

LAB43:    t151 = (t143 + 4);
    t152 = *((unsigned int *)t143);
    t153 = *((unsigned int *)t151);
    t154 = (t152 || t153);
    if (t154 > 0)
        goto LAB44;

LAB45:    memcpy(t169, t143, 8);

LAB46:    t201 = (t0 + 16792);
    t202 = (t201 + 56U);
    t203 = *((char **)t202);
    t204 = (t203 + 56U);
    t205 = *((char **)t204);
    memset(t205, 0, 8);
    t206 = 1U;
    t207 = t206;
    t208 = (t169 + 4);
    t209 = *((unsigned int *)t169);
    t206 = (t206 & t209);
    t210 = *((unsigned int *)t208);
    t207 = (t207 & t210);
    t211 = (t205 + 4);
    t212 = *((unsigned int *)t205);
    *((unsigned int *)t205) = (t212 | t206);
    t213 = *((unsigned int *)t211);
    *((unsigned int *)t211) = (t213 | t207);
    xsi_driver_vfirst_trans(t201, 0, 0U);
    t214 = (t0 + 15240);
    *((int *)t214) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t4) = 1;
    goto LAB7;

LAB6:    t10 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t10) = 1;
    goto LAB7;

LAB8:    t15 = (t0 + 2488U);
    t16 = *((char **)t15);
    t15 = ((char*)((ng4)));
    memset(t17, 0, 8);
    t18 = (t16 + 4);
    t19 = (t15 + 4);
    t20 = *((unsigned int *)t16);
    t21 = *((unsigned int *)t15);
    t22 = (t20 ^ t21);
    t23 = *((unsigned int *)t18);
    t24 = *((unsigned int *)t19);
    t25 = (t23 ^ t24);
    t26 = (t22 | t25);
    t27 = *((unsigned int *)t18);
    t28 = *((unsigned int *)t19);
    t29 = (t27 | t28);
    t30 = (~(t29));
    t31 = (t26 & t30);
    if (t31 != 0)
        goto LAB12;

LAB11:    if (t29 != 0)
        goto LAB13;

LAB14:    memset(t33, 0, 8);
    t34 = (t17 + 4);
    t35 = *((unsigned int *)t34);
    t36 = (~(t35));
    t37 = *((unsigned int *)t17);
    t38 = (t37 & t36);
    t39 = (t38 & 1U);
    if (t39 != 0)
        goto LAB15;

LAB16:    if (*((unsigned int *)t34) != 0)
        goto LAB17;

LAB18:    t42 = *((unsigned int *)t4);
    t43 = *((unsigned int *)t33);
    t44 = (t42 & t43);
    *((unsigned int *)t41) = t44;
    t45 = (t4 + 4);
    t46 = (t33 + 4);
    t47 = (t41 + 4);
    t48 = *((unsigned int *)t45);
    t49 = *((unsigned int *)t46);
    t50 = (t48 | t49);
    *((unsigned int *)t47) = t50;
    t51 = *((unsigned int *)t47);
    t52 = (t51 != 0);
    if (t52 == 1)
        goto LAB19;

LAB20:
LAB21:    goto LAB10;

LAB12:    *((unsigned int *)t17) = 1;
    goto LAB14;

LAB13:    t32 = (t17 + 4);
    *((unsigned int *)t17) = 1;
    *((unsigned int *)t32) = 1;
    goto LAB14;

LAB15:    *((unsigned int *)t33) = 1;
    goto LAB18;

LAB17:    t40 = (t33 + 4);
    *((unsigned int *)t33) = 1;
    *((unsigned int *)t40) = 1;
    goto LAB18;

LAB19:    t53 = *((unsigned int *)t41);
    t54 = *((unsigned int *)t47);
    *((unsigned int *)t41) = (t53 | t54);
    t55 = (t4 + 4);
    t56 = (t33 + 4);
    t57 = *((unsigned int *)t4);
    t58 = (~(t57));
    t59 = *((unsigned int *)t55);
    t60 = (~(t59));
    t61 = *((unsigned int *)t33);
    t62 = (~(t61));
    t63 = *((unsigned int *)t56);
    t64 = (~(t63));
    t65 = (t58 & t60);
    t66 = (t62 & t64);
    t67 = (~(t65));
    t68 = (~(t66));
    t69 = *((unsigned int *)t47);
    *((unsigned int *)t47) = (t69 & t67);
    t70 = *((unsigned int *)t47);
    *((unsigned int *)t47) = (t70 & t68);
    t71 = *((unsigned int *)t41);
    *((unsigned int *)t41) = (t71 & t67);
    t72 = *((unsigned int *)t41);
    *((unsigned int *)t41) = (t72 & t68);
    goto LAB21;

LAB22:    *((unsigned int *)t73) = 1;
    goto LAB25;

LAB24:    t80 = (t73 + 4);
    *((unsigned int *)t73) = 1;
    *((unsigned int *)t80) = 1;
    goto LAB25;

LAB26:    t85 = (t0 + 1368U);
    t86 = *((char **)t85);
    t85 = (t0 + 2488U);
    t87 = *((char **)t85);
    memset(t88, 0, 8);
    t85 = (t86 + 4);
    t89 = (t87 + 4);
    t90 = *((unsigned int *)t86);
    t91 = *((unsigned int *)t87);
    t92 = (t90 ^ t91);
    t93 = *((unsigned int *)t85);
    t94 = *((unsigned int *)t89);
    t95 = (t93 ^ t94);
    t96 = (t92 | t95);
    t97 = *((unsigned int *)t85);
    t98 = *((unsigned int *)t89);
    t99 = (t97 | t98);
    t100 = (~(t99));
    t101 = (t96 & t100);
    if (t101 != 0)
        goto LAB32;

LAB29:    if (t99 != 0)
        goto LAB31;

LAB30:    *((unsigned int *)t88) = 1;

LAB32:    memset(t103, 0, 8);
    t104 = (t88 + 4);
    t105 = *((unsigned int *)t104);
    t106 = (~(t105));
    t107 = *((unsigned int *)t88);
    t108 = (t107 & t106);
    t109 = (t108 & 1U);
    if (t109 != 0)
        goto LAB33;

LAB34:    if (*((unsigned int *)t104) != 0)
        goto LAB35;

LAB36:    t112 = *((unsigned int *)t73);
    t113 = *((unsigned int *)t103);
    t114 = (t112 & t113);
    *((unsigned int *)t111) = t114;
    t115 = (t73 + 4);
    t116 = (t103 + 4);
    t117 = (t111 + 4);
    t118 = *((unsigned int *)t115);
    t119 = *((unsigned int *)t116);
    t120 = (t118 | t119);
    *((unsigned int *)t117) = t120;
    t121 = *((unsigned int *)t117);
    t122 = (t121 != 0);
    if (t122 == 1)
        goto LAB37;

LAB38:
LAB39:    goto LAB28;

LAB31:    t102 = (t88 + 4);
    *((unsigned int *)t88) = 1;
    *((unsigned int *)t102) = 1;
    goto LAB32;

LAB33:    *((unsigned int *)t103) = 1;
    goto LAB36;

LAB35:    t110 = (t103 + 4);
    *((unsigned int *)t103) = 1;
    *((unsigned int *)t110) = 1;
    goto LAB36;

LAB37:    t123 = *((unsigned int *)t111);
    t124 = *((unsigned int *)t117);
    *((unsigned int *)t111) = (t123 | t124);
    t125 = (t73 + 4);
    t126 = (t103 + 4);
    t127 = *((unsigned int *)t73);
    t128 = (~(t127));
    t129 = *((unsigned int *)t125);
    t130 = (~(t129));
    t131 = *((unsigned int *)t103);
    t132 = (~(t131));
    t133 = *((unsigned int *)t126);
    t134 = (~(t133));
    t135 = (t128 & t130);
    t136 = (t132 & t134);
    t137 = (~(t135));
    t138 = (~(t136));
    t139 = *((unsigned int *)t117);
    *((unsigned int *)t117) = (t139 & t137);
    t140 = *((unsigned int *)t117);
    *((unsigned int *)t117) = (t140 & t138);
    t141 = *((unsigned int *)t111);
    *((unsigned int *)t111) = (t141 & t137);
    t142 = *((unsigned int *)t111);
    *((unsigned int *)t111) = (t142 & t138);
    goto LAB39;

LAB40:    *((unsigned int *)t143) = 1;
    goto LAB43;

LAB42:    t150 = (t143 + 4);
    *((unsigned int *)t143) = 1;
    *((unsigned int *)t150) = 1;
    goto LAB43;

LAB44:    t155 = (t0 + 2648U);
    t156 = *((char **)t155);
    t155 = (t0 + 6008U);
    t157 = *((char **)t155);
    memset(t158, 0, 8);
    t155 = (t156 + 4);
    if (*((unsigned int *)t155) != 0)
        goto LAB48;

LAB47:    t159 = (t157 + 4);
    if (*((unsigned int *)t159) != 0)
        goto LAB48;

LAB51:    if (*((unsigned int *)t156) > *((unsigned int *)t157))
        goto LAB49;

LAB50:    memset(t161, 0, 8);
    t162 = (t158 + 4);
    t163 = *((unsigned int *)t162);
    t164 = (~(t163));
    t165 = *((unsigned int *)t158);
    t166 = (t165 & t164);
    t167 = (t166 & 1U);
    if (t167 != 0)
        goto LAB52;

LAB53:    if (*((unsigned int *)t162) != 0)
        goto LAB54;

LAB55:    t170 = *((unsigned int *)t143);
    t171 = *((unsigned int *)t161);
    t172 = (t170 & t171);
    *((unsigned int *)t169) = t172;
    t173 = (t143 + 4);
    t174 = (t161 + 4);
    t175 = (t169 + 4);
    t176 = *((unsigned int *)t173);
    t177 = *((unsigned int *)t174);
    t178 = (t176 | t177);
    *((unsigned int *)t175) = t178;
    t179 = *((unsigned int *)t175);
    t180 = (t179 != 0);
    if (t180 == 1)
        goto LAB56;

LAB57:
LAB58:    goto LAB46;

LAB48:    t160 = (t158 + 4);
    *((unsigned int *)t158) = 1;
    *((unsigned int *)t160) = 1;
    goto LAB50;

LAB49:    *((unsigned int *)t158) = 1;
    goto LAB50;

LAB52:    *((unsigned int *)t161) = 1;
    goto LAB55;

LAB54:    t168 = (t161 + 4);
    *((unsigned int *)t161) = 1;
    *((unsigned int *)t168) = 1;
    goto LAB55;

LAB56:    t181 = *((unsigned int *)t169);
    t182 = *((unsigned int *)t175);
    *((unsigned int *)t169) = (t181 | t182);
    t183 = (t143 + 4);
    t184 = (t161 + 4);
    t185 = *((unsigned int *)t143);
    t186 = (~(t185));
    t187 = *((unsigned int *)t183);
    t188 = (~(t187));
    t189 = *((unsigned int *)t161);
    t190 = (~(t189));
    t191 = *((unsigned int *)t184);
    t192 = (~(t191));
    t193 = (t186 & t188);
    t194 = (t190 & t192);
    t195 = (~(t193));
    t196 = (~(t194));
    t197 = *((unsigned int *)t175);
    *((unsigned int *)t175) = (t197 & t195);
    t198 = *((unsigned int *)t175);
    *((unsigned int *)t175) = (t198 & t196);
    t199 = *((unsigned int *)t169);
    *((unsigned int *)t169) = (t199 & t195);
    t200 = *((unsigned int *)t169);
    *((unsigned int *)t169) = (t200 & t196);
    goto LAB58;

}

static void NetDecl_72_23(char *t0)
{
    char t4[8];
    char t17[8];
    char t33[8];
    char t41[8];
    char t73[8];
    char t88[8];
    char t103[8];
    char t111[8];
    char t143[8];
    char t158[8];
    char t161[8];
    char t169[8];
    char *t1;
    char *t2;
    char *t3;
    unsigned int t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    char *t10;
    char *t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    char *t16;
    char *t18;
    char *t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    char *t32;
    char *t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    char *t40;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    char *t45;
    char *t46;
    char *t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    char *t55;
    char *t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    int t65;
    int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    char *t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    char *t80;
    char *t81;
    unsigned int t82;
    unsigned int t83;
    unsigned int t84;
    char *t85;
    char *t86;
    char *t87;
    char *t89;
    unsigned int t90;
    unsigned int t91;
    unsigned int t92;
    unsigned int t93;
    unsigned int t94;
    unsigned int t95;
    unsigned int t96;
    unsigned int t97;
    unsigned int t98;
    unsigned int t99;
    unsigned int t100;
    unsigned int t101;
    char *t102;
    char *t104;
    unsigned int t105;
    unsigned int t106;
    unsigned int t107;
    unsigned int t108;
    unsigned int t109;
    char *t110;
    unsigned int t112;
    unsigned int t113;
    unsigned int t114;
    char *t115;
    char *t116;
    char *t117;
    unsigned int t118;
    unsigned int t119;
    unsigned int t120;
    unsigned int t121;
    unsigned int t122;
    unsigned int t123;
    unsigned int t124;
    char *t125;
    char *t126;
    unsigned int t127;
    unsigned int t128;
    unsigned int t129;
    unsigned int t130;
    unsigned int t131;
    unsigned int t132;
    unsigned int t133;
    unsigned int t134;
    int t135;
    int t136;
    unsigned int t137;
    unsigned int t138;
    unsigned int t139;
    unsigned int t140;
    unsigned int t141;
    unsigned int t142;
    char *t144;
    unsigned int t145;
    unsigned int t146;
    unsigned int t147;
    unsigned int t148;
    unsigned int t149;
    char *t150;
    char *t151;
    unsigned int t152;
    unsigned int t153;
    unsigned int t154;
    char *t155;
    char *t156;
    char *t157;
    char *t159;
    char *t160;
    char *t162;
    unsigned int t163;
    unsigned int t164;
    unsigned int t165;
    unsigned int t166;
    unsigned int t167;
    char *t168;
    unsigned int t170;
    unsigned int t171;
    unsigned int t172;
    char *t173;
    char *t174;
    char *t175;
    unsigned int t176;
    unsigned int t177;
    unsigned int t178;
    unsigned int t179;
    unsigned int t180;
    unsigned int t181;
    unsigned int t182;
    char *t183;
    char *t184;
    unsigned int t185;
    unsigned int t186;
    unsigned int t187;
    unsigned int t188;
    unsigned int t189;
    unsigned int t190;
    unsigned int t191;
    unsigned int t192;
    int t193;
    int t194;
    unsigned int t195;
    unsigned int t196;
    unsigned int t197;
    unsigned int t198;
    unsigned int t199;
    unsigned int t200;
    char *t201;
    char *t202;
    char *t203;
    char *t204;
    char *t205;
    unsigned int t206;
    unsigned int t207;
    char *t208;
    unsigned int t209;
    unsigned int t210;
    char *t211;
    unsigned int t212;
    unsigned int t213;
    char *t214;

LAB0:    t1 = (t0 + 13824U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(72, ng0);
    t2 = (t0 + 2328U);
    t3 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t3 + 4);
    t5 = *((unsigned int *)t2);
    t6 = (~(t5));
    t7 = *((unsigned int *)t3);
    t8 = (t7 & t6);
    t9 = (t8 & 1U);
    if (t9 != 0)
        goto LAB4;

LAB5:    if (*((unsigned int *)t2) != 0)
        goto LAB6;

LAB7:    t11 = (t4 + 4);
    t12 = *((unsigned int *)t4);
    t13 = *((unsigned int *)t11);
    t14 = (t12 || t13);
    if (t14 > 0)
        goto LAB8;

LAB9:    memcpy(t41, t4, 8);

LAB10:    memset(t73, 0, 8);
    t74 = (t41 + 4);
    t75 = *((unsigned int *)t74);
    t76 = (~(t75));
    t77 = *((unsigned int *)t41);
    t78 = (t77 & t76);
    t79 = (t78 & 1U);
    if (t79 != 0)
        goto LAB22;

LAB23:    if (*((unsigned int *)t74) != 0)
        goto LAB24;

LAB25:    t81 = (t73 + 4);
    t82 = *((unsigned int *)t73);
    t83 = *((unsigned int *)t81);
    t84 = (t82 || t83);
    if (t84 > 0)
        goto LAB26;

LAB27:    memcpy(t111, t73, 8);

LAB28:    memset(t143, 0, 8);
    t144 = (t111 + 4);
    t145 = *((unsigned int *)t144);
    t146 = (~(t145));
    t147 = *((unsigned int *)t111);
    t148 = (t147 & t146);
    t149 = (t148 & 1U);
    if (t149 != 0)
        goto LAB40;

LAB41:    if (*((unsigned int *)t144) != 0)
        goto LAB42;

LAB43:    t151 = (t143 + 4);
    t152 = *((unsigned int *)t143);
    t153 = *((unsigned int *)t151);
    t154 = (t152 || t153);
    if (t154 > 0)
        goto LAB44;

LAB45:    memcpy(t169, t143, 8);

LAB46:    t201 = (t0 + 16856);
    t202 = (t201 + 56U);
    t203 = *((char **)t202);
    t204 = (t203 + 56U);
    t205 = *((char **)t204);
    memset(t205, 0, 8);
    t206 = 1U;
    t207 = t206;
    t208 = (t169 + 4);
    t209 = *((unsigned int *)t169);
    t206 = (t206 & t209);
    t210 = *((unsigned int *)t208);
    t207 = (t207 & t210);
    t211 = (t205 + 4);
    t212 = *((unsigned int *)t205);
    *((unsigned int *)t205) = (t212 | t206);
    t213 = *((unsigned int *)t211);
    *((unsigned int *)t211) = (t213 | t207);
    xsi_driver_vfirst_trans(t201, 0, 0U);
    t214 = (t0 + 15256);
    *((int *)t214) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t4) = 1;
    goto LAB7;

LAB6:    t10 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t10) = 1;
    goto LAB7;

LAB8:    t15 = (t0 + 2488U);
    t16 = *((char **)t15);
    t15 = ((char*)((ng4)));
    memset(t17, 0, 8);
    t18 = (t16 + 4);
    t19 = (t15 + 4);
    t20 = *((unsigned int *)t16);
    t21 = *((unsigned int *)t15);
    t22 = (t20 ^ t21);
    t23 = *((unsigned int *)t18);
    t24 = *((unsigned int *)t19);
    t25 = (t23 ^ t24);
    t26 = (t22 | t25);
    t27 = *((unsigned int *)t18);
    t28 = *((unsigned int *)t19);
    t29 = (t27 | t28);
    t30 = (~(t29));
    t31 = (t26 & t30);
    if (t31 != 0)
        goto LAB12;

LAB11:    if (t29 != 0)
        goto LAB13;

LAB14:    memset(t33, 0, 8);
    t34 = (t17 + 4);
    t35 = *((unsigned int *)t34);
    t36 = (~(t35));
    t37 = *((unsigned int *)t17);
    t38 = (t37 & t36);
    t39 = (t38 & 1U);
    if (t39 != 0)
        goto LAB15;

LAB16:    if (*((unsigned int *)t34) != 0)
        goto LAB17;

LAB18:    t42 = *((unsigned int *)t4);
    t43 = *((unsigned int *)t33);
    t44 = (t42 & t43);
    *((unsigned int *)t41) = t44;
    t45 = (t4 + 4);
    t46 = (t33 + 4);
    t47 = (t41 + 4);
    t48 = *((unsigned int *)t45);
    t49 = *((unsigned int *)t46);
    t50 = (t48 | t49);
    *((unsigned int *)t47) = t50;
    t51 = *((unsigned int *)t47);
    t52 = (t51 != 0);
    if (t52 == 1)
        goto LAB19;

LAB20:
LAB21:    goto LAB10;

LAB12:    *((unsigned int *)t17) = 1;
    goto LAB14;

LAB13:    t32 = (t17 + 4);
    *((unsigned int *)t17) = 1;
    *((unsigned int *)t32) = 1;
    goto LAB14;

LAB15:    *((unsigned int *)t33) = 1;
    goto LAB18;

LAB17:    t40 = (t33 + 4);
    *((unsigned int *)t33) = 1;
    *((unsigned int *)t40) = 1;
    goto LAB18;

LAB19:    t53 = *((unsigned int *)t41);
    t54 = *((unsigned int *)t47);
    *((unsigned int *)t41) = (t53 | t54);
    t55 = (t4 + 4);
    t56 = (t33 + 4);
    t57 = *((unsigned int *)t4);
    t58 = (~(t57));
    t59 = *((unsigned int *)t55);
    t60 = (~(t59));
    t61 = *((unsigned int *)t33);
    t62 = (~(t61));
    t63 = *((unsigned int *)t56);
    t64 = (~(t63));
    t65 = (t58 & t60);
    t66 = (t62 & t64);
    t67 = (~(t65));
    t68 = (~(t66));
    t69 = *((unsigned int *)t47);
    *((unsigned int *)t47) = (t69 & t67);
    t70 = *((unsigned int *)t47);
    *((unsigned int *)t47) = (t70 & t68);
    t71 = *((unsigned int *)t41);
    *((unsigned int *)t41) = (t71 & t67);
    t72 = *((unsigned int *)t41);
    *((unsigned int *)t41) = (t72 & t68);
    goto LAB21;

LAB22:    *((unsigned int *)t73) = 1;
    goto LAB25;

LAB24:    t80 = (t73 + 4);
    *((unsigned int *)t73) = 1;
    *((unsigned int *)t80) = 1;
    goto LAB25;

LAB26:    t85 = (t0 + 1528U);
    t86 = *((char **)t85);
    t85 = (t0 + 2488U);
    t87 = *((char **)t85);
    memset(t88, 0, 8);
    t85 = (t86 + 4);
    t89 = (t87 + 4);
    t90 = *((unsigned int *)t86);
    t91 = *((unsigned int *)t87);
    t92 = (t90 ^ t91);
    t93 = *((unsigned int *)t85);
    t94 = *((unsigned int *)t89);
    t95 = (t93 ^ t94);
    t96 = (t92 | t95);
    t97 = *((unsigned int *)t85);
    t98 = *((unsigned int *)t89);
    t99 = (t97 | t98);
    t100 = (~(t99));
    t101 = (t96 & t100);
    if (t101 != 0)
        goto LAB32;

LAB29:    if (t99 != 0)
        goto LAB31;

LAB30:    *((unsigned int *)t88) = 1;

LAB32:    memset(t103, 0, 8);
    t104 = (t88 + 4);
    t105 = *((unsigned int *)t104);
    t106 = (~(t105));
    t107 = *((unsigned int *)t88);
    t108 = (t107 & t106);
    t109 = (t108 & 1U);
    if (t109 != 0)
        goto LAB33;

LAB34:    if (*((unsigned int *)t104) != 0)
        goto LAB35;

LAB36:    t112 = *((unsigned int *)t73);
    t113 = *((unsigned int *)t103);
    t114 = (t112 & t113);
    *((unsigned int *)t111) = t114;
    t115 = (t73 + 4);
    t116 = (t103 + 4);
    t117 = (t111 + 4);
    t118 = *((unsigned int *)t115);
    t119 = *((unsigned int *)t116);
    t120 = (t118 | t119);
    *((unsigned int *)t117) = t120;
    t121 = *((unsigned int *)t117);
    t122 = (t121 != 0);
    if (t122 == 1)
        goto LAB37;

LAB38:
LAB39:    goto LAB28;

LAB31:    t102 = (t88 + 4);
    *((unsigned int *)t88) = 1;
    *((unsigned int *)t102) = 1;
    goto LAB32;

LAB33:    *((unsigned int *)t103) = 1;
    goto LAB36;

LAB35:    t110 = (t103 + 4);
    *((unsigned int *)t103) = 1;
    *((unsigned int *)t110) = 1;
    goto LAB36;

LAB37:    t123 = *((unsigned int *)t111);
    t124 = *((unsigned int *)t117);
    *((unsigned int *)t111) = (t123 | t124);
    t125 = (t73 + 4);
    t126 = (t103 + 4);
    t127 = *((unsigned int *)t73);
    t128 = (~(t127));
    t129 = *((unsigned int *)t125);
    t130 = (~(t129));
    t131 = *((unsigned int *)t103);
    t132 = (~(t131));
    t133 = *((unsigned int *)t126);
    t134 = (~(t133));
    t135 = (t128 & t130);
    t136 = (t132 & t134);
    t137 = (~(t135));
    t138 = (~(t136));
    t139 = *((unsigned int *)t117);
    *((unsigned int *)t117) = (t139 & t137);
    t140 = *((unsigned int *)t117);
    *((unsigned int *)t117) = (t140 & t138);
    t141 = *((unsigned int *)t111);
    *((unsigned int *)t111) = (t141 & t137);
    t142 = *((unsigned int *)t111);
    *((unsigned int *)t111) = (t142 & t138);
    goto LAB39;

LAB40:    *((unsigned int *)t143) = 1;
    goto LAB43;

LAB42:    t150 = (t143 + 4);
    *((unsigned int *)t143) = 1;
    *((unsigned int *)t150) = 1;
    goto LAB43;

LAB44:    t155 = (t0 + 2648U);
    t156 = *((char **)t155);
    t155 = (t0 + 6008U);
    t157 = *((char **)t155);
    memset(t158, 0, 8);
    t155 = (t156 + 4);
    if (*((unsigned int *)t155) != 0)
        goto LAB48;

LAB47:    t159 = (t157 + 4);
    if (*((unsigned int *)t159) != 0)
        goto LAB48;

LAB51:    if (*((unsigned int *)t156) > *((unsigned int *)t157))
        goto LAB49;

LAB50:    memset(t161, 0, 8);
    t162 = (t158 + 4);
    t163 = *((unsigned int *)t162);
    t164 = (~(t163));
    t165 = *((unsigned int *)t158);
    t166 = (t165 & t164);
    t167 = (t166 & 1U);
    if (t167 != 0)
        goto LAB52;

LAB53:    if (*((unsigned int *)t162) != 0)
        goto LAB54;

LAB55:    t170 = *((unsigned int *)t143);
    t171 = *((unsigned int *)t161);
    t172 = (t170 & t171);
    *((unsigned int *)t169) = t172;
    t173 = (t143 + 4);
    t174 = (t161 + 4);
    t175 = (t169 + 4);
    t176 = *((unsigned int *)t173);
    t177 = *((unsigned int *)t174);
    t178 = (t176 | t177);
    *((unsigned int *)t175) = t178;
    t179 = *((unsigned int *)t175);
    t180 = (t179 != 0);
    if (t180 == 1)
        goto LAB56;

LAB57:
LAB58:    goto LAB46;

LAB48:    t160 = (t158 + 4);
    *((unsigned int *)t158) = 1;
    *((unsigned int *)t160) = 1;
    goto LAB50;

LAB49:    *((unsigned int *)t158) = 1;
    goto LAB50;

LAB52:    *((unsigned int *)t161) = 1;
    goto LAB55;

LAB54:    t168 = (t161 + 4);
    *((unsigned int *)t161) = 1;
    *((unsigned int *)t168) = 1;
    goto LAB55;

LAB56:    t181 = *((unsigned int *)t169);
    t182 = *((unsigned int *)t175);
    *((unsigned int *)t169) = (t181 | t182);
    t183 = (t143 + 4);
    t184 = (t161 + 4);
    t185 = *((unsigned int *)t143);
    t186 = (~(t185));
    t187 = *((unsigned int *)t183);
    t188 = (~(t187));
    t189 = *((unsigned int *)t161);
    t190 = (~(t189));
    t191 = *((unsigned int *)t184);
    t192 = (~(t191));
    t193 = (t186 & t188);
    t194 = (t190 & t192);
    t195 = (~(t193));
    t196 = (~(t194));
    t197 = *((unsigned int *)t175);
    *((unsigned int *)t175) = (t197 & t195);
    t198 = *((unsigned int *)t175);
    *((unsigned int *)t175) = (t198 & t196);
    t199 = *((unsigned int *)t169);
    *((unsigned int *)t169) = (t199 & t195);
    t200 = *((unsigned int *)t169);
    *((unsigned int *)t169) = (t200 & t196);
    goto LAB58;

}

static void Cont_78_24(char *t0)
{
    char t5[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    char *t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;
    char *t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    char *t32;
    char *t33;
    char *t34;
    char *t35;
    char *t36;
    unsigned int t37;
    unsigned int t38;
    char *t39;
    unsigned int t40;
    unsigned int t41;
    char *t42;
    unsigned int t43;
    unsigned int t44;
    char *t45;

LAB0:    t1 = (t0 + 14072U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(78, ng0);
    t2 = (t0 + 6808U);
    t3 = *((char **)t2);
    t2 = (t0 + 6968U);
    t4 = *((char **)t2);
    t6 = *((unsigned int *)t3);
    t7 = *((unsigned int *)t4);
    t8 = (t6 | t7);
    *((unsigned int *)t5) = t8;
    t2 = (t3 + 4);
    t9 = (t4 + 4);
    t10 = (t5 + 4);
    t11 = *((unsigned int *)t2);
    t12 = *((unsigned int *)t9);
    t13 = (t11 | t12);
    *((unsigned int *)t10) = t13;
    t14 = *((unsigned int *)t10);
    t15 = (t14 != 0);
    if (t15 == 1)
        goto LAB4;

LAB5:
LAB6:    t32 = (t0 + 16920);
    t33 = (t32 + 56U);
    t34 = *((char **)t33);
    t35 = (t34 + 56U);
    t36 = *((char **)t35);
    memset(t36, 0, 8);
    t37 = 1U;
    t38 = t37;
    t39 = (t5 + 4);
    t40 = *((unsigned int *)t5);
    t37 = (t37 & t40);
    t41 = *((unsigned int *)t39);
    t38 = (t38 & t41);
    t42 = (t36 + 4);
    t43 = *((unsigned int *)t36);
    *((unsigned int *)t36) = (t43 | t37);
    t44 = *((unsigned int *)t42);
    *((unsigned int *)t42) = (t44 | t38);
    xsi_driver_vfirst_trans(t32, 0, 0);
    t45 = (t0 + 15272);
    *((int *)t45) = 1;

LAB1:    return;
LAB4:    t16 = *((unsigned int *)t5);
    t17 = *((unsigned int *)t10);
    *((unsigned int *)t5) = (t16 | t17);
    t18 = (t3 + 4);
    t19 = (t4 + 4);
    t20 = *((unsigned int *)t18);
    t21 = (~(t20));
    t22 = *((unsigned int *)t3);
    t23 = (t22 & t21);
    t24 = *((unsigned int *)t19);
    t25 = (~(t24));
    t26 = *((unsigned int *)t4);
    t27 = (t26 & t25);
    t28 = (~(t23));
    t29 = (~(t27));
    t30 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t30 & t28);
    t31 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t31 & t29);
    goto LAB6;

}

static void NetDecl_80_25(char *t0)
{
    char t3[8];
    char t4[8];
    char t19[8];
    char t50[8];
    char t51[8];
    char t67[8];
    char t96[8];
    char t125[8];
    char t156[8];
    char t157[8];
    char t160[8];
    char t163[8];
    char t207[8];
    char t253[8];
    char t284[8];
    char t285[8];
    char t289[8];
    char t318[8];
    char t347[8];
    char t387[8];
    char *t1;
    char *t2;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    char *t16;
    char *t17;
    char *t18;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    char *t23;
    char *t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    char *t32;
    char *t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    char *t52;
    char *t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    char *t59;
    char *t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    char *t64;
    char *t65;
    char *t66;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    char *t71;
    char *t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    char *t80;
    char *t81;
    unsigned int t82;
    unsigned int t83;
    unsigned int t84;
    int t85;
    unsigned int t86;
    unsigned int t87;
    unsigned int t88;
    int t89;
    unsigned int t90;
    unsigned int t91;
    unsigned int t92;
    unsigned int t93;
    char *t94;
    char *t95;
    unsigned int t97;
    unsigned int t98;
    unsigned int t99;
    char *t100;
    char *t101;
    unsigned int t102;
    unsigned int t103;
    unsigned int t104;
    unsigned int t105;
    unsigned int t106;
    unsigned int t107;
    unsigned int t108;
    char *t109;
    char *t110;
    unsigned int t111;
    unsigned int t112;
    unsigned int t113;
    int t114;
    unsigned int t115;
    unsigned int t116;
    unsigned int t117;
    int t118;
    unsigned int t119;
    unsigned int t120;
    unsigned int t121;
    unsigned int t122;
    char *t123;
    char *t124;
    unsigned int t126;
    unsigned int t127;
    unsigned int t128;
    char *t129;
    char *t130;
    unsigned int t131;
    unsigned int t132;
    unsigned int t133;
    unsigned int t134;
    unsigned int t135;
    unsigned int t136;
    unsigned int t137;
    char *t138;
    char *t139;
    unsigned int t140;
    unsigned int t141;
    unsigned int t142;
    int t143;
    unsigned int t144;
    unsigned int t145;
    unsigned int t146;
    int t147;
    unsigned int t148;
    unsigned int t149;
    unsigned int t150;
    unsigned int t151;
    unsigned int t152;
    unsigned int t153;
    unsigned int t154;
    unsigned int t155;
    char *t158;
    char *t159;
    char *t161;
    char *t162;
    unsigned int t164;
    unsigned int t165;
    unsigned int t166;
    char *t167;
    char *t168;
    unsigned int t169;
    unsigned int t170;
    unsigned int t171;
    unsigned int t172;
    unsigned int t173;
    unsigned int t174;
    unsigned int t175;
    char *t176;
    char *t177;
    unsigned int t178;
    unsigned int t179;
    unsigned int t180;
    int t181;
    unsigned int t182;
    unsigned int t183;
    unsigned int t184;
    int t185;
    unsigned int t186;
    unsigned int t187;
    unsigned int t188;
    unsigned int t189;
    char *t190;
    unsigned int t191;
    unsigned int t192;
    unsigned int t193;
    unsigned int t194;
    unsigned int t195;
    char *t196;
    char *t197;
    char *t198;
    unsigned int t199;
    unsigned int t200;
    unsigned int t201;
    unsigned int t202;
    unsigned int t203;
    unsigned int t204;
    unsigned int t205;
    unsigned int t206;
    unsigned int t208;
    unsigned int t209;
    unsigned int t210;
    char *t211;
    char *t212;
    char *t213;
    unsigned int t214;
    unsigned int t215;
    unsigned int t216;
    unsigned int t217;
    unsigned int t218;
    unsigned int t219;
    unsigned int t220;
    char *t221;
    char *t222;
    unsigned int t223;
    unsigned int t224;
    unsigned int t225;
    unsigned int t226;
    unsigned int t227;
    unsigned int t228;
    unsigned int t229;
    unsigned int t230;
    int t231;
    int t232;
    unsigned int t233;
    unsigned int t234;
    unsigned int t235;
    unsigned int t236;
    unsigned int t237;
    unsigned int t238;
    char *t239;
    unsigned int t240;
    unsigned int t241;
    unsigned int t242;
    unsigned int t243;
    unsigned int t244;
    char *t245;
    char *t246;
    unsigned int t247;
    unsigned int t248;
    unsigned int t249;
    char *t250;
    char *t251;
    char *t252;
    unsigned int t254;
    unsigned int t255;
    unsigned int t256;
    char *t257;
    char *t258;
    unsigned int t259;
    unsigned int t260;
    unsigned int t261;
    unsigned int t262;
    unsigned int t263;
    unsigned int t264;
    unsigned int t265;
    char *t266;
    char *t267;
    unsigned int t268;
    unsigned int t269;
    unsigned int t270;
    int t271;
    unsigned int t272;
    unsigned int t273;
    unsigned int t274;
    int t275;
    unsigned int t276;
    unsigned int t277;
    unsigned int t278;
    unsigned int t279;
    unsigned int t280;
    unsigned int t281;
    unsigned int t282;
    unsigned int t283;
    char *t286;
    char *t287;
    char *t288;
    unsigned int t290;
    unsigned int t291;
    unsigned int t292;
    char *t293;
    char *t294;
    unsigned int t295;
    unsigned int t296;
    unsigned int t297;
    unsigned int t298;
    unsigned int t299;
    unsigned int t300;
    unsigned int t301;
    char *t302;
    char *t303;
    unsigned int t304;
    unsigned int t305;
    unsigned int t306;
    int t307;
    unsigned int t308;
    unsigned int t309;
    unsigned int t310;
    int t311;
    unsigned int t312;
    unsigned int t313;
    unsigned int t314;
    unsigned int t315;
    char *t316;
    char *t317;
    unsigned int t319;
    unsigned int t320;
    unsigned int t321;
    char *t322;
    char *t323;
    unsigned int t324;
    unsigned int t325;
    unsigned int t326;
    unsigned int t327;
    unsigned int t328;
    unsigned int t329;
    unsigned int t330;
    char *t331;
    char *t332;
    unsigned int t333;
    unsigned int t334;
    unsigned int t335;
    int t336;
    unsigned int t337;
    unsigned int t338;
    unsigned int t339;
    int t340;
    unsigned int t341;
    unsigned int t342;
    unsigned int t343;
    unsigned int t344;
    char *t345;
    char *t346;
    unsigned int t348;
    unsigned int t349;
    unsigned int t350;
    char *t351;
    char *t352;
    unsigned int t353;
    unsigned int t354;
    unsigned int t355;
    unsigned int t356;
    unsigned int t357;
    unsigned int t358;
    unsigned int t359;
    char *t360;
    char *t361;
    unsigned int t362;
    unsigned int t363;
    unsigned int t364;
    int t365;
    unsigned int t366;
    unsigned int t367;
    unsigned int t368;
    int t369;
    unsigned int t370;
    unsigned int t371;
    unsigned int t372;
    unsigned int t373;
    char *t374;
    unsigned int t375;
    unsigned int t376;
    unsigned int t377;
    unsigned int t378;
    unsigned int t379;
    char *t380;
    char *t381;
    unsigned int t382;
    unsigned int t383;
    unsigned int t384;
    char *t385;
    char *t386;
    unsigned int t388;
    unsigned int t389;
    unsigned int t390;
    unsigned int t391;
    char *t392;
    char *t393;
    char *t394;
    char *t395;
    char *t396;
    unsigned int t397;
    unsigned int t398;
    char *t399;
    unsigned int t400;
    unsigned int t401;
    char *t402;
    unsigned int t403;
    unsigned int t404;
    char *t405;

LAB0:    t1 = (t0 + 14320U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(80, ng0);
    t2 = (t0 + 4088U);
    t5 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t5 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 & 1U);
    if (t10 != 0)
        goto LAB4;

LAB5:    if (*((unsigned int *)t2) != 0)
        goto LAB6;

LAB7:    t12 = (t4 + 4);
    t13 = *((unsigned int *)t4);
    t14 = *((unsigned int *)t12);
    t15 = (t13 || t14);
    if (t15 > 0)
        goto LAB8;

LAB9:    t46 = *((unsigned int *)t4);
    t47 = (~(t46));
    t48 = *((unsigned int *)t12);
    t49 = (t47 || t48);
    if (t49 > 0)
        goto LAB10;

LAB11:    if (*((unsigned int *)t12) > 0)
        goto LAB12;

LAB13:    if (*((unsigned int *)t4) > 0)
        goto LAB14;

LAB15:    memcpy(t3, t50, 8);

LAB16:    t392 = (t0 + 16984);
    t393 = (t392 + 56U);
    t394 = *((char **)t393);
    t395 = (t394 + 56U);
    t396 = *((char **)t395);
    memset(t396, 0, 8);
    t397 = 1U;
    t398 = t397;
    t399 = (t3 + 4);
    t400 = *((unsigned int *)t3);
    t397 = (t397 & t400);
    t401 = *((unsigned int *)t399);
    t398 = (t398 & t401);
    t402 = (t396 + 4);
    t403 = *((unsigned int *)t396);
    *((unsigned int *)t396) = (t403 | t397);
    t404 = *((unsigned int *)t402);
    *((unsigned int *)t402) = (t404 | t398);
    xsi_driver_vfirst_trans(t392, 0, 0U);
    t405 = (t0 + 15288);
    *((int *)t405) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t4) = 1;
    goto LAB7;

LAB6:    t11 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB7;

LAB8:    t16 = (t0 + 6168U);
    t17 = *((char **)t16);
    t16 = (t0 + 6488U);
    t18 = *((char **)t16);
    t20 = *((unsigned int *)t17);
    t21 = *((unsigned int *)t18);
    t22 = (t20 | t21);
    *((unsigned int *)t19) = t22;
    t16 = (t17 + 4);
    t23 = (t18 + 4);
    t24 = (t19 + 4);
    t25 = *((unsigned int *)t16);
    t26 = *((unsigned int *)t23);
    t27 = (t25 | t26);
    *((unsigned int *)t24) = t27;
    t28 = *((unsigned int *)t24);
    t29 = (t28 != 0);
    if (t29 == 1)
        goto LAB17;

LAB18:
LAB19:    goto LAB9;

LAB10:    t52 = (t0 + 3288U);
    t53 = *((char **)t52);
    memset(t51, 0, 8);
    t52 = (t53 + 4);
    t54 = *((unsigned int *)t52);
    t55 = (~(t54));
    t56 = *((unsigned int *)t53);
    t57 = (t56 & t55);
    t58 = (t57 & 1U);
    if (t58 != 0)
        goto LAB20;

LAB21:    if (*((unsigned int *)t52) != 0)
        goto LAB22;

LAB23:    t60 = (t51 + 4);
    t61 = *((unsigned int *)t51);
    t62 = *((unsigned int *)t60);
    t63 = (t61 || t62);
    if (t63 > 0)
        goto LAB24;

LAB25:    t152 = *((unsigned int *)t51);
    t153 = (~(t152));
    t154 = *((unsigned int *)t60);
    t155 = (t153 || t154);
    if (t155 > 0)
        goto LAB26;

LAB27:    if (*((unsigned int *)t60) > 0)
        goto LAB28;

LAB29:    if (*((unsigned int *)t51) > 0)
        goto LAB30;

LAB31:    memcpy(t50, t156, 8);

LAB32:    goto LAB11;

LAB12:    xsi_vlog_unsigned_bit_combine(t3, 32, t19, 32, t50, 32);
    goto LAB16;

LAB14:    memcpy(t3, t19, 8);
    goto LAB16;

LAB17:    t30 = *((unsigned int *)t19);
    t31 = *((unsigned int *)t24);
    *((unsigned int *)t19) = (t30 | t31);
    t32 = (t17 + 4);
    t33 = (t18 + 4);
    t34 = *((unsigned int *)t32);
    t35 = (~(t34));
    t36 = *((unsigned int *)t17);
    t37 = (t36 & t35);
    t38 = *((unsigned int *)t33);
    t39 = (~(t38));
    t40 = *((unsigned int *)t18);
    t41 = (t40 & t39);
    t42 = (~(t37));
    t43 = (~(t41));
    t44 = *((unsigned int *)t24);
    *((unsigned int *)t24) = (t44 & t42);
    t45 = *((unsigned int *)t24);
    *((unsigned int *)t24) = (t45 & t43);
    goto LAB19;

LAB20:    *((unsigned int *)t51) = 1;
    goto LAB23;

LAB22:    t59 = (t51 + 4);
    *((unsigned int *)t51) = 1;
    *((unsigned int *)t59) = 1;
    goto LAB23;

LAB24:    t64 = (t0 + 6168U);
    t65 = *((char **)t64);
    t64 = (t0 + 6328U);
    t66 = *((char **)t64);
    t68 = *((unsigned int *)t65);
    t69 = *((unsigned int *)t66);
    t70 = (t68 | t69);
    *((unsigned int *)t67) = t70;
    t64 = (t65 + 4);
    t71 = (t66 + 4);
    t72 = (t67 + 4);
    t73 = *((unsigned int *)t64);
    t74 = *((unsigned int *)t71);
    t75 = (t73 | t74);
    *((unsigned int *)t72) = t75;
    t76 = *((unsigned int *)t72);
    t77 = (t76 != 0);
    if (t77 == 1)
        goto LAB33;

LAB34:
LAB35:    t94 = (t0 + 6488U);
    t95 = *((char **)t94);
    t97 = *((unsigned int *)t67);
    t98 = *((unsigned int *)t95);
    t99 = (t97 | t98);
    *((unsigned int *)t96) = t99;
    t94 = (t67 + 4);
    t100 = (t95 + 4);
    t101 = (t96 + 4);
    t102 = *((unsigned int *)t94);
    t103 = *((unsigned int *)t100);
    t104 = (t102 | t103);
    *((unsigned int *)t101) = t104;
    t105 = *((unsigned int *)t101);
    t106 = (t105 != 0);
    if (t106 == 1)
        goto LAB36;

LAB37:
LAB38:    t123 = (t0 + 6648U);
    t124 = *((char **)t123);
    t126 = *((unsigned int *)t96);
    t127 = *((unsigned int *)t124);
    t128 = (t126 | t127);
    *((unsigned int *)t125) = t128;
    t123 = (t96 + 4);
    t129 = (t124 + 4);
    t130 = (t125 + 4);
    t131 = *((unsigned int *)t123);
    t132 = *((unsigned int *)t129);
    t133 = (t131 | t132);
    *((unsigned int *)t130) = t133;
    t134 = *((unsigned int *)t130);
    t135 = (t134 != 0);
    if (t135 == 1)
        goto LAB39;

LAB40:
LAB41:    goto LAB25;

LAB26:    t158 = (t0 + 2968U);
    t159 = *((char **)t158);
    t158 = (t0 + 4568U);
    t161 = *((char **)t158);
    t158 = (t0 + 4408U);
    t162 = *((char **)t158);
    t164 = *((unsigned int *)t161);
    t165 = *((unsigned int *)t162);
    t166 = (t164 | t165);
    *((unsigned int *)t163) = t166;
    t158 = (t161 + 4);
    t167 = (t162 + 4);
    t168 = (t163 + 4);
    t169 = *((unsigned int *)t158);
    t170 = *((unsigned int *)t167);
    t171 = (t169 | t170);
    *((unsigned int *)t168) = t171;
    t172 = *((unsigned int *)t168);
    t173 = (t172 != 0);
    if (t173 == 1)
        goto LAB42;

LAB43:
LAB44:    memset(t160, 0, 8);
    t190 = (t163 + 4);
    t191 = *((unsigned int *)t190);
    t192 = (~(t191));
    t193 = *((unsigned int *)t163);
    t194 = (t193 & t192);
    t195 = (t194 & 1U);
    if (t195 != 0)
        goto LAB48;

LAB46:    if (*((unsigned int *)t190) == 0)
        goto LAB45;

LAB47:    t196 = (t160 + 4);
    *((unsigned int *)t160) = 1;
    *((unsigned int *)t196) = 1;

LAB48:    t197 = (t160 + 4);
    t198 = (t163 + 4);
    t199 = *((unsigned int *)t163);
    t200 = (~(t199));
    *((unsigned int *)t160) = t200;
    *((unsigned int *)t197) = 0;
    if (*((unsigned int *)t198) != 0)
        goto LAB50;

LAB49:    t205 = *((unsigned int *)t160);
    *((unsigned int *)t160) = (t205 & 1U);
    t206 = *((unsigned int *)t197);
    *((unsigned int *)t197) = (t206 & 1U);
    t208 = *((unsigned int *)t159);
    t209 = *((unsigned int *)t160);
    t210 = (t208 & t209);
    *((unsigned int *)t207) = t210;
    t211 = (t159 + 4);
    t212 = (t160 + 4);
    t213 = (t207 + 4);
    t214 = *((unsigned int *)t211);
    t215 = *((unsigned int *)t212);
    t216 = (t214 | t215);
    *((unsigned int *)t213) = t216;
    t217 = *((unsigned int *)t213);
    t218 = (t217 != 0);
    if (t218 == 1)
        goto LAB51;

LAB52:
LAB53:    memset(t157, 0, 8);
    t239 = (t207 + 4);
    t240 = *((unsigned int *)t239);
    t241 = (~(t240));
    t242 = *((unsigned int *)t207);
    t243 = (t242 & t241);
    t244 = (t243 & 1U);
    if (t244 != 0)
        goto LAB54;

LAB55:    if (*((unsigned int *)t239) != 0)
        goto LAB56;

LAB57:    t246 = (t157 + 4);
    t247 = *((unsigned int *)t157);
    t248 = *((unsigned int *)t246);
    t249 = (t247 || t248);
    if (t249 > 0)
        goto LAB58;

LAB59:    t280 = *((unsigned int *)t157);
    t281 = (~(t280));
    t282 = *((unsigned int *)t246);
    t283 = (t281 || t282);
    if (t283 > 0)
        goto LAB60;

LAB61:    if (*((unsigned int *)t246) > 0)
        goto LAB62;

LAB63:    if (*((unsigned int *)t157) > 0)
        goto LAB64;

LAB65:    memcpy(t156, t284, 8);

LAB66:    goto LAB27;

LAB28:    xsi_vlog_unsigned_bit_combine(t50, 32, t125, 32, t156, 32);
    goto LAB32;

LAB30:    memcpy(t50, t125, 8);
    goto LAB32;

LAB33:    t78 = *((unsigned int *)t67);
    t79 = *((unsigned int *)t72);
    *((unsigned int *)t67) = (t78 | t79);
    t80 = (t65 + 4);
    t81 = (t66 + 4);
    t82 = *((unsigned int *)t80);
    t83 = (~(t82));
    t84 = *((unsigned int *)t65);
    t85 = (t84 & t83);
    t86 = *((unsigned int *)t81);
    t87 = (~(t86));
    t88 = *((unsigned int *)t66);
    t89 = (t88 & t87);
    t90 = (~(t85));
    t91 = (~(t89));
    t92 = *((unsigned int *)t72);
    *((unsigned int *)t72) = (t92 & t90);
    t93 = *((unsigned int *)t72);
    *((unsigned int *)t72) = (t93 & t91);
    goto LAB35;

LAB36:    t107 = *((unsigned int *)t96);
    t108 = *((unsigned int *)t101);
    *((unsigned int *)t96) = (t107 | t108);
    t109 = (t67 + 4);
    t110 = (t95 + 4);
    t111 = *((unsigned int *)t109);
    t112 = (~(t111));
    t113 = *((unsigned int *)t67);
    t114 = (t113 & t112);
    t115 = *((unsigned int *)t110);
    t116 = (~(t115));
    t117 = *((unsigned int *)t95);
    t118 = (t117 & t116);
    t119 = (~(t114));
    t120 = (~(t118));
    t121 = *((unsigned int *)t101);
    *((unsigned int *)t101) = (t121 & t119);
    t122 = *((unsigned int *)t101);
    *((unsigned int *)t101) = (t122 & t120);
    goto LAB38;

LAB39:    t136 = *((unsigned int *)t125);
    t137 = *((unsigned int *)t130);
    *((unsigned int *)t125) = (t136 | t137);
    t138 = (t96 + 4);
    t139 = (t124 + 4);
    t140 = *((unsigned int *)t138);
    t141 = (~(t140));
    t142 = *((unsigned int *)t96);
    t143 = (t142 & t141);
    t144 = *((unsigned int *)t139);
    t145 = (~(t144));
    t146 = *((unsigned int *)t124);
    t147 = (t146 & t145);
    t148 = (~(t143));
    t149 = (~(t147));
    t150 = *((unsigned int *)t130);
    *((unsigned int *)t130) = (t150 & t148);
    t151 = *((unsigned int *)t130);
    *((unsigned int *)t130) = (t151 & t149);
    goto LAB41;

LAB42:    t174 = *((unsigned int *)t163);
    t175 = *((unsigned int *)t168);
    *((unsigned int *)t163) = (t174 | t175);
    t176 = (t161 + 4);
    t177 = (t162 + 4);
    t178 = *((unsigned int *)t176);
    t179 = (~(t178));
    t180 = *((unsigned int *)t161);
    t181 = (t180 & t179);
    t182 = *((unsigned int *)t177);
    t183 = (~(t182));
    t184 = *((unsigned int *)t162);
    t185 = (t184 & t183);
    t186 = (~(t181));
    t187 = (~(t185));
    t188 = *((unsigned int *)t168);
    *((unsigned int *)t168) = (t188 & t186);
    t189 = *((unsigned int *)t168);
    *((unsigned int *)t168) = (t189 & t187);
    goto LAB44;

LAB45:    *((unsigned int *)t160) = 1;
    goto LAB48;

LAB50:    t201 = *((unsigned int *)t160);
    t202 = *((unsigned int *)t198);
    *((unsigned int *)t160) = (t201 | t202);
    t203 = *((unsigned int *)t197);
    t204 = *((unsigned int *)t198);
    *((unsigned int *)t197) = (t203 | t204);
    goto LAB49;

LAB51:    t219 = *((unsigned int *)t207);
    t220 = *((unsigned int *)t213);
    *((unsigned int *)t207) = (t219 | t220);
    t221 = (t159 + 4);
    t222 = (t160 + 4);
    t223 = *((unsigned int *)t159);
    t224 = (~(t223));
    t225 = *((unsigned int *)t221);
    t226 = (~(t225));
    t227 = *((unsigned int *)t160);
    t228 = (~(t227));
    t229 = *((unsigned int *)t222);
    t230 = (~(t229));
    t231 = (t224 & t226);
    t232 = (t228 & t230);
    t233 = (~(t231));
    t234 = (~(t232));
    t235 = *((unsigned int *)t213);
    *((unsigned int *)t213) = (t235 & t233);
    t236 = *((unsigned int *)t213);
    *((unsigned int *)t213) = (t236 & t234);
    t237 = *((unsigned int *)t207);
    *((unsigned int *)t207) = (t237 & t233);
    t238 = *((unsigned int *)t207);
    *((unsigned int *)t207) = (t238 & t234);
    goto LAB53;

LAB54:    *((unsigned int *)t157) = 1;
    goto LAB57;

LAB56:    t245 = (t157 + 4);
    *((unsigned int *)t157) = 1;
    *((unsigned int *)t245) = 1;
    goto LAB57;

LAB58:    t250 = (t0 + 6168U);
    t251 = *((char **)t250);
    t250 = (t0 + 6328U);
    t252 = *((char **)t250);
    t254 = *((unsigned int *)t251);
    t255 = *((unsigned int *)t252);
    t256 = (t254 | t255);
    *((unsigned int *)t253) = t256;
    t250 = (t251 + 4);
    t257 = (t252 + 4);
    t258 = (t253 + 4);
    t259 = *((unsigned int *)t250);
    t260 = *((unsigned int *)t257);
    t261 = (t259 | t260);
    *((unsigned int *)t258) = t261;
    t262 = *((unsigned int *)t258);
    t263 = (t262 != 0);
    if (t263 == 1)
        goto LAB67;

LAB68:
LAB69:    goto LAB59;

LAB60:    t286 = (t0 + 3448U);
    t287 = *((char **)t286);
    t286 = (t0 + 3608U);
    t288 = *((char **)t286);
    t290 = *((unsigned int *)t287);
    t291 = *((unsigned int *)t288);
    t292 = (t290 | t291);
    *((unsigned int *)t289) = t292;
    t286 = (t287 + 4);
    t293 = (t288 + 4);
    t294 = (t289 + 4);
    t295 = *((unsigned int *)t286);
    t296 = *((unsigned int *)t293);
    t297 = (t295 | t296);
    *((unsigned int *)t294) = t297;
    t298 = *((unsigned int *)t294);
    t299 = (t298 != 0);
    if (t299 == 1)
        goto LAB70;

LAB71:
LAB72:    t316 = (t0 + 3768U);
    t317 = *((char **)t316);
    t319 = *((unsigned int *)t289);
    t320 = *((unsigned int *)t317);
    t321 = (t319 | t320);
    *((unsigned int *)t318) = t321;
    t316 = (t289 + 4);
    t322 = (t317 + 4);
    t323 = (t318 + 4);
    t324 = *((unsigned int *)t316);
    t325 = *((unsigned int *)t322);
    t326 = (t324 | t325);
    *((unsigned int *)t323) = t326;
    t327 = *((unsigned int *)t323);
    t328 = (t327 != 0);
    if (t328 == 1)
        goto LAB73;

LAB74:
LAB75:    t345 = (t0 + 4408U);
    t346 = *((char **)t345);
    t348 = *((unsigned int *)t318);
    t349 = *((unsigned int *)t346);
    t350 = (t348 | t349);
    *((unsigned int *)t347) = t350;
    t345 = (t318 + 4);
    t351 = (t346 + 4);
    t352 = (t347 + 4);
    t353 = *((unsigned int *)t345);
    t354 = *((unsigned int *)t351);
    t355 = (t353 | t354);
    *((unsigned int *)t352) = t355;
    t356 = *((unsigned int *)t352);
    t357 = (t356 != 0);
    if (t357 == 1)
        goto LAB76;

LAB77:
LAB78:    memset(t285, 0, 8);
    t374 = (t347 + 4);
    t375 = *((unsigned int *)t374);
    t376 = (~(t375));
    t377 = *((unsigned int *)t347);
    t378 = (t377 & t376);
    t379 = (t378 & 1U);
    if (t379 != 0)
        goto LAB79;

LAB80:    if (*((unsigned int *)t374) != 0)
        goto LAB81;

LAB82:    t381 = (t285 + 4);
    t382 = *((unsigned int *)t285);
    t383 = *((unsigned int *)t381);
    t384 = (t382 || t383);
    if (t384 > 0)
        goto LAB83;

LAB84:    t388 = *((unsigned int *)t285);
    t389 = (~(t388));
    t390 = *((unsigned int *)t381);
    t391 = (t389 || t390);
    if (t391 > 0)
        goto LAB85;

LAB86:    if (*((unsigned int *)t381) > 0)
        goto LAB87;

LAB88:    if (*((unsigned int *)t285) > 0)
        goto LAB89;

LAB90:    memcpy(t284, t385, 8);

LAB91:    goto LAB61;

LAB62:    xsi_vlog_unsigned_bit_combine(t156, 32, t253, 32, t284, 32);
    goto LAB66;

LAB64:    memcpy(t156, t253, 8);
    goto LAB66;

LAB67:    t264 = *((unsigned int *)t253);
    t265 = *((unsigned int *)t258);
    *((unsigned int *)t253) = (t264 | t265);
    t266 = (t251 + 4);
    t267 = (t252 + 4);
    t268 = *((unsigned int *)t266);
    t269 = (~(t268));
    t270 = *((unsigned int *)t251);
    t271 = (t270 & t269);
    t272 = *((unsigned int *)t267);
    t273 = (~(t272));
    t274 = *((unsigned int *)t252);
    t275 = (t274 & t273);
    t276 = (~(t271));
    t277 = (~(t275));
    t278 = *((unsigned int *)t258);
    *((unsigned int *)t258) = (t278 & t276);
    t279 = *((unsigned int *)t258);
    *((unsigned int *)t258) = (t279 & t277);
    goto LAB69;

LAB70:    t300 = *((unsigned int *)t289);
    t301 = *((unsigned int *)t294);
    *((unsigned int *)t289) = (t300 | t301);
    t302 = (t287 + 4);
    t303 = (t288 + 4);
    t304 = *((unsigned int *)t302);
    t305 = (~(t304));
    t306 = *((unsigned int *)t287);
    t307 = (t306 & t305);
    t308 = *((unsigned int *)t303);
    t309 = (~(t308));
    t310 = *((unsigned int *)t288);
    t311 = (t310 & t309);
    t312 = (~(t307));
    t313 = (~(t311));
    t314 = *((unsigned int *)t294);
    *((unsigned int *)t294) = (t314 & t312);
    t315 = *((unsigned int *)t294);
    *((unsigned int *)t294) = (t315 & t313);
    goto LAB72;

LAB73:    t329 = *((unsigned int *)t318);
    t330 = *((unsigned int *)t323);
    *((unsigned int *)t318) = (t329 | t330);
    t331 = (t289 + 4);
    t332 = (t317 + 4);
    t333 = *((unsigned int *)t331);
    t334 = (~(t333));
    t335 = *((unsigned int *)t289);
    t336 = (t335 & t334);
    t337 = *((unsigned int *)t332);
    t338 = (~(t337));
    t339 = *((unsigned int *)t317);
    t340 = (t339 & t338);
    t341 = (~(t336));
    t342 = (~(t340));
    t343 = *((unsigned int *)t323);
    *((unsigned int *)t323) = (t343 & t341);
    t344 = *((unsigned int *)t323);
    *((unsigned int *)t323) = (t344 & t342);
    goto LAB75;

LAB76:    t358 = *((unsigned int *)t347);
    t359 = *((unsigned int *)t352);
    *((unsigned int *)t347) = (t358 | t359);
    t360 = (t318 + 4);
    t361 = (t346 + 4);
    t362 = *((unsigned int *)t360);
    t363 = (~(t362));
    t364 = *((unsigned int *)t318);
    t365 = (t364 & t363);
    t366 = *((unsigned int *)t361);
    t367 = (~(t366));
    t368 = *((unsigned int *)t346);
    t369 = (t368 & t367);
    t370 = (~(t365));
    t371 = (~(t369));
    t372 = *((unsigned int *)t352);
    *((unsigned int *)t352) = (t372 & t370);
    t373 = *((unsigned int *)t352);
    *((unsigned int *)t352) = (t373 & t371);
    goto LAB78;

LAB79:    *((unsigned int *)t285) = 1;
    goto LAB82;

LAB81:    t380 = (t285 + 4);
    *((unsigned int *)t285) = 1;
    *((unsigned int *)t380) = 1;
    goto LAB82;

LAB83:    t385 = (t0 + 6168U);
    t386 = *((char **)t385);
    memcpy(t387, t386, 8);
    goto LAB84;

LAB85:    t385 = ((char*)((ng4)));
    goto LAB86;

LAB87:    xsi_vlog_unsigned_bit_combine(t284, 32, t387, 32, t385, 32);
    goto LAB91;

LAB89:    memcpy(t284, t387, 8);
    goto LAB91;

}

static void NetDecl_89_26(char *t0)
{
    char t6[8];
    char t35[8];
    char t62[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    char *t10;
    char *t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;
    char *t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    char *t33;
    char *t34;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    char *t39;
    char *t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    char *t48;
    char *t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    char *t66;
    char *t67;
    char *t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    char *t76;
    char *t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    unsigned int t84;
    unsigned int t85;
    int t86;
    int t87;
    unsigned int t88;
    unsigned int t89;
    unsigned int t90;
    unsigned int t91;
    unsigned int t92;
    unsigned int t93;
    char *t94;
    char *t95;
    char *t96;
    char *t97;
    char *t98;
    unsigned int t99;
    unsigned int t100;
    char *t101;
    unsigned int t102;
    unsigned int t103;
    char *t104;
    unsigned int t105;
    unsigned int t106;
    char *t107;

LAB0:    t1 = (t0 + 14568U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(89, ng0);
    t2 = (t0 + 1688U);
    t3 = *((char **)t2);
    t2 = (t0 + 4248U);
    t4 = *((char **)t2);
    t2 = (t0 + 4568U);
    t5 = *((char **)t2);
    t7 = *((unsigned int *)t4);
    t8 = *((unsigned int *)t5);
    t9 = (t7 | t8);
    *((unsigned int *)t6) = t9;
    t2 = (t4 + 4);
    t10 = (t5 + 4);
    t11 = (t6 + 4);
    t12 = *((unsigned int *)t2);
    t13 = *((unsigned int *)t10);
    t14 = (t12 | t13);
    *((unsigned int *)t11) = t14;
    t15 = *((unsigned int *)t11);
    t16 = (t15 != 0);
    if (t16 == 1)
        goto LAB4;

LAB5:
LAB6:    t33 = (t0 + 4408U);
    t34 = *((char **)t33);
    t36 = *((unsigned int *)t6);
    t37 = *((unsigned int *)t34);
    t38 = (t36 | t37);
    *((unsigned int *)t35) = t38;
    t33 = (t6 + 4);
    t39 = (t34 + 4);
    t40 = (t35 + 4);
    t41 = *((unsigned int *)t33);
    t42 = *((unsigned int *)t39);
    t43 = (t41 | t42);
    *((unsigned int *)t40) = t43;
    t44 = *((unsigned int *)t40);
    t45 = (t44 != 0);
    if (t45 == 1)
        goto LAB7;

LAB8:
LAB9:    t63 = *((unsigned int *)t3);
    t64 = *((unsigned int *)t35);
    t65 = (t63 & t64);
    *((unsigned int *)t62) = t65;
    t66 = (t3 + 4);
    t67 = (t35 + 4);
    t68 = (t62 + 4);
    t69 = *((unsigned int *)t66);
    t70 = *((unsigned int *)t67);
    t71 = (t69 | t70);
    *((unsigned int *)t68) = t71;
    t72 = *((unsigned int *)t68);
    t73 = (t72 != 0);
    if (t73 == 1)
        goto LAB10;

LAB11:
LAB12:    t94 = (t0 + 17048);
    t95 = (t94 + 56U);
    t96 = *((char **)t95);
    t97 = (t96 + 56U);
    t98 = *((char **)t97);
    memset(t98, 0, 8);
    t99 = 1U;
    t100 = t99;
    t101 = (t62 + 4);
    t102 = *((unsigned int *)t62);
    t99 = (t99 & t102);
    t103 = *((unsigned int *)t101);
    t100 = (t100 & t103);
    t104 = (t98 + 4);
    t105 = *((unsigned int *)t98);
    *((unsigned int *)t98) = (t105 | t99);
    t106 = *((unsigned int *)t104);
    *((unsigned int *)t104) = (t106 | t100);
    xsi_driver_vfirst_trans(t94, 0, 0U);
    t107 = (t0 + 15304);
    *((int *)t107) = 1;

LAB1:    return;
LAB4:    t17 = *((unsigned int *)t6);
    t18 = *((unsigned int *)t11);
    *((unsigned int *)t6) = (t17 | t18);
    t19 = (t4 + 4);
    t20 = (t5 + 4);
    t21 = *((unsigned int *)t19);
    t22 = (~(t21));
    t23 = *((unsigned int *)t4);
    t24 = (t23 & t22);
    t25 = *((unsigned int *)t20);
    t26 = (~(t25));
    t27 = *((unsigned int *)t5);
    t28 = (t27 & t26);
    t29 = (~(t24));
    t30 = (~(t28));
    t31 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t31 & t29);
    t32 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t32 & t30);
    goto LAB6;

LAB7:    t46 = *((unsigned int *)t35);
    t47 = *((unsigned int *)t40);
    *((unsigned int *)t35) = (t46 | t47);
    t48 = (t6 + 4);
    t49 = (t34 + 4);
    t50 = *((unsigned int *)t48);
    t51 = (~(t50));
    t52 = *((unsigned int *)t6);
    t53 = (t52 & t51);
    t54 = *((unsigned int *)t49);
    t55 = (~(t54));
    t56 = *((unsigned int *)t34);
    t57 = (t56 & t55);
    t58 = (~(t53));
    t59 = (~(t57));
    t60 = *((unsigned int *)t40);
    *((unsigned int *)t40) = (t60 & t58);
    t61 = *((unsigned int *)t40);
    *((unsigned int *)t40) = (t61 & t59);
    goto LAB9;

LAB10:    t74 = *((unsigned int *)t62);
    t75 = *((unsigned int *)t68);
    *((unsigned int *)t62) = (t74 | t75);
    t76 = (t3 + 4);
    t77 = (t35 + 4);
    t78 = *((unsigned int *)t3);
    t79 = (~(t78));
    t80 = *((unsigned int *)t76);
    t81 = (~(t80));
    t82 = *((unsigned int *)t35);
    t83 = (~(t82));
    t84 = *((unsigned int *)t77);
    t85 = (~(t84));
    t86 = (t79 & t81);
    t87 = (t83 & t85);
    t88 = (~(t86));
    t89 = (~(t87));
    t90 = *((unsigned int *)t68);
    *((unsigned int *)t68) = (t90 & t88);
    t91 = *((unsigned int *)t68);
    *((unsigned int *)t68) = (t91 & t89);
    t92 = *((unsigned int *)t62);
    *((unsigned int *)t62) = (t92 & t88);
    t93 = *((unsigned int *)t62);
    *((unsigned int *)t62) = (t93 & t89);
    goto LAB12;

}


extern void work_m_15712806744394651746_1670084158_init()
{
	static char *pe[] = {(void *)NetDecl_24_0,(void *)NetDecl_24_1,(void *)NetDecl_24_2,(void *)NetDecl_24_3,(void *)NetDecl_24_4,(void *)NetDecl_24_5,(void *)NetDecl_31_6,(void *)NetDecl_31_7,(void *)NetDecl_31_8,(void *)NetDecl_31_9,(void *)NetDecl_31_10,(void *)NetDecl_31_11,(void *)NetDecl_31_12,(void *)NetDecl_31_13,(void *)NetDecl_31_14,(void *)NetDecl_31_15,(void *)NetDecl_31_16,(void *)NetDecl_31_17,(void *)NetDecl_31_18,(void *)NetDecl_51_19,(void *)NetDecl_60_20,(void *)NetDecl_64_21,(void *)NetDecl_68_22,(void *)NetDecl_72_23,(void *)Cont_78_24,(void *)NetDecl_80_25,(void *)NetDecl_89_26};
	xsi_register_didat("work_m_15712806744394651746_1670084158", "isim/mips_txt_isim_beh.exe.sim/work/m_15712806744394651746_1670084158.didat");
	xsi_register_executes(pe);
}
