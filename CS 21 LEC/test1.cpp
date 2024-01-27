#include <iostream>
#include <vector>
#include <string>
using namespace std;

void character_count(vector<string>& v1, vector<string>& v2)
{
    int t,r,u,l,o,v,e1,e2;
    for(int i = 0; i < v1.size(); i++){      
        if(v1[i] == 't')          
            t += 1; 
        else if(v1[i] == 'r')          
            r += 1;
        else if(v1[i] == 'u')          
            u += 1;
        else if(v1[i] == 'l')          
            l += 1;
        else if(v1[i] == 'o')          
            o += 1;
        else if(v1[i] == 'v')          
            v += 1;
        else if(v1[i] == 'e'){         
            e1 += 1;
            e2 += 1;
        }
        else 
            t += 0;
    }
    for(int i = 0; i < v2.size(); i++){ 
        if(v2[i] == 't')          
            t += 1; 
        else if(v2[i] == 'r')          
            r += 1;
        else if(v2[i] == 'u')          
            u += 1;
        else if(v2[i] == 'l')          
            l += 1;
        else if(v2[i] == 'o')          
            o += 1;
        else if(v2[i] == 'v')          
            v += 1;
        else if(v2[i] == 'e'){        
            e1 += 1;
            e2 += 1;
        }
        else 
            t += 0;
    }

    int a5, b5, c5, d5, e5, f5, g5, h5, i5, j5, k5, l5, m5, n5, o5, p5, q5, r5, s5 ,t5, u5, v5, w5, x5, y5, z5, a6, total;
    a5 = t + r;
    b5 = r + u;
    c5 = u + e1;
    d5 = e1 + l;
    e5 = l + o;
    f5 = o + v;
    g5 = v + e2;

    h5 = a5 + b5;
    i5 = b5 + c5;
    j5 = c5 + d5;
    k5 = d5 + e5;
    l5 = e5 + f5;
    m5 = f5 + g5;

    n5 = h5 + i5;
    o5 = i5 + j5;
    p5 = j5 + k5;
    q5 = k5 + l5;
    r5 = l5 + m5;

    s5 = n5 + o5;
    t5 = o5 + p5;
    u5 = p5 + q5;
    v5 = q5 + r5;

    w5 = s5 + t5;
    x5 = t5 + u5;
    y5 = u5 + v5;

    z5 = w5 + x5;
    a6 = x5 + y5;

    total = z5 + a6;

    cout << total;
}

int main()
{
    string name1 = "";
    string name2 = "";

    cout << "Enter the name: \n";
    getline(cin, name1);
    cout << "Enter the name of the partner: \n";
    getline(cin, name2);

    vector<string> v1;
    vector<string> v2;

    v1.push_back(name1);
    v2.push_back(name2);
/*
    for (string c: v1) {
        cout << c;
    }
    cout << endl;

    for (string c: v2) {
        cout << c;
    }
*/
    character_count(v1, v2);

    return 0;
}