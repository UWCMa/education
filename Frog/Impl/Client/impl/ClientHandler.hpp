#include "Window.hpp"

class ClientHandler
{
public:
    ClientHandler();
    ~ClientHandler();

    void runApplication();
private:
    Window mWindow;
};
