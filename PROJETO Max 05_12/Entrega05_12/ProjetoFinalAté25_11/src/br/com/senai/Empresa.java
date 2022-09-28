package br.com.senai;

public class Empresa {
	
	private String nome;
	private String descricao;
	private Endereco endereco_empresa;
	
	public Empresa(String nome, String descricao, Endereco endereco_empresa) {
		this.nome = nome;
		this.descricao = descricao;
		this.endereco_empresa = endereco_empresa;
	}

	public String getNome() {
		return nome;
	}

	public void setNome(String nome) {
		this.nome = nome;
	}

	public String getDescricao() {
		return descricao;
	}

	public void setDescricao(String descricao) {
		this.descricao = descricao;
	}

	public Endereco getEndereco_empresa() {
		return endereco_empresa;
	}

	public void setEndereco_empresa(Endereco endereco_empresa) {
		this.endereco_empresa = endereco_empresa;
	}

	@Override
	public String toString() {
		return "Empresa [nome=" + nome + ", descricao=" + descricao + ", endereco_empresa=" + endereco_empresa + "]";
	}
	
	

}
