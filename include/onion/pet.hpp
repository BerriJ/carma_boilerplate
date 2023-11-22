
#ifndef PET_H
#define PET_H

struct Pet
{
    // Member variables
public:
    std::string name;

    // Constructor
    Pet(const std::string &name) : name(name) {}

    // Member functions
    void setName(const std::string &name_);
    const std::string getName();
};

#endif
