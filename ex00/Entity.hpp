#pragma once

// Entity.hpp
class Entity {
public:
    explicit Entity(std::string name);
    virtual std::string describe() const= 0;   // pure virtual
    virtual ~Entity() = default;                           // virtual!
protected:
    std::string m_name;
};



