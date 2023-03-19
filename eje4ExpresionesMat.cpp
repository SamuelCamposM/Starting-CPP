#include <iostream>

int main()
{
    float a, b, c, d, e, f, res;
    std::cout << "Ingresa los siguiente datos: \n";
    std::cout << "Valor de A: ";
    std::cin >> a;
    std::cout << "Valor de b: ";
    std::cin >> b;
    std::cout << "Valor de c: ";
    std::cin >> c;
    std::cout << "Valor de d: ";
    std::cin >> d;
    std::cout << "Valor de e: ";
    std::cin >> e;
    std::cout << "Valor de f: ";
    std::cin >> f;

    res = (a + (b / c)) / (d +(e / f));

    std::cout<< "\nAqui esta tu resultado "<<res<<"\n";
    system("pause");
    return 0;
}