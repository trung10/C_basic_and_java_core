/*
* Thuật toán tìm kiếm phần tử trong một dãy đã được sắp xếp
* Ưu điểm: 
	Nhanh hơn linear search
	C
* Nhược điểm: Phải sắp xếp dãy trước khi tìm kiếm
*/

#include <stdio.h>


int Binarysearch(int a[], int n, int key)
{
		int lead = 0, tail = n-1;
		while(lead <= tail)
		{
			int mid = (lead+tail)/2;
			if(key == a[mid])
				return(mid);
			if(key<a[mid])
				tail = mid -1;
			else if(key>a[mid])
				lead = mid +1;
		}
		return -1;
}

int main()
{
		int a[] = {1,3,5,9,12,24,20,30,50,69}, n = 10, key = 50, i;
		for(i=0; i<n; i++)
		{
			printf("%5d", a[i]);
		}
		if(Binarysearch(a,10,key)!= -1)
		{
			printf("\na[%d] = %d", Binarysearch(a,10,key), a[Binarysearch(a,10,key)]);
		}else
		{
			printf("\nno result\n");
		}
		printf("\n%d", a[6]);
		return 0;
}
