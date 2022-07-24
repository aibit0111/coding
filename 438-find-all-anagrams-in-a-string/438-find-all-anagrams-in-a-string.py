def checkcount(df):
    for i in df:
        if df[i] != 0:
            return 0
    return 1



class Solution:

    def findAnagrams(self, s: str, p: str) -> List[int]:
        help = {}
        first = 0
        last = len(p)

        count =  []

        for i in p:
            if i in help:
                help[i] = help[i] + 1
            else:
                help[i] = 1
  
        for i in range(len(s) - len(p) + 1):
            #print(i, help, count)
            if i == 0:
                for j in range(len(p)):
                    if s[j] in help:
                        help[s[j]] = help[s[j]] - 1
        #print(help)

                if checkcount(help):
                    count.append(i)

                if s[i] in help:
                    help[s[i]] = help[s[i]] + 1

            else:
                print("hello")
                last = i + len(p) - 1

                if s[last] in help:
                    help[s[last]] = help[s[last]] - 1
      

      
      #check for count3
                if checkcount(help):
                    count.append(i)

                if s[i] in help:
                    help[s[i]] = help[s[i]] + 1
    #break

        return count

        
        