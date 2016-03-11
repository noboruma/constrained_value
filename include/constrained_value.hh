#ifndef CONSTRAINED_VALUE_HH
#define CONSTRAINED_VALUE_HH

namespace range 
{
  template<typename T, T min, T max>
  struct constrained_value
  {
    void operator=(const T && o);

    private:
    T _data;
  };
} //!range

#include "constrained_value.hxx"

#endif
