/*自然合并排序*/

public class Merge {
	public static void mergeSort(int[] a){
		int[] b=new int [a.length];
		int s=1;
		while (s<a.length) {
			mergePass(a,b,s);
			s+=s;
			mergePass(b,a,s);
			s+=s;
		}
	}

	public static void mergePass(int[] x,int[] y,int s)
	{
		int i=0;
		while(i<=x.length-2*s){
			merge(x, y, i, i+s-1, i+2*s-1);
			i=i+2*s;
		}
		if(i+s<x.length)
			merge(x, y, i, i+s-1, x.length-1);
		else {
			for(int j=i;j<x.length;j++)
				y[j]=x[j];
		}
	}

	public static void merge(int[] c,int[] d,int l,int m,int r){
		int i=l,j=m+1,k=l;
		while((i<=m)&&(j<=r))
			if(c[i]<=c[j])
				d[k++]=c[i++];
			else d[k++]=c[j++];
		if(i>m)
			for(int q=j;q<=r;q++)
				d[k++]=c[q];
		else {
			for(int q=i;q<=m;q++)
				d[k++]=c[q];
		}
	}
	/**
	 * @param args
	 */
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		int text[]={9,6,8,45,89,53,26,753,951,546};
		System.out.println("Before sort:");
		int i;
		for(i=0;i<text.length;i++)
			System.out.print(text[i]+" ");
		mergeSort(text);
		System.out.print("\n");
		System.out.println("After sort:");
		for(i=0;i<text.length;i++)
			System.out.print(text[i]+" ");
		System.out.print("\n");
	}

}
