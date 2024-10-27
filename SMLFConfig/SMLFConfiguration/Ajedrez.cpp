#include "Ajedrez.h"
#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>
#include <iostream>
using namespace sf;


Ajedrez::Ajedrez()
{
	Texture _textureBlackSquare;
	Texture _textureWhiteSquare;

	Sprite _spriteSquare;


	_textureBlackSquare.loadFromFile("chessb.png");
	_textureWhiteSquare.loadFromFile("chessw.png");

	sf::RenderWindow App(sf::VideoMode(800, 800, 32), "Ajedrez");

	while (App.isOpen())
	{
		App.clear();
		for (int fila = 0; fila < 8; fila++)
		{
			for (int columna = 0; columna < 8; columna++)
			{
				if ((fila + columna) % 2 == 0)
				{
					_spriteSquare.setTexture(_textureWhiteSquare);
				}
				else
				{
					_spriteSquare.setTexture(_textureBlackSquare);
				}
				_spriteSquare.setPosition(columna * 100, fila * 100);
				_spriteSquare.setScale(0.78125, 0.78125);
				App.draw(_spriteSquare);
			}
		}
		App.display();
	}
}

/*
Bien este ejercicio me costó mucho al principio pero luego pude sortear las dificultades.
Básicamente uso 2 for donde voy a ir seteando el sprite en cada casilla,
y si el módulo de la suma entre el indice de la fila y el de la casilla en esa iteracion del for me da par, coloco una casilla blanca, sino una negra.
En el setPosition multiplico por 100 para ubicar las casillas ej si la columna es 5 la ubico en el lugar 500px y luego
lo ultimo no hizo mucha diferencia pero con una regla de 3 escalé el archivo que venia en 128x128 para que me quede 100x100 y quede perfectamente ubicado.
*/