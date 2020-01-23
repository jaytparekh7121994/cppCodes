#include <iostream>
#include <cstdio>
#include "file2.cpp"
using namespace std;

extern void write_extern();

int main()
{
    int i=10;
    printf("i is %d",i);
    write_extern();
    return 0;
}