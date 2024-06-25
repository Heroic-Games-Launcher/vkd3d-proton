static const DWORD cs_clear_buffer_code_dxbc[] =
{
    0x43425844, 0x687983cd, 0xe75a9b58, 0xa77e1917, 0x78d96804, 0x00000001, 0x000000c0, 0x00000003,
    0x0000002c, 0x0000003c, 0x0000004c, 0x4e475349, 0x00000008, 0x00000000, 0x00000008, 0x4e47534f,
    0x00000008, 0x00000000, 0x00000008, 0x58454853, 0x0000006c, 0x00050050, 0x0000001b, 0x0100086a,
    0x04000059, 0x00208e46, 0x00000000, 0x00000001, 0x0400009e, 0x0011e000, 0x00000000, 0x00000004,
    0x0200005f, 0x00020012, 0x0400009b, 0x00000040, 0x00000001, 0x00000001, 0x090000a8, 0x0011e012,
    0x00000000, 0x0002000a, 0x00004001, 0x00000000, 0x0020800a, 0x00000000, 0x00000000, 0x0100003e,
};
#ifdef __GNUC__
#define UNUSED_ARRAY_ATTR __attribute__((unused))
#else
#define UNUSED_ARRAY_ATTR
#endif
UNUSED_ARRAY_ATTR static const D3D12_SHADER_BYTECODE cs_clear_buffer_dxbc = { cs_clear_buffer_code_dxbc, sizeof(cs_clear_buffer_code_dxbc) };
#undef UNUSED_ARRAY_ATTR