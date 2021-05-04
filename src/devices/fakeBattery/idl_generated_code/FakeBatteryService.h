/*
 * Copyright (C) 2006-2021 Istituto Italiano di Tecnologia (IIT)
 * All rights reserved.
 *
 * This software may be modified and distributed under the terms of the
 * BSD-3-Clause license. See the accompanying LICENSE file for details.
 */

// Autogenerated by Thrift Compiler (0.14.1-yarped)
//
// This is an automatically generated file.
// It could get re-generated if the ALLOW_IDL_GENERATION flag is on.

#ifndef YARP_THRIFT_GENERATOR_SERVICE_FAKEBATTERYSERVICE_H
#define YARP_THRIFT_GENERATOR_SERVICE_FAKEBATTERYSERVICE_H

#include <yarp/os/Wire.h>
#include <yarp/os/idl/WireTypes.h>

class FakeBatteryService :
        public yarp::os::Wire
{
public:
    // Constructor
    FakeBatteryService();

    virtual void setBatteryVoltage(const double voltage);

    virtual void setBatteryCurrent(const double current);

    virtual void setBatteryCharge(const double charge);

    virtual void setBatteryInfo(const std::string& info);

    virtual void setBatteryTemperature(const double temperature);

    virtual double getBatteryVoltage();

    virtual double getBatteryCurrent();

    virtual double getBatteryCharge();

    virtual std::string getBatteryStatus();

    virtual std::string getBatteryInfo();

    virtual double getBatteryTemperature();

    // help method
    virtual std::vector<std::string> help(const std::string& functionName = "--all");

    // read from ConnectionReader
    bool read(yarp::os::ConnectionReader& connection) override;
};

#endif // YARP_THRIFT_GENERATOR_SERVICE_FAKEBATTERYSERVICE_H
