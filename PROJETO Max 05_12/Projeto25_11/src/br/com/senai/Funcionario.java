package br.com.senai;

import java.util.Date;

public class Funcionario {
	
	private String nome;
	private Cargo cargo;
	private Date dt_admissao;
	private Date dt_demissao;
	private Endereco endereco_func;
	private Loja loja_func;
	
	public Funcionario(String nome, Cargo cargo, Date dt_admissao, Date dt_demissao, Endereco endereco_func,
			Loja loja_func) {
		this.nome = nome;
		this.cargo = cargo;
		this.dt_admissao = dt_admissao;
		this.dt_demissao = dt_demissao;
		this.endereco_func = endereco_func;
		this.loja_func = loja_func;
	}

	public String getNome() {
		return nome;
	}

	public void setNome(String nome) {
		this.nome = nome;
	}

	public Cargo getCargo() {
		return cargo;
	}

	public void setCargo(Cargo cargo) {
		this.cargo = cargo;
	}

	public Date getDt_admissao() {
		return dt_admissao;
	}

	public void setDt_admissao(Date dt_admissao) {
		this.dt_admissao = dt_admissao;
	}

	public Date getDt_demissao() {
		return dt_demissao;
	}

	public void setDt_demissao(Date dt_demissao) {
		this.dt_demissao = dt_demissao;
	}

	public Endereco getEndereco_func() {
		return endereco_func;
	}

	public void setEndereco_func(Endereco endereco_func) {
		this.endereco_func = endereco_func;
	}

	public Loja getLoja_func() {
		return loja_func;
	}

	public void setLoja_func(Loja loja_func) {
		this.loja_func = loja_func;
	}
	
	
	
}
