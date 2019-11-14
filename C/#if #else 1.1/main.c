#define GGG 256

int main()
{
    int i;
    #if GGG==256
    printf("Display ASCII character set plus extension.\n");
    #else
        printf("Display only ASCII character set.\n");
    #endif // GGG

    for(i=0;i<GGG;i++)
        printf("%c\n",i);

    return 0;
}
