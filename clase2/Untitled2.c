void main(void)
{
    int DIS, TIE;
    float BIL;
    printf("ingrese la distancia entre cuidades y el tiempo de distancia: ");
    scanf("%d %d" , &DIS, %TIE);
    if ((DIS*2 > 500) && (TIE > 10))
        BIL = DIS * 2 * 0.19 * 0.8;
    else
        BIL = DIS * 2 * 0.19;
    printf("\n\nCosto del billete: &7.2f" , BIL);
}
