#include <vector>
#include <string>
#include <sstream>
#include <fstream>
#include <iostream>

using std::vector;
using std::cout;
using std::istringstream;
using std::string;
using std::ifstream;

//Function to parse lines of the input file
vector<int> ParseLine(string lines)
{
    istringstream thisline (lines);

    int n;
    char c;
    vector<int> row {};

    while(thisline >> n >> c){
        row.push_back(n);
    }

    return row;
}


//Function to read an input file
vector<vector<int>> ReadFile(string path)
{
    ifstream myfile (path);
    vector<vector<int>> board {};
    if(myfile){
        string line;
        while(getline(myfile,line)){
            board.push_back(ParseLine(line));
        }
    }

    return board;
}

//Function to output the contents of the board
void PrintBoard(vector<vector<int>> board)
{
    for(int i = 0; i < board.size(); i++){
        for(int e = 0; e < board.size(); e++){
            cout << board[i][e];
        }
        cout << "\n";
    }
}


int main()
{
    vector<vector<int>> board = ReadFile("board_1");
    PrintBoard(board);
}