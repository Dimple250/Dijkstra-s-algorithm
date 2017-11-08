#include<iostream>
#include<cstdlib>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	int N=42;
	int Graf[N][N]={
		{0,13,15,10,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, 
		{13, 0, 5, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, 
		{15, 5, 0, 7, 22, 6, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, 
		{10, 0, 7, 0, 0, 0, 4, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, 
		{0, 8, 22, 0, 0, 12, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, 
		{0, 0, 6, 0, 12, 0, 18, 0, 8, 14, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, 
		{0, 0, 9, 4, 0, 18, 0, 9, 0, 0, 23, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, 
		{0, 0, 0, 1, 0, 0, 9, 0, 0, 0, 0, 17, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, 
		{0, 0, 0, 0, 20, 8, 0, 0, 0, 15, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, 
		{0, 0, 0, 0, 0, 14, 0, 0, 15, 0, 13, 0, 0, 9, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, 
		{0, 0, 0, 0, 0, 12, 23, 0, 0, 13, 0, 11, 0, 0, 6, 1, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, 
		{0, 0, 0, 0, 0, 0, 11, 17, 0, 0, 11, 0, 16, 0, 0, 0, 4, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, 
		{0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 16, 0, 0, 0, 0, 0, 8, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, 
		{0, 0, 0, 0, 0, 0, 0, 0, 10, 9, 0, 0, 0, 0, 16, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, 
		{0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 6, 0, 0, 16, 0, 7, 0, 0, 0, 12, 10, 18, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, 
		{0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 7, 0, 22, 0, 0, 0, 0, 12, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, 
		{0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 4, 0, 0, 0, 22, 0, 5, 0, 0, 0, 0, 1, 23, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, 
		{0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 8, 0, 0, 0, 5, 0, 10, 0, 0, 0, 0, 12, 19, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, 
		{0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 9, 21, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, 
		{0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 12, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, 
		{0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 12, 0, 12, 0, 0, 0, 0, 22, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, 
		{0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 18, 12, 0, 0, 0, 0, 12, 0, 16, 0, 0, 0, 0, 16, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, 
		{0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 1, 0, 0, 0, 0, 16, 0, 14, 0, 0, 0, 0, 29, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, 
		{0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 23, 12, 0, 0, 0, 0, 14, 0, 1, 0, 0, 0, 15, 17, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, 
		{0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 19, 9, 0, 0, 0, 0, 1, 0, 10, 0, 0, 0, 21, 22, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, 
		{0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 21, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, 
		{0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 14, 22, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 19, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, 
		{0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 16, 0, 0, 0, 0, 9, 0, 13, 0, 0, 11, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0}, 
		{0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 29, 15, 0, 0, 0, 13, 0, 22, 0, 0, 21, 11, 0, 0, 0, 0, 0, 0, 0, 0}, 
		{0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 17, 21, 0, 0, 0, 22, 0, 18, 0, 0, 6, 16, 0, 0, 0, 0, 0, 0, 0}, 
		{0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 22, 10, 0, 0, 0, 18, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0}, 
		{0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 19, 11, 0, 0, 0, 0, 15, 0, 0, 15, 0, 0, 0, 0, 0, 0}, 
		{0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15, 21, 0, 0, 15, 0, 9, 0, 14, 22, 0, 0, 0, 0, 0}, 
		{0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 6, 0, 0, 9, 0, 14, 0, 18, 20, 0, 0, 0, 0}, 
		{0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 20, 0, 0, 14, 0, 0, 0, 12, 0, 0, 0, 0}, 
		{0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15, 14, 0, 0, 0, 17, 0, 11, 0, 0, 0}, 
		{0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 22, 18, 0, 17, 0, 5, 7, 0, 9, 0}, 
		{0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 12, 0, 5, 0, 0, 17, 16, 0}, 
		{0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 7, 0, 0, 0, 20, 13}, 
		{0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 17, 0, 0, 1, 21}, 
		{0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 16, 20, 1, 0, 17}, 
		{0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 21, 17, 0}, 
	};
	/*int flag=0;
	
	cout<<"1-Автоматическое"<<endl;
	cout<<"2-В ручную:"<<endl;
	cin>>flag;
	
	if(flag==2){
	for(int i=0;i<N;i++){
	for(int j=0;j<N;j++){
		Graf[i][j]=0;
	}
	}
	
	for(int i=0;i<N;i++){
	Graf[i][i]=0;
	for(int j=i+1;j<N;j++){
		cout<<"Ðåáðî "<<i+1<<" - "<<j+1<<":";
		cin>>Graf[i][j];
		Graf[j][i]=Graf[i][j];
		}
	}
	}
	
	srand(time(0)); 
	if(flag==1){
	for(int i=0;i<N;i++){
		Graf[i][i]=0;
	for(int j=i+1;j<N;j++){
		cout<<"Ðåáðî "<<i+1<<" - "<<j+1<<":";
		cin>>Graf[i][j];
	}
	}
	
	for(int i=0;i<N;i++){
	for(int j=i+1;j<N;j++){
		if(Graf[i][j]==1)
		Graf[i][j]=rand()%(30-1)+1;
		Graf[j][i]=Graf[i][j];
		}
	}
	}
	
	for(int i=0;i<N;i++){
	for(int j=0;j<N;j++){
		cout<<Graf[i][j];
		if(Graf[i][j]>10)
		cout<<' ';
		else
		cout<<"  ";
	}
	cout<<endl;
	}*/
	
	int a1=0;//Start point
	int a2=0;//End point
		cout<<"Введите начальную вершину:"<<endl;
		cin>>a1;
	int a;
	int d[N];
	int p[N];
	int path[N];
	int min=999;
	int v=a1-1;
	int n=0;
	int j=0;
		
	//Initialization
	for(int i=0;i<N;i++){
		d[i]=999;
		p[i]=1;
		path[i]=0;
	}
	//Algoritm
		d[a1-1]=0;
		do{	
		j=0;
		while(j<N){
		while(Graf[v][j]==0)j++;
		if(d[j]>Graf[v][j]+d[v]&&p[j]==1){
		d[j]=Graf[v][j]+d[v];
		}
		j++;
		}
		p[v]=0;
		min=999;
		for(int i=0;i<N;i++){
			if(p[i]==1&&min>d[i]){
			min=d[i];
			}
		}
		for(int i=0;i<N;i++){
			if(p[i]==1&&d[i]==min)min=i;
		}
		v=min;
	}while(min<999);
	
		
		/*cout<<"star:"<<a1<<endl;
		for(int i=0;i<N;i++){
			cout<<i+1<<':'<<d[i]<<' ';
		}
		cout<<endl;*/

	//Search minimal way for five top
	int k=0;
	int sum=0;
		while(k<5){
			cout<<"Введите вершину которой хотите попасть:";
			cin>>a2;
			sum=a2-1;
			path[0]=a2;
			n=1;
		a2=a2-1;
	while(path[n]!=a1){
		j=0;
		while(j<N){
			while(Graf[a2][j]==0)j++;
		if(d[a2]-Graf[a2][j]==d[j]){
			a2=j;
			path[n++]=a2+1;
			}
			j++;
			}
			n++;
		}
		cout<<k+1<<")";
		for(int i=N-1;i>0;i){
			if(path[i]==0)i--;
			else
			cout<<path[i--]<<"-->";
		}
		cout<<path[0]<<':'<<d[sum];
		cout<<endl;
		k++;
		
		for(int i=0;i<N;i++){
			path[i]=0;
		}
	}
	system("pause");
	return 0;
}
