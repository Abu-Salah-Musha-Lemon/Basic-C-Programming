
#include <stdio.h>

int main() {
    // Write C code here
    printf("Hollow Rectangle\n");
    int row=4;// -----------------
    int column=5;
    for(int i=1;i<=row; i++){
        for(int j =1 ;j<=column; j++){
            if( i==1||  j==1|| i== row || j == column){
                printf("*");
            }else{
                printf(" ");
            }
        }
        printf("\n");
    }
    
    return 0;
}
// C code for hollow rectangle
// #include <stdio.h>

// // Function to print hollow rectangle
// void print_rectangle(int n, int m)
// {
// 	int i, j;
// 	for (i = 1; i <= n; i++)
// 	{
// 		for (j = 1; j <= m; j++)
// 		{
// 			if (i==1 || i==n || j==1 || j==m)		
// 				printf("*");		
// 			else
// 				printf(" ");		
// 		}
// 		printf("\n");
// 	}

// }

// // Driver program for above function
// int main()
// {
// 	int rows = 6, columns = 20;
// 	print_rectangle(rows, columns);
// 	return 0;
// }
