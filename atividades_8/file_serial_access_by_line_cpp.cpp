#include <iostream>
#include <fstream>
#include <string>

int main() {
    std::string filename = "C:\\Documentos\\helloworld\\projects_LP\\Atividades_LP\\atividades_8\\test_file_2.txt";
    std::ifstream file(filename);
    std::string line;

    if (!file.is_open()) {
        std::cout << "Error opening the file." << std::endl;
        return 1;
    }

    while (std::getline(file, line)) {
        std::cout << line << std::endl;
    }

    file.close();
    return 0;
}
