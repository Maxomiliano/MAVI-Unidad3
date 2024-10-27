#include "Plataformas.h"
#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>
#include <iostream>
using namespace sf;

Plataformas::Plataformas()
{

	Texture _plataforma;
	Texture _plataformaNegra;

	Sprite _spritePlatform;

	_plataforma.loadFromFile("D:/Max/FACU/Materias/Modelos y Algoritmos para Videojuegos I/Unidad3_Assets/plataforma.jpg");
	_plataformaNegra.loadFromFile("D:/Max/FACU/Materias/Modelos y Algoritmos para Videojuegos I/Unidad3_Assets/chessb.png");

	sf::RenderWindow App(sf::VideoMode(800, 600, 32), "Plataformas");

	while (App.isOpen())
	{
		App.clear();

		for (int platform = 0; platform < 14; platform++)
		{
			if (platform % 2 == 0)
			{
				_spritePlatform.setTexture(_plataforma);
			}
			else
			{
				_spritePlatform.setTexture(_plataformaNegra);
			}
			_spritePlatform.setScale(0.4, 0.4 + platform * 0.1);
			float _spriteHeight = _spritePlatform.getGlobalBounds().height;
			_spritePlatform.setPosition(platform * 40, 600 - _spriteHeight);
			App.draw(_spritePlatform);

		}

		for (int platformBase = 0; platformBase < 5; platformBase++)
		{
			_spritePlatform.setTexture(_plataforma);
			_spritePlatform.setScale(0.2, 0.2);
			_spritePlatform.setPosition(560 + (platformBase * 40), 185);
			App.draw(_spritePlatform);
		}
		App.display();
	}
}

/*
Bueno este fue m�s complicado pero utilic� la misma l�gica que la del ajedrez con lo cual no tard�
en darme cuenta de que iba a tener que agregar una textura con una imagen completamente 
negra para hacer los espacios. 
El numero 14 con el que itero el for es completamente aleatorio, en realidad pens� en dividir
los 800 del largo de la pantalla en 20 para que los ultimos espacios correspondieran a la plataforma horizontal.
Lo interesante es que encontr� c�mo acceder a la propiedad altura entonces en cada iteracion guardo la altura del sprite en una variable.
Luego para ubicar los sprites (esto es lo que m�s me cost�) los posiciono separados por 40px que es tambien un numero aleatorio
porque ya no tenia ganas de sacar el c�lculo y qued� bien ese espacio. La escala tambi�n fue aleatoria,
en el for le voy sumando 0.1 por cada iteraci�n para hacer los pilares m�s altos.

Luego hago otro for similar pero s�lo sumo los pilares en X y antes lo escalo un poco m�s chico. 
Me qued� un poco desfasada la altura del ultimo pilar con la base de la plataforma horizontal pero creo que se entiende. 
Ese 185 lo saqu� restando el tama�o del ultimo _spriteHeight_ que con los puntos de quiebre del visual me dio 435 y le rest� eso a 600 del alto de la pantalla.
Me da 165 pero lo acomod� a 185. Tambi�n me qued� de grosor diferente a los dem�s pero eso ya era probar n�meros en el setScale.
*/