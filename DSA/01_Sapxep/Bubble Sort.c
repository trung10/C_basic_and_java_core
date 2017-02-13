/*
- Ưu điểm thuật toán:
    + Ưu điểm trông thấy rõ của phương pháp Bubble sort là sau mỗi bước thì danh sách dần “ổn định” hơn.

- Nhược điểm thuật toán:
    + Không nhận diện được tình trạng dãy đã có thứ tự hay có thứ tự từng phần.
    + Các phần tử nhỏ được đưa về vị trí đúng rất nhanh, trong khi các phần tử lớn lại được đưa về vị trí đúng rất chậm.
*/
#include <stdio.h>

int a[100], n;

void createarraylist()
{
    printf("Nhap so nhap tu: ");
    scanf("%d", &n);
    int i;
    for(i = 0; i< n; i++)
    {
        printf("Nhap phan tu %d: ", i+1);
        scanf("%d", &a[i]);
    }
}
void show()
{
    int i;
    printf("\nDay hien tai\n");
    for(i = 0; i< n; i++)
    {
        printf("%3d", a[i]);
    }
}
void swapp(int *a, int *b)
{
    int t;
    t = *a;
    *a = *b;
    *b = t;
}
int main()
{
    createarraylist();
    show();
    int i, j;
    for(i = 0; i<n-1; i++)
    {
        for(j = n-1; j > i; j--)
        {
            if(a[j-1] > a[j])
            {
                ///swapp(a +i, a +j);
                int t;
                t = a[j-1];
                a[j-1] = a[j];
                a[j] = t;
            }
        }
    }
    show();
    return 0;
}
