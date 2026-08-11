#include "Player.hpp"


Player::Player(std::string name, int maxHp, int defence): Entity(std::move(name), maxHp), m_armor(defence){};

std::string Player::describe() const{
    return "Player " + m_name; 
};   

Player::~Player(){};