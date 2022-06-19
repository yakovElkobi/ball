//
// Created by user on 14/06/2022.
//
#include <iostream>
class Team{
    std::string _name;
    float _talent;

    public:
        Team(std::string name, float talent);

        std::string getName() const{return _name;}
        float getTalent() const{return _talent;}

};

