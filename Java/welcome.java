import javax.swing.JOptionPane;

public class welcome{
	public static void main(String[] args) {
	    String firstNumber, secondNumber;
	    int number1, number2, sum;

	    firstNumber = JOptionPane.showInputDialog("Enter the first interger");
	    secondNumber = JOptionPane.showInputDialog("Enter the second interger");

	    number1 = Integer.parseInt( firstNumber );
	    number2 = Integer.parseInt( secondNumber );

	    sum = number1 + number2;

	    JOptionPane.showMessageDialog(null, "The sum is " + sum, "Results", JOptionPane.PLAIN_MESSAGE );

	    System.exit(0);
	}
}
