// Generated by gencpp from file cruiser_msgs/moveDistance.msg
// DO NOT EDIT!


#ifndef CRUISER_MSGS_MESSAGE_MOVEDISTANCE_H
#define CRUISER_MSGS_MESSAGE_MOVEDISTANCE_H

#include <ros/service_traits.h>


#include <cruiser_msgs/moveDistanceRequest.h>
#include <cruiser_msgs/moveDistanceResponse.h>


namespace cruiser_msgs
{

struct moveDistance
{

typedef moveDistanceRequest Request;
typedef moveDistanceResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct moveDistance
} // namespace cruiser_msgs


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::cruiser_msgs::moveDistance > {
  static const char* value()
  {
    return "2138d7d6c1b896d7258bf22cf4d740bb";
  }

  static const char* value(const ::cruiser_msgs::moveDistance&) { return value(); }
};

template<>
struct DataType< ::cruiser_msgs::moveDistance > {
  static const char* value()
  {
    return "cruiser_msgs/moveDistance";
  }

  static const char* value(const ::cruiser_msgs::moveDistance&) { return value(); }
};


// service_traits::MD5Sum< ::cruiser_msgs::moveDistanceRequest> should match 
// service_traits::MD5Sum< ::cruiser_msgs::moveDistance > 
template<>
struct MD5Sum< ::cruiser_msgs::moveDistanceRequest>
{
  static const char* value()
  {
    return MD5Sum< ::cruiser_msgs::moveDistance >::value();
  }
  static const char* value(const ::cruiser_msgs::moveDistanceRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::cruiser_msgs::moveDistanceRequest> should match 
// service_traits::DataType< ::cruiser_msgs::moveDistance > 
template<>
struct DataType< ::cruiser_msgs::moveDistanceRequest>
{
  static const char* value()
  {
    return DataType< ::cruiser_msgs::moveDistance >::value();
  }
  static const char* value(const ::cruiser_msgs::moveDistanceRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::cruiser_msgs::moveDistanceResponse> should match 
// service_traits::MD5Sum< ::cruiser_msgs::moveDistance > 
template<>
struct MD5Sum< ::cruiser_msgs::moveDistanceResponse>
{
  static const char* value()
  {
    return MD5Sum< ::cruiser_msgs::moveDistance >::value();
  }
  static const char* value(const ::cruiser_msgs::moveDistanceResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::cruiser_msgs::moveDistanceResponse> should match 
// service_traits::DataType< ::cruiser_msgs::moveDistance > 
template<>
struct DataType< ::cruiser_msgs::moveDistanceResponse>
{
  static const char* value()
  {
    return DataType< ::cruiser_msgs::moveDistance >::value();
  }
  static const char* value(const ::cruiser_msgs::moveDistanceResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // CRUISER_MSGS_MESSAGE_MOVEDISTANCE_H
