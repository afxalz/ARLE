// Generated by gencpp from file motor_management/command_mgrRequest.msg
// DO NOT EDIT!


#ifndef MOTOR_MANAGEMENT_MESSAGE_COMMAND_MGRREQUEST_H
#define MOTOR_MANAGEMENT_MESSAGE_COMMAND_MGRREQUEST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace motor_management
{
template <class ContainerAllocator>
struct command_mgrRequest_
{
  typedef command_mgrRequest_<ContainerAllocator> Type;

  command_mgrRequest_()
    : command()  {
    }
  command_mgrRequest_(const ContainerAllocator& _alloc)
    : command(_alloc)  {
  (void)_alloc;
    }



   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _command_type;
  _command_type command;





  typedef boost::shared_ptr< ::motor_management::command_mgrRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::motor_management::command_mgrRequest_<ContainerAllocator> const> ConstPtr;

}; // struct command_mgrRequest_

typedef ::motor_management::command_mgrRequest_<std::allocator<void> > command_mgrRequest;

typedef boost::shared_ptr< ::motor_management::command_mgrRequest > command_mgrRequestPtr;
typedef boost::shared_ptr< ::motor_management::command_mgrRequest const> command_mgrRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::motor_management::command_mgrRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::motor_management::command_mgrRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace motor_management

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'motor_management': ['/home/ubuntu/arle_ws/src/motor_management/msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::motor_management::command_mgrRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::motor_management::command_mgrRequest_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::motor_management::command_mgrRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::motor_management::command_mgrRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::motor_management::command_mgrRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::motor_management::command_mgrRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::motor_management::command_mgrRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "cba5e21e920a3a2b7b375cb65b64cdea";
  }

  static const char* value(const ::motor_management::command_mgrRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xcba5e21e920a3a2bULL;
  static const uint64_t static_value2 = 0x7b375cb65b64cdeaULL;
};

template<class ContainerAllocator>
struct DataType< ::motor_management::command_mgrRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "motor_management/command_mgrRequest";
  }

  static const char* value(const ::motor_management::command_mgrRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::motor_management::command_mgrRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "string command\n\
";
  }

  static const char* value(const ::motor_management::command_mgrRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::motor_management::command_mgrRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.command);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct command_mgrRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::motor_management::command_mgrRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::motor_management::command_mgrRequest_<ContainerAllocator>& v)
  {
    s << indent << "command: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.command);
  }
};

} // namespace message_operations
} // namespace ros

#endif // MOTOR_MANAGEMENT_MESSAGE_COMMAND_MGRREQUEST_H
