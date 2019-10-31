#include "ClientHandler.hpp"
#include "TraceLogger.hpp"

ClientHandler::ClientHandler()
    : mWindow(800, 600, "Frog")
{
    LOG_INF();
}

ClientHandler::~ClientHandler()
{
    LOG_INF();
}

void ClientHandler::runApplication()
{
    LOG_INF();
    mWindow.execute();
}
