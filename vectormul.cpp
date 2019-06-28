#include <iostream>
#include <vector>

using std::vector;
using std::cout;

int main()
{
    vector<int> v1 = {1,1,1};
    vector<int> v2 = {2,2,2};
    int sum = 0;
    for(int i = 0; i <= 2; i++){
        sum = sum + v1[i]*v2[i];
    }

    cout << sum << "\n";
}