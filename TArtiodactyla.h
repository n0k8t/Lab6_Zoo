#include "TAnimal.h"

#ifndef LAB6_TARTIODACTYLA_H
#define LAB6_TARTIODACTYLA_H

class TArtiodactyla : public TAnimal {
private:
    std::string SpecName;
    size_t SexAge;
public:
    TArtiodactyla();
    TArtiodactyla(const std::string & name);

    virtual std::string GetSpec() override { return SpecName;}
    virtual std::string GetVid()  override { return 0;}
    virtual size_t GetSexAge()    override { return SexAge; }
    virtual void Live(float time) override
    {
            // с 6 до 7 ест
        if (time >= 6.f && time <= 7.f)
            std::cout << GetName() << " is eating" << std::endl;

            // остальное время спит
        else
            std::cout << GetName() << " is sleeping" << std::endl;
    }
};

#endif //LAB6_TARTIODACTYLA_H