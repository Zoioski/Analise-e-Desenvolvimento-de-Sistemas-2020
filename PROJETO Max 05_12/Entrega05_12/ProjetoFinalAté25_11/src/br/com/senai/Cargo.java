package br.com.senai;

public class Cargo {
	
	private String nome;
	private String descricao;
	private int salario;
	
	public Cargo(String nome, String descricao, int salario) {
		this.nome = nome;
		this.descricao = descricao;
		this.salario = salario;
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

	public int getSalario() {
		return salario;
	}

	public void setSalario(int salario) {
		this.salario = salario;
	}

	@Override
	public String toString() {
		return "Cargo [nome=" + nome + ", descricao=" + descricao + ", salario=" + salario + "]";
	}
	
	

}
