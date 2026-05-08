/* 
Problem 066

Description:
Detects the type of website domain based on 
its extension (.com, .org, or .edu).
*/

#include <iostream> 
using namespace std; 
 
int main() 
{ 
    char X[300]; 
    gets(X); 
 
    int len = 0; 
    while(X[len] != '\0') len++; 
 
    for(int i = 0; i < len - 3; i++) 
    { 
        if(X[i] == '.') 
        { 
            if(X[i+1]=='c' && X[i+2]=='o' && X[i+3]=='m') 
            { 
                cout << "Company" << endl; 
                return 0; 
            } 
 
            if(X[i+1]=='o' && X[i+2]=='r' && X[i+3]=='g') 
            { 
                cout << "Organization" << endl; 
                return 0; 
            } 
 
            if(X[i+1]=='e' && X[i+2]=='d' && X[i+3]=='u') 
            { 
                cout << "Educational" << endl; 
                return 0; 
            } 
        } 
    } 
 
    cout << "Unknown" << endl; 
    return 0; 
}