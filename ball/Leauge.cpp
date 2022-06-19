//
// Created by user on 14/06/2022.
//
#include "Leauge.hpp"

using namespace std;

    Leauge::Leauge(std::vector<Team> teams) {
        if(teams.size() > 20){
            throw runtime_error("Too many teams");
        }
        for (size_t i = 0; i < teams.size(); ++i) {
            this->_teams.push_back(teams.at(i));
        }
        fillRandom();
    }
    void Leauge::fillRandom() {
        int i = 0;
        while (this->_teams.size() < 20){
            Team temp = Team(to_string(i++), (float)rand());
            this->_teams.push_back(temp);
        }
    }


