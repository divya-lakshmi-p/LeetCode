

Exercise 1

Create table books

Columns:

id → auto increment primary key
title → required
author → required
price → number

CREATE TABLE book( id INT AUTO_INCREMENT PRIMARY KEY , title VARCHAR(100) NOT NULL,author varchar(100) NOT NULL,Price decimal(10 , 2));


INSERT INTO book values (1,'CANT HURT ME' , 'DIVYA',100.90);



 Exercise 2

Create table customers

Columns:

id → auto increment primary key
name → required
email → unique
city → default 'Unknown'


CREATE TABLE customers(ID INT AUTO_INCREMENT PRIMARY KEY , NAME VARCHAR(100) ,  EMAIL VARCHAR(100)UNIQUE  , city varchar(20)default 'UNKNOWN');

commit;

INSERT INTO customers values(1 , 'DIVYA' ,'PSYD@gmail.com','MANAMADURAI');
INSERT INTO customers values(2 , 'UVA' ,'PSD@gmail.com','MANAMADURAI');
INSERT INTO customers values(3 , 'SHANTHI' ,'PYD@gmail.com','MANAMADURAI');
INSERT INTO customers values(4 , 'PALPANDI' ,'SYD@gmail.com','MANAMADURAI');

select * from customers where EMAIL = 'PSYD@gmail.com';


✅ Exercise 3

Create table orders

Columns:

id → auto increment primary key
customer_name → required
amount → must be ≥ 0
status → default 'pending'

👉 (Hint: use CHECK)




CREATE TABLE ORDERS( ID INT AUTO_INCREMENT PRIMARY KEY , CUSTOMER_NAME VARCHAR(100)  NOT NULL , AMOUNT DECIMAL(10 , 2) CHECK(AMOUNT >=0) , STATUS VARCHAR(20) default 'PENDING');



INSERT INTO ORDERS VALUES(1 ,'shanthi',190.20 , 'PENDING');
INSERT INTO ORDERS VALUES(2 ,'pandi',190 , 'PENDING');
INSERT INTO ORDERS VALUES(3 ,'divya',1900.20 , 'PENDING');
INSERT INTO ORDERS VALUES(4 ,'uva',1890.20 , 'PENDING');
INSERT INTO ORDERS VALUES(5 ,'srithika',1190.20 , 'PENDING');


select * from ORDERS;

✅ Exercise 5

Create table students

Columns:

id → auto increment primary key
name → required
marks → between 0 and 100
grade → default 'NA'



Table already created but we use alter command to modify the table 



ALter table students add marks INT check(marks >0 && marks <=100);

ALTER table students add grade varchar(20) default(''NA'');





INSERT INTO students values(1 ,'A' , 19,96,'NA');
INSERT INTO students values(2 ,'AB' , 89,96,'NA');
INSERT INTO students values(3 ,'Ac' , 69,96,'NA');
INSERT INTO students values(4 ,'Ag' , 78,96,'NA');
INSERT INTO students values(5 ,'Ae' , 68,96,'NA');
INSERT INTO students values(6 ,'Au' , 10,96,'NA');
INSERT INTO students values(7 ,'Ao' , 28,96,'NA');
INSERT INTO students values(8 ,'Aa' , 38,96,'NA');
INSERT INTO students values(9 ,'Ap' , 98,96,'NA');


select * from students;



✅ Exercise 4

Create table employees

Columns:

id → auto increment primary key
name → required
salary → must be > 1000
department → required




CREATE TABLE Employees (ID INT  Auto_Increment Primary key  , NAME VARCHAR(100) NOT NULL , Salary INT check(Salary >1000) , DEPARTMENT VARCHAR(100)NOT NULL);


Insert INTO Employees  values (1, 'DIVYA' ,10000,'CSE');

select * from Employees;


✅ Exercise 6

Create table products

Columns:

id → auto increment primary key
name → required
price → must be > 0
stock → default 0
🔴 BONUS (Slightly Advanced)




Create table products (ID int Auto_increment Primary key , Name Varchar(100)NOT NULL , Price Decimal(10 ,2) check (price >0) ,stock Int default'0');


Insert into products values(1, 'DIVYA' , 278.98,'0');

select * from products;


✅ Exercise 7

Create table accounts

Columns:

id → auto increment primary key
username → unique + required
password → required
balance → default 0 and ≥ 0

Create table accounts(id INT auto_increment primary key  , username varchar(100) UNIQUE NOT NULL , password varchar(100) NOT NULL , balance int default '0' check(balance >=0));



