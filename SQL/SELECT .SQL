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




Count students in each city
select city ,count(*) from students group by city ; 


Find average marks in each city
select city , AVG(marks) from students group by city; 

Find total marks in each city
select city , sum(marks) from students group by city; 


Find cities sorted by number of students (highest first)
select city,count(*) from students group by city ORDER by count(*) DESC; 


Find cities sorted by average marks (lowest first)
select city,AVG(marks) from students group by city order by avg(marks) ASC; 


Find city with highest total marks
select city,sum(marks) from students group by city order by sum(marks) DESC LIMIT 1; if we want only one city we can include limit 1 else desc is enough 



Find cities where number of students > 2
select city,count(*) from students group by city having count(*)>2;


Find cities where average marks > 70
select city,AVG(marks) from students group by city having AVG(marks)>70;

Find cities where total marks > 200
select city,SUM(marks) from students group by city having sum(marks)>200; 


Find cities where:

avg marks > 70
AND count > 2
select city , AVG(marks) , count(*) from students group by city having AVG(marks)>70 and count(*)>2; 

Find top 2 cities with highest average marks
select city ,AVG(marks) from students group by city order by AVG(marks) DESC LIMIT 2; 

Find top city with lowest total marks
select city , SUM(marks) from students group by city order by SUM(marks) ASC; 


Find cities where:

total marks between 150 and 300
sort by total marks descending
select city , SUM(marks) from students group by city having sum(marks)>150 and sum(marks)<300 order by sum(marks) desc; 

Find city with maximum number of students
select city , count(*) from students group by city order by count(*) desc; 


Find cities where:

avg marks > 70
sorted by count (descending)
 select city , AVG(marks) , count(*) from students group by city having AVG(marks)>70 order by count(*) DESC: 


Find cities where:

count > 2
sorted by avg marks descending
return top 3
select city, AVG(marks), count(*) from students group by city order by avg(marks) DESC and count(*) >2 LIMIT 3;
