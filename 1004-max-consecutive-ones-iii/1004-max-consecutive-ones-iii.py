class Solution:
    def longestOnes(self, nums: List[int], k: int) -> int:
        
        i = 0 
        j = 0
        totalmax = -1
        
        while(j<len(nums)):
            
            if nums[j] == 1:
                
                currentmax = j- i  + 1
                
                if currentmax>totalmax:
                    totalmax = currentmax
            
            else:
                
                k = k -1
                    
                if k < 0:
                    
                    while(k!=0):
                        
                        if nums[i] == 0:
                            k = k + 1
                        i = i + 1
        
                currentmax = j - i + 1
                if currentmax>totalmax:
                    totalmax = currentmax
                    
            j = j + 1
            
        
        return totalmax
            
            
                
                            
                        
                    
                    
                    
                
                
                
                
                
            
        
        
        