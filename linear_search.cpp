#include<iostream>
using namespace std;
bool search(int arr[],int size,int key)
{
	for(int i=0;i<size;i++){
		if(arr[i]==key){
			return 1;
		}
	}
	return 0;
}
int main(){
	int arr[100]={12,22,15,-66,5,6,8,77,3,44};
	int key;
	cin>>key;
	bool found=search(arr,10,key);
	if(found){
		cout<<"key is present";
	}
	else{
		cout<<"key is absent";
	}
}
