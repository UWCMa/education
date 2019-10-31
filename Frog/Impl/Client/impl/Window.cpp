#include "Window.hpp"
#include "TraceLogger.hpp"
#include<iostream>
Window::Window(unsigned int modeWidth, unsigned int modeHeight, std::string name)
   : sfWindow(sf::VideoMode(modeWidth, modeHeight), name)
{
    LOG_INF();
    sf::Image icon;
    std::cout << "load = " << icon.loadFromFile("icon_4.png");
    LOG_INF("x = ", icon.getSize().x, " y = " , icon.getSize().y );
    sfWindow.setIcon(icon.getSize().x, icon.getSize().y, icon.getPixelsPtr());
}

Window::~Window()
{
    LOG_INF();
}

void Window::execute()
{
    LOG_INF();
    //sf::Color color(255, 0, 0);
	while(sfWindow.isOpen())
    {
        // Обрабатываем события в цикле
        sf::Event event;
        while(sfWindow.pollEvent(event))
        {
            // Кроме обычного способа наше окно будет закрываться по нажатию на Escape
            if(event.type == sf::Event::Closed ||
              (event.type == sf::Event::KeyPressed && event.key.code == sf::Keyboard::Escape))
                sfWindow.close();
        }

        // Очистка
        sfWindow.clear();
        // Тут будут вызываться функции обновления и отрисовки объектов
        // Отрисовка
        sfWindow.display();
    }
}
