#include <iostream>
#include <iostream>
#include <math.h>

int main()
{
    float x, y, res;
    std::cout << "Digita lo siguiente";
    std::cout << "Valor de x: ";
    std::cin >> x;
    std::cout << "Valor de y: ";
    std::cin >> y;
    res = (sqrt(x)) / (pow(x, 2) - 1);
    std::cout << "Aqui esta tu resultado: " << res << "\n";
    system("pause");
    return 0;
}
