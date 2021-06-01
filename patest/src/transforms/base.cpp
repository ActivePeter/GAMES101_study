#include "base.h"
#include "math_def.h"

Eigen::Matrix3f get_rotate_trans_2d(float eular_angle, float trans_x, float trans_y)
{
    Eigen::Matrix3f i;
    float radius = eular_angle / 180 * PI;
    i << cos(radius), -sin(radius), trans_x,
        sin(radius), cos(radius), trans_y,
        0.0, 0.0, 1.0;
    return i;
}