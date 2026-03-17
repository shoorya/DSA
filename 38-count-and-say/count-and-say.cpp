class Solution {
public:
    string countAndSay(int n) {
    string res="1";
    for(int i=2;i<=n;i++){
        string temp="";
        for(int j=0;j<res.size();){
            int k=j;
            while(k<res.size() && res[k]==res[j]) k++;
            temp += to_string(k-j)+res[j];
            j=k;
        }
        res=temp;
    }
    return res;
}
};