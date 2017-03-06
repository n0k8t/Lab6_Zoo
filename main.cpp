#include <thread>
#include <iostream>
#include "TZoo.h"
#include "Header_for_headers.h"


int main() {
    TZoo myZoo(200);
    TZoo hisZoo(200);

    // начальный зоопарк A
    // часть 1
    TAnimal *myGiraffa_1    = new TGiraffa("Gir myA");
    TAnimal *myHippo_1      = new THippopotamus("Hip myA");
    TAnimal *myElephas_1    = new TElephas("Ele myA");
    TAnimal *myLox_1        = new TLoxodonta("Lox myA");
    TAnimal *myLeo_1        = new TLeo("Leo myA");
    TAnimal *myTigris_1     = new TTigris("Tigr myA");

    myZoo.AddNewAnimal(&myGiraffa_1);
    myZoo.AddNewAnimal(&myHippo_1);
    myZoo.AddNewAnimal(&myElephas_1);
    myZoo.AddNewAnimal(&myLox_1);
    myZoo.AddNewAnimal(&myLeo_1);
    myZoo.AddNewAnimal(&myTigris_1);

    // часть 2
    TAnimal *myGiraffa_2    = new TGiraffa("Gir myB");
    TAnimal *myHippo_2      = new THippopotamus("Hip myB");
    TAnimal *myElephas_2    = new TElephas("Ele myB");
    TAnimal *myLox_2        = new TLoxodonta("Lox myB");
    TAnimal *myLeo_2        = new TLeo("Leo myB");
    TAnimal *myTigris_2     = new TTigris("Tigr myB");

    myZoo.AddNewAnimal(&myGiraffa_2);
    myZoo.AddNewAnimal(&myHippo_2);
    myZoo.AddNewAnimal(&myElephas_2);
    myZoo.AddNewAnimal(&myLox_2);
    myZoo.AddNewAnimal(&myLeo_2);
    myZoo.AddNewAnimal(&myTigris_2);



    // начальный зоопарк B
    // часть 1
    TAnimal *hisGiraffa_1   = new TGiraffa("Gir hisA");
    TAnimal *hisHippo_1     = new THippopotamus("Hip hisA");
    TAnimal *hisElephas_1   = new TElephas("Ele hisA");
    TAnimal *hisLox_1       = new TLoxodonta("Lox hisA");
    TAnimal *hisLeo_1       = new TLeo("Leo hisA");
    TAnimal *hisTigris_1    = new TTigris("Tigr hisA");

    hisZoo.AddNewAnimal(&hisGiraffa_1);
    hisZoo.AddNewAnimal(&hisHippo_1);
    hisZoo.AddNewAnimal(&hisElephas_1);
    hisZoo.AddNewAnimal(&hisLox_1);
    hisZoo.AddNewAnimal(&hisLeo_1);
    hisZoo.AddNewAnimal(&hisTigris_1);

    // часть 2
    TAnimal *hisGiraffa_2   = new TGiraffa("Gir hisB");
    TAnimal *hisHippo_2     = new THippopotamus("Hip hisB");
    TAnimal *hisElephas_2   = new TElephas("Ele hisB");
    TAnimal *hisLox_2       = new TLoxodonta("Lox hisB");
    TAnimal *hisLeo_2       = new TLeo("Leo hisB");
    TAnimal *hisTigris_2    = new TTigris("Tigr hisB");

    hisZoo.AddNewAnimal(&hisGiraffa_2);
    hisZoo.AddNewAnimal(&hisHippo_2);
    hisZoo.AddNewAnimal(&hisElephas_2);
    hisZoo.AddNewAnimal(&hisLox_2);
    hisZoo.AddNewAnimal(&hisLeo_2);
    hisZoo.AddNewAnimal(&hisTigris_2);



    for (size_t i = 0; i < 100; ++i)
    {
        system("cls");

        myZoo.Work();
        std::cout << std::endl << std::endl;
        hisZoo.Work();

        // поток ждет 1 секунду
        std::this_thread::sleep_for(std::chrono::seconds(1));
    };

    return 0;
}








