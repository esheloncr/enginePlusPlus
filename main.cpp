#include <SFML/Graphics.hpp>
#pragma once

using namespace sf;
using namespace std;


int main()
{
	RenderWindow window(VideoMode(600, 600), "SFML Works!");
	const int W = 40;
	const int H = 12;
	Clock clock;

	// Textures
	float current_frame = 0; 
	Texture t;

	// Map
	String map[H] = {
		"#######################################",
		"#                                     #",
		"#                                     #",
		"#                                     #",
		"#          #####                      #",
		"#                                     #",
		"#                                     #",
		"#                       #####         #",
		"#    #####                            #",
		"#                                     #",
		"#                                     #",
		"#######################################",
	};
	RectangleShape rectangle(Vector2f(32,32));
	while (window.isOpen())
	{
		// for render frame
		float time = clock.getElapsedTime().asMicroseconds();
		clock.restart();
		time = time / 800;

		Event event;
		while (window.pollEvent(event))
		{
			if (event.type == Event::Closed)
				window.close();
		}
	window.clear(Color::White);
	window.display();
	}
	return 0;
}