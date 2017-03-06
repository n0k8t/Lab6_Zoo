#include "TLeo.h"

TLeo::TLeo()
        : TCarnivora()
{}

TLeo::TLeo(const std::string &name)
        : TCarnivora()
        , VidName("Leo")
        , Death (10)
{}