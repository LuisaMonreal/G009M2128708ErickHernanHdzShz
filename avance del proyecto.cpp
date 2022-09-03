#include <iostream>
#include<conio.h>
#include<string.h>
#include<string>

using namespace std;
int main()
{
int opciones, agre_art; //mod_art, elim_art, Lis_art_vig, salir, //variables que probablemente ocupe
float precio_uni, imp_total, pre_total;
string  nom_juego, año_lan, cla_jue, caracteristicas, descripcion,  gen_jue, consolas;

system("title Avance del proyecto");
system("color 0B");
cout << "\t *** Menu de opciones ***\n";
cout << " 1.-Agregar Articulo\n 2.-Modificar Articulo\n 3.-Eliminar Articulo\n 4.-Lista de Articulos Vigentes\n 5.-limpiar pantalla\n 6.-Salir del Programa\n";
cin >> opciones;

switch (opciones)
{case 1://opcion de agregar articulo
	cout << "  \n";
	cout << "Ingrese el numero que desea asignarle a este articulo\n";//el numero aun se puede repetir, (esta no deberia de pasar) 
	
	//cin.ignore();  // mejor poner la varible como tipo caracter para cubrir las variables de usuario ejemplo 1a, a1, aa1, etc.
	//getline(cin, agre_art); //de ser posible usar esta opcion recordar pasar la variable ("agre_art") a la seccion ("string")
	
	cin>> agre_art;//EL NUMERO NO SE PUEDE REPETIR HAY QUE USAR UN IF PARA QUE NO SE BUGUE EL PROGRAMA Y NO PONER UN CARACTER 
	cout << "  \n";
	
	cout << "ingrese el nombre para el videojuego\n";
	cin.ignore();//hace que se ignore el primer espacio, (aun no se que significa)
	getline(cin, nom_juego);//permite ejecutar los espacios en las variables
	cout << "  \n";

	cout << "ingrese la fecha de lanzamiento\n";
	cin.ignore();
	getline(cin, año_lan);
	cout << "  \n";

	cout << "ingrese la clasificacion del videojuego\n";
	cin.ignore();
	getline(cin, cla_jue);
	cout << "  \n";

	cout << "caracteristicas del videojuego\n";
	cin.ignore();
	getline(cin, caracteristicas);
	cout << "  \n";

	cout << "ingrese la descricion del juego\n";
	cin.ignore();
	getline(cin, descripcion);
	cout << "  \n";
	
	cout << "ingrese el genero del videojuego\n";
	cin.ignore();
	getline(cin, gen_jue);
	cout << "  \n";

	cout << "ingrese el nombre de las consolas con las que es compatible el juego\n";
	cin.ignore();
	getline(cin, consolas);
	cout << "  \n";
	
	cout << "ingresa el precio unitario (precio del proveedor*)\n";//esto es un ejemplo de lo que decia arriba //hay que especificar que solo hay que poner numeros ??? de ingresar otro algun caracter el programa truena 
	cin >> precio_uni;
	imp_total = precio_uni * .16;
	pre_total = precio_uni + imp_total;
	cout << "  \n";
	cout << "el impuesto para el precio unitario ingresado es de: $ " << imp_total << endl;
	cout << "  \n";
	cout << "El precio total es de: $ " << pre_total << endl;
	cout << "  \n";
	
	//system("cls");//borra todas las lineas anteriores en la consola//es para aliminar la opcion de limpiar pantalla solo hay que habilitarla
	system("PAUSE");
	return main();
	break;

case 2://esto opcion deberia modificar el articulo
	cout << "  \n";
	cout << "Esta opcion deberia de modificar el articulo pero de momento no esta disponible\n";
	cout << "  \n";
	system("PAUSE");
	return main();
	break;
case 3://esto opcion deberia poder aliminar el articulo
	cout << "  \n";
	cout << "Esta opcion deberia de aliminar el articulo pero de momento no esta disponible\n";
	cout << "  \n";
	system("PAUSE");
	return main();
	break;
case 4://esto opcion deberia de mostrar los articulos existente
	cout << "  \n";
	cout << "Esta opcion deberia de mostrar los articulo existentes pero de momento no esta disponible\n";
	cout << "  \n";
	system("PAUSE");
	return main();
	break;
case 5://esta opcion limpia toda la pantalla pero no deberia estar llena con nada //elimine al comando en la parte de arriba esta como nota linea de codigo 72.
	cout << "  \n";
	system("cls");//clean se utiliza en web (pero aun no nose como)
	return main();
	break;
case 6://esta opcion te hace salir del programa
	cout << "  \n";
	cout << "gracias por utilizar el programa\n";
	cout << "  \n";
	system("PAUSE");
	break;
default:// esta opcion es para cuando el usuario pone alguna de las opciones que no estan en el switch //cuando el usuario ingresa un caracter el programa vuelve a tronar 
	cout << "  \n";
	system("color 0c");
	cout << "ingrese una de las 6 opcines disponibles\n";
	cout << "  \n";
	system("PAUSE"); //system("PAUSE">null); remueve el msj de presione una tecla para continuar....
	return main();
}

}
