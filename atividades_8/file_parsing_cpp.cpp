#include <iostream>
#include <fstream>
#include <sstream>
#include <string>

int main() {
    std::ifstream file("C:\\Documentos\\helloworld\\projects_LP\\Atividades_LP\\atividades_8\\test_file_2.txt");
    if (!file.is_open()) {
        std::perror("Error opening file");
        return 1;
    }

    std::string line;
    while (std::getline(file, line)) {
        std::stringstream ss(line);
        std::string token;
        while (std::getline(ss, token, ',')) {
            std::cout << token << std::endl;
        }
    }

    file.close();
    return 0;
}
