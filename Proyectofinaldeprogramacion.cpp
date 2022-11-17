#include <iostream>
#include <conio.h>
#include <string.h>
#include <string>
#include <stdio.h>
#include <fstream>
#include <stdlib.h>

using namespace std;
//declaracion de variables

int* id, * año, registros, desicion, n = 1;
string* nombre, * clasificacion, * caracteristicas, * genero, * descripcion;
float* precio, * iva, * total;

//funciones con void
void AgregarArt();
void Eliminar();
void Lista();
void Modificar();
void Archivo();

int main()
{
	int opciones;
	do
	{
		system("color 05");
		printf("\t **Menu de opciones**\n");
		printf(" 1.- Agregar articulos \n 2.- Modificar articulos \n 3.- Eliminar Articulo \n 4.- Lista de Articulos \n 5.- Limpiar Pantalla \n 6.- Salir \n");
		scanf_s("%d", &opciones);

		switch (opciones)
		{
		case 1:
			system("color 0F");
			AgregarArt();
			system("pause");
			return main();
			break;

		case 2:
			system("color 0E");
			Modificar();
			system("pause");
			return main();
			break;

		case 3:
			system("color 0A");
			Eliminar();
			system("pause");
			return main();
			break;

		case 4:
			system("color 09");
			Lista();
			system("pause");
			return main();
			break;

		case 5:
			system("color 0B");
			system("pause");
			system("cls");
			return main();
			break;

		case 6:
			Archivo();
			exit();
			break;

		default:
			system("color 0C");
			printf(" Ingresa una de las 6 opciones disponibles\n");
			system("pause");
		}
	} while (opciones != 6);
}

void AgregarArt()
{
	printf("cuantos registros desea dar de alta \n");
	scanf_s("%d", &registros);
	id = new int[registros];
	año = new int[registros];
	nombre = new string[registros];
	clasificacion = new string[registros];
	caracteristicas = new string[registros];
	genero = new string[registros];
	descripcion = new string[registros];
	precio = new float[registros];
	iva = new float[registros];
	total = new float[registros];
	//arreglo

	for (int i = 0; i < registros; i++)
	{
		printf(" Ingrese el Numero del articulo \n");
		scanf_s("%d", &id[i]);
		do
		{
			if (id[i] != id[i - n])
			{
				n = n + 1;

			}
			else
			{
				printf(" El articulo ya existe \n");
				printf(" Ingrese el articulo \n");
				scanf_s("%d", &id[i]);
			}
		} while (n < registros);

		printf(" Escribe el a%co del articulo \n",164);
		scanf_s("%d", &año[i]);
		printf(" Escribe el nombre del articulo \n");
		cin.ignore();
		getline(cin, nombre[i]);
		printf(" Ingrese la Clasificacion \n");
		getline(cin, clasificacion[i]);
		printf(" Ingrese las Caracteristicas \n");
		getline(cin, caracteristicas[i]);
		printf(" Ingrese el Genero \n");
		getline(cin, genero[i]);
		printf(" Ingrese la Descripcion \n");
		getline(cin, descripcion[i]);
		printf(" Ingrese el Precio Unitorio\n");
		scanf_s("%f", &precio[i]);
		iva[i] = precio[i] * .16;
		total[i] = precio[i] + iva[i];

	}
}

void Eliminar()
{
	int elimi;
	printf(" Ingrese el Numero del Articulo a Elimnar\n");
	scanf_s("%d", &elimi);

	for (int i = 0; i < registros; i++)
	{
		if (elimi == id[i])
		{
			id[i] = 0;
		}
	}
}

void Lista()
{
	int opcion2;
	string busqueda;

	printf("   Menu #2 \n\n 1.- Buscar por clasificacion \n 2.-Buscqueda por genro \n 3.- Salir de este Menu \n");
	scanf_s("%d", &opcion2);
	switch (opcion2)
	{
	case 1:
		printf(" Ingresa la clasificacion que desea buscar\n");
		cin.ignore();
		getline(cin, busqueda);

		for (int i = 0; i < registros; i++)
		{
			if (clasificacion[i] == busqueda)
			{
				if (id[i] != 0)
				{
					printf(" Nombre del videojuego: %s\n", nombre[i].c_str());
					printf(" Numero del articulo: %d\n", id[i]);
					printf(" El a%co es: %d\n", 164, año[i]);

					printf(" Clasificacion del juego: %s\n", clasificacion[i].c_str());
					printf(" El genero es : %s\n", genero[i].c_str());
					printf(" Las caracteristicas son: %s\n", caracteristicas[i].c_str());
					printf(" La descripcion es: %s\n", descripcion[i].c_str());

					printf(" El Precio Unitario es : %f\n", precio[i]);
					printf(" El iva es: %f\n", iva[i]);
					printf(" El precio total es: %f\n", total[i]);
				}
			}
		}
		break;

	case 2:
		printf(" Ingresa el genero que desea buscar\n");
		cin.ignore();
		getline(cin, busqueda);
		for (int i = 0; i < registros; i++)
		{
			if (genero[i] == busqueda)
			{
				if (id[i] != 0)
				{
					printf(" Nombre del videojuego: %s\n", nombre[i].c_str());
					printf(" Numero del articulo: %d\n", id[i]);
					printf(" El a%co es: %d\n", 164, año[i]);

					printf(" Clasificacion del juego: %s\n", clasificacion[i].c_str());
					printf(" El genero es : %s\n", genero[i].c_str());
					printf(" Las caracteristicas son: %s\n", caracteristicas[i].c_str());
					printf(" La descripcion es: %s\n", descripcion[i].c_str());

					printf(" El Precio Unitario es : %f\n", precio[i]);
					printf(" El iva es: %f\n", iva[i]);
					printf(" El precio total es: %f\n", total[i]);
				}
			}
		}
		break;

	case 3:
		printf("saliendo de este manu..");
		system("pause");
		break;
	}
}

void Modificar()
{
	int modifi;
	do
	{
		printf(" Ingresa el numero del Articulo que desea modificar \n");
		scanf_s("%d", &modifi);

	} while (modifi <= 0);

	for (int i = 0; i < registros; i++)
	{
		if (modifi = id[i])
		{
			printf(" Ingrese el a%co\n", 164);
			scanf_s("%d", &año[i]);

			printf(" Ingresa el nombre del articulo\n");
			cin.ignore();
			getline(cin, nombre[i]);

			printf(" Ingrese la clasificacion\n");
			getline(cin, clasificacion[i]);

			printf(" Ingresa el caracteristicas\n");
			getline(cin, caracteristicas[i]);

			printf(" Ingresa las genero\n");
			getline(cin, genero[i]);

			printf(" Ingresa la descripcion\n");
			getline(cin, descripcion[i]);

			printf(" Ingresa el precio Unitario \n");
			scanf_s("%f", &precio[i]);
			iva[i] = precio[i] * .16;
			total[i] = precio[i] + iva[i];
		}
	}
}

void Archivo()
{
	ofstream archi;
	string nombre;

	nombre = "DatosAutoGuardados.txt";
	archi.open(nombre.c_str(), ios::out);

	if (archi.fail())
	{
		printf(" Error al genrar el archivo\n");
		system("pause");
		exit(1);
	}

	archi << "\t\t Informacion \n";
	for (int i = 0; i < registros; i++)
	{
		if (id[i] != 0)
		{
			archi << "dato:" << i + 1 << endl;
			archi << "articulo:" << id[i] << endl;
			archi << "anio:" << año[i] << endl;
			archi << "videojuego:" << nombre[i] << endl;
			archi << "clasificacion:" << clasificacion[i] << endl;
			archi << "genero:" << genero[i] << endl;
			archi << "caracteristicas:" << caracteristicas[i] << endl;
			archi << "descripcion:" << descripcion[i] << endl;
			archi << "precio:" << precio[i] << endl;
			archi << "iva:" << iva[i] << endl;
			archi << "total:" << total[i] << endl;
		}
	}
	system("pause");
	archi.close();
}
