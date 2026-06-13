
ORDER BY


Q1 Show employees sorted by salary ascending.

select * from employees order by salary asc;

Q2  Show employees sorted by salary descending.

select * from employees order by salary desc;

Q3 Show employees sorted by age ascending.

select * from employees order by age asc;

Q4 Show employees sorted by age descending.

select * from employees order by age desc;

Q5 Show top 3 highest-paid employees.

select * from employees order by salary desc limit 3;

Q6 Show youngest employee.

select * from employees order by age asc limit 1;

Q7 Show oldest employee.

select * from employees order by age desc limit 1;

Q8 Show employees sorted by department and salary.

select * from employees order by department asc,salary asc;

Q9 Show departments ordered by employee count descending.

select dept_id , count(*) from employees group by dept_id order by count(*) desc;


Q10 Show departments ordered by average salary descending.


select dept_id , avg(salary) from employees group by dept_id order by avg(salary) desc;
