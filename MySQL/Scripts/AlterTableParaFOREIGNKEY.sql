ALTER TABLE categoria_produto
ADD CONSTRAINT fk_CategProduto FOREIGN KEY (id) REFERENCES produto(id_categoria_produto)