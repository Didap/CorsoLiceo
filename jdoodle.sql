create table Conto(IDconto int, intestatario varchar(20), saldo float, iban varchar(10));
create table Movimenti(IDmovimento int, IDconto varchar(10), valore float);

insert into Conto values('1','Raffaella', '20000', 'IT0001AB');
insert into Conto values('2','William', '10000', 'IT0001AC');
insert into Conto values('3','Mario', '15000', 'IT0001AD');
insert into Conto values('4','Francesco', '100000', 'IT0001AE');
insert into Conto values('5','Davide', '17000', 'IT0001AF');
insert into Conto values('6','Raffaele', '8000', 'IT0001AN');
insert into Conto values('7','Mario', '500', 'IT0001AM');
insert into Conto values('8','Michele', '13000', 'IT0001AO');
insert into Conto values('9','Luigi', '0', 'IT0001AP');
