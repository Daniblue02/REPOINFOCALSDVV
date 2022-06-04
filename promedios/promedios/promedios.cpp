#include <iostream>
#include <string>

int main()
{   
    std::cout << "\t| |  HOJA DE PROMEDIOS  | |\n\n\tAlumnos : 3 | CantEval : 3\n";
    std::string alumnos[3][4];
    std::cout << "\n";
    for (int i=0; i<3; i++)
    {
        std::cout << "Nombre del estudiante: ";
        std::cin.ignore();
        std::getline(std::cin, alumnos[i][0]);
        std::cout << "1er Parcial: \t";
        std::cin >> alumnos[i][1];
        std::cout << "2do Parcial: \t";
        std::cin >> alumnos[i][2];
        std::cout << "3er Parcial: \t";
        std::cin >> alumnos[i][3];
        std::cout << "\n";
    }
    float prom;
    std::cout << "\n\n\t\t\t\t\t| |  HOJA DE PROMEDIOS  | |\n\n";
    std::cout << "|NOMBRE ESTUDIANTE|\t|PRIMER PARCIAL|\t|SEGUNDO PARCIAL|\t|TERCER PARCIAL|\t|NOTA FINAL|\n-------------------------------------------------------------------------------------------------------------------\n";
    for (int i = 0; i < 3; i++)
    {
        prom = (stof(alumnos[i][1])+stof(alumnos[i][2])+stof(alumnos[i][3]))/3;
        std::cout << alumnos[i][0] <<"\t\t\t\t"<< alumnos[i][1] << "\t\t\t" << alumnos[i][2] << "\t\t\t" << alumnos[i][3] << "\t      \t" << prom <<"\n-------------------------------------------------------------------------------------------------------------------\n";

    }
    std::cout << "\n\n\n\n\n\n\n\n\n";
    return 0;
}
