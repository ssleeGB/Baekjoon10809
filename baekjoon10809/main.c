//
//  main.c
//  baekjoon10809
//
//  Created by 이승섭 on 2018. 12. 27..
//  Copyright © 2018년 이승섭. All rights reserved.
//

#include <stdio.h>

int main(void)
{
    char S[100]; // 입력 받은 문자열 저장
    int num[26];
    int i;
    int index;
    
    FILE *fp = fopen("input.txt","r");
    
    fscanf(fp, "%s", S);
    printf("%s \n", S);
    
    for(i = 0; i < 26; i++) // num[]을 -1로 채우기
    {
        num[i] = -1;
    }
    
    for(i = 0; S[i] != '\0'; i++) // S[i]에 null값이 나올 때까지 loop
    {
        index = S[i] - 97; // 입력받은 문자의 아스키 코드를 a의 아스키 코드와 비교 -> a로부터 몇 번째 알파벳인지 계산
        if (num[index] == -1)
        {
            num[index] = i; // num[index]에서 입력받은 문자의 위치를 찾아 S[]에서의 위치 i로 변환
        }
    }
    
    for(i = 0; i < 26; i++)
    {
        printf("%d ", num[i]);
    }
    
    printf("\n");

    fclose(fp);

    return 0;
}
