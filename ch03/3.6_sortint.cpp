   

#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<cmath>


int main() { 
    int a, b, c = 0;
    int min, mid, max = 0;
    
    std::cout << "enter three integers separated by a space: ";
    std::cin >> a >> b >> c;
    std::cout << std::endl;
    
    if (a < b) {
        min = a;
        if (b < c) {
            mid = b;
            max = c;
            }
        else {
            mid = c;
            max = b;
            if (c<a) {
                min=c;
                mid=a;
                }
            }
        }
    
    else {
        min = b;
        max = a;
        if (a < c) {
            mid = a;
            max = c;
        }
        else {
                mid = c;
                max = a;
                   }
    }

    std::cout << min << ", " << mid << ", " << max << std::endl;
    
    return 0;
    
}