#ifndef LAB6_TLEO_H
#define LAB6_TLEO_H

#include "TCarnivora.h"

class TLeo : public TCarnivora {
private:
    std::string VidName;
    size_t Death;
public:
    TLeo();
    TLeo(const std::string & name);

    virtual std::string GetVid() override { return VidName; };
    virtual size_t GetDeath() override { return Death; }

    virtual TLeo * MakeChild() override
    {
        TLeo * child = new TLeo(Names[ rand() % ( sizeof(Names)/sizeof(Names[0]) ) ]);
        return child;
    }

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


#endif //LAB6_TLEO_H
