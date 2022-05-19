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

Pid::Pid(double _kp, double _ki, double _kd) : gain(_kp, _ki, _kd)
{
    printf("%f", _kp);
}

int Pid::error(int now, int next)
{
    return next - now;
}

double Pid::control(int now, int next)
{
    double c;
    c = gain.kp * error(now, next);
    printf("%f", c);
    return c;
}