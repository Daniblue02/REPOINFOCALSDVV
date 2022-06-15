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

    R:
    for (int i = 0; i < cantAl; i++)
    {
       float promedio= ((stof(Alumnos[i][4]) + stof(Alumnos[i][5]) + stof(Alumnos[i][6])) / 3);
       Alumnos[i][7] = std::to_string(promedio);
    }
    R3:
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

    int entrada2 = 0,entrada3=0;
    R2:
    std::cout << std::endl << std::endl;
    std::cout << "DESEA REALIZAR ALGUNA MODIFICACION?(1/2)" << std::endl;
    std::cout << "1. Si\n2. No\n\n";
    std::cin >> entrada2;
    std::cout << std::endl;
    if (entrada2 == 1)
    {
        std::cout << "Alumno para modificar:  (1-3)" << std::endl;
        for (int i = 0; i < cantAl; i++)
        {
            std::cout << i + 1 << ". ";
            for (int j = 0; j < 4; j++)
            {
                std::cout << Alumnos[i][j] << " ";
            }
            std::cout << std::endl;
        }
        std::cout << std::endl;
        std::cin >> entrada3;
        std::cout << std::endl;

        std::cout << "Que desea modificar? (1/2) " << std::endl;
        std::cout << "1.Nombres y Apellidos\n2.Notas\n3.Eliminar" << std::endl;
        std::cout << std::endl;
        std::cin >> entrada2;
        std::cout << std::endl;
        if (entrada2 == 1)
        {
            for (int j = 0; j < 4; j++)
            {
                std::cout << Alumnos[entrada3-1][j] << " ";
            }
            std::cout << std::endl;
            std::cout << "Seleccione (1-4):" << std::endl;
            std::cout << "1.Apellido Paterno\n2.Apellido Materno\n3.Primer Nombre\n4.Segundo Nombre" << std::endl;
            std::cout << std::endl;
            std::cin >> entrada2;
            std::cout << std::endl;
            std::cout << "ACTUAL: " << Alumnos[entrada3 - 1][entrada2 - 1] << std::endl;
            std::cout << "NUEVO: ";
            std::cin >> entrada;
            Alumnos[entrada3 - 1][entrada2 - 1] = entrada;
            goto R;
        }
        else if (entrada2 == 2)
        {
            std::cout << "Que nota desea modificar? (1-3) " << std::endl;
            std::cout << "1.er parcial\n2.do parcial\n3.er parcial" << std::endl;
            std::cout << std::endl;
            std::cin >> entrada2;
            std::cout << std::endl;
            std::cout << entrada2 << " Parcial || Estudiante : ";
            for (int j = 0; j < 4; j++)
            {
                std::cout << Alumnos[entrada3 - 1][j] << " ";
            }
            std::cout << std::endl;
            std::cout << "NOTA ACTUAL: " << Alumnos[entrada3 - 1][entrada2 + 3] << std::endl;
            std::cout << "NOTA NUEVA: ";
            std::cin >> entrada;
            Alumnos[entrada3 - 1][entrada2 + 3] = entrada;
            goto R;
        }
        else if (entrada2 == 3) 
        {
            std::cout << "Esta seguro de que desea eliminar a: " << std:: endl;
            for (int j = 0; j < 4; j++)
            {
                std::cout << Alumnos[entrada3 - 1][j] << " ";
            }
            std::cout << std::endl;
            std::cout << "1.SI\n2.NO" << std::endl;
            std::cin >> entrada2;

            if (entrada2 == 1)
            {
                for (int i=entrada3; i <= 2 ; i++)
                {
                    for (int j = 0; j < 8; j++)
                    {
                        Alumnos[i-1][j] = Alumnos[i][j];
                    }
                }
                for (int j = 0; j < 8; j++)
                    {
                        Alumnos[2][j].clear();
                    }
                goto R3;
            }
            else
            {
                goto R;
            }
        }
        
    }
    else if (entrada2 == 2)
    {
        return 0;
    }
    else
    {
        std::cout << "Error 32x009( Entrada distinta a '1'/'2' )\n\n";
        goto R2;
    }
    return 0;
}
