namespace range 
{
  namespace ct 
  {
    //===========================================================================
    template<typename T, T min, T max>
    void constrained_value<T, min, max>::operator=(const T && o)
    {
      assert(_data >= min);
      assert(_data < max);
      _data = o;
    }
  } //!ct

  namespace rt 
  {

    //===========================================================================
    template<typename T>
    constrained_value<T>::constrained_value(const T && o, T min, T max)
    : _min(min)
      , _max(max)
      , _data(o)
    {}

    //===========================================================================
    template<typename T>
    void constrained_value<T>::operator=(const T && o)
    {
      assert(_data >= _min);
      assert(_data < _max);
      _data = o;
    }
  } //!ct

} //!range
