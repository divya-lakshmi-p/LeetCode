

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
