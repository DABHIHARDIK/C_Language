#include<stdio.h> 

int countStudents(int* students, int studentsSize, int* sandwiches, int sandwichesSize) {
    int studnetone = 0 , studentszero = 0 ; 
    for(int i = 0 ; i < studentsSize ;i++){
        if(students[i] == 0)
            studentszero++;

        else    
            studnetone++;
    }
    for(int i = 0 ; i < sandwichesSize ; i++){
        if(sandwiches[i] == 0 && studentszero == 0)
            break;
        if(sandwiches[i] == 1 && studnetone == 0)
            break;
        if(sandwiches[i] == 0 && studentszero != 0){
            studentszero--;
        }
        else    
            studnetone--;
    }
    printf("%d",studentszero+studnetone);
    return studentszero + studnetone;
}

int main(){
    int students[] = {1,1,0,0}, sandwiches[] = {0,1,0,1};
    countStudents(students , 4, sandwiches , 4);
    return 0;
}