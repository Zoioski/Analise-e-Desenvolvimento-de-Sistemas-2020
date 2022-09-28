package br.com.senai;

import java.awt.BorderLayout;
import java.awt.EventQueue;

import javax.swing.JFrame;
import javax.swing.JPanel;
import javax.swing.border.EmptyBorder;
import javax.swing.JTabbedPane;
import javax.swing.JLabel;
import javax.swing.JTextField;
import javax.swing.JSpinner;
import javax.swing.JRadioButton;
import javax.swing.JCheckBox;
import javax.swing.JButton;
import java.awt.event.ActionListener;
import java.awt.event.ActionEvent;
import javax.swing.JComboBox;
import javax.swing.JMenuBar;
import javax.swing.JTable;

public class TelaFuncionario extends JFrame {

	private JPanel contentPane;
	private JTextField txtNome;
	private JTextField textField;
	private JTextField textField_1;


	/**
	 * Create the frame.
	 */
	public TelaFuncionario(TelaPrincipal telaprincipal) {
		setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		setBounds(100, 100, 671, 517);
		contentPane = new JPanel();
		contentPane.setBorder(new EmptyBorder(5, 5, 5, 5));
		setContentPane(contentPane);
		contentPane.setLayout(null);
		
		JTabbedPane tabbedPane = new JTabbedPane(JTabbedPane.TOP);
		tabbedPane.setBounds(10, 11, 414, 202);
		contentPane.add(tabbedPane);
		
		JPanel panel = new JPanel();
		tabbedPane.addTab("Cadastro", null, panel, null);
		panel.setLayout(null);
		
		JLabel lblNome = new JLabel("Nome:");
		lblNome.setBounds(10, 14, 46, 14);
		panel.add(lblNome);
		
		txtNome = new JTextField();
		txtNome.setBounds(64, 11, 321, 20);
		panel.add(txtNome);
		txtNome.setColumns(10);
		
		JLabel lblEndereo = new JLabel("Endere\u00E7o:");
		lblEndereo.setBounds(10, 39, 49, 14);
		panel.add(lblEndereo);
		
		textField = new JTextField();
		textField.setBounds(64, 36, 321, 20);
		panel.add(textField);
		textField.setColumns(10);
		
		JLabel lblBairro = new JLabel("Bairro:");
		lblBairro.setBounds(10, 64, 46, 14);
		panel.add(lblBairro);
		
		JComboBox comboBox = new JComboBox();
		comboBox.setBounds(64, 61, 129, 20);
		panel.add(comboBox);
		
		JLabel lblCidade = new JLabel("Cidade:");
		lblCidade.setBounds(215, 64, 46, 14);
		panel.add(lblCidade);
		
		JComboBox comboBox_1 = new JComboBox();
		comboBox_1.setBounds(258, 61, 127, 20);
		panel.add(comboBox_1);
		
		JLabel lblEstado = new JLabel("Estado:");
		lblEstado.setBounds(10, 89, 46, 14);
		panel.add(lblEstado);
		
		JComboBox comboBox_2 = new JComboBox();
		comboBox_2.setBounds(64, 86, 129, 20);
		panel.add(comboBox_2);
		
		JLabel lblPas = new JLabel("Pa\u00EDs :");
		lblPas.setBounds(215, 89, 46, 14);
		panel.add(lblPas);
		
		JComboBox comboBox_3 = new JComboBox();
		comboBox_3.setBounds(258, 89, 127, 20);
		panel.add(comboBox_3);
		
		JLabel lblCargo = new JLabel("Cargo:");
		lblCargo.setBounds(10, 114, 46, 14);
		panel.add(lblCargo);
		
		JComboBox comboBox_4 = new JComboBox();
		comboBox_4.setBounds(64, 111, 129, 20);
		panel.add(comboBox_4);
		
		JLabel lblDataAdmisso = new JLabel("Data Admiss\u00E3o:");
		lblDataAdmisso.setBounds(10, 139, 80, 14);
		panel.add(lblDataAdmisso);
		
		textField_1 = new JTextField();
		textField_1.setBounds(85, 136, 108, 20);
		panel.add(textField_1);
		textField_1.setColumns(10);
		
		JPanel panel_1 = new JPanel();
		tabbedPane.addTab("Editar Cadastro", null, panel_1, null);
		
		JButton btnSair = new JButton("Sair");
		btnSair.setBounds(495, 109, 89, 23);
		contentPane.add(btnSair);
		
		JButton btnRetornar = new JButton("Retornar");
		btnRetornar.setBounds(495, 75, 89, 23);
		contentPane.add(btnRetornar);
		
		JButton btnConfirmar = new JButton("Confirmar");
		btnConfirmar.addActionListener(new ActionListener() {
			public void actionPerformed(ActionEvent arg0) {
				
				///////
			}
		});
		btnConfirmar.setBounds(495, 41, 89, 23);
		contentPane.add(btnConfirmar);
		btnRetornar.addActionListener(new ActionListener() {
			public void actionPerformed(ActionEvent arg0) {
				telaprincipal.setVisible(true);
				dispose();
			}
		});
		btnSair.addActionListener(new ActionListener() {
			public void actionPerformed(ActionEvent arg0) {
			//dispose(); // Fecha apenas a tela atual, nao a principal
			System.exit(0);
			}
		});
	}
}
