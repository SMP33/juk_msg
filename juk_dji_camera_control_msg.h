// Generated by gencpp from file juk_msg/juk_dji_camera_control_msg.msg
// DO NOT EDIT!


#ifndef JUK_MSG_MESSAGE_JUK_DJI_CAMERA_CONTROL_MSG_H
#define JUK_MSG_MESSAGE_JUK_DJI_CAMERA_CONTROL_MSG_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace juk_msg
{
template <class ContainerAllocator>
struct juk_dji_camera_control_msg_
{
  typedef juk_dji_camera_control_msg_<ContainerAllocator> Type;

  juk_dji_camera_control_msg_()
    : yaw(0)
    , pitch(0)
    , roll(0)
    , action(0)  {
    }
  juk_dji_camera_control_msg_(const ContainerAllocator& _alloc)
    : yaw(0)
    , pitch(0)
    , roll(0)
    , action(0)  {
  (void)_alloc;
    }



   typedef int16_t _yaw_type;
  _yaw_type yaw;

   typedef int16_t _pitch_type;
  _pitch_type pitch;

   typedef int16_t _roll_type;
  _roll_type roll;

   typedef uint8_t _action_type;
  _action_type action;



  enum {
    take_photo = 1u,
    start_video = 2u,
    stop_video = 3u,
  };


  typedef boost::shared_ptr< ::juk_msg::juk_dji_camera_control_msg_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::juk_msg::juk_dji_camera_control_msg_<ContainerAllocator> const> ConstPtr;

}; // struct juk_dji_camera_control_msg_

typedef ::juk_msg::juk_dji_camera_control_msg_<std::allocator<void> > juk_dji_camera_control_msg;

typedef boost::shared_ptr< ::juk_msg::juk_dji_camera_control_msg > juk_dji_camera_control_msgPtr;
typedef boost::shared_ptr< ::juk_msg::juk_dji_camera_control_msg const> juk_dji_camera_control_msgConstPtr;

// constants requiring out of line definition

   

   

   



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::juk_msg::juk_dji_camera_control_msg_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::juk_msg::juk_dji_camera_control_msg_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace juk_msg

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'juk_msg': ['/home/pi/catkin_ws/src/juk_msg/msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::juk_msg::juk_dji_camera_control_msg_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::juk_msg::juk_dji_camera_control_msg_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::juk_msg::juk_dji_camera_control_msg_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::juk_msg::juk_dji_camera_control_msg_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::juk_msg::juk_dji_camera_control_msg_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::juk_msg::juk_dji_camera_control_msg_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::juk_msg::juk_dji_camera_control_msg_<ContainerAllocator> >
{
  static const char* value()
  {
    return "c007578b4ce5a26db08d18185f07a628";
  }

  static const char* value(const ::juk_msg::juk_dji_camera_control_msg_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xc007578b4ce5a26dULL;
  static const uint64_t static_value2 = 0xb08d18185f07a628ULL;
};

template<class ContainerAllocator>
struct DataType< ::juk_msg::juk_dji_camera_control_msg_<ContainerAllocator> >
{
  static const char* value()
  {
    return "juk_msg/juk_dji_camera_control_msg";
  }

  static const char* value(const ::juk_msg::juk_dji_camera_control_msg_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::juk_msg::juk_dji_camera_control_msg_<ContainerAllocator> >
{
  static const char* value()
  {
    return "uint8 take_photo=1\n\
uint8 start_video=2\n\
uint8 stop_video=3\n\
\n\
int16 yaw      #deg * 0.1\n\
int16 pitch    #deg * 0.1\n\
int16 roll       #deg * 0.1\n\
\n\
uint8 action\n\
";
  }

  static const char* value(const ::juk_msg::juk_dji_camera_control_msg_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::juk_msg::juk_dji_camera_control_msg_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.yaw);
      stream.next(m.pitch);
      stream.next(m.roll);
      stream.next(m.action);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct juk_dji_camera_control_msg_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::juk_msg::juk_dji_camera_control_msg_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::juk_msg::juk_dji_camera_control_msg_<ContainerAllocator>& v)
  {
    s << indent << "yaw: ";
    Printer<int16_t>::stream(s, indent + "  ", v.yaw);
    s << indent << "pitch: ";
    Printer<int16_t>::stream(s, indent + "  ", v.pitch);
    s << indent << "roll: ";
    Printer<int16_t>::stream(s, indent + "  ", v.roll);
    s << indent << "action: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.action);
  }
};

} // namespace message_operations
} // namespace ros

#endif // JUK_MSG_MESSAGE_JUK_DJI_CAMERA_CONTROL_MSG_H
