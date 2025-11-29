
//Anagram চেক করার সবচেয়ে সহজ ধারণা (frequency method)
#include<stdio.h>
#include<string.h>
#include<stdbool.h>

bool isAnagram(char* s, char* t)
{
    int freq[26] = {0};
    int l1 = strlen(s);
    int l2 = strlen(t);

    if(l1 != l2)
    {
        return false;
    }
    for(int i=0; i<l1; i++)
    {
        freq[s[i] - 'a']++;
    }
    for(int j=0; j<l2; j++)
    {
        freq[t[j] - 'a']--;
    }

    for(int k=0; k<26; k++)
    {
        if(freq[k] != 0)
        {
            return false;
        }
    }
    return true;
}
int main()
{
    char s1[] = "anagram";
    char s2[] = "nagaram";
    if(isAnagram(s1,s2))
    {
        printf("true");
    }
    else
    {
        printf("false");
    }
}


/*
// Using Bubble sort logic for Anagram check
#include<stdio.h>
#include<string.h>
#include<stdbool.h>
void sortString(char str[])
{
    int len = strlen(str);
    for(int i=0; i<len-1; i++)
    {
        for(int j=i+1; j<len; j++)
        {
            if(str[i]>str[j])
            {
                char temp = str[i];
                str[i] = str[j];
                str[j] = temp;
            }
        }
    }
}
bool isAnagram(char* s, char* t)
{
    int len1 = strlen(s);
    int len2 = strlen(t);
    if(len1 == len2)
    {
        sortString(s);
        sortString(t);
        if(strcmp(s,t) == 0)
        {
            return true;
        }
    }
    return false;
}
int main()
{
    char s1[] = "anagram";
    char s2[] = "nagaram";
    if(isAnagram(s1,s2))
    {
        printf("true");
    }
    else
    {
        printf("false");
    }
}
*/


/*
Buble Sort Concept
#include<stdio.h>
#include<string.h>
void sortString(char s1[],int l)
{
    int i,j;
    for(i=0; i<l-1; i++)
    {
        for(j=i+1; j<l; j++)
        {
            if(s1[i]>s1[j])
            {
                char temp = s1[i];
                s1[i] = s1[j];
                s1[j] = temp;
            }
        }
    }
}
int main()
{
    char str[20];
    printf("Enter the string:\n");
    scanf("%s",str);
    int len = strlen(str);
    sortString(str,len);
    printf("%s",str);
}
*/
