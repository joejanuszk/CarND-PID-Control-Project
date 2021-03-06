#include "PID.h"

using namespace std;

PID::PID() {}

PID::~PID() {}

void PID::Init(double Kp, double Ki, double Kd) {
  this->Kp = Kp;
  this->Ki = Ki;
  this->Kd = Kd;

  p_error = 0;
  i_error = 0;
  d_error = 0;
}

void PID::UpdateError(double cte) {
  d_error = cte - p_error;
  i_error = cte + i_error;
  p_error = cte;
}

double PID::TotalError() {
  double steer = -((Kp * p_error) + (Ki * i_error) + (Kd * d_error));
  if (steer > 1) {
    return 1;
  }
  if (steer < -1) {
    return -1;
  }
  return steer;
}

