#include "include/game.hpp"

using namespace Game;

void game::HandlePollEvent(sf::Event* event)
{
	switch (event->type)
	{
		using namespace sf;

		case (Event::Closed):
			CloseEvent();
			break;

		case (Event::Resized):
			ResizeEvent(event->size);
			break;

		case (Event::LostFocus):
			LostFocusEvent();
			break;

		case (Event::GainedFocus):
			GainedFocusEvent();
			break;

		case (Event::TextEntered):
			// TextEnteredEvent(event->text);
			break;

		case (Event::KeyPressed):
			KeyPressedEvent(event->key);
			break;

		default:
			break;
	}
}

void game::CloseEvent()
{
	std::cout << "window closed" << std::endl;
	this->window->close();
}

void game::ResizeEvent(sf::Event::SizeEvent& size)
{
	std::cout << "new width: " << size.width << std::endl;
	std::cout << "new height: " << size.height << std::endl;
}

void game::LostFocusEvent()
{
	std::cout << "focus losted" << std::endl;
}

void game::GainedFocusEvent()
{
	std::cout << "focus gained" << std::endl;
}

void game::TextEnteredEvent(sf::Event::TextEvent& text)
{
	if (text.unicode < 128)
		std::cout << "ASCII character typed: " << static_cast<char>(text.unicode) << std::endl;
}

void game::KeyPressedEvent(sf::Event::KeyEvent& key)
{
	if (key.code == sf::Keyboard::BackSpace)
	{
		std::cout << "the BackSpace key was pressed" << std::endl;
		std::cout << "control:" << key.control << std::endl;
		std::cout << "alt:" << key.alt << std::endl;
		std::cout << "shift:" << key.shift << std::endl;
		std::cout << "system:" << key.system << std::endl;
	}
}

void game::KeyReleasedEvent(sf::Event::KeyEvent& key)
{
	std::cout << "key released" << key.code << std::endl;
}