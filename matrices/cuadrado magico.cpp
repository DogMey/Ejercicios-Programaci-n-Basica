#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

int main (){
	
    int num, c;
    srand(time(NULL));
    num = 1 + rand() % (10 - 1);
    cout << num<< " "<<endl;
    return 0;
    
    
}
