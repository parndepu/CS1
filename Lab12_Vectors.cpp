// Add and remove number using vectors
// (c) 2019, Suphanut Jamonnak

#include <iostream>
#include <vector>
#include <algorithm> 

int main() 
{
    std::vector<double> myNumbers;
    double number;
    char opt;
    
    std::cout << "enter operation [a/r/q] and number: ";
    std::cin >> opt;

    while (opt != 'q') {
        
        std::cin >> number;
        std::vector<double>::iterator it;
        it = find(myNumbers.begin(), myNumbers.end(), number);
        
        // Bonus: detect odd numbers
        if (opt == 'a' && it == myNumbers.end() && (int)number % 2 != 0) {
            myNumbers.push_back(number);
        }
        
        // Remove number if exists
        if (opt == 'r' && it != myNumbers.end()){
            myNumbers.erase(it);
        }
        
        // Output all numbers
        std::cout << "your numbers: ";
        for (int i = 0; i < myNumbers.size(); i++){
            std::cout << myNumbers[i] << " ";
        }
        std::cout << std::endl;
        
        // Get next operation and number
        std::cout << "enter operation [a/r/q] and numbers: ";
        std::cin >> opt;
    }
    
    std::cout << "Exit Program" << std::endl;
}
