static const DWORD multiple_render_targets_code_dxbc[] =
{
    0x43425844, 0xc4325131, 0x8ba4a693, 0x08d15431, 0xcb990885, 0x00000001, 0x0000013c, 0x00000003,
    0x0000002c, 0x0000003c, 0x000000a0, 0x4e475349, 0x00000008, 0x00000000, 0x00000008, 0x4e47534f,
    0x0000005c, 0x00000003, 0x00000008, 0x00000050, 0x00000000, 0x00000000, 0x00000003, 0x00000000,
    0x0000000f, 0x00000050, 0x00000001, 0x00000000, 0x00000003, 0x00000001, 0x0000000f, 0x00000050,
    0x00000002, 0x00000000, 0x00000003, 0x00000002, 0x0000000f, 0x545f5653, 0x65677261, 0xabab0074,
    0x58454853, 0x00000094, 0x00000050, 0x00000025, 0x0100086a, 0x03000065, 0x001020f2, 0x00000000,
    0x03000065, 0x001020f2, 0x00000001, 0x03000065, 0x001020f2, 0x00000002, 0x08000036, 0x001020f2,
    0x00000000, 0x00004002, 0x3f800000, 0x00000000, 0x00000000, 0x3f800000, 0x08000036, 0x001020f2,
    0x00000001, 0x00004002, 0x40000000, 0x00000000, 0x00000000, 0x3f800000, 0x08000036, 0x001020f2,
    0x00000002, 0x00004002, 0x40400000, 0x00000000, 0x00000000, 0x3f800000, 0x0100003e,
};
#ifdef __GNUC__
#define UNUSED_ARRAY_ATTR __attribute__((unused))
#else
#define UNUSED_ARRAY_ATTR
#endif
UNUSED_ARRAY_ATTR static const D3D12_SHADER_BYTECODE multiple_render_targets_dxbc = { multiple_render_targets_code_dxbc, sizeof(multiple_render_targets_code_dxbc) };
#undef UNUSED_ARRAY_ATTR