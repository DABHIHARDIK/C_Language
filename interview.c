#include<stdio.h> 
#include<stdbool.h> 
#include<stdlib.h> 


typedef struct packet{
    char id; 
    char name[8] ;
}stream ; 

stream S1 ; 
stream S2 ;
stream S3 ;
stream S4 ;

stream *ptr[4] = { &S1 , &S2 , &S3, &S4};

bool setflag[4];

void add_data_stream(void){
    int select ; 
    char name[8] ;
    for(int i = 0 ; i < 4 ;i++){
        if(setflag[i] == false){
            printf("S%d is Empty\n",i+1);
        }
    }
    printf("Which stream want to add data \n");
    scanf("%d",&select);
    if(setflag[select -1 ] == true)
    {
        printf("stream stream has already data");    
    }
    else{
    printf("Enter a stream ID ");
    scanf("%d",&ptr[select - 1 ]->id);
    printf("Enter a stream name ");
    scanf("%s",ptr[select -1]->name);
    setflag[select -1 ] =true;
    }
}

void sout(void){
    char config ;
    printf("TDM  Enter T and Priority Enter P\n");
    scanf("%s", &config);
    if(config == 'T'){
        for(int i = 0 ; i < 4 ; i++){
            printf("S%d is %d %s\n",i+1 ,ptr[i]->id , ptr[i]->name);
        }
    }
    else if(config == 'P'){
        for(int i = 3 ; i >= 0 ; i--){
            if(setflag[i] == true){
                printf("S%d is %d %s\n",i+1,ptr[i]->id,ptr[i]->name);
            }
        }
    }
    else{
        printf("select proper options");
    }

}

void deletestream(void){
    int select ;
    printf("which stream do you want to delete the data \n select 1-4");
    scanf("%d",&select);
    if(setflag[select -1] == false)
        printf("stream has no data");
    else{
        setflag[select-1 ] = false;
        ptr[select- 1]->id = 0 ; 
        ptr[select - 1]->name[0] = '\0';
    }
}
int main(){
    while(1){
        int select = 0 ;
        printf("1 -> Add data\n 2 -> Sout \n 3 -> Delete stream \n 4-> exit \n");
        scanf("%d",&select);
        switch (select)
        {
        case 1:
            add_data_stream();
            break;
        
        case 2: 
            sout();
            break;

        case 3: 
            deletestream();
            break;

        case 4:
            exit(1);
            break;

        default:
            printf("Select proper options");
            break;
        }
    }
    return 0 ; 
}