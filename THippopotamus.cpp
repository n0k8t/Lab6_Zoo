//
// Created by Сергей Тырин on 05.03.17.
//

#include "THippopotamus.h"

THippopotamus::THippopotamus()
        : TArtiodactyla()
{}

THippopotamus::THippopotamus(const std::string &name)
        : TArtiodactyla()
        , VidName("Hippopotamus")
        , Death (11)
{}