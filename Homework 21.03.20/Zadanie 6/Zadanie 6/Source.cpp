#include <iostream>
#include <fstream>
using namespace std;

int main() {
    int N;
    unsigned long long fact = 1;
	fstream f;
	f.open("Z6.txt", ios::out | ios::trunc);
    cin >> N;
    if (N < 0) 
        fact = 0;
    if (N == 0) 
        fact = 1;
  
     else
      for (int i = 1; i <= N; i++)
      {
          fact = fact * i;
      }
    f << fact;
  cout << fact;

}


    
    
    
    
    
    
    
    
    
    
    
 