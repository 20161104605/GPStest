//
//  main.c
//  GPStest
//
//  Created by fuqiang on 17/6/16.
//  Copyright © 2017年 20161104605. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    FILE *fp1,*fp2;
    char str[1000];
    int max;
    char s1,s2,s3,s4,s5;
    fp1=fopen("//Users//fq20161104605//Desktop//TRAC-master//GPS170510.log","r");
    fp2=fopen("//Users//fq20161104605//Desktop//GPStest//test1","w");
    if(fp==NULL)
    {
        printf("File open error!\n");
        return -1;
    }
    else
    {
        fgets(str,sizeof(str),fp);
        sscanf(str,"%d",&max);
        while(fgets(str,sizeof(str),fp))
        {
            sscanf(str,"%s%s%s%s%s",&s1,&s2,&s3,&s4,&s5);
            printf("%s%s%s%s%s",s1,s2,s3,s4,s5);
        }
        fprintf(fp2,"%s%s%s%s%s",s1,s2,s3,s4,s5);
        fclose(fp);
        
    }
    return 0;
}
