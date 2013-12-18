/* Auto-generated by genmsg_cpp for file /projects/ros/ros_ws/hoverTracker/msg/Tag.msg */
#ifndef HOVERTRACKER_MESSAGE_TAG_H
#define HOVERTRACKER_MESSAGE_TAG_H
#include <string>
#include <vector>
#include <map>
#include <ostream>
#include "ros/serialization.h"
#include "ros/builtin_message_traits.h"
#include "ros/message_operations.h"
#include "ros/time.h"

#include "ros/macros.h"

#include "ros/assert.h"


namespace hoverTracker
{
template <class ContainerAllocator>
struct Tag_ {
  typedef Tag_<ContainerAllocator> Type;

  Tag_()
  : id(0)
  , x(0.0)
  , y(0.0)
  , angle(0.0)
  {
  }

  Tag_(const ContainerAllocator& _alloc)
  : id(0)
  , x(0.0)
  , y(0.0)
  , angle(0.0)
  {
  }

  typedef int32_t _id_type;
  int32_t id;

  typedef double _x_type;
  double x;

  typedef double _y_type;
  double y;

  typedef double _angle_type;
  double angle;


  typedef boost::shared_ptr< ::hoverTracker::Tag_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::hoverTracker::Tag_<ContainerAllocator>  const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;
}; // struct Tag
typedef  ::hoverTracker::Tag_<std::allocator<void> > Tag;

typedef boost::shared_ptr< ::hoverTracker::Tag> TagPtr;
typedef boost::shared_ptr< ::hoverTracker::Tag const> TagConstPtr;


template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const  ::hoverTracker::Tag_<ContainerAllocator> & v)
{
  ros::message_operations::Printer< ::hoverTracker::Tag_<ContainerAllocator> >::stream(s, "", v);
  return s;}

} // namespace hoverTracker

namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::hoverTracker::Tag_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::hoverTracker::Tag_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::hoverTracker::Tag_<ContainerAllocator> > {
  static const char* value() 
  {
    return "fcbd8fd23b476a3c1f036ca8502e678f";
  }

  static const char* value(const  ::hoverTracker::Tag_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0xfcbd8fd23b476a3cULL;
  static const uint64_t static_value2 = 0x1f036ca8502e678fULL;
};

template<class ContainerAllocator>
struct DataType< ::hoverTracker::Tag_<ContainerAllocator> > {
  static const char* value() 
  {
    return "hoverTracker/Tag";
  }

  static const char* value(const  ::hoverTracker::Tag_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::hoverTracker::Tag_<ContainerAllocator> > {
  static const char* value() 
  {
    return "int32 id\n\
float64 x\n\
float64 y\n\
float64 angle\n\
\n\
";
  }

  static const char* value(const  ::hoverTracker::Tag_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator> struct IsFixedSize< ::hoverTracker::Tag_<ContainerAllocator> > : public TrueType {};
} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::hoverTracker::Tag_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.id);
    stream.next(m.x);
    stream.next(m.y);
    stream.next(m.angle);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct Tag_
} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::hoverTracker::Tag_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const  ::hoverTracker::Tag_<ContainerAllocator> & v) 
  {
    s << indent << "id: ";
    Printer<int32_t>::stream(s, indent + "  ", v.id);
    s << indent << "x: ";
    Printer<double>::stream(s, indent + "  ", v.x);
    s << indent << "y: ";
    Printer<double>::stream(s, indent + "  ", v.y);
    s << indent << "angle: ";
    Printer<double>::stream(s, indent + "  ", v.angle);
  }
};


} // namespace message_operations
} // namespace ros

#endif // HOVERTRACKER_MESSAGE_TAG_H

