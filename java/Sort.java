/**
 * @(#)Sort.java
 *
 *
 * @author
 * @version 1.00 2012/6/10
 */

public class Sort {
    public static float arrayAverage(int []a)
    {
    	float average=0;
    	int sum=0;
    	for(int i=0;i<a.length;i++)
    		sum=sum+a[i];
    	average=(float)sum/a.length;
    	return average;
    }

    public static void insertSort(int []a)
    {
    	//ดýะด
    }

    public static void selectSort(int []a)
    {
    	int i,j,k;
		for(i=0;i<a.length-1;i++)
		{
			k=i;
			for(j=i+1;j<a.length;j++)
				if(a[k]>a[j])	k=j;
			int temp;
			temp=a[i];
			a[i]=a[k];
			a[k]=temp;
		}
    }

    public static void QSort(int []a,int low,int high)
    {
		if(low<high){
			int pivotloc=Partition(a,low,high);
			QSort(a,low,pivotloc-1);
			QSort(a,pivotloc+1,high);
		}
    }

    public static int Partition(int []a,int low,int high)
    {
    	int pivotkey=a[low];
    	while(low<high){
    		while(low<high&&a[high]>=pivotkey)	--high;
    		a[low]=a[high];
    		while(low<high&&a[low]<=pivotkey)	++low;
    		a[high]=a[low];
    	}
    	a[low]=pivotkey;
    	return low;
    }

    public static void swap(int []a)
    {
		int temp;
		temp=a[0];
		a[0]=a[1];
		a[1]=temp;
    }


    public static void main(String[] args) {
        int c[]={45,26,66,78,95,68,32,55};
        int i;
        System.out.println("Before sort:");
        for(i=0;i<c.length;i++)
        	System.out.print(c[i]+" ");
        System.out.println();
        /*System.out.println("Array average:");
    	System.out.println(arrayAverage(c));
    	System.out.println("Swap c[0],c[1]:");
    	swap(c);
		for(i=0;i<c.length;i++)
			System.out.print(c[i]+" ");
		System.out.println();
    	System.out.println("After select sort:");
    	selectSort(c);
	    for(i=0;i<c.length;i++)
			System.out.print(c[i]+" ");*/
		System.out.println("After quick sort:");
    	QSort(c,0,c.length-1);
	    for(i=0;i<c.length;i++)
			System.out.print(c[i]+" ");
    }
}
