class Solution {
public:
    string addBinary(string a, string b) {
        string name;
        int var = 0;
        int i = a.length()-1;
        int j = b.length()-1;
        while(i>=0||j>=0||var)
        {
            if(i>=0)
            {
                var+=a[i--]-'0';
            }
            if(j>=0)
            {
                var+=b[j--]-'0';
            }
            name+=var%2+'0';;
            var/=2;
        }
        reverse(begin(name),end(name));
        return name;
    }
};
