Group BY

1.Count employees in each department.


select dept_id , count(*) from employees group by dept_id;

2.find average salary department wise


select dept_id , AVG(salary) from employees group by dept_id;

3.find maximum salary department wise

select dept_id , max(salary) from employees group by dept_id;

4.find minimum salary department wise

select dept_id , min(salary) from employees group by dept_id;

5.find total salary department wise

select dept_id , sum(salary) from employees group by dept_id;

Level 2: WHERE + GROUP BY

1.count employees department-wise whose salary is greater than 50000

select dept_id , count(*) from employees where salary >50000  group by dept_id;

2.Find average salary department-wise for employees older than 30.

select dept_id , avg(salary) from employees where age > 30  group by dept_id;

3.Find total salary department-wise for employees younger than 35.

select dept_id , sum(salary) from employees where age <35  group by dept_id;

4.Count employees department-wise whose age is less than 30.

select dept_id , count(*) from employees where age <30 group by dept_id;

5.Find maximum salary department-wise where salary is greater than 50000.

select dept_id , max(salary) from employees where salary >50000  group by dept_id;

Level 3 :Multiple condtions

1.Count employees department-wise whose:

salary > 50000
AND
age < 35

select dept_id , count(*) from employees where salary > 50000 and age <35  group by dept_id;

2.Find average salary department-wise where:

age > 28
AND
salary > 45000

select dept_id , AVG(salary)from employees where salary > 45000 and age >28  group by dept_id;

3.Find total salary department-wise where:

dept_id IN (1,2,3)

select dept_id , sum(salary)from employees where dept_id in(1,2,3) group by dept_id;

4.Count employees department-wise where:

salary BETWEEN 45000 AND 60000

select dept_id , count(*) from employees where salary between 45000 and 60000  group by dept_id;


5.Find maximum salary department-wise where:

age BETWEEN 28 AND 35

select dept_id , max(salary)from employees where age between 28 and 35  group by dept_id;


Level 4: Grouping by Other Columns


1.Count employees age-wise.

Group by age instead of department.

select age , count(*) from employees group by age;

2.Find average salary age-wise.

select age , avg(salary) from employees group by age;

3.Find maximum salary age-wise.

select age , max(salary) from employees group by age;

4.Count employees salary-wise.

select salary , count(*) from employees group by salary;

Group by salary.

5.Find minimum age salary-wise.

select salary , min(age) from employees group by salary;

