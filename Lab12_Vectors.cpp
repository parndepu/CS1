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
        
        if (opt == 'a') {
            it = find(myNumbers.begin(), myNumbers.end(), number);
            
            // Bonus: detect odd numbers
            if (it == myNumbers.end() && (int)number % 2 != 0) {
                myNumbers.push_back(number);
            }
        }
        
        if (opt == 'r') {
            it = find(myNumbers.begin(), myNumbers.end(), number);
            
            // Remove number if exists
            if (it != myNumbers.end()){
                myNumbers.erase(it);
            }
        }
        
        // Output all numbers
        std::cout << "your numbers: ";
        for (int i = 0; i < myNumbers.size(); i++){
            std::cout << myNumbers[i] << " ";
        }
        
        std::cout << std::endl;
        std::cout << "enter operation [a/r/q] and numbers: ";
        std::cin >> opt;
    }
}
