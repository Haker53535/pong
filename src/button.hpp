#include <SFML/Graphics.hpp>

class Button {
public:
	Button(sf::RenderWindow &win);
	void draw();
void setPosition(float x, float y);
	void setDimensions(float width, float height);
	bool isClicked(sf::Event event);
	void setFont(sf::Font &font);
	void setColors(sf::Color backgroundColor, sf::Color textColor);
	void setText(std::string textString);
	void setCharacterSize(int characterSize);

private:
	sf::RenderWindow& window;
	sf::Text text;
	sf::RectangleShape background;
	sf::Event event;
	sf::Color backgroundColor;
	sf::Color textColor;
	int width, height;
	std::string textString;
	int characterSize;
};
