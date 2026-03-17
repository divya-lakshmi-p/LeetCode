Unordered_map stores Key Value pairs 

1.Syntax
Unordered_map<key , value>name;

2.Header
#include<unordered_map>

3.Indert elements
a.Marks["Divya"]=90;
b.Marks.insert({"DIVYA" , 90});

4.Access Values
cout<<Marks["Alice"];


5.Iterating through Map
for(auto it: marks)
  cout<<it.first <<" "<<it.second<<endl;

6.check if key exists

a.if(marks.find(key) != marks.end())
    cout<<"found";
b.if(marks.count(key)!= 0)
  cout<<"found";

7.Remove element

marks.erase("BOB");

8.Size of Map
marks.size();

9.Frequency finding 

unordered_map<int,int> freq;

for(int x : arr)
{
    freq[x]++;
}



