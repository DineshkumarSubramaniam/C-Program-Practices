//convert_hex_oct_dec_to_int
#include<stdio.h>
#include<math.h>
#include<string.h>
//Function declaration
void convert_hex_to_int(char *str,int base);
void convert_oct_to_int(char *str,int base);
void convert_dec_to_int(char *str,int base);
int main()
{
	char str[100];
	puts("Enter the string in hexa");
	scanf("%s",str);
	//hex to integer function call
	convert_hex_to_int(str,16); 
	puts("Enter the string in octa");
	scanf("%s",str);
	// octa to integer function call
	convert_oct_to_int(str,8); 
	puts("Enter the string in decimal");
	scanf("%s",str);
	// decimal to integer function call
	convert_dec_to_int(str,2); 
}

void convert_hex_to_int(char *str,int base)
{
	int len,num=0,p=0,i,hex=0;
	len = strlen(str)-1;
	for(i=len;i>=0;i--)
	{       
	         //checking Numeric
		if(str[i]>='0' && str[i]<='9')
			num=str[i]-'0';
		// checking upper case between A TO F 
		else if(str[i]>='A' && str[i]<='F') 
			num=str[i]-'A' +10;
		//checking lower case between a to f
		else if(str[i]>='a' && str[i]<='f') 
			num=str[i]-'a' +10;
		//other than numeric or alphabets which is greater thas f and F then break
		else 
			break; 
		hex=hex+num*pow(base,p);
		p++;
	}
	if(i!=-1)
		printf("wrong input-->special char or more than f or F %s\n",str);
	else
		printf("hexa= %s and integer= %d\n",str,hex);
}

void convert_oct_to_int(char *str,int base)
{
        int len,num=0,p=0,i,oct=0;
        len = strlen(str)-1;
        for(i=len;i>=0;i--)
        {
                //checking only numeric between 0 to 8 only
                if(str[i]>='0' && str[i]<='8') 
                        num=str[i]-'0';
                // other than 0 to 8 wrong input
		else
			break; 
		oct=oct+num*pow(base,p);
		p++;
	}
	if(i!=-1)
		printf("wrong input-->special char or more than eight %s\n",str);
	else
		printf("hexa= %s and integer= %d\n",str,oct);
}
void convert_dec_to_int(char *str,int base)
{
        int len,num=0,p=0,i,dec=0;
        len = strlen(str)-1;
        for(i=len;i>=0;i--)
        {
                //checking only numeric 0 to 9 
                if(str[i]>='0' && str[i]<='9')  
                        num=str[i]-'0';
                //other than 0 to 9 break
                else
                        break;  
                dec=dec+num*pow(base,p);
                p++;
        }
        if(i!=-1)
                printf("wrong input-->special char or alphabets %s\n",str);
        else
                printf("hexa= %s and integer= %d\n",str,dec);
}
