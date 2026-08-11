#include "Enemy.hpp"
#include <string>
#include "Inventory.hpp"
// #include "Inventory.cpp"
#include <iostream>

Enemy::Enemy(std::string name, int hp, std::initializer_list<std::string> loot):
     Entity(std::move(name)), m_hp(hp), m_bags(Inventory(name, loot)){
        std::cout << "+ Enemy " + m_name+ "\n";
     };            // name AND hp, both required
std::string Enemy::describe() const {
    return "Enemy " + m_name + " (hp" + std::to_string(m_hp) + ")"; 
};

Enemy::~Enemy(){
    std::cout << "- Enemy "+ m_name + "\n";
};