#include <iostream>
#include <cstdlib>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int random,result;
    std::srand(time(NULL));
    for(int i=0;i<100;i++)
    {
    std::cout << "The nubmer is "<<rand()%100+1 << std::endl;
    }
}
