package TelasJava;

import java.awt.EventQueue;

import javax.swing.JFrame;
import javax.swing.JLabel;
import java.awt.Font;
import java.text.ParseException;

import javax.swing.JTextField;
import javax.swing.text.MaskFormatter;
import javax.swing.JFormattedTextField;

public class Mascara_Data_CPF_CNPJ_Telefone {

	private JFrame frame;
	
	//private - Privato
	//static - fixo um espaço fixo / único na memoria
	private static MaskFormatter mascaraData;
	private static MaskFormatter mascaraCPF;
	private static MaskFormatter mascaraCNPJ;
	private static MaskFormatter mascaraTelefone;

	/**
	 * Launch the application.
	 */
	public static void main(String[] args) {
		EventQueue.invokeLater(new Runnable() {
			public void run() {
				try {
					Mascara_Data_CPF_CNPJ_Telefone window = new Mascara_Data_CPF_CNPJ_Telefone();
					window.frame.setVisible(true);
				} catch (Exception e) {
					e.printStackTrace();
				}
			}
		});
	}

	/**
	 * Create the application.
	 */
	public Mascara_Data_CPF_CNPJ_Telefone() {
		initialize();
	}

	/**
	 * Initialize the contents of the frame.
	 */
	private void initialize() {
		frame = new JFrame();
		frame.setBounds(100, 100, 583, 480);
		frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		frame.getContentPane().setLayout(null);
		
		JLabel lblNewLabel = new JLabel("Data");
		lblNewLabel.setFont(new Font("Tahoma", Font.PLAIN, 20));
		lblNewLabel.setBounds(26, 36, 457, 34);
		frame.getContentPane().add(lblNewLabel);
		
		JLabel lblCpf = new JLabel("CPF");
		lblCpf.setFont(new Font("Tahoma", Font.PLAIN, 20));
		lblCpf.setBounds(26, 120, 457, 34);
		frame.getContentPane().add(lblCpf);
		
		JLabel lblCnpj = new JLabel("CNPJ");
		lblCnpj.setFont(new Font("Tahoma", Font.PLAIN, 20));
		lblCnpj.setBounds(26, 204, 457, 34);
		frame.getContentPane().add(lblCnpj);
		
		JLabel lblTelefone = new JLabel("Telefone");
		lblTelefone.setFont(new Font("Tahoma", Font.PLAIN, 20));
		lblTelefone.setBounds(26, 297, 457, 34);
		frame.getContentPane().add(lblTelefone);
		
		JFormattedTextField txtData = new JFormattedTextField( arrumaMascaraData() );
		txtData.setFont(new Font("Tahoma", Font.PLAIN, 26));
		txtData.setBounds(26, 68, 457, 42);
		frame.getContentPane().add(txtData);
		
		JFormattedTextField txtCPF = new JFormattedTextField( arrumaMascaraCPF() );
		txtCPF.setFont(new Font("Tahoma", Font.PLAIN, 26));
		txtCPF.setBounds(26, 164, 457, 42);
		frame.getContentPane().add(txtCPF);
		
		JFormattedTextField txtCNPJ = new JFormattedTextField( arrumaMascaraCNPJ() );
		txtCNPJ.setFont(new Font("Tahoma", Font.PLAIN, 26));
		txtCNPJ.setBounds(26, 244, 457, 43);
		frame.getContentPane().add(txtCNPJ);
		
		JFormattedTextField txtTelefone = new JFormattedTextField( arrumaMascaraTelefone() );
		txtTelefone.setFont(new Font("Tahoma", Font.PLAIN, 26));
		txtTelefone.setBounds(26, 341, 457, 42);
		frame.getContentPane().add(txtTelefone);
	}
	
	//Método que cria a máscara
	public static MaskFormatter arrumaMascaraData() {
		
		//# - Significa que o Java vai pegar um número entre 0 a 9
		//Tratamento de erro
		try {
			mascaraData = new MaskFormatter("##/##/####");
		} catch (ParseException e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		}
		
		//Substituir tudo que é # por _
		mascaraData.setPlaceholderCharacter('_');
		
		return mascaraData;
		
	}
	
	//Método que cria a máscara
		public static MaskFormatter arrumaMascaraCPF() {
			
			//# - Significa que o Java vai pegar um número entre 0 a 9
			//Tratamento de erro
			try {
				mascaraCPF = new MaskFormatter("###.###.###-##");
			} catch (ParseException e) {
				// TODO Auto-generated catch block
				e.printStackTrace();
			}
			
			//Substituir tudo que é # por _
			mascaraCPF.setPlaceholderCharacter('_');
			
			return mascaraCPF;
			
		}
		
		//Método que cria a máscara
		public static MaskFormatter arrumaMascaraCNPJ() {
			
			//# - Significa que o Java vai pegar um número entre 0 a 9
			//Tratamento de erro
			try {
				mascaraCNPJ = new MaskFormatter("##.###.###/####-##");
			} catch (ParseException e) {
				// TODO Auto-generated catch block
				e.printStackTrace();
			}
			
			//Substituir tudo que é # por _
			mascaraCNPJ.setPlaceholderCharacter('_');
			
			return mascaraCNPJ;
			
		}
		
		//Método que cria a máscara
		public static MaskFormatter arrumaMascaraTelefone() {
			
			//# - Significa que o Java vai pegar um número entre 0 a 9
			//Tratamento de erro
			try {
				mascaraTelefone = new MaskFormatter("(##) #####-####");
			} catch (ParseException e) {
				// TODO Auto-generated catch block
				e.printStackTrace();
			}
			
			//Substituir tudo que é # por _
			mascaraTelefone.setPlaceholderCharacter('_');
			
			return mascaraTelefone;
			
		}
}
