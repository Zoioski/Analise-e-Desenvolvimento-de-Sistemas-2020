create table funcionario(
id int unsigned not null primary key,
nome varchar(100) not null,
id_enderecoF int unsigned references enderecoF(id),
id_cargo int unsigned references cargo(id),
dt_admissao date not null,
dt_demissao date )