#include <string>
#include "include/onion/pet.hpp"

void Pet::setName(const std::string &name_)
{
    name = name_;
}

const std::string Pet::getName()
{
    return name;
}
