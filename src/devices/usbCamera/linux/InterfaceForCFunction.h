#pragma once

#include <sys/ioctl.h>
#include <sys/mman.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <errno.h>
#include <unistd.h>
#include <fcntl.h>
#include <libudev.h>
#include <linux/media.h>
#include <linux/v4l2-subdev.h>
#include <linux/videodev2.h>

class InterfaceForCFunction
{
    public:
    virtual int open_c(const char* path, int oflag)
    {
        return open(path, oflag);
    }

    virtual int open_c(const char* path, int oflag,mode_t mode)
    {
        return open(path,oflag,mode);
    }   

    virtual struct udev* udev_new_c()
    {
        return udev_new();
    }

    //ioctl for system call in progress
    virtual int xioctl(int fh, int request, void* arg)
    {
        int r;
        do {
            r = ioctl(fh, request, arg);
        } while (-1 == r && EINTR == errno);
        return r;
    }

    virtual int ioctl_c(int fd,int value,struct media_entity_desc *info)
    {
        return ioctl(fd,value,info);
    }

    virtual dev_t makedev_c(int major,int minor)
    {
        return makedev(major,minor);
    }

    virtual struct udev_device * udev_device_new_from_devnum_c(struct udev *udev, char type, dev_t devnum)
    {
        return udev_device_new_from_devnum(udev,type,devnum);
    }

    virtual const char * udev_device_get_devnode_c(struct udev_device *udev_device)
    {
        return udev_device_get_devnode(udev_device);
    }

    virtual struct udev_device * udev_device_unref_c(struct udev_device *udev_device)
    {
        return udev_device_unref(udev_device);
    }

    virtual void *mmap_c (void *addr, size_t len, int prot,int flags, int fd, __off_t offset)
    {
        return mmap(addr,len,prot,flags, fd,offset);
    }

    virtual ~InterfaceForCFunction(){};
};
