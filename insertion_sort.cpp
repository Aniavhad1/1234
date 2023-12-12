#include<iostream>
#include<cstring>
using namespace std;
struct student{
    int rno;
    char name[50];
    float sgpa;
};

void accept(struct student list[4]);
void display(struct student list[4]);
void insertionsort(struct student list[4]);

int main(){
struct student data[4];
accept(data);
insertionsort(data);
display(data);

return 0;
}
 
void accept(struct student list[4]){
    int i;
    for(i=0;i<4;i++){
        cout<<"\nEnter Roll.No, Name and SGPA of student : ";
        cin>>list[i].rno>>list[i].name>>list[i].sgpa;
    }
}

void display(struct student list[4]){
    int i;
    cout<<"\nRoll No\tName\tSGPA";
    for(i=0;i<4;i++){
        cout<<"\n"<<list[i].rno<<"\t"<<list[i].name<<"\t"<<list[i].sgpa;
    }
}
                        
void insertionsort(struct student list[4]){
    int k,j;
    struct student temp;
    for(k=1;k<4;k++){
        temp=list[k];
        j=k-1;
        while(strcmp(list[j].name,list[k].name)>0 && j>=0){
            list[j+1]=list[j];
            --j;
        }
        list[j+1]=temp;
    }       
}
