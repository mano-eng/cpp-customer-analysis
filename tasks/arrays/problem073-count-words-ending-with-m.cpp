/* 
Problem 073

Description:
Counts how many words in the string
end with the letter 'm'.
*/

#include <iostream> 
using namespace std; 

int main() 
{ 
    char X[200]; 
    cin.getline(X, 200); 

    int len = 0; 

    while(X[len] != '\0') 
        len++; 

    int count = 0; 

    for(int i = 0; i < len; i++) 
    { 
        if(X[i] == 'm' && (X[i+1] == ' ' || X[i+1] == '\0')) 
            count++; 
    } 

    cout << count << " words"; 

    return 0; 
}