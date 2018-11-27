#include "play.h"

void hello_cxx(void)
{
  Hello_CXX *hello = new Hello_CXX;
  hello->hello_cxx();
}

void Hello_CXX::hello_cxx()
{
  std::cout << "[Hello C++,";
  World_CXX *world = new World_CXX;
  world->world_cxx();
}
