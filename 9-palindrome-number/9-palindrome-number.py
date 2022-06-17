class Solution:
    def isPalindrome(self, x: int) -> bool:
        x = str(x)
        flag = 0
        for i in range((len(x)//2)+1):
                if x[i] == x[(len(x)-i)-1]:
                    flag = 1
                else:
                    flag = 0
                    break

        if flag == 1:
            return True
        else:
            return False