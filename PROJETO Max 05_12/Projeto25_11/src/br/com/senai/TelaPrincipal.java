package br.com.senai;

import java.awt.BorderLayout;
import java.awt.EventQueue;

import javax.swing.JFrame;
import javax.swing.JPanel;
import javax.swing.border.EmptyBorder;
import javax.swing.JButton;
import java.awt.event.ActionListener;
import java.awt.event.ActionEvent;

public class TelaPrincipal extends JFrame {

	private JPanel contentPane;
	public TelaFuncionario funcionario;
	
	private JButton btnSair;
	private JButton btnPedido;
	private JButton btnCadForn;
	private JButton btnEstoque;
	private JButton btnCadProd;

	/**
	 * Launch the application.
	 */
	public static void main(String[] args) {
		EventQueue.invokeLater(new Runnable() {
			public void run() {
				try {
					TelaPrincipal frame = new TelaPrincipal();
					frame.setVisible(true);
				} catch (Exception e) {
					e.printStackTrace();
				}
			}
		});
	}

	/**
	 * Create the frame.
	 */
	public TelaPrincipal() {
		setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		setBounds(100, 100, 450, 300);
		contentPane = new JPanel();
		contentPane.setBorder(new EmptyBorder(5, 5, 5, 5));
		setContentPane(contentPane);
		contentPane.setLayout(null);

		btnSair = new JButton("Sair");
		btnSair.addActionListener(new ActionListener() {
			public void actionPerformed(ActionEvent arg0) {
				System.exit(0); // Ele fecha o programa todo, "mata tudo"
				// dispose(); // Ele fecha apenas a tela que esta rodando
				// setVisible(false); // Ele fecha a tela mas deixa o programa rodando

			}
		});
		btnSair.setBounds(373, 221, 51, 29);
		contentPane.add(btnSair);

		JButton btnCadFunc = new JButton("Cadastrar Funcionario");
		btnCadFunc.addActionListener(new ActionListener() {
			public void actionPerformed(ActionEvent e) {
				//chamada da tela de formulario
				funcionario = new TelaFuncionario(TelaPrincipal.this); // Instancia a classe Formulario // THIS = 
				funcionario.setVisible(true); // deixa visivel a tela Formulario
				setVisible(false); // Deixa visivel apenas a primeira tela
			}
		});
		
		btnCadFunc.setBounds(10, 31, 183, 23);
		contentPane.add(btnCadFunc);
		
		btnPedido = new JButton("Abrir Pedido");
		btnPedido.addActionListener(new ActionListener() {
			public void actionPerformed(ActionEvent arg0) {
				
				////////
			}
		});
		btnPedido.setBounds(241, 65, 183, 23);
		contentPane.add(btnPedido);
		
		btnCadForn = new JButton("Cadastrar Fornecedor");
		btnCadForn.addActionListener(new ActionListener() {
			public void actionPerformed(ActionEvent arg0) {
				
				
				//////////
			}
		});
		btnCadForn.setBounds(10, 65, 183, 23);
		contentPane.add(btnCadForn);
		
		btnEstoque = new JButton("Produtos em Estoque");
		btnEstoque.setBounds(241, 31, 183, 23);
		contentPane.add(btnEstoque);
		
		btnCadProd = new JButton("Cadastrar Produto");
		btnCadProd.setBounds(10, 99, 183, 23);
		contentPane.add(btnCadProd);
	}
}
