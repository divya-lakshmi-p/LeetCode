
1.Show employee name and manager name

select 
e.name as employee,
m.name as manager

from employees e
left join employees m
on e.manager_id = m.id;


2.Show employees who do not have managers
select 
e.name as employee,
m.name as manager

from employees e
left join employees m
on e.manager_id = m.id
where e.manager_id is NULL;

3.Show employees managed by Ram


select 
e.name as employee
m.names as manager
from employees e
left join employees m
on e.manager_id = m.id
where m.name = 'Ram';




1.Count employees under each manager

select m.name as manager,
count(e.id) as total_employees
from employees e
left join employees m
on e.manager_id = m.id
group by m.name;

2.find manager with highest number of employees
select m.name as manager,
count(e.id) as total_employees
from employees e
left join employees m
on e.manager_id = m.id
group by m.name
order by total_employees desc
limit 1;

3.Show managers who manage more than 1 employee

select m.name as manager,
count(e.id) as total_employees
from employees e
left join employees m 
on e.manager_id = m.id
group by m.name 
having total_employees >1;

4.Show managers with exactly 2 employees

select m.name as manager,
count(e.id) as total_employees
from employees e
left join employees m
on e.manager_id = m.id;
group by m.name
having total_employees =2;

5.Show managers with lest than 2 employees

select m.name as manager,
count(e.id) as total_employees
from employees e
left join employees m 
on e.manager_id = m.id
group by m.name 
having total_employees <2 ;

6.Find total employees under Ram

select m.name as manager,
count(e.id) as total_employees
from employees e
left join employees m 
on e.manager_id = m.id
where m.name = 'Ram'
group by m.name ;

7.Show employees working under Ravi

select e.name as Employees,
from employees e
left join employees m 
on e.manager_id = m.id
where m.name = 'Ravi';
