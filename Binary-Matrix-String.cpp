N numbers were converted into their respective Binary form of M length and arranged in an NxM matrix.

Your task is to find the index of row (1 based indexing) which contains the binary number with maximum value. If multiple rows have maximum value then print the row with minimum index.

Input:

The first line contains two space separated integers N and M, denoting number of rows and number of columns in matrix respectively.

Each of the next N lines contains a number in binary form.

Output:

Print the index of row in a single line.

Constraints:
1<=N,M<=10^3
0<=mat[i][j]<=1

SAMPLE INPUT

4 4
1010
0100
0010
0011

SAMPLE OUTPUT

1

Explanation

1st row value  =  23 *1  +  22 *0 + 21 *1 + 20 *0  =  10

2nd row value =  23 *0  +  22 *1 + 21 *0 + 20 *0  =  4

3rd row value  =  23 *0  +  22 *0 + 21 *1 + 20 *0  =  2

4th row value  =  23 *0  +  22 *0 + 21 *1 + 20 *1  =  3

    #include<bits/stdc++.h>
    using namespace std;
    int main()
    {
    //     ios_base::sync_with_stdio(false);
    // cin.tie(NULL);
        int m,n;
        cin>>m>>n;
        string s1[m],max;
        for(int i=0;i<m;i++)
        {
            cin>>s1[i];
        }
        max = s1[0];
        int p=1;
        for(int i=1;i<m;i++)
        {
             if(s1[i]>max)
            {
                max=s1[i];
                p=i+1;
            }
        }
          
        
        cout<<p<<endl;
    }