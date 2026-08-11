#include "Enemy.hpp"
#include <string>

Enemy::Enemy(std::string name, int maxHp): Entity(std::move(name), maxHp){};            // name AND hp, both required

std::string Enemy::describe() const {
    return "Enemy " + m_name  + ")"; 
};

Enemy::~Enemy(){};