#include <iostream>
#include <fstream>
#include <string>


int main() {
    std::ifstream file;
    // File to be read
    std::string filename = "C:\\Documentos\\helloworld\\projects_LP\\Atividades_LP\\atividades_8\\test_file.txt"; // Change this to your file path
    char character;

    // Open the file for reading
    file.open(filename);

    // Check if the file was opened successfully
    if (!file.is_open()) {
        std::cerr << "Error opening the file." << std::endl;
        return 1; // Exit the program with an error code
    }

    // Read each character from the file serially and print it on the screen
    while (file.get(character)) {
        // \n is included to show how much information is get each time
        std::cout << character << std::endl;
    }

    // Close the file
    file.close();


    return 0; // Return 0 indicating successful program termination
}