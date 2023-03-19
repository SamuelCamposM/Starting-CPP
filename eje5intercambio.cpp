#include <iostream>

int main()
{
    int a, b, aux;
    std::cout << "Ingrese lo siguiente: \n";
    std::cout << "Valor de a: ";
    std::cin >> a;
    std::cout << "Valor de B: ";
    std::cin >> b;
    aux = a;
    a = b;
    b = aux;
    std::cout << "Aqui estan tus valores intercambiados: \n";
    std::cout << "Valor de a: " << a << "\n";
    std::cout << "Valor de b: " << b << "\n";
    system("pause");
    return 0;
}