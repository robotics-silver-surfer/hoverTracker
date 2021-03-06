/* Auto-generated by genmsg_cpp for file /projects/ros/ros_ws/hoverTracker/msg/TagArray.msg */
#ifndef HOVERTRACKER_MESSAGE_TAGARRAY_H
#define HOVERTRACKER_MESSAGE_TAGARRAY_H
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

#include "std_msgs/Header.h"
#include "hoverTracker/Tag.h"

namespace hoverTracker
{
template <class ContainerAllocator>
struct TagArray_ {
  typedef TagArray_<ContainerAllocator> Type;

  TagArray_()
  : header()
  , size(0)
  , tag()
  {
  }

  TagArray_(const ContainerAllocator& _alloc)
  : header(_alloc)
  , size(0)
  , tag(_alloc)
  {
  }

  typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
   ::std_msgs::Header_<ContainerAllocator>  header;

  typedef int32_t _size_type;
  int32_t size;

  typedef std::vector< ::hoverTracker::Tag_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::hoverTracker::Tag_<ContainerAllocator> >::other >  _tag_type;
  std::vector< ::hoverTracker::Tag_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::hoverTracker::Tag_<ContainerAllocator> >::other >  tag;


  typedef boost::shared_ptr< ::hoverTracker::TagArray_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::hoverTracker::TagArray_<ContainerAllocator>  const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;
}; // struct TagArray
typedef  ::hoverTracker::TagArray_<std::allocator<void> > TagArray;

typedef boost::shared_ptr< ::hoverTracker::TagArray> TagArrayPtr;
typedef boost::shared_ptr< ::hoverTracker::TagArray const> TagArrayConstPtr;


template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const  ::hoverTracker::TagArray_<ContainerAllocator> & v)
{
  ros::message_operations::Printer< ::hoverTracker::TagArray_<ContainerAllocator> >::stream(s, "", v);
  return s;}

} // namespace hoverTracker

namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::hoverTracker::TagArray_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::hoverTracker::TagArray_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::hoverTracker::TagArray_<ContainerAllocator> > {
  static const char* value() 
  {
    return "79630004ec506d031f2a8a076f076e7a";
  }

  static const char* value(const  ::hoverTracker::TagArray_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0x79630004ec506d03ULL;
  static const uint64_t static_value2 = 0x1f2a8a076f076e7aULL;
};

template<class ContainerAllocator>
struct DataType< ::hoverTracker::TagArray_<ContainerAllocator> > {
  static const char* value() 
  {
    return "hoverTracker/TagArray";
  }

  static const char* value(const  ::hoverTracker::TagArray_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::hoverTracker::TagArray_<ContainerAllocator> > {
  static const char* value() 
  {
    return "Header header\n\
int32 size\n\
Tag[] tag\n\
\n\
================================================================================\n\
MSG: std_msgs/Header\n\
# Standard metadata for higher-level stamped data types.\n\
# This is generally used to communicate timestamped data \n\
# in a particular coordinate frame.\n\
# \n\
# sequence ID: consecutively increasing ID \n\
uint32 seq\n\
#Two-integer timestamp that is expressed as:\n\
# * stamp.secs: seconds (stamp_secs) since epoch\n\
# * stamp.nsecs: nanoseconds since stamp_secs\n\
# time-handling sugar is provided by the client library\n\
time stamp\n\
#Frame this data is associated with\n\
# 0: no frame\n\
# 1: global frame\n\
string frame_id\n\
\n\
================================================================================\n\
MSG: hoverTracker/Tag\n\
int32 id\n\
float64 x\n\
float64 y\n\
float64 angle\n\
\n\
";
  }

  static const char* value(const  ::hoverTracker::TagArray_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator> struct HasHeader< ::hoverTracker::TagArray_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct HasHeader< const ::hoverTracker::TagArray_<ContainerAllocator> > : public TrueType {};
} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::hoverTracker::TagArray_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.header);
    stream.next(m.size);
    stream.next(m.tag);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct TagArray_
} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::hoverTracker::TagArray_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const  ::hoverTracker::TagArray_<ContainerAllocator> & v) 
  {
    s << indent << "header: ";
s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "size: ";
    Printer<int32_t>::stream(s, indent + "  ", v.size);
    s << indent << "tag[]" << std::endl;
    for (size_t i = 0; i < v.tag.size(); ++i)
    {
      s << indent << "  tag[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::hoverTracker::Tag_<ContainerAllocator> >::stream(s, indent + "    ", v.tag[i]);
    }
  }
};


} // namespace message_operations
} // namespace ros

#endif // HOVERTRACKER_MESSAGE_TAGARRAY_H

