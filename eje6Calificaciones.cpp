#include <iostream>

int main()
{
    float practicas, participacion, examen, res;

    std::cout << "Ingresa los datos siguientes:\n";
    std::cout << "Calificacion de las practicas:\n";
    std::cin >> practicas;
    std::cout << "Calificacion de las participacion:\n";
    std::cin >> participacion;
    std::cout << "Calificacion de las examen:\n";
    std::cin >> examen;
    res = practicas * 0.4 + participacion * 0.2 + examen * 0.4; 
    std::cout << "Aqui esta tu resultado: " << res;
    
    system("pause");
    return 0;
}
