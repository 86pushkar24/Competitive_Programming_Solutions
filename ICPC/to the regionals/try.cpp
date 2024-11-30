signed main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;

        vector<int> vc(n);
        multiset<int> ms;
        vector<pair<int, int>> start;
        vector<pair<int, int>> end;
        for (int i = 0; i < k; i++)
        {
            int l, r, m;
            cin >> l >> r >> m;
            start.pb(make_pair((l - 1), m));
            end.pb(make_pair((r - 1), m));
        }

        sort(start.begin(), start.end());
        sort(end.begin(), end.end());

        vector<int> ans;

        int f = 1;
        int a = 0;
        int b = 0;
        for (int i = 0; i < n; i++)
        {
            while (a < k && (start[a].first == i))
            {
                ms.insert(start[a].second);
                a++;
            }

            int a = 1;
            for (auto it : ms)
            {
                if (it != a)
                    break;
                else
                    a++;
            }
            if (a == (n + 1))
            {
                f = 0;
                break;
            }
            while (b < k && (end[b].first == i))
            {
                // ms.erase(end[b].second);
                auto it = ms.find(end[b].second);
                if (it != ms.end())
                {
                    ms.erase(it);
                }
                b++;
            }
            ans.pb(a);
        }
        if (!f)
        {
            cout << "-1" << endl;
            continue;
        }
        for (auto it : ans)
            cout << it << " ";
        cout << endl;
    }
}