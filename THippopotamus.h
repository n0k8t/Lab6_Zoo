#ifndef LAB6_THIPPOPOTAMUS_H
#define LAB6_THIPPOPOTAMUS_H

#include "TArtiodactyla.h"

class THippopotamus : public TArtiodactyla
{
private:
    std::string VidName;
    size_t Death;
public:
    THippopotamus();
    THippopotamus(const std::string & name);

    virtual std::string GetVid() override { return VidName; };
    virtual size_t GetDeath() override { return Death; }

    virtual THippopotamus * MakeChild() override
    {
        THippopotamus * child = new THippopotamus(Names[ rand() % ( sizeof(Names)/sizeof(Names[0]) ) ]);
        return child;
    }

    virtual void Live(float time) override
    {
            // с 6 до 7 ест
        if (time >= 6.f && time <= 7.f)
            std::cout << GetName() << " is eating" << std::endl;
            // с 8 до 15 спит
        else if (time >= 8.f && time <= 15.f)
            std::cout << GetName() << " is sleeping" << std::endl;
            // остальное время плывет
        else
            std::cout << GetName() << " is swimming" << std::endl;
    }
};


#endif //LAB6_THIPPOPOTAMUS_H
