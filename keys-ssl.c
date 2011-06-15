#include <openssl/bn.h>

static BN_ULONG e_0[1] = {
	0x00010001,
};

static BN_ULONG n_0[64] = {
	0x16a0d8e1, 0x63a27054, 0xc8ba757b, 0xdc9fca11,
	0xcbcb35e3, 0xb9c06510, 0xba941433, 0x39e3dfeb,
	0x6c1fce9d, 0x7bbae38a, 0xfefabba7, 0x205a5a73,
	0x97839a2e, 0x53ea3e5a, 0x61dc0170, 0xfec8f5b6,
	0xd29a1004, 0xefe311d8, 0xa5156bb8, 0x8c6a92d0,
	0x7a6eb5cc, 0x9067cc76, 0x0bd5b1ff, 0xd103580b,
	0x8f3a2daf, 0x4a563e84, 0x46b0943e, 0xacd7cadb,
	0xebd1e198, 0x5fabb688, 0x5916f173, 0x7e70c1d3,
	0x5d6ca84e, 0xaaa8acc8, 0xe20fd4dc, 0x1685c157,
	0xad933f64, 0xf9e9c9c7, 0xc5f59824, 0xbe6272ed,
	0x53447bd1, 0x585d9a7d, 0x5b3bc30d, 0x011a5b3f,
	0xffbbf0e9, 0xf312b966, 0x482c131b, 0x2203fb37,
	0x0dc38eab, 0x3e7c157d, 0xb39fcc8d, 0xb04de1d6,
	0x07fc0d84, 0x4d9f0137, 0xe13b5ac5, 0xb075a241,
	0x8e56e153, 0x0a9a9d48, 0xf97054eb, 0xf2cff393,
	0x376024f2, 0x2a2ead68, 0x88d35dce, 0xd6579971,
};


struct pubkey {
	struct bignum_st e, n;
};

#define KEY(data) {				\
	.d = data,				\
	.top = sizeof(data)/sizeof(data[0]),	\
}

#define KEYS(e,n)	{ KEY(e), KEY(n), }

static struct pubkey keys[] = {
	KEYS(e_0, n_0),
};
