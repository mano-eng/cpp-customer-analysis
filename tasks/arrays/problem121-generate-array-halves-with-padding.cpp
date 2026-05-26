/*

Problem 121

Description:
Copies the selected region halves
to the beginning and end
of a new array,
then fills the middle with -1.

*/

#include <iostream> 
using namespace std; 
 
void generate(int X[], int Y[], int srcSize, int destSize, int S, int E) 
{ 
    int regionLen = E - S + 1; 
    int half = regionLen / 2; 
 
    // copy 1st half to beginning of Y 
    int j = 0; 
    for(int i = S; i < S + half; i++) 
    { 
        Y[j] = X[i]; 
        j++; 
    } 
 
    // fill middle by -1 
    while(j < destSize - half) 
    { 
        Y[j] = -1; 
        j++; 
    } 
 
    // copy 2nd half to end of Y 
    for(int i = S + half; i <= E; i++) 
    { 
        Y[j] = X[i]; 
        j++; 
    } 
} 
 
int findPosMax(int X[], int size) 
{ 
    int posMax = 0; 
    for(int i = 1; i < size; i++) 
    { 
        if(X[i] > X[posMax]) 
        { 
            posMax = i; 
        } 
    } 
    return posMax; 
} 
 
int findPosMin(int X[], int size) 
{ 
    int posMin = 0; 
    for(int i = 1; i < size; i++) 
    { 
        if(X[i] < X[posMin]) 
        { 
            posMin = i; 
        } 
    } 
    return posMin; 
} 
 
int main() 
{ 
    int X[200]; 
    int Y[200]; 
 
    // read X 
    for(int i = 0; i < 200; i++) cin >> X[i]; 
 
    int S, E; 
 
    // first region 
    cin >> S >> E; 
    generate(X, Y, 200, 200, S, E); 
 
    // read new values of X 
    for(int i = 0; i < 200; i++) cin >> X[i]; 
 
    // find posMax and posMin in X 
    S = findPosMax(X, 200); 
    E = findPosMin(X, 200); 
 
    // generate Y from X 
    generate(X, Y, 200, 200, S, E); 
 
    // read Q 
    int Q[400]; 
    for(int i = 0; i < 400; i++) cin >> Q[i]; 
 
    // find posMax and posMin in Q 
    S = findPosMax(Q, 400); 
    E = findPosMin(Q, 400); 
 
    // generate Y from Q 
    generate(Q, Y, 400, 200, S, E); 
 
    // count -1 in Y 
    int countY = 0; 
    for(int i = 0; i < 200; i++) 
    { 
        if(Y[i] == -1) countY++; 
    } 
 
    // add countY to each even cell in Q 
    for(int i = 0; i < 400; i++) 
    { 
        if(Q[i] % 2 == 0) 
        { 
            Q[i] += countY; 
        } 
    } 
 
    // read Z 
    int Z[500]; 
    for(int i = 0; i < 500; i++) cin >> Z[i]; 
 
    // find posMax and posMin in Z 
    S = findPosMax(Z, 500); 
    E = findPosMin(Z, 500); 
 
    // generate W from Z 
    int W[200]; 
    generate(Z, W, 500, 200, S, E); 
 
    // count 20 in Z 
    int countZ = 0; 
    for(int i = 0; i < 500; i++) 
    { 
        if(Z[i] == 20) countZ++; 
    } 
 
    // add countZ to each even cell in W 
    for(int i = 0; i < 200; i++) 
    { 
        if(W[i] % 2 == 0) 
        { 
            W[i] += countZ; 
        } 
    } 
 
    // read new values of Y 
    for(int i = 0; i < 200; i++) cin >> Y[i]; 
 
    // find posMax and posMin in Y 
    S = findPosMax(Y, 200); 
    E = findPosMin(Y, 200); 
 
    // generate W from Y 
    generate(Y, W, 200, 200, S, E); 
 
    return 0; 
}