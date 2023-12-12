#include<iostream>
using namespace std;
struct student{
        int rno;
        char name[50];
        float sgpa;
};
void accept(struct student list[4]);
void display(struct student list[4]);
void search(struct student list[4]);

int main(){
    struct student data[4];
    accept(data);
    search(data);
    
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

void search(struct student list[4]){
    int i;
    float sgpa;
    cout<<"Enter SGPA to search : ";
    cin>>sgpa;
    cout<<"\nRoll No\tName\tSGPA";
    for(i=0;i<4;i++){
        if(sgpa==list[i].sgpa){
            cout<<"\n"<<list[i].rno<<"\t"<<list[i].name<<"\t"<<list[i].sgpa;
        }
    }
}
