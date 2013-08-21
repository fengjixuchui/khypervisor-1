#ifndef __MCT_H__
#define __MCT_H__
/*
 * To operate Generic timer's system counter register on Arndale board, call mct_init function.
 */
#include "io.h"
#define EXYNOS5_MCT_BASE 0x101C0000
#define EXYNOS5_MCTREG(x)       (x)
#define EXYNOS5_MCT_L_MASK (0xffffff00)
#define MCT_L_TCON_OFFSET   (0x20)
#define MCT_L_WSTAT_OFFSET  (0x40)
#define MCT_L_ICNTB_OFFSET  (0x08)
#define EXYNOS5_MCT_G_TCON      EXYNOS5_MCTREG(0x240)
#define EXYNOS5_MCT_G_WSTAT     EXYNOS5_MCTREG(0x24C)
#define EXYNOS5_MCT_G_COMP0_L       EXYNOS5_MCTREG(0x200)
#define EXYNOS5_MCT_G_COMP0_U       EXYNOS5_MCTREG(0x204)
#define EXYNOS5_MCT_G_COMP0_ADD_INCR    EXYNOS5_MCTREG(0x208)
#define EXYNOS5_MCT_G_CNT_L     EXYNOS5_MCTREG(0x100)
#define EXYNOS5_MCT_G_CNT_U     EXYNOS5_MCTREG(0x104)
#define MCT_L_TCNTB_OFFSET      (0x00)
#define EXYNOS5_MCT_G_CNT_WSTAT     EXYNOS5_MCTREG(0x110)
#define MCT_G_TCON_START    (1 << 8)
#define _EXYNOS5_MCT_L_BASE     EXYNOS5_MCTREG(0x300)
#define EXYNOS5_MCT_L_BASE(x)   (_EXYNOS5_MCT_L_BASE + (0x100 + x))

void mct_init(void);

#endif