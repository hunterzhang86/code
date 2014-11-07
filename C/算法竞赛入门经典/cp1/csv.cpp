#include <iostream>
#include <string>
#include <vector>
#include <fstream>

int strstr_cnt(const char *string,const char *substring){
	int i,j,k,count=0;
	for(i=0;string[i];i++){
		for(j=i,k=0;(string[j]==substring[k]&&(j<strlen(string)));j++,k++){
			if(!substring[k+1]){
				count++;
			}
		}
	}
	return count;
}

int substring_index(const char *s1,const char *s2,int pos){
	int i,j,k;
	for(i=pos;s1[i];i++){
		for(j=i,k=0;s1[j]==s2[k];j++,k++){
			if(!s2[k+1]){
				return i;
			}
		}
	}
	return -1;
}

char *fgetcsvline(vector<string> &csv_databuf,FILE *fhead){
	char *ret_stat;
	char data_buf[1024];
	string stringbuf;
	ret_stat=fgets(data_buf,1024);
	{
		stringbuf=(string)data_buf;
		csv_buf
	}
	
}


