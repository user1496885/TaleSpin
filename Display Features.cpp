#include <iostream>
#include <string>
#include <fstream>


class Player {
public:
    std::string name;
    int level;
    int health;
    int mana;
    int strength;
    int agility;
    int intelligence;
    int levelsCrossed;

    
    Player(std::string name, int level, int health, int mana, int strength, int agility, int intelligence) {
        this->name = name;
        this->level = level;
        this->health = health;
        this->mana = mana;
        this->strength = strength;
        this->agility = agility;
        this->intelligence = intelligence;
        this->levelsCrossed = 0;
    }

    
    void displayInfo() {
        std::cout << "Player Information:" << std::endl;
        std::cout << "Name: " << name << std::endl;
        std::cout << "Level: " << level << std::endl;
        std::cout << "Health: " << health << std::endl;
        std::cout << "Mana: " << mana << std::endl;
        std::cout << "Strength: " << strength << std::endl;
        std::cout << "Agility: " << agility << std::endl;
        std::cout << "Intelligence: " << intelligence << std::endl;
        std::cout << "Levels Crossed: " << levelsCrossed << std::endl;
    }

    
    void displayStats() {
        std::cout << "Player Stats:" << std::endl;
        std::cout << "Attack Power: " << strength * 2 << std::endl;
        std::cout << "Defense Power: " << agility * 1.5 << std::endl;
        std::cout << "Magic Power: " << intelligence * 3 << std::endl;
        std::cout << "Speed: " << agility * 0.5 << std::endl;
    }

    
    void saveProgress() {
        std::ofstream file("player_progress.txt");
        if (file.is_open()) {
            file << name << std::endl;
            file << level << std::endl;
            file << health << std::endl;
            file << mana << std::endl;
            file << strength << std::endl;
            file << agility << std::endl;
            file << intelligence << std::endl;
            file << levelsCrossed << std::endl;
            file.close();
            std::cout << "Progress saved successfully!" << std::endl;
        } else {
            std::cout << "Unable to save progress!" << std::endl;
        }
    }
};

int main() {
    
    Player player("John Doe", 1, 100, 50, 10, 5, 8);

    
    player.displayInfo();

    
    player.displayStats();

    
    player.saveProgress();

    return 0;
}