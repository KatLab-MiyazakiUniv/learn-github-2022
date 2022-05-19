/**
 * @file    Pid.cpp
 * @brief   PID制御を行うクラス
 * @author  miyashita
 */
#include "Pid.h"

Pid::Pid(double _kp, double _ki, double _kd) : gain(_kp, _ki, _kd) {}

int Pid::error(int target, int out)
{
    return target - out;
}

double Pid::control(int target, int out)
{
    int err = error(target, out);
    int diff = (err - preError) / period;
    inte += err * period;
    preError = err;
    return gain.kp * err + gain.ki * inte + gain.kd * diff;
}