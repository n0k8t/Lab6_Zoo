#include "TCarnivora.h"

TCarnivora::TCarnivora()
        : TAnimal()
        , SpecName("")
{}

TCarnivora::TCarnivora(const std::string &name)
        : TAnimal()
        , SpecName("Carnivora")
{}