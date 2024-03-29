/* Auto-generated by genmsg_cpp for file /home/asfandyar/gnss-master/rtkrcv/msg/Observation.msg */
#ifndef RTKRCV_MESSAGE_OBSERVATION_H
#define RTKRCV_MESSAGE_OBSERVATION_H
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

#include "rtkrcv/ObservationData.h"

namespace rtkrcv
{
template <class ContainerAllocator>
struct Observation_ {
  typedef Observation_<ContainerAllocator> Type;

  Observation_()
  : data()
  {
  }

  Observation_(const ContainerAllocator& _alloc)
  : data(_alloc)
  {
  }

  typedef std::vector< ::rtkrcv::ObservationData_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::rtkrcv::ObservationData_<ContainerAllocator> >::other >  _data_type;
  std::vector< ::rtkrcv::ObservationData_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::rtkrcv::ObservationData_<ContainerAllocator> >::other >  data;


  typedef boost::shared_ptr< ::rtkrcv::Observation_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::rtkrcv::Observation_<ContainerAllocator>  const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;
}; // struct Observation
typedef  ::rtkrcv::Observation_<std::allocator<void> > Observation;

typedef boost::shared_ptr< ::rtkrcv::Observation> ObservationPtr;
typedef boost::shared_ptr< ::rtkrcv::Observation const> ObservationConstPtr;


template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const  ::rtkrcv::Observation_<ContainerAllocator> & v)
{
  ros::message_operations::Printer< ::rtkrcv::Observation_<ContainerAllocator> >::stream(s, "", v);
  return s;}

} // namespace rtkrcv

namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::rtkrcv::Observation_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::rtkrcv::Observation_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::rtkrcv::Observation_<ContainerAllocator> > {
  static const char* value() 
  {
    return "9a7fe03dc1ef1a3bb37c9122c95d97f7";
  }

  static const char* value(const  ::rtkrcv::Observation_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0x9a7fe03dc1ef1a3bULL;
  static const uint64_t static_value2 = 0xb37c9122c95d97f7ULL;
};

template<class ContainerAllocator>
struct DataType< ::rtkrcv::Observation_<ContainerAllocator> > {
  static const char* value() 
  {
    return "rtkrcv/Observation";
  }

  static const char* value(const  ::rtkrcv::Observation_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::rtkrcv::Observation_<ContainerAllocator> > {
  static const char* value() 
  {
    return "# observation data record\n\
\n\
ObservationData[] data          # observation data records\n\
================================================================================\n\
MSG: rtkrcv/ObservationData\n\
 # observation data records\n\
\n\
time time             # receiver sampling time (GPST)\n\
uint8 sat             # satellite\n\
uint8 rcv             # receiver number\n\
uint8[] SNR           # signal strength (0.25 dBHz)\n\
uint8[] LLI           # loss of lock indicator\n\
uint8[] code          # code indicator (CODE_???)\n\
float64[] L           # observation data carrier-phase (cycle)\n\
float64[] P           # observation data pseudorange (m)\n\
float32[] D           # observation data doppler frequency (Hz)\n\
\n\
";
  }

  static const char* value(const  ::rtkrcv::Observation_<ContainerAllocator> &) { return value(); } 
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::rtkrcv::Observation_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.data);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct Observation_
} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::rtkrcv::Observation_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const  ::rtkrcv::Observation_<ContainerAllocator> & v) 
  {
    s << indent << "data[]" << std::endl;
    for (size_t i = 0; i < v.data.size(); ++i)
    {
      s << indent << "  data[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::rtkrcv::ObservationData_<ContainerAllocator> >::stream(s, indent + "    ", v.data[i]);
    }
  }
};


} // namespace message_operations
} // namespace ros

#endif // RTKRCV_MESSAGE_OBSERVATION_H

