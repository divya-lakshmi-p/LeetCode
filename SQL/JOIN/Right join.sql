Right join 



1.Show all orders with customer names

select o.id , o.name , o.amount
from customers c
right join orders o
on c.id = o.customer_id;

2.Show orders without customers

select o.id , o.amount 
from customers c
right join oders o
on c.id = o.customer_id
where c.id is NULL;

3.Show unmatched orders only

select o.id
from customers c
right join orders o
on c.id = o.customer_id
where c.id is NULL;

4.Count unmatched orders

select count(o.id)
from customer c
right join orders o
on c.id = o.customer.id
where c.id is NULL;

5.Find highest unmatched order amount

select MAX(o.amount)
from customer c
right join orders o
on c.id = o.customer.id
where c.id is NULL;ok 
