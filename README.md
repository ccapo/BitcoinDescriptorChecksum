# BitcoinDescriptorChecksum

* Computes the descriptor checksum for public as well as private keys, unlike the bitcoin RPC getdescriptorinfo (bitcoin-core v0.18.0)
* Descriptors containing private keys can be used to derive hardened child keys with the RPC deriveaddresses (e.g. the bitcoin-core keypath m/0'/0'/i')
* For details on the format of a descriptor, see [Support for Output Descriptors in Bitcoin Core](https://github.com/bitcoin/bitcoin/blob/0.18/doc/descriptors.md)
* Standalone version of the code found [here](https://github.com/bitcoin/bitcoin/blob/0.18/src/script/descriptor.cpp)

## Installation

Requires:

* GNU Make v4.1
* g++ v5.4.0

To compile:

* Type `make all`

## Usage Example

* Usage: bitcoin_descriptor_checksum "descriptor"
* The example below was generated on a `regtest` network:
```
$ ./bitcoin_descriptor_checksum "pkh([00000000/0'/0']tprv8et1s5VnWCG3v3R6vXX5hprTpdCdcBp3jRuoDByaF9uAkCt5XjfuX52hgh63aWzCYpXNU2YyxAj78qg8PS2EuGUKE8Untk6NVe7FAG8RdLk/*')"
$ pkh([00000000/0'/0']tprv8et1s5VnWCG3v3R6vXX5hprTpdCdcBp3jRuoDByaF9uAkCt5XjfuX52hgh63aWzCYpXNU2YyxAj78qg8PS2EuGUKE8Untk6NVe7FAG8RdLk/*')#3428vapa
```

