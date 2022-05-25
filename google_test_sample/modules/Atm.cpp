/**
 * @file    Atm.cpp
 * @brief   ATMクラス
 * @author  miyashita
 */

#include "Atm.h"

// コンストラクタ
Atm::Atm(int init) : balance(init) {}

// 残高(balance)を返す
int Atm::getBalance()
{
    return balance;
}

// 入金
void Atm::deposit(int amount)
{
    balance += amount;
}

// 引き出し
void Atm::withdrawal(int amount)
{
    balance -= amount;
}