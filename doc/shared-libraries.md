Shared Libraries
================

## gasbitconsensus

The purpose of this library is to make the verification functionality that is critical to Gasbit's consensus available to other applications, e.g. to language bindings.

### API

The interface is defined in the C header `gasbitconsensus.h` located in  `src/script/gasbitconsensus.h`.

#### Version

`gasbitconsensus_version` returns an `unsigned int` with the the API version *(currently at an experimental `0`)*.

#### Script Validation

`gasbitconsensus_verify_script` returns an `int` with the status of the verification. It will be `1` if the input script correctly spends the previous output `scriptPubKey`.

##### Parameters
- `const unsigned char *scriptPubKey` - The previous output script that encumbers spending.
- `unsigned int scriptPubKeyLen` - The number of bytes for the `scriptPubKey`.
- `const unsigned char *txTo` - The transaction with the input that is spending the previous output.
- `unsigned int txToLen` - The number of bytes for the `txTo`.
- `unsigned int nIn` - The index of the input in `txTo` that spends the `scriptPubKey`.
- `unsigned int flags` - The script validation flags *(see below)*.
- `gasbitconsensus_error* err` - Will have the error/success code for the operation *(see below)*.

##### Script Flags
- `gasbitconsensus_SCRIPT_FLAGS_VERIFY_NONE`
- `gasbitconsensus_SCRIPT_FLAGS_VERIFY_P2SH` - Evaluate P2SH ([BIP16](https://github.com/gasbit/bips/blob/master/bip-0016.mediawiki)) subscripts
- `gasbitconsensus_SCRIPT_FLAGS_VERIFY_DERSIG` - Enforce strict DER ([BIP66](https://github.com/gasbit/bips/blob/master/bip-0066.mediawiki)) compliance

##### Errors
- `gasbitconsensus_ERR_OK` - No errors with input parameters *(see the return value of `gasbitconsensus_verify_script` for the verification status)*
- `gasbitconsensus_ERR_TX_INDEX` - An invalid index for `txTo`
- `gasbitconsensus_ERR_TX_SIZE_MISMATCH` - `txToLen` did not match with the size of `txTo`
- `gasbitconsensus_ERR_DESERIALIZE` - An error deserializing `txTo`

### Example Implementations
- [NGasbit](https://github.com/NicolasDorier/NGasbit/blob/master/NGasbit/Script.cs#L814) (.NET Bindings)
- [node-libgasbitconsensus](https://github.com/bitpay/node-libgasbitconsensus) (Node.js Bindings)
- [java-libgasbitconsensus](https://github.com/dexX7/java-libgasbitconsensus) (Java Bindings)
- [gasbitconsensus-php](https://github.com/Bit-Wasp/gasbitconsensus-php) (PHP Bindings)
