/**
 * @file    Pid.h
 * @brief   PID制御を行うクラス
 * @author  miyashita
 */
#ifndef PID_H
#define PID_H

#include "PidGain.h"

class Pid
{
private:
    PidGain gain; // PIDゲイン
    // 現在値と目標値の差を算出する
    int error(int current, int target);

public:
    // コンストラクタ
    Pid(double _kp, double _ki, double _kd);
    // P制御
    double control(int current, int target);
};

#endif