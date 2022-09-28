package br.com.senai;

public class Loja {
	
	private String nome;
        private int id;
	private Endereco endereco_loja;
	
	public Loja(String nome, Endereco endereco_loja) {
		this.nome = nome;
		this.endereco_loja = endereco_loja;
	}

    public int getId() {
        return id;
    }

    public void setId(int id) {
        this.id = id;
    }

	public String getNome() {
		return nome;
	}

	public void setNome(String nome) {
		this.nome = nome;
	}

	public Endereco getEndereco_loja() {
		return endereco_loja;
	}

	public void setEndereco_loja(Endereco endereco_loja) {
		this.endereco_loja = endereco_loja;
	}

	@Override
	public String toString() {
		return "Loja [nome=" + nome + ", endereco_loja=" + endereco_loja + "]";
	}
	
	

}
