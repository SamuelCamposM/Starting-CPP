#include <iostream>

int main()
{
    float a, b, res;
    std::cout << "Ingresa lo siguiente: \n";
    std::cout << "valor de a: ";
    std::cin >> a;
    std::cout << "valor de b: ";
    std::cin >> b;
    // exp
    res = (a / b) + 1;
    std::cout.precision(3);
    std::cout << "Aca tienes el resultado: " << res << "\n";
    system("pause");
    return 0;
}