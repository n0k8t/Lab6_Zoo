#include "TZoo.h"

TZoo::TZoo(size_t capacity)
		: Capacity(capacity)
		, NumAnimals(0)
		, Time(0)
{ 
	Animals = new TPtrAnimal[Capacity];
	memset(Animals, 0, sizeof(TPtrAnimal) * Capacity);
}

bool TZoo::AddNewAnimal(TAnimal ** newAnimal)
{
	// Проверяем корректность входного параметра
	if (newAnimal == nullptr)
		return false;

	// Зоопарк полон, нельзя добавить нового зверя
	if (NumAnimals == Capacity)
		return false;

	// Добавляем зверя в массив
	Animals[NumAnimals] = *newAnimal;

	// Забираем зверя у старого владельца, чтобы не удалить зверя дважды
	*newAnimal = nullptr;

	// Увеличиваем счетчик
	++NumAnimals;

	return true;
}



void TZoo::Work()
{
	const std::string names[8] = {"Vzyh", "KOTOVZYH", "Petya", "Andrey", "Pavlinis", "Yuir", "Micha", "Nik"};
	for (size_t i = 0; i < NumAnimals; ++i)
	{
		if (Animals[i] != nullptr)
		{
			// Год из 10 дней
			if (Day == 10)
			{
				Animals[i]->IncAge();
				Day = 0;
			}

			// Демонстрация работы динамического полиморфизма
			Animals[i]->Live(Time);

			// Смерть
			if(Animals[i]->GetDeath() == Animals[i]->GetAge())
			{
				int rnd = rand() % 2;
				if(rnd*rnd*rnd)
				{
					Animals[i]->~TAnimal();
				}
			} // конец

			// Размножение
			if(Animals[i]->GetSexAge() == Animals[i]->GetAge())
			{
				if (NumAnimals < Capacity)
				{
					for (size_t i = 0; i < NumAnimals; i++)
					{
						for (size_t j = i + 1; j < NumAnimals; j++)
						{
							if (Animals[i]->GetName() == Animals[j]->GetName()
								&& Animals[i]->GetSexAge() == Animals[j]->GetSexAge())
							{
								TAnimal *child = Animals[i]->MakeChild();
								AddNewAnimal(&child);
								NumAnimals++;
							}
						}
					}
				}
			} // конец

		}
	}
	Time += STEP;
	if (Time > 24.f)
	{
		Day++;
		Time -= 24.f;
	}


}

TZoo::~TZoo()
{
	for (size_t i = 0; i < NumAnimals; ++i)
	{
		delete Animals[i];
	}
	delete[] Animals;
}