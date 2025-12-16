You are given a 2D integer array of student data students, where students[i] = [student_id, bench_id] represents that student student_id is sitting on the bench bench_id.

Return the maximum number of unique students sitting on any single bench. If no students are present, return 0.

Note: A student can appear multiple times on the same bench in the input, but they should be counted only once per bench.

 

Example 1:

Input: students = [[1,2],[2,2],[3,3],[1,3],[2,3]]

Output: 3

Explanation:

Bench 2 has two unique students: [1, 2].
Bench 3 has three unique students: [1, 2, 3].
The maximum number of unique students on a single bench is 3.
Example 2:

Input: students = [[1,1],[2,1],[3,1],[4,2],[5,2]]

Output: 3

Explanation:

Bench 1 has three unique students: [1, 2, 3].
Bench 2 has two unique students: [4, 5].
The maximum number of unique students on a single bench is 3.


class Solution {
public:
    int maxStudentsOnBench(vector<vector<int>>& students) {

        unordered_map<int ,unordered_set<int>>count;

        for(int i=0; i<students.size(); i++)
        {
            int student_id = students[i][0];
            int bench_id = students[i][1];

            count[bench_id].insert(student_id);
        }

        int max=0;

        for(auto [bench_id , set]:count)
        {
            if(set.size()>max)
                max = set.size();
        }


        return max;
        
    }
};


class Solution {
public:
    int maxStudentsOnBench(vector<vector<int>>& students) {

        unordered_map<int ,unordered_set<int>>count;

        for(auto & s:students)
        {
            count[s[1]].insert(s[0]);
        }

       
        int ans=0;
        for(auto &v:count)
        {
            ans = max(ans , (int)v.second.size());
        }

        return ans;
        
    }
};
