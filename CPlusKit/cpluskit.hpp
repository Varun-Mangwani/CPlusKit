#include<iostream>

using namespace std;

namespace cpk {
    namespace math{
        //absolute value function
        int abs(int val) {
            if(val < 0) {
                return -val;
            }
            return val;
        }
    }

    //Minimum Function
    int min(int a, int b)
    {
        return (a > b) ? b : a;
    }

    //Maximum Function
    int max(int a, int b)
    {
        return (a > b) ? a : b;
    }
}
