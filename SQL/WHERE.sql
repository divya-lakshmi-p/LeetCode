Level 1 :BASICS 

1.Display employees whose salary is 50000.

select name from employees where salary =50000;

2.Display employees whose age is 30.

select name from employees where age =30;

3.Display employees whose department is 2

select name from employees where dept_id =2 ;

4.Display employees whose salary is greater than 60000

select name from employees where salary >60000;

5.Display employees whose age is less than 30

select name from employees where age <30;

6.Display employees whose salary is greater than or equal to 650000

select name from employees where salary >=650000

7.Dispplay employees whose age is less than or equal to 31

select name from emplyees where age<=31;

8.Display employees whose department is n0t 1

select name from employees where dept_id != 1;

9.Display employees whose salary is not 45000

select name from employees where salary != 45000;

10.Diplay employees whose name is divya
select name from employees where name = 'divya';


Level 2: AND


1.Display employees whose salary is greater than 50000 AND age is less than 35.

select name from employees where salary >50000 and age <35;

2.Display employees whose department is 1 AND salary is greater than 55000.

select name from employees where dept_id = 1 and salary >55000;

3.Display employees whose age is greater than 28 AND less than 35.

select name from employess where age >=28 and age <=35;
or
select name from employees where age between 28 and 35;

4.Display employees whose salary is greater than 45000 AND department is 2.

select name from employees where salary >450000 and dept_id = 2;

5.Display employees whose age is greater than 30 AND salary is greater than 60000.

select name from employees where age >30 and salary >60000;

level 3 :OR

1.Display employees from department 1 OR department 2.

select name from employees where dept_id = 1 or dept_id =2;

2.Display employees whose age is less than 28 OR greater than 35.

select name from employees where age <28 or age >35;

3.Display employees whose salary is 50000 OR 70000.

select name from employees where salary >50000 or salary <70000;

4.Display employees from department 3 OR department 4.

select name from employees where dept_id = 3 or dept_id  = 4;

5.Display employees whose salary is less than 50000 OR greater than 70000.

select name from employees where salary < 50000 or salary >70000;

Level 4:Between

1.Display employees whose salary is between 45000 and 60000.

select name from employees where salary between 45000  and 60000;

2.Display employees whose age is between 28 and 35.

select name from employees where age between 28 and 35;

3.Display employees whose salary is between 55000 and 75000.

select name from employees where salary between 55000 and 75000;

4.Display employees whose salary is between 48000 and 65000.

select name from employees where salary between 48000 and 65000;

5.Display employees whose age is between 38 and 40.

select name from employees where age between 38 and 40;

level 5:IN

1. Display employees from departments 1, 2, and 3.

select name from employees where dept_id in(1,2,3);

2.Display employees whose salary is 45000, 55000, or 75000.

select name from employees where salary in(45000,55000,75000);

3.Display employees whose age is 27, 30, or 40.

select name from employees where age in(27,30,40);

4.Display employees from departments 2 and 4.

select name from employeess where dept_id in(2,4);

5.Display employees whose salary is 50000, 60000, or 70000.

select name from employees where salary in(50000,60000,70000);

level 6:Like

1.Display employees whose name starts with 'R'.

select name from employees where name like 'R%';

2.Display employees whose name starts with 'D'.

select name from employees where name like 'D%';

3.Display employees whose name ends with 'a'.

select name from employees where name like '%a';

4.Display employees whose name contains 'i'.

select name from employees where name like '%i%';

5.Display employees whose name contains 'o'.

select name from employees where name like '%o%';

6.Display employees whose second letter is 'a'.


(Hint: _ wildcard)

7.Display employees whose name ends with 'j'.

select name from employees where name like '%j';

8.Display employees whose name contains 'ee'.

select name from employees where name like '%ee%';

9.Display employees whose name starts with 'P' and ends with 'a'.

select name from employees where name like 'P%' and name like '%a';

10.Display employees whose name contains 'an'.

select name from employees where name like '%an%';


Level 7:Mixed questions

1.Salary > 50000 AND department = 1

select name from employees where Salary >50000 and dept_id = 1;

2.Salary BETWEEN 50000 AND 70000

select name from employees where salary between 50000 and 70000;

3.Department IN (1,3)

select name from employees where dept_id in(1,3);

4.Name starts with 'M'

select name from employees where name like 'M%';

5.Age > 30 AND Salary < 70000

select name from employees where age >30 and salary <70000;

6.Department NOT IN (2,4)


select name from employess where not dept_id in(2,4);

7.Name contains 'ra'

select name from employees where name like '%ra%';

8.Salary > 50000 OR age < 30

select name from employees where salary >50000 or age <30;

9.Department = 1 AND age > 35

select name form employees where dept_id =1  and  age >35;

10.Name ends with 'n' AND salary > 45000

select name from employees where salary >45000 and name like '%n';

