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
Bueno este fue más complicado pero utilicé la misma lógica que la del ajedrez con lo cual no tardé
en darme cuenta de que iba a tener que agregar una textura con una imagen completamente 
negra para hacer los espacios. 
El numero 14 con el que itero el for es completamente aleatorio, en realidad pensé en dividir
los 800 del largo de la pantalla en 20 para que los ultimos espacios correspondieran a la plataforma horizontal.
Lo interesante es que encontré cómo acceder a la propiedad altura entonces en cada iteracion guardo la altura del sprite en una variable.
Luego para ubicar los sprites (esto es lo que más me costó) los posiciono separados por 40px que es tambien un numero aleatorio
porque ya no tenia ganas de sacar el cálculo y quedó bien ese espacio. La escala también fue aleatoria,
en el for le voy sumando 0.1 por cada iteración para hacer los pilares más altos.

Luego hago otro for similar pero sólo sumo los pilares en X y antes lo escalo un poco más chico. 
Me quedó un poco desfasada la altura del ultimo pilar con la base de la plataforma horizontal pero creo que se entiende. 
Ese 185 lo saqué restando el tamaño del ultimo _spriteHeight_ que con los puntos de quiebre del visual me dio 435 y le resté eso a 600 del alto de la pantalla.
Me da 165 pero lo acomodé a 185. También me quedó de grosor diferente a los demás pero eso ya era probar números en el setScale.
*/