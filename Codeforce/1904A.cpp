#include<bits/stdc++.h>
using namespace std;

struct Square {
    int x1, y1;
    int x2, y2;
    int x3, y3;
    int x4, y4;
};

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int A, B;
        cin >> A >> B;

        int xk, yk;
        cin >> xk >> yk;

        int xq, yq;
        cin >> xq >> yq;

        int a = B, b = A;

        vector<pair<int,int>> kingPoints, queenPoints;

        if(A == B) {
            Square kingSquare;
            Square queenSquare;

            kingSquare.x1 = xk + a; kingSquare.y1 = yk + b;
            kingSquare.x2 = xk - a; kingSquare.y2 = yk + b;
            kingSquare.x3 = xk + a; kingSquare.y3 = yk - b;
            kingSquare.x4 = xk - a; kingSquare.y4 = yk - b;

            queenSquare.x1 = xq + a; queenSquare.y1 = yq + b;
            queenSquare.x2 = xq - a; queenSquare.y2 = yq + b;
            queenSquare.x3 = xq + a; queenSquare.y3 = yq - b;
            queenSquare.x4 = xq - a; queenSquare.y4 = yq - b;

            kingPoints = {
                {kingSquare.x1, kingSquare.y1},
                {kingSquare.x2, kingSquare.y2},
                {kingSquare.x3, kingSquare.y3},
                {kingSquare.x4, kingSquare.y4}
            };

            queenPoints = {
                {queenSquare.x1, queenSquare.y1},
                {queenSquare.x2, queenSquare.y2},
                {queenSquare.x3, queenSquare.y3},
                {queenSquare.x4, queenSquare.y4}
            };
        }
        else {
            Square kingSquare1, kingSquare2;
            Square queenSquare1, queenSquare2;

            kingSquare1.x1 = xk + a; kingSquare1.y1 = yk + b;
            kingSquare1.x2 = xk - a; kingSquare1.y2 = yk + b;
            kingSquare1.x3 = xk + a; kingSquare1.y3 = yk - b;
            kingSquare1.x4 = xk - a; kingSquare1.y4 = yk - b;

            kingSquare2.x1 = xk + b; kingSquare2.y1 = yk + a;
            kingSquare2.x2 = xk - b; kingSquare2.y2 = yk + a;
            kingSquare2.x3 = xk + b; kingSquare2.y3 = yk - a;
            kingSquare2.x4 = xk - b; kingSquare2.y4 = yk - a;

            queenSquare1.x1 = xq + a; queenSquare1.y1 = yq + b;
            queenSquare1.x2 = xq - a; queenSquare1.y2 = yq + b;
            queenSquare1.x3 = xq + a; queenSquare1.y3 = yq - b;
            queenSquare1.x4 = xq - a; queenSquare1.y4 = yq - b;

            queenSquare2.x1 = xq + b; queenSquare2.y1 = yq + a;
            queenSquare2.x2 = xq - b; queenSquare2.y2 = yq + a;
            queenSquare2.x3 = xq + b; queenSquare2.y3 = yq - a;
            queenSquare2.x4 = xq - b; queenSquare2.y4 = yq - a;

            kingPoints = {
                {kingSquare1.x1, kingSquare1.y1},
                {kingSquare1.x2, kingSquare1.y2},
                {kingSquare1.x3, kingSquare1.y3},
                {kingSquare1.x4, kingSquare1.y4},
                {kingSquare2.x1, kingSquare2.y1},
                {kingSquare2.x2, kingSquare2.y2},
                {kingSquare2.x3, kingSquare2.y3},
                {kingSquare2.x4, kingSquare2.y4}
            };

            queenPoints = {
                {queenSquare1.x1, queenSquare1.y1},
                {queenSquare1.x2, queenSquare1.y2},
                {queenSquare1.x3, queenSquare1.y3},
                {queenSquare1.x4, queenSquare1.y4},
                {queenSquare2.x1, queenSquare2.y1},
                {queenSquare2.x2, queenSquare2.y2},
                {queenSquare2.x3, queenSquare2.y3},
                {queenSquare2.x4, queenSquare2.y4}
            };
        }

        int count = 0;
        for(auto &kp : kingPoints) {
            for(auto &qp : queenPoints) {
                if(kp.first == qp.first && kp.second == qp.second) {
                    count++;
                }
            }
        }

        cout << count << "\n";
    }

    return 0;
}
