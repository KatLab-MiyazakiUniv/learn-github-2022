/**
 * @file    Pid.cpp
 * @brief   PID制御を行うクラス
 * @author  miyashita
 */

#include "Pid.h"

// gainメンバを引数でインスタンス化
Pid::Pid(double _kp, double _ki, double _kd) : gain(_kp, _ki, _kd) {}

// 現在値と目標値の差を算出する
int Pid::error(int current, int target)
{
    return target - current;
}

// P制御
double Pid::control(int current, int target)
{
    int err = error(current, target);
    return gain.kp * err;
}