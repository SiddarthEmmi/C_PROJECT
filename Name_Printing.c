#include <stdio.h>
int printS[7][5];
int printI[7][5];
int printD[7][5];
int printD1[7][5];
int printA[7][5];
int printR[7][5];
int printT[7][5];
int printH[7][5];
int printA1[7][5];


void gap(){
for(int i=0;i<7;i++){
    for(int j=0;j<1;j++)
    {
        printf(" ");
    }
}
} //end gap()

void printConsole(){
for(int i=0;i<7;i++){
    gap();
    for(int j=0;j<5;j++){
        char ch=printS[i][j];
        printf("%c",ch);
    }
    gap();
    for(int j=0;j<5;j++){
     char ch=printI[i][j];
     printf("%c",ch);
    }
       gap();
    for(int j=0;j<5;j++){
     char ch=printD[i][j];
     printf("%c",ch);
    }
    gap();
    for(int j=0;j<5;j++){
     char ch=printD1[i][j];
     printf("%c",ch);
    }
    gap();
    for(int j=0;j<5;j++){
     char ch=printA[i][j];
     printf("%c",ch);
    }
    gap();
    for(int j=0;j<5;j++){
     char ch=printR[i][j];
     printf("%c",ch);
    }
    gap();
    for(int j=0;j<5;j++){
     char ch=printT[i][j];
     printf("%c",ch);
    }
    gap();
    for(int j=0;j<5;j++){
     char ch=printH[i][j];
     printf("%c",ch);
    }
    gap();
    for(int j=0;j<5;j++){
     char ch=printA1[i][j];
     printf("%c",ch);
    }

    printf("\n");
} // end top most for

} // end printConsole()

void S(){
for(int i=0;i<7;i++){
    for(int j=0;j<5;j++){
        if(i==0||i==3||i==6||j==0&&i==1||j==0&&i==2||j==4&&i==4||j==4&&i==5){
            printS[i][j]=42;
        }
        else{
            printS[i][j]=32;
        }
    }
}
}


void I(){
for(int i=0;i<7;i++){
    for(int j=0;j<5;j++){
        if(i==0||i==6||j==2){
            printI[i][j]=42;
        }
        else{
            printI[i][j]=32;
        }
    }
}
}

void D(){
for(int i=0;i<7;i++){
    for(int j=0;j<5;j++){
        if(j==0||i==0&&j<3||i==6&&j<3||j==4 && i!=0 && i!=6){
            printD[i][j]=42;
        }
        else{
            printD[i][j]=32;
        }
    }
}
}
void D1(){
for(int i=0;i<7;i++){
    for(int j=0;j<5;j++){
        if(j==0||i==0&&j<3||i==6&&j<3||j==4 && i!=0 && i!=6){
            printD1[i][j]=42;
        }
        else{
            printD1[i][j]=32;
        }
    }
}
}
void A(){
for(int i=0;i<7;i++){
    for(int j=0;j<5;j++){
        if(j==0||j==4||i==0||i==3){
            printA[i][j]=42;
        }
        else{
            printA[i][j]=32;
        }
    }
}
}
void R(){
for(int i=0;i<7;i++){
    for(int j=0;j<5;j++){
        if(j==0||i==3||i==0||j==4&&i==3||j==4&&i==2||j==2&&i==4||j==3&&i==5||j==4&&i==6||j==4&&i==1){
            printR[i][j]=42;
        }
        else{
            printR[i][j]=32;
        }
    }
}
}
void T(){
for(int i=0;i<7;i++){
    for(int j=0;j<5;j++){
        if(j==2||i==0){
            printT[i][j]=42;
        }
        else{
            printT[i][j]=32;
        }
    }
}
}
void H(){
for(int i=0;i<7;i++){
    for(int j=0;j<5;j++){
        if(j==0||j==4||i==3){
            printH[i][j]=42;
        }
        else{
            printH[i][j]=32;
        }
    }
}
}
void A1(){
for(int i=0;i<7;i++){
    for(int j=0;j<5;j++){
        if(j==0||j==4||i==0||i==3){
            printA1[i][j]=42;
        }
        else{
            printA1[i][j]=32;
        }
    }
}
}
#include <stdio.h>
#include <stdlib.h>



    void main(){
S();
I();
D();
D1();
A();
R();
T();
H();
A1();
printConsole();
}
