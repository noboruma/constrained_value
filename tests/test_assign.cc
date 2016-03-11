#include "../include/constrained_value.hh"

int main(int argc, const char **argv)
{
  range::ct::constrained_value<int, -10, 10> vct;
  range::rt::constrained_value<int> vrt(0, -10, 10);
  return 0;
}
