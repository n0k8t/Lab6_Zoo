#pragma once
#include <string>
#include <iostream>

#ifndef LAB6_TANIMAL_H
#define LAB6_TANIMAL_H

const std::string Names[11] = { "Kate", "Mary", "Anna", "Tom", "Paha", "Misha", "Elka", "Andrey", "Nik", "Petya", "Sam"};

class TAnimal
{
    std::string Name;
    size_t Age;

public:
    TAnimal();
    TAnimal(const std::string & name);

    /// Используем деструктор по умолчанию.
    /// т.к. специальных действия для очистки объектов не требуется
    virtual ~TAnimal() = default;


    virtual TAnimal * MakeChild() = 0;


    /// Абстрактный метод
    /// <param name="time"> Время суток </param>
    virtual void Live(float time) = 0;

    virtual std::string GetSpec();
    virtual std::string GetVid();
    virtual size_t GetDeath() { return 0; };
    virtual size_t GetSexAge() { return 0; };
    std::string GetName() const;
    size_t GetAge() const;
    void IncAge();
};

#endif //LAB6_TANIMAL_H