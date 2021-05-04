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

#ifndef YARP_THRIFT_GENERATOR_STRUCT_JOINTDATA_H
#define YARP_THRIFT_GENERATOR_STRUCT_JOINTDATA_H

#include <yarp/dev/api.h>

#include <yarp/os/Wire.h>
#include <yarp/os/idl/WireTypes.h>
#include <yarp/sig/Vector.h>

namespace yarp {
namespace dev {
namespace impl {

class YARP_dev_API jointData :
        public yarp::os::idl::WirePortable
{
public:
    // Fields
    yarp::sig::VectorOf<double> jointPosition;
    bool jointPosition_isValid;
    yarp::sig::VectorOf<double> jointVelocity;
    bool jointVelocity_isValid;
    yarp::sig::VectorOf<double> jointAcceleration;
    bool jointAcceleration_isValid;
    yarp::sig::VectorOf<double> motorPosition;
    bool motorPosition_isValid;
    yarp::sig::VectorOf<double> motorVelocity;
    bool motorVelocity_isValid;
    yarp::sig::VectorOf<double> motorAcceleration;
    bool motorAcceleration_isValid;
    yarp::sig::VectorOf<double> torque;
    bool torque_isValid;
    yarp::sig::VectorOf<double> pwmDutycycle;
    bool pwmDutycycle_isValid;
    yarp::sig::VectorOf<double> current;
    bool current_isValid;
    yarp::sig::VectorOf<int> controlMode;
    bool controlMode_isValid;
    yarp::sig::VectorOf<int> interactionMode;
    bool interactionMode_isValid;

    // Default constructor
    jointData();

    // Constructor with field values
    jointData(const yarp::sig::VectorOf<double>& jointPosition,
              const bool jointPosition_isValid,
              const yarp::sig::VectorOf<double>& jointVelocity,
              const bool jointVelocity_isValid,
              const yarp::sig::VectorOf<double>& jointAcceleration,
              const bool jointAcceleration_isValid,
              const yarp::sig::VectorOf<double>& motorPosition,
              const bool motorPosition_isValid,
              const yarp::sig::VectorOf<double>& motorVelocity,
              const bool motorVelocity_isValid,
              const yarp::sig::VectorOf<double>& motorAcceleration,
              const bool motorAcceleration_isValid,
              const yarp::sig::VectorOf<double>& torque,
              const bool torque_isValid,
              const yarp::sig::VectorOf<double>& pwmDutycycle,
              const bool pwmDutycycle_isValid,
              const yarp::sig::VectorOf<double>& current,
              const bool current_isValid,
              const yarp::sig::VectorOf<int>& controlMode,
              const bool controlMode_isValid,
              const yarp::sig::VectorOf<int>& interactionMode,
              const bool interactionMode_isValid);

    // Read structure on a Wire
    bool read(yarp::os::idl::WireReader& reader) override;

    // Read structure on a Connection
    bool read(yarp::os::ConnectionReader& connection) override;

    // Write structure on a Wire
    bool write(const yarp::os::idl::WireWriter& writer) const override;

    // Write structure on a Connection
    bool write(yarp::os::ConnectionWriter& connection) const override;

    // Convert to a printable string
    std::string toString() const;

    // If you want to serialize this class without nesting, use this helper
    typedef yarp::os::idl::Unwrapped<jointData> unwrapped;

    class Editor :
            public yarp::os::Wire,
            public yarp::os::PortWriter
    {
    public:
        // Editor: default constructor
        Editor();

        // Editor: constructor with base class
        Editor(jointData& obj);

        // Editor: destructor
        ~Editor() override;

        // Editor: Deleted constructors and operator=
        Editor(const Editor& rhs) = delete;
        Editor(Editor&& rhs) = delete;
        Editor& operator=(const Editor& rhs) = delete;
        Editor& operator=(Editor&& rhs) = delete;

        // Editor: edit
        bool edit(jointData& obj, bool dirty = true);

        // Editor: validity check
        bool isValid() const;

        // Editor: state
        jointData& state();

        // Editor: start editing
        void start_editing();

#ifndef YARP_NO_DEPRECATED // Since YARP 3.2
        YARP_DEPRECATED_MSG("Use start_editing() instead")
        void begin()
        {
            start_editing();
        }
#endif // YARP_NO_DEPRECATED

        // Editor: stop editing
        void stop_editing();

#ifndef YARP_NO_DEPRECATED // Since YARP 3.2
        YARP_DEPRECATED_MSG("Use stop_editing() instead")
        void end()
        {
            stop_editing();
        }
#endif // YARP_NO_DEPRECATED

        // Editor: jointPosition field
        void set_jointPosition(const yarp::sig::VectorOf<double>& jointPosition);
        const yarp::sig::VectorOf<double>& get_jointPosition() const;
        virtual bool will_set_jointPosition();
        virtual bool did_set_jointPosition();

        // Editor: jointPosition_isValid field
        void set_jointPosition_isValid(const bool jointPosition_isValid);
        bool get_jointPosition_isValid() const;
        virtual bool will_set_jointPosition_isValid();
        virtual bool did_set_jointPosition_isValid();

        // Editor: jointVelocity field
        void set_jointVelocity(const yarp::sig::VectorOf<double>& jointVelocity);
        const yarp::sig::VectorOf<double>& get_jointVelocity() const;
        virtual bool will_set_jointVelocity();
        virtual bool did_set_jointVelocity();

        // Editor: jointVelocity_isValid field
        void set_jointVelocity_isValid(const bool jointVelocity_isValid);
        bool get_jointVelocity_isValid() const;
        virtual bool will_set_jointVelocity_isValid();
        virtual bool did_set_jointVelocity_isValid();

        // Editor: jointAcceleration field
        void set_jointAcceleration(const yarp::sig::VectorOf<double>& jointAcceleration);
        const yarp::sig::VectorOf<double>& get_jointAcceleration() const;
        virtual bool will_set_jointAcceleration();
        virtual bool did_set_jointAcceleration();

        // Editor: jointAcceleration_isValid field
        void set_jointAcceleration_isValid(const bool jointAcceleration_isValid);
        bool get_jointAcceleration_isValid() const;
        virtual bool will_set_jointAcceleration_isValid();
        virtual bool did_set_jointAcceleration_isValid();

        // Editor: motorPosition field
        void set_motorPosition(const yarp::sig::VectorOf<double>& motorPosition);
        const yarp::sig::VectorOf<double>& get_motorPosition() const;
        virtual bool will_set_motorPosition();
        virtual bool did_set_motorPosition();

        // Editor: motorPosition_isValid field
        void set_motorPosition_isValid(const bool motorPosition_isValid);
        bool get_motorPosition_isValid() const;
        virtual bool will_set_motorPosition_isValid();
        virtual bool did_set_motorPosition_isValid();

        // Editor: motorVelocity field
        void set_motorVelocity(const yarp::sig::VectorOf<double>& motorVelocity);
        const yarp::sig::VectorOf<double>& get_motorVelocity() const;
        virtual bool will_set_motorVelocity();
        virtual bool did_set_motorVelocity();

        // Editor: motorVelocity_isValid field
        void set_motorVelocity_isValid(const bool motorVelocity_isValid);
        bool get_motorVelocity_isValid() const;
        virtual bool will_set_motorVelocity_isValid();
        virtual bool did_set_motorVelocity_isValid();

        // Editor: motorAcceleration field
        void set_motorAcceleration(const yarp::sig::VectorOf<double>& motorAcceleration);
        const yarp::sig::VectorOf<double>& get_motorAcceleration() const;
        virtual bool will_set_motorAcceleration();
        virtual bool did_set_motorAcceleration();

        // Editor: motorAcceleration_isValid field
        void set_motorAcceleration_isValid(const bool motorAcceleration_isValid);
        bool get_motorAcceleration_isValid() const;
        virtual bool will_set_motorAcceleration_isValid();
        virtual bool did_set_motorAcceleration_isValid();

        // Editor: torque field
        void set_torque(const yarp::sig::VectorOf<double>& torque);
        const yarp::sig::VectorOf<double>& get_torque() const;
        virtual bool will_set_torque();
        virtual bool did_set_torque();

        // Editor: torque_isValid field
        void set_torque_isValid(const bool torque_isValid);
        bool get_torque_isValid() const;
        virtual bool will_set_torque_isValid();
        virtual bool did_set_torque_isValid();

        // Editor: pwmDutycycle field
        void set_pwmDutycycle(const yarp::sig::VectorOf<double>& pwmDutycycle);
        const yarp::sig::VectorOf<double>& get_pwmDutycycle() const;
        virtual bool will_set_pwmDutycycle();
        virtual bool did_set_pwmDutycycle();

        // Editor: pwmDutycycle_isValid field
        void set_pwmDutycycle_isValid(const bool pwmDutycycle_isValid);
        bool get_pwmDutycycle_isValid() const;
        virtual bool will_set_pwmDutycycle_isValid();
        virtual bool did_set_pwmDutycycle_isValid();

        // Editor: current field
        void set_current(const yarp::sig::VectorOf<double>& current);
        const yarp::sig::VectorOf<double>& get_current() const;
        virtual bool will_set_current();
        virtual bool did_set_current();

        // Editor: current_isValid field
        void set_current_isValid(const bool current_isValid);
        bool get_current_isValid() const;
        virtual bool will_set_current_isValid();
        virtual bool did_set_current_isValid();

        // Editor: controlMode field
        void set_controlMode(const yarp::sig::VectorOf<int>& controlMode);
        const yarp::sig::VectorOf<int>& get_controlMode() const;
        virtual bool will_set_controlMode();
        virtual bool did_set_controlMode();

        // Editor: controlMode_isValid field
        void set_controlMode_isValid(const bool controlMode_isValid);
        bool get_controlMode_isValid() const;
        virtual bool will_set_controlMode_isValid();
        virtual bool did_set_controlMode_isValid();

        // Editor: interactionMode field
        void set_interactionMode(const yarp::sig::VectorOf<int>& interactionMode);
        const yarp::sig::VectorOf<int>& get_interactionMode() const;
        virtual bool will_set_interactionMode();
        virtual bool did_set_interactionMode();

        // Editor: interactionMode_isValid field
        void set_interactionMode_isValid(const bool interactionMode_isValid);
        bool get_interactionMode_isValid() const;
        virtual bool will_set_interactionMode_isValid();
        virtual bool did_set_interactionMode_isValid();

        // Editor: clean
        void clean();

        // Editor: read
        bool read(yarp::os::ConnectionReader& connection) override;

        // Editor: write
        bool write(yarp::os::ConnectionWriter& connection) const override;

    private:
        // Editor: state
        jointData* obj;
        bool obj_owned;
        int group;

        // Editor: dirty variables
        bool is_dirty;
        bool is_dirty_jointPosition;
        bool is_dirty_jointPosition_isValid;
        bool is_dirty_jointVelocity;
        bool is_dirty_jointVelocity_isValid;
        bool is_dirty_jointAcceleration;
        bool is_dirty_jointAcceleration_isValid;
        bool is_dirty_motorPosition;
        bool is_dirty_motorPosition_isValid;
        bool is_dirty_motorVelocity;
        bool is_dirty_motorVelocity_isValid;
        bool is_dirty_motorAcceleration;
        bool is_dirty_motorAcceleration_isValid;
        bool is_dirty_torque;
        bool is_dirty_torque_isValid;
        bool is_dirty_pwmDutycycle;
        bool is_dirty_pwmDutycycle_isValid;
        bool is_dirty_current;
        bool is_dirty_current_isValid;
        bool is_dirty_controlMode;
        bool is_dirty_controlMode_isValid;
        bool is_dirty_interactionMode;
        bool is_dirty_interactionMode_isValid;
        int dirty_count;

        // Editor: send if possible
        void communicate();

        // Editor: mark dirty overall
        void mark_dirty();

        // Editor: mark dirty single fields
        void mark_dirty_jointPosition();
        void mark_dirty_jointPosition_isValid();
        void mark_dirty_jointVelocity();
        void mark_dirty_jointVelocity_isValid();
        void mark_dirty_jointAcceleration();
        void mark_dirty_jointAcceleration_isValid();
        void mark_dirty_motorPosition();
        void mark_dirty_motorPosition_isValid();
        void mark_dirty_motorVelocity();
        void mark_dirty_motorVelocity_isValid();
        void mark_dirty_motorAcceleration();
        void mark_dirty_motorAcceleration_isValid();
        void mark_dirty_torque();
        void mark_dirty_torque_isValid();
        void mark_dirty_pwmDutycycle();
        void mark_dirty_pwmDutycycle_isValid();
        void mark_dirty_current();
        void mark_dirty_current_isValid();
        void mark_dirty_controlMode();
        void mark_dirty_controlMode_isValid();
        void mark_dirty_interactionMode();
        void mark_dirty_interactionMode_isValid();

        // Editor: dirty_flags
        void dirty_flags(bool flag);
    };

private:
    // read/write jointPosition field
    bool read_jointPosition(yarp::os::idl::WireReader& reader);
    bool write_jointPosition(const yarp::os::idl::WireWriter& writer) const;
    bool nested_read_jointPosition(yarp::os::idl::WireReader& reader);
    bool nested_write_jointPosition(const yarp::os::idl::WireWriter& writer) const;

    // read/write jointPosition_isValid field
    bool read_jointPosition_isValid(yarp::os::idl::WireReader& reader);
    bool write_jointPosition_isValid(const yarp::os::idl::WireWriter& writer) const;
    bool nested_read_jointPosition_isValid(yarp::os::idl::WireReader& reader);
    bool nested_write_jointPosition_isValid(const yarp::os::idl::WireWriter& writer) const;

    // read/write jointVelocity field
    bool read_jointVelocity(yarp::os::idl::WireReader& reader);
    bool write_jointVelocity(const yarp::os::idl::WireWriter& writer) const;
    bool nested_read_jointVelocity(yarp::os::idl::WireReader& reader);
    bool nested_write_jointVelocity(const yarp::os::idl::WireWriter& writer) const;

    // read/write jointVelocity_isValid field
    bool read_jointVelocity_isValid(yarp::os::idl::WireReader& reader);
    bool write_jointVelocity_isValid(const yarp::os::idl::WireWriter& writer) const;
    bool nested_read_jointVelocity_isValid(yarp::os::idl::WireReader& reader);
    bool nested_write_jointVelocity_isValid(const yarp::os::idl::WireWriter& writer) const;

    // read/write jointAcceleration field
    bool read_jointAcceleration(yarp::os::idl::WireReader& reader);
    bool write_jointAcceleration(const yarp::os::idl::WireWriter& writer) const;
    bool nested_read_jointAcceleration(yarp::os::idl::WireReader& reader);
    bool nested_write_jointAcceleration(const yarp::os::idl::WireWriter& writer) const;

    // read/write jointAcceleration_isValid field
    bool read_jointAcceleration_isValid(yarp::os::idl::WireReader& reader);
    bool write_jointAcceleration_isValid(const yarp::os::idl::WireWriter& writer) const;
    bool nested_read_jointAcceleration_isValid(yarp::os::idl::WireReader& reader);
    bool nested_write_jointAcceleration_isValid(const yarp::os::idl::WireWriter& writer) const;

    // read/write motorPosition field
    bool read_motorPosition(yarp::os::idl::WireReader& reader);
    bool write_motorPosition(const yarp::os::idl::WireWriter& writer) const;
    bool nested_read_motorPosition(yarp::os::idl::WireReader& reader);
    bool nested_write_motorPosition(const yarp::os::idl::WireWriter& writer) const;

    // read/write motorPosition_isValid field
    bool read_motorPosition_isValid(yarp::os::idl::WireReader& reader);
    bool write_motorPosition_isValid(const yarp::os::idl::WireWriter& writer) const;
    bool nested_read_motorPosition_isValid(yarp::os::idl::WireReader& reader);
    bool nested_write_motorPosition_isValid(const yarp::os::idl::WireWriter& writer) const;

    // read/write motorVelocity field
    bool read_motorVelocity(yarp::os::idl::WireReader& reader);
    bool write_motorVelocity(const yarp::os::idl::WireWriter& writer) const;
    bool nested_read_motorVelocity(yarp::os::idl::WireReader& reader);
    bool nested_write_motorVelocity(const yarp::os::idl::WireWriter& writer) const;

    // read/write motorVelocity_isValid field
    bool read_motorVelocity_isValid(yarp::os::idl::WireReader& reader);
    bool write_motorVelocity_isValid(const yarp::os::idl::WireWriter& writer) const;
    bool nested_read_motorVelocity_isValid(yarp::os::idl::WireReader& reader);
    bool nested_write_motorVelocity_isValid(const yarp::os::idl::WireWriter& writer) const;

    // read/write motorAcceleration field
    bool read_motorAcceleration(yarp::os::idl::WireReader& reader);
    bool write_motorAcceleration(const yarp::os::idl::WireWriter& writer) const;
    bool nested_read_motorAcceleration(yarp::os::idl::WireReader& reader);
    bool nested_write_motorAcceleration(const yarp::os::idl::WireWriter& writer) const;

    // read/write motorAcceleration_isValid field
    bool read_motorAcceleration_isValid(yarp::os::idl::WireReader& reader);
    bool write_motorAcceleration_isValid(const yarp::os::idl::WireWriter& writer) const;
    bool nested_read_motorAcceleration_isValid(yarp::os::idl::WireReader& reader);
    bool nested_write_motorAcceleration_isValid(const yarp::os::idl::WireWriter& writer) const;

    // read/write torque field
    bool read_torque(yarp::os::idl::WireReader& reader);
    bool write_torque(const yarp::os::idl::WireWriter& writer) const;
    bool nested_read_torque(yarp::os::idl::WireReader& reader);
    bool nested_write_torque(const yarp::os::idl::WireWriter& writer) const;

    // read/write torque_isValid field
    bool read_torque_isValid(yarp::os::idl::WireReader& reader);
    bool write_torque_isValid(const yarp::os::idl::WireWriter& writer) const;
    bool nested_read_torque_isValid(yarp::os::idl::WireReader& reader);
    bool nested_write_torque_isValid(const yarp::os::idl::WireWriter& writer) const;

    // read/write pwmDutycycle field
    bool read_pwmDutycycle(yarp::os::idl::WireReader& reader);
    bool write_pwmDutycycle(const yarp::os::idl::WireWriter& writer) const;
    bool nested_read_pwmDutycycle(yarp::os::idl::WireReader& reader);
    bool nested_write_pwmDutycycle(const yarp::os::idl::WireWriter& writer) const;

    // read/write pwmDutycycle_isValid field
    bool read_pwmDutycycle_isValid(yarp::os::idl::WireReader& reader);
    bool write_pwmDutycycle_isValid(const yarp::os::idl::WireWriter& writer) const;
    bool nested_read_pwmDutycycle_isValid(yarp::os::idl::WireReader& reader);
    bool nested_write_pwmDutycycle_isValid(const yarp::os::idl::WireWriter& writer) const;

    // read/write current field
    bool read_current(yarp::os::idl::WireReader& reader);
    bool write_current(const yarp::os::idl::WireWriter& writer) const;
    bool nested_read_current(yarp::os::idl::WireReader& reader);
    bool nested_write_current(const yarp::os::idl::WireWriter& writer) const;

    // read/write current_isValid field
    bool read_current_isValid(yarp::os::idl::WireReader& reader);
    bool write_current_isValid(const yarp::os::idl::WireWriter& writer) const;
    bool nested_read_current_isValid(yarp::os::idl::WireReader& reader);
    bool nested_write_current_isValid(const yarp::os::idl::WireWriter& writer) const;

    // read/write controlMode field
    bool read_controlMode(yarp::os::idl::WireReader& reader);
    bool write_controlMode(const yarp::os::idl::WireWriter& writer) const;
    bool nested_read_controlMode(yarp::os::idl::WireReader& reader);
    bool nested_write_controlMode(const yarp::os::idl::WireWriter& writer) const;

    // read/write controlMode_isValid field
    bool read_controlMode_isValid(yarp::os::idl::WireReader& reader);
    bool write_controlMode_isValid(const yarp::os::idl::WireWriter& writer) const;
    bool nested_read_controlMode_isValid(yarp::os::idl::WireReader& reader);
    bool nested_write_controlMode_isValid(const yarp::os::idl::WireWriter& writer) const;

    // read/write interactionMode field
    bool read_interactionMode(yarp::os::idl::WireReader& reader);
    bool write_interactionMode(const yarp::os::idl::WireWriter& writer) const;
    bool nested_read_interactionMode(yarp::os::idl::WireReader& reader);
    bool nested_write_interactionMode(const yarp::os::idl::WireWriter& writer) const;

    // read/write interactionMode_isValid field
    bool read_interactionMode_isValid(yarp::os::idl::WireReader& reader);
    bool write_interactionMode_isValid(const yarp::os::idl::WireWriter& writer) const;
    bool nested_read_interactionMode_isValid(yarp::os::idl::WireReader& reader);
    bool nested_write_interactionMode_isValid(const yarp::os::idl::WireWriter& writer) const;
};

} // namespace yarp
} // namespace dev
} // namespace impl

#endif // YARP_THRIFT_GENERATOR_STRUCT_JOINTDATA_H
