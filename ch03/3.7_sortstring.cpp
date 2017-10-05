#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<cmath>



int main() { 
   
    std::string s1, s2, s3 = " ";
    std::string first, second, third = " ";
    
    std::cout << "enter three strings separated by a space: ";
    std::cin >> s1 >> s2 >> s3;
    std::cout << std::endl;
    
    if (s1 < s2) {
        first = s1;
        if (s2 < s3) {
            second = s2;
            third = s3;
            }
        else {
            second = s3;
            third = s2;
            if (s3 < s1) {
                first = s3;
                second = s1;
                }
            }
        }
    
    else {
        first = s2;
        third = s1;
        if (s1 < s3) {
            second = s1;
            third = s3;
        }
        else {
                second = s3;
                third = s1;
                   }
    }

    std::cout << first << ", " << second << ", " << third << std::endl;
    
    return 0;
    
}