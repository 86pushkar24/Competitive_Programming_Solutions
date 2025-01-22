#define fcin(n,a) for(int i=0;i<n;++i)cin>>a[i];
#define p(a) cout<<a<<endl;
#define c(a) cout<<a<<' ';
#define ev(a) a.begin(),a.end()
#define f(i,n) for(int i=0;i<n;++i)
#define vi vector<int>

void solve(){
    int n, m;
    cin >> n >> m;
    vi a(n), b(m);
    fcin(n, a);
    fcin(m, b);
    int mxa = n / 2, mxb = m / 2;
    vi vala(mxa + 1), valb(mxb + 1);
    vala[0] = valb[0] = 0;
    sort(ev(a));
    sort(ev(b));
    vi pa(mxa), pb(mxb);
    f(i, mxa)
    {
        pa[i] = a[n - 1 - i] - a[i];
        vala[i + 1] = vala[i] + a[n - 1 - i] - a[i];
    }
    f(i, mxb)
    {
        pb[i] = b[m - 1 - i] - b[i];
        valb[i + 1] = valb[i] + b[m - 1 - i] - b[i];
    }
    if (n == 1 && m == 1)
    {
        p(0);
        continue;
    }
    else if (n == 1)
    {
        p(1);
        p(valb[1]);
        continue;
    }
    else if (m == 1)
    {
        p(1);
        p(vala[1]);
        continue;
    }
    else
    {
        int opa = 0, opb = 0, tot = 0, cum = 0;
        vi vals;
        while (true)
        {
            int da = 2 * opa + opb;
            int db = 2 * opb + opa;
            if (da >= n - 1 && db >= m - 1)
            {
                break;
            }
            else if (db >= m - 1)
            {
                if (db == m - 1)
                {
                    cum += pa[opa++];
                }
                else
                {
                    if (da >= n - 2 || opb == 0)
                    {
                        break;
                    }
                    opb--;
                    cum -= pb[opb];
                    cum += pa[opa++];
                    cum += pa[opa++];
                }
            }
            else if (da >= n - 1)
            {
                if (da == n - 1)
                {
                    cum += pb[opb++];
                }
                else
                {
                    if (db >= m - 2 || opa == 0)
                    {
                        break;
                    }
                    opa--;
                    cum -= pa[opa];
                    cum += pb[opb++];
                    cum += pb[opb++];
                }
            }
            else
            {
                if (pa[opa] >= pb[opb])
                {
                    cum += pa[opa++];
                }
                else
                {
                    cum += pb[opb++];
                }
            }
            tot++;
            vals.push_back(cum);

            p(vals.size());
            for (int j : vals)
            {
                c(j);
            }
            p("");
        }
    }
}