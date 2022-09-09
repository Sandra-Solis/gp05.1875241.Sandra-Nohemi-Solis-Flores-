#include <iostream>
#include <conio.h>
#include <string.h>
#include <string>

using namespace std;
int main()
{
	int numarticulo, opcion;
	float precio_unitario;
	string articulo, descripcion, categoria, clasificacion,fecha;

	cout << "\t ***TIENDA DE VIDEOJUEGOS*** \n";
	cout << " 1.-Agregar Articulo \n";
	cout << " 2.-Modificar Articulo\n";
	cout << " 3. - Eliminar Articulo\n";
	cout << "4. - Lista Articulo\n";
	cout << "5. - Limpiar Pantalla\n";
	cout << "6. - Salir\n";
	cin >> opcion;

	switch (opcion)
	{
	case 1: //Agregar Articulo
		cout << "Ingrese el numero de articulo \n";
		cin >> numarticulo;
		cout << "ingrese el nombre del articulo\n";
		cin.ignore();//me ignora el primer espacio 
		getline(cin, articulo); //permite ejecutar los espacios en la variable
		cout << "ingrese el descripcion del articulo\n";
		cin.ignore();
		getline(cin, descripcion);
		cout << "ingrese la clasificacion del articulo\n";
		cin.ignore();
		getline(cin, clasificacion);
		cout << "ingrese la fecha  del articulo\n";
		cin.ignore();
		getline(cin, fecha);
		cout << "ingrese la categoria del articulo\n";
		cin.ignore();
		getline(cin, categoria);
		cout << "ingrese el precio unitario del articulo\n";
		cin >> precio_unitario;
		return main();
		break;

	case 2: //Modificar Articulo
		
			if (opcion) {
				cout << "ingresar el primer juego a modificar\n";
				cin >> articulo;
				cout << "Ingrese el numero de articulo a modificar \n";
				cin >> numarticulo;
				cout << "Ingrese la clasificacion de articulo a modificar \n";
				cin >> clasificacion;
				cout << "Ingrese el precio de articulo a modificar \n";
				cin >> precio_unitario;


			}
			else {
				cout << "no se puede modificar\n";
				cout << "hablar con el gerente\n";
			}
			if (opcion) {
				cout << "ingresar el  segundo juego a modificar\n";
				cin >> articulo;
				cout << "Ingrese el numero de articulo a modificar \n";
				cin >> numarticulo;
				cout << "Ingrese la clasificacion de articulo a modificar \n";
				cin >> clasificacion;
				cout << "Ingrese el precio de articulo a modificar \n";
				cin >> precio_unitario;


			}
			else {
				cout << "no se puede modificar\n";
				cout << "hablar con el gerente\n";

			}

			if (opcion) {
				cout << "ingresar el tercer juego a modificar\n";
				cin >> articulo;
				cout << "Ingrese el numero de articulo a modificar \n";
				cin >> numarticulo;
				cout << "Ingrese la clasificacion de articulo a modificar \n";
				cin >> clasificacion;
				cout << "Ingrese el precio de articulo a modificar \n";
				cin >> precio_unitario;


			}
			else {
				cout << "no se puede modificar\n";
				cout << "hablar con el gerente\n";
			}

		break;

	case 3://Eliminar Articulo
		if (opcion) {
			cout << "ingresar el primer juego a eliminar\n";
			cin >> articulo;
			cout << "Ingrese el numero de articulo a eliminar\n";
			cin >> numarticulo;
			cout << "Ingrese el precio de articulo a eliminar\n";
			cin >> precio_unitario;


		}
		else {
			cout << "no se puede eliminar el juego\n";
			cout << "hablar con el gerente\n";
		}
		if (opcion) {
			cout << "ingresar el primer juego a eliminar\n";
			cin >> articulo;
			cout << "Ingrese el numero de articulo a eliminar\n";
			cin >> numarticulo;
			cout << "Ingrese el precio de articulo a eliminar\n";
			cin >> precio_unitario;


		}
		else {
			cout << "no se puede eliminar el juego\n";
			cout << "hablar con el gerente\n";
		}
		if (opcion) {
			cout << "ingresar el primer juego a eliminar\n";
			cin >> articulo;
			cout << "Ingrese el numero de articulo a eliminar\n";
			cin >> numarticulo;
			cout << "Ingrese el precio de articulo a eliminar\n";
			cin >> precio_unitario;
		}
		else {
			cout << "no se puede eliminar el juego\n";
			cout << "hablar con el gerente\n";
		}


		break;

	case 4: //Lista de Articulos
		cout << "ingrese la lista de los articulos\n";
		cin >> numarticulo;


		break;

	case 5: //Limpiar Pantalla
		system("cls"); //clean  se utiliza en web 
		return main();
		break;

	case 6: //salir
		cout << "Gracias por utilizar el programa \n";
		break;

	default:
		cout << "ingrese una opcion correcta \n";
		return main();

	}

}
