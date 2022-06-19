//
// Created by user on 14/06/2022.
//
#include "Team.hpp"

class Game{
    Team* _home;
    Team* _out;
    int _homeScore;
    int _outScore;
    bool _winner;
public:
    Game(Team& home, Team& out);
    void getWinner()const;

};
