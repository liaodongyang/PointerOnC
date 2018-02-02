#include <stdio.h>

int checkmat(int l, int mat[l][l]){
	for(int i = 0;i < l;i++){
		for(int j = 0; j < l; j++){
			if(i == j){
				if(mat[i][j] != 1){
					return 0;
				}
			}
		}
	}
	return 1;
}

int main(){
	int ac[2][2]={{1,0},{0,0}};
	int ch=checkmat(2, ac);
	printf("%d\n", ch);
	return 0;
}
