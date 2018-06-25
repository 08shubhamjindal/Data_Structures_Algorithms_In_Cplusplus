Multiplication of Two Large Number using Recusrion

#include<bits/stdc++.h>
    using namespace std;
      void mul(string a, string b)
     {
     int i,j;
    vector<int> r(a.size() + b.size(), 0);
    for(  i = a.size() - 1; i >= 0; i-- )
    {
    for( j = b.size() - 1; j >= 0; j-- )
    {
    r[ i + j + 1 ] = r[ i + j + 1 ] +  ( b[ j ] - '0') * ( a[ i ] - '0' );
    }
    }
    for(  i = a.size() + b.size(); i >= 0; i-- ){
    if( r[ i ] >= 10 ){
    r[ i - 1 ] =r[ i - 1 ]+r([ i ] / 10);
    r[ i ] %= 10;
    }
    }

    for( i = 0; i < a.size() + b.size(); i++ ){
    cout << r[ i ];
    }
    cout << endl;
    }
    int main( void )
    {
    string str1, str2 ;
    str1 = "3141592653589793238462643383279502884197169399375105820974944592";str2 = "2718281828459045235360287471352662497757247093699959574966967627";
    mul( str1, str2 );
    return 0;
}