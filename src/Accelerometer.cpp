#include <Adafruit_MPU6050.h>
#include <Adafruit_Sensor.h>
#include <Wire.h>
#include "Accelerometer.h"

Accelerations get_acc(Adafruit_MPU6050 gy_521)
{
  sensors_event_t a, g, temp;
  gy_521.getEvent(&a, &g, &temp);

  float acc_x = a.acceleration.x;
  float acc_y = a.acceleration.y;
  float acc_z = a.acceleration.z;

  return { &acc_x, &acc_y, &acc_z};

  /*
  Serial.print("Rotation X: ");
  Serial.print(g.gyro.x);
  Serial.print(", Y: ");
  Serial.print(g.gyro.y);
  Serial.print(", Z: ");
  Serial.print(g.gyro.z);
  Serial.println(" rad/s");

  Serial.print("Temperature: ");
  Serial.print(temp.temperature);
  Serial.println(" degC"); */
};