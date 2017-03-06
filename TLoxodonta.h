#ifndef LAB6_TLOXODONTA_H
#define LAB6_TLOXODONTA_H

#include "TProboscidea.h"

class TLoxodonta : public TProboscidea {
private:
    std::string VidName;
    size_t Death;
public:
    TLoxodonta();
    TLoxodonta(const std::string & name);

    virtual std::string GetVid() override { return VidName; };
    virtual size_t GetDeath() override { return Death; }

    virtual TLoxodonta * MakeChild() override
    {
        TLoxodonta * child = new TLoxodonta(Names[ rand() % ( sizeof(Names)/sizeof(Names[0]) ) ]);
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


#endif //LAB6_TLOXODONTA_H
