create database Munic;
use Munic;

create table regiao_T(
id tinyint unsigned not null auto_increment primary key,
nome varchar(30) not null);

create table porte_T(
id tinyint unsigned not null auto_increment primary key,
descricao varchar(30) not null);

create table estado_T(
IBGE_cod tinyint unsigned not null auto_increment primary key,
nome varchar(20) not null,
sigla char(2) not null,
tregiao_id tinyint unsigned not null references tregiao(id),
tmunicipio_capital_IBGE7 mediumint unsigned not null references tmunicipio(IBGE7)
);

create table municipio_T(
IBGE7 mediumint unsigned not null auto_increment primary key,
IBGE mediumint unsigned not null,
nome varchar(30) not null,
populacao mediumint unsigned not null,
testado_IBGE_cod tinyint unsigned not null references testado(IBGE_cod),
tporte_id tinyint unsigned not null references tporte(id)
);