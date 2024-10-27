#include "Rotacion.h"
#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>
#include <iostream>
using namespace sf;

Rotacion::Rotacion()
{
	Texture _cuadradoAzul;
	Sprite _spriteCuadrado;

	_cuadradoAzul.loadFromFile("cuad_blue.png");

	sf::RenderWindow App(sf::VideoMode(800, 600, 32), "Rotacion");

	while (App.isOpen())
	{
		App.clear();
		_spriteCuadrado.setTexture(_cuadradoAzul);
		_spriteCuadrado.setPosition(150, 150);
		_spriteCuadrado.setOrigin(64, 64);
		_spriteCuadrado.rotate(1);
		App.draw(_spriteCuadrado);
		App.display();
	}
}

/*
En este ejercicio le pongo una posición cualquiera al cuadrado y arranqué con la función rotate,
pensé que sólo iba a ser eso hasta que vi que se rotaba desde uno de sus vértices y no desde su centro,
así que averiguando llegué a la función setOrigin. Le paso 64,64 porque es la mitad en px de la imagen. 
*/
