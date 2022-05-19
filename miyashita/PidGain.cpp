/**
 * @file    PidGain.cpp
 * @brief   PID制御で用いる定数をまとめたクラス
 * @author  miyashita
 */
#include "PidGain.h"

PidGain::PidGain(double _kp, double _ki, double _kd) : kp(_kp), ki(_ki), kd(_kd) {}

void PidGain::setPidGain(double _kp, double _ki, double _kd)
{
    kp = _kp;
    ki = _ki;
    kd = _kd;
}