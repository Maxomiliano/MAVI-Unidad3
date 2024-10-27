#include "Transparencias.h"
#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>
#include <iostream>
using namespace sf;

Transparencias::Transparencias()
{
	Texture _circuloAzul;
	Sprite _spriteCirculoAzul;

	_circuloAzul.loadFromFile("bcircle.png");

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
}

/*
Bueno en este ejercicio en un principio "hice trampa" porque usé el setOrigin que aprendí en el ejercicio de rotar el cuadrado,
con lo cual ubico al circulo en la posición que representa la mitad de la resolucion de la ventana, en este caso era 400x300.
Luego suponiendo que no era el caso del ejercicio, básicamente le resté la mitad de la resolución de la imagen a la posX tanto como a la posY y me dio igual.
*/