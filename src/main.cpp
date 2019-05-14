#include <iostream>
#include "descriptor.h"

int main(int narg, char *argv[]) {
  // [rpc] deriveaddresses: Correction of descriptor checksum in RPC example
  // https://github.com/bitcoin/bitcoin/pull/16024
  //std::string descriptor("wpkh([d34db33f/84h/0h/0h]xpub6DJ2dNUysrn5Vt36jH2KLBT2i1auw1tTSSomg8PhqNiUtx8QX2SvC9nrHu81fT41fvDUnhMjEzQgXnQjKEu3oaqMSzhSrHMxyyoEAmUHQbY/0/*)");

	// Example for regtest/testnet
	//std::string descriptor("pkh([00000000/0'/0']tprv8et1s5VnWCG3v3R6vXX5hprTpdCdcBp3jRuoDByaF9uAkCt5XjfuX52hgh63aWzCYpXNU2YyxAj78qg8PS2EuGUKE8Untk6NVe7FAG8RdLk/*')");

	// Check number of command line arguments
	if (narg != 2) {
		std::cerr << "Usage: " << argv[0] << " \"<descriptor>\"" << std::endl;
		exit(1);
  }

	// Parse descriptor from command line
  std::string descriptor(argv[1]);

	// Compute descriptor checksum, and append to descriptor with # delimiter
  std::string descriptorChecksum = AddChecksum(descriptor);

	// Return descriptor with checksum appeneded
  std::cout << descriptorChecksum << std::endl;

  return 0;
}
