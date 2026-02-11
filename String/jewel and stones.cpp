
You're given strings jewels representing the types of stones that are jewels, and stones representing the stones you have. Each character in stones is a type of stone you have. You want to know how many of the stones you have are also jewels.

Letters are case sensitive, so "a" is considered a different type of stone from "A".

 

Example 1:

Input: jewels = "aA", stones = "aAAbbbb"
Output: 3
Example 2:

Input: jewels = "z", stones = "ZZ"
Output: 0
 


brute force way 
class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        
        int count =0;

        for(char ch :jewels)
        {
            for(char hc:stones)
            {
                if(ch ==hc)
                    count++;
                
            }
            
        }
        return count;
    }
};





hashset 


class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        
        int count =0;

       /* for(char ch :jewels)
        {
            for(char hc:stones)
            {
                if(ch ==hc)
                    count++;
                
            }
            
        }*/

        unordered_set<char>s;
        for(char ch:jewels)
            s.insert(ch);
        
        for(char hc:stones)
        {
            if(s.count(hc))
                count++;
        }

        return count;
    }
};
