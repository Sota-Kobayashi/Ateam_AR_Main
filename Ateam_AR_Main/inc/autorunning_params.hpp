/*
 * autorunning_params.hpp
 *
 *  Created on: 2019/10/10
 *      Author: SotaKobayashi
 */

#ifndef AUTORUNNING_PARAMS_HPP_
#define AUTORUNNING_PARAMS_HPP_

#include "auto_running.hpp"

constexpr MotorDriver::SendParamsType MOTOR1_PARAMS	= {-0.10f, -0.004f, -0.0068f, 5000, 8192};//{-0.30f, -0.014f, -0.0068f, 5000, 8192};
constexpr MotorDriver::SendParamsType MOTOR2_PARAMS	= {-0.10f, -0.004f, -0.0068f, 5000, 8192};//{-0.30f, -0.014f, -0.0068f, 5000, 8192};
constexpr MotorDriver::SendParamsType MOTOR3_PARAMS	= {-0.10f, -0.004f, -0.0068f, 5000, 8192};//{-0.30f, -0.014f, -0.0068f, 5000, 8192};
constexpr MotorDriver::SendParamsType MOTOR4_PARAMS	= {-0.10f, -0.004f, -0.0068f, 5000, 8192};//{-0.30f, -0.014f, -0.0068f, 5000, 8192};
constexpr float WHEEL_DIA							= 101.6f;
constexpr bool	WHEEL_DIR							= false;
constexpr float	THETA_OFFSET						= -0.75f * M_PI;

constexpr int32_t 			AUTO_RUNNING_ERROR			= 150;
constexpr int32_t			AUTO_RUNNING_ERROR_ENDPOINT	= 10;
constexpr float 			ROLLING_SPEED				= 100.0f;
constexpr pid_gain<float> 	ROLLING_GAIN				= {-180.0f, -0.00f, -0.31f};
constexpr pid_gain<float> 	RUNNING_GAIN				= {47.75f, 1.6f, 0.16f};

constexpr uint8_t	MECHA_CONTROLER_ADDRESS	= 0x01;

constexpr OmniWheel4s::OmniWheel4s_ParamStruct OMNI_PARAMS =
{
	MOTOR1_PARAMS,
	MOTOR2_PARAMS,
	MOTOR3_PARAMS,
	MOTOR4_PARAMS,
	WHEEL_DIA,
	WHEEL_DIR,
	THETA_OFFSET
};

constexpr AutoRunning::AutoRunningParamsStruct AUTO_RUNNING_PARAMS =
{
	OMNI_PARAMS,
	AUTO_RUNNING_ERROR,
	AUTO_RUNNING_ERROR_ENDPOINT,
	ROLLING_SPEED,
	ROLLING_GAIN,
	RUNNING_GAIN
};

#endif /* AUTORUNNING_PARAMS_HPP_ */
