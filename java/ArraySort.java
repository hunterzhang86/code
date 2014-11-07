/**
 * @(#)ArraySort.java
 *
 *
 * @author
 * @version 1.00 2012/6/10
 */
import java.io.*;
import java.util.*;
public class ArraySort {

    /**
     * Creates a new instance of <code>ArraySort</code>.
     */
    public static void selectSort(int []a)
    {
    	int i,j,k;
		for(i=0;i<a.length-1;i++)
		{
			k=i;
			for(j=i+1;j<a.length;j++)
				if(a[k]>a[j])	k=j;
			if(k!=i){
				int temp;
				temp=a[i];
				a[i]=a[k];
				a[k]=temp;
			}

		}
    }

    public static void main(String[] args)throws IOException {

		/*从键盘输入(复杂版)*/
    	/*BufferedReader keyin=new BufferedReader(new InputStreamReader(System.in));
    	int a[],i,length,temp;
    	String input;
    	input=keyin.readLine();
    	length=Integer.parseInt(input);
        a=new int[length];
        for(i=0;i<a.length;i++)
        {
        	input=keyin.readLine();
        	a[i]=Integer.parseInt(input);
        }
         System.out.println("Before sort:");
        for(i=0;i<a.length;i++)
        	System.out.print(a[i]+" ");
        System.out.println();
		System.out.println("After select sort:");
    	selectSort(a);
	    for(i=0;i<a.length;i++)
			System.out.print(a[i]+" ");*/

		/*从键盘输入(简单版)*/

		Scanner cin=new Scanner(System.in);
		int i=0,a[]=new int[cin.nextInt()];
		while(i<a.length){  //执行完成就直接关闭输入
			a[i++]=cin.nextInt();
		}
		cin.close();
		System.out.println();
		System.out.println("Before sort:");
        for(i=0;i<a.length;i++)
        	System.out.print(a[i]+" ");
        System.out.println();
		System.out.println("After select sort:");
    	selectSort(a);
	    for(i=0;i<a.length;i++)
			System.out.print(a[i]+" ");


    }
}
