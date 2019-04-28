#include <iostream>

using std::cout; using std::cin; using std::endl;

int main()
{
    int oceanLength = 6; int oceanWidth = 6;
    bool shots[oceanLength][oceanWidth];
    
    // initialize 
    for (int i = 0; i < oceanLength; ++i) {
        for (int j = 0; j < oceanWidth; ++j) {
            shots[i][j] = false;
        }
    }
            
    char shot;
    int row; char col;
    
    cout << "Another shot? [y/n] ";
    cin >> shot;
    while (shot != 'n') {
        cout << "Location? ";
        cin >> col >> row;
        
        // Change character ascii to integer
        int col_j = (int)col - 97;
        int row_i = row - 1;
        
        // Fire from input location
        if (shots[row_i][col_j] == false)
            shots[row_i][col_j] = true;
            
        // Output all shots
        cout << "All fired shots" << endl;
        
        // Print all row characters
        for (int j = 0; j < oceanWidth; ++j) {
            cout << " " << char(97 + j);
        }
        cout << endl;
        
        // Output all shots
        for (int i = 0; i < oceanLength; ++i) {
            cout << i + 1;
            for (int j = 0; j < oceanWidth; ++j) {
                (shots[i][j]) ? cout << "* " : cout << "  ";
            }
            cout << endl;
        }
        
        // Take input again
        cout << "Another shot? [y/n] ";
        cin >> shot;
    }
}
