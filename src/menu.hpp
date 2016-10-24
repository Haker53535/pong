#include <SFML/Graphics.hpp>
#include "button.hpp"

class Menu {
public:
	Menu(sf::RenderWindow &win);
	void setButtons(int windowWidth);
	void draw();
	const int CHARACTER_SIZE = 16;
	const sf::Color TEXT_COLOR = sf::Color::Black;
	const sf::Color BACKGROUND_COLOR = sf::Color::White;
	enum GameMode {
		offline,
		host,
		client
	};
	void checkButtons(sf::Event event, Menu::GameMode *gameMode);
private:
	sf::RenderWindow &window;
	Button joinButton;
	Button hostButton;
	Button playButton;
	sf::Font font;
};
