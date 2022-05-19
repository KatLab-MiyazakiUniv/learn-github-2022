/**
 * @file PidGain.h
 * @author sakakibara kazuma
 * @brief PID制御で用いる定数をまとめたクラス
 * @version 0.1
 * @date 2022-05-12
 *
 * @copyright Copyright (c) 2022
 *
 */

#ifndef PID_GAIN_H
#define PID_GAIN_H
#include <stdio.h>
class PidGain
{
public:
    double kp;
    double ki;
    double kd;
    PidGain(double _kp, double _ki, double _kd);
    void setPidGain(double _kp = 0.6, double _ki = 0.08, double _kd = 0.04);
};

class Pid
{
private:
    PidGain gain;

public:
    Pid(double _kp, double _ki, double _kd);
    int error(int now, int next);
    double control(int now, int next);
};

#endif
