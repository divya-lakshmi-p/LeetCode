MULTIPLE JOINS 


1 Show customer name and product name

select c.name ,p.product_name
from customers c
inner join orders o
on c.id = o.customer_id
inner join products p
on  p.id = o.product_id;

2 Show customer name and product price

select c.name , p.price
from customers c
inner join orders o
on c.id = o.customer_id
inner join products p
on p.id = o.product_id;

3 Show total amount spent by each customer
select  c.name , sum(p.price)
from customers c
inner join orders o
on c.id = o.customer_id
inner join products p
on p.id = o.product_id
group by c.name;

4 Show customer who spent highest total amount
select  c.name , sum(p.price)
from customers c
inner join orders o
on c.id = o.customer_id
inner join products p
on p.id = o.product_id
group by c.name
order by sum(p.price) DESC
LIMIT 1;

5 Show most expensive product purchased
select p.product_name  as PNAME , p.price  as PRICEP
from customers c
inner join orders o
on c.id = o.customer_id
inner join products p
on p.id = o.product_id
order by PRICEP DESC
limit 1;

