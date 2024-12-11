#include <iostream>

int main(){
//todo 1. switch case um zu entscheiden um es unlesbar zu machen oder es lesbar zu machen

char str[100];
char choice;

std::cout << "Please enter a string: ";
std::cin >> str;
std::cout << "Please choose the following option: " << std::endl;
std::cout << "1. Encrypt the string " << std::endl;
std::cout << "2. Dencrypt the string " << std::endl;
std::cin >> choice;

switch (choice) 
{
case '1':               //um einen integer zu adden muss man ihn draufrechenn das führt zu der veränderung in der asci tabelle 
    for (size_t i = 0; i < str[100]; i++) //wenn kleienr als der eingegene string dann +1 weiter in dem string 
    {
        str[100] + 2;
        std::cout << str[100];
    }
                   //man muss also jeden buchstaben im string abgehen und ihn mit 2 multiplizieren
    break;
return 0;
case '2':

break;

default:
std::cout << "Invalid Input!";
return 0;
    break;

}


return 0;
}