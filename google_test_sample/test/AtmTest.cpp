/**
 * @file    AtmTest.cpp
 * @brief   Atmクラスのテスト
 * @author  miyashita
 */

#include <gtest/gtest.h>
#include "../modules/Atm.h"

namespace etrobocon2022_learn
{
    // TEST(テスト対象クラス名, テストケース名){}
    TEST(Atm, AtmInit)
    {
        Atm atm(1000);

        int expected = 1000;

        EXPECT_EQ(expected, atm.getBalance());
    }
}