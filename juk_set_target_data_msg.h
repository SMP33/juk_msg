// Generated by gencpp from file juk_msg/juk_set_target_data_msg.msg
// DO NOT EDIT!


#ifndef JUK_MSG_MESSAGE_JUK_SET_TARGET_DATA_MSG_H
#define JUK_MSG_MESSAGE_JUK_SET_TARGET_DATA_MSG_H


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
struct juk_set_target_data_msg_
{
  typedef juk_set_target_data_msg_<ContainerAllocator> Type;

  juk_set_target_data_msg_()
    : system(0)
    , break_distance_mode(0)
    , data_x(0.0)
    , data_y(0.0)
    , data_z(0.0)
    , speed(0.0)
    , acc(0.0)  {
    }
  juk_set_target_data_msg_(const ContainerAllocator& _alloc)
    : system(0)
    , break_distance_mode(0)
    , data_x(0.0)
    , data_y(0.0)
    , data_z(0.0)
    , speed(0.0)
    , acc(0.0)  {
  (void)_alloc;
    }



   typedef uint8_t _system_type;
  _system_type system;

   typedef uint8_t _break_distance_mode_type;
  _break_distance_mode_type break_distance_mode;

   typedef float _data_x_type;
  _data_x_type data_x;

   typedef float _data_y_type;
  _data_y_type data_y;

   typedef float _data_z_type;
  _data_z_type data_z;

   typedef float _speed_type;
  _speed_type speed;

   typedef float _acc_type;
  _acc_type acc;



  enum {
    system_absolut = 1u,
    system_home = 2u,
    system_base = 3u,
    system_offset_from_target = 4u,
    mode_allow_break_distance = 0u,
    mode_not_break_distance = 1u,
  };


  typedef boost::shared_ptr< ::juk_msg::juk_set_target_data_msg_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::juk_msg::juk_set_target_data_msg_<ContainerAllocator> const> ConstPtr;

}; // struct juk_set_target_data_msg_

typedef ::juk_msg::juk_set_target_data_msg_<std::allocator<void> > juk_set_target_data_msg;

typedef boost::shared_ptr< ::juk_msg::juk_set_target_data_msg > juk_set_target_data_msgPtr;
typedef boost::shared_ptr< ::juk_msg::juk_set_target_data_msg const> juk_set_target_data_msgConstPtr;

// constants requiring out of line definition

   

   

   

   

   

   



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::juk_msg::juk_set_target_data_msg_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::juk_msg::juk_set_target_data_msg_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace juk_msg

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'juk_msg': ['/home/ubuntu/catkin_ws/src/juk-msg/msg'], 'std_msgs': ['/opt/ros/melodic/share/std_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::juk_msg::juk_set_target_data_msg_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::juk_msg::juk_set_target_data_msg_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::juk_msg::juk_set_target_data_msg_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::juk_msg::juk_set_target_data_msg_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::juk_msg::juk_set_target_data_msg_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::juk_msg::juk_set_target_data_msg_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::juk_msg::juk_set_target_data_msg_<ContainerAllocator> >
{
  static const char* value()
  {
    return "22040df1170938e3608c616bc77c347c";
  }

  static const char* value(const ::juk_msg::juk_set_target_data_msg_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x22040df1170938e3ULL;
  static const uint64_t static_value2 = 0x608c616bc77c347cULL;
};

template<class ContainerAllocator>
struct DataType< ::juk_msg::juk_set_target_data_msg_<ContainerAllocator> >
{
  static const char* value()
  {
    return "juk_msg/juk_set_target_data_msg";
  }

  static const char* value(const ::juk_msg::juk_set_target_data_msg_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::juk_msg::juk_set_target_data_msg_<ContainerAllocator> >
{
  static const char* value()
  {
    return "uint8 system_absolut = 1\n"
"uint8 system_home = 2\n"
"uint8 system_base = 3\n"
"uint8 system_offset_from_target  = 4\n"
"\n"
"uint8 mode_allow_break_distance = 0\n"
"uint8 mode_not_break_distance = 1\n"
"\n"
"\n"
"uint8 system\n"
"uint8 break_distance_mode\n"
"\n"
"float32 data_x\n"
"float32 data_y\n"
"float32 data_z\n"
"\n"
"float32 speed\n"
"\n"
"float32 acc\n"
;
  }

  static const char* value(const ::juk_msg::juk_set_target_data_msg_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::juk_msg::juk_set_target_data_msg_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.system);
      stream.next(m.break_distance_mode);
      stream.next(m.data_x);
      stream.next(m.data_y);
      stream.next(m.data_z);
      stream.next(m.speed);
      stream.next(m.acc);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct juk_set_target_data_msg_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::juk_msg::juk_set_target_data_msg_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::juk_msg::juk_set_target_data_msg_<ContainerAllocator>& v)
  {
    s << indent << "system: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.system);
    s << indent << "break_distance_mode: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.break_distance_mode);
    s << indent << "data_x: ";
    Printer<float>::stream(s, indent + "  ", v.data_x);
    s << indent << "data_y: ";
    Printer<float>::stream(s, indent + "  ", v.data_y);
    s << indent << "data_z: ";
    Printer<float>::stream(s, indent + "  ", v.data_z);
    s << indent << "speed: ";
    Printer<float>::stream(s, indent + "  ", v.speed);
    s << indent << "acc: ";
    Printer<float>::stream(s, indent + "  ", v.acc);
  }
};

} // namespace message_operations
} // namespace ros

#endif // JUK_MSG_MESSAGE_JUK_SET_TARGET_DATA_MSG_H
