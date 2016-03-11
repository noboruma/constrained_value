#ifndef CONSTRAINED_VALUE_HH
#define CONSTRAINED_VALUE_HH

namespace range 
{
  namespace ct 
  {
    template<typename T, T min, T max>
    struct constrained_value
    {
      void operator=(const T && o);

      private:
      T _data;
    };
  } //!ct
  namespace rt 
  {
    template<typename T>
    struct constrained_value
    {
      constrained_value(const T && o, T min, T max);

      void operator=(const T && o);

      private:
      T _min,
        _max;
      T _data;
    };
  } //!rt
} //!range

#include "constrained_value.hxx"

#endif
