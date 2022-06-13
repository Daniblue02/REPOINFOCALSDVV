#include <iostream>
#include <string>

int main()
{
    int cantAl = 3;
    std::string entrada;
    std::string Alumnos[3][8];
    std::cout << "\tINGRESO DE DATOS\n\n";

    for (int i = 0; i < cantAl; i++)
    {
        std::cout << "\tEstudiante #" << i + 1 << std::endl;

        std::cout << "Apellido Paterno: \t";
        std::cin >> entrada;
        Alumnos[i][0] = entrada;

        std::cout << "Apellido Materno: \t";
        std::cin >> entrada;
        Alumnos[i][1] = entrada;

        std::cout << "Primer Nombre: \t\t";
        std::cin >> entrada;
        Alumnos[i][2] = entrada;

        std::cout << "Sergundo Nombre: \t";
        std::cin >> entrada;
        Alumnos[i][3] = entrada;

        std::cout << std::endl;
    }
    std::cout << std:: endl;

    for (int i = 0; i < cantAl; i++)
    {
        std::cout << "#" << i + 1 << " ";
        for (int j = 0; j < 4; j++)
        {
            std::cout << Alumnos[i][j] << " ";
        }
        std::cout << std::endl;
    }

    std::cout << std::endl << "\tIngreso de Notas 1er Parcial: " << std::endl << std::endl;

    for (int i = 0; i < cantAl; i++)
    {
        std::cout << "#" << i + 1 << " ";
        for (int j = 0; j < 4; j++)
        {
            std::cout << Alumnos[i][j] << " ";
        }
        std::cout << "\n\t\t\t\t\t || \tNota: ";
        std::cin >> entrada;
        Alumnos[i][4] = entrada;
        std::cout << "-------------------------------------------------------------------------";
        std::cout << std::endl << std::endl;
    }

    std::cout << std::endl << std::endl << "\tIngreso de Notas 2do Parcial: " << std::endl << std::endl;

    for (int i = 0; i < cantAl; i++)
    {
        std::cout << "#" << i + 1 << " ";
        for (int j = 0; j < 4; j++)
        {
            std::cout << Alumnos[i][j] << " ";
        }
        std::cout << "\n\t\t\t\t\t || \tNota: ";
        std::cin >> entrada;
        Alumnos[i][5] = entrada;
        std::cout << "-------------------------------------------------------------------------";
        std::cout << std::endl << std::endl;
    }

    std::cout << std::endl << std::endl << "\tIngreso de Notas 3er Parcial: " << std::endl << std::endl;

    for (int i = 0; i < cantAl; i++)
    {
        std::cout << "#" << i + 1 << " ";
        for (int j = 0; j < 4; j++)
        {
            std::cout << Alumnos[i][j] << " ";
        }
        std::cout << "\n\t\t\t\t\t || \tNota: ";
        std::cin >> entrada;
        Alumnos[i][6] = entrada;
        std::cout << "-------------------------------------------------------------------------";
        std::cout << std::endl << std::endl;
    }

    for (int i = 0; i < cantAl; i++)
    {
       float promedio= ((stof(Alumnos[i][4]) + stof(Alumnos[i][5]) + stof(Alumnos[i][6])) / 3);
       Alumnos[i][7] = std::to_string(promedio);
    }

    std::cout << std::endl << std::endl << std::endl;
    std::cout << "\tNotas finales: " << std::endl << std::endl;
    
    std::cout << "#\tApellidos y Nombres\t\t\t1er Parcial\t2do Parcial\t3er Parcial\tNOTA FINAL\n";
    std::cout << "-------------------------------------------------------------------------";
    std::cout << "---------------------------------------" << std::endl;
    for (int i = 0; i < cantAl; i++)
    {
        std::cout << "#" << i + 1 << " ";
        for (int j = 0; j < 4; j++)
        {
            std::cout << Alumnos[i][j] << " ";
        }

        std::cout << std::endl << "\t\t\t\t\t";

        for (int j = 4; j < 8; j++)
        {
            std::cout <<"\t" << Alumnos[i][j] << "\t";
        }
        std::cout << std::endl;
        std::cout << "-------------------------------------------------------------------------";
        std::cout << "---------------------------------------";
        std::cout << std::endl << std::endl;
    }


    std::cout << std::endl << "FIN" << std::endl << std::endl;


    return 0;
}
