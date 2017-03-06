#ifndef LAB6_TGIRAFFA_H
#define LAB6_TGIRAFFA_H

#include "TArtiodactyla.h"

class TGiraffa : public TArtiodactyla
{
private:
    std::string VidName;
    size_t Death;
public:
    TGiraffa();
    TGiraffa(const std::string & name);

    virtual TGiraffa * MakeChild() override
    {
        TGiraffa * child = new TGiraffa(Names[ rand() % ( sizeof(Names)/sizeof(Names[0]) ) ]);
        return child;
    };

    virtual std::string GetVid() override { return VidName; };
    virtual size_t GetDeath() override { return Death; }
    virtual void Live(float time) override
    {
            // с 6 до 7  ест
        if (time >= 6.f && time <= 7.f)
            std::cout << GetName() << " is eating" << std::endl;
            // с 8 до 15  спит
        else if (time >= 8.f && time <= 15.f)
            std::cout << GetName() << " is sleeping" << std::endl;
            // остальное время бежит
        else
            std::cout << GetName() << " is running" << std::endl;
    }
};


#endif //LAB6_TGIRAFFA_H
