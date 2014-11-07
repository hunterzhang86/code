#include <stdio.h> 
int main( ) 
{ 
	int nCases, i, nFeet; //nCases 表示输入测试数据的组数，nFeet 表示输入的脚数。 
	scanf("%d", &nCases); 
	for(i = 0; i < nCases; i++){ 
		scanf("%d", &nFeet); 
    if(nFeet %2 != 0) // 如果有奇数只脚，则输入不正确， 
	// 因为不论2 只还是4 只，都是偶数 
	printf("0 0\n"); 
	else if (nFeet%4 != 0) //若要动物数目最少，使动物尽量有 4 只脚 
	//若要动物数目最多，使动物尽量有 2 只脚 
	printf("%d %d\n", nFeet / 4 + 1, nFeet / 2); 
	else printf("%d %d\n", nFeet / 4, nFeet / 2); 
	} 
	getchar();
	return 0;
	
} 
