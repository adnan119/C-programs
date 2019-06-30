#include <iostream>
#include <vector>

using std::cout;
using std::vector;

void PrintBoard(vector<vector<int>> board)
{
    for(auto i:board){
        for(auto e:i){
            cout << e;
        }
    cout << "\n";
    }
} 

int main(){
    vector<vector<int>> board{{0, 1, 0, 0, 0, 0},
                             {0, 1, 0, 0, 0, 0},
                             {0, 1, 0, 0, 0, 0},
                             {0, 1, 0, 0, 0, 0},
                             {0, 0, 0, 0, 1, 0}};
        
    //PrintBoard function call
    PrintBoard(board);
}