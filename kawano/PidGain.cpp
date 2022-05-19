#include "PidGain.h"

PidGain::PidGain(double _kp, double _ki, double _kd) : kp(_kp), ki(_ki), kd(_kd)
{
}

void PidGain::setPidGain(double _kp, double _ki, double _kd)
{
    kp = _kp;
    ki = _ki;
    kd = _kd;
}

Pid::Pid(PidGain _gain) : gain(_gain)
{
}

int Pid::error(int start, int goal)
{
    double dif = goal - start;
    return dif;
}

int Pid::control(int start, int goal)
{
    double workload;
    workload = gain.kd * (goal - start);
}
