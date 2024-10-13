#include <iostream>
using namespace std;

int main(){
    int array[] = { 2 , 7 , 11 , 15};
    int size =sizeof(array)/sizeof(int);
    
    int target = 9;

    int start = 0;
    int finish = size -1;

    while(start < finish)
    {
        if(array[start]+array[finish] > target){
            finish--;
        }
        
        else if(array[start]+array[finish] < target){
            start++;
        }
        else{
            cout<<start<<" "<<finish<<endl;
            break;
        }        
    }

    return 0;
}