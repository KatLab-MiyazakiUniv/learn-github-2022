/**
 * @file    PidGainTest.cpp
 * @brief   PidGainクラスのテスト
 * @author  miyashita
 */

#include <gtest/gtest.h>
#include "../modules/PidGain.h"

namespace etrobocon2022_learn
{
    // TEST(テスト対象クラス名, テストケース名)
    // setPidGainでPゲインを更新できているか
    TEST(PidGain, PidGainSetP)
    {
        PidGain gain(0.6, 0.08, 0.001);
        gain.setPidGain(0.7, 0.05, 0.002);

        // 期待する値
        double expected_p = 0.7;

        EXPECT_DOUBLE_EQ(expected_p, gain.kp);
    }

    // setPidGainでIゲインを更新できているか
    TEST(PidGain, PidGainSetI)
    {
        PidGain gain(0.6, 0.08, 0.001);
        gain.setPidGain(0.7, 0.05, 0.002);

        // 期待する値
        double expected_i = 0.05;

        EXPECT_DOUBLE_EQ(expected_i, gain.ki);
    }

    // setPidGainでDゲインを更新できているか
    TEST(PidGain, PidGainSetD)
    {
        PidGain gain(0.6, 0.08, 0.001);
        gain.setPidGain(0.7, 0.05, 0.002);

        // 期待する値
        double expected_d = 0.002;

        EXPECT_DOUBLE_EQ(expected_d, gain.kd);
    }
}