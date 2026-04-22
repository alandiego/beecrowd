#include <bits/stdc++.h>
using namespace std;

using vi = vector<int>;

vi U = {1,2,3,4,5,6,7,8,9};
vi F = {10,11,12,13,14,15,16,17,18};
vi D = {19,20,21,22,23,24,25,26,27};
vi R = {28,29,30,31,32,33,34,35,36};
vi L = {37,38,39,40,41,42,43,44,45};
vi B = {46,47,48,49,50,51,52,53,54};

void rotate_face(vi &f) {
    vi t = f;
    f[0]=t[6]; f[1]=t[3]; f[2]=t[0];
    f[3]=t[7]; f[4]=t[4]; f[5]=t[1];
    f[6]=t[8]; f[7]=t[5]; f[8]=t[2];
}

void move(char m) {

    if (m == 'U') {
        rotate_face(U);

        vi t = {F[0],F[1],F[2]};

        F[0]=R[0]; F[1]=R[1]; F[2]=R[2];
        R[0]=B[0]; R[1]=B[1]; R[2]=B[2];
        B[0]=L[0]; B[1]=L[1]; B[2]=L[2];
        L[0]=t[0]; L[1]=t[1]; L[2]=t[2];
    }

    else if (m == 'u') {
        for (int i=0;i<3;i++) move('U');
    }

    else if (m == 'D') {
        rotate_face(D);

        vi t = {F[6],F[7],F[8]};

        F[6]=L[6]; F[7]=L[7]; F[8]=L[8];
        L[6]=B[6]; L[7]=B[7]; L[8]=B[8];
        B[6]=R[6]; B[7]=R[7]; B[8]=R[8];
        R[6]=t[0]; R[7]=t[1]; R[8]=t[2];
    }

    else if (m == 'd') {
        for (int i=0;i<3;i++) move('D');
    }

    else if (m == 'F') {
        rotate_face(F);

        vi t = {U[6],U[7],U[8]};

        U[6]=L[8]; U[7]=L[5]; U[8]=L[2];
        L[2]=D[0]; L[5]=D[1]; L[8]=D[2];
        D[0]=R[6]; D[1]=R[3]; D[2]=R[0];
        R[0]=t[0]; R[3]=t[1]; R[6]=t[2];
    }

    else if (m == 'f') {
        for (int i=0;i<3;i++) move('F');
    }

    else if (m == 'B') {
        rotate_face(B);

        vi t = {U[0],U[1],U[2]};

        U[0]=R[2]; U[1]=R[5]; U[2]=R[8];
        R[2]=D[8]; R[5]=D[7]; R[8]=D[6];
        D[6]=L[0]; D[7]=L[3]; D[8]=L[6];
        L[0]=t[2]; L[3]=t[1]; L[6]=t[0];
    }

    else if (m == 'b') {
        for (int i=0;i<3;i++) move('B');
    }

    else if (m == 'L') {
        rotate_face(L);

        vi t = {U[0],U[3],U[6]};

        U[0]=B[8]; U[3]=B[5]; U[6]=B[2];
        B[2]=D[6]; B[5]=D[3]; B[8]=D[0];
        D[0]=F[0]; D[3]=F[3]; D[6]=F[6];
        F[0]=t[0]; F[3]=t[1]; F[6]=t[2];
    }

    else if (m == 'l') {
        for (int i=0;i<3;i++) move('L');
    }

    else if (m == 'R') {
        rotate_face(R);

        vi t = {U[2],U[5],U[8]};

        U[2]=F[2]; U[5]=F[5]; U[8]=F[8];
        F[2]=D[2]; F[5]=D[5]; F[8]=D[8];
        D[2]=B[6]; D[5]=B[3]; D[8]=B[0];
        B[0]=t[2]; B[3]=t[1]; B[6]=t[0];
    }

    else if (m == 'r') {
        for (int i=0;i<3;i++) move('R');
    }
}

bool solved() {
    for (int i=0;i<9;i++){
        if (U[i]!=i+1) return false;
        if (F[i]!=i+10) return false;
        if (D[i]!=i+19) return false;
        if (R[i]!=i+28) return false;
        if (L[i]!=i+37) return false;
        if (B[i]!=i+46) return false;
    }
    return true;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    string command;

    while (cin >> command) {

        int resp = 0;

        do {
            for (char c : command)
                move(c);
            resp++;
        } while (!solved());

        cout << resp << '\n';
    }
}
