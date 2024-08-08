# Experiment 6

# Aim
To study and implement C++ decision making statements Loops

# software used
VS code 

# Theory 
for loop is used to iterate a part of the program several times. If the number of iteration is fixed, it is recommended to use for loop
whiile loops can execute a block of code as long as a specified condition is reached
do/while loop is a variant of the while loop. This loop will execute the code block once, before checking if the condition is true

# Codes:

for loop
~~~
#include<iostream>
using namespace std;

int main()
{
    int i;
    for(i=0;i<13;i++)
    {
        cout<<i<<endl;
    }
    return 0;
}
~~~
output:
![image](https://github.com/user-attachments/assets/750fc802-1ad8-4953-b29f-4b684c00d655)

while 
~~~
#include<iostream>
using namespace std;

int main()
{
    int i=1,n;
    cout<<"enter how many numbers you want to print: ";
    cin>>n;
    while (i<=n)
    {
        cout<<i<<endl;
        i++;
    }
}
~~~
output:
![image](https://github.com/user-attachments/assets/af0aa85d-286f-41ed-b07c-5730104f4a90)

do//while
~~~
#include<iostream>
using namespace std;

int main()
{
    int i=1,n;
    cout<<"enter the number of digits you want to print: ";
    cin>>n;
    do
    {
        cout<<i<<endl;
        i++;

    }
    while(i<=n);

    return 0;    
}
~~~
output:
![image](https://github.com/user-attachments/assets/c1556136-a374-494a-b7db-a91edf9f8403)

while inside for:
~~~
#include<iostream>
using namespace std;

int main()
{
    int i,j,k=0,n;
    cout<<"enter the number of rows: ";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=(n-i);j++)
        {
            cout<<"  ";
        }
        while (k!=(2*i-1))
        {
            cout<<"% ";
            k++;
        }
        k=0;
        cout<<endl;
    }

    cout<<endl;
    return 0;
}
~~~
output:
![image](https://github.com/user-attachments/assets/4db73cd4-5dfa-49a3-9e14-f46350ca0c9e)

nested for:

~~~
#include <iostream>
using namespace std;

int main() 

{
    for (int i = 1; i <= 5; ++i) 
    {
        for (int j = 1; j <= 5; ++j) 
        {
            cout << i << " x " << j << " = " << i * j << "\t";
        }
        cout << endl;
    }
    return 0;
}
~~~

![image](https://github.com/user-attachments/assets/f9f88b47-b2a9-4f3f-8ced-5f3d98dda0d1)

nested while 

~~~
#include <iostream>
using namespace std;

int main() 
{
    int n;
    cout << "Enter the number of rows for the triangle: ";
    cin >> n;
    int i = 1;
    while (i <= n) 
    {
        int j = 1;
        while (j <= i) 
        {
            std::cout << "*";
            j++;
        }
        cout <<endl;
        i++;
    }
    return 0;
}
~~~
output:
![image](https://github.com/user-attachments/assets/7a7a29ae-cb20-47be-9c5a-17844e3974bc)


nested do while:

~~~
#include <iostream>
using namespace std;

int main() 
{
    int rows, columns, i = 1;
    char ch;

    cout<<"number of rows: ";
    cin>>rows;

    cout<<"number of columns: ";
    cin>>columns;

    cout << "character: ";
    cin >> ch;

    do 
    {
        int j = 1;
        do 
        {
            cout << ch <<" ";
            j++;
        } 
        while (j <= columns);
        cout << std::endl;
        i++;
    } 
    while (i <= rows);
    return 0;
}
~~~

![image](https://github.com/user-attachments/assets/6c81152d-8466-4fbc-898f-3bfa2d08aa1b)


for in while: 

~~~
#include <iostream>
using namespace std;

int main() 
{
    int rows, columns, i = 1;
    char ch;

    cout << "number of rows: ";
    cin >> rows;

    cout << "number of columns: ";
    cin >> columns;

    cout << "character: ";
    cin >> ch;

    while (i <= rows) 
    {
        for (int j = 1; j <= columns; j++) 
        {
            cout << ch << " ";
        }
        cout <<endl;
        i++;
    }

    return 0;
}
~~~

![image](https://github.com/user-attachments/assets/d259bb7b-cd04-42e1-b07d-43b5d4667e1a)
