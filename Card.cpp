#include <iostream>
#include <string>
#include <sstream>
#include <vector> 

int main() {
    const int rows = 5;
    const int cols = 25;
    std::string text = "TALESPIN"; 

    std::istringstream iss(text);
    std::string word;
    std::string currentLine;
    std::vector<std::string> lines;

    while (iss >> word) {
        if (currentLine.length() + word.length() + 1 > cols - 2) { 
            lines.push_back(currentLine);
            currentLine = word; 
        } else {
            if (!currentLine.empty()) {
                currentLine += " "; 
            }
            currentLine += word;
        }
    }
    if (!currentLine.empty()) {
        lines.push_back(currentLine); 
    }

    size_t startRow = (rows - lines.size()) / 2; 

    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            if (i == 0 || i == rows - 1 || j == 0 || j == cols - 1) {
                std::cout << "*"; 
            } 
            else if (i >= startRow && i < startRow + lines.size()) {
                int lineIndex = i - startRow;
                int lineLength = lines[lineIndex].length();
                int startCol = (cols - lineLength) / 2; 
                if (j >= startCol && j < startCol + lineLength) {
                    std::cout << lines[lineIndex][j - startCol]; 
                } else {
                    std::cout << " "; 
                }
            } 
            else {
                std::cout << " "; 
            }
        }
        std::cout << std::endl; 
    } 
    return 0; 
}