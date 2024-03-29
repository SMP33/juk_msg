// Generated by gencpp from file juk_msg/juk_dji_device_status_msg.msg
// DO NOT EDIT!


#ifndef JUK_MSG_MESSAGE_JUK_DJI_DEVICE_STATUS_MSG_H
#define JUK_MSG_MESSAGE_JUK_DJI_DEVICE_STATUS_MSG_H


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
struct juk_dji_device_status_msg_
{
  typedef juk_dji_device_status_msg_<ContainerAllocator> Type;

  juk_dji_device_status_msg_()
    : GEAR_UP(0)
    , GEAR_DOWN(0)
    , authority(0)
    , armed(0)
    , gear(0)
    , voltage(0)
    , changeTime()  {
    }
  juk_dji_device_status_msg_(const ContainerAllocator& _alloc)
    : GEAR_UP(0)
    , GEAR_DOWN(0)
    , authority(0)
    , armed(0)
    , gear(0)
    , voltage(0)
    , changeTime()  {
  (void)_alloc;
    }



   typedef uint8_t _GEAR_UP_type;
  _GEAR_UP_type GEAR_UP;

   typedef uint8_t _GEAR_DOWN_type;
  _GEAR_DOWN_type GEAR_DOWN;

   typedef uint8_t _authority_type;
  _authority_type authority;

   typedef uint8_t _armed_type;
  _armed_type armed;

   typedef uint8_t _gear_type;
  _gear_type gear;

   typedef uint16_t _voltage_type;
  _voltage_type voltage;

   typedef ros::Time _changeTime_type;
  _changeTime_type changeTime;



  enum {
    CONTROL_BY_RC = 1u,
    CONTROL_BY_MOBILE = 2u,
    CONTROL_BY_SDK = 3u,
    ARMED = 1u,
    DISARMED = 0u,
    ON_GROUND_STANDBY = 1u,
    TAKEOFF = 2u,
    IN_AIR_STANDBY = 3u,
    LANDING = 4u,
    FINISHING_LANDING = 5u,
  };


  typedef boost::shared_ptr< ::juk_msg::juk_dji_device_status_msg_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::juk_msg::juk_dji_device_status_msg_<ContainerAllocator> const> ConstPtr;

}; // struct juk_dji_device_status_msg_

typedef ::juk_msg::juk_dji_device_status_msg_<std::allocator<void> > juk_dji_device_status_msg;

typedef boost::shared_ptr< ::juk_msg::juk_dji_device_status_msg > juk_dji_device_status_msgPtr;
typedef boost::shared_ptr< ::juk_msg::juk_dji_device_status_msg const> juk_dji_device_status_msgConstPtr;

// constants requiring out of line definition

   

   

   

   

   

   

   

   

   

   



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::juk_msg::juk_dji_device_status_msg_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::juk_msg::juk_dji_device_status_msg_<ContainerAllocator> >::stream(s, "", v);
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
struct IsFixedSize< ::juk_msg::juk_dji_device_status_msg_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::juk_msg::juk_dji_device_status_msg_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::juk_msg::juk_dji_device_status_msg_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::juk_msg::juk_dji_device_status_msg_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::juk_msg::juk_dji_device_status_msg_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::juk_msg::juk_dji_device_status_msg_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::juk_msg::juk_dji_device_status_msg_<ContainerAllocator> >
{
  static const char* value()
  {
    return "58c1cac6523b0200d80e49c2b266a5bc";
  }

  static const char* value(const ::juk_msg::juk_dji_device_status_msg_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x58c1cac6523b0200ULL;
  static const uint64_t static_value2 = 0xd80e49c2b266a5bcULL;
};

template<class ContainerAllocator>
struct DataType< ::juk_msg::juk_dji_device_status_msg_<ContainerAllocator> >
{
  static const char* value()
  {
    return "juk_msg/juk_dji_device_status_msg";
  }

  static const char* value(const ::juk_msg::juk_dji_device_status_msg_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::juk_msg::juk_dji_device_status_msg_<ContainerAllocator> >
{
  static const char* value()
  {
    return "uint8 CONTROL_BY_RC = 1\n\
uint8 CONTROL_BY_MOBILE = 2\n\
uint8 CONTROL_BY_SDK = 3\n\
\n\
uint8 ARMED = 1\n\
uint8 DISARMED = 0\n\
\n\
uint8 GEAR_UP\n\
uint8 GEAR_DOWN\n\
\n\
uint8 ON_GROUND_STANDBY = 1\n\
uint8 TAKEOFF = 2\n\
uint8 IN_AIR_STANDBY = 3\n\
uint8 LANDING = 4\n\
uint8 FINISHING_LANDING = 5\n\
\n\
uint8 authority\n\
uint8 armed\n\
uint8 gear\n\
uint16 voltage	#volt*100\n\
time changeTime	 #time of last authority change\n\
";
  }

  static const char* value(const ::juk_msg::juk_dji_device_status_msg_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::juk_msg::juk_dji_device_status_msg_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.GEAR_UP);
      stream.next(m.GEAR_DOWN);
      stream.next(m.authority);
      stream.next(m.armed);
      stream.next(m.gear);
      stream.next(m.voltage);
      stream.next(m.changeTime);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct juk_dji_device_status_msg_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::juk_msg::juk_dji_device_status_msg_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::juk_msg::juk_dji_device_status_msg_<ContainerAllocator>& v)
  {
    s << indent << "GEAR_UP: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.GEAR_UP);
    s << indent << "GEAR_DOWN: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.GEAR_DOWN);
    s << indent << "authority: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.authority);
    s << indent << "armed: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.armed);
    s << indent << "gear: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.gear);
    s << indent << "voltage: ";
    Printer<uint16_t>::stream(s, indent + "  ", v.voltage);
    s << indent << "changeTime: ";
    Printer<ros::Time>::stream(s, indent + "  ", v.changeTime);
  }
};

} // namespace message_operations
} // namespace ros

#endif // JUK_MSG_MESSAGE_JUK_DJI_DEVICE_STATUS_MSG_H
