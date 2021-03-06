// Generated by gencpp from file cruiser_msgs/cruiser_common_status.msg
// DO NOT EDIT!


#ifndef CRUISER_MSGS_MESSAGE_CRUISER_COMMON_STATUS_H
#define CRUISER_MSGS_MESSAGE_CRUISER_COMMON_STATUS_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace cruiser_msgs
{
template <class ContainerAllocator>
struct cruiser_common_status_
{
  typedef cruiser_common_status_<ContainerAllocator> Type;

  cruiser_common_status_()
    : status(0)
    , value(0)
    , data(0)  {
    }
  cruiser_common_status_(const ContainerAllocator& _alloc)
    : status(0)
    , value(0)
    , data(0)  {
  (void)_alloc;
    }



   typedef int8_t _status_type;
  _status_type status;

   typedef int32_t _value_type;
  _value_type value;

   typedef int32_t _data_type;
  _data_type data;





  typedef boost::shared_ptr< ::cruiser_msgs::cruiser_common_status_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::cruiser_msgs::cruiser_common_status_<ContainerAllocator> const> ConstPtr;

}; // struct cruiser_common_status_

typedef ::cruiser_msgs::cruiser_common_status_<std::allocator<void> > cruiser_common_status;

typedef boost::shared_ptr< ::cruiser_msgs::cruiser_common_status > cruiser_common_statusPtr;
typedef boost::shared_ptr< ::cruiser_msgs::cruiser_common_status const> cruiser_common_statusConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::cruiser_msgs::cruiser_common_status_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::cruiser_msgs::cruiser_common_status_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::cruiser_msgs::cruiser_common_status_<ContainerAllocator1> & lhs, const ::cruiser_msgs::cruiser_common_status_<ContainerAllocator2> & rhs)
{
  return lhs.status == rhs.status &&
    lhs.value == rhs.value &&
    lhs.data == rhs.data;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::cruiser_msgs::cruiser_common_status_<ContainerAllocator1> & lhs, const ::cruiser_msgs::cruiser_common_status_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace cruiser_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::cruiser_msgs::cruiser_common_status_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::cruiser_msgs::cruiser_common_status_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::cruiser_msgs::cruiser_common_status_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::cruiser_msgs::cruiser_common_status_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::cruiser_msgs::cruiser_common_status_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::cruiser_msgs::cruiser_common_status_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::cruiser_msgs::cruiser_common_status_<ContainerAllocator> >
{
  static const char* value()
  {
    return "f972a7a5f08896dc553e3bc6f867370f";
  }

  static const char* value(const ::cruiser_msgs::cruiser_common_status_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xf972a7a5f08896dcULL;
  static const uint64_t static_value2 = 0x553e3bc6f867370fULL;
};

template<class ContainerAllocator>
struct DataType< ::cruiser_msgs::cruiser_common_status_<ContainerAllocator> >
{
  static const char* value()
  {
    return "cruiser_msgs/cruiser_common_status";
  }

  static const char* value(const ::cruiser_msgs::cruiser_common_status_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::cruiser_msgs::cruiser_common_status_<ContainerAllocator> >
{
  static const char* value()
  {
    return "#topic obstacleDetect\n"
"byte status\n"
"int32 value\n"
"int32 data\n"
;
  }

  static const char* value(const ::cruiser_msgs::cruiser_common_status_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::cruiser_msgs::cruiser_common_status_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.status);
      stream.next(m.value);
      stream.next(m.data);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct cruiser_common_status_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::cruiser_msgs::cruiser_common_status_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::cruiser_msgs::cruiser_common_status_<ContainerAllocator>& v)
  {
    s << indent << "status: ";
    Printer<int8_t>::stream(s, indent + "  ", v.status);
    s << indent << "value: ";
    Printer<int32_t>::stream(s, indent + "  ", v.value);
    s << indent << "data: ";
    Printer<int32_t>::stream(s, indent + "  ", v.data);
  }
};

} // namespace message_operations
} // namespace ros

#endif // CRUISER_MSGS_MESSAGE_CRUISER_COMMON_STATUS_H
