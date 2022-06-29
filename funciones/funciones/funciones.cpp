#include <iostream>
#include <string>
#include <limits>
std::string Alumnos[3][6];
std::string entrada;
int cantAl = 3;
int res,res2,yu=0;

int menu();
void showAl();
void addAl();
void notas();
void promediar();
void gradepg();
void deleteUser();
void observ();
void exit();
int main()
{
    for(;yu==0;)
    { 
        system("CLS");
        res = menu();
        system("CLS");
        if (res == 1)
        {
            showAl();
        }
        else if (res == 2)
        {
            addAl();
        }
        else if (res == 3)
        {
            notas();
        }
        else if (res == 4)
        {
            promediar();
            gradepg();                
        }
        else if (res == 5)
        {
            deleteUser();
        }
        else if (res == 6)
        {
            observ();
        }
        else if(res==7)
        {
        	exit();
		}
        std::cout << "\n\n";
        system("pause");

    }
    return 0;
}

int menu()
{
    int entradaS;
    std::cout << "\t||[|| SISTEMA DE NOTAS ||]||\n\n";
    std::cout << "Seleccione (1-5)\n";
    std::cout << "1. Ver Alumnos\n2. Agregar Alumnos\n3. Ingresar/Modificar Notas\n4. Imprimir Notas\n5. Eliminar Alumnos\n6. Observaciones\n7. Salir \n\n";
    std::cin >> entradaS;
    return entradaS;
}
void showAl()
{
    for (int i = 0; i < cantAl; i++)
    {
        std::cout << i + 1 << ". " << Alumnos[i][0] << std::endl;
    }
}
void addAl()
{
    bool disp=false;
    for (int i = 0; i < cantAl; i++)
    {
        if (Alumnos[i][0].empty())
        {
            std::cout << "Posicion" << "# " << i + 1 << " disponible: \n";
            std::cout << "Insertar Nombre y Apellido: ";
            std::cin.ignore();
            std::getline (std::cin, entrada);
            Alumnos[i][0] = entrada;
            disp = true;
            i = cantAl;
            std::cout << "\n\n[| Ingreso Correcto! |]" << std::endl;
        }
    }
    if (disp == false)
    {
        std::cout << "No hay cupos disponibles, elimine un usuario para agregar otro. " << std::endl;
    }
}
void notas()
{
    std::cout << "Seleccione el estudiante : \n";
    showAl();
    std::cout << "\n";
    std::cin >> res;
    system("CLS");

    std::cout << Alumnos[res - 1][0] << ": \n\n";
    for (int i = 1; i < 4; i++)
    {
        std::cout << i << "#. Parcial||\t\tNOTA ACTUAL: " << Alumnos[res - 1][i] << "\t\t NOTA NUEVA: ";
        std::cin >> Alumnos[res - 1][i];
        std::cout << "\n";
    }
}
void promediar() 
{   
    for (int i = 0; i < cantAl; i++)
    {
        if (Alumnos[i][1].empty() || Alumnos[i][2].empty() || Alumnos[i][1].empty())
        {
            Alumnos[i][4] = '\t';
        }
        else
        {
            float promedio = ((stof(Alumnos[i][1]) + stof(Alumnos[i][2]) + stof(Alumnos[i][3])) / 3);
            Alumnos[i][4] = std::to_string(promedio);
        }
    }
}
void gradepg()
{
    std::cout << "----------------------------------------------------------------------------------------------------\n";
    std::cout << "|#\tNombre y Apellido\t\t1er Parcial\t2do Parcial\t3er Parcial\tNOTA FINAL |\n";
    std::cout << "----------------------------------------------------------------------------------------------------\n";

    for (int i = 0; i < cantAl; i++)
    {
        std::cout << i + 1 << ".\t" << Alumnos[i][0] << "\n\t\t\t\t\t" << Alumnos[i][1] << "\t\t" << Alumnos[i][2] << "\t\t" << Alumnos[i][3] << "\t\t" << Alumnos[i][4] << "  |\n";
        std::cout << "----------------------------------------------------------------------------------------------------\n";
    }
}
void deleteUser()
{
    std::cout << "Seleccione el estudiante: \n";
    showAl();
    std::cout << "\n";
    std::cin >> res;
    system("CLS");
    std::cout << "Se eliminara al siguiente usuario: " << Alumnos[res-1][0] << "\n\nConfirmar: \n1.Si \n2.Volver Atras\n\n";
    std::cin >> res2;
    if (res2 == 1)
    {
        for (int i = res; i < 3; i++)
        {
            for (int j = 0; j < 6; j++)
            {
                Alumnos[i - 1][j] = Alumnos[i][j];
            }
        }
        for (int j = 0; j < 6; j++)
        {
            Alumnos[2][j].clear();
        }
    }
    else
    {
        
    }
}
void observ()
{
	for (int i = 0; i < cantAl; i++)
    {
        std::cout << i + 1 << ". " << Alumnos[i][0] << "\n\t\t\t Observacion: " << Alumnos[i][5] << "\n----------------------------------------------------------------------------------------------------\n";
	}
	    std::cout << "1.Ingresar/modificar\n2.Eliminar Observacion\n\n";
        std::cin >> res;
        system("CLS");
        if (res == 1)
        {
        	std::cout << "Seleccione Alumno:\n";
        	showAl();
        	std::cin >> res2;
        	system("CLS");
        	std::cout << "Alumno: " << Alumnos[res2-1][0] << "\n";
            std::cout << "Insertar Observacion: ";
            std::cin.ignore();
            std::getline (std::cin, entrada);
            Alumnos[res2-1][5] = entrada;
		}
		else if(res==2)
		{
			std::cout << "Seleccione Alumno:\n";
        	showAl();
        	std::cin >> res2;
        	system("CLS");
        	std::cout << "OBSERVACIÓN ELIMINADA\n";
        	Alumnos[res2-1][5].clear();
		}
}
void exit()
{
	std::cout << "Está seguro que desea salir?\n";
	std::cout << "1. SI \n2. NO\n\n";
	std::cin >> res;
	if (res == 1)
	{
		yu+=1;
	}
}
