]    #include <iostream>
    using namespace std;
     
    int main()
    {
        int n;
        cin >> n;
        
        for(int i= 0 ; i< n ;i++)
        {
            int m;
            cin >> m;
            
            int arr[m];
            
            int c = 0;
            for(int j =1 ;j <= 2*m-1 ;j+=2)
            {
                arr[c] = j;
                c++;
            }
            
            for(int i : arr)
            {
                cout << i << " ";
            }
            cout << endl;
        }
    }

