/*
 *  Copyright (c) 2025, Northeastern University
 *  All rights reserved.
 *
 *  Author: Jibo Wang
 *
 *  Redistribution and use in source and binary forms, with or without
 *  modification, are permitted provided that the following conditions
 *  are met:
 *
 *   * Redistributions of source code must retain the above copyright
 *     notice, this list of conditions and the following disclaimer.
 *   * Redistributions in binary form must reproduce the above
 *     copyright notice, this list of conditions and the following
 *     disclaimer in the documentation and/or other materials provided
 *     with the distribution.
 *   * Neither the name of the Northeastern University nor the names of its
 *     contributors may be used to endorse or promote products derived
 *     from this software without specific prior written permission.
 *
 *  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 *  "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 *  LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS
 *  FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE
 *  COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,
 *  INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING,
 *  BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
 *  LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
 *  CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 *  LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN
 *  ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 *  POSSIBILITY OF SUCH DAMAGE.
 */


#include <Eigen/Eigen>
#include <amf_localization/encoder.h>

/// ************* Preconfiguration
#define PI (3.14159265358)

class WheelEncoderProcess
{
public:
EIGEN_MAKE_ALIGNED_OPERATOR_NEW

WheelEncoderProcess();
~WheelEncoderProcess();

void set_wheel_encoder_frequency(const int frequency);
void set_wheel_encoder_pulse_resolution(const double pulse_resolution);
void Process(const MeasureGroup &meas, Eigen::Vector3d &wheel_encoder_delta_distance_in_WHEEL, Eigen::Vector3d &wheel_encoder_latest_vel_in_WHEEL);

Eigen::Vector3d delta_distance_in_WHEEL;
Eigen::Vector3d latest_vel_in_WHEEL;

private:
int wheel_encoder_frequency_;
double wheel_encoder_pulse_resolution_;

};
