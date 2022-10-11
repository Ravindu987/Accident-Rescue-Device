#include <Adafruit_MPU6050.h>
#include <Adafruit_Sensor.h>

struct Accelerations
{
    float *x;
    float *y;
    float *z;
};

Accelerations get_acc(Adafruit_MPU6050 gy_521);
