/**
 * @file    PidTest.cpp
 * @brief   Pidクラスのテスト
 * @author  miyashita
 */

#include <gtest/gtest.h>
#include "../modules/Pid.h"

namespace etrobocon2022_learn
{
    // TEST(テスト対象クラス名, テストケース名)
    TEST(Pid, PidControl)
    {
        Pid pid(0.6, 0.08, 0.001);

        // 期待する値(pid.kp * error = 0.6 * 200 = 120.0)
        double expected = 120.0;

        EXPECT_DOUBLE_EQ(expected, pid.control(0, 200));
    }
}