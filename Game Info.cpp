#include <iostream>
#include <string>


class Game {
public:
    std::string name;
    std::string developer;
    std::string genre;
    int releaseYear;

    
    Game(std::string name, std::string developer, std::string genre, int releaseYear) {
        this->name = name;
        this->developer = developer;
        this->genre = genre;
        this->releaseYear = releaseYear;
    }

    
    void displayInfo() {
        std::cout << "Game Information:" << std::endl;
        std::cout << "Name: " << name << std::endl;
        std::cout << "Developer: " << developer << std::endl;
        std::cout << "Genre: " << genre << std::endl;
        std::cout << "Release Year: " << releaseYear << std::endl;
    }
};

int main() {
    
    Game game("Fantasy Adventure", "Acme Games", "Fantasy Adventure", 2023);

    
    game.displayInfo();

    return 0;
}