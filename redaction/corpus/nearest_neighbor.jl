function nearest_neighbor(x', phi, D, dist)
    D[argmin([dist(phi(x), phi(x')) for (x,y) in D])][end]
  end