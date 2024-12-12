#include <iostream>
#include <string>
#include <sstream>
#include <vector> 
#include <algorithm> // For std::max

void printBox(const std::string& text, int rows, int cols) {
    std::istringstream iss(text);
    std::string word;
    std::string currentLine;
    std::vector<std::string> lines;

    // Split the text into lines that fit within the box
    while (iss >> word) {
        if (currentLine.length() + word.length() + 1 > static_cast<size_t>(cols - 2)) { 
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
                size_t lineIndex = i - startRow; // Use size_t for lineIndex
                size_t lineLength = lines[lineIndex].length();
                size_t startCol = (cols - lineLength) / 2; 
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
}

int main() {
    const int rows = 7; // Height of each box
    int cols = 30; // Width of each box (changed to non-const)
    
    // Initialize the vector using push_back to avoid initializer list issue
    std::vector<std::string> texts;
    texts.push_back("TALESPIN");
    texts.push_back("HELLO WORLD");
    texts.push_back("C++ PROGRAMMING");
    texts.push_back("MULTIPLE BOXES");
    texts.push_back("ASCII ART");
    texts.push_back("A very long text that should fit in the box");
    texts.push_back("Short");
    texts.push_back("Another example of a text");

    // Find the maximum length of the texts to determine box size
    size_t maxLength = 0;
    for (const std::string& text : texts) {
        maxLength = std::max(maxLength, text.length());
    }

    // Adjust the box width if the longest text exceeds the defined column size
    if (maxLength + 2 > cols) {
        cols = maxLength + 2; // Add 2 for the box borders
    }

    // Print each text in a box
    for (size_t i = 0; i < texts.size(); ++i) {
        printBox(texts[i], rows, cols);
        std::cout << std::endl; // Add space between boxes
    }

    return 0; 
}