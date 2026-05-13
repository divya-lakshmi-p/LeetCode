LEFT JOIN



1.Show all customers with their order amount

select c.name , o.amount
from customer c
Left Join orders o
on c.id = o.customer_id;



2.Show customers who have NO orders

(Hint: WHERE o.customer_id IS NULL)


select c.name 
from customers c
Left join orders o
on c.id = o.customer_id
where o.customer_id is  NOT NULL


3.Count orders per customer using LEFT JOIN


select  count(o.customer_id)
from customers c
Left join orers o
on c.id = o.customer_id
group by c.name ;



LEFT JOIN + SUM + IFNULL / COALESCE



1.Show customer name and total orders count
(include customers with 0 orders)

select c.name , ifnull(sum(o.customer_id) , 0)
from customers c
left join orders o
on c.id = o.customer_id
group by c.name;


2.Show customer name and average order amount
(include customers with no orders → show 0)

select c.name , ifnull(AVG(o.amount),0) As AVG_AMOUNT
from customers c
left join orders o
on c.id = o.customer_id
group by c.name;

3.Show customer who spent highest total amount
select c.name , ifnull(sum(o.amount),0) as Total_spent
from customers c
left join orders o
on c.id = o.customer_id
group by c.name
order by  total_spent desc 
LIMIT 1;
