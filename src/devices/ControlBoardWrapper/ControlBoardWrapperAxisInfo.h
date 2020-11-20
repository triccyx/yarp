/*
 * Copyright (C) 2006-2020 Istituto Italiano di Tecnologia (IIT)
 * All rights reserved.
 *
 * This software may be modified and distributed under the terms of the
 * BSD-3-Clause license. See the accompanying LICENSE file for details.
 */

#ifndef YARP_DEV_CONTROLBOARDWRAPPER_CONTROLBOARDWRAPPERAXISINFO_H
#define YARP_DEV_CONTROLBOARDWRAPPER_CONTROLBOARDWRAPPERAXISINFO_H

#include <yarp/dev/IAxisInfo.h>

#include "ControlBoardWrapperCommon.h"

class ControlBoardWrapperAxisInfo :
        virtual public ControlBoardWrapperCommon,
        public yarp::dev::IAxisInfo
{
public:
    bool getAxisName(int j, std::string& name) override;
    bool getJointType(int j, yarp::dev::JointTypeEnum& type) override;
};

#endif // YARP_DEV_CONTROLBOARDWRAPPER_CONTROLBOARDWRAPPERAXISINFO_H
