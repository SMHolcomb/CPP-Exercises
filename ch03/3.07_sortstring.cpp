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
        else {   // s2 > s3
            
            if (s1 <= s3) {
                second = s3;
                third = s2;
            }
            else { // s1> s3
                first = s3;
                second = s1;
                third = s3;
                }
            }
        }

    else {  // s1> s2
        first = s2;
        if (s2 < s3) {
            if (s1 < s3) {
                second = s1;
                third = s3;
                }
            else {  // s1> s3
                second = s3;
                third = s1;
            }
        }
        else {  // s2 > s3
            first = s3;
            second = s2;
            third = s1;
        }

    }  

    std::cout << first << ", " << second << ", " << third << std::endl; 
    return 0;
    
}