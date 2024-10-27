#include "Fondo.h"
#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>
#include <iostream>
using namespace sf;

Fondo::Fondo()
{
	Texture _fondo;
	Sprite _spriteBackground;

	_fondo.loadFromFile("fondo.jpg");

	sf::RenderWindow App(sf::VideoMode(800, 600, 32), "Fondo");

	while (App.isOpen())
	{
		App.clear();

		_spriteBackground.setTexture(_fondo);
		_spriteBackground.setScale(0.8, 0.8);
		App.draw(_spriteBackground);
		App.display();
	}
}

/*
Con este ejercicio me surgi� una duda porque supuse que s�lo con el setScale() podia tirar valores al azar y pegarle,
de hecho me qued� con el 0.8 porque se ve�a la imagen.
Aqu� supongo que puedo volver a hacer lo de la regla de 3 que hiceen el ejercicio del ajedrez para sacar el tama�o exacto del la celda,
pero tambi�n, si la intenci�n de este ejercicio es usar el factor de escala,
lo �nico que se me ocurr�a era agregar como textura a alguna imagen aleatoria pero de tama�o 800x600 
(el mismo de la ventana) y escalar el sprite con la textura fondo a la imagen de 800x600.
*/