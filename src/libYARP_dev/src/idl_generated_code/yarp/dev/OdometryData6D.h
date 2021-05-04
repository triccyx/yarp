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

#ifndef YARP_THRIFT_GENERATOR_STRUCT_ODOMETRYDATA6D_H
#define YARP_THRIFT_GENERATOR_STRUCT_ODOMETRYDATA6D_H

#include <yarp/dev/api.h>

#include <yarp/os/Wire.h>
#include <yarp/os/idl/WireTypes.h>

namespace yarp {
namespace dev {

class YARP_dev_API OdometryData6D :
        public yarp::os::idl::WirePortable
{
public:
    // Fields
    /**
     * position of the robot [m], expressed in the world reference frame
     */
    double odom_x;
    /**
     * position of the robot [m], expressed in the world reference frame
     */
    double odom_y;
    /**
     * position of the robot [m], expressed in the world reference frame
     */
    double odom_z;
    /**
     * orientation the robot [deg], expressed in the world reference frame
     */
    double odom_roll;
    /**
     * orientation the robot [deg], expressed in the world reference frame
     */
    double odom_pitch;
    /**
     * orientation the robot [deg], expressed in the world reference frame
     */
    double odom_yaw;
    /**
     * velocity of the robot [m/s] expressed in the robot reference frame
     */
    double base_vel_x;
    /**
     * velocity of the robot [m/s] expressed in the robot reference frame
     */
    double base_vel_y;
    /**
     * velocity of the robot [m/s] expressed in the robot reference frame
     */
    double base_vel_z;
    /**
     * angular velocity of the robot [deg/s] expressed in the robot reference frame
     */
    double base_vel_roll;
    /**
     * angular velocity of the robot [deg/s] expressed in the robot reference frame
     */
    double base_vel_pitch;
    /**
     * angular velocity of the robot [deg/s] expressed in the robot reference frame
     */
    double base_vel_yaw;
    /**
     * velocity of the robot [m/s] expressed in the world reference frame
     */
    double odom_vel_x;
    /**
     * velocity of the robot [m/s] expressed in the world reference frame
     */
    double odom_vel_y;
    /**
     * velocity of the robot [m/s] expressed in the world reference frame
     */
    double odom_vel_z;
    /**
     * angular velocity of the robot [deg/s] expressed in the world reference frame
     */
    double odom_vel_roll;
    /**
     * angular velocity of the robot [deg/s] expressed in the world reference frame
     */
    double odom_vel_pitch;
    /**
     * angular velocity of the robot [deg/s] expressed in the world reference frame
     */
    double odom_vel_yaw;

    // Default constructor
    OdometryData6D();

    // Constructor with field values
    OdometryData6D(const double odom_x,
                   const double odom_y,
                   const double odom_z,
                   const double odom_roll,
                   const double odom_pitch,
                   const double odom_yaw,
                   const double base_vel_x,
                   const double base_vel_y,
                   const double base_vel_z,
                   const double base_vel_roll,
                   const double base_vel_pitch,
                   const double base_vel_yaw,
                   const double odom_vel_x,
                   const double odom_vel_y,
                   const double odom_vel_z,
                   const double odom_vel_roll,
                   const double odom_vel_pitch,
                   const double odom_vel_yaw);

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
    typedef yarp::os::idl::Unwrapped<OdometryData6D> unwrapped;

    class Editor :
            public yarp::os::Wire,
            public yarp::os::PortWriter
    {
    public:
        // Editor: default constructor
        Editor();

        // Editor: constructor with base class
        Editor(OdometryData6D& obj);

        // Editor: destructor
        ~Editor() override;

        // Editor: Deleted constructors and operator=
        Editor(const Editor& rhs) = delete;
        Editor(Editor&& rhs) = delete;
        Editor& operator=(const Editor& rhs) = delete;
        Editor& operator=(Editor&& rhs) = delete;

        // Editor: edit
        bool edit(OdometryData6D& obj, bool dirty = true);

        // Editor: validity check
        bool isValid() const;

        // Editor: state
        OdometryData6D& state();

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

        // Editor: odom_x field
        void set_odom_x(const double odom_x);
        double get_odom_x() const;
        virtual bool will_set_odom_x();
        virtual bool did_set_odom_x();

        // Editor: odom_y field
        void set_odom_y(const double odom_y);
        double get_odom_y() const;
        virtual bool will_set_odom_y();
        virtual bool did_set_odom_y();

        // Editor: odom_z field
        void set_odom_z(const double odom_z);
        double get_odom_z() const;
        virtual bool will_set_odom_z();
        virtual bool did_set_odom_z();

        // Editor: odom_roll field
        void set_odom_roll(const double odom_roll);
        double get_odom_roll() const;
        virtual bool will_set_odom_roll();
        virtual bool did_set_odom_roll();

        // Editor: odom_pitch field
        void set_odom_pitch(const double odom_pitch);
        double get_odom_pitch() const;
        virtual bool will_set_odom_pitch();
        virtual bool did_set_odom_pitch();

        // Editor: odom_yaw field
        void set_odom_yaw(const double odom_yaw);
        double get_odom_yaw() const;
        virtual bool will_set_odom_yaw();
        virtual bool did_set_odom_yaw();

        // Editor: base_vel_x field
        void set_base_vel_x(const double base_vel_x);
        double get_base_vel_x() const;
        virtual bool will_set_base_vel_x();
        virtual bool did_set_base_vel_x();

        // Editor: base_vel_y field
        void set_base_vel_y(const double base_vel_y);
        double get_base_vel_y() const;
        virtual bool will_set_base_vel_y();
        virtual bool did_set_base_vel_y();

        // Editor: base_vel_z field
        void set_base_vel_z(const double base_vel_z);
        double get_base_vel_z() const;
        virtual bool will_set_base_vel_z();
        virtual bool did_set_base_vel_z();

        // Editor: base_vel_roll field
        void set_base_vel_roll(const double base_vel_roll);
        double get_base_vel_roll() const;
        virtual bool will_set_base_vel_roll();
        virtual bool did_set_base_vel_roll();

        // Editor: base_vel_pitch field
        void set_base_vel_pitch(const double base_vel_pitch);
        double get_base_vel_pitch() const;
        virtual bool will_set_base_vel_pitch();
        virtual bool did_set_base_vel_pitch();

        // Editor: base_vel_yaw field
        void set_base_vel_yaw(const double base_vel_yaw);
        double get_base_vel_yaw() const;
        virtual bool will_set_base_vel_yaw();
        virtual bool did_set_base_vel_yaw();

        // Editor: odom_vel_x field
        void set_odom_vel_x(const double odom_vel_x);
        double get_odom_vel_x() const;
        virtual bool will_set_odom_vel_x();
        virtual bool did_set_odom_vel_x();

        // Editor: odom_vel_y field
        void set_odom_vel_y(const double odom_vel_y);
        double get_odom_vel_y() const;
        virtual bool will_set_odom_vel_y();
        virtual bool did_set_odom_vel_y();

        // Editor: odom_vel_z field
        void set_odom_vel_z(const double odom_vel_z);
        double get_odom_vel_z() const;
        virtual bool will_set_odom_vel_z();
        virtual bool did_set_odom_vel_z();

        // Editor: odom_vel_roll field
        void set_odom_vel_roll(const double odom_vel_roll);
        double get_odom_vel_roll() const;
        virtual bool will_set_odom_vel_roll();
        virtual bool did_set_odom_vel_roll();

        // Editor: odom_vel_pitch field
        void set_odom_vel_pitch(const double odom_vel_pitch);
        double get_odom_vel_pitch() const;
        virtual bool will_set_odom_vel_pitch();
        virtual bool did_set_odom_vel_pitch();

        // Editor: odom_vel_yaw field
        void set_odom_vel_yaw(const double odom_vel_yaw);
        double get_odom_vel_yaw() const;
        virtual bool will_set_odom_vel_yaw();
        virtual bool did_set_odom_vel_yaw();

        // Editor: clean
        void clean();

        // Editor: read
        bool read(yarp::os::ConnectionReader& connection) override;

        // Editor: write
        bool write(yarp::os::ConnectionWriter& connection) const override;

    private:
        // Editor: state
        OdometryData6D* obj;
        bool obj_owned;
        int group;

        // Editor: dirty variables
        bool is_dirty;
        bool is_dirty_odom_x;
        bool is_dirty_odom_y;
        bool is_dirty_odom_z;
        bool is_dirty_odom_roll;
        bool is_dirty_odom_pitch;
        bool is_dirty_odom_yaw;
        bool is_dirty_base_vel_x;
        bool is_dirty_base_vel_y;
        bool is_dirty_base_vel_z;
        bool is_dirty_base_vel_roll;
        bool is_dirty_base_vel_pitch;
        bool is_dirty_base_vel_yaw;
        bool is_dirty_odom_vel_x;
        bool is_dirty_odom_vel_y;
        bool is_dirty_odom_vel_z;
        bool is_dirty_odom_vel_roll;
        bool is_dirty_odom_vel_pitch;
        bool is_dirty_odom_vel_yaw;
        int dirty_count;

        // Editor: send if possible
        void communicate();

        // Editor: mark dirty overall
        void mark_dirty();

        // Editor: mark dirty single fields
        void mark_dirty_odom_x();
        void mark_dirty_odom_y();
        void mark_dirty_odom_z();
        void mark_dirty_odom_roll();
        void mark_dirty_odom_pitch();
        void mark_dirty_odom_yaw();
        void mark_dirty_base_vel_x();
        void mark_dirty_base_vel_y();
        void mark_dirty_base_vel_z();
        void mark_dirty_base_vel_roll();
        void mark_dirty_base_vel_pitch();
        void mark_dirty_base_vel_yaw();
        void mark_dirty_odom_vel_x();
        void mark_dirty_odom_vel_y();
        void mark_dirty_odom_vel_z();
        void mark_dirty_odom_vel_roll();
        void mark_dirty_odom_vel_pitch();
        void mark_dirty_odom_vel_yaw();

        // Editor: dirty_flags
        void dirty_flags(bool flag);
    };

private:
    // read/write odom_x field
    bool read_odom_x(yarp::os::idl::WireReader& reader);
    bool write_odom_x(const yarp::os::idl::WireWriter& writer) const;
    bool nested_read_odom_x(yarp::os::idl::WireReader& reader);
    bool nested_write_odom_x(const yarp::os::idl::WireWriter& writer) const;

    // read/write odom_y field
    bool read_odom_y(yarp::os::idl::WireReader& reader);
    bool write_odom_y(const yarp::os::idl::WireWriter& writer) const;
    bool nested_read_odom_y(yarp::os::idl::WireReader& reader);
    bool nested_write_odom_y(const yarp::os::idl::WireWriter& writer) const;

    // read/write odom_z field
    bool read_odom_z(yarp::os::idl::WireReader& reader);
    bool write_odom_z(const yarp::os::idl::WireWriter& writer) const;
    bool nested_read_odom_z(yarp::os::idl::WireReader& reader);
    bool nested_write_odom_z(const yarp::os::idl::WireWriter& writer) const;

    // read/write odom_roll field
    bool read_odom_roll(yarp::os::idl::WireReader& reader);
    bool write_odom_roll(const yarp::os::idl::WireWriter& writer) const;
    bool nested_read_odom_roll(yarp::os::idl::WireReader& reader);
    bool nested_write_odom_roll(const yarp::os::idl::WireWriter& writer) const;

    // read/write odom_pitch field
    bool read_odom_pitch(yarp::os::idl::WireReader& reader);
    bool write_odom_pitch(const yarp::os::idl::WireWriter& writer) const;
    bool nested_read_odom_pitch(yarp::os::idl::WireReader& reader);
    bool nested_write_odom_pitch(const yarp::os::idl::WireWriter& writer) const;

    // read/write odom_yaw field
    bool read_odom_yaw(yarp::os::idl::WireReader& reader);
    bool write_odom_yaw(const yarp::os::idl::WireWriter& writer) const;
    bool nested_read_odom_yaw(yarp::os::idl::WireReader& reader);
    bool nested_write_odom_yaw(const yarp::os::idl::WireWriter& writer) const;

    // read/write base_vel_x field
    bool read_base_vel_x(yarp::os::idl::WireReader& reader);
    bool write_base_vel_x(const yarp::os::idl::WireWriter& writer) const;
    bool nested_read_base_vel_x(yarp::os::idl::WireReader& reader);
    bool nested_write_base_vel_x(const yarp::os::idl::WireWriter& writer) const;

    // read/write base_vel_y field
    bool read_base_vel_y(yarp::os::idl::WireReader& reader);
    bool write_base_vel_y(const yarp::os::idl::WireWriter& writer) const;
    bool nested_read_base_vel_y(yarp::os::idl::WireReader& reader);
    bool nested_write_base_vel_y(const yarp::os::idl::WireWriter& writer) const;

    // read/write base_vel_z field
    bool read_base_vel_z(yarp::os::idl::WireReader& reader);
    bool write_base_vel_z(const yarp::os::idl::WireWriter& writer) const;
    bool nested_read_base_vel_z(yarp::os::idl::WireReader& reader);
    bool nested_write_base_vel_z(const yarp::os::idl::WireWriter& writer) const;

    // read/write base_vel_roll field
    bool read_base_vel_roll(yarp::os::idl::WireReader& reader);
    bool write_base_vel_roll(const yarp::os::idl::WireWriter& writer) const;
    bool nested_read_base_vel_roll(yarp::os::idl::WireReader& reader);
    bool nested_write_base_vel_roll(const yarp::os::idl::WireWriter& writer) const;

    // read/write base_vel_pitch field
    bool read_base_vel_pitch(yarp::os::idl::WireReader& reader);
    bool write_base_vel_pitch(const yarp::os::idl::WireWriter& writer) const;
    bool nested_read_base_vel_pitch(yarp::os::idl::WireReader& reader);
    bool nested_write_base_vel_pitch(const yarp::os::idl::WireWriter& writer) const;

    // read/write base_vel_yaw field
    bool read_base_vel_yaw(yarp::os::idl::WireReader& reader);
    bool write_base_vel_yaw(const yarp::os::idl::WireWriter& writer) const;
    bool nested_read_base_vel_yaw(yarp::os::idl::WireReader& reader);
    bool nested_write_base_vel_yaw(const yarp::os::idl::WireWriter& writer) const;

    // read/write odom_vel_x field
    bool read_odom_vel_x(yarp::os::idl::WireReader& reader);
    bool write_odom_vel_x(const yarp::os::idl::WireWriter& writer) const;
    bool nested_read_odom_vel_x(yarp::os::idl::WireReader& reader);
    bool nested_write_odom_vel_x(const yarp::os::idl::WireWriter& writer) const;

    // read/write odom_vel_y field
    bool read_odom_vel_y(yarp::os::idl::WireReader& reader);
    bool write_odom_vel_y(const yarp::os::idl::WireWriter& writer) const;
    bool nested_read_odom_vel_y(yarp::os::idl::WireReader& reader);
    bool nested_write_odom_vel_y(const yarp::os::idl::WireWriter& writer) const;

    // read/write odom_vel_z field
    bool read_odom_vel_z(yarp::os::idl::WireReader& reader);
    bool write_odom_vel_z(const yarp::os::idl::WireWriter& writer) const;
    bool nested_read_odom_vel_z(yarp::os::idl::WireReader& reader);
    bool nested_write_odom_vel_z(const yarp::os::idl::WireWriter& writer) const;

    // read/write odom_vel_roll field
    bool read_odom_vel_roll(yarp::os::idl::WireReader& reader);
    bool write_odom_vel_roll(const yarp::os::idl::WireWriter& writer) const;
    bool nested_read_odom_vel_roll(yarp::os::idl::WireReader& reader);
    bool nested_write_odom_vel_roll(const yarp::os::idl::WireWriter& writer) const;

    // read/write odom_vel_pitch field
    bool read_odom_vel_pitch(yarp::os::idl::WireReader& reader);
    bool write_odom_vel_pitch(const yarp::os::idl::WireWriter& writer) const;
    bool nested_read_odom_vel_pitch(yarp::os::idl::WireReader& reader);
    bool nested_write_odom_vel_pitch(const yarp::os::idl::WireWriter& writer) const;

    // read/write odom_vel_yaw field
    bool read_odom_vel_yaw(yarp::os::idl::WireReader& reader);
    bool write_odom_vel_yaw(const yarp::os::idl::WireWriter& writer) const;
    bool nested_read_odom_vel_yaw(yarp::os::idl::WireReader& reader);
    bool nested_write_odom_vel_yaw(const yarp::os::idl::WireWriter& writer) const;
};

} // namespace yarp
} // namespace dev

#endif // YARP_THRIFT_GENERATOR_STRUCT_ODOMETRYDATA6D_H
