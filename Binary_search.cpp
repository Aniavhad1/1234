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
void binarysearch(struct student list[4]);

int main(){
    struct student data[4];
    accept(data);
    binarysearch(data);

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

void binarysearch(struct student list[4]){
    int lower,upper,mid;
    char binarysearch1[80];
    cout<<"Enter the name of the student : ";
    cin>>binarysearch1;
    lower=0;
    upper=4-1;
    while(lower<=upper){
        mid=(lower+upper)/2;
        if(strcmp(list[mid].name,binarysearch1)<0){
           lower = mid + 1;
        }
        else if(strcmp(list[mid].name,binarysearch1)==0){
            cout<<"\nRoll No\tName\tSGPA";
            cout<<"\n"<<list[mid].rno<<"\t"<<list[mid].name<<"\t"<<list[mid].sgpa;
            break;
        }
        else{
            upper=mid-1;
        }                                              
        if(lower>upper){
            cout<<binarysearch1<<" not found in the list";
        }
    }
}