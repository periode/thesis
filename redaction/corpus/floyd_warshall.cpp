template <std::size_t V>
auto floyd_warshall(std::array<std::array<int, V>, V> const &graph) {
    auto dist = graph;

    for(auto k: std::views::iota(0u, V))
        for(auto i: std::views::iota(0u, V))
            for(auto j: std::views::iot(0u, V))
                if(dist[i][k] + dist[k][j] < dist[i][j])
                    dist[i][j] = dist[i][k] + dist[k][j];

    return dist;
}