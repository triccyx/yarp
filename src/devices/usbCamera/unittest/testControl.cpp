//# @author Luca Tricerri <luca.tricerri@iit.it>
#include "../linux/UltraPythonCameraHelper.h"
#include "CApiMock.h"
#include "gmock/gmock.h"
#include "gtest/gtest.h"

#include <chrono>
#include <thread>

using namespace std::chrono_literals;
using namespace testing;

TEST(UltraPython, setGainAbsolute_value1_ok) {
  // given
  InterfaceFoCApiMock *interface = new InterfaceFoCApiMock();
  UltraPythonCameraHelper helper(interface);

  struct v4l2_control control1;
  control1.id = V4L2_CID_GAIN;
  control1.value = 1;
  struct v4l2_control control2;
  control2.id = 0x009e0903;
  control2.value = 1;
  EXPECT_CALL(*interface, ioctl_query_c(_, _, _))
      .WillOnce(Return(1))
      .WillOnce(Return(1))
      .WillOnce(Return(1))
      .WillOnce(Return(1));
  EXPECT_CALL(*interface, ioctl_control_c(_, VIDIOC_S_CTRL, control1)).Times(2);
  EXPECT_CALL(*interface, ioctl_control_c(_, VIDIOC_S_CTRL, control2)).Times(2);

  // when
  helper.setControl(V4L2_CID_GAIN, 1, true);

  delete interface;
}

TEST(UltraPython, setGainAbsolute_value2_ok) {
  // given
  InterfaceFoCApiMock *interface = new InterfaceFoCApiMock();
  UltraPythonCameraHelper helper(interface);

  struct v4l2_control control1;
  control1.id = V4L2_CID_GAIN;
  control1.value = 1;
  struct v4l2_control control2;
  control2.id = 0x009e0903;
  control2.value = 2;
  EXPECT_CALL(*interface, ioctl_query_c(_, _, _))
      .WillOnce(Return(1))
      .WillOnce(Return(1))
      .WillOnce(Return(1))
      .WillOnce(Return(1));
  EXPECT_CALL(*interface, ioctl_control_c(_, VIDIOC_S_CTRL, control1)).Times(2);
  EXPECT_CALL(*interface, ioctl_control_c(_, VIDIOC_S_CTRL, control2)).Times(2);

  // when
  bool res = helper.setControl(V4L2_CID_GAIN, 2, true);

  // then
  EXPECT_TRUE(res);

  delete interface;
}

TEST(UltraPython, setGainAbsolute_value11_ok) {
  // given
  InterfaceFoCApiMock *interface = new InterfaceFoCApiMock();
  UltraPythonCameraHelper helper(interface);

  struct v4l2_control control1;
  control1.id = V4L2_CID_GAIN;
  control1.value = 2;
  struct v4l2_control control2;
  control2.id = 0x009e0903;
  control2.value = 7;
  EXPECT_CALL(*interface, ioctl_query_c(_, _, _))
      .WillOnce(Return(1))
      .WillOnce(Return(1))
      .WillOnce(Return(1))
      .WillOnce(Return(1));
  EXPECT_CALL(*interface, ioctl_control_c(_, VIDIOC_S_CTRL, control1)).Times(2);
  EXPECT_CALL(*interface, ioctl_control_c(_, VIDIOC_S_CTRL, control2)).Times(2);

  // when
  bool res = helper.setControl(V4L2_CID_GAIN, 11, true);

  // then
  EXPECT_TRUE(res);

  delete interface;
}

TEST(UltraPython, setGainAbsolute_value12_fail) {
  // given
  InterfaceFoCApiMock *interface = new InterfaceFoCApiMock();
  UltraPythonCameraHelper helper(interface);

  EXPECT_CALL(*interface, ioctl_query_c(_, _, _)).Times(0);
  EXPECT_CALL(*interface, ioctl_control_c(_, VIDIOC_S_CTRL, _)).Times(0);

  // when
  bool res = helper.setControl(V4L2_CID_GAIN, 12, true);

  // then
  EXPECT_FALSE(res);

  delete interface;
}

TEST(UltraPython, setGain_value05_ok) {
 // given
  InterfaceFoCApiMock *interface = new InterfaceFoCApiMock();
  UltraPythonCameraHelper helper(interface);

  struct v4l2_control control1;
  control1.id = V4L2_CID_GAIN;
  control1.value = 2;
  struct v4l2_control control2;
  control2.id = 0x009e0903;
  control2.value = 2;
  EXPECT_CALL(*interface, ioctl_query_c(_, _, _))
      .WillOnce(Return(1))
      .WillOnce(Return(1))
      .WillOnce(Return(1))
      .WillOnce(Return(1));
  EXPECT_CALL(*interface, ioctl_control_c(_, VIDIOC_S_CTRL, control1)).Times(2);
  EXPECT_CALL(*interface, ioctl_control_c(_, VIDIOC_S_CTRL, control2)).Times(2);

  // when
  bool res = helper.setControl(V4L2_CID_GAIN, 0.5, false);

  // then
  EXPECT_TRUE(res);

  delete interface;
}

TEST(UltraPython, setGain_value07_ok) {
 // given
  InterfaceFoCApiMock *interface = new InterfaceFoCApiMock();
  UltraPythonCameraHelper helper(interface);

  struct v4l2_control control1;
  control1.id = V4L2_CID_GAIN;
  control1.value = 2;
  struct v4l2_control control2;
  control2.id = 0x009e0903;
  control2.value = 4;
  EXPECT_CALL(*interface, ioctl_query_c(_, _, _))
      .WillOnce(Return(1))
      .WillOnce(Return(1))
      .WillOnce(Return(1))
      .WillOnce(Return(1));
  EXPECT_CALL(*interface, ioctl_control_c(_, VIDIOC_S_CTRL, control1)).Times(2);
  EXPECT_CALL(*interface, ioctl_control_c(_, VIDIOC_S_CTRL, control2)).Times(2);

  // when
  bool res = helper.setControl(V4L2_CID_GAIN, 0.7, false);

  // then
  EXPECT_TRUE(res);

  delete interface;
}

TEST(UltraPython, setGain_value15_fail) {
  // given
  InterfaceFoCApiMock *interface = new InterfaceFoCApiMock();
  UltraPythonCameraHelper helper(interface);

  EXPECT_CALL(*interface, ioctl_query_c(_, _, _)).Times(0);
  EXPECT_CALL(*interface, ioctl_control_c(_, VIDIOC_S_CTRL, _)).Times(0);

  // when
  bool res = helper.setControl(V4L2_CID_GAIN, 1.5, false);

  // then
  EXPECT_FALSE(res);

  delete interface;
}

TEST(UltraPython, setGain_valuenegative_fail) {
  // given
  InterfaceFoCApiMock *interface = new InterfaceFoCApiMock();
  UltraPythonCameraHelper helper(interface);

  EXPECT_CALL(*interface, ioctl_query_c(_, _, _)).Times(0);
  EXPECT_CALL(*interface, ioctl_control_c(_, VIDIOC_S_CTRL, _)).Times(0);

  // when
  bool res = helper.setControl(V4L2_CID_GAIN,-11, false);

  // then
  EXPECT_FALSE(res);

  delete interface;
}
