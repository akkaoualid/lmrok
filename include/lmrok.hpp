#ifndef LMROK_HPP
#define LMROK_HPP
#include <string>
#include <vector>
#include <sstream>
namespace lmrok
{
    std::string evaluate(const std::string &input)
    {
        std::ostringstream oss{};
        size_t count = 0;
        int numptr = 0;
        int strptr = 0;
        std::string alphs = "abcdefghijklmnopqrstuvwxyz\n ";
        std::string nums = "0123456789";
        char current = input[count];
        while (count < input.size())
        {
            if (current == ';')
            {
                ++count;
                while (input[count] != ';')
                {
                    if (count >= input.size())
                        break;
                    ++count;
                }
                current = input[++count];
            }
            else if (current == ' ' || current == '\n' || current == '\t')
            {
                ++count;
                current = input[count];
            }
            else if (std::isalpha(current))
            {
                std::string temp = {};

                while (std::isalpha(current) || std::isdigit(current) && current != ' ')
                {
                    temp.push_back(current);
                    current = input[++count];
                }
                if (temp == "lmrok")
                {
                    ++strptr;
                }
                else if (temp == "lmkhzen")
                {
                    ++numptr;
                }
                else if (temp == "brk")
                {
                    if (strptr >= alphs.size())
                    {
                        oss << "\n\u001b[1m\u001b[31merror:\u001b[m string counter is out of bounds.\n";
                        break;
                    }
                    oss << alphs[strptr];
                    strptr = 0;
                    numptr = 0;
                }
                else if (temp == "l9je3")
                {
                    if (numptr >= nums.size())
                    {
                        oss << "\n\u001b[1m\u001b[31merror:\u001b[m nums counter is out of bounds.\n";
                        break;
                    }
                    oss << nums[numptr];
                    strptr = 0;
                    numptr = 0;
                }
            }
        }
        return oss.str();
    }
}
#endif