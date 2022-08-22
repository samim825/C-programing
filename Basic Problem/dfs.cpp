#include<bits/stdc++.h>
using namespace std;
int visited[10],arr[10][10];
int main(){

int ver;
int edge;

cout<<"Enter the number of  vertices :";
cin>>ver;

cout<<endl<<"Enter the number of edges : ";
cin>>edge;



cout<<"Enter the edges : "<<endl;
for(int k=1; k<=edge; k++){
        int i, j;
    cin>>i>>j;
    arr[i][j] =1;
}
cout<<"Enter the initial traverse vertices : ";
int v;
cin>>v;

cout<<v<<" ";

visited[v] = 1;

stack<int> st;
for(int k=1; k<ver; k++){

        for(int i=ver; i>0; i--){
            if(arr[v][i]==1 && visited[i]==0){

                st.push(i);

            }
        }

        v = st.top();
        st.pop();
        cout<<v<<" ";

        visited[v] = 1;

}

return 0;
}

