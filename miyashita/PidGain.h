/**
 * @file    PidGain.h
 * @brief   PID制御で用いる定数をまとめたクラス
 * @author  miyashita
 */
#ifndef PID_GAIN_H
#define PID_GAIN_H

class PidGain
{
public:
    double kp;
    double ki;
    double kd;

    PidGain(double _kp, double _ki, double _kd);
    void setPidGain(double _kp = 0.6, double _ki = 0.08, double _kd = 0.04);
};

#endif