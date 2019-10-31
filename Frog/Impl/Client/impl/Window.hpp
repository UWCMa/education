#define SFML_STATIC
#include <SFML/Graphics.hpp>
#include <SFML/OpenGL.hpp>

class Window
{
public:
    Window(unsigned int, unsigned int, std::string );
    ~Window();

    void execute();

private:
   sf::RenderWindow sfWindow;
};
