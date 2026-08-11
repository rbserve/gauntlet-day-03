#include "Inventory.hpp"
#include <initializer_list>
#include <algorithm>
#include <string>
#include <iostream>

Inventory::Inventory(   const std::string& owner,
                        std::initializer_list<std::string> items):
                        m_owner(std::move(owner)){
    //heap-allocated array
    m_count = items.size();
    m_items = new std::string[m_count];
    
    std::copy(items.begin(), items.end(),m_items);
    
    //print created message
    std::cout << "+ ";
    inventoryContent();
    
};

void Inventory::inventoryContent() const  {
    std::cout << "Inventory " + m_owner + " (";
    for (size_t i = 0; i< m_count; i++){
        std::cout << m_items[i];

        //don't add comma at the last item
        if (i < m_count - 1){ 
            std::cout << ", ";
        }
    };
    std::cout << ")\n";
}

Inventory::~Inventory(){
    std::cout << "- ";
    inventoryContent();
    delete[] m_items;
};                 