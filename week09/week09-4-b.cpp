class Solution:
    def lemonadeChange(self, bills: List[int]) -> bool:
        b5,b10,b20 = 0,0,0 #一開始鈔票0張
        for b in bills:#用迴圈 慢慢收客人鈔票
            if b==5: b5+=1
            elif b==10:
                 if b5==0: return False
                 b10 += 1
                 b5 -= 1
            else:
                if b10>0 and b5>0: 
                    b20 += 1
                    b10 -= 1
                    b5 -= 1
                elif b5>=3:
                    b20 += 1
                    b5 -= 3
                else:
                    return False
            return True 