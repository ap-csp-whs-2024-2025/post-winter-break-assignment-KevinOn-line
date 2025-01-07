#include <iostream>  // std::cin, std::cout
#include <string>    // std::string, std::getline

int main()
{
    // Set up variables
    int num1;
    std::string noun1;
    std::string adjective1;
    std::string why1;

    // Get user input
    std::cout << "Enter a number: ";
    std::cin >> num1;

    std::cout << "Enter a noun: ";
    std::cin >> noun1;

    std::cout << "Enter an adjective: ";
    std::cin >> adjective1;
    
    std::cout << "Enter a Excuse: ";
    std::cin >> why1;
    // Display story
    std::cout << "There was once a " << noun1 << " named Larry. They were very " << adjective1 << ", and they were " << num1 << " years old.\n";
    std::cout << "Why did I spend a week of my Winter Break Editing: " << why1 << " :P.\n";
    
    return 0;
}
