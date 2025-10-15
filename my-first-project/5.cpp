#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;
int main()
{
    int a;
    srand(time(0));
    a=rand()%31;
    cout<<a;

    return 0;
}