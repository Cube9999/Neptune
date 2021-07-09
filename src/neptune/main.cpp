#include <iostream>

namespace hello {
int test();
}

struct Hello
{
    int foo;
    int bar;
};

enum VeryCoolEnum
{
    e = 0,
    d = 3,
    r = 4,
};

class Blah
{
  public:
    int getInt() { return this->m_number; }

  private:
    int m_number;
};

int main()
{
    std::cout << "Hello, World!";
    return 0;
}
