#include <iostream>
#include <string>
#include <fstream>

int main() {
    std::string story;
    std::string line;
    
    std::cout << "Enter your story (type 'END' on a new line to finish):" << std::endl;

    
    while (true) {
        std::getline(std::cin, line);
        if (line == "END") {
            break;
        }
        story += line + "\n";
    }

    
    std::cout << "\nYour story is:\n" << story << std::endl;

   
    char saveToFile;
    std::cout << "Do you want to save the story to a file? (y/n): ";
    std::cin >> saveToFile;

    if (saveToFile == 'y' || saveToFile == 'Y') {
        std::ofstream outFile("story.txt");
        if (outFile.is_open()) {
            outFile << story; 
            outFile.close();
            std::cout << "Story saved to 'story.txt'." << std::endl;
        } else {
            std::cerr << "Error opening file for writing." << std::endl;
        }
    } else {
        std::cout << "Story not saved." << std::endl;
    }

    return 0;
}