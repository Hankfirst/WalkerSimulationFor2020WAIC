// Generated by gencpp from file servo_ctrl/EcatGetVerResponse.msg
// DO NOT EDIT!


#ifndef SERVO_CTRL_MESSAGE_ECATGETVERRESPONSE_H
#define SERVO_CTRL_MESSAGE_ECATGETVERRESPONSE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace servo_ctrl
{
template <class ContainerAllocator>
struct EcatGetVerResponse_
{
  typedef EcatGetVerResponse_<ContainerAllocator> Type;

  EcatGetVerResponse_()
    : mod(0)
    , version(0)  {
    }
  EcatGetVerResponse_(const ContainerAllocator& _alloc)
    : mod(0)
    , version(0)  {
  (void)_alloc;
    }



   typedef uint32_t _mod_type;
  _mod_type mod;

   typedef uint32_t _version_type;
  _version_type version;





  typedef boost::shared_ptr< ::servo_ctrl::EcatGetVerResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::servo_ctrl::EcatGetVerResponse_<ContainerAllocator> const> ConstPtr;

}; // struct EcatGetVerResponse_

typedef ::servo_ctrl::EcatGetVerResponse_<std::allocator<void> > EcatGetVerResponse;

typedef boost::shared_ptr< ::servo_ctrl::EcatGetVerResponse > EcatGetVerResponsePtr;
typedef boost::shared_ptr< ::servo_ctrl::EcatGetVerResponse const> EcatGetVerResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::servo_ctrl::EcatGetVerResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::servo_ctrl::EcatGetVerResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace servo_ctrl

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::servo_ctrl::EcatGetVerResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::servo_ctrl::EcatGetVerResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::servo_ctrl::EcatGetVerResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::servo_ctrl::EcatGetVerResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::servo_ctrl::EcatGetVerResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::servo_ctrl::EcatGetVerResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::servo_ctrl::EcatGetVerResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "a5d057395e812926839cdfda59135c19";
  }

  static const char* value(const ::servo_ctrl::EcatGetVerResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xa5d057395e812926ULL;
  static const uint64_t static_value2 = 0x839cdfda59135c19ULL;
};

template<class ContainerAllocator>
struct DataType< ::servo_ctrl::EcatGetVerResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "servo_ctrl/EcatGetVerResponse";
  }

  static const char* value(const ::servo_ctrl::EcatGetVerResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::servo_ctrl::EcatGetVerResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "uint32 mod\n\
uint32 version\n\
\n\
";
  }

  static const char* value(const ::servo_ctrl::EcatGetVerResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::servo_ctrl::EcatGetVerResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.mod);
      stream.next(m.version);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct EcatGetVerResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::servo_ctrl::EcatGetVerResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::servo_ctrl::EcatGetVerResponse_<ContainerAllocator>& v)
  {
    s << indent << "mod: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.mod);
    s << indent << "version: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.version);
  }
};

} // namespace message_operations
} // namespace ros

#endif // SERVO_CTRL_MESSAGE_ECATGETVERRESPONSE_H
