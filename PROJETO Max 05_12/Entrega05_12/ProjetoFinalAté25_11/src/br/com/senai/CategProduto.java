package br.com.senai;

import model.dao.UsuarioDAO;
import java.util.List;

public class CategProduto {
	
	private String descricao;
        private int id;
        
        public CategProduto(){}

	public CategProduto(String descricao) {
		this.descricao = descricao;
	}

	public String getDescricao() {
		return descricao;
	}

	public void setDescricao(String descricao) {
		this.descricao = descricao;
	}

    public int getId() {
        return id;
    }

    public void setId(int id) {
        this.id = id;
    }

	@Override
	public String toString() {
		return descricao;
	}
	
        
	

}
