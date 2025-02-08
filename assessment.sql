create table Customer(
customer_id int primary key,
cust_name varchar(25) not null,
city varchar(20) not null,
grade int,
salesman_id int not null,
foreign key (salesman_id) references salesman(salesman_id)
);

insert into customer (customer_id,cust_name,city,grade,salesman_id) values 
(3002,'Nick Rimando','New York',100,5001),
(3007,'Brad Savis','New York',200,5001),
(3005,'Graham Zusi','California',200,5002),
(3008,'Julian Green','London',300,5002),
(3004,'Fabian Johnson','Paris',300,5006),
(3009,'Geoff Cameron','Berlin',100,5003),
(3003,'Jozy Altidor','Moscow',200,5007),
(3001,'Brad Guzan','London',null,5005);

create table salesman(
salesman_id int primary key,
name varchar(25) not null,
city varchar(20) not null,
commission float not null
);

insert into salesman (salesman_id,name,city,commission) values 
(5001,'James Hoog','New York','0.15'),
(5002,'Nail Knite','Paris','students0.13'),
(5005,'Pit Alex','London','0.11'),
(5006,'Mc Lyon','Paris','0.14'),
(5007,'Paul Adam','Rome','0.13'),
(5003,'Lauson Hen','San Jose','0.12');

select Customer.cust_name,Customer.city,salesman.salesman_id,salesman.commission 
from customer left join salesman on customer.salesman_id = salesman.salesman_id;
