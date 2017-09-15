#include <iostream>
#include <stdio.h>
#include <math.h>

int main()
{
    int n, sm;
    int fd=0, ld=0, d=0;
    cout <<"Enter any number: "<< endl;
    cin >> n;
    ld = n % 10;
    d  = (int)log10(n);
    fd = (int)(n / pow(10, d));

    sm  = ld;
    sm *= (int) pow(10, d);
    sm += n % ((int) pow(10, digits));
    sm -= ld;
    sm += fd;
    cout << "Original number = n : " << n);
    cout << "Number after swapping first and last digit: " << sm);

return 0;
}


