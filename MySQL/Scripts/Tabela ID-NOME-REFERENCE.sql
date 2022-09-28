create table enderecoF(
id int unsigned not null primary key,
nome varchar(100) not null,
id_cidadeF int unsigned references cidadeF(id))