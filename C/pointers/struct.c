//w.a.p to define a structure and initialize member variable
#include<stdio.h>
int main()
{
	struct book1
	{
		char book_name[35];
		int pages;
		float price;
		
	};
	struct book1 bk1={"PSTC",300,280.9};
	printf("\n book name:%s",bk1.book_name);
	printf("\n pages:%d",bk1.pages);
	printf("\n price:%d",bk1.price);
	
	
}
