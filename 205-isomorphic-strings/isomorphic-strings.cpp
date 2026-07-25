class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if(s.size()!=t.size())return false;
        vector<int>V(150,1800);
        for(int i=0;i<s.size();i++){
            int idx=(int)s[i];
            if(V[idx]==1800)V[idx]=s[i]-t[i];
        
            else if (V[idx]!=(s[i]-t[i]))return false;
        }
        for(int i=0;i<150;i++)
            V[i]=1800;
        for(int i=0;i<s.length();i++){
             int idx=(int)t[i];
            if(V[idx]==1800) V[idx]=t[i]-s[i];
            
            else if (V[idx]!=(t[i]-s[i]))return false;
        } 
        return true;
    }
};