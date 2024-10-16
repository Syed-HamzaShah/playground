#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> array = {1 , 2 , 3 , 4};
    int size = array.size();

    vector<int> ans(size , 1);

    // Prefix
    for (int i = 1 ; i <size ; i++)
    {
        ans.at(i) *= array.at(i-1);
    }

    // Suffix
    for(int j = size - 2; j >= 0;  j--)
    {
        ans.at(j) = array.at(j) * array.at(j+1); 

    }

    return 0;
}