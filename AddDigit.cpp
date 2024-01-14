// Given an integer num, repeatedly add all its digits until the result has only one digit, and return it.

// Example 1:

// Input: num = 38
// Output: 2
// Explanation: The process is
// 38 --> 3 + 8 --> 11
// 11 --> 1 + 1 --> 2 
// Since 2 has only one digit, return it.
// Example 2:

// Input: num = 0
// Output: 0


// class Solution {
// public:
//     int addDigits(int num) {
//         if(num < 10) return num;
//         int sum = 0;
//         while(num){
//             sum += num%10;
//             num/=10;
//         }
//         return addDigits(sum);
//     }
// };


// Isme Rcusrion use ho raha h bhut basic way m 
// first condtn use kiya to check the number is less than 10 or not agar h toh return kr dega value but nahi phir lopp excute hoga , loop jab execute hoga tb phir recursion call hoga
