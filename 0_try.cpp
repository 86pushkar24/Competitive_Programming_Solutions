#include <iostream>
#include <unordered_map>
#include <vector>
#include <chrono>
#include <random>
#include <ext/pb_ds/assoc_container.hpp> // Include GP Hash Table

using namespace std;
using namespace chrono;
using namespace __gnu_pbds; // Namespace for gp_hash_table

// Custom Hash Function for unordered_map
struct custom_hash
{
    static uint64_t splitmix64(uint64_t x)
    {
        x += 0x9e3779b97f4a7c15;
        x = (x ^ (x >> 30)) * 0xbf58476d1ce4e5b9;
        x = (x ^ (x >> 27)) * 0x94d049bb133111eb;
        return x ^ (x >> 31);
    }

    size_t operator()(uint64_t x) const
    {
        static const uint64_t FIXED_RANDOM = chrono::steady_clock::now().time_since_epoch().count();
        return splitmix64(x + FIXED_RANDOM);
    }
};

// Function to benchmark different maps
template <typename Map>
void benchmark(Map &map, const vector<uint64_t> &keys, const string &name)
{
    auto start = high_resolution_clock::now();

    // Insert elements
    for (uint64_t key : keys)
    {
        map[key] = key;
    }

    // Lookup elements
    uint64_t sum = 0;
    for (uint64_t key : keys)
    {
        sum += map[key];
    }

    auto end = high_resolution_clock::now();
    cout << name << " Time: "
         << duration_cast<milliseconds>(end - start).count()
         << " ms, Checksum: " << sum << endl;
}

int main()
{
    const int N = 1'000'000; // Number of elements
    vector<uint64_t> keys(N);

    // Generate random keys
    mt19937_64 rng(steady_clock::now().time_since_epoch().count());
    for (int i = 0; i < N; ++i)
    {
        keys[i] = rng();
    }

    // Define unordered_map and gp_hash_table
    unordered_map<uint64_t, uint64_t, custom_hash> unordered_map_custom;
    gp_hash_table<uint64_t, uint64_t, custom_hash> gp_hash_table_custom;

    // Benchmark unordered_map
    benchmark(unordered_map_custom, keys, "unordered_map (Custom Hash)");

    // Benchmark gp_hash_table
    benchmark(gp_hash_table_custom, keys, "gp_hash_table (Custom Hash)");

    return 0;
}
