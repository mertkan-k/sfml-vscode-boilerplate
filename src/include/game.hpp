#ifndef GAME_H
#define GAME_H

#include "Platform/Platform.hpp"

namespace Game
{
class game
{
private:
	sf::RenderWindow* window; /* Upper window */

public: /* constructor and destructor */
	game(sf::RenderWindow* window);
	~game();

public:										/* functions from window management */
	void HandlePollEvent(sf::Event* event); /* Calling from main.window.pollEvent */

	/* General gui events */
	void CloseEvent();
	void ResizeEvent(sf::Event::SizeEvent& size);

	/* Focus events */
	void LostFocusEvent();
	void GainedFocusEvent();

	/* Text events */
	void TextEnteredEvent(sf::Event::TextEvent& text);

	/* Key events */
	void KeyPressedEvent(sf::Event::KeyEvent& key);
	void KeyReleasedEvent(sf::Event::KeyEvent& key);

public:					   /* functions from display */
	void RefreshDisplay(); /* Calling from main.window.isOpen() */
};						   // class game

} // namespace Game

#endif // GAME_H
