class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int i=digits.size()-1;
        int carry=0;
        vector<int> ans;
        
        if(digits[i] < 9){
            ans.push_back(digits[i]+1);

            for(int j=i-1; j>=0; j--){
                ans.push_back(digits[j]);
            }

            reverse(ans.begin(), ans.end());
            return ans;
        }

        while(i>=0){
            int nRes = digits[i];
            if(i==digits.size()-1){
                ans.push_back((nRes + 1)%10);
                carry = (nRes+1)/10; 
                if(i==0 && carry>0){
                    ans.push_back(carry);
                }
            }else{
                ans.push_back((nRes + carry)%10);
                carry = (nRes+carry)/10;
                if(i==0 && carry>0){
                    ans.push_back(carry);
                }
            }
            i--;
        }
        

        reverse(ans.begin(), ans.end());
        return ans;    
    }
};