class Solution {
public:
    // FIX 1: Return type ko 'long long' kiya
    long long digittonumber(vector<int>& digits){
        int n = digits.size();
        string s = "";
        for(int i = 0; i < n; i++){
            s += to_string(digits[i]);
        }
        // FIX 2: stoi ki jagah stoll() kiya taaki string bada number ban sake
        long long number = stoll(s); 
        return number;
    }

    // FIX 3: Input parameter ko 'long long n' kiya
    vector<int> numberdigit(long long n){
        vector<int> num;
        while(n){
            num.push_back(n % 10);
            n = n / 10;   
        }
        reverse(num.begin(), num.end()); 
        return num;
    }

    vector<int> plusOne(vector<int>& digits) {
        long long original = digittonumber(digits);
        long long incrnumber = original + 1;
        return numberdigit(incrnumber);
    }
};
