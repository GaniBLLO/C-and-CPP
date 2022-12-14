/*Task 1.2: Write a program detab that replaces tabs in the input with the proper number of blanks to space to the next tab stop. 
Assume a fixed set of tab stops, say every n columns.*/
int SPACES = 8;

int detab(int character) {
    int i = 0;
    extern int SPACES;
    
    if (character == -1)
        return -1;
    else if (character == '\t') {
        while (SPACES-- != 0)
            putchar('_');
        SPACES = 8;
        return 0;
    }

    if (SPACES != 0)
        SPACES--;
    else
        SPACES = 7;
    return putchar(character);
}

/*Task 1.2.1:Write a program entab that replaces strings of blanks by the minimum number of tabs and blanks to achieve the same spacing. 
Use the same tab stops as for detab.*/

int main()
{
	int c;
    extern int SPACES;
    while ((c = getchar()) != EOF) {
        detab(c);
        if (c == '\n')
            SPACES = 8;
    }
    return 0;
}
