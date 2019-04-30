// Track shots in battleship game
// (c) 2019, Suphanut Jamonnak

#include <iostream>

int main()
{
    int oceanLength = 6; int oceanWidth = 6;
    bool shots[oceanLength][oceanWidth];
    
    // Initialize all default shots
    for (int i = 0; i < oceanLength; ++i) {
        for (int j = 0; j < oceanWidth; ++j) {
            shots[i][j] = false;
        }
    }
            
    char shot;
    int row; char col;
    
    std::cout << "Another shot? [y/n] ";
    std::cin >> shot;
    while (shot != 'n') {
        std::cout << "Location? ";
        std::cin >> col >> row;
        
        // Change character ascii to integer
        int col_j = (int)col - 97;
        int row_i = row - 1;
        
        // Fire from input location
        if (shots[row_i][col_j] == false)
            shots[row_i][col_j] = true;


        std::cout << "All fired shots" << std::endl;
        // Print all row characters
        for (int j = 0; j < oceanWidth; ++j) {
            std::cout << " " << char(97 + j);
        }
        std::cout << std::endl;
        // Output all shots
        for (int i = 0; i < oceanLength; ++i) {
            std::cout << i + 1;
            for (int j = 0; j < oceanWidth; ++j) {
                (shots[i][j]) ? std::cout << "* " : std::cout << "  ";
            }
            std::cout << std::endl;
        }
        
        // Take input again
        std::cout << "Another shot? [y/n] ";
        std::cin >> shot;
    }

    std::cout << "Exit Program" << std::endl;
}
