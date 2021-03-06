/*
 * FindDirection.h
 *
 *  Created on: Jul 16, 2015
 *      Author: colman
 */

#ifndef FINDDIRECTION_H_
#define FINDDIRECTION_H_
#include <iostream>
#include "Behavior.h"
#include "../RobotAPI/Robot.h"
#include "../CoreLib/Cell.h"
#include "../Utils/PositionUtils.h"
#include "../RobotAPI/Helper.h"

using namespace CoreLib;
class FindDirection: public Behavior
{
	//Location* _to;
	double _degToWaypoint;
public:

	FindDirection(Robot* robot);
	bool startCond();
	bool stopCond();
	void action();
	virtual ~FindDirection();
};

#endif /* FINDDIRECTION_H_ */
