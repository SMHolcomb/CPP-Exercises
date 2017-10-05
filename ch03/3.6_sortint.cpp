   

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
        else {   // b > c
            
            if (a <= c) {
                mid = c;
                max = b;
            }
            else { // a > c
                min = c;
                mid = a;
                max = c;
                }
            }
        }

    else {  // a > b
        min = b;
        if (b < c) {
            if (a < c) {
                mid = a;
                max = c;
                }
            else {  // a > c
                mid = c;
                max = a;
            }
        }
        else {  // b > c
            min = c;
            mid = b;
            max = a;
        }

    }  
    
    
    

    std::cout << min << ", " << mid << ", " << max << std::endl;
    
    return 0;
    
}