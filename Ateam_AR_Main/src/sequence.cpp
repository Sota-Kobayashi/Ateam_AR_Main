/*
 * sequence.cpp
 *
 *  Created on: 2019/09/02
 *      Author: User
 */

#include "sequence.hpp"

void Sequence::runSequence()
{
	auto_running_.deadReckoningUpdate();

	static uint32_t now_sequence_num_ = 0;
	switch(now_sequence_num_)
	{
	case 0:
		auto_running_.dead_reckoning_.setPos(-600.0f, 1800.0f, M_PI);
		if(!start_switch_.readNowState())
		{
			++now_sequence_num_;
		}
		break;

	case 1:
		if(auto_running_.pointControl(0))
		{
			++now_sequence_num_;
		}
		break;

	case 2:
		if(auto_running_.pointControl(1))
		{
			++now_sequence_num_;
		}
		break;

	case 3:
		if(auto_running_.pointControl(2))
		{
			++now_sequence_num_;
		}
		break;
	}
}
