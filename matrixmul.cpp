#include <iostream>
#include <vector>

using std::cout;
using std::vector;

int matmultiply(vector<vector<int>> a, vector<vector<int>> b)
{
    int sum = 0;
    for(int i = 0; i <= a.size()-1; i++){
        for(int e = 0; e <= b.size()-1; e++){
            sum = sum + a[i][e]*b[i][e];
        }
    }

    return sum;
}

int main()
{
    vector<vector<int>> vec1 = {{1,1,1},{1,1,1},{1,1,1}};
    vector<vector<int>> vec2 = {{1,1,1},{1,1,1},{1,1,1}};
    cout << matmultiply(vec1,vec2) << "\n";
}