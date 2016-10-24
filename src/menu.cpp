#include "menu.hpp"

Menu::Menu(sf::RenderWindow &win) : window(win), joinButton(window), hostButton(window), playButton(window) {
	font.loadFromFile("/usr/share/fonts/truetype/freefont/FreeSans.ttf");
}
void Menu::checkButtons(sf::Event event, GameMode *gameMode, GameState *gameState){
	if (playButton.isClicked(event)){
		*gameMode = GameMode::offline;
		*gameState = GameState::play;
	}
	if (joinButton.isClicked(event)){
		*gameMode = GameMode::client;
		*gameState = GameState::play;
	}
	if (hostButton.isClicked(event)){
		*gameMode = GameMode::host;
		*gameState = GameState::play;
	}
}
void Menu::draw(){
	joinButton.draw();
	hostButton.draw();
	playButton.draw();
}
void Menu::setButtons(int windowWidth){
	playButton.setCharacterSize(CHARACTER_SIZE);
	playButton.setColors(BACKGROUND_COLOR, TEXT_COLOR);
	playButton.setText("Play Offline");
	playButton.setFont(font);
	playButton.setPosition(windowWidth / 2 - 50, 100);
	playButton.setDimensions(100, 30);

	joinButton.setCharacterSize(CHARACTER_SIZE);
	joinButton.setColors(BACKGROUND_COLOR, TEXT_COLOR);
	joinButton.setText("Join Game");
	joinButton.setFont(font);
	joinButton.setPosition(windowWidth / 2 - 50, 140);
	joinButton.setDimensions(100, 30);

	hostButton.setCharacterSize(CHARACTER_SIZE);
	hostButton.setColors(BACKGROUND_COLOR, TEXT_COLOR);
	hostButton.setText("Host Game");
	hostButton.setFont(font);
	hostButton.setPosition(windowWidth / 2 - 50, 180);
	hostButton.setDimensions(100, 30);
}
