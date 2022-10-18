#include<iostream>
#include<conio.h>
#include<string>
#include<string.h>
#include<stdio.h>

using namespace std;

int opciones, opcion2, buscar;

struct articulos 
{
	int agre_art, año;
	string nom_jue, cla_jue, caract, descri, gen_jue, conso;
	float pre_uni,imp_total,pre_total;
};

/*

printf("\n");
scanf_s(&);

*/

int main()
{ 
	string buscar2;
	system("title Avance del proyecto 2");
	system("color 0B");
	
	//char esc;
	articulos ingresados[3];


	do 
	{
		system("color 0B");
	  printf("\t \n **Menu De Opciones** \n");
	  printf("\n 1.-Agregar Articulo\n 2.-Modificar Articulo\n 3.-Eliminar Articulo\n 4.-Lista de Articulos Vigentes\n 5.-limpiar pantalla\n 6.-Salir del Programa\n");
	  scanf_s("%d", &opciones);
	  system("cls");
	  switch (opciones)
	  {
	  case 1://agregar articulos
		  for (int i = 0; i < 3; i++)
		  {
			  do
			  {
				  printf("\n ingrese el Numero que desea agregarle a este articulo \n");
				  scanf_s("%d", &ingresados[i].agre_art);
				  if (ingresados[i].agre_art == ingresados[i - 1].agre_art || ingresados[i].agre_art == ingresados[i - 2].agre_art) 
				  {
					  printf("Este numero de articulo ya existe porfavor ingrerse otro.\n");
				  }
			  
			  }
			  while (ingresados[i].agre_art == ingresados[i-1].agre_art || ingresados[i].agre_art == ingresados[i-2].agre_art);

			  

			  printf("\n ingrese el nombre del videojuego \n");
			  cin.ignore();
			  getline(cin, ingresados[i].nom_jue);

			  printf("\n ingrese el a%co de lanzamiento \n",164);
			  scanf_s("%d", &ingresados[i].año);

			  printf("\n ingresa la clasificacion del juego \n");
			  cin.ignore();
			  getline(cin, ingresados[i].cla_jue);
		  
			  printf("\n ingresa las caracteristicas del juego \n");
			  //cin.ignore();
			  getline(cin, ingresados[i].caract);

			  printf("\n ingresa la descripcion del juego \n");
			 // cin.ignore();
			  getline(cin, ingresados[i].descri);

			  printf("\n ingrese el genero del juego \n");
			 // cin.ignore();
			  getline(cin, ingresados[i].gen_jue);

			  printf("\n ingresa el nombre de las consolas con las que el juego es compatible consolas\n");
			 // cin.ignore();
			  getline(cin, ingresados[i].conso);

			  printf("\n ingrese el precio unitario ( precio del proveedor )\n");
			  scanf_s("%f", &ingresados[i].pre_uni);
			  
			  ingresados[i].imp_total = ingresados[i].pre_uni * 0.16;
			  ingresados[i].pre_total = ingresados[i].pre_uni + ingresados[i].imp_total;
			  printf("\n el impuesto es de: $ %f \n", ingresados[i].imp_total);
			  printf("\n el precio total es de: $ %f \n", ingresados[i].pre_total);

			  system("pause");
			  system("cls");
		  }
			  break;

	  case 2:printf("\nEsta opcion no esta programada aun ...\n\n");
		  system("pause");
		  system("cls");
		  break;
	  case 3:printf("\nEsta opcion no esta programada aun ...\n\n");
		  system("pause");
		  system("cls");
		  break;
	  
	  case 4://buscar articulos 
	  	  do
		  {
			  system("color 0A");
			  printf("\n Ingrese la opcion de busqueda \n\n 1.- Mostrar todos los articulos \n 2.- Buscar por numero de articulo \n 3.- Buscar por genero del juego \n 4.- Buscar por clasificacion del juego \n 5.- Salir de este menu \n");
		      scanf_s("%d", &opcion2);
			 

			  switch (opcion2)
			  {
			  case 1://imprime todos los datos 
				  for (int i = 0; i < 3; i++)
				  {
					  if (ingresados[i].agre_art != 0)
					  {
						  printf("\n El numero del articulo es: %d \n", ingresados[i].agre_art);
						  printf("\n El nombre del juego es: %s \n", ingresados[i].nom_jue.c_str());
						  printf("\n El a%co de lanzamiento es: %d \n", 164, ingresados[i].año);
						  printf("\n La clasificacion del juego es: %s \n", ingresados[i].cla_jue.c_str());
						  printf("\n Las caracteristicas del juego es: %s \n", ingresados[i].caract.c_str());
						  printf("\n La descripcion del juego es: %s \n", ingresados[i].descri.c_str());
						  printf("\n El Genero del juego es: %s \n", ingresados[i].gen_jue.c_str());
						  printf("\n Consolas compatibles con el juego es: %s \n", ingresados[i].conso.c_str());
						  printf("\n El precio Unitario fue de: %f \n", ingresados[i].pre_uni);
						  printf("\n El precio del IVA fue de: %f \n", ingresados[i].imp_total);
						  printf("\n El precio total fue de: %f \n", ingresados[i].pre_total);
					  }
				  }
				  system("pause");
				  system("cls");
				  break;

			  case 2:
				  //imprimir los datos por posicion 
				  printf("ingrese el numero del articulo");
				  scanf_s("%d", &buscar);
				  for (int i = 0; i < 3; i++)
				  {
					  if (buscar == ingresados[i].agre_art)
					  {

						  printf("\n El numero del articulo es: %d \n", ingresados[i].agre_art);
						  printf("\n El nombre del juego es: %s \n", ingresados[i].nom_jue.c_str());
						  printf("\n El a%co de lanzamiento es: %d \n",164, ingresados[i].año);
						  printf("\n La clasificacion del juego es: %s \n", ingresados[i].cla_jue.c_str());
						  printf("\n Las caracteristicas del juego es: %s \n", ingresados[i].caract.c_str());
						  printf("\n La descripcion del juego es: %s \n", ingresados[i].descri.c_str());
						  printf("\n El Genero del juego es: %s \n", ingresados[i].gen_jue.c_str());
						  printf("\n Consolas compatibles con el juego es: %s \n", ingresados[i].conso.c_str());
						  printf("\n El precio Unitario fue de: %f \n", ingresados[i].pre_uni);
						  printf("\n El precio del IVA fue de: %f \n", ingresados[i].imp_total);
						  printf("\n El precio total fue de: %f \n", ingresados[i].pre_total);
					  }
				  }
				  system("pause");
				  system("cls");
				  break;			    
			  case 3:
				  //imprimir los datos por genero
				  printf("ingrese el genero del articulo");
				  cin.ignore();
				  getline(cin,buscar2);
				  //scanf_s("%s", &buscar2);
				  for (int i = 0; i < 3; i++)
				  {
					  if (buscar2 == ingresados[i].gen_jue)
					  {

						  printf("\n El numero del articulo es: %d \n", ingresados[i].agre_art);
						  printf("\n El nombre del juego es: %s \n", ingresados[i].nom_jue.c_str());
						  printf("\n El a%co de lanzamiento es: %d \n", 164, ingresados[i].año);
						  printf("\n La clasificacion del juego es: %s \n", ingresados[i].cla_jue.c_str());
						  printf("\n Las caracteristicas del juego es: %s \n", ingresados[i].caract.c_str());
						  printf("\n La descripcion del juego es: %s \n", ingresados[i].descri.c_str());
						  printf("\n El Genero del juego es: %s \n", ingresados[i].gen_jue.c_str());
						  printf("\n Consolas compatibles con el juego es: %s \n", ingresados[i].conso.c_str());
						  printf("\n El precio Unitario fue de: %f \n", ingresados[i].pre_uni);
						  printf("\n El precio del IVA fue de: %f \n", ingresados[i].imp_total);
						  printf("\n El precio total fue de: %f \n", ingresados[i].pre_total);
					  }
				  }
				  system("pause");
				  system("cls");
				  break;

				  case 4://imprime los datos por la clasificacion
				  printf("ingrese la clasificacion del articulo");
				  cin.ignore();
				  getline(cin, buscar2);
				  //scanf_s("%s", &buscar2);
				  for (int i = 0; i < 3; i++)
				  {
					  if (buscar2 == ingresados[i].cla_jue)
					  {

						  printf("\n El numero del articulo es: %d \n", ingresados[i].agre_art);
						  printf("\n El nombre del juego es: %s \n", ingresados[i].nom_jue.c_str());
						  printf("\n El a%co de lanzamiento es: %d \n",164, ingresados[i].año);
						  printf("\n La clasificacion del juego es: %s \n", ingresados[i].cla_jue.c_str());
						  printf("\n Las caracteristicas del juego es: %s \n", ingresados[i].caract.c_str());
						  printf("\n La descripcion del juego es: %s \n", ingresados[i].descri.c_str());
						  printf("\n El Genero del juego es: %s \n", ingresados[i].gen_jue.c_str());
						  printf("\n Consolas compatibles con el juego es: %s \n", ingresados[i].conso.c_str());
						  printf("\n El precio Unitario fue de: %f \n", ingresados[i].pre_uni);
						  printf("\n El precio del IVA fue de: %f \n", ingresados[i].imp_total);
						  printf("\n El precio total fue de: %f \n", ingresados[i].pre_total);
					  }
				  }
				  system("pause");
				  system("cls");
				  break;

				  case 5:
					  printf("\n saiendo del menu de busqueda\n\n");
					  system("pause");
					  system("cls");
					  break;

			  default:
				  system("cls");
				  system("color 0c");
				  printf("\n Ingrese en alguna de las opciones disponibles de este manu \n");
				  system("pause");
				  break;
			  }
		  } while (opcion2 != 5);
		    break;
	                      
	                      
	  
	  case 5://borrar la pantalla 
		  system("cls");
		  break;
	  case 6://cerrar el programa
		  printf("\n Se esta cerrando el programa...\n\n");
		  break;
	    
	  default://por si no ponen una opcion correcta 
		  system("color 0c");
		  printf("\n Ingrese en alguna de las opciones disponibles \n");
		  system("pause");
		  system("cls");
		break;
	  }
		
	
	} while (opciones != 6);
	system("pause");
}