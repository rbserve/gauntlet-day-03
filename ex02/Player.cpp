#include "Player.hpp"
#include <iostream>


Player::Player(std::string name, int maxHp, int defence): Entity(std::move(name), maxHp), m_armor(defence){};

std::string Player::describe() const{
    return "Player " + m_name + 
    " (hp " +std::to_string(currentHp())+ "/" + std::to_string(maxHp()) + 
    ", armor " + std::to_string(m_armor)+") " +
    (isAlive()?"":"[dead]"); 
};   

Player::~Player(){};

void Player::takeDamage(int amount) {
    const int soakedAmount = amount - m_armor;
    std::cout << m_name << "'s armor soaks " << m_armor << "\n";
    Entity::takeDamage(soakedAmount);
};