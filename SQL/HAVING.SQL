HAVING Exercises (Easy)

Q1 Count employees department-wise.

select dept_id , count(*) from employees group by dept_id;

Q2 Show only departments having more than 1 employee.

Hint:COUNT(*) > 1
select dept_id , count(*) from employees group by dept_id having count(*) >1;

Q3Show only departments having more than 2 employees.

select dept_id , count(*) from employees group by dept_id having count(*) >2;

Q4 Show departments having exactly 2 employees.

select dept_id , count(*) from employees group by dept_id having count(*) = 2;

Q5 Show departments having exactly 1 employee.

select dept_id , count(*) from employees group by dept_id having count(*) = 1;

HAVING + SUM

Q6 Find total salary department-wise.

select dept_id , sum(salary) from employees group by dept_id;

Q7 Show departments whose total salary exceeds 100000.

select dept_id , sum(salary) as MSALARY from employees group by dept_id having MSALARY >100000;

Q8 Show departments whose total salary exceeds 150000.

select dept_id , sum(salary) as MONEY from  employees group by dept_id having MONEY >150000;

Q9 Show departments whose total salary is below 120000.

select dept_id , sum(salary) as MONEY from employees group by dept_id having MONEY <120000;

Q10 Show departments whose total salary is between 100000 and 150000.

select dept_id , sum(salary) as MONEY from employees group by dept_id having MONEY between 100000 and 150000;


HAVING + AVG

Q11 Find average salary department-wise.

Calculate mentally first.

select dept_id , avg(salary) from  employees group by dept_id;

Q12 Show departments whose average salary exceeds 55000.

select dept_id , avg(salary) from  employees group by dept_id having avg(salary) >55000;

Q13 Show departments whose average salary exceeds 60000.

select dept_id , avg(salary) from  employees group by dept_id having avg(salary) >60000;

Q14 Show departments whose average salary is below 50000.

select dept_id , avg(salary) from  employees group by dept_id having avg(salary) <50000;



HAVING + MAX

Q15 Find maximum salary department-wise.

select dept_id , max(salary) from employees group by dept_id;


Q16 Show departments whose highest salary exceeds 70000.

select dept_id , max(salary) from employees group by dept_id having max(salary)>70000;


Q17 Show departments whose highest salary is at least 65000.

select dept_id , max(salary) from employees group by dept_id having max(salary) >=65000;



HAVING + MIN


Q18 Find minimum salary department-wise.

select dept_id , min(salary) from employees group by dept_id;

Q19 Show departments whose minimum salary is below 50000.

select dept_id , min(salary) from employees group by dept_id having min(salary) <50000;

Q20 Show departments whose minimum salary exceeds 45000.

select dept_id , min(salary) from employees group by dept_id having min(salary) >45000;


Q21 Count employees department-wise whose salary is greater than 50000.

Steps:

WHERE salary > 50000
↓
GROUP BY dept_id
↓
COUNT(*)


select dept_id , count(*) from employees where salary >50000 group by dept_id;

Q21, show only departments having more than 1 such employee.

select dept_id , count(*) from employees where salary >50000 group_by dept_id having count(*)>1;

Q23 Find average salary department-wise for employees older than 30.

select dept_id , avg(salary) from employees where age >30 group by dept_id ;

Q24 Show only departments whose average salary (after filtering age > 30) exceeds 60000.

select dept_id , avg(salary) from employees where age >30 group by dept_id  having avg(salary) >60000;
