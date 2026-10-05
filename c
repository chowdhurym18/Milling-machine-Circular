#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/*
 * Complete the 'toolchanger' function below.
 *The function is expected to return an INTEGER.
 * The function accepts following parameters:
 *  1. STRING_ARRAY tools
 *  2. INTEGER startIndex
 *  3. STRING target
 */
 int toolchanger (int n, char tools[][101], int startIndex, char target[]){
    int answer = n;
    for (int i = 0; i < n; i++){
        if (strcmp(tools [i], target) == 0){
            int d = abs(startIndex - i);
            if (d < n - d)
                d = d;
            else 
            d = n - d;
            
            if (d < answer)
                answer = d;
                
        }
    }
    return answer;
 }

int main(){
    int n;
    scanf("%d", &n);
    
    char tools[100][101];
    
    for (int i = 0; i < n; i++)
        scanf("%s", tools[i]);
    int startIndex;
    scanf("%d", &startIndex);
    
    char target[101];
    scanf("%s", target);
    
    printf("%d\n", toolchanger(n, tools, startIndex, target));
    
    return 0;}
