#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define ARR_CAP 16


//to be divided as a separate library
int digital_search(int* a)
{
  int l = 0;
  int r = ARR_CAP - 1;
  int mid = 0;
  int counter = 0;

  while(l <= r)
  {
    mid = (r + l) / 2;

    printf("loop = %d\n", counter);
    printf("l = %d, r = %d, mid = %d\n", l, r, mid);

    if (a[mid] == 1 && a[mid + 1] == 0) //mid in a right spot - there is 1 and 0 to right
    {
      return mid;
    }
    else if (a[mid] == 0) //wrong spot hit - mid just hits '0'
    {
      r = mid - 1;
    }
    else
    {
      l = mid + 1;
    }

    counter++;
  }
// l = 4, r = 4, mid = 4
  return -1;
}

int main(void)//    0  1  2  3  4  5  6  7  8  9  10 11 12 13 14 15
{             //    |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  | 
  int a[ARR_CAP] = {1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
  int value = 0;

  value = digital_search(a);

  printf("value = %d\n", value);

  return EXIT_SUCCESS;
}
//plans to work further
