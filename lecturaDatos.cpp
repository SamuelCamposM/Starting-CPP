#include <iostream>
/*Esta es la funcion principal
podemos ingresar numeros desde aca */
int main()
{
    float numero;
    std::cout << "Ingrese un numero por favor: ";
    std::cin >> numero;
    std::cout << "Este es el numero que ingreso: ";
    std::cout << numero;
    std::cout << "\n";
    // std::cin.get();
    system("pause");
    return 0;
}