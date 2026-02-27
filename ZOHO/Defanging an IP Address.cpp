Given a valid (IPv4) IP address, return a defanged version of that IP address.

A defanged IP address replaces every period "." with "[.]".

 

Example 1:

Input: address = "1.1.1.1"
Output: "1[.]1[.]1[.]1"
Example 2:

Input: address = "255.100.50.0"
Output: "255[.]100[.]50[.]0"



C++

class Solution {
public:
    string defangIPaddr(string address) {
        string ans ;

        for(char ch:address)
        {
            (ch == '.')?ans+="[.]" : ans +=ch;
        }
        return ans;
    }
};




java 



class Solution {
    public String defangIPaddr(String address) {
        //return address.replace("." , "[.]");

        StringBuilder ans = new StringBuilder();

        for(char ch :address.toCharArray())
        {
            ans.append((ch=='.')? "[.]":ch);
        }


        return ans.toString();
    }
}
