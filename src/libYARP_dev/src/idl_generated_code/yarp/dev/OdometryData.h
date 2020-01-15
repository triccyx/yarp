/*
 * Copyright (C) 2006-2020 Istituto Italiano di Tecnologia (IIT)
 * All rights reserved.
 *
 * This software may be modified and distributed under the terms of the
 * BSD-3-Clause license. See the accompanying LICENSE file for details.
 */

// Autogenerated by Thrift Compiler (0.12.0-yarped)
//
// This is an automatically generated file.
// It could get re-generated if the ALLOW_IDL_GENERATION flag is on.

#ifndef YARP_THRIFT_GENERATOR_STRUCT_ODOMETRYDATA_H
#define YARP_THRIFT_GENERATOR_STRUCT_ODOMETRYDATA_H

#include <yarp/dev/api.h>

#include <yarp/os/Wire.h>
#include <yarp/os/idl/WireTypes.h>

namespace yarp {
namespace dev {

class YARP_dev_API OdometryData :
        public yarp::os::idl::WirePortable
{
public:
    // Fields
    double odom_x;
    double odom_y;
    double odom_theta;
    double base_vel_x;
    double base_vel_y;
    double base_vel_theta;
    double odom_vel_x;
    double odom_vel_y;
    double odom_vel_theta;

    // Default constructor
    OdometryData();

    // Constructor with field values
    OdometryData(const double odom_x,
                 const double odom_y,
                 const double odom_theta,
                 const double base_vel_x,
                 const double base_vel_y,
                 const double base_vel_theta,
                 const double odom_vel_x,
                 const double odom_vel_y,
                 const double odom_vel_theta);

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
    typedef yarp::os::idl::Unwrapped<OdometryData> unwrapped;

    class Editor :
            public yarp::os::Wire,
            public yarp::os::PortWriter
    {
    public:
        // Editor: default constructor
        Editor();

        // Editor: constructor with base class
        Editor(OdometryData& obj);

        // Editor: destructor
        ~Editor() override;

        // Editor: Deleted constructors and operator=
        Editor(const Editor& rhs) = delete;
        Editor(Editor&& rhs) = delete;
        Editor& operator=(const Editor& rhs) = delete;
        Editor& operator=(Editor&& rhs) = delete;

        // Editor: edit
        bool edit(OdometryData& obj, bool dirty = true);

        // Editor: validity check
        bool isValid() const;

        // Editor: state
        OdometryData& state();

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

        // Editor: odom_theta field
        void set_odom_theta(const double odom_theta);
        double get_odom_theta() const;
        virtual bool will_set_odom_theta();
        virtual bool did_set_odom_theta();

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

        // Editor: base_vel_theta field
        void set_base_vel_theta(const double base_vel_theta);
        double get_base_vel_theta() const;
        virtual bool will_set_base_vel_theta();
        virtual bool did_set_base_vel_theta();

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

        // Editor: odom_vel_theta field
        void set_odom_vel_theta(const double odom_vel_theta);
        double get_odom_vel_theta() const;
        virtual bool will_set_odom_vel_theta();
        virtual bool did_set_odom_vel_theta();

        // Editor: clean
        void clean();

        // Editor: read
        bool read(yarp::os::ConnectionReader& connection) override;

        // Editor: write
        bool write(yarp::os::ConnectionWriter& connection) const override;

    private:
        // Editor: state
        OdometryData* obj;
        bool obj_owned;
        int group;

        // Editor: dirty variables
        bool is_dirty;
        bool is_dirty_odom_x;
        bool is_dirty_odom_y;
        bool is_dirty_odom_theta;
        bool is_dirty_base_vel_x;
        bool is_dirty_base_vel_y;
        bool is_dirty_base_vel_theta;
        bool is_dirty_odom_vel_x;
        bool is_dirty_odom_vel_y;
        bool is_dirty_odom_vel_theta;
        int dirty_count;

        // Editor: send if possible
        void communicate();

        // Editor: mark dirty overall
        void mark_dirty();

        // Editor: mark dirty single fields
        void mark_dirty_odom_x();
        void mark_dirty_odom_y();
        void mark_dirty_odom_theta();
        void mark_dirty_base_vel_x();
        void mark_dirty_base_vel_y();
        void mark_dirty_base_vel_theta();
        void mark_dirty_odom_vel_x();
        void mark_dirty_odom_vel_y();
        void mark_dirty_odom_vel_theta();

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

    // read/write odom_theta field
    bool read_odom_theta(yarp::os::idl::WireReader& reader);
    bool write_odom_theta(const yarp::os::idl::WireWriter& writer) const;
    bool nested_read_odom_theta(yarp::os::idl::WireReader& reader);
    bool nested_write_odom_theta(const yarp::os::idl::WireWriter& writer) const;

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

    // read/write base_vel_theta field
    bool read_base_vel_theta(yarp::os::idl::WireReader& reader);
    bool write_base_vel_theta(const yarp::os::idl::WireWriter& writer) const;
    bool nested_read_base_vel_theta(yarp::os::idl::WireReader& reader);
    bool nested_write_base_vel_theta(const yarp::os::idl::WireWriter& writer) const;

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

    // read/write odom_vel_theta field
    bool read_odom_vel_theta(yarp::os::idl::WireReader& reader);
    bool write_odom_vel_theta(const yarp::os::idl::WireWriter& writer) const;
    bool nested_read_odom_vel_theta(yarp::os::idl::WireReader& reader);
    bool nested_write_odom_vel_theta(const yarp::os::idl::WireWriter& writer) const;
};

} // namespace yarp
} // namespace dev

#endif // YARP_THRIFT_GENERATOR_STRUCT_ODOMETRYDATA_H
