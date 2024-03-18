#include<stdio.h>
void tax()
{
	int rate,qty,amt;
	float dis,ba,gst,nb;
	printf("Enter rate :\n");
	scanf("%d",&rate);
	printf("Enter quantity:\n");
	scanf("%d",&qty);
	
	amt=rate*qty;
	dis=amt*5/100;
	ba=amt-dis;
	gst=ba*18/100;
	nb=ba+gst;
	
	printf("Rate\tqty\tamt\tdis(5)\tbillamt\tgst(18)\tnetbill\n");
	printf("%d\t%d\t%d\t%.2f%\t%.2f\t%.2f\t%.2f",rate,qty,amt,dis,ba,gst,nb);
}
int main()
{
	tax();
	return 0;
}
	

	
	