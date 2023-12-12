#include<iostream>
using namespace std;
struct student{
    int rno;
    char name[50];
    float sgpa;
};

void accept(struct student list[4]);
void display(struct student list[4]);
void bubblesort(struct student list[4]);

int main(){
struct student data[4];
accept(data);
bubblesort(data);
display(data);
int ch,choice;

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

void bubblesort(struct student list[4]){
    int k,j;
    struct student temp;
    for(k=0;k<4-1;k++){
        for(j=0;j<(4-k-1);j++){
            if(list[j].rno>list[j+1].rno){
                temp=list[j];
                list[j]=list[j+1];
                list[j+1]=temp;
            }
        }
    }
}
                        