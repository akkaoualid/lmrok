#include <iostream>
#include <string>
#include <fstream>
#include "include/lmrok.hpp"

int main(int argc, char** argv)
{
    if (argc < 2)
    {
        std::cout << "\u001b[1m\u001b[31merror:\u001b[m no input file specified.\n";
        return 1;
    }
    std::ifstream file{argv[1]};
    if (!file.is_open())
    {
        std::cout <<"\u001b[1m\u001b[31merror:\u001b[m failed to open file" << argv[1] << '\n';
        return 1;
    }
    std::string filename = argv[1];
    std::string input = {};
    std::string tmp;
    while (std::getline(file, tmp))
        (input += tmp) += '\n';
    std::cout << lmrok::evaluate(input);
}