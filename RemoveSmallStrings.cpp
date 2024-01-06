#include <iostream>
#include <fstream>
#include <string>
#include <chrono>
int main()
{
    // Variable Declarations
    int maxLength;
    int amountOfRemovedStrings = 0;

    std::string pathToInput;
    std::string pathToOutput;
    
    std::string lineContent;

    std::fstream inputFile;
    std::fstream outputFile;
    // User Input
    std::cout << "What is max length of string you want to remove? Input integer: ";
    std::cin >> maxLength;
    std::cout << std::endl << "Input path to input file: ";
    std::cin >> pathToInput;
    std::cout << std::endl << "Input path to output file (will override existing data if any is avalible): ";
    std::cin >> pathToOutput;
    // Load files
    inputFile.open(pathToInput, std::ios::in);
    if (!inputFile.good()) {
        std::cout << std::endl << "Couldn't open input file!";
            return -1;
    }    
    outputFile.open(pathToOutput, std::ios::out);
    if (!outputFile.good()) {
        std::cout << std::endl << "Couldn't open output file!";
        return -1;
    }
    // Loop
    auto start = std::chrono::high_resolution_clock::now();
    while (std::getline(inputFile, lineContent)) {
        if (maxLength > lineContent.length()) {
            amountOfRemovedStrings++;
            continue;
        }
        else outputFile << lineContent << std::endl;
    }
    auto stop = std::chrono::high_resolution_clock::now();
    auto duration = std::chrono::duration_cast<std::chrono::milliseconds>(stop - start);

    std::cout << std::endl << "Time taken to remove " << amountOfRemovedStrings << " strings smaller than " << maxLength << " characters took : " << duration.count() << " milliseconds" << std::endl;

    inputFile.close();
    outputFile.close();
    return 1;
}