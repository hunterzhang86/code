/**
 * @(#)JuZhenYunSuan.java
 *
 *
 * @author
 * @version 1.00 2012/6/11
 */

public class JuZhenYunSuan {
	//矩阵的相加
	public static void addJunZhen(int c[][],int d[][],int add[][]){
		for(int i=0;i<add.length;i++)
			for(int j=0;j<add[0].length;j++)
				add[i][j]=c[i][j]+d[i][j];
	}

	//矩阵的相乘1（效率比较低）
    public static void multiplyJunZhen1(int c[][],int d[][],int mul[][]){
		for(int i=0;i<mul.length;i++)
			for(int j=0;j<mul[0].length;j++){
				mul[i][j]=0;
				for(int k=0;k<c[0].length;k++)
				mul[i][j]=mul[i][j]+c[i][k]*d[k][j];
			}
    }

    //矩阵的相乘2（效率比较高）
    public static void multiplyJunZhen2(int c[][],int d[][],int mul[][]){
		int trans[][]=new int[d[0].length][d.length];
		transpose(d,trans);
		for(int i=0;i<mul.length;i++)
			for(int j=0;j<mul[0].length;j++){
			mul[i][j]=0;
			for(int k=0;k<c[0].length;k++)
			mul[i][j]=mul[i][j]+c[i][k]*trans[j][k];
			}
    }


	//矩阵的转置
    public static void transpose(int d[][],int trans[][]){
			for(int i=0;i<trans.length;i++)
				for(int j=0;j<trans[0].length;j++){
					trans[i][j]=d[j][i];
				}
    }

    public static void main(String[] args) {
        int a[][]={{4,5,9},{5,8,7},{5,7,9}};
        int b[][]={{7,6,3},{2,4,5},{6,3,2}};

        //int a[][]={{4,5,9},{5,8,7}};
        //int b[][]={{7,6,3},{2,4,5}};

    	//int a[][]={{4,5,9,6},{5,8,7,7},{5,7,9,7}};
        //int b[][]={{7,6,3},{2,46,5},{6,3,2},{9,6,2}};

    	//int a[][]={{4,5,9,6},{5,8,7,7},{5,7,9,7}};
        //int b[][]={{7,6,3,6},{2,4,5,7},{6,3,2,4}};

    	//int a[][]={{4,5,9,6},{5,8,7,7},{5,7,9,7}};
        //int b[][]={{7,6,7},{2,4,8},{6,3,9},{9,6,9},{5,8,2}};

    	int i,j;
        System.out.println("A:");
        for(i=0;i<a.length;i++){
        	for(j=0;j<a[i].length;j++)
        		System.out.printf("%4d",a[i][j]);
        	System.out.println();
        }
        System.out.println("B:");
        for(i=0;i<b.length;i++){
        	for(j=0;j<b[i].length;j++)
        		System.out.printf("%4d",b[i][j]);
        	System.out.println();
        }
        if(a.length!=b.length||a[0].length!=b[0].length)
        	System.out.println("矩阵的格式不对,不能进行加法运算");
        else{
	        System.out.println("A+B:");
	        int tempAdd[][]=new int[a.length][a[0].length];
	        addJunZhen(a,b,tempAdd);
	        for(i=0;i<b.length;i++){
	        	for(j=0;j<tempAdd[i].length;j++)
	        		System.out.printf("%4d",tempAdd[i][j]);
	        	System.out.println();
	        }
        }

    	System.out.println("B转置:");
        int trans[][]=new int[b[0].length][b.length];
        transpose(b, trans);
        for(i=0;i<trans.length;i++){
        	for(j=0;j<trans[0].length;j++)
        		System.out.printf("%4d",trans[i][j]);
        	System.out.println();
        }

        if(a[0].length!=b.length) //注意条件
        	System.out.println("矩阵的格式不对,不能进行乘法运算");
        else{
        	System.out.println("A*B(B不转置):");
	        int tempMul[][]=new int[a.length][b[0].length];
	        multiplyJunZhen1(a,b,tempMul);
	        for(i=0;i<tempMul.length;i++){
	        	for(j=0;j<tempMul[0].length;j++)
	        		System.out.printf("%4d",tempMul[i][j]);
	        	System.out.println();
	        }
        }

        if(a[0].length!=b.length)
        	System.out.println("矩阵的格式不对,不能进行乘法运算");
        else{
        	System.out.println("A*B(B转置):");
	        int tempMul[][]=new int[a.length][b[0].length];
	        multiplyJunZhen2(a,b,tempMul);
	        for(i=0;i<tempMul.length;i++){
	        	for(j=0;j<tempMul[0].length;j++)
	        		System.out.printf("%4d",tempMul[i][j]);
	        	System.out.println();
	        }
        }


    }
}
