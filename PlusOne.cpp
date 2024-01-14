// You are given a large integer represented as an integer array digits, where each digits[i] is the ith digit of the integer. The digits are ordered from most significant to least significant in left-to-right order. The large integer does not contain any leading 0's.

// Increment the large integer by one and return the resulting array of digits.

 

// Example 1:

// Input: digits = [1,2,3]
// Output: [1,2,4]
// Explanation: The array represents the integer 123.
// Incrementing by one gives 123 + 1 = 124.
// Thus, the result should be [1,2,4].
// Example 2:

// Input: digits = [4,3,2,1]
// Output: [4,3,2,2]
// Explanation: The array represents the integer 4321.
// Incrementing by one gives 4321 + 1 = 4322.
// Thus, the result should be [4,3,2,2].
// Example 3:

// Input: digits = [9]
// Output: [1,0]
// Explanation: The array represents the integer 9.
// Incrementing by one gives 9 + 1 = 10.
// Thus, the result should be [1,0].

// Topics : Array, Math

/* My first Approach
class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        long long number = 0;
        for (int i = 0; i < digits.size(); i++) {
            number = number * 10 + digits[i];
        }
        number = number + 1;
        int revered = 0;

        vector<int> largeInt;
        while (number != 0) {
            int num = number % 10;
            largeInt.push_back(num);
            number /= 10;
        }

        reverse(largeInt.begin(), largeInt.end());

        return largeInt;
    }
}; */

// Seen Solu

/* class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n = digits.size();

        for(int i=n-1;i>=0;i--){
            if(i==n-1){
                digits[i]++;
            }
            if(digits[i]==10){
                digits[i]=0;
                if(i!=0){
                    digits[i-1]++;
                }
                else {
                    digits.push_back(0);
                    digits[i]=1;
                }
            }
        }
        return digits;
    }
};*/

// Isme do loop aise chalega ki do if conditions h

// Humse isme bas last digit m ek number add krna h toh uske liye pehle hum last digit m add krenge, wo chiz Conditn 1 of If(i==n-1) se check hoga
// Uske baad baad agar 0-8 tk ki koi bhi value hogi toh wo bs +1krke loop khtm kr dega age nahi badhega
// Lekin agar waha 9 hua toh phir dusri Condtn 2 of If(arr[i]==10), kyuki 9+1=10 hoga last array element
// Uske baad sbse pehle jaha pr 10 hua h us index ko zero se initalize kr dena h arr[i]=0;
// phir ek inner If(i!=0) se chek hoga ki kahi index elemnt zero toh nahi , agar nhi toh phir arr[i-1]++; prev index ke element ko badha denge;
// Agar condtn fail hoti h tb else m ek zero array m add kr denge aur first index ke element ko 1 se replace kr denge.


// Better Soltn
// class Solution {
// public:
//     vector<int> plusOne(vector<int>& digits) {
//         int n = digits.size();

//         for(int i=n-1;i>=0;i--){
//             digits[i]++;

//             if(digits[i]<10){
//                 return digits;
//             }
//             digits[i]=0;
//         }
//         digits.insert(digits.begin(),1);
//         return digits;
//     }
// };
