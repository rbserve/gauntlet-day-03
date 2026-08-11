#pragma once
#include "Entity.hpp"

class Player : public Entity {
public:
    explicit Player(std::string name, int maxHp, int defence);          // name only: players have no hp here
    std::string describe() const override;      // -> "Player <name>"
    ~Player();
    void takeDamage(int amount) override;
private:
    int m_armor;
};