#pragma once
#include "Entity.hpp"
#include "Inventory.hpp"
// #include "Inventory.cpp"

class Enemy : public Entity {
public:
    Enemy(std::string name, int hp, std::initializer_list<std::string> loot);            // name AND hp, both required
    std::string describe() const override;      // -> "Enemy <name> (hp N)"
    ~Enemy();                          // implicitly virtual (base dtor is virtual)
private:
    int m_hp;
    Inventory m_bags;
};