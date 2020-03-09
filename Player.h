#ifndef PLAYER_H
#define PLAYER_H
#include "Decision.h"
#include <string>

const int INTERFACE_FUNCTION = 0;

class Player
{
    public:
        virtual void set_name() = INTERFACE_FUNCTION;
        virtual Decision split_or_steal() = INTERFACE_FUNCTION;
        virtual string get_name() = INTERFACE_FUNCTION;        
};

#endif