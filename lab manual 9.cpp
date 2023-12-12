#include <iostream>
using namespace std;
int main() 
//{ int count = 1;
// int ar[3][3]={};
// for (int i =0; i<3;i++)
// { 
//     for (int j =0; j<3;j++)
// { ar[i][j]=count;
// count++ ;
//       cout<<ar[i][j]<<"\t";
//     }
//     cout<<endl; 
//} 
//
//int leftsum = 0;
//for(int i=0;i<3;i++){
//        leftsum += ar[i][i];
//      
//        }
//          cout<<"sum of left diagonal = " << leftsum<<endl;
//        
//        int rightsum = 0;
//for(int i=0;i<3;i++){
//        rightsum += ar[i][2-i];
//       
//        }
//         cout<<"sum of right diagonal = " << rightsum<<endl;
//    return 0;
//}

//
//{
//	int x=1;
//	int a1[3][3], a2[3][3];
//	cout<<"first matrix"<<endl;
//	for( int i=0; i<3; i++) {
//		for (int j =0; j<3;j++) {
//			a1[i][j]=x;
//			x++;
//			cout<<a1[i][j]<<" ";
//			}
//		cout<<endl;
//	}
//
//	cout<<"second matrix"<<endl;
//	for( int i=0; i<3; i++) {
//		for (int j =0; j<3;j++) {
//			a2[i][j]=x;
//			x++;
//		
//			cout<<a2[i][j]<<" ";
//		}
//		cout<<endl;
//	}
//	int s[3][3];
//	for( int i=0; i<3; i++) {
//		for (int j =0; j<3;j++) {
//        s[i][j]=a1[i][j]+a2[i][j];		
//		}
//		
//	}
//		cout<<"sum is "<<endl;
//	for( int i=0; i<3; i++) {
//		for (int j =0; j<3;j++) {
//			cout<<s[i][j]<<" ";		
//				}
//		cout<<endl;
//	}
//return 0;
//}



// void transpose(int a[3][3], int trans[3][3]) {
//    for (int i = 0; i < 3; i++) {
//        for (int j = 0; j < 3; j++) {
//            trans[i][j] = a[j][i];
//        }
//    }
//}
//
//int main() {
//    int a[3][3];
//    int transposed[3][3];
//
//    cout << "Enter 9 elements of the matrix:" << endl;
//    for (int i = 0; i < 3; i++) {
//        for (int j = 0; j < 3; j++) {
//            cin >> a[i][j];
//        }
//    }
//
//    cout << "Original matrix:" << endl;
//    for (int i = 0; i < 3; i++) {
//        for (int j = 0; j < 3; j++) {
//            cout << a[i][j] << " ";
//        }
//        cout << endl;
//    }
//
//    transpose(a, transposed);
//
//    cout << "Transpose matrix:" << endl;
//    for (int i = 0; i < 3; i++) {
//        for (int j = 0; j < 3; j++) {
//            cout << transposed[i][j] << " ";
//        }
//        cout << endl;
//    }
//
//    return 0;
//}




//	void inputarray(int a[3][3]) {
//		for (int i=0;i<3;i++) {
//			for(int j=0;j<3;j++) {
//				cin>>a[i][j];
//			}
//		}
//	}
//void displayarray(int a[3][3]) {
//		for (int i=0;i<3;i++) {
//			for(int j=0;j<3;j++) {
//				cout<<a[i][j]<<" ";
//			
//			}
//			cout<<endl;
//		}
//	}
//	void product(int a1[3][3],int a2[3][3],int p[3][3]) {
//			for (int i=0;i<3;i++) {
//			for(int j=0;j<3;j++) {
//				p[i][j]=0;
//				for(int k=0;k<3;k++) {
//					p[i][j] += a1[i][k]*a2[k][j];
//				}
//			
//			}
//		
//		
//	} }
//	
//	int main () {
//		int array1[3][3],array2 [3][3], productarray[3][3];
//		cout<<"enter first matrix " <<endl;
//		inputarray(array1);
//			cout<<"enter second matrix " <<endl;
//		inputarray(array2);
//			cout<<" first matrix : " <<endl;
//		displayarray(array1);
//			cout<<" second matrix : " <<endl;
//		displayarray( array2);	
//		product(array1,array2,productarray);
//		cout<<" multiplied matrix : " <<endl;
//		displayarray(productarray);
//		
//		
//	}
//void table(int number , int scope,int i=1) {
//	if (i<scope) {
//
//	cout<<"table :"<<endl;
//	cout<<number<<" x "<<i<<" = "<<number*i<<endl;
//	table(number,scope,i+1);
//		}
//}
//
//int main() {
//	int x,n;
//	cout<<"enter the number whose table is to be printed "<<endl;
//	cin>>n;
//	cout<<"enter the number till which you want to print table "<<endl;
//	cin>>x;
//	table(n,x);
//}



{float m[3][3],adj[3][3];
float inv[3][3];
float det;
cout<<" enter elements of matrix "<<endl;
	for (int i=0;i<3;i++) {
			for(int j=0;j<3;j++) {
				cin>>m[i][j];
			}
		}
		cout<<"  matrix : "<<endl;
			for (int i=0;i<3;i++) {
			for(int j=0;j<3;j++) {
				cout<<m[i][j]<<" ";
			}
			cout<<endl;
		}
float a=m[0][0],b=m[1][0],c=m[2][0],d=m[0][1],e=m[1][1],f=m[2][1],g=m[0][2],h=m[1][2],i=m[2][2];
	det=a*(e*i-f*h)-b*(d*i-f*g) +c*(d*h-e*g);
	adj[0][0] =e*i-f*h;
	adj[1][0]=-1*(b*i-c*h);
	adj[2][0]=b*f-c*e;
	adj[0][1]=-1*(d*i-f*g);
	adj[1][1]=a*i-c*g;
	adj[2][1]=-1-1*(a*f-c*d);
	adj[0][2]=d*h-e*g;
	adj[1][2]=-1*(a*h-b*g);
	adj[2][2]=a*e-b*g;
	
	if (det==0) {
		cout<<"inverse does not exist"<<endl;
	}
	else{
		for(int i=0;i<3;i++){
			for(int j=0;j<3;j++ ) {
				inv[i][j]=adj[i][j]/det;
			}
		}
	}
	cout<<" INVERSE: "<<endl;
	for(int i=0;i<3;i++){
			for(int j=0;j<3;j++ ) {
				cout<<inv[i][j]<<" ";
			}
			cout<<endl;
		}
		












}




