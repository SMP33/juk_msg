// Generated by gencpp from file juk_msg/juk_dji_gps_msg.msg
// DO NOT EDIT!


#ifndef JUK_MSG_MESSAGE_JUK_DJI_GPS_MSG_H
#define JUK_MSG_MESSAGE_JUK_DJI_GPS_MSG_H


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
struct juk_dji_gps_msg_
{
  typedef juk_dji_gps_msg_<ContainerAllocator> Type;

  juk_dji_gps_msg_()
    : lat(0.0)
    , lng(0.0)
    , alt(0.0)
    , vx(0.0)
    , vy(0.0)
    , vz(0.0)
    , course(0.0)
    , satellites(0)
    , quality(0)
    , time()  {
    }
  juk_dji_gps_msg_(const ContainerAllocator& _alloc)
    : lat(0.0)
    , lng(0.0)
    , alt(0.0)
    , vx(0.0)
    , vy(0.0)
    , vz(0.0)
    , course(0.0)
    , satellites(0)
    , quality(0)
    , time()  {
  (void)_alloc;
    }



   typedef float _lat_type;
  _lat_type lat;

   typedef float _lng_type;
  _lng_type lng;

   typedef float _alt_type;
  _alt_type alt;

   typedef float _vx_type;
  _vx_type vx;

   typedef float _vy_type;
  _vy_type vy;

   typedef float _vz_type;
  _vz_type vz;

   typedef float _course_type;
  _course_type course;

   typedef uint8_t _satellites_type;
  _satellites_type satellites;

   typedef uint8_t _quality_type;
  _quality_type quality;

   typedef ros::Time _time_type;
  _time_type time;





  typedef boost::shared_ptr< ::juk_msg::juk_dji_gps_msg_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::juk_msg::juk_dji_gps_msg_<ContainerAllocator> const> ConstPtr;

}; // struct juk_dji_gps_msg_

typedef ::juk_msg::juk_dji_gps_msg_<std::allocator<void> > juk_dji_gps_msg;

typedef boost::shared_ptr< ::juk_msg::juk_dji_gps_msg > juk_dji_gps_msgPtr;
typedef boost::shared_ptr< ::juk_msg::juk_dji_gps_msg const> juk_dji_gps_msgConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::juk_msg::juk_dji_gps_msg_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::juk_msg::juk_dji_gps_msg_<ContainerAllocator> >::stream(s, "", v);
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
struct IsFixedSize< ::juk_msg::juk_dji_gps_msg_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::juk_msg::juk_dji_gps_msg_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::juk_msg::juk_dji_gps_msg_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::juk_msg::juk_dji_gps_msg_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::juk_msg::juk_dji_gps_msg_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::juk_msg::juk_dji_gps_msg_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::juk_msg::juk_dji_gps_msg_<ContainerAllocator> >
{
  static const char* value()
  {
    return "950d0cbc9af0e57ee3f886e182d06a6e";
  }

  static const char* value(const ::juk_msg::juk_dji_gps_msg_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x950d0cbc9af0e57eULL;
  static const uint64_t static_value2 = 0xe3f886e182d06a6eULL;
};

template<class ContainerAllocator>
struct DataType< ::juk_msg::juk_dji_gps_msg_<ContainerAllocator> >
{
  static const char* value()
  {
    return "juk_msg/juk_dji_gps_msg";
  }

  static const char* value(const ::juk_msg::juk_dji_gps_msg_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::juk_msg::juk_dji_gps_msg_<ContainerAllocator> >
{
  static const char* value()
  {
    return "float32 lat	#rads\n"
"float32 lng	#rads\n"
"float32 alt	#meters\n"
"float32 vx	#meters/sec\n"
"float32 vy	#meters/sec\n"
"float32 vz	#meters/sec\n"
"float32 course   #rads\n"
"uint8 satellites\n"
"uint8 quality\n"
"time time\n"
;
  }

  static const char* value(const ::juk_msg::juk_dji_gps_msg_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::juk_msg::juk_dji_gps_msg_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.lat);
      stream.next(m.lng);
      stream.next(m.alt);
      stream.next(m.vx);
      stream.next(m.vy);
      stream.next(m.vz);
      stream.next(m.course);
      stream.next(m.satellites);
      stream.next(m.quality);
      stream.next(m.time);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct juk_dji_gps_msg_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::juk_msg::juk_dji_gps_msg_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::juk_msg::juk_dji_gps_msg_<ContainerAllocator>& v)
  {
    s << indent << "lat: ";
    Printer<float>::stream(s, indent + "  ", v.lat);
    s << indent << "lng: ";
    Printer<float>::stream(s, indent + "  ", v.lng);
    s << indent << "alt: ";
    Printer<float>::stream(s, indent + "  ", v.alt);
    s << indent << "vx: ";
    Printer<float>::stream(s, indent + "  ", v.vx);
    s << indent << "vy: ";
    Printer<float>::stream(s, indent + "  ", v.vy);
    s << indent << "vz: ";
    Printer<float>::stream(s, indent + "  ", v.vz);
    s << indent << "course: ";
    Printer<float>::stream(s, indent + "  ", v.course);
    s << indent << "satellites: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.satellites);
    s << indent << "quality: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.quality);
    s << indent << "time: ";
    Printer<ros::Time>::stream(s, indent + "  ", v.time);
  }
};

} // namespace message_operations
} // namespace ros

#endif // JUK_MSG_MESSAGE_JUK_DJI_GPS_MSG_H