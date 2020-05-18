class Solution:
    def findAnagrams(self, s: str, p: str) -> List[int]:
        n=len(s)
        m= len(p)
        if m>n:
            return []
        countp=Counter(p)
        counts=Counter()
        q=[]
        for i in range(n):
            counts[s[i]]+=1
            if i>=m:
                if counts[s[i-m]]==1:
                    del counts[s[i-m]]
                else:
                    counts[s[i-m]]-=1
            if countp==counts:
                q.append(i-m+1)
        return q
            