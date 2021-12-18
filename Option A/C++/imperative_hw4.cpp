#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector <int> mas;
int temp, i,j;
//Reverse function
void ReverseArray (vector <int> &array)
{
    temp=0;
    cout << "Start reversing\n";
    for ( i = 0, j = array.size() - 1; i < array.size()/2; i++, j--)  
    {     
        temp = array[i];  
        array[i] = array[j];  
        array[j] = temp;  
    }  
}

int main() {
    //Reading the input file. Read and store the array, untill any character is inserted
    cout << "Write down the array of integers separated with space and end the array with any char: \n";
    while (cin >> temp) {
        mas.push_back(temp);
    }
    
    //The function, where the array is reversing
    ReverseArray(mas);
    
    //Print the reversed array
    cout << "Printing the reversed array\n";

    for (int i = 0; i < mas.size(); i++) {
        cout << mas[i] << " ";
    }
    
    return 0;
}