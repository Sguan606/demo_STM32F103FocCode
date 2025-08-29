#ifndef __SVPWM_H
#define __SVPWM_H

#include <math.h>
#include <stdint.h>
#include "fast_sin.h"


/**
 * @description: 定义FOC输出SVPWM的结构体变量;
 * @return {*}
 */
typedef struct {
    float u_d;
    float u_q;
    float theta;

    float u_alpha;
    float u_beta;

    float t_a;
    float t_b;
    float t_c;

    float i_a;
    float i_b;
    float i_c;

    float i_alpha;
    float i_beta;

    float i_d;
    float i_q;

    float sine;
    float cosine;
    float k_svpwm;
} FOC_HandleTypeDef;

void ipark(FOC_HandleTypeDef* foc);
void ipark2(FOC_HandleTypeDef* foc);
void clarke(FOC_HandleTypeDef* foc);
void park(FOC_HandleTypeDef* foc);
void svpwm(FOC_HandleTypeDef* foc);


#endif  //SVPWM_H

