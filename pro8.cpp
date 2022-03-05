#include<iostream>

using namespace std;
class metrics
{
	public:
	int row;
	int column;
	
};
int main()
{
	metrics m1;
	cout<<"ent the rows :="<<endl;
	cin>>m1.row;
	cout<<"ent the column :="<<endl;
	cin>>m1.column;
	 
	int j,k;
	int a[m1.row][m1.column];
//set position...
	
	for(j=0;j<m1.row;j++)
{
	for(k=0;k<m1.column;k++)
{
	cout<<"ent element at["<<j<<"]["<<k<<"] :=";
	cin>>a[j][k];

}

}

	for(j=0;j<m1.row;j++)
{

	for(k=0;k<m1.column;k++)
{
	cout<<a[j][k]<<" ";

	if(k==m1.column -1)
	{
		cout<<endl;
	}
}

	
}
/////////////////////////////////
	metrics m2;
	cout<<"ent the rows :="<<endl;
	cin>>m2.row;
	cout<<"ent the column :="<<endl;
	cin>>m2.column;
	// int m,n;
	int b[m2.row][m2.column];

//set position...
	
	for(j=0;j<m2.row;j++)
{
	for(k=0;k<m2.column;k++)
{
	cout<<"ent element at["<<j<<"]["<<k<<"] :=";
	cin>>b[j][k];

}

}

	for(j=0;j<m2.row;j++)
{

	for(k=0;k<m2.column;k++)
{
	cout<<b[j][k]<<" ";

	if(k==m2.column -1)
	{
		cout<<endl;
	}
}

	
}
cout<<"\n";
cout<<"metrics addition is=="<<endl;
int c[m2.row][m2.column];
//int x,y;
for(j=0;j<m2.row;j++)
{

	for(k=0;k<m2.column;k++)
{
	
	c[j][k]=a[j][k]+b[j][k];
	cout<<c[j][k]<<" ";

	if(k==m2.column -1)
	{
		cout<<endl;
	}
}

	
}
int m;
int mul[m2.row][m2.column];
cout<<"multiplication==\n";
  for(j=0;j<m2.row;j++)
  {
      for(k=0;k<m2.column;k++)
      {
        mul[j][k]=0;
   for(m=0;m<m2.column;m++)
{
   mul[j][k]+=a[j][m]*b[m][k];
}

   }
    }
for(j=0;j<m2.row;j++)
{

	for(k=0;k<m2.column;k++)
	{
	
	cout<<mul[j][k]<<" ";

	if(k==m2.column -1)
	{
		cout<<endl;
	}
	}

	
}
	return 0;

}
