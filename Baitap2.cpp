//VO VAN TUAN 6251020094
#include<iostream>
using namespace std;
class ArrayList{
	private:
		int array[100];
		int last;
	public:
		ArrayList();
		int length();
		bool isFull();
		bool isEmpty();
		void insert(int x, int pos);
		void remove(int pos);
		void append(int x);
		void print();
};
ArrayList::ArrayList(){
	last=-1;	
}
int ArrayList::length(){
	return last+1;
}
void ArrayList::append(int x){
	array[last+1]=x;
	last=last+1;
}
void ArrayList::print(){
	for(int i=0;i<=last;i++)
		cout<<"a["<<i<<"] = "<<array[i]<<"\t";
}
bool ArrayList::isFull(){
	cout<<endl;
	if (last>=100)
		cout<<"mang da full"<<endl;
	else 
		cout<<"mang chua full"<<endl;
	
}
bool ArrayList::isEmpty(){
	if (last==-1)
		cout<<"mang rong"<<endl;
	else 
		cout<<"mang khong rong"<<endl;
}
void ArrayList::insert(int x, int pos){
	for(int i=last+1;i>=pos;i--)
        array[i]=array[i-1]; 
		    last=last+1;   
    array[pos]=x;

}
void ArrayList::remove(int pos){
	array[pos]=array[last];
	for(int i=pos;i<last-1;i++)
        array[i]=array[i-1];
        last=last-1;
}
int main(){
	ArrayList l;
	cout<<"do dai mang: "<<l.length()<<endl;
	l.append(5);
	l.append(8);
	l.print();
	cout<<"\n";
	l.append(10);
	l.print();
	l.isFull();
	l.isEmpty();
	l.insert(4,1);
	cout<<"mang sau khi chen la:"<<endl;
	l.print();
	l.remove(1);
	cout<<endl<<"mang sau khi xoa la:"<<endl;
	l.print();
}

