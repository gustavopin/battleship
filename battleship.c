#include <stdio.h> 

int main(){

    char* col_id[10] = {"A", "B", "C", "D", "E", "F", "G", "H", "I", "J"};
    int line_id[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int battle_zone[10][10];

    printf("Battle Zone\n");
    printf("  ");

    //this will print letters A through J to represent the values for the columns of our battle zone
    for (int i = 0; i < 10; i++)
    {
        printf("%s ", col_id[i]);
    }
    //skipping a line for the battle zone
    printf("\n");
    
    //creating the zone, each house will have the value 0
    for (size_t i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            battle_zone[i][j] = 0;
        }
    }
    
    //adding 2 ships
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            if ((i == 2 && j == 3) || (i== 2 && j == 4) || (i == 2 && j == 5))
            {
                battle_zone[i][j] = 3;
            }

            if ((i == 5 && j == 6) || (i== 6 && j == 6) || (i == 7 && j == 6))
            {
                battle_zone[i][j] = 3;
            }  
        }
    }
    
    //printing the battle zone
    for (size_t i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            if (j == 0)
            {
                printf("%d ", line_id[i]);
            }
            
            printf("%d ", battle_zone[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}