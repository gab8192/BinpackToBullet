#include "nnue_data_binpack_format.h"

#include <iostream>

int main(int argc, char** argv)
{
  if (argc != 6) {
    std::cout << "BinpackToBullet <input> <output> <min-ply> <max-score> <pos-count>" << std::endl;
    return 0;
  }

  std::string input(argv[1]);

  std::string output(argv[2]);

  int minPly = std::stoi(argv[3]);

  int maxScore = std::stoi(argv[4]);

  std::size_t posCount = std::stoull(argv[5]);
  if (posCount == 0)
    posCount = 999999999999ULL;

  binpack::convertBinpackToBin(input, output, std::ios::trunc, minPly, maxScore, posCount);

  return 0;
}