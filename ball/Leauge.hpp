//
// Created by user on 14/06/2022.
//
#include "Team.hpp"
#include <vector>
#include <stdexcept>

class Leauge{
    std::vector<Team> _teams;
    void fillRandom();

    public:
        Leauge() { fillRandom();}
        Leauge(std::vector<Team> teams);

};

