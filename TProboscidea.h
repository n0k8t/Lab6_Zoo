#ifndef LAB6_TPROBOSCIDEA_H
#define LAB6_TPROBOSCIDEA_H

#include "TAnimal.h"

class TProboscidea : public TAnimal {
private:
    std::string SpecName;
    size_t SexAge;
public:
    TProboscidea();
    TProboscidea(const std::string & name);

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


#endif //LAB6_TPROBOSCIDEA_H
