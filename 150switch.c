#include<stdio.h>
int main()
{
	int s,AreaofSquare,l,b,AreaofRectangle,base,h,AreaofTriangle,choice;
	printf("1.Area of Square\n 2.Area of Rectangle\n 3.Area of Triangle");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
			printf("Enter Side\n");
			scanf("%d",&s);
			AreaofSquare= s*s;
			printf("AreaofSquare=%d",AreaofSquare);
			break;
	    case 2:
	    	printf("Enter length and breadth\n");
	    	scanf("%d\n%d",&l,&b);
	    	AreaofRectangle= l*b;
	    	printf("AreaofRectangle=%d",AreaofRectangle);
	    	break;
	    case 3:
	    	printf("Enter Base and Height\n");
	    	scanf("%d\n%d",&base,&h);
	    	AreaofTriangle= 0.5*base*h;
	    	printf("AreaofTriangle=%d",AreaofTriangle);
	    	break;
	    default:
	    	printf("invalid input");
	    	
	}
}
