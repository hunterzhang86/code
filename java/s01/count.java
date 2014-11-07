/**
 * @(#)count.java
 *
 *
 * @author
 * @version 1.00 2012/6/10
 */


public class count {

    public static void main (String[] args){
    	int i=3;
    	int count1;
    	//count1=(i++)+(i++)+(i++);
		count1=(++i)+(++i)+(++i);
		System.out.println(i);
		System.out.println(count1);
    }


}