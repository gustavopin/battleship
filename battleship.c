#include <stdio.h> 

//defining some fixed arrays to easy the maintenence
#define LINES 10
#define COLUMNS 10

int main(){

    char* col_id[10] = {"A", "B", "C", "D", "E", "F", "G", "H", "I", "J"};
    int line_id[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int battle_zone[LINES][COLUMNS];
    int ability;

    printf("Battle Zone\n");
    printf("  ");

    //this will print letters A through J to represent the values for the columns of our battle zone
    for (int i = 0; i < 10; i++)
    {
        printf("%s ", col_id[i]); //print the index for the colums (A through J)
    }
    //skipping a line for the battle zone
    printf("\n");
    
    //creating the zone, each house will have the value 0
    //we are also creating some ships in line 2 (columns 3,4,5) and column 6 (lines 5,6,7)
    //also on the diagonals:[(1, 1)(2, 2)(3, 3)] [(5, 3)(6, 4)(7, 5)]
    for (size_t i = 0; i < LINES; i++)
    {
        printf("%d ", line_id[i]); //print the index for the lines (1 thourgh 10)
        
        for (int j = 0; j < COLUMNS; j++)
        {
            if ((i == 1 && j == 1)||(i == 2 && j == 2) || (i == 3 && j == 3)) //ship1 (diagonal)
            {
                battle_zone[i][j] = 3;   
            } else if ((i == 2 && j == 4) || (i== 2 && j == 5) || (i == 2 && j == 6)) //ship2 (line) 
            {
                battle_zone[i][j] = 3;
            } else if ((i == 5 && j == 8) || (i== 6 && j == 8) || (i == 7 && j == 8)) //ship3 (vertical line)
            {
                battle_zone[i][j] = 3;
            } else if ((i == 5 && j == 3)||(i == 6 && j == 4) || (i == 7 && j == 5)) //ship 4 (diagonal)
            {
                battle_zone[i][j] = 3;
            } else {
                battle_zone[i][j] = 0; //creating the water
            }
            printf("%d ", battle_zone[i][j]); //printing the battlezone and the ships following the conditions
        }
        printf("\n"); //skiping a line
    }

    //creating abilities
    printf("Choose the ability you want to use:\n");
    printf("1 - Cone\n");
    printf("2 - Cross\n");
    printf("3 - Octahedron\n");
    printf("Ability number: ");
    scanf("%d", &ability);

    switch (ability)
    {
    case 1:

        for (int i = 0; i < 10; i++)
        {
            printf("%s ", col_id[i]); //print the index for the colums (A through J)
        }
        printf("\n"); //skip a line after the index

        for (int i = 0; i < 10; i++)
        {
            printf("%d ", line_id[i]); //print the index for the lines (1 thourgh 10)

            for (int j = 0; j < 10; j++)
            {
                if ((i == 4 && j == 4) || (i == 5 && (j == 3 || j == 4 || j == 5)) || (i == 6 && (j == 2 || j == 3 || j == 4 || j == 5 || j == 6))) 
                {
                    battle_zone[i][j] = 9;
                }
                printf("%d ", battle_zone[i][j]);
            }
            printf("\n"); 
        }
        break;

    case 2:

        for (int i = 0; i < 10; i++)
        {
            printf("%s ", col_id[i]); //print the index for the colums (A through J)
        }
        printf("\n"); //skip a line after the index

        for (int i = 0; i < 10; i++)
        {
            printf("%d ", line_id[i]); //print the index for the lines (1 thourgh 10)

            for (int j = 0; j < 10; j++)
            {
                if ((i == 6 && j == 3) || (i == 7 && (j == 1 || j == 2 || j == 3 || j == 4 || j == 5)) || (i == 8 && j == 3)) 
                {
                    battle_zone[i][j] = 8;
                }
                printf("%d ", battle_zone[i][j]);
            }
            printf("\n"); 
        }
        break;

    case 3:

        for (int i = 0; i < 10; i++)
        {
            printf("%s ", col_id[i]); //print the index for the colums (A through J)
        }
        printf("\n"); //skip a line after the index
        for (int i = 0; i < 10; i++)
        {
            printf("%d ", line_id[i]); //print the index for the lines (1 thourgh 10)

            for (int j = 0; j < 10; j++)
            {
                if ((i == 0 && j == 5) || (i == 1 && (j == 4 || j == 5 || j == 6)) || (i == 2 && j == 5)) 
                {
                    battle_zone[i][j] = 7;
                }
                printf("%d ", battle_zone[i][j]);
            }
            printf("\n"); 
        }
        break;

    default:
        break;
    }

    return 0;
}