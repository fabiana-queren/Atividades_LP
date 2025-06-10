#include <iostream>
#include <fstream>
#include <cstring>

// Definition of the "Data" structure to represent dates
struct Data {
    int d, m, a;  // Day, month, year
};

int main() {
    Data d1 = {7, 9, 1999};   // Initialization of the first date
    Data d2 = {12, 5, 2024};  // Initialization of the second datetes

    Data e1, e2;  // For reading from the file

    char filename[30];
    std::cout << "Enter filename:";
    std::cin.getline(filename, 30);

    // Write to file in binary mode
    std::ofstream ofs(filename, std::ios::binary);
    if (!ofs) {
        std::cerr << "Error! Unable to open file for writing!\n";
        return 1;
    }
    ofs.write(reinterpret_cast<char*>(&d1), sizeof(Data));
    ofs.write(reinterpret_cast<char*>(&d2), sizeof(Data));
    ofs.close();

    // Read from file in binary mode
    std::ifstream ifs(filename, std::ios::binary);
    if (!ifs) {
        std::cerr << "Error! Unable to open file for reading!\n";
        return 1;
    }
    ifs.read(reinterpret_cast<char*>(&e1), sizeof(Data));
    ifs.read(reinterpret_cast<char*>(&e2), sizeof(Data));
    ifs.close();

    // Displays the dates read from the file
    std::cout << "First Date: " << e1.a << "/" << e1.m << "/" << e1.d << std::endl;
    std::cout << "Second Date: " << e2.a << "/" << e2.m << "/" << e2.d << std::endl;

    return 0;
}
