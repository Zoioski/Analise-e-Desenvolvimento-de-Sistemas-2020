package br.com.senai;

public class CategProduto {
	
	private String descricao;

	public CategProduto(String descricao) {
		this.descricao = descricao;
	}

	public String getDescricao() {
		return descricao;
	}

	public void setDescricao(String descricao) {
		this.descricao = descricao;
	}

	@Override
	public String toString() {
		return "CategProduto [descricao=" + descricao + "]";
	}
	
	

}
