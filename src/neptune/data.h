#include <array.h>

struct DataObject
{
    char size;
    std::array<char, this->size> data;
}
