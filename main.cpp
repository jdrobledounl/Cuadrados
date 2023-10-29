#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
using namespace sf;

// Variables
Texture texture_blue;
Texture texture_grey;
Texture texture_red;
Texture texture_yellow;

Sprite sprite_blue;
Sprite sprite_grey;
Sprite sprite_red;
Sprite sprite_yellow;

int main() {

	// cargamos las texturas de los archivos
	texture_blue.loadFromFile("cuad_blue.png");
	texture_grey.loadFromFile("cuad_grey.png");
	texture_red.loadFromFile("cuad_red.png");
	texture_yellow.loadFromFile("cuad_yellow.png");

	// cargamos el material en cada sprite
	sprite_blue.setTexture(texture_blue);
	sprite_grey.setTexture(texture_grey);
	sprite_red.setTexture(texture_red);
	sprite_yellow.setTexture(texture_yellow);

	// El cuadrado azul tiene un tamaño 128x128 px lo llevamos a 256x256
	sprite_blue.setScale(2.0, 2.0);
	// Definimos su posicion
	sprite_blue.setPosition(400 - 256, 300 - 256);

	// El cuadrado gris tiene un tamaño de 64x64 px lo llevamos a 256x256
	sprite_grey.setScale(4.0, 4.0);
	// Definimos su posicion
	sprite_grey.setPosition(400, 300 - 256);

	// El cuadrado rojo queda como esta en 256x256
	sprite_red.setScale(1.0, 1.0);
	// Definimos su posicion
	sprite_red.setPosition(400 - 256, 300);

	// El cuadrado amarillo esta en 512x512 lo llevamos a 256x256
	sprite_yellow.setScale(0.5, 0.5);
	// Definimos su posicion
	sprite_yellow.setPosition(400, 300);



	// creamos la ventana para mostrar los cuadrados escalados
	sf::RenderWindow ventana(sf::VideoMode(800, 600, 32), "Cuadrados escalados");

	// Loop principal 
	while (ventana.isOpen()) {

		// Limpiamos la ventana
		ventana.clear();

		// Dibujamos los cuadrados escalados
		ventana.draw(sprite_blue);
		ventana.draw(sprite_grey);
		ventana.draw(sprite_red);
		ventana.draw(sprite_yellow);

		// Mostramos la ventana
		ventana.display();

	}
	return 0;
}