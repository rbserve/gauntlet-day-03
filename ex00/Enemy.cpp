#include "Enemy.hpp"
#include <string>

Enemy::Enemy(std::string name, int hp): Entity(std::move(name)), m_hp(hp){};            // name AND hp, both required
std::string Enemy::describe() const {
    return "Enemy " + m_name + " (hp" + std::to_string(m_hp) + ")"; 
};