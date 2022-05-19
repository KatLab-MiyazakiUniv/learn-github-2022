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
    PidGain gain;
    double inte = 0;
    int preError = 0;
    double period = 0.004;
    int error(int target, int out);

public:
    Pid(double _kp, double _ki, double _kd);
    double control(int target, int out);
};

#endif