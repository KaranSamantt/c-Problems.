#include<iostream>

using namespace std;

int main(){
    int N;
    cout<<"\nEnter number of students: ";
    cin>>N;

    int arr[N];
    string name[N];
    int subject[N][5];

    cout<<"\nEnter Name of "<<N<<" students: "<<endl;
    for(int i=0;i<N;i++){
        cout<<"\nEnter name of "<<i+1<<" Student: ";
        cin>>name[i];
    }

    cout<<"\nEnter roll no. of "<<N<<" students: "<<endl;
    for(int i=0;i<N;i++){
        cout<<"\nEnter roll no. of "<<name[i]<<" : ";
        cin>>arr[i];
    }

    cout<<"\nEnter marks in five subjects: "<<endl;
    for(int i=0;i<N;i++){
        for(int j=0;j<5;j++){
            cout<<"\nEnter marks of "<<name[i]<<" in subject "<<j+1<<" : ";
            cin>>subject[i][j];
        }
    }

    float total_class_percentage = 0.0f;
    int top = 0;
    string top_student_name = "";

    cout<<"\nTotal marks of students are: "<<endl;
    for(int i=0;i<N;i++){
        int total = 0;
        for(int j=0;j<5;j++){
            total += subject[i][j];
        }
        cout<<"\nTotal Marks of "<<name[i]<<" : "<<total;

        
        
        float percentage = (total/500.0f)*100;
        cout<<"\nPercentage of "<<name[i]<<" : "<<percentage<<"%";
        
        total_class_percentage += percentage;
        
        if(percentage>=90.0){
            cout<<"\nA+";
        }
        else if(percentage>=75.0){
            cout<<"\nA";
        }
        else if(percentage>=60.0){
            cout<<"\nB";
        }
        else if(percentage>=40.0){
            cout<<"\nC";
        }
        else{
            cout<<"\nFail";
        }

        if(total>top){
            top = total;
            top_student_name = name[i];
        }
    }
    
    float avg = total_class_percentage/N;
    cout<<"\nAverage class percentage: "<<avg;
    cout<<"\nTop scorer is: "<<top_student_name;

   
    for(int i=0; i<N; i++){ 
        // 1. Sort the 5 subjects for student 'i' (Using Bubble Sort)
        for(int j=0; j<4; j++){ // Loop 4 times
            for(int k=0; k<4-j; k++){ 
                // If the current number is less than the next number, swap them!
                if(subject[i][k] < subject[i][k+1]){
                    int temp = subject[i][k];
                    subject[i][k] = subject[i][k+1];
                    subject[i][k+1] = temp;
                }
            }
        }
    }

    cout<<"\nNumbers in descending order are: \n";
    for(int i=0;i<N;i++){
        for(int j=0;j<5;j++){
            cout<<"\n "<<subject[i][j];
        }
        cout<<"\n";
    }
    
    
    return 0;
}