/**
 * @(#)SelectSortComparble.java
 *
 *Comparble 和int主要的区别就是比较大小的时候要用到compareTo函数
 *
 * @author
 * @version 1.00 2012/6/10
 */


public class SelectSortComparble {
    public static float arrayAverage(int []a)
    {
    	float average=0;
    	int sum=0;
    	for(int i=0;i<a.length;i++)
    		sum+=a[i];
    	average=(float)sum/a.length;
    	return average;
    }

    public static void selectSort(int []a)
    {
    	int i,j,k;
		for(i=0;i<a.length-1;i++)
		{
			k=i;
			for(j=i+1;j<a.length;j++)
				if(a[k]>(a[j]))	k=j;
			int temp;
			temp=a[i];
			a[i]=a[k];
			a[k]=temp;
		}
    }

    public static void swap(int []a)
    {
		int temp;
		temp=a[0];
		a[0]=a[1];
		a[1]=temp;
    }


    public static void main(String[] args) {
        int  c[]={45,26,66,78,95,68,32,55};
        int i;
        System.out.println("Before sort:");
        for(i=0;i<c.length;i++)
        	System.out.print(c[i]+" ");
        System.out.println();
        System.out.println("Array average:");
    	System.out.println(arrayAverage(c));
    	/*System.out.println("Swap c[0],c[1]:");
    	swap(c);
		for(i=0;i<c.length;i++)
			System.out.print(c[i]+" ");
		System.out.println();*/
    	System.out.println("After select sort:");
    	selectSort(c);
	    for(i=0;i<c.length;i++)
			System.out.print(c[i]+" ");
    }
}
