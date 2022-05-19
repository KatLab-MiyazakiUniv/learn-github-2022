/**
 * @file    Main.cpp
 * @brief   PID制御を実行する
 * @author  miyashita
 */

#include <stdio.h>
#include "Pid.h"

int main(void)
{
    Pid pid(0.6, 0.08, 0.001);
    printf("control %f\n", pid.control(200, 0));

    return 0;
}
