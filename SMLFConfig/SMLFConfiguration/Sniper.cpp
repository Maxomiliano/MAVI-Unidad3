#include "Sniper.h"
#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>
#include <iostream>
using namespace sf;

Sniper::Sniper()
{
	Texture _texture_red_dot;
	Sprite _sprite_red_dot_upleft;
	Sprite _sprite_red_dot_upright;
	Sprite _sprite_red_dot_downleft;
	Sprite _sprite_red_dot_downright;


	_texture_red_dot.loadFromFile("D:/Max/FACU/Materias/Modelos y Algoritmos para Videojuegos I/Unidad3_Assets/rcircle.png");
	_sprite_red_dot_upleft.setTexture(_texture_red_dot);
	_sprite_red_dot_upright.setTexture(_texture_red_dot);
	_sprite_red_dot_downleft.setTexture(_texture_red_dot);
	_sprite_red_dot_downright.setTexture(_texture_red_dot);

	_sprite_red_dot_upleft.setPosition(0, 0);
	_sprite_red_dot_upright.setPosition(672, 0);
	_sprite_red_dot_downright.setPosition(0, 472);
	_sprite_red_dot_downleft.setPosition(672, 472);

	sf::RenderWindow App(sf::VideoMode(800, 600, 32), "Sniper");

	while (App.isOpen())
	{
		App.clear();
		App.draw(_sprite_red_dot_upleft);
		App.draw(_sprite_red_dot_upright);
		App.draw(_sprite_red_dot_downright);
		App.draw(_sprite_red_dot_downleft);
		App.display();
	}
}


