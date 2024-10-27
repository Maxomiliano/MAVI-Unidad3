// SMLFConfiguration.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//
#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>
#include <iostream>
using namespace sf;

Texture _circuloAzul;
Sprite _spriteCirculoAzul;

int main()
{
	_circuloAzul.loadFromFile("D:/Max/FACU/Materias/Modelos y Algoritmos para Videojuegos I/Unidad3_Assets/bcircle.png");

	sf::RenderWindow App(sf::VideoMode(800, 600, 32), "Transparencias");

	_spriteCirculoAzul.setTexture(_circuloAzul);
	//_spriteCirculoAzul.setOrigin(190, 190);
	_spriteCirculoAzul.setPosition(210, 110);

	while (App.isOpen())
	{
		App.clear();
		App.draw(_spriteCirculoAzul);
		App.display();
	}
	return 0;
}
























// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
