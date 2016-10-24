#include "button.hpp"

Button::Button(sf::RenderWindow &win) : window(win){
}
void Button::draw() {
	window.draw(background);
	window.draw(text);

}
void Button::setPosition (float x, float y){
	background.setPosition(x, y);
}
void Button::setDimensions (float width, float height) {
	background.setSize({width , height});
	text.setPosition( background.getPosition().x + width / 2 - text.getLocalBounds().width / 2,
	 					background.getPosition().y + height / 2 - text.getLocalBounds().height / 2);
}
bool Button::isClicked(sf::Event event){
	if(event.mouseButton.x > background.getPosition().x
		&& event.mouseButton.x < background.getPosition().x + background.getSize().x
		&& event.mouseButton.y > background.getPosition().y
		&& event.mouseButton.y < background.getPosition().y + background.getSize().y)
	return true;
	return false;
}
void Button::setFont(sf::Font &font){
	text.setFont(font);
}
void Button::setColors(sf::Color backgroundColor, sf::Color textColor){
	text.setColor(textColor);
	background.setFillColor(backgroundColor);
}
void Button::setText(std::string textString){
	text.setString(textString);
}
void Button::setCharacterSize(int characterSize){
	text.setCharacterSize(characterSize);
}
