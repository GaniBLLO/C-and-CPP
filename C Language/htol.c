//Write function "htol(s)" which makes converts a sequence of hexadecimal digits beginning with 0x or 0X to the corresponding integer. hex. is 0..9, a..f, A..F

int htol(int s)
{
    if(isdigit(s))							//funtion which check. hex. number or not
        printf("%c\n", (char)s);			//Output with explicit conversion from char to int
    else if(isupper(s))						//Upper symbl or not
         printf("%c\n", (char)s);			
    else if(islower(s))						//Lower symbl or not	
        printf("%c\n", (char)s);			
    return 0;
}


int main()
{
     for (int i = 0x00; i <= 0x7A; ++i)
        {
            htol(i);
		}
		return 0;
}