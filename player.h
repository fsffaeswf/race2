#pragma once
#include <SFML/Graphics.hpp>
#include "settings.h"

struct Player {
	sf::Texture texture;
	sf::Sprite sprite;
};

void player_init(Player& obj, sf::Vector2f pos, std::string filename) {
	obj.texture.loadFromFile(filename);
	obj.sprite.setTexture(obj.texture);
	obj.sprite.setPosition(pos);
}
void player_update(Player& obj) {
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::A)) { obj.sprite.move(car_speed,0); }

	if (sf::Keyboard::isKeyPressed(sf::Keyboard::D)) { obj.sprite.move(-car_speed,0); }
}
void player_draw(Player& obj, sf::RenderWindow& window) {
	window.draw(obj.sprite);
}
