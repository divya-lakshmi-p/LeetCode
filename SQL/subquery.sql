select * 
from students
where marks >= (select AVG(marks);







1.Find highest marks in the table
select MAX(marks)from students;

2.Find lowest marks in the table
select MIN(marks) from students;

3.Find student with highest marks
select name from students where marks =(select MAX(marks) from students);

4.Find student with lowest marks
select name from students where marks =(select MIN(marks) from students);

5.Find students with marks greater than average marks
select name ,marks from students where marks >(select AVG(marks) from students);

6.Find students with marks less than average marks
select name ,marks from students where marks <(select AVG(marks) from students);

7.Find students whose marks are equal to maximum marks
select name ,marks from students where marks =(select MAX(marks) from students);

8.Find students whose marks are NOT equal to minimum marks
select name ,marks from students where marks !=(select MIN(marks) from students);

9.Find highest marks per city
select max(marks) ,city
from students
group by city;

10.Find lowest marks per city
select min(marks) ,city
from students
group by city;

11.Find city with highest maximum marks
select MAX(marks) ,city
from students
group by city
order by MAX(marks) DESC
LIMIT 1;


the above 9 one is same right , but i thought to display only one city 


12.Find city with lowest minimum mark
select MIN(marks) ,city
from students
group by city
order by MIN(marks) ASC
LIMIT 1;


13.Find city where maximum marks is greater than 85

select 
city
from students
group by city 
Having max(marks)>85;


14.Find city where minimum marks is less than 60

select 
city
from students
group by city 
having min(marks)<60;


15.Find student(s) whose marks are equal to the highest marks in their city

👉 (hint: subquery inside WHERE with GROUP)


select * 
from students
where marks =(select max(marks) from students group by city);



16.Find second highest marks

select marks, from students order by marks DESC LIMIT 1 offset 1;

17.Find second lowest marks

select marks from students order by marks ASC LIMIT 1 offset 1;

18.Find student with second highest marks

select student , marks from students order by marks DESC LIMIT 1 OFFSET 1;

19.Find students whose marks are greater than minimum marks of their city
select students , from students where marks >(select min(marks) from students group by city);
