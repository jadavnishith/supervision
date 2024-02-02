// ------Question 1-----

    //-- read file--

// #include <stdio.h>

// int main()
// {
//  FILE *n;
//     n=fopen("nick.txt","r");
//     char data[100];
//     if(n==NULL){
//         printf("file does not exeist");
//     }else{
//         while (fgets(data,50,n)!=NULL)
//         {
//             printf("%s",data);
//             fclose(n);
//         }
        
//     }
//     return 0;
// }

          // --write file--

// #include <stdio.h>

// int main()
// {
//  FILE *n;
//     n=fopen("nick.txt","w");
//     char data[100];
//     if(n==NULL){
//         printf("file does not exeist");
//     }else{
//         fputs("Jay Shree ram",n);
//         fclose(n);
//     }
//     return 0;
// }

         // --Appednd--

// #include <stdio.h>

// int main()
// {
//  FILE *n;
//     n=fopen("nick.txt","a");
//     char data[100];
//     if(n==NULL){
//         printf("file does not exeist");
//     }else{
//         fputs("ching chang chu!!!\n",n);
//         fclose(n);
//     }
//     return 0;
// }

//------- Question 2---------

#include <stdio.h>
#include <string.h>
    struct passanger
    {
        char name[100];
        int age;
        char gender[15];
        char from[50];
        char to[50];
        int payment;
        int trainNo;
    };
    
int main()
{
    struct passanger s;
    printf("Enter Name : ");
    scanf("%s",&s.name);
    printf("Enter Age : ");
    scanf("%d",&s.age);
    printf("Enter Gender : ");
    scanf("%s",&s.gender);
    printf("Enter From : ");
    scanf("%s",&s.from);
    printf("Enter To : ");
    scanf("%s",&s.to);
    printf("Enter Payment : ");
    scanf("%d",&s.payment);
    printf("Enter Train No : ");
    scanf("%d",&s.trainNo);
    
    
    

    return 0;
}
