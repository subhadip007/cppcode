#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define in_range(x, y, r, c) (x < r && y < c && x >= 0 && y >= 0)

int r,c,ans=INT_MIN;

void path(int i,int j,vector<vector<char>> v1,vector<vector<int>> &v2){

int x,y;

x=i-1;
y=j-1;
if(in_range(x,y,r,c)&&v1[x][y]==v1[i][j]+1&&v2[x][y]==0){
	v2[x][y]=v2[i][j]+1;
ans=max(ans,v2[x][y]);
	path(x,y,v1,v2);
}
x=i-1;
y=j;
if(in_range(x,y,r,c)&&v1[x][y]==v1[i][j]+1&&v2[x][y]==0){
	v2[x][y]=v2[i][j]+1;
ans=max(ans,v2[x][y]);
	path(x,y,v1,v2);
}
x=i-1;
y=j+1;
if(in_range(x,y,r,c)&&v1[x][y]==v1[i][j]+1&&v2[x][y]==0){
	v2[x][y]=v2[i][j]+1;
ans=max(ans,v2[x][y]);
	path(x,y,v1,v2);
}
x=i;
y=j+1;
if(in_range(x,y,r,c)&&v1[x][y]==v1[i][j]+1&&v2[x][y]==0){
	v2[x][y]=v2[i][j]+1;
ans=max(ans,v2[x][y]);
	path(x,y,v1,v2);
}
x=i;
y=j-1;
if(in_range(x,y,r,c)&&v1[x][y]==v1[i][j]+1&&v2[x][y]==0){
	v2[x][y]=v2[i][j]+1;
ans=max(ans,v2[x][y]);
	path(x,y,v1,v2);
}
x=i+1;
y=j+1;
if(in_range(x,y,r,c)&&v1[x][y]==v1[i][j]+1&&v2[x][y]==0){
	v2[x][y]=v2[i][j]+1;
ans=max(ans,v2[x][y]);
	path(x,y,v1,v2);
}
x=i+1;
y=j;
if(in_range(x,y,r,c)&&v1[x][y]==v1[i][j]+1&&v2[x][y]==0){
	v2[x][y]=v2[i][j]+1;
ans=max(ans,v2[x][y]);
	path(x,y,v1,v2);
}
x=i+1;
y=j-1;
if(in_range(x,y,r,c)&&v1[x][y]==v1[i][j]+1&&v2[x][y]==0){
	v2[x][y]=v2[i][j]+1;
ans=max(ans,v2[x][y]);
	path(x,y,v1,v2);
}

}




int main(){
ios_base::sync_with_stdio(false);
    cin.tie(NULL);
int n;
cin>>n;

while(n--){
	int x,y;
	cin>>x>>y;
	r=x;
	c=y;
	vector<vector<char>> v1;
	vector<vector<int>> v2(x,vector<int>(y,0));
	queue<pair<int,int>> q;
	for(int i=0;i<x;i++){
		
		vector<char> v;
		for(int j=0;j<y;j++){
			char t;
			cin>>t;
			if(t=='A') q.push(make_pair(i,j));
			v.push_back(t);
			
			}
		v1.push_back(v);
	}
	cin>>x>>y;
	while(q.size()){
	path(q.front().first,q.front().second,v1,v2);
	q.pop();
	}
	
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			cout<<v2[i][j]<<" ";
		}
		cout<<"\n";
	}
	//cout<<ans+1;
	// cout<<v2[1][0];
	cout<<"\n";
	
}



	return 0;
}
