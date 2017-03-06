#include "TAnimal.h"



TAnimal::TAnimal()
        : Name("Animal")
        , Age(0)
{ }

TAnimal::TAnimal(const std::string & name)
        : Name(name)
        , Age(0)
{ }

std::string TAnimal::GetName() const
{
    return Name;
}

size_t TAnimal::GetAge() const
{
    return Age;
}

void TAnimal::IncAge()
{
    Age++;
}

std::string TAnimal::GetVid()
{
    return 0;
}

std::string TAnimal::GetSpec()
{
    return 0;
}