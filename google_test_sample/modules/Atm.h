/**
 * @file    Atm.h
 * @brief   ATMクラス
 * @author  miyashita
 */

#ifndef ATM_H
#define ATM_H

class Atm
{
private:
    int balance; // 残高

public:
    // コンストラクタ
    Atm(int init);
    // balanceのゲッタ―
    int getBalance();
    // 入金
    void deposit(int amount);
    // 引き出し
    void withdrawal(int amount);
};

#endif