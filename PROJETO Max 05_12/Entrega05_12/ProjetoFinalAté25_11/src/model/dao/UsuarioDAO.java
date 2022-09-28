/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package model.dao;

import br.com.senai.CategProduto;
import br.com.senai.Loja;
import br.com.senai.Produto;
import br.com.senai.TelaProduto;
import java.sql.Connection;
import java.sql.PreparedStatement;
import java.sql.ResultSet;
import java.sql.SQLException;
import java.util.ArrayList;
import java.util.List;
import java.util.logging.Level;
import java.util.logging.Logger;
import model.bean.Usuario;
import model.connection.ConnectionFactory;

/**
 *
 * @author Aluno
 */
public class UsuarioDAO {
    
   public static List<CategProduto> buscaCateg(){
        Connection con = ConnectionFactory.getConnection();
            PreparedStatement stmt = null;
            ResultSet rs = null;
            
            
	List<CategProduto> categorias = new ArrayList<CategProduto>();
            try{

            stmt = con.prepareStatement("SELECT * FROM categoria_produtot");  
            rs = stmt.executeQuery();  
            while(rs.next())  
            {
                
                CategProduto c = new CategProduto();
                c.setId(rs.getInt("id"));
                    c.setDescricao(rs.getString("descricao"));
                    categorias.add(c);
                
                
           
            }  
            rs.close();  
            con.close();
        }catch (SQLException ex) {
		System.out.println("Erro" + ex);
	} finally {
		ConnectionFactory.closeConnection(con, stmt);
	}
            return categorias;
        
    }
   public static List<CategProduto> buscaLoja(){
        Connection con = ConnectionFactory.getConnection();
            PreparedStatement stmt = null;
            ResultSet rs = null;
            
            
	List<CategProduto> categorias = new ArrayList<CategProduto>();
            try{

            stmt = con.prepareStatement("SELECT * FROM lojat");  
            rs = stmt.executeQuery();  
            while(rs.next())  
            {
                
                CategProduto c = new CategProduto();
                    c.setDescricao(rs.getString("nome"));
                    categorias.add(c);
                
                
           
            }  
            rs.close();  
            con.close();
        }catch (SQLException ex) {
		System.out.println("Erro" + ex);
	} finally {
		ConnectionFactory.closeConnection(con, stmt);
	}
            return categorias;
        
    }
   
   public void insereProduto(Produto produto, Loja loja, CategProduto categoria ) {

		Connection con = ConnectionFactory.getConnection();
		PreparedStatement stmt = null;

		try {
			String sql = "INSERT INTO produto (nome, valor_compra, venda_venda, id_categoria_venda, id_loja) VALUES (?, ?, ?, ?, ?)";
			stmt = con.prepareStatement(sql);
			stmt.setString(1, produto.getNome());
			stmt.setInt(2, produto.getValor_compra());
			stmt.setInt(3, produto.getValor_venda());
			stmt.setInt(4, categoria.getId());
			stmt.setInt(5, loja.getId());
                        

			stmt.executeUpdate();

		} catch (SQLException ex) {
			System.out.println("Erro ao tentar salvar " + ex);
			Logger.getLogger(UsuarioDAO.class.getName()).log(Level.SEVERE, null, ex);
		} finally {
			ConnectionFactory.closeConnection(con, stmt);
		}
	}
    
}
