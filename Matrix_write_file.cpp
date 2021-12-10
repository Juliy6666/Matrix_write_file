// Matrix_write_file.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;

void writev(vector <int> V)
{
    
}

int main()
{
    vector<int> V;
    ifstream in("matrix_out.txt");
    for (int x; in >> x; ) V.push_back(x);    
    
    int arr[6];
    for (int i = 0; i < 6; i++)
    {
        cout << V[i] << " " ;
        arr[i] = V[i];
        cout << arr[i] << "-";
     }
    int n = sizeof(arr) / sizeof(arr[0]);

    sort(arr, arr + n);

    cout << "\nArray after sorting using "
        "default sort is : \n";
    for (int i = 0; i < n; ++i)
        if (i == n - 1)
        {
            cout << arr[i];
        }
        else
            cout << arr[i] << ", ";
    cout << endl;
    int arrm[6];
    arrm[0] = arr[1] - arr[0];
    arrm[1] = arr[2] - arr[1];
    arrm[2] = arr[3] - arr[2];
    arrm[3] = arr[4] - arr[3];
    arrm[4] = arr[5] - arr[4];
    arrm[5] = (49 + arr[0]) - arr[5];
    for (int i = 0; i < 6; i++)
    {
        cout << arrm[i]<<" ";
    }
    

    
    return 0;
    
    /*
    const std::string file_name = "matrix.txt";

    {
        std::ofstream file(file_name, std::ios::app); // open the output file in append mode

        // accept a line from the user and append it to the file
        std::string line;
        std::getline(std::cin, line);
        file << line << '\n';
    }
    {
        // for debugging: dump the contents of the (modified) file
        std::cout << "\n\nfile now contains:\n---------------\n" << std::ifstream(file_name).rdbuf();
    }*/
    /*
    string filename("matrix_out.txt");
    int number;
    
    ifstream input_file(filename);
    if (!input_file.is_open()) {
        cerr << "Could not open the file - '"
            << filename << "'" << endl;
        
    }
    
    while (input_file >> number) {
        
        while (number > 0)
        {
            cout << number;
            
        }
    }
        input_file.close();*/
    /*
    int arr[] = { 17, 47, 15, 6, 21, 12 };
    int n = sizeof(arr) / sizeof(arr[0]);

    sort(arr, arr + n);

    cout << "\nArray after sorting using "
        "default sort is : \n";
    for (int i = 0; i < n; ++i)
        if (i == n - 1) 
        {
            cout << arr[i] ;
        }else
        cout << arr[i] << ", ";

        ofstream myfile("matrix.txt");
        if (myfile.is_open())
        {
        
            for (int count = 0; count < 6; count++) {
                if (count == count - 1)
                {
                    myfile << arr[count];
                }
                else
                myfile << arr[count] << ", ";
            }
            myfile.close();
        }
        else cout << "Unable to open file";
        return 0;*/
    
}

