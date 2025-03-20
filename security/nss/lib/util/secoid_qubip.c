// OIDs for id-ml-dsa come from the [NIST Computer Security Objects
// Register](https://csrc.nist.gov/projects/computer-security-objects-register/algorithm-registration).

// DSA2 is defined in security/nss/lib/util/secoid.c
// USGov algorithm OID space: {2 16 840 1 101}
// #define USGOV 0x60, 0x86, 0x48, 0x01, 0x65
// #define NISTALGS USGOV, 3, 4 
// #define DSA2 NISTALG, 3
CONST_OID mlDsa65PublicKey[] = { DSA2, 18 };
CONST_OID mlDsa65Signature[] = { DSA2, 18 };