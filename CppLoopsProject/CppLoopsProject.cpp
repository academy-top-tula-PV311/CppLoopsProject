#include <iostream>

int main()
{

    /*
    int summa{};
    int number{ 1 };
    while (number <= 1000)
    {
        summa += number;
        number++;
    }

    std::cout << "Number = " << number << "\n";
    std::cout << "Summa = " << summa << "\n";
    */

    // not optimal
    /*while (number != 0)
    {
        std::cout << "Input number (0 - exit): ";
        std::cin >> number;
        summa += number;
    }*/

    /*
    int summa{};
    int number{ 1 };

    do
    {
        std::cout << "Input number (0 - exit): ";
        std::cin >> number;
        if (number == 0)
            break;
        summa += number;

    } while (true);

    std::cout << "Summa = " << summa << "\n";
    */

    //int n;
    //long long fact{ 1 };

    //std::cout << "Input n: ";
    //std::cin >> n;

    ////int i{ 1 };
    //while (n > 0)
    //{
    //    fact *= n;
    //    n--;
    //}
    //std::cout << "fact = " << fact << "\n";

    
    int n{ 50 };
    int summa{};

    for (int number{ 1 }; number <= n; number++)
    {
        if (number % 2 != 0)
            continue;

        summa += number;
        std::cout << number << " " << summa << "\n";
    }


    /*for (int number{ 2 }; number <= n; number += 2)
    {
        summa += number;
        std::cout << summa << "\n";
    }*/
        



    /*
    int n;
    char ch;
    std::cout << "input length: ";
    std::cin >> n;
    std::cout << "input symbol: ";
    std::cin >> ch;

    for (int i = 0; i < n; i++)
        std::cout << ch;
    */


}
