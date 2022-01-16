#include <iostream>
int randomUnit()
{
    int randomUnit = 1;
    return randomUnit;
}

int main()
{
    int tank = 0;
    int ship = 0;
    int aircraft = 0;
    int soliger = 0;
    int gold = 1000;

    std::cout << "czołem żołnierzu !!\nceny jednostek: czołg-50, okręt-100, myśliwiec-20, żołnierz-5\n";
    std::cout << "aby kupić:\n (okręt wybierz 1) (myśliwiec wybierz 2) (czołg wybierz 3) (żołnierza wybierz 4)\n ";
    std::cout << "(aby wyjść wybierz 9)\n";
    std::cout << "masz " << gold << " złota\n";
    std::cout << "masz " << ship << " okrętów\n";
    std::cout << "masz " << aircraft << " myśliwców\n";
    std::cout << "masz " << tank << " czołgów\n";
    std::cout << "masz " << soliger << " żołnierzy\n";

    int inText = 0;

    while (inText != 9)
    {

        std::cin >> inText;
        if (inText == 4 and gold >= 5)
        {
            soliger++;
            gold = gold - 5;
            std::cout << "ceny jednostek: czołg-50, okręt-100, myśliwiec-20, żołnierz-5\n";
            std::cout << "aby kupić:\n (okręt wybierz 1) (myśliwiec wybierz 2) (czołg wybierz 3) (żołnierza wybierz 4)\n ";
            std::cout << "(aby wyjść wybierz 9)\n(aby wysłać wojska na wojne wybierz 5)\n";
            std::cout << "masz " << gold << " złota\n";
            std::cout << "masz " << ship << " okrętów\n";
            std::cout << "masz " << aircraft << " myśliwców\n";
            std::cout << "masz " << tank << " czołgów\n";
            std::cout << "masz " << soliger << " żołnierzy\n";
        }
        if (inText == 3 and gold >= 50)
        {
            tank++;
            gold = gold - 50;
            std::cout << "ceny jednostek: czołg-50, okręt-100, myśliwiec-20, żołnierz-5\n";
            std::cout << "aby kupić:\n (okręt wybierz 1) (myśliwiec wybierz 2) (czołg wybierz 3) (żołnierza wybierz 4)\n ";
            std::cout << "(aby wyjść wybierz 9)\n(aby wysłać wojska na wojne wybierz 5)\n";
            std::cout << "masz " << gold << " złota\n";
            std::cout << "masz " << ship << " okrętów\n";
            std::cout << "masz " << aircraft << " myśliwców\n";
            std::cout << "masz " << tank << " czołgów\n";
            std::cout << "masz " << soliger << " żołnierzy\n";
        }
        if (inText == 2 and gold >= 20)
        {
            aircraft++;
            gold = gold - 20;
            std::cout << "ceny jednostek: czołg-50, okręt-100, myśliwiec-20, żołnierz-5\n";
            std::cout << "aby kupić:\n (okręt wybierz 1) (myśliwiec wybierz 2) (czołg wybierz 3) (żołnierza wybierz 4)\n ";
            std::cout << "(aby wyjść wybierz 9)\n(aby wysłać wojska na wojne wybierz 5)\n";
            std::cout << "masz " << gold << " złota\n";
            std::cout << "masz " << ship << " okrętów\n";
            std::cout << "masz " << aircraft << " myśliwców\n";
            std::cout << "masz " << tank << " czołgów\n";
            std::cout << "masz " << soliger << " żołnierzy\n";
        }
        if (inText == 1 and gold >= 100)
        {
            ship++;
            gold = gold - 100;
            std::cout << "ceny jednostek: czołg-50, okręt-100, myśliwiec-20, żołnierz-5\n";
            std::cout << "aby kupić:\n (okręt wybierz 1) (myśliwiec wybierz 2) (czołg wybierz 3) (żołnierza wybierz 4)\n ";
            std::cout << "(aby wyjść wybierz 9)\n(aby wysłać wojska na wojne wybierz 5)\n";
            std::cout << "masz " << gold << " złota\n";
            std::cout << "masz " << ship << " okrętów\n";
            std::cout << "masz " << aircraft << " myśliwców\n";
            std::cout << "masz " << tank << " czołgów\n";
            std::cout << "masz " << soliger << " żołnierzy\n";
        }
        if (inText == 5)
        {
            int front1tank = randomUnit();
            int front2tank = 2;
            int front3tank = 3;
            int front4tank = 4;
            int front1ship = 1;
            int front2ship = 2;
            int front3ship = 3;
            int front4ship = 4;
            int front1aircraft = 1;
            int front2aircraft = 2;
            int front3aircraft = 3;
            int front4aircraft = 4;
            int front1soliger = 1;
            int front2soliger = 2;
            int front3soliger = 3;
            int front4soliger = 4;
            int selectedfront = 0;

            std::cout << "____________________________________________________________________________________\n";
            std::cout << "wybierz front:\n";
            std::cout << "(aby wybrać front wybierz jego numer + 2)\n";
            std::cout << "front 1 bitwa pancerna (czołgi:" << front1tank << ") (okręty:" << front1ship << ") (myśliwce:" << front1aircraft << ") (żołnierze:" << front1soliger << ")\n";
            std::cout << "front 2 bitwa morska (czołgi:" << front1tank << ") (okręty:" << front1ship << ") (myśliwce:" << front1aircraft << ") ( żołnierze" << front1soliger << ")\n";
            std::cout << "front 3 bitwa powietrzna (czołgi:" << front1tank << ") (okręty:" << front1ship << ") (myśliwce:" << front1aircraft << ") ( żołnierze" << front1soliger << ")\n";
            std::cout << "front 4 bitwa piechoty (czołgi:" << front1tank << ") (okręty:" << front1ship << ") (myśliwce:" << front1aircraft << ") ( żołnierze" << front1soliger << ")\n";
            std::cin >> selectedfront;
        }
    }
}
