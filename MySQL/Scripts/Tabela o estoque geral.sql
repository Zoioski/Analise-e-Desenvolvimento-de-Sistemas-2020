create table estoque_geral (
id int unsigned not null primary key,
id_produto int unsigned references produto(id),
id_funcionario int unsigned references funcionario(id),
id_loja int unsigned references loja(id),
id_fornecedor int unsigned references fornecedor(id),
id_pedido int unsigned references pedido(id),
id_pedido_loja int unsigned references pedido_loja(id),
id_estoque_loja int unsigned references estoque_loja(id))