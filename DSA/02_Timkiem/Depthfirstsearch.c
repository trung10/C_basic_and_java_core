#include <stdio.h>
#include <conio.h>
#define max 100

int edge[max][max];//Cạnh
int trace[max];//Đỉnh sẽ nằm trên đường đi
int num, finish, start;//Số đỉnh, điểm bắt đầu, điểm kiết thúc

void loadData(){
    //file sẽ chưa m+1 dong, dòng đầu chứa: số đỉnh, số cạnh, đỉnh bắt đầu, đỉnh kết thúc
    //Các dòng còn lại sẽ chứa đỉnh dầu cuối của cạnh
	int m;
	FILE *fp;
	if((fp = fopen("input.txt", "r")) == ""){
		printf("No such file\n");
		fclose(fp);
		return;
	}
	fscanf(fp, "%d %d %d %d", &num, &m, &start, &finish);//m là số cạnh
	int firstE, lastE, i;//firstE điểm đầu cạnh, điểm cuối cạnh
	for(i = 1; i <= m; i++){
		fscanf(fp, "%d %d", &firstE, &lastE);
		edge[firstE][lastE] = 1;
		edge[lastE][firstE] = 1;
	}
	fclose(fp);
}
void DFS(int u){
	int v;
	if(u == finish)
		return;
	for(v = 1;v<=num; v++){
        if(edge[u][v]==1 && trace[v]==0){
            trace[v] = u;
            DFS(v);
		}
	}
}

int main(){
	loadData();
	DFS(start);
	if(trace[finish]==0)
		printf("No Results Found");
	else{
		while(finish != start){
			printf("%d <- ", finish);
			finish = trace[finish];
		}
		printf("%d\n", start);
	}
	return 0;
}
