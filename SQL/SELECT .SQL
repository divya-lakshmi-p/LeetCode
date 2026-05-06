SELECT  / WHERE /ORDERBY / LIMIT 

1.Get all students with marks > 75
select * from students where marks>75;
2.Get names of students from Chennai
select * from students  where place = 'CHENNAI';
Order by 
3.Get top 1 student (highest marks)
select * from students  order by marks desc LIMIT 1;
4.Get Bangalore students sorted by marks
select * from students where place = 'BANGALORE ' order by marks DESC;
5.Get students with marks between 70 and 90
select * from students where marks >70 and marks <90 ;
6.Get students NOT from Bangalore
select * from students where place != 'Bangalore';'

LIMIT

7.Get top 2 students from Chennai
select * from students where city = 'Chennai' order by marks desc LIMIT 2;



LIke 

8.Names starting with 'A'
select * from students where name like'a%';
9.Names ending with 'i'
select * from students where name like '%i';
10.Names containing 'av'
select * from students where name like '%av%';
11.Students from Bangalore with marks > 80
select * from students where city = 'Bangalore' and marks>80;
