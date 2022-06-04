#include <iostream>
#include <string>

bool isNumber(char c)
{
    return (c >= 48 && c <= 57) ? true : false;
}

int main()
{
    std::string input = "";
    std::cout << "Podaj ciag znakow: ";
    std::cin >> input;
    
    unsigned int choose = 0;
    std::cout << "Kodujemy(0) czy dekodujemy(1): ";
    std::cin >> choose;

    if (choose == 0) 
    {
        //encoding
        char actualLetter = input[0];
        unsigned int count = 1;

        for (size_t i = 1; i < input.length()+1; i++)
        {
            if (input[i] == actualLetter)
            {
                count++;
            }
            else
            {
                std::cout << count << actualLetter;
                actualLetter = input[i];
                count = 1;
            }
        }
    }
    else if (choose == 1)
    {
        //decoding
        std::string number = "";
        for (size_t i = 0; i < input.length(); i++)
        {
            if (isNumber(input[i]))
            {
                number += input[i];
            }
            else
            {
                for (int j = 0; j < stoi(number); j++)
                {
                    std::cout << input[i];
                }
                number = "";
            } 
        }
    }
}

