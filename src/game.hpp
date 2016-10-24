#include <SFML/Graphics.hpp>
#include <iostream>

#include "ball.hpp"
#include "paddle.hpp"
#include "menu.hpp"

using namespace sf;

class Game {
private:
	Menu menu;
	Ball ball;
	Paddle player1;
	Paddle player2;

	const int WINDOW_WIDTH = 640, WINDOW_HEIGHT = 480;
	const float BALL_RADIUS = 10, PADDLE_WIDTH = 10, PADDLE_HEIGHT = 50;
	const unsigned int MAX_FPS = 60;

public:
	RenderWindow window;
	Game();

	void start();
	void loop();
	void setBallAndPaddlesPosition();

	Menu::GameState gameState;
	Menu::GameMode gameMode;
};
