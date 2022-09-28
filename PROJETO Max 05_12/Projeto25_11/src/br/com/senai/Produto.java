package br.com.senai;

public class Produto {
	
	private String nome;
	private int valor_compra;
	private int valor_venda;
	private CategProduto categoria;
	private Loja estoque_loja;
	
	public Produto(String nome, int valor_compra, int valor_venda, CategProduto categoria, Loja estoque_loja) {
		this.nome = nome;
		this.valor_compra = valor_compra;
		this.valor_venda = valor_venda;
		this.categoria = categoria;
		this.estoque_loja = estoque_loja;
	}

	public String getNome() {
		return nome;
	}

	public void setNome(String nome) {
		this.nome = nome;
	}

	public int getValor_compra() {
		return valor_compra;
	}

	public void setValor_compra(int valor_compra) {
		this.valor_compra = valor_compra;
	}

	public int getValor_venda() {
		return valor_venda;
	}

	public void setValor_venda(int valor_venda) {
		this.valor_venda = valor_venda;
	}

	public CategProduto getCategoria() {
		return categoria;
	}

	public void setCategoria(CategProduto categoria) {
		this.categoria = categoria;
	}

	public Loja getEstoque_loja() {
		return estoque_loja;
	}

	public void setEstoque_loja(Loja estoque_loja) {
		this.estoque_loja = estoque_loja;
	}

	@Override
	public String toString() {
		return "Produto [nome=" + nome + ", valor_compra=" + valor_compra + ", valor_venda=" + valor_venda
				+ ", categoria=" + categoria + ", estoque_loja=" + estoque_loja + "]";
	}
	
	

}
