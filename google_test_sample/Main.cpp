/**
 * @file    Main.cpp
 * @brief   PID制御を実行する
 * @author  miyashita
 */

#include <stdio.h>
#include "modules/Pid.h"
#include "modules/Atm.h"

int main(void)
{
    double p = 0.6;

    Pid pid(0.6, 0.08, 0.001);
    printf("control %f\n", pid.control(0, 100));

    Atm atm(1000);
    printf("%d\n", atm.getBalance());
    atm.deposit(1000);
    printf("%d\n", atm.getBalance());
    atm.withdrawal(1000);
    printf("%d\n", atm.getBalance());
    atm.withdrawal(2000);
    printf("%d\n", atm.getBalance());

    return 0;
}
