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
void quicksort(struct student list[4],int start,int end);

int main(){
    int start=0;int end=3;
    struct student data[4];
    accept(data);
    quicksort(data,0,3);
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

int partition(struct student list[4],int start,int end){
    struct student pivot;
    pivot=list[start];
    int count=0;
    for(int i=start+1;i<=end;i++){
            if(list[i].sgpa>=pivot.sgpa){
                count++;
            }
    }
    int pivotindex=start+count;
    swap(list[pivotindex],list[start]);
    //Sorting left and right parts of the pivot element
    int i=start;
    int j=end;
    while(i<pivotindex && j>pivotindex){
        while(list[i].sgpa>=pivot.sgpa){
            i++;
        }
        while(list[j].sgpa<pivot.sgpa){
            j--;
        }
        if(i>pivotindex && j<pivotindex){
            swap(list[i++],list[j--]);
        }
    }
    return pivotindex;
}

void quicksort(struct student list[4],int start,int end){
    if(start<end){
        int partitionindex = partition(list,start,end);
        quicksort(list,start,partitionindex-1);
        quicksort(list,partitionindex+1,end);
    }
 }
