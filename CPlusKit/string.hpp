#include<iostream>
using namespace std;

int strl(char str[]){
    int len = 0;
    while(str[len] != '\0'){
        len++;
    }
    return len;
}