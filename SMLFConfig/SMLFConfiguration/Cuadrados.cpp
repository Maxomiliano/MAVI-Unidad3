#include "Cuadrados.h"
#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>
#include <iostream>
using namespace sf;

Cuadrados::Cuadrados()
{
	Texture _cuadradoRojo;
	Texture _cuadradoAmarillo;
	Texture _cuadradoAzul;
	Texture _cuadradoNegro;

	Sprite _spriteCuadradoRojo;
	Sprite _spriteCuadradoAmarillo;
	Sprite _spriteCuadradoAzul;
	Sprite _spriteCuadradoNegro;

	float escalaXrojo;
	float escalaYrojo;

	float escalaXazul;
	float escalaYazul;

	float escalaXnegro;
	float escalaYnegro;

	float heightCuadradoAmarillo;
	float widthCuadradoAmarillo;

	float heightCuadradoRojo;
	float widthCuadradoRojo;

	float heightCuadradoAzul;
	float widthCuadradoAzul;

	float heightCuadradoNegro;
	float widthCuadradoNegro;

	_cuadradoRojo.loadFromFile("cuad_red.png");
	_cuadradoAmarillo.loadFromFile("cuad_yellow.png");
	_cuadradoAzul.loadFromFile("cuad_blue.png");
	_cuadradoNegro.loadFromFile("chessb.png");

	sf::RenderWindow App(sf::VideoMode(1024, 1024, 32), "Cuadrados");


	_spriteCuadradoRojo.setTexture(_cuadradoRojo);
	_spriteCuadradoAmarillo.setTexture(_cuadradoAmarillo);
	_spriteCuadradoAzul.setTexture(_cuadradoAzul);
	_spriteCuadradoNegro.setTexture(_cuadradoNegro);

	_spriteCuadradoRojo.setPosition(0, 0);
	_spriteCuadradoAmarillo.setPosition(512, 0);
	_spriteCuadradoAzul.setPosition(0, 512);
	_spriteCuadradoNegro.setPosition(512, 512);

	heightCuadradoAmarillo = (float)_cuadradoAmarillo.getSize().y;
	heightCuadradoRojo = (float)_cuadradoRojo.getSize().y;
	heightCuadradoAzul = (float)_cuadradoAzul.getSize().y;
	heightCuadradoNegro = (float)_cuadradoNegro.getSize().y;

	widthCuadradoAmarillo = (float)_cuadradoAmarillo.getSize().x;
	widthCuadradoRojo = (float)_cuadradoRojo.getSize().x;
	widthCuadradoAzul = (float)_cuadradoAzul.getSize().x;
	widthCuadradoNegro = (float)_cuadradoNegro.getSize().x;

	escalaXrojo = heightCuadradoAmarillo / heightCuadradoRojo;
	escalaYrojo = widthCuadradoAmarillo / widthCuadradoRojo;
	_spriteCuadradoRojo.setScale(escalaXrojo, escalaYrojo);

	escalaXazul = heightCuadradoAmarillo / heightCuadradoAzul;
	escalaYazul = widthCuadradoAmarillo / widthCuadradoAzul;
	_spriteCuadradoAzul.setScale(escalaXazul, escalaYazul);

	escalaXnegro = heightCuadradoAmarillo / heightCuadradoNegro;
	escalaYnegro = widthCuadradoAmarillo / widthCuadradoNegro;
	_spriteCuadradoNegro.setScale(escalaXnegro, escalaYnegro);

	while (App.isOpen())
	{
		App.clear();
		App.draw(_spriteCuadradoRojo);
		App.draw(_spriteCuadradoAmarillo);
		App.draw(_spriteCuadradoAzul);
		App.draw(_spriteCuadradoNegro);
		App.display();
	}
}

/*
En este ejercicio básicamente sigo los cálculos del apunte entonces usando de referencia el cuadrado amarillo que tiene un tamaño de 512x512,
seteo la resolución de la ventana al doble, es decir 1024x1024 y trato de escalar los otros cuadrados al tamaño del amarillo.
Tengo una leve sensación de que el cuadrado azul está minimamente corrido en X.
Bueno algo de este código me dice que se podría simplificar,
por ejemplo usando un for quizas y seteando al mismo sprite las diferentes texturas.
*/