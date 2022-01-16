#include <iostream>

int main()
{
    int tank = 0;
    int ship = 0;
    int aircraft = 0;
    int soliger = 0;
    int gold = 1000;

    std::cout << "czołem żołnierzu !!\nceny jednostek: czołg-50, okręt-100, myśliwiec-20, żołnierz-5\n";
    std::cout << "aby kupić:\n (okręt wybierz 1) (myśliwiec wybierz 2) (czołg wybierz 3) (żołnierza wybierz 4)\n ";
    std::cout << "aby wyjść wybierz 9\n";
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
        }
        if (inText == 3 and gold >= 50)
        {
            tank++;
            gold = gold - 50;
        }
        if (inText == 2 and gold >= 20)
        {
            aircraft++;
            gold = gold - 20;
        }
        if (inText == 1 and gold >= 100)
        {
            ship++;
            gold = gold - 100;
        }
        if (inText == 5)
        {
            int
            std::cout << "___________________________________________________________________\n"
            std::cout << "wybierz front:\nfront 1 bitwa lądowa" 
        }
        std::cout << "ceny jednostek: czołg-50, okręt-100, myśliwiec-20, żołnierz-5\n";
        std::cout << "aby kupić:\n (okręt wybierz 1) (myśliwiec wybierz 2) (czołg wybierz 3) (żołnierza wybierz 4)\n ";
        std::cout << "(aby wyjść wybierz 9)\n(aby wysłać wojska na wojne wybierz 5)";
        std::cout << "masz " << gold << " złota\n";
        std::cout << "masz " << ship << " okrętów\n";
        std::cout << "masz " << aircraft << " myśliwców\n";
        std::cout << "masz " << tank << " czołgów\n";
        std::cout << "masz " << soliger << " żołnierzy\n";
    }
}