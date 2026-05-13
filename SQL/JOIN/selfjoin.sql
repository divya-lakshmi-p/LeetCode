
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
