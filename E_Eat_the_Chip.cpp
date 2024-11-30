#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;  

    while (t--) {
        int h, w, xa, ya, xb, yb;
        cin >> h >> w >> xa >> ya >> xb >> yb;

        int posAx[2], posAy[2];
        posAx[0] = xa;
        posAy[0] = ya;
        posAx[1] = xb;
        posAy[1] = yb;


        bool flag = true;
        while (xa <= h && xb >= 1 && !(xa == xb && ya == yb)) {
            if (flag) {
                xa++;
                if (ya == yb) {
                } else if (ya < yb) {
                    if (ya + 1 <= w) {
                        ya++;
                    }
                } else {
                    if (ya - 1 >= 1) {
                        ya--;
                    }
                }
            } else {
                xb--;
                if (ya == yb) {
                    if (yb - 1 > w - yb) {
                        if (yb - 1 >= 1) {
                            yb--;
                        }
                    } else {
                        if (yb + 1 <= w) {
                            yb++;
                        }
                    }
                } else if (ya < yb) {
                    if (yb + 1 <= w) {
                        yb++;
                    }
                } else {
                    if (yb - 1 >= 1) {
                        yb--;
                    }
                }
            }
            flag = !flag;
        }

        if (xa == xb && ya == yb && flag == false) {
            cout << "Alice" << endl;
            continue;
        }

        xa = posAx[0];
        ya = posAy[0];
        xb = posAx[1];
        yb = posAy[1];


        flag = true;
        while (xa <= h && xb >= 1 && !(xa == xb && ya == yb)) {
            if (flag) {
                xa++;
                if (ya == yb) {
                    if (ya - 1 > w - ya) {
                        if (ya - 1 >= 1) {
                            ya--;
                        }
                    } else {
                        if (ya + 1 <= w) {
                            ya++;
                        }
                    }
                } else if (ya < yb) {
                    if (ya - 1 >= 1) {
                        ya--;
                    }
                } else {
                    if (ya + 1 <= w) {
                        ya++;
                    }
                }
            } else {
                xb--;
                if (ya == yb) {

                } else if (ya < yb) {
                    if (yb - 1 >= 1) {
                        yb--;
                    }
                } else {
                    if (yb + 1 <= w) {
                        yb++;
                    }
                }
            }
            flag = !flag;
        }

        if (xa == xb && ya == yb && flag == true) {
            cout << "Bob" << endl;
        } else {
            cout << "Draw" << endl;
        }
    }

    return 0;
}
