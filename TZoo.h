#pragma once
#include "TAnimal.h"

const float STEP = 0.5;

#ifndef LAB6_TZOO_H
#define LAB6_TZOO_H

class TZoo
{
private:
    typedef TAnimal * TPtrAnimal;

    /// Звери
    TPtrAnimal * Animals;

    /// Максимальная вместимость зоопарка
    size_t Capacity;

    /// Количество зверей в зоопарке
    size_t NumAnimals;

    /// Время суток
    float Time;

    /// Год текущий
    float Day;

public:
    TZoo(size_t capacity);

    bool AddNewAnimal(TAnimal ** newAnimal);

    void Work();

    ~TZoo();
};


#endif //LAB6_TZOO_H