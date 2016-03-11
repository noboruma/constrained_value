namespace range 
{
  //===========================================================================
  template<typename T, T min, T max>
  void constrained_value<T, min, max>::operator=(const T && o)
  {
    assert(_data >= min);
    assert(_data < max);
    _data = o;
  }

} //!range
