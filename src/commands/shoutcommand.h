#ifndef SHOUTCOMMAND_H
#define SHOUTCOMMAND_H
#include "command.h"

class ShoutCommand : public Command
{
public:
    ShoutCommand();
    ~ShoutCommand();

    void execute(const CommandContext &c, UI &messageContext) const;
    bool globalEvent() const { return true; }
};

#endif // SHOUTCOMMAND_H
