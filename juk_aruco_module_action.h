// Generated by gencpp from file juk_msg/juk_aruco_module_action.msg
// DO NOT EDIT!


#ifndef JUK_MSG_MESSAGE_JUK_ARUCO_MODULE_ACTION_H
#define JUK_MSG_MESSAGE_JUK_ARUCO_MODULE_ACTION_H


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
struct juk_aruco_module_action_
{
  typedef juk_aruco_module_action_<ContainerAllocator> Type;

  juk_aruco_module_action_()
    : action(0)
    , id(0)
    , size(0)  {
    }
  juk_aruco_module_action_(const ContainerAllocator& _alloc)
    : action(0)
    , id(0)
    , size(0)  {
  (void)_alloc;
    }



   typedef uint8_t _action_type;
  _action_type action;

   typedef int64_t _id_type;
  _id_type id;

   typedef int64_t _size_type;
  _size_type size;



  enum {
    action_stop = 0u,
    action_start = 1u,
  };


  typedef boost::shared_ptr< ::juk_msg::juk_aruco_module_action_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::juk_msg::juk_aruco_module_action_<ContainerAllocator> const> ConstPtr;

}; // struct juk_aruco_module_action_

typedef ::juk_msg::juk_aruco_module_action_<std::allocator<void> > juk_aruco_module_action;

typedef boost::shared_ptr< ::juk_msg::juk_aruco_module_action > juk_aruco_module_actionPtr;
typedef boost::shared_ptr< ::juk_msg::juk_aruco_module_action const> juk_aruco_module_actionConstPtr;

// constants requiring out of line definition

   

   



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::juk_msg::juk_aruco_module_action_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::juk_msg::juk_aruco_module_action_<ContainerAllocator> >::stream(s, "", v);
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
struct IsFixedSize< ::juk_msg::juk_aruco_module_action_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::juk_msg::juk_aruco_module_action_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::juk_msg::juk_aruco_module_action_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::juk_msg::juk_aruco_module_action_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::juk_msg::juk_aruco_module_action_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::juk_msg::juk_aruco_module_action_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::juk_msg::juk_aruco_module_action_<ContainerAllocator> >
{
  static const char* value()
  {
    return "7341dbbfc88d7840bea01f73d59e4e76";
  }

  static const char* value(const ::juk_msg::juk_aruco_module_action_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x7341dbbfc88d7840ULL;
  static const uint64_t static_value2 = 0xbea01f73d59e4e76ULL;
};

template<class ContainerAllocator>
struct DataType< ::juk_msg::juk_aruco_module_action_<ContainerAllocator> >
{
  static const char* value()
  {
    return "juk_msg/juk_aruco_module_action";
  }

  static const char* value(const ::juk_msg::juk_aruco_module_action_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::juk_msg::juk_aruco_module_action_<ContainerAllocator> >
{
  static const char* value()
  {
    return "uint8 action_stop=0\n\
uint8 action_start=1\n\
\n\
uint8 action\n\
int64 id\n\
int64 size\n\
";
  }

  static const char* value(const ::juk_msg::juk_aruco_module_action_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::juk_msg::juk_aruco_module_action_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.action);
      stream.next(m.id);
      stream.next(m.size);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct juk_aruco_module_action_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::juk_msg::juk_aruco_module_action_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::juk_msg::juk_aruco_module_action_<ContainerAllocator>& v)
  {
    s << indent << "action: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.action);
    s << indent << "id: ";
    Printer<int64_t>::stream(s, indent + "  ", v.id);
    s << indent << "size: ";
    Printer<int64_t>::stream(s, indent + "  ", v.size);
  }
};

} // namespace message_operations
} // namespace ros

#endif // JUK_MSG_MESSAGE_JUK_ARUCO_MODULE_ACTION_H