#include "../include/constrained_value.hh"

int main(int argc, const char **argv)
{
  range::constrained_value<int, -10, 10> v;
  return 0;
}
