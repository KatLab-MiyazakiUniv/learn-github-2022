/**
 * @file    PidGain.cpp
 * @brief   PID制御で用いる定数をまとめたクラス
 * @author  miyashita
 */

#include "PidGain.h"

// 各メンバ変数を引数で初期化
PidGain::PidGain(double _kp, double _ki, double _kd) : kp(_kp), ki(_ki), kd(_kd) {}

// 各メンバ変数のセッター
void PidGain::setPidGain(double _kp, double _ki, double _kd)
{
    kp = _kp;
    ki = _ki;
    kd = _kd;
}