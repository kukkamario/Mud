#ifndef GAMEMESSAGEHANDLER_H
#define GAMEMESSAGEHANDLER_H
#include "messagehandler.h"
#include <memory>
#include "commandparser.h"
class Player;
class Character;
class LevelEventQueue;
class GameMessageHandler : public MessageHandler {
public:
    GameMessageHandler(Client *c, const std::shared_ptr<Character> &character);
    ~GameMessageHandler();
    void handle(const std::shared_ptr<Client> &client, const std::string &message);
    void disconnected(const std::shared_ptr<Client> &client);
    void handleCommand(const std::shared_ptr<Client> &client, const std::string &message);

private:
    LevelEventQueue *levelQueue() const;

    std::shared_ptr<Character> mCharacter;
    std::shared_ptr<Player> mPlayer;
    Client *mClient;
};

#endif // GAMEMESSAGEHANDLER_H