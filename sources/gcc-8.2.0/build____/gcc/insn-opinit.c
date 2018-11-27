/* Generated automatically by the program `genopinit'
   from the machine description file `md'.  */

#define IN_TARGET_CODE 1
#include "config.h"
#include "system.h"
#include "coretypes.h"
#include "backend.h"
#include "predict.h"
#include "tree.h"
#include "rtl.h"
#include "alias.h"
#include "varasm.h"
#include "stor-layout.h"
#include "calls.h"
#include "memmodel.h"
#include "tm_p.h"
#include "flags.h"
#include "insn-config.h"
#include "expmed.h"
#include "dojump.h"
#include "explow.h"
#include "emit-rtl.h"
#include "stmt.h"
#include "expr.h"
#include "insn-codes.h"
#include "optabs.h"

struct optab_pat {
  unsigned scode;
  enum insn_code icode;
};

static const struct optab_pat pats[NUM_OPTAB_PATTERNS] = {
  { 0x010f10, CODE_FOR_extendqihi2 },
  { 0x010f11, CODE_FOR_extendqisi2 },
  { 0x010f12, CODE_FOR_extendqidi2 },
  { 0x011011, CODE_FOR_extendhisi2 },
  { 0x011012, CODE_FOR_extendhidi2 },
  { 0x011112, CODE_FOR_extendsidi2 },
  { 0x012a2b, CODE_FOR_extendsfdf2 },
  { 0x012a2c, CODE_FOR_extendsfxf2 },
  { 0x012b2c, CODE_FOR_extenddfxf2 },
  { 0x022b2a, CODE_FOR_truncdfsf2 },
  { 0x022c2a, CODE_FOR_truncxfsf2 },
  { 0x022c2b, CODE_FOR_truncxfdf2 },
  { 0x030f10, CODE_FOR_zero_extendqihi2 },
  { 0x030f11, CODE_FOR_zero_extendqisi2 },
  { 0x030f12, CODE_FOR_zero_extendqidi2 },
  { 0x031011, CODE_FOR_zero_extendhisi2 },
  { 0x031012, CODE_FOR_zero_extendhidi2 },
  { 0x031112, CODE_FOR_zero_extendsidi2 },
  { 0x06102a, CODE_FOR_floathisf2 },
  { 0x06102b, CODE_FOR_floathidf2 },
  { 0x06102c, CODE_FOR_floathixf2 },
  { 0x06112a, CODE_FOR_floatsisf2 },
  { 0x06112b, CODE_FOR_floatsidf2 },
  { 0x06112c, CODE_FOR_floatsixf2 },
  { 0x06122a, CODE_FOR_floatdisf2 },
  { 0x06122b, CODE_FOR_floatdidf2 },
  { 0x06122c, CODE_FOR_floatdixf2 },
  { 0x06495d, CODE_FOR_floatv4siv4sf2 },
  { 0x064960, CODE_FOR_floatv4siv4df2 },
  { 0x064a5e, CODE_FOR_floatv2div2df2 },
  { 0x064e5f, CODE_FOR_floatv8siv8sf2 },
  { 0x064e63, CODE_FOR_floatv8siv8df2 },
  { 0x064f5d, CODE_FOR_floatv4div4sf2 },
  { 0x064f60, CODE_FOR_floatv4div4df2 },
  { 0x065362, CODE_FOR_floatv16siv16sf2 },
  { 0x06545f, CODE_FOR_floatv8div8sf2 },
  { 0x065463, CODE_FOR_floatv8div8df2 },
  { 0x070f2a, CODE_FOR_floatunsqisf2 },
  { 0x070f2b, CODE_FOR_floatunsqidf2 },
  { 0x07102a, CODE_FOR_floatunshisf2 },
  { 0x07102b, CODE_FOR_floatunshidf2 },
  { 0x07112a, CODE_FOR_floatunssisf2 },
  { 0x07112b, CODE_FOR_floatunssidf2 },
  { 0x07112c, CODE_FOR_floatunssixf2 },
  { 0x07122a, CODE_FOR_floatunsdisf2 },
  { 0x07122b, CODE_FOR_floatunsdidf2 },
  { 0x07495d, CODE_FOR_floatunsv4siv4sf2 },
  { 0x074e5f, CODE_FOR_floatunsv8siv8sf2 },
  { 0x075362, CODE_FOR_floatunsv16siv16sf2 },
  { 0x082a11, CODE_FOR_lrintsfsi2 },
  { 0x082a12, CODE_FOR_lrintsfdi2 },
  { 0x082b11, CODE_FOR_lrintdfsi2 },
  { 0x082b12, CODE_FOR_lrintdfdi2 },
  { 0x082c10, CODE_FOR_lrintxfhi2 },
  { 0x082c11, CODE_FOR_lrintxfsi2 },
  { 0x082c12, CODE_FOR_lrintxfdi2 },
  { 0x092a10, CODE_FOR_lroundsfhi2 },
  { 0x092a11, CODE_FOR_lroundsfsi2 },
  { 0x092a12, CODE_FOR_lroundsfdi2 },
  { 0x092b10, CODE_FOR_lrounddfhi2 },
  { 0x092b11, CODE_FOR_lrounddfsi2 },
  { 0x092b12, CODE_FOR_lrounddfdi2 },
  { 0x092c10, CODE_FOR_lroundxfhi2 },
  { 0x092c11, CODE_FOR_lroundxfsi2 },
  { 0x092c12, CODE_FOR_lroundxfdi2 },
  { 0x0a2a11, CODE_FOR_lfloorsfsi2 },
  { 0x0a2a12, CODE_FOR_lfloorsfdi2 },
  { 0x0a2b11, CODE_FOR_lfloordfsi2 },
  { 0x0a2b12, CODE_FOR_lfloordfdi2 },
  { 0x0a2c10, CODE_FOR_lfloorxfhi2 },
  { 0x0a2c11, CODE_FOR_lfloorxfsi2 },
  { 0x0a2c12, CODE_FOR_lfloorxfdi2 },
  { 0x0b2a11, CODE_FOR_lceilsfsi2 },
  { 0x0b2a12, CODE_FOR_lceilsfdi2 },
  { 0x0b2b11, CODE_FOR_lceildfsi2 },
  { 0x0b2b12, CODE_FOR_lceildfdi2 },
  { 0x0b2c10, CODE_FOR_lceilxfhi2 },
  { 0x0b2c11, CODE_FOR_lceilxfsi2 },
  { 0x0b2c12, CODE_FOR_lceilxfdi2 },
  { 0x102a10, CODE_FOR_fix_truncsfhi2 },
  { 0x102a11, CODE_FOR_fix_truncsfsi2 },
  { 0x102a12, CODE_FOR_fix_truncsfdi2 },
  { 0x102b10, CODE_FOR_fix_truncdfhi2 },
  { 0x102b11, CODE_FOR_fix_truncdfsi2 },
  { 0x102b12, CODE_FOR_fix_truncdfdi2 },
  { 0x102c10, CODE_FOR_fix_truncxfhi2 },
  { 0x102c11, CODE_FOR_fix_truncxfsi2 },
  { 0x102c12, CODE_FOR_fix_truncxfdi2 },
  { 0x105c4a, CODE_FOR_fix_truncv2sfv2di2 },
  { 0x105d49, CODE_FOR_fix_truncv4sfv4si2 },
  { 0x105d4f, CODE_FOR_fix_truncv4sfv4di2 },
  { 0x105e4a, CODE_FOR_fix_truncv2dfv2di2 },
  { 0x105f4e, CODE_FOR_fix_truncv8sfv8si2 },
  { 0x105f54, CODE_FOR_fix_truncv8sfv8di2 },
  { 0x106049, CODE_FOR_fix_truncv4dfv4si2 },
  { 0x10604f, CODE_FOR_fix_truncv4dfv4di2 },
  { 0x106253, CODE_FOR_fix_truncv16sfv16si2 },
  { 0x10634e, CODE_FOR_fix_truncv8dfv8si2 },
  { 0x106354, CODE_FOR_fix_truncv8dfv8di2 },
  { 0x112a10, CODE_FOR_fixuns_truncsfhi2 },
  { 0x112a11, CODE_FOR_fixuns_truncsfsi2 },
  { 0x112b10, CODE_FOR_fixuns_truncdfhi2 },
  { 0x112b11, CODE_FOR_fixuns_truncdfsi2 },
  { 0x115d49, CODE_FOR_fixuns_truncv4sfv4si2 },
  { 0x115f4e, CODE_FOR_fixuns_truncv8sfv8si2 },
  { 0x116253, CODE_FOR_fixuns_truncv16sfv16si2 },
  { 0x120f10, CODE_FOR_mulqihi3 },
  { 0x121112, CODE_FOR_mulsidi3 },
  { 0x121213, CODE_FOR_mulditi3 },
  { 0x130f10, CODE_FOR_umulqihi3 },
  { 0x131112, CODE_FOR_umulsidi3 },
  { 0x131213, CODE_FOR_umulditi3 },
  { 0x214747, CODE_FOR_vcondv16qiv16qi },
  { 0x214748, CODE_FOR_vcondv8hiv16qi },
  { 0x214749, CODE_FOR_vcondv4siv16qi },
  { 0x21474a, CODE_FOR_vcondv2div16qi },
  { 0x21475d, CODE_FOR_vcondv4sfv16qi },
  { 0x21475e, CODE_FOR_vcondv2dfv16qi },
  { 0x214847, CODE_FOR_vcondv16qiv8hi },
  { 0x214848, CODE_FOR_vcondv8hiv8hi },
  { 0x214849, CODE_FOR_vcondv4siv8hi },
  { 0x21484a, CODE_FOR_vcondv2div8hi },
  { 0x21485d, CODE_FOR_vcondv4sfv8hi },
  { 0x21485e, CODE_FOR_vcondv2dfv8hi },
  { 0x214947, CODE_FOR_vcondv16qiv4si },
  { 0x214948, CODE_FOR_vcondv8hiv4si },
  { 0x214949, CODE_FOR_vcondv4siv4si },
  { 0x21494a, CODE_FOR_vcondv2div4si },
  { 0x21495d, CODE_FOR_vcondv4sfv4si },
  { 0x21495e, CODE_FOR_vcondv2dfv4si },
  { 0x214a4a, CODE_FOR_vcondv2div2di },
  { 0x214a5e, CODE_FOR_vcondv2dfv2di },
  { 0x214c4c, CODE_FOR_vcondv32qiv32qi },
  { 0x214c4d, CODE_FOR_vcondv16hiv32qi },
  { 0x214c4e, CODE_FOR_vcondv8siv32qi },
  { 0x214c4f, CODE_FOR_vcondv4div32qi },
  { 0x214c5f, CODE_FOR_vcondv8sfv32qi },
  { 0x214c60, CODE_FOR_vcondv4dfv32qi },
  { 0x214d4c, CODE_FOR_vcondv32qiv16hi },
  { 0x214d4d, CODE_FOR_vcondv16hiv16hi },
  { 0x214d4e, CODE_FOR_vcondv8siv16hi },
  { 0x214d4f, CODE_FOR_vcondv4div16hi },
  { 0x214d5f, CODE_FOR_vcondv8sfv16hi },
  { 0x214d60, CODE_FOR_vcondv4dfv16hi },
  { 0x214e4c, CODE_FOR_vcondv32qiv8si },
  { 0x214e4d, CODE_FOR_vcondv16hiv8si },
  { 0x214e4e, CODE_FOR_vcondv8siv8si },
  { 0x214e4f, CODE_FOR_vcondv4div8si },
  { 0x214e5f, CODE_FOR_vcondv8sfv8si },
  { 0x214e60, CODE_FOR_vcondv4dfv8si },
  { 0x214f4c, CODE_FOR_vcondv32qiv4di },
  { 0x214f4d, CODE_FOR_vcondv16hiv4di },
  { 0x214f4e, CODE_FOR_vcondv8siv4di },
  { 0x214f4f, CODE_FOR_vcondv4div4di },
  { 0x214f5f, CODE_FOR_vcondv8sfv4di },
  { 0x214f60, CODE_FOR_vcondv4dfv4di },
  { 0x215151, CODE_FOR_vcondv64qiv64qi },
  { 0x215152, CODE_FOR_vcondv32hiv64qi },
  { 0x215153, CODE_FOR_vcondv16siv64qi },
  { 0x215154, CODE_FOR_vcondv8div64qi },
  { 0x215162, CODE_FOR_vcondv16sfv64qi },
  { 0x215163, CODE_FOR_vcondv8dfv64qi },
  { 0x215251, CODE_FOR_vcondv64qiv32hi },
  { 0x215252, CODE_FOR_vcondv32hiv32hi },
  { 0x215253, CODE_FOR_vcondv16siv32hi },
  { 0x215254, CODE_FOR_vcondv8div32hi },
  { 0x215262, CODE_FOR_vcondv16sfv32hi },
  { 0x215263, CODE_FOR_vcondv8dfv32hi },
  { 0x215351, CODE_FOR_vcondv64qiv16si },
  { 0x215352, CODE_FOR_vcondv32hiv16si },
  { 0x215353, CODE_FOR_vcondv16siv16si },
  { 0x215354, CODE_FOR_vcondv8div16si },
  { 0x215362, CODE_FOR_vcondv16sfv16si },
  { 0x215363, CODE_FOR_vcondv8dfv16si },
  { 0x215451, CODE_FOR_vcondv64qiv8di },
  { 0x215452, CODE_FOR_vcondv32hiv8di },
  { 0x215453, CODE_FOR_vcondv16siv8di },
  { 0x215454, CODE_FOR_vcondv8div8di },
  { 0x215462, CODE_FOR_vcondv16sfv8di },
  { 0x215463, CODE_FOR_vcondv8dfv8di },
  { 0x215d47, CODE_FOR_vcondv16qiv4sf },
  { 0x215d48, CODE_FOR_vcondv8hiv4sf },
  { 0x215d49, CODE_FOR_vcondv4siv4sf },
  { 0x215d4a, CODE_FOR_vcondv2div4sf },
  { 0x215d5d, CODE_FOR_vcondv4sfv4sf },
  { 0x215d5e, CODE_FOR_vcondv2dfv4sf },
  { 0x215e47, CODE_FOR_vcondv16qiv2df },
  { 0x215e48, CODE_FOR_vcondv8hiv2df },
  { 0x215e49, CODE_FOR_vcondv4siv2df },
  { 0x215e4a, CODE_FOR_vcondv2div2df },
  { 0x215e5d, CODE_FOR_vcondv4sfv2df },
  { 0x215e5e, CODE_FOR_vcondv2dfv2df },
  { 0x215f4c, CODE_FOR_vcondv32qiv8sf },
  { 0x215f4d, CODE_FOR_vcondv16hiv8sf },
  { 0x215f4e, CODE_FOR_vcondv8siv8sf },
  { 0x215f4f, CODE_FOR_vcondv4div8sf },
  { 0x215f5f, CODE_FOR_vcondv8sfv8sf },
  { 0x215f60, CODE_FOR_vcondv4dfv8sf },
  { 0x21604c, CODE_FOR_vcondv32qiv4df },
  { 0x21604d, CODE_FOR_vcondv16hiv4df },
  { 0x21604e, CODE_FOR_vcondv8siv4df },
  { 0x21604f, CODE_FOR_vcondv4div4df },
  { 0x21605f, CODE_FOR_vcondv8sfv4df },
  { 0x216060, CODE_FOR_vcondv4dfv4df },
  { 0x216251, CODE_FOR_vcondv64qiv16sf },
  { 0x216252, CODE_FOR_vcondv32hiv16sf },
  { 0x216253, CODE_FOR_vcondv16siv16sf },
  { 0x216254, CODE_FOR_vcondv8div16sf },
  { 0x216262, CODE_FOR_vcondv16sfv16sf },
  { 0x216263, CODE_FOR_vcondv8dfv16sf },
  { 0x216351, CODE_FOR_vcondv64qiv8df },
  { 0x216352, CODE_FOR_vcondv32hiv8df },
  { 0x216353, CODE_FOR_vcondv16siv8df },
  { 0x216354, CODE_FOR_vcondv8div8df },
  { 0x216362, CODE_FOR_vcondv16sfv8df },
  { 0x216363, CODE_FOR_vcondv8dfv8df },
  { 0x224747, CODE_FOR_vconduv16qiv16qi },
  { 0x224748, CODE_FOR_vconduv8hiv16qi },
  { 0x224749, CODE_FOR_vconduv4siv16qi },
  { 0x22474a, CODE_FOR_vconduv2div16qi },
  { 0x22475d, CODE_FOR_vconduv4sfv16qi },
  { 0x22475e, CODE_FOR_vconduv2dfv16qi },
  { 0x224847, CODE_FOR_vconduv16qiv8hi },
  { 0x224848, CODE_FOR_vconduv8hiv8hi },
  { 0x224849, CODE_FOR_vconduv4siv8hi },
  { 0x22484a, CODE_FOR_vconduv2div8hi },
  { 0x22485d, CODE_FOR_vconduv4sfv8hi },
  { 0x22485e, CODE_FOR_vconduv2dfv8hi },
  { 0x224947, CODE_FOR_vconduv16qiv4si },
  { 0x224948, CODE_FOR_vconduv8hiv4si },
  { 0x224949, CODE_FOR_vconduv4siv4si },
  { 0x22494a, CODE_FOR_vconduv2div4si },
  { 0x22495d, CODE_FOR_vconduv4sfv4si },
  { 0x22495e, CODE_FOR_vconduv2dfv4si },
  { 0x224a4a, CODE_FOR_vconduv2div2di },
  { 0x224a5e, CODE_FOR_vconduv2dfv2di },
  { 0x224c4c, CODE_FOR_vconduv32qiv32qi },
  { 0x224c4d, CODE_FOR_vconduv16hiv32qi },
  { 0x224c4e, CODE_FOR_vconduv8siv32qi },
  { 0x224c4f, CODE_FOR_vconduv4div32qi },
  { 0x224c5f, CODE_FOR_vconduv8sfv32qi },
  { 0x224c60, CODE_FOR_vconduv4dfv32qi },
  { 0x224d4c, CODE_FOR_vconduv32qiv16hi },
  { 0x224d4d, CODE_FOR_vconduv16hiv16hi },
  { 0x224d4e, CODE_FOR_vconduv8siv16hi },
  { 0x224d4f, CODE_FOR_vconduv4div16hi },
  { 0x224d5f, CODE_FOR_vconduv8sfv16hi },
  { 0x224d60, CODE_FOR_vconduv4dfv16hi },
  { 0x224e4c, CODE_FOR_vconduv32qiv8si },
  { 0x224e4d, CODE_FOR_vconduv16hiv8si },
  { 0x224e4e, CODE_FOR_vconduv8siv8si },
  { 0x224e4f, CODE_FOR_vconduv4div8si },
  { 0x224e5f, CODE_FOR_vconduv8sfv8si },
  { 0x224e60, CODE_FOR_vconduv4dfv8si },
  { 0x224f4c, CODE_FOR_vconduv32qiv4di },
  { 0x224f4d, CODE_FOR_vconduv16hiv4di },
  { 0x224f4e, CODE_FOR_vconduv8siv4di },
  { 0x224f4f, CODE_FOR_vconduv4div4di },
  { 0x224f5f, CODE_FOR_vconduv8sfv4di },
  { 0x224f60, CODE_FOR_vconduv4dfv4di },
  { 0x225151, CODE_FOR_vconduv64qiv64qi },
  { 0x225152, CODE_FOR_vconduv32hiv64qi },
  { 0x225153, CODE_FOR_vconduv16siv64qi },
  { 0x225154, CODE_FOR_vconduv8div64qi },
  { 0x225162, CODE_FOR_vconduv16sfv64qi },
  { 0x225163, CODE_FOR_vconduv8dfv64qi },
  { 0x225251, CODE_FOR_vconduv64qiv32hi },
  { 0x225252, CODE_FOR_vconduv32hiv32hi },
  { 0x225253, CODE_FOR_vconduv16siv32hi },
  { 0x225254, CODE_FOR_vconduv8div32hi },
  { 0x225262, CODE_FOR_vconduv16sfv32hi },
  { 0x225263, CODE_FOR_vconduv8dfv32hi },
  { 0x225351, CODE_FOR_vconduv64qiv16si },
  { 0x225352, CODE_FOR_vconduv32hiv16si },
  { 0x225353, CODE_FOR_vconduv16siv16si },
  { 0x225354, CODE_FOR_vconduv8div16si },
  { 0x225362, CODE_FOR_vconduv16sfv16si },
  { 0x225363, CODE_FOR_vconduv8dfv16si },
  { 0x225451, CODE_FOR_vconduv64qiv8di },
  { 0x225452, CODE_FOR_vconduv32hiv8di },
  { 0x225453, CODE_FOR_vconduv16siv8di },
  { 0x225454, CODE_FOR_vconduv8div8di },
  { 0x225462, CODE_FOR_vconduv16sfv8di },
  { 0x225463, CODE_FOR_vconduv8dfv8di },
  { 0x234a4a, CODE_FOR_vcondeqv2div2di },
  { 0x234a5e, CODE_FOR_vcondeqv2dfv2di },
  { 0x240f48, CODE_FOR_vcond_mask_v8hiqi },
  { 0x240f49, CODE_FOR_vcond_mask_v4siqi },
  { 0x240f4a, CODE_FOR_vcond_mask_v2diqi },
  { 0x240f4e, CODE_FOR_vcond_mask_v8siqi },
  { 0x240f4f, CODE_FOR_vcond_mask_v4diqi },
  { 0x240f54, CODE_FOR_vcond_mask_v8diqi },
  { 0x240f5d, CODE_FOR_vcond_mask_v4sfqi },
  { 0x240f5e, CODE_FOR_vcond_mask_v2dfqi },
  { 0x240f5f, CODE_FOR_vcond_mask_v8sfqi },
  { 0x240f60, CODE_FOR_vcond_mask_v4dfqi },
  { 0x240f63, CODE_FOR_vcond_mask_v8dfqi },
  { 0x241047, CODE_FOR_vcond_mask_v16qihi },
  { 0x24104d, CODE_FOR_vcond_mask_v16hihi },
  { 0x241053, CODE_FOR_vcond_mask_v16sihi },
  { 0x241062, CODE_FOR_vcond_mask_v16sfhi },
  { 0x24114c, CODE_FOR_vcond_mask_v32qisi },
  { 0x241152, CODE_FOR_vcond_mask_v32hisi },
  { 0x241251, CODE_FOR_vcond_mask_v64qidi },
  { 0x244747, CODE_FOR_vcond_mask_v16qiv16qi },
  { 0x244848, CODE_FOR_vcond_mask_v8hiv8hi },
  { 0x244949, CODE_FOR_vcond_mask_v4siv4si },
  { 0x24495d, CODE_FOR_vcond_mask_v4sfv4si },
  { 0x244a4a, CODE_FOR_vcond_mask_v2div2di },
  { 0x244a5e, CODE_FOR_vcond_mask_v2dfv2di },
  { 0x244c4c, CODE_FOR_vcond_mask_v32qiv32qi },
  { 0x244d4d, CODE_FOR_vcond_mask_v16hiv16hi },
  { 0x244e4e, CODE_FOR_vcond_mask_v8siv8si },
  { 0x244e5f, CODE_FOR_vcond_mask_v8sfv8si },
  { 0x244f4f, CODE_FOR_vcond_mask_v4div4di },
  { 0x244f60, CODE_FOR_vcond_mask_v4dfv4di },
  { 0x250f48, CODE_FOR_vec_cmpv8hiqi },
  { 0x250f49, CODE_FOR_vec_cmpv4siqi },
  { 0x250f4a, CODE_FOR_vec_cmpv2diqi },
  { 0x250f4e, CODE_FOR_vec_cmpv8siqi },
  { 0x250f4f, CODE_FOR_vec_cmpv4diqi },
  { 0x250f54, CODE_FOR_vec_cmpv8diqi },
  { 0x250f5d, CODE_FOR_vec_cmpv4sfqi },
  { 0x250f5e, CODE_FOR_vec_cmpv2dfqi },
  { 0x250f5f, CODE_FOR_vec_cmpv8sfqi },
  { 0x250f60, CODE_FOR_vec_cmpv4dfqi },
  { 0x250f63, CODE_FOR_vec_cmpv8dfqi },
  { 0x251047, CODE_FOR_vec_cmpv16qihi },
  { 0x25104d, CODE_FOR_vec_cmpv16hihi },
  { 0x251053, CODE_FOR_vec_cmpv16sihi },
  { 0x251062, CODE_FOR_vec_cmpv16sfhi },
  { 0x25114c, CODE_FOR_vec_cmpv32qisi },
  { 0x251152, CODE_FOR_vec_cmpv32hisi },
  { 0x251251, CODE_FOR_vec_cmpv64qidi },
  { 0x254747, CODE_FOR_vec_cmpv16qiv16qi },
  { 0x254848, CODE_FOR_vec_cmpv8hiv8hi },
  { 0x254949, CODE_FOR_vec_cmpv4siv4si },
  { 0x25495d, CODE_FOR_vec_cmpv4sfv4si },
  { 0x254a4a, CODE_FOR_vec_cmpv2div2di },
  { 0x254a5e, CODE_FOR_vec_cmpv2dfv2di },
  { 0x254c4c, CODE_FOR_vec_cmpv32qiv32qi },
  { 0x254d4d, CODE_FOR_vec_cmpv16hiv16hi },
  { 0x254e4e, CODE_FOR_vec_cmpv8siv8si },
  { 0x254e5f, CODE_FOR_vec_cmpv8sfv8si },
  { 0x254f4f, CODE_FOR_vec_cmpv4div4di },
  { 0x254f60, CODE_FOR_vec_cmpv4dfv4di },
  { 0x260f48, CODE_FOR_vec_cmpuv8hiqi },
  { 0x260f49, CODE_FOR_vec_cmpuv4siqi },
  { 0x260f4a, CODE_FOR_vec_cmpuv2diqi },
  { 0x260f4e, CODE_FOR_vec_cmpuv8siqi },
  { 0x260f4f, CODE_FOR_vec_cmpuv4diqi },
  { 0x260f54, CODE_FOR_vec_cmpuv8diqi },
  { 0x261047, CODE_FOR_vec_cmpuv16qihi },
  { 0x26104d, CODE_FOR_vec_cmpuv16hihi },
  { 0x261053, CODE_FOR_vec_cmpuv16sihi },
  { 0x26114c, CODE_FOR_vec_cmpuv32qisi },
  { 0x261152, CODE_FOR_vec_cmpuv32hisi },
  { 0x261251, CODE_FOR_vec_cmpuv64qidi },
  { 0x264747, CODE_FOR_vec_cmpuv16qiv16qi },
  { 0x264848, CODE_FOR_vec_cmpuv8hiv8hi },
  { 0x264949, CODE_FOR_vec_cmpuv4siv4si },
  { 0x264a4a, CODE_FOR_vec_cmpuv2div2di },
  { 0x264c4c, CODE_FOR_vec_cmpuv32qiv32qi },
  { 0x264d4d, CODE_FOR_vec_cmpuv16hiv16hi },
  { 0x264e4e, CODE_FOR_vec_cmpuv8siv8si },
  { 0x264f4f, CODE_FOR_vec_cmpuv4div4di },
  { 0x274a4a, CODE_FOR_vec_cmpeqv2div2di },
  { 0x280f48, CODE_FOR_maskloadv8hiqi },
  { 0x280f49, CODE_FOR_maskloadv4siqi },
  { 0x280f4a, CODE_FOR_maskloadv2diqi },
  { 0x280f4e, CODE_FOR_maskloadv8siqi },
  { 0x280f4f, CODE_FOR_maskloadv4diqi },
  { 0x280f54, CODE_FOR_maskloadv8diqi },
  { 0x280f5d, CODE_FOR_maskloadv4sfqi },
  { 0x280f5e, CODE_FOR_maskloadv2dfqi },
  { 0x280f5f, CODE_FOR_maskloadv8sfqi },
  { 0x280f60, CODE_FOR_maskloadv4dfqi },
  { 0x280f63, CODE_FOR_maskloadv8dfqi },
  { 0x281047, CODE_FOR_maskloadv16qihi },
  { 0x28104d, CODE_FOR_maskloadv16hihi },
  { 0x281053, CODE_FOR_maskloadv16sihi },
  { 0x281062, CODE_FOR_maskloadv16sfhi },
  { 0x28114c, CODE_FOR_maskloadv32qisi },
  { 0x281152, CODE_FOR_maskloadv32hisi },
  { 0x281251, CODE_FOR_maskloadv64qidi },
  { 0x284949, CODE_FOR_maskloadv4siv4si },
  { 0x28495d, CODE_FOR_maskloadv4sfv4si },
  { 0x284a4a, CODE_FOR_maskloadv2div2di },
  { 0x284a5e, CODE_FOR_maskloadv2dfv2di },
  { 0x284e4e, CODE_FOR_maskloadv8siv8si },
  { 0x284e5f, CODE_FOR_maskloadv8sfv8si },
  { 0x284f4f, CODE_FOR_maskloadv4div4di },
  { 0x284f60, CODE_FOR_maskloadv4dfv4di },
  { 0x290f48, CODE_FOR_maskstorev8hiqi },
  { 0x290f49, CODE_FOR_maskstorev4siqi },
  { 0x290f4a, CODE_FOR_maskstorev2diqi },
  { 0x290f4e, CODE_FOR_maskstorev8siqi },
  { 0x290f4f, CODE_FOR_maskstorev4diqi },
  { 0x290f54, CODE_FOR_maskstorev8diqi },
  { 0x290f5d, CODE_FOR_maskstorev4sfqi },
  { 0x290f5e, CODE_FOR_maskstorev2dfqi },
  { 0x290f5f, CODE_FOR_maskstorev8sfqi },
  { 0x290f60, CODE_FOR_maskstorev4dfqi },
  { 0x290f63, CODE_FOR_maskstorev8dfqi },
  { 0x291047, CODE_FOR_maskstorev16qihi },
  { 0x29104d, CODE_FOR_maskstorev16hihi },
  { 0x291053, CODE_FOR_maskstorev16sihi },
  { 0x291062, CODE_FOR_maskstorev16sfhi },
  { 0x29114c, CODE_FOR_maskstorev32qisi },
  { 0x291152, CODE_FOR_maskstorev32hisi },
  { 0x291251, CODE_FOR_maskstorev64qidi },
  { 0x294949, CODE_FOR_maskstorev4siv4si },
  { 0x29495d, CODE_FOR_maskstorev4sfv4si },
  { 0x294a4a, CODE_FOR_maskstorev2div2di },
  { 0x294a5e, CODE_FOR_maskstorev2dfv2di },
  { 0x294e4e, CODE_FOR_maskstorev8siv8si },
  { 0x294e5f, CODE_FOR_maskstorev8sfv8si },
  { 0x294f4f, CODE_FOR_maskstorev4div4di },
  { 0x294f60, CODE_FOR_maskstorev4dfv4di },
  { 0x2a0f40, CODE_FOR_vec_extractv8qiqi },
  { 0x2a0f47, CODE_FOR_vec_extractv16qiqi },
  { 0x2a0f4c, CODE_FOR_vec_extractv32qiqi },
  { 0x2a0f51, CODE_FOR_vec_extractv64qiqi },
  { 0x2a1041, CODE_FOR_vec_extractv4hihi },
  { 0x2a1048, CODE_FOR_vec_extractv8hihi },
  { 0x2a104d, CODE_FOR_vec_extractv16hihi },
  { 0x2a1052, CODE_FOR_vec_extractv32hihi },
  { 0x2a1142, CODE_FOR_vec_extractv2sisi },
  { 0x2a1149, CODE_FOR_vec_extractv4sisi },
  { 0x2a114e, CODE_FOR_vec_extractv8sisi },
  { 0x2a1153, CODE_FOR_vec_extractv16sisi },
  { 0x2a124a, CODE_FOR_vec_extractv2didi },
  { 0x2a124f, CODE_FOR_vec_extractv4didi },
  { 0x2a1254, CODE_FOR_vec_extractv8didi },
  { 0x2a1350, CODE_FOR_vec_extractv2titi },
  { 0x2a1355, CODE_FOR_vec_extractv4titi },
  { 0x2a2a5c, CODE_FOR_vec_extractv2sfsf },
  { 0x2a2a5d, CODE_FOR_vec_extractv4sfsf },
  { 0x2a2a5f, CODE_FOR_vec_extractv8sfsf },
  { 0x2a2a62, CODE_FOR_vec_extractv16sfsf },
  { 0x2a2b5e, CODE_FOR_vec_extractv2dfdf },
  { 0x2a2b60, CODE_FOR_vec_extractv4dfdf },
  { 0x2a2b63, CODE_FOR_vec_extractv8dfdf },
  { 0x2a4c51, CODE_FOR_vec_extractv64qiv32qi },
  { 0x2a4d52, CODE_FOR_vec_extractv32hiv16hi },
  { 0x2a4e53, CODE_FOR_vec_extractv16siv8si },
  { 0x2a4f54, CODE_FOR_vec_extractv8div4di },
  { 0x2a5f62, CODE_FOR_vec_extractv16sfv8sf },
  { 0x2a6063, CODE_FOR_vec_extractv8dfv4df },
  { 0x2b0f40, CODE_FOR_vec_initv8qiqi },
  { 0x2b0f47, CODE_FOR_vec_initv16qiqi },
  { 0x2b0f4c, CODE_FOR_vec_initv32qiqi },
  { 0x2b0f51, CODE_FOR_vec_initv64qiqi },
  { 0x2b1041, CODE_FOR_vec_initv4hihi },
  { 0x2b1048, CODE_FOR_vec_initv8hihi },
  { 0x2b104d, CODE_FOR_vec_initv16hihi },
  { 0x2b1052, CODE_FOR_vec_initv32hihi },
  { 0x2b1142, CODE_FOR_vec_initv2sisi },
  { 0x2b1149, CODE_FOR_vec_initv4sisi },
  { 0x2b114e, CODE_FOR_vec_initv8sisi },
  { 0x2b1153, CODE_FOR_vec_initv16sisi },
  { 0x2b124a, CODE_FOR_vec_initv2didi },
  { 0x2b124f, CODE_FOR_vec_initv4didi },
  { 0x2b1254, CODE_FOR_vec_initv8didi },
  { 0x2b1350, CODE_FOR_vec_initv2titi },
  { 0x2b1355, CODE_FOR_vec_initv4titi },
  { 0x2b2a5c, CODE_FOR_vec_initv2sfsf },
  { 0x2b2a5d, CODE_FOR_vec_initv4sfsf },
  { 0x2b2a5f, CODE_FOR_vec_initv8sfsf },
  { 0x2b2a62, CODE_FOR_vec_initv16sfsf },
  { 0x2b2b5e, CODE_FOR_vec_initv2dfdf },
  { 0x2b2b60, CODE_FOR_vec_initv4dfdf },
  { 0x2b2b63, CODE_FOR_vec_initv8dfdf },
  { 0x2b4047, CODE_FOR_vec_initv16qiv8qi },
  { 0x2b4148, CODE_FOR_vec_initv8hiv4hi },
  { 0x2b4249, CODE_FOR_vec_initv4siv2si },
  { 0x2b474c, CODE_FOR_vec_initv32qiv16qi },
  { 0x2b484d, CODE_FOR_vec_initv16hiv8hi },
  { 0x2b494e, CODE_FOR_vec_initv8siv4si },
  { 0x2b4a4f, CODE_FOR_vec_initv4div2di },
  { 0x2b4c51, CODE_FOR_vec_initv64qiv32qi },
  { 0x2b4d52, CODE_FOR_vec_initv32hiv16hi },
  { 0x2b4e53, CODE_FOR_vec_initv16siv8si },
  { 0x2b4f54, CODE_FOR_vec_initv8div4di },
  { 0x2b5055, CODE_FOR_vec_initv4tiv2ti },
  { 0x2b5c5d, CODE_FOR_vec_initv4sfv2sf },
  { 0x2b5d5f, CODE_FOR_vec_initv8sfv4sf },
  { 0x2b5e60, CODE_FOR_vec_initv4dfv2df },
  { 0x2b5f62, CODE_FOR_vec_initv16sfv8sf },
  { 0x2b6063, CODE_FOR_vec_initv8dfv4df },
  { 0x2d000f, CODE_FOR_addqi3 },
  { 0x2d0010, CODE_FOR_addhi3 },
  { 0x2d0011, CODE_FOR_addsi3 },
  { 0x2d0012, CODE_FOR_adddi3 },
  { 0x2d0013, CODE_FOR_addti3 },
  { 0x2d002a, CODE_FOR_addsf3 },
  { 0x2d002b, CODE_FOR_adddf3 },
  { 0x2d002c, CODE_FOR_addxf3 },
  { 0x2d0047, CODE_FOR_addv16qi3 },
  { 0x2d0048, CODE_FOR_addv8hi3 },
  { 0x2d0049, CODE_FOR_addv4si3 },
  { 0x2d004a, CODE_FOR_addv2di3 },
  { 0x2d004c, CODE_FOR_addv32qi3 },
  { 0x2d004d, CODE_FOR_addv16hi3 },
  { 0x2d004e, CODE_FOR_addv8si3 },
  { 0x2d004f, CODE_FOR_addv4di3 },
  { 0x2d0051, CODE_FOR_addv64qi3 },
  { 0x2d0052, CODE_FOR_addv32hi3 },
  { 0x2d0053, CODE_FOR_addv16si3 },
  { 0x2d0054, CODE_FOR_addv8di3 },
  { 0x2d005d, CODE_FOR_addv4sf3 },
  { 0x2d005e, CODE_FOR_addv2df3 },
  { 0x2d005f, CODE_FOR_addv8sf3 },
  { 0x2d0060, CODE_FOR_addv4df3 },
  { 0x2d0062, CODE_FOR_addv16sf3 },
  { 0x2d0063, CODE_FOR_addv8df3 },
  { 0x31000f, CODE_FOR_subqi3 },
  { 0x310010, CODE_FOR_subhi3 },
  { 0x310011, CODE_FOR_subsi3 },
  { 0x310012, CODE_FOR_subdi3 },
  { 0x310013, CODE_FOR_subti3 },
  { 0x31002a, CODE_FOR_subsf3 },
  { 0x31002b, CODE_FOR_subdf3 },
  { 0x31002c, CODE_FOR_subxf3 },
  { 0x310047, CODE_FOR_subv16qi3 },
  { 0x310048, CODE_FOR_subv8hi3 },
  { 0x310049, CODE_FOR_subv4si3 },
  { 0x31004a, CODE_FOR_subv2di3 },
  { 0x31004c, CODE_FOR_subv32qi3 },
  { 0x31004d, CODE_FOR_subv16hi3 },
  { 0x31004e, CODE_FOR_subv8si3 },
  { 0x31004f, CODE_FOR_subv4di3 },
  { 0x310051, CODE_FOR_subv64qi3 },
  { 0x310052, CODE_FOR_subv32hi3 },
  { 0x310053, CODE_FOR_subv16si3 },
  { 0x310054, CODE_FOR_subv8di3 },
  { 0x31005d, CODE_FOR_subv4sf3 },
  { 0x31005e, CODE_FOR_subv2df3 },
  { 0x31005f, CODE_FOR_subv8sf3 },
  { 0x310060, CODE_FOR_subv4df3 },
  { 0x310062, CODE_FOR_subv16sf3 },
  { 0x310063, CODE_FOR_subv8df3 },
  { 0x35000f, CODE_FOR_mulqi3 },
  { 0x350010, CODE_FOR_mulhi3 },
  { 0x350011, CODE_FOR_mulsi3 },
  { 0x350012, CODE_FOR_muldi3 },
  { 0x35002a, CODE_FOR_mulsf3 },
  { 0x35002b, CODE_FOR_muldf3 },
  { 0x35002c, CODE_FOR_mulxf3 },
  { 0x350047, CODE_FOR_mulv16qi3 },
  { 0x350048, CODE_FOR_mulv8hi3 },
  { 0x350049, CODE_FOR_mulv4si3 },
  { 0x35004a, CODE_FOR_mulv2di3 },
  { 0x35004c, CODE_FOR_mulv32qi3 },
  { 0x35004d, CODE_FOR_mulv16hi3 },
  { 0x35004e, CODE_FOR_mulv8si3 },
  { 0x35004f, CODE_FOR_mulv4di3 },
  { 0x350051, CODE_FOR_mulv64qi3 },
  { 0x350052, CODE_FOR_mulv32hi3 },
  { 0x350053, CODE_FOR_mulv16si3 },
  { 0x350054, CODE_FOR_mulv8di3 },
  { 0x35005d, CODE_FOR_mulv4sf3 },
  { 0x35005e, CODE_FOR_mulv2df3 },
  { 0x35005f, CODE_FOR_mulv8sf3 },
  { 0x350060, CODE_FOR_mulv4df3 },
  { 0x350062, CODE_FOR_mulv16sf3 },
  { 0x350063, CODE_FOR_mulv8df3 },
  { 0x39002a, CODE_FOR_divsf3 },
  { 0x39002b, CODE_FOR_divdf3 },
  { 0x39002c, CODE_FOR_divxf3 },
  { 0x39005d, CODE_FOR_divv4sf3 },
  { 0x39005e, CODE_FOR_divv2df3 },
  { 0x39005f, CODE_FOR_divv8sf3 },
  { 0x390060, CODE_FOR_divv4df3 },
  { 0x390062, CODE_FOR_divv16sf3 },
  { 0x390063, CODE_FOR_divv8df3 },
  { 0x3e000f, CODE_FOR_divmodqi4 },
  { 0x3e0010, CODE_FOR_divmodhi4 },
  { 0x3e0011, CODE_FOR_divmodsi4 },
  { 0x3e0012, CODE_FOR_divmoddi4 },
  { 0x3f000f, CODE_FOR_udivmodqi4 },
  { 0x3f0010, CODE_FOR_udivmodhi4 },
  { 0x3f0011, CODE_FOR_udivmodsi4 },
  { 0x3f0012, CODE_FOR_udivmoddi4 },
  { 0x43000f, CODE_FOR_andqi3 },
  { 0x430010, CODE_FOR_andhi3 },
  { 0x430011, CODE_FOR_andsi3 },
  { 0x430012, CODE_FOR_anddi3 },
  { 0x43002d, CODE_FOR_andtf3 },
  { 0x430047, CODE_FOR_andv16qi3 },
  { 0x430048, CODE_FOR_andv8hi3 },
  { 0x430049, CODE_FOR_andv4si3 },
  { 0x43004a, CODE_FOR_andv2di3 },
  { 0x43004c, CODE_FOR_andv32qi3 },
  { 0x43004d, CODE_FOR_andv16hi3 },
  { 0x43004e, CODE_FOR_andv8si3 },
  { 0x43004f, CODE_FOR_andv4di3 },
  { 0x430051, CODE_FOR_andv64qi3 },
  { 0x430052, CODE_FOR_andv32hi3 },
  { 0x430053, CODE_FOR_andv16si3 },
  { 0x430054, CODE_FOR_andv8di3 },
  { 0x43005d, CODE_FOR_andv4sf3 },
  { 0x43005e, CODE_FOR_andv2df3 },
  { 0x43005f, CODE_FOR_andv8sf3 },
  { 0x430060, CODE_FOR_andv4df3 },
  { 0x430062, CODE_FOR_andv16sf3 },
  { 0x430063, CODE_FOR_andv8df3 },
  { 0x44000f, CODE_FOR_iorqi3 },
  { 0x440010, CODE_FOR_iorhi3 },
  { 0x440011, CODE_FOR_iorsi3 },
  { 0x440012, CODE_FOR_iordi3 },
  { 0x44002d, CODE_FOR_iortf3 },
  { 0x440047, CODE_FOR_iorv16qi3 },
  { 0x440048, CODE_FOR_iorv8hi3 },
  { 0x440049, CODE_FOR_iorv4si3 },
  { 0x44004a, CODE_FOR_iorv2di3 },
  { 0x44004c, CODE_FOR_iorv32qi3 },
  { 0x44004d, CODE_FOR_iorv16hi3 },
  { 0x44004e, CODE_FOR_iorv8si3 },
  { 0x44004f, CODE_FOR_iorv4di3 },
  { 0x440051, CODE_FOR_iorv64qi3 },
  { 0x440052, CODE_FOR_iorv32hi3 },
  { 0x440053, CODE_FOR_iorv16si3 },
  { 0x440054, CODE_FOR_iorv8di3 },
  { 0x44005d, CODE_FOR_iorv4sf3 },
  { 0x44005e, CODE_FOR_iorv2df3 },
  { 0x44005f, CODE_FOR_iorv8sf3 },
  { 0x440060, CODE_FOR_iorv4df3 },
  { 0x440062, CODE_FOR_iorv16sf3 },
  { 0x440063, CODE_FOR_iorv8df3 },
  { 0x45000f, CODE_FOR_xorqi3 },
  { 0x450010, CODE_FOR_xorhi3 },
  { 0x450011, CODE_FOR_xorsi3 },
  { 0x450012, CODE_FOR_xordi3 },
  { 0x45002d, CODE_FOR_xortf3 },
  { 0x450047, CODE_FOR_xorv16qi3 },
  { 0x450048, CODE_FOR_xorv8hi3 },
  { 0x450049, CODE_FOR_xorv4si3 },
  { 0x45004a, CODE_FOR_xorv2di3 },
  { 0x45004c, CODE_FOR_xorv32qi3 },
  { 0x45004d, CODE_FOR_xorv16hi3 },
  { 0x45004e, CODE_FOR_xorv8si3 },
  { 0x45004f, CODE_FOR_xorv4di3 },
  { 0x450051, CODE_FOR_xorv64qi3 },
  { 0x450052, CODE_FOR_xorv32hi3 },
  { 0x450053, CODE_FOR_xorv16si3 },
  { 0x450054, CODE_FOR_xorv8di3 },
  { 0x45005d, CODE_FOR_xorv4sf3 },
  { 0x45005e, CODE_FOR_xorv2df3 },
  { 0x45005f, CODE_FOR_xorv8sf3 },
  { 0x450060, CODE_FOR_xorv4df3 },
  { 0x450062, CODE_FOR_xorv16sf3 },
  { 0x450063, CODE_FOR_xorv8df3 },
  { 0x46000f, CODE_FOR_ashlqi3 },
  { 0x460010, CODE_FOR_ashlhi3 },
  { 0x460011, CODE_FOR_ashlsi3 },
  { 0x460012, CODE_FOR_ashldi3 },
  { 0x460013, CODE_FOR_ashlti3 },
  { 0x460047, CODE_FOR_ashlv16qi3 },
  { 0x460048, CODE_FOR_ashlv8hi3 },
  { 0x460049, CODE_FOR_ashlv4si3 },
  { 0x46004a, CODE_FOR_ashlv2di3 },
  { 0x46004c, CODE_FOR_ashlv32qi3 },
  { 0x46004d, CODE_FOR_ashlv16hi3 },
  { 0x46004e, CODE_FOR_ashlv8si3 },
  { 0x46004f, CODE_FOR_ashlv4di3 },
  { 0x460051, CODE_FOR_ashlv64qi3 },
  { 0x460052, CODE_FOR_ashlv32hi3 },
  { 0x460053, CODE_FOR_ashlv16si3 },
  { 0x460054, CODE_FOR_ashlv8di3 },
  { 0x49000f, CODE_FOR_ashrqi3 },
  { 0x490010, CODE_FOR_ashrhi3 },
  { 0x490011, CODE_FOR_ashrsi3 },
  { 0x490012, CODE_FOR_ashrdi3 },
  { 0x490013, CODE_FOR_ashrti3 },
  { 0x490047, CODE_FOR_ashrv16qi3 },
  { 0x490048, CODE_FOR_ashrv8hi3 },
  { 0x490049, CODE_FOR_ashrv4si3 },
  { 0x49004a, CODE_FOR_ashrv2di3 },
  { 0x49004c, CODE_FOR_ashrv32qi3 },
  { 0x49004d, CODE_FOR_ashrv16hi3 },
  { 0x49004e, CODE_FOR_ashrv8si3 },
  { 0x49004f, CODE_FOR_ashrv4di3 },
  { 0x490051, CODE_FOR_ashrv64qi3 },
  { 0x490052, CODE_FOR_ashrv32hi3 },
  { 0x490053, CODE_FOR_ashrv16si3 },
  { 0x490054, CODE_FOR_ashrv8di3 },
  { 0x4a000f, CODE_FOR_lshrqi3 },
  { 0x4a0010, CODE_FOR_lshrhi3 },
  { 0x4a0011, CODE_FOR_lshrsi3 },
  { 0x4a0012, CODE_FOR_lshrdi3 },
  { 0x4a0013, CODE_FOR_lshrti3 },
  { 0x4a0047, CODE_FOR_lshrv16qi3 },
  { 0x4a0048, CODE_FOR_lshrv8hi3 },
  { 0x4a0049, CODE_FOR_lshrv4si3 },
  { 0x4a004a, CODE_FOR_lshrv2di3 },
  { 0x4a004c, CODE_FOR_lshrv32qi3 },
  { 0x4a004d, CODE_FOR_lshrv16hi3 },
  { 0x4a004e, CODE_FOR_lshrv8si3 },
  { 0x4a004f, CODE_FOR_lshrv4di3 },
  { 0x4a0051, CODE_FOR_lshrv64qi3 },
  { 0x4a0052, CODE_FOR_lshrv32hi3 },
  { 0x4a0053, CODE_FOR_lshrv16si3 },
  { 0x4a0054, CODE_FOR_lshrv8di3 },
  { 0x4b000f, CODE_FOR_rotlqi3 },
  { 0x4b0010, CODE_FOR_rotlhi3 },
  { 0x4b0011, CODE_FOR_rotlsi3 },
  { 0x4b0012, CODE_FOR_rotldi3 },
  { 0x4b0013, CODE_FOR_rotlti3 },
  { 0x4b0047, CODE_FOR_rotlv16qi3 },
  { 0x4b0048, CODE_FOR_rotlv8hi3 },
  { 0x4b0049, CODE_FOR_rotlv4si3 },
  { 0x4b004a, CODE_FOR_rotlv2di3 },
  { 0x4c000f, CODE_FOR_rotrqi3 },
  { 0x4c0010, CODE_FOR_rotrhi3 },
  { 0x4c0011, CODE_FOR_rotrsi3 },
  { 0x4c0012, CODE_FOR_rotrdi3 },
  { 0x4c0013, CODE_FOR_rotrti3 },
  { 0x4c0047, CODE_FOR_rotrv16qi3 },
  { 0x4c0048, CODE_FOR_rotrv8hi3 },
  { 0x4c0049, CODE_FOR_rotrv4si3 },
  { 0x4c004a, CODE_FOR_rotrv2di3 },
  { 0x4d0047, CODE_FOR_vashlv16qi3 },
  { 0x4d0048, CODE_FOR_vashlv8hi3 },
  { 0x4d0049, CODE_FOR_vashlv4si3 },
  { 0x4d004a, CODE_FOR_vashlv2di3 },
  { 0x4d004e, CODE_FOR_vashlv8si3 },
  { 0x4d004f, CODE_FOR_vashlv4di3 },
  { 0x4d0053, CODE_FOR_vashlv16si3 },
  { 0x4d0054, CODE_FOR_vashlv8di3 },
  { 0x4e0047, CODE_FOR_vashrv16qi3 },
  { 0x4e0048, CODE_FOR_vashrv8hi3 },
  { 0x4e0049, CODE_FOR_vashrv4si3 },
  { 0x4e004a, CODE_FOR_vashrv2di3 },
  { 0x4e004e, CODE_FOR_vashrv8si3 },
  { 0x4e0053, CODE_FOR_vashrv16si3 },
  { 0x4f0047, CODE_FOR_vlshrv16qi3 },
  { 0x4f0048, CODE_FOR_vlshrv8hi3 },
  { 0x4f0049, CODE_FOR_vlshrv4si3 },
  { 0x4f004a, CODE_FOR_vlshrv2di3 },
  { 0x4f004e, CODE_FOR_vlshrv8si3 },
  { 0x4f004f, CODE_FOR_vlshrv4di3 },
  { 0x4f0053, CODE_FOR_vlshrv16si3 },
  { 0x4f0054, CODE_FOR_vlshrv8di3 },
  { 0x500047, CODE_FOR_vrotlv16qi3 },
  { 0x500048, CODE_FOR_vrotlv8hi3 },
  { 0x500049, CODE_FOR_vrotlv4si3 },
  { 0x50004a, CODE_FOR_vrotlv2di3 },
  { 0x510047, CODE_FOR_vrotrv16qi3 },
  { 0x510048, CODE_FOR_vrotrv8hi3 },
  { 0x510049, CODE_FOR_vrotrv4si3 },
  { 0x51004a, CODE_FOR_vrotrv2di3 },
  { 0x52002a, CODE_FOR_sminsf3 },
  { 0x52002b, CODE_FOR_smindf3 },
  { 0x520047, CODE_FOR_sminv16qi3 },
  { 0x520048, CODE_FOR_sminv8hi3 },
  { 0x520049, CODE_FOR_sminv4si3 },
  { 0x52004a, CODE_FOR_sminv2di3 },
  { 0x52004c, CODE_FOR_sminv32qi3 },
  { 0x52004d, CODE_FOR_sminv16hi3 },
  { 0x52004e, CODE_FOR_sminv8si3 },
  { 0x52004f, CODE_FOR_sminv4di3 },
  { 0x520051, CODE_FOR_sminv64qi3 },
  { 0x520052, CODE_FOR_sminv32hi3 },
  { 0x520053, CODE_FOR_sminv16si3 },
  { 0x520054, CODE_FOR_sminv8di3 },
  { 0x52005d, CODE_FOR_sminv4sf3 },
  { 0x52005e, CODE_FOR_sminv2df3 },
  { 0x52005f, CODE_FOR_sminv8sf3 },
  { 0x520060, CODE_FOR_sminv4df3 },
  { 0x520062, CODE_FOR_sminv16sf3 },
  { 0x520063, CODE_FOR_sminv8df3 },
  { 0x53002a, CODE_FOR_smaxsf3 },
  { 0x53002b, CODE_FOR_smaxdf3 },
  { 0x530047, CODE_FOR_smaxv16qi3 },
  { 0x530048, CODE_FOR_smaxv8hi3 },
  { 0x530049, CODE_FOR_smaxv4si3 },
  { 0x53004a, CODE_FOR_smaxv2di3 },
  { 0x53004c, CODE_FOR_smaxv32qi3 },
  { 0x53004d, CODE_FOR_smaxv16hi3 },
  { 0x53004e, CODE_FOR_smaxv8si3 },
  { 0x53004f, CODE_FOR_smaxv4di3 },
  { 0x530051, CODE_FOR_smaxv64qi3 },
  { 0x530052, CODE_FOR_smaxv32hi3 },
  { 0x530053, CODE_FOR_smaxv16si3 },
  { 0x530054, CODE_FOR_smaxv8di3 },
  { 0x53005d, CODE_FOR_smaxv4sf3 },
  { 0x53005e, CODE_FOR_smaxv2df3 },
  { 0x53005f, CODE_FOR_smaxv8sf3 },
  { 0x530060, CODE_FOR_smaxv4df3 },
  { 0x530062, CODE_FOR_smaxv16sf3 },
  { 0x530063, CODE_FOR_smaxv8df3 },
  { 0x540047, CODE_FOR_uminv16qi3 },
  { 0x540048, CODE_FOR_uminv8hi3 },
  { 0x540049, CODE_FOR_uminv4si3 },
  { 0x54004a, CODE_FOR_uminv2di3 },
  { 0x54004c, CODE_FOR_uminv32qi3 },
  { 0x54004d, CODE_FOR_uminv16hi3 },
  { 0x54004e, CODE_FOR_uminv8si3 },
  { 0x54004f, CODE_FOR_uminv4di3 },
  { 0x540051, CODE_FOR_uminv64qi3 },
  { 0x540052, CODE_FOR_uminv32hi3 },
  { 0x540053, CODE_FOR_uminv16si3 },
  { 0x540054, CODE_FOR_uminv8di3 },
  { 0x550047, CODE_FOR_umaxv16qi3 },
  { 0x550048, CODE_FOR_umaxv8hi3 },
  { 0x550049, CODE_FOR_umaxv4si3 },
  { 0x55004a, CODE_FOR_umaxv2di3 },
  { 0x55004c, CODE_FOR_umaxv32qi3 },
  { 0x55004d, CODE_FOR_umaxv16hi3 },
  { 0x55004e, CODE_FOR_umaxv8si3 },
  { 0x55004f, CODE_FOR_umaxv4di3 },
  { 0x550051, CODE_FOR_umaxv64qi3 },
  { 0x550052, CODE_FOR_umaxv32hi3 },
  { 0x550053, CODE_FOR_umaxv16si3 },
  { 0x550054, CODE_FOR_umaxv8di3 },
  { 0x56000f, CODE_FOR_negqi2 },
  { 0x560010, CODE_FOR_neghi2 },
  { 0x560011, CODE_FOR_negsi2 },
  { 0x560012, CODE_FOR_negdi2 },
  { 0x560013, CODE_FOR_negti2 },
  { 0x56002a, CODE_FOR_negsf2 },
  { 0x56002b, CODE_FOR_negdf2 },
  { 0x56002c, CODE_FOR_negxf2 },
  { 0x56002d, CODE_FOR_negtf2 },
  { 0x560047, CODE_FOR_negv16qi2 },
  { 0x560048, CODE_FOR_negv8hi2 },
  { 0x560049, CODE_FOR_negv4si2 },
  { 0x56004a, CODE_FOR_negv2di2 },
  { 0x56004c, CODE_FOR_negv32qi2 },
  { 0x56004d, CODE_FOR_negv16hi2 },
  { 0x56004e, CODE_FOR_negv8si2 },
  { 0x56004f, CODE_FOR_negv4di2 },
  { 0x560051, CODE_FOR_negv64qi2 },
  { 0x560052, CODE_FOR_negv32hi2 },
  { 0x560053, CODE_FOR_negv16si2 },
  { 0x560054, CODE_FOR_negv8di2 },
  { 0x56005d, CODE_FOR_negv4sf2 },
  { 0x56005e, CODE_FOR_negv2df2 },
  { 0x56005f, CODE_FOR_negv8sf2 },
  { 0x560060, CODE_FOR_negv4df2 },
  { 0x560062, CODE_FOR_negv16sf2 },
  { 0x560063, CODE_FOR_negv8df2 },
  { 0x5a002a, CODE_FOR_abssf2 },
  { 0x5a002b, CODE_FOR_absdf2 },
  { 0x5a002c, CODE_FOR_absxf2 },
  { 0x5a002d, CODE_FOR_abstf2 },
  { 0x5a0040, CODE_FOR_absv8qi2 },
  { 0x5a0041, CODE_FOR_absv4hi2 },
  { 0x5a0042, CODE_FOR_absv2si2 },
  { 0x5a0047, CODE_FOR_absv16qi2 },
  { 0x5a0048, CODE_FOR_absv8hi2 },
  { 0x5a0049, CODE_FOR_absv4si2 },
  { 0x5a004a, CODE_FOR_absv2di2 },
  { 0x5a004c, CODE_FOR_absv32qi2 },
  { 0x5a004d, CODE_FOR_absv16hi2 },
  { 0x5a004e, CODE_FOR_absv8si2 },
  { 0x5a004f, CODE_FOR_absv4di2 },
  { 0x5a0051, CODE_FOR_absv64qi2 },
  { 0x5a0052, CODE_FOR_absv32hi2 },
  { 0x5a0053, CODE_FOR_absv16si2 },
  { 0x5a0054, CODE_FOR_absv8di2 },
  { 0x5a005d, CODE_FOR_absv4sf2 },
  { 0x5a005e, CODE_FOR_absv2df2 },
  { 0x5a005f, CODE_FOR_absv8sf2 },
  { 0x5a0060, CODE_FOR_absv4df2 },
  { 0x5a0062, CODE_FOR_absv16sf2 },
  { 0x5a0063, CODE_FOR_absv8df2 },
  { 0x5c000f, CODE_FOR_one_cmplqi2 },
  { 0x5c0010, CODE_FOR_one_cmplhi2 },
  { 0x5c0011, CODE_FOR_one_cmplsi2 },
  { 0x5c0012, CODE_FOR_one_cmpldi2 },
  { 0x5c0047, CODE_FOR_one_cmplv16qi2 },
  { 0x5c0048, CODE_FOR_one_cmplv8hi2 },
  { 0x5c0049, CODE_FOR_one_cmplv4si2 },
  { 0x5c004a, CODE_FOR_one_cmplv2di2 },
  { 0x5c004c, CODE_FOR_one_cmplv32qi2 },
  { 0x5c004d, CODE_FOR_one_cmplv16hi2 },
  { 0x5c004e, CODE_FOR_one_cmplv8si2 },
  { 0x5c004f, CODE_FOR_one_cmplv4di2 },
  { 0x5c0051, CODE_FOR_one_cmplv64qi2 },
  { 0x5c0052, CODE_FOR_one_cmplv32hi2 },
  { 0x5c0053, CODE_FOR_one_cmplv16si2 },
  { 0x5c0054, CODE_FOR_one_cmplv8di2 },
  { 0x5d0010, CODE_FOR_bswaphi2 },
  { 0x5d0011, CODE_FOR_bswapsi2 },
  { 0x5d0012, CODE_FOR_bswapdi2 },
  { 0x5e0011, CODE_FOR_ffssi2 },
  { 0x5e0012, CODE_FOR_ffsdi2 },
  { 0x5f0011, CODE_FOR_clzsi2 },
  { 0x5f0012, CODE_FOR_clzdi2 },
  { 0x5f0049, CODE_FOR_clzv4si2 },
  { 0x5f004a, CODE_FOR_clzv2di2 },
  { 0x5f004e, CODE_FOR_clzv8si2 },
  { 0x5f004f, CODE_FOR_clzv4di2 },
  { 0x5f0053, CODE_FOR_clzv16si2 },
  { 0x5f0054, CODE_FOR_clzv8di2 },
  { 0x600011, CODE_FOR_ctzsi2 },
  { 0x600012, CODE_FOR_ctzdi2 },
  { 0x620010, CODE_FOR_popcounthi2 },
  { 0x620011, CODE_FOR_popcountsi2 },
  { 0x620012, CODE_FOR_popcountdi2 },
  { 0x630011, CODE_FOR_paritysi2 },
  { 0x630012, CODE_FOR_paritydi2 },
  { 0x6e002a, CODE_FOR_sqrtsf2 },
  { 0x6e002b, CODE_FOR_sqrtdf2 },
  { 0x6e002c, CODE_FOR_sqrtxf2 },
  { 0x6e005d, CODE_FOR_sqrtv4sf2 },
  { 0x6e005e, CODE_FOR_sqrtv2df2 },
  { 0x6e005f, CODE_FOR_sqrtv8sf2 },
  { 0x6e0060, CODE_FOR_sqrtv4df2 },
  { 0x6e0062, CODE_FOR_sqrtv16sf2 },
  { 0x6e0063, CODE_FOR_sqrtv8df2 },
  { 0x7d000f, CODE_FOR_movqi },
  { 0x7d0010, CODE_FOR_movhi },
  { 0x7d0011, CODE_FOR_movsi },
  { 0x7d0012, CODE_FOR_movdi },
  { 0x7d0013, CODE_FOR_movti },
  { 0x7d0014, CODE_FOR_movoi },
  { 0x7d0015, CODE_FOR_movxi },
  { 0x7d0016, CODE_FOR_movbnd32 },
  { 0x7d0017, CODE_FOR_movbnd64 },
  { 0x7d002a, CODE_FOR_movsf },
  { 0x7d002b, CODE_FOR_movdf },
  { 0x7d002c, CODE_FOR_movxf },
  { 0x7d002d, CODE_FOR_movtf },
  { 0x7d0034, CODE_FOR_movcdi },
  { 0x7d0040, CODE_FOR_movv8qi },
  { 0x7d0041, CODE_FOR_movv4hi },
  { 0x7d0042, CODE_FOR_movv2si },
  { 0x7d0043, CODE_FOR_movv1di },
  { 0x7d0047, CODE_FOR_movv16qi },
  { 0x7d0048, CODE_FOR_movv8hi },
  { 0x7d0049, CODE_FOR_movv4si },
  { 0x7d004a, CODE_FOR_movv2di },
  { 0x7d004b, CODE_FOR_movv1ti },
  { 0x7d004c, CODE_FOR_movv32qi },
  { 0x7d004d, CODE_FOR_movv16hi },
  { 0x7d004e, CODE_FOR_movv8si },
  { 0x7d004f, CODE_FOR_movv4di },
  { 0x7d0050, CODE_FOR_movv2ti },
  { 0x7d0051, CODE_FOR_movv64qi },
  { 0x7d0052, CODE_FOR_movv32hi },
  { 0x7d0053, CODE_FOR_movv16si },
  { 0x7d0054, CODE_FOR_movv8di },
  { 0x7d0055, CODE_FOR_movv4ti },
  { 0x7d005b, CODE_FOR_movv64si },
  { 0x7d005c, CODE_FOR_movv2sf },
  { 0x7d005d, CODE_FOR_movv4sf },
  { 0x7d005e, CODE_FOR_movv2df },
  { 0x7d005f, CODE_FOR_movv8sf },
  { 0x7d0060, CODE_FOR_movv4df },
  { 0x7d0062, CODE_FOR_movv16sf },
  { 0x7d0063, CODE_FOR_movv8df },
  { 0x7d0068, CODE_FOR_movv64sf },
  { 0x7e000f, CODE_FOR_movstrictqi },
  { 0x7e0010, CODE_FOR_movstricthi },
  { 0x7f0040, CODE_FOR_movmisalignv8qi },
  { 0x7f0041, CODE_FOR_movmisalignv4hi },
  { 0x7f0042, CODE_FOR_movmisalignv2si },
  { 0x7f0043, CODE_FOR_movmisalignv1di },
  { 0x7f0047, CODE_FOR_movmisalignv16qi },
  { 0x7f0048, CODE_FOR_movmisalignv8hi },
  { 0x7f0049, CODE_FOR_movmisalignv4si },
  { 0x7f004a, CODE_FOR_movmisalignv2di },
  { 0x7f004b, CODE_FOR_movmisalignv1ti },
  { 0x7f004c, CODE_FOR_movmisalignv32qi },
  { 0x7f004d, CODE_FOR_movmisalignv16hi },
  { 0x7f004e, CODE_FOR_movmisalignv8si },
  { 0x7f004f, CODE_FOR_movmisalignv4di },
  { 0x7f0050, CODE_FOR_movmisalignv2ti },
  { 0x7f0051, CODE_FOR_movmisalignv64qi },
  { 0x7f0052, CODE_FOR_movmisalignv32hi },
  { 0x7f0053, CODE_FOR_movmisalignv16si },
  { 0x7f0054, CODE_FOR_movmisalignv8di },
  { 0x7f0055, CODE_FOR_movmisalignv4ti },
  { 0x7f005c, CODE_FOR_movmisalignv2sf },
  { 0x7f005d, CODE_FOR_movmisalignv4sf },
  { 0x7f005e, CODE_FOR_movmisalignv2df },
  { 0x7f005f, CODE_FOR_movmisalignv8sf },
  { 0x7f0060, CODE_FOR_movmisalignv4df },
  { 0x7f0062, CODE_FOR_movmisalignv16sf },
  { 0x7f0063, CODE_FOR_movmisalignv8df },
  { 0x800011, CODE_FOR_storentsi },
  { 0x800012, CODE_FOR_storentdi },
  { 0x80002a, CODE_FOR_storentsf },
  { 0x80002b, CODE_FOR_storentdf },
  { 0x80004a, CODE_FOR_storentv2di },
  { 0x80004f, CODE_FOR_storentv4di },
  { 0x800054, CODE_FOR_storentv8di },
  { 0x80005d, CODE_FOR_storentv4sf },
  { 0x80005e, CODE_FOR_storentv2df },
  { 0x80005f, CODE_FOR_storentv8sf },
  { 0x800060, CODE_FOR_storentv4df },
  { 0x800062, CODE_FOR_storentv16sf },
  { 0x800063, CODE_FOR_storentv8df },
  { 0x810010, CODE_FOR_insvhi },
  { 0x810011, CODE_FOR_insvsi },
  { 0x810012, CODE_FOR_insvdi },
  { 0x820010, CODE_FOR_extvhi },
  { 0x820011, CODE_FOR_extvsi },
  { 0x830010, CODE_FOR_extzvhi },
  { 0x830011, CODE_FOR_extzvsi },
  { 0x830012, CODE_FOR_extzvdi },
  { 0x8a0002, CODE_FOR_cbranchcc4 },
  { 0x8a000f, CODE_FOR_cbranchqi4 },
  { 0x8a0010, CODE_FOR_cbranchhi4 },
  { 0x8a0011, CODE_FOR_cbranchsi4 },
  { 0x8a0012, CODE_FOR_cbranchdi4 },
  { 0x8a0013, CODE_FOR_cbranchti4 },
  { 0x8a002a, CODE_FOR_cbranchsf4 },
  { 0x8a002b, CODE_FOR_cbranchdf4 },
  { 0x8a002c, CODE_FOR_cbranchxf4 },
  { 0x8a0049, CODE_FOR_cbranchv4si4 },
  { 0x8a004a, CODE_FOR_cbranchv2di4 },
  { 0x8a004e, CODE_FOR_cbranchv8si4 },
  { 0x8a004f, CODE_FOR_cbranchv4di4 },
  { 0x8b000f, CODE_FOR_addqicc },
  { 0x8b0010, CODE_FOR_addhicc },
  { 0x8b0011, CODE_FOR_addsicc },
  { 0x8b0012, CODE_FOR_adddicc },
  { 0x8e000f, CODE_FOR_movqicc },
  { 0x8e0010, CODE_FOR_movhicc },
  { 0x8e0011, CODE_FOR_movsicc },
  { 0x8e0012, CODE_FOR_movdicc },
  { 0x8e002a, CODE_FOR_movsfcc },
  { 0x8e002b, CODE_FOR_movdfcc },
  { 0x8e002c, CODE_FOR_movxfcc },
  { 0x990002, CODE_FOR_cstorecc4 },
  { 0x99000f, CODE_FOR_cstoreqi4 },
  { 0x990010, CODE_FOR_cstorehi4 },
  { 0x990011, CODE_FOR_cstoresi4 },
  { 0x990012, CODE_FOR_cstoredi4 },
  { 0x99002a, CODE_FOR_cstoresf4 },
  { 0x99002b, CODE_FOR_cstoredf4 },
  { 0x99002c, CODE_FOR_cstorexf4 },
  { 0x9b000f, CODE_FOR_addvqi4 },
  { 0x9b0010, CODE_FOR_addvhi4 },
  { 0x9b0011, CODE_FOR_addvsi4 },
  { 0x9b0012, CODE_FOR_addvdi4 },
  { 0x9c000f, CODE_FOR_subvqi4 },
  { 0x9c0010, CODE_FOR_subvhi4 },
  { 0x9c0011, CODE_FOR_subvsi4 },
  { 0x9c0012, CODE_FOR_subvdi4 },
  { 0x9d000f, CODE_FOR_mulvqi4 },
  { 0x9d0010, CODE_FOR_mulvhi4 },
  { 0x9d0011, CODE_FOR_mulvsi4 },
  { 0x9d0012, CODE_FOR_mulvdi4 },
  { 0x9e000f, CODE_FOR_uaddvqi4 },
  { 0x9e0010, CODE_FOR_uaddvhi4 },
  { 0x9e0011, CODE_FOR_uaddvsi4 },
  { 0x9e0012, CODE_FOR_uaddvdi4 },
  { 0x9f000f, CODE_FOR_usubvqi4 },
  { 0x9f0010, CODE_FOR_usubvhi4 },
  { 0x9f0011, CODE_FOR_usubvsi4 },
  { 0x9f0012, CODE_FOR_usubvdi4 },
  { 0xa0000f, CODE_FOR_umulvqi4 },
  { 0xa00010, CODE_FOR_umulvhi4 },
  { 0xa00011, CODE_FOR_umulvsi4 },
  { 0xa00012, CODE_FOR_umulvdi4 },
  { 0xa1000f, CODE_FOR_negvqi3 },
  { 0xa10010, CODE_FOR_negvhi3 },
  { 0xa10011, CODE_FOR_negvsi3 },
  { 0xa10012, CODE_FOR_negvdi3 },
  { 0xa30011, CODE_FOR_smulsi3_highpart },
  { 0xa30012, CODE_FOR_smuldi3_highpart },
  { 0xa30048, CODE_FOR_smulv8hi3_highpart },
  { 0xa3004d, CODE_FOR_smulv16hi3_highpart },
  { 0xa30052, CODE_FOR_smulv32hi3_highpart },
  { 0xa40011, CODE_FOR_umulsi3_highpart },
  { 0xa40012, CODE_FOR_umuldi3_highpart },
  { 0xa40048, CODE_FOR_umulv8hi3_highpart },
  { 0xa4004d, CODE_FOR_umulv16hi3_highpart },
  { 0xa40052, CODE_FOR_umulv32hi3_highpart },
  { 0xa70011, CODE_FOR_cmpstrnsi },
  { 0xa80011, CODE_FOR_movmemsi },
  { 0xa80012, CODE_FOR_movmemdi },
  { 0xa90011, CODE_FOR_setmemsi },
  { 0xa90012, CODE_FOR_setmemdi },
  { 0xaa0011, CODE_FOR_strlensi },
  { 0xaa0012, CODE_FOR_strlendi },
  { 0xab002a, CODE_FOR_fmasf4 },
  { 0xab002b, CODE_FOR_fmadf4 },
  { 0xab005d, CODE_FOR_fmav4sf4 },
  { 0xab005e, CODE_FOR_fmav2df4 },
  { 0xab005f, CODE_FOR_fmav8sf4 },
  { 0xab0060, CODE_FOR_fmav4df4 },
  { 0xab0062, CODE_FOR_fmav16sf4 },
  { 0xab0063, CODE_FOR_fmav8df4 },
  { 0xac002a, CODE_FOR_fmssf4 },
  { 0xac002b, CODE_FOR_fmsdf4 },
  { 0xac005d, CODE_FOR_fmsv4sf4 },
  { 0xac005e, CODE_FOR_fmsv2df4 },
  { 0xac005f, CODE_FOR_fmsv8sf4 },
  { 0xac0060, CODE_FOR_fmsv4df4 },
  { 0xac0062, CODE_FOR_fmsv16sf4 },
  { 0xac0063, CODE_FOR_fmsv8df4 },
  { 0xad002a, CODE_FOR_fnmasf4 },
  { 0xad002b, CODE_FOR_fnmadf4 },
  { 0xad005d, CODE_FOR_fnmav4sf4 },
  { 0xad005e, CODE_FOR_fnmav2df4 },
  { 0xad005f, CODE_FOR_fnmav8sf4 },
  { 0xad0060, CODE_FOR_fnmav4df4 },
  { 0xad0062, CODE_FOR_fnmav16sf4 },
  { 0xad0063, CODE_FOR_fnmav8df4 },
  { 0xae002a, CODE_FOR_fnmssf4 },
  { 0xae002b, CODE_FOR_fnmsdf4 },
  { 0xae005d, CODE_FOR_fnmsv4sf4 },
  { 0xae005e, CODE_FOR_fnmsv2df4 },
  { 0xae005f, CODE_FOR_fnmsv8sf4 },
  { 0xae0060, CODE_FOR_fnmsv4df4 },
  { 0xae0062, CODE_FOR_fnmsv16sf4 },
  { 0xae0063, CODE_FOR_fnmsv8df4 },
  { 0xaf002a, CODE_FOR_rintsf2 },
  { 0xaf002b, CODE_FOR_rintdf2 },
  { 0xaf002c, CODE_FOR_rintxf2 },
  { 0xb0002a, CODE_FOR_roundsf2 },
  { 0xb0002b, CODE_FOR_rounddf2 },
  { 0xb0002c, CODE_FOR_roundxf2 },
  { 0xb0005d, CODE_FOR_roundv4sf2 },
  { 0xb0005e, CODE_FOR_roundv2df2 },
  { 0xb0005f, CODE_FOR_roundv8sf2 },
  { 0xb00060, CODE_FOR_roundv4df2 },
  { 0xb00062, CODE_FOR_roundv16sf2 },
  { 0xb00063, CODE_FOR_roundv8df2 },
  { 0xb1002a, CODE_FOR_floorsf2 },
  { 0xb1002b, CODE_FOR_floordf2 },
  { 0xb1002c, CODE_FOR_floorxf2 },
  { 0xb2002a, CODE_FOR_ceilsf2 },
  { 0xb2002b, CODE_FOR_ceildf2 },
  { 0xb2002c, CODE_FOR_ceilxf2 },
  { 0xb3002a, CODE_FOR_btruncsf2 },
  { 0xb3002b, CODE_FOR_btruncdf2 },
  { 0xb3002c, CODE_FOR_btruncxf2 },
  { 0xb4002a, CODE_FOR_nearbyintsf2 },
  { 0xb4002b, CODE_FOR_nearbyintdf2 },
  { 0xb4002c, CODE_FOR_nearbyintxf2 },
  { 0xb5002a, CODE_FOR_acossf2 },
  { 0xb5002b, CODE_FOR_acosdf2 },
  { 0xb5002c, CODE_FOR_acosxf2 },
  { 0xb6002a, CODE_FOR_asinsf2 },
  { 0xb6002b, CODE_FOR_asindf2 },
  { 0xb6002c, CODE_FOR_asinxf2 },
  { 0xb7002a, CODE_FOR_atan2sf3 },
  { 0xb7002b, CODE_FOR_atan2df3 },
  { 0xb7002c, CODE_FOR_atan2xf3 },
  { 0xb8002a, CODE_FOR_atansf2 },
  { 0xb8002b, CODE_FOR_atandf2 },
  { 0xb8002c, CODE_FOR_atanxf2 },
  { 0xb9002a, CODE_FOR_copysignsf3 },
  { 0xb9002b, CODE_FOR_copysigndf3 },
  { 0xb9002d, CODE_FOR_copysigntf3 },
  { 0xb9005d, CODE_FOR_copysignv4sf3 },
  { 0xb9005e, CODE_FOR_copysignv2df3 },
  { 0xb9005f, CODE_FOR_copysignv8sf3 },
  { 0xb90060, CODE_FOR_copysignv4df3 },
  { 0xb90062, CODE_FOR_copysignv16sf3 },
  { 0xb90063, CODE_FOR_copysignv8df3 },
  { 0xbc002a, CODE_FOR_exp10sf2 },
  { 0xbc002b, CODE_FOR_exp10df2 },
  { 0xbc002c, CODE_FOR_exp10xf2 },
  { 0xbd002a, CODE_FOR_exp2sf2 },
  { 0xbd002b, CODE_FOR_exp2df2 },
  { 0xbd002c, CODE_FOR_exp2xf2 },
  { 0xbe002a, CODE_FOR_expsf2 },
  { 0xbe002b, CODE_FOR_expdf2 },
  { 0xbe002c, CODE_FOR_expxf2 },
  { 0xbf002a, CODE_FOR_expm1sf2 },
  { 0xbf002b, CODE_FOR_expm1df2 },
  { 0xbf002c, CODE_FOR_expm1xf2 },
  { 0xc0002a, CODE_FOR_fmodsf3 },
  { 0xc0002b, CODE_FOR_fmoddf3 },
  { 0xc0002c, CODE_FOR_fmodxf3 },
  { 0xc1002a, CODE_FOR_ilogbsf2 },
  { 0xc1002b, CODE_FOR_ilogbdf2 },
  { 0xc1002c, CODE_FOR_ilogbxf2 },
  { 0xc2002a, CODE_FOR_isinfsf2 },
  { 0xc2002b, CODE_FOR_isinfdf2 },
  { 0xc2002c, CODE_FOR_isinfxf2 },
  { 0xc3002a, CODE_FOR_ldexpsf3 },
  { 0xc3002b, CODE_FOR_ldexpdf3 },
  { 0xc3002c, CODE_FOR_ldexpxf3 },
  { 0xc4002a, CODE_FOR_log10sf2 },
  { 0xc4002b, CODE_FOR_log10df2 },
  { 0xc4002c, CODE_FOR_log10xf2 },
  { 0xc5002a, CODE_FOR_log1psf2 },
  { 0xc5002b, CODE_FOR_log1pdf2 },
  { 0xc5002c, CODE_FOR_log1pxf2 },
  { 0xc6002a, CODE_FOR_log2sf2 },
  { 0xc6002b, CODE_FOR_log2df2 },
  { 0xc6002c, CODE_FOR_log2xf2 },
  { 0xc7002a, CODE_FOR_logsf2 },
  { 0xc7002b, CODE_FOR_logdf2 },
  { 0xc7002c, CODE_FOR_logxf2 },
  { 0xc8002a, CODE_FOR_logbsf2 },
  { 0xc8002b, CODE_FOR_logbdf2 },
  { 0xc8002c, CODE_FOR_logbxf2 },
  { 0xca002a, CODE_FOR_remaindersf3 },
  { 0xca002b, CODE_FOR_remainderdf3 },
  { 0xca002c, CODE_FOR_remainderxf3 },
  { 0xcb002a, CODE_FOR_rsqrtsf2 },
  { 0xcb005d, CODE_FOR_rsqrtv4sf2 },
  { 0xcb005f, CODE_FOR_rsqrtv8sf2 },
  { 0xcb0062, CODE_FOR_rsqrtv16sf2 },
  { 0xcc002a, CODE_FOR_scalbsf3 },
  { 0xcc002b, CODE_FOR_scalbdf3 },
  { 0xcc002c, CODE_FOR_scalbxf3 },
  { 0xcd002a, CODE_FOR_signbitsf2 },
  { 0xcd002b, CODE_FOR_signbitdf2 },
  { 0xcd002c, CODE_FOR_signbitxf2 },
  { 0xcd002d, CODE_FOR_signbittf2 },
  { 0xce002a, CODE_FOR_significandsf2 },
  { 0xce002b, CODE_FOR_significanddf2 },
  { 0xce002c, CODE_FOR_significandxf2 },
  { 0xd0002a, CODE_FOR_sincossf3 },
  { 0xd0002b, CODE_FOR_sincosdf3 },
  { 0xd0002c, CODE_FOR_sincosxf3 },
  { 0xd1002a, CODE_FOR_tansf2 },
  { 0xd1002b, CODE_FOR_tandf2 },
  { 0xd1002c, CODE_FOR_tanxf2 },
  { 0xd4004c, CODE_FOR_reduc_smax_scal_v32qi },
  { 0xd4004d, CODE_FOR_reduc_smax_scal_v16hi },
  { 0xd4004e, CODE_FOR_reduc_smax_scal_v8si },
  { 0xd4004f, CODE_FOR_reduc_smax_scal_v4di },
  { 0xd40051, CODE_FOR_reduc_smax_scal_v64qi },
  { 0xd40052, CODE_FOR_reduc_smax_scal_v32hi },
  { 0xd40053, CODE_FOR_reduc_smax_scal_v16si },
  { 0xd40054, CODE_FOR_reduc_smax_scal_v8di },
  { 0xd4005d, CODE_FOR_reduc_smax_scal_v4sf },
  { 0xd4005f, CODE_FOR_reduc_smax_scal_v8sf },
  { 0xd40060, CODE_FOR_reduc_smax_scal_v4df },
  { 0xd40062, CODE_FOR_reduc_smax_scal_v16sf },
  { 0xd40063, CODE_FOR_reduc_smax_scal_v8df },
  { 0xd5004c, CODE_FOR_reduc_smin_scal_v32qi },
  { 0xd5004d, CODE_FOR_reduc_smin_scal_v16hi },
  { 0xd5004e, CODE_FOR_reduc_smin_scal_v8si },
  { 0xd5004f, CODE_FOR_reduc_smin_scal_v4di },
  { 0xd50051, CODE_FOR_reduc_smin_scal_v64qi },
  { 0xd50052, CODE_FOR_reduc_smin_scal_v32hi },
  { 0xd50053, CODE_FOR_reduc_smin_scal_v16si },
  { 0xd50054, CODE_FOR_reduc_smin_scal_v8di },
  { 0xd5005d, CODE_FOR_reduc_smin_scal_v4sf },
  { 0xd5005f, CODE_FOR_reduc_smin_scal_v8sf },
  { 0xd50060, CODE_FOR_reduc_smin_scal_v4df },
  { 0xd50062, CODE_FOR_reduc_smin_scal_v16sf },
  { 0xd50063, CODE_FOR_reduc_smin_scal_v8df },
  { 0xd6005d, CODE_FOR_reduc_plus_scal_v4sf },
  { 0xd6005e, CODE_FOR_reduc_plus_scal_v2df },
  { 0xd6005f, CODE_FOR_reduc_plus_scal_v8sf },
  { 0xd60060, CODE_FOR_reduc_plus_scal_v4df },
  { 0xd60062, CODE_FOR_reduc_plus_scal_v16sf },
  { 0xd60063, CODE_FOR_reduc_plus_scal_v8df },
  { 0xd7004c, CODE_FOR_reduc_umax_scal_v32qi },
  { 0xd7004d, CODE_FOR_reduc_umax_scal_v16hi },
  { 0xd7004e, CODE_FOR_reduc_umax_scal_v8si },
  { 0xd7004f, CODE_FOR_reduc_umax_scal_v4di },
  { 0xd70051, CODE_FOR_reduc_umax_scal_v64qi },
  { 0xd70052, CODE_FOR_reduc_umax_scal_v32hi },
  { 0xd70053, CODE_FOR_reduc_umax_scal_v16si },
  { 0xd70054, CODE_FOR_reduc_umax_scal_v8di },
  { 0xd80048, CODE_FOR_reduc_umin_scal_v8hi },
  { 0xd8004c, CODE_FOR_reduc_umin_scal_v32qi },
  { 0xd8004d, CODE_FOR_reduc_umin_scal_v16hi },
  { 0xd8004e, CODE_FOR_reduc_umin_scal_v8si },
  { 0xd8004f, CODE_FOR_reduc_umin_scal_v4di },
  { 0xd80051, CODE_FOR_reduc_umin_scal_v64qi },
  { 0xd80052, CODE_FOR_reduc_umin_scal_v32hi },
  { 0xd80053, CODE_FOR_reduc_umin_scal_v16si },
  { 0xd80054, CODE_FOR_reduc_umin_scal_v8di },
  { 0xdf0048, CODE_FOR_sdot_prodv8hi },
  { 0xdf0049, CODE_FOR_sdot_prodv4si },
  { 0xdf004d, CODE_FOR_sdot_prodv16hi },
  { 0xdf0052, CODE_FOR_sdot_prodv32hi },
  { 0xe30047, CODE_FOR_usadv16qi },
  { 0xe3004c, CODE_FOR_usadv32qi },
  { 0xe5005e, CODE_FOR_vec_pack_sfix_trunc_v2df },
  { 0xe50060, CODE_FOR_vec_pack_sfix_trunc_v4df },
  { 0xe50063, CODE_FOR_vec_pack_sfix_trunc_v8df },
  { 0xe7000f, CODE_FOR_vec_pack_trunc_qi },
  { 0xe70010, CODE_FOR_vec_pack_trunc_hi },
  { 0xe70011, CODE_FOR_vec_pack_trunc_si },
  { 0xe70048, CODE_FOR_vec_pack_trunc_v8hi },
  { 0xe70049, CODE_FOR_vec_pack_trunc_v4si },
  { 0xe7004a, CODE_FOR_vec_pack_trunc_v2di },
  { 0xe7004d, CODE_FOR_vec_pack_trunc_v16hi },
  { 0xe7004e, CODE_FOR_vec_pack_trunc_v8si },
  { 0xe7004f, CODE_FOR_vec_pack_trunc_v4di },
  { 0xe70052, CODE_FOR_vec_pack_trunc_v32hi },
  { 0xe70053, CODE_FOR_vec_pack_trunc_v16si },
  { 0xe70054, CODE_FOR_vec_pack_trunc_v8di },
  { 0xe7005e, CODE_FOR_vec_pack_trunc_v2df },
  { 0xe70060, CODE_FOR_vec_pack_trunc_v4df },
  { 0xe70063, CODE_FOR_vec_pack_trunc_v8df },
  { 0xe8005e, CODE_FOR_vec_pack_ufix_trunc_v2df },
  { 0xe80060, CODE_FOR_vec_pack_ufix_trunc_v4df },
  { 0xe80063, CODE_FOR_vec_pack_ufix_trunc_v8df },
  { 0xea0047, CODE_FOR_vec_permv16qi },
  { 0xea0048, CODE_FOR_vec_permv8hi },
  { 0xea0049, CODE_FOR_vec_permv4si },
  { 0xea004a, CODE_FOR_vec_permv2di },
  { 0xea004c, CODE_FOR_vec_permv32qi },
  { 0xea004d, CODE_FOR_vec_permv16hi },
  { 0xea004e, CODE_FOR_vec_permv8si },
  { 0xea004f, CODE_FOR_vec_permv4di },
  { 0xea0051, CODE_FOR_vec_permv64qi },
  { 0xea0052, CODE_FOR_vec_permv32hi },
  { 0xea0053, CODE_FOR_vec_permv16si },
  { 0xea0054, CODE_FOR_vec_permv8di },
  { 0xea005d, CODE_FOR_vec_permv4sf },
  { 0xea005e, CODE_FOR_vec_permv2df },
  { 0xea005f, CODE_FOR_vec_permv8sf },
  { 0xea0060, CODE_FOR_vec_permv4df },
  { 0xea0062, CODE_FOR_vec_permv16sf },
  { 0xea0063, CODE_FOR_vec_permv8df },
  { 0xec0040, CODE_FOR_vec_setv8qi },
  { 0xec0041, CODE_FOR_vec_setv4hi },
  { 0xec0042, CODE_FOR_vec_setv2si },
  { 0xec0047, CODE_FOR_vec_setv16qi },
  { 0xec0048, CODE_FOR_vec_setv8hi },
  { 0xec0049, CODE_FOR_vec_setv4si },
  { 0xec004a, CODE_FOR_vec_setv2di },
  { 0xec004c, CODE_FOR_vec_setv32qi },
  { 0xec004d, CODE_FOR_vec_setv16hi },
  { 0xec004e, CODE_FOR_vec_setv8si },
  { 0xec004f, CODE_FOR_vec_setv4di },
  { 0xec0051, CODE_FOR_vec_setv64qi },
  { 0xec0052, CODE_FOR_vec_setv32hi },
  { 0xec0053, CODE_FOR_vec_setv16si },
  { 0xec0054, CODE_FOR_vec_setv8di },
  { 0xec005c, CODE_FOR_vec_setv2sf },
  { 0xec005d, CODE_FOR_vec_setv4sf },
  { 0xec005e, CODE_FOR_vec_setv2df },
  { 0xec005f, CODE_FOR_vec_setv8sf },
  { 0xec0060, CODE_FOR_vec_setv4df },
  { 0xec0062, CODE_FOR_vec_setv16sf },
  { 0xec0063, CODE_FOR_vec_setv8df },
  { 0xed0047, CODE_FOR_vec_shr_v16qi },
  { 0xed0048, CODE_FOR_vec_shr_v8hi },
  { 0xed0049, CODE_FOR_vec_shr_v4si },
  { 0xed004a, CODE_FOR_vec_shr_v2di },
  { 0xee0048, CODE_FOR_vec_unpacks_float_hi_v8hi },
  { 0xee0049, CODE_FOR_vec_unpacks_float_hi_v4si },
  { 0xee004d, CODE_FOR_vec_unpacks_float_hi_v16hi },
  { 0xee004e, CODE_FOR_vec_unpacks_float_hi_v8si },
  { 0xee0052, CODE_FOR_vec_unpacks_float_hi_v32hi },
  { 0xee0053, CODE_FOR_vec_unpacks_float_hi_v16si },
  { 0xef0048, CODE_FOR_vec_unpacks_float_lo_v8hi },
  { 0xef0049, CODE_FOR_vec_unpacks_float_lo_v4si },
  { 0xef004d, CODE_FOR_vec_unpacks_float_lo_v16hi },
  { 0xef004e, CODE_FOR_vec_unpacks_float_lo_v8si },
  { 0xef0052, CODE_FOR_vec_unpacks_float_lo_v32hi },
  { 0xef0053, CODE_FOR_vec_unpacks_float_lo_v16si },
  { 0xf00010, CODE_FOR_vec_unpacks_hi_hi },
  { 0xf00011, CODE_FOR_vec_unpacks_hi_si },
  { 0xf00012, CODE_FOR_vec_unpacks_hi_di },
  { 0xf00047, CODE_FOR_vec_unpacks_hi_v16qi },
  { 0xf00048, CODE_FOR_vec_unpacks_hi_v8hi },
  { 0xf00049, CODE_FOR_vec_unpacks_hi_v4si },
  { 0xf0004c, CODE_FOR_vec_unpacks_hi_v32qi },
  { 0xf0004d, CODE_FOR_vec_unpacks_hi_v16hi },
  { 0xf0004e, CODE_FOR_vec_unpacks_hi_v8si },
  { 0xf00051, CODE_FOR_vec_unpacks_hi_v64qi },
  { 0xf00052, CODE_FOR_vec_unpacks_hi_v32hi },
  { 0xf00053, CODE_FOR_vec_unpacks_hi_v16si },
  { 0xf0005d, CODE_FOR_vec_unpacks_hi_v4sf },
  { 0xf0005f, CODE_FOR_vec_unpacks_hi_v8sf },
  { 0xf00062, CODE_FOR_vec_unpacks_hi_v16sf },
  { 0xf10010, CODE_FOR_vec_unpacks_lo_hi },
  { 0xf10011, CODE_FOR_vec_unpacks_lo_si },
  { 0xf10012, CODE_FOR_vec_unpacks_lo_di },
  { 0xf10047, CODE_FOR_vec_unpacks_lo_v16qi },
  { 0xf10048, CODE_FOR_vec_unpacks_lo_v8hi },
  { 0xf10049, CODE_FOR_vec_unpacks_lo_v4si },
  { 0xf1004c, CODE_FOR_vec_unpacks_lo_v32qi },
  { 0xf1004d, CODE_FOR_vec_unpacks_lo_v16hi },
  { 0xf1004e, CODE_FOR_vec_unpacks_lo_v8si },
  { 0xf10051, CODE_FOR_vec_unpacks_lo_v64qi },
  { 0xf10052, CODE_FOR_vec_unpacks_lo_v32hi },
  { 0xf10053, CODE_FOR_vec_unpacks_lo_v16si },
  { 0xf1005d, CODE_FOR_vec_unpacks_lo_v4sf },
  { 0xf1005f, CODE_FOR_vec_unpacks_lo_v8sf },
  { 0xf10062, CODE_FOR_vec_unpacks_lo_v16sf },
  { 0xf20048, CODE_FOR_vec_unpacku_float_hi_v8hi },
  { 0xf20049, CODE_FOR_vec_unpacku_float_hi_v4si },
  { 0xf2004d, CODE_FOR_vec_unpacku_float_hi_v16hi },
  { 0xf2004e, CODE_FOR_vec_unpacku_float_hi_v8si },
  { 0xf20052, CODE_FOR_vec_unpacku_float_hi_v32hi },
  { 0xf20053, CODE_FOR_vec_unpacku_float_hi_v16si },
  { 0xf30048, CODE_FOR_vec_unpacku_float_lo_v8hi },
  { 0xf30049, CODE_FOR_vec_unpacku_float_lo_v4si },
  { 0xf3004d, CODE_FOR_vec_unpacku_float_lo_v16hi },
  { 0xf3004e, CODE_FOR_vec_unpacku_float_lo_v8si },
  { 0xf30052, CODE_FOR_vec_unpacku_float_lo_v32hi },
  { 0xf30053, CODE_FOR_vec_unpacku_float_lo_v16si },
  { 0xf40047, CODE_FOR_vec_unpacku_hi_v16qi },
  { 0xf40048, CODE_FOR_vec_unpacku_hi_v8hi },
  { 0xf40049, CODE_FOR_vec_unpacku_hi_v4si },
  { 0xf4004c, CODE_FOR_vec_unpacku_hi_v32qi },
  { 0xf4004d, CODE_FOR_vec_unpacku_hi_v16hi },
  { 0xf4004e, CODE_FOR_vec_unpacku_hi_v8si },
  { 0xf40051, CODE_FOR_vec_unpacku_hi_v64qi },
  { 0xf40052, CODE_FOR_vec_unpacku_hi_v32hi },
  { 0xf40053, CODE_FOR_vec_unpacku_hi_v16si },
  { 0xf50047, CODE_FOR_vec_unpacku_lo_v16qi },
  { 0xf50048, CODE_FOR_vec_unpacku_lo_v8hi },
  { 0xf50049, CODE_FOR_vec_unpacku_lo_v4si },
  { 0xf5004c, CODE_FOR_vec_unpacku_lo_v32qi },
  { 0xf5004d, CODE_FOR_vec_unpacku_lo_v16hi },
  { 0xf5004e, CODE_FOR_vec_unpacku_lo_v8si },
  { 0xf50051, CODE_FOR_vec_unpacku_lo_v64qi },
  { 0xf50052, CODE_FOR_vec_unpacku_lo_v32hi },
  { 0xf50053, CODE_FOR_vec_unpacku_lo_v16si },
  { 0xf60049, CODE_FOR_vec_widen_smult_even_v4si },
  { 0xf6004e, CODE_FOR_vec_widen_smult_even_v8si },
  { 0xf60053, CODE_FOR_vec_widen_smult_even_v16si },
  { 0xf70047, CODE_FOR_vec_widen_smult_hi_v16qi },
  { 0xf70048, CODE_FOR_vec_widen_smult_hi_v8hi },
  { 0xf70049, CODE_FOR_vec_widen_smult_hi_v4si },
  { 0xf7004c, CODE_FOR_vec_widen_smult_hi_v32qi },
  { 0xf7004d, CODE_FOR_vec_widen_smult_hi_v16hi },
  { 0xf7004e, CODE_FOR_vec_widen_smult_hi_v8si },
  { 0xf80047, CODE_FOR_vec_widen_smult_lo_v16qi },
  { 0xf80048, CODE_FOR_vec_widen_smult_lo_v8hi },
  { 0xf80049, CODE_FOR_vec_widen_smult_lo_v4si },
  { 0xf8004c, CODE_FOR_vec_widen_smult_lo_v32qi },
  { 0xf8004d, CODE_FOR_vec_widen_smult_lo_v16hi },
  { 0xf8004e, CODE_FOR_vec_widen_smult_lo_v8si },
  { 0xf90049, CODE_FOR_vec_widen_smult_odd_v4si },
  { 0xf9004e, CODE_FOR_vec_widen_smult_odd_v8si },
  { 0xf90053, CODE_FOR_vec_widen_smult_odd_v16si },
  { 0xfc0049, CODE_FOR_vec_widen_umult_even_v4si },
  { 0xfc004e, CODE_FOR_vec_widen_umult_even_v8si },
  { 0xfc0053, CODE_FOR_vec_widen_umult_even_v16si },
  { 0xfd0047, CODE_FOR_vec_widen_umult_hi_v16qi },
  { 0xfd0048, CODE_FOR_vec_widen_umult_hi_v8hi },
  { 0xfd0049, CODE_FOR_vec_widen_umult_hi_v4si },
  { 0xfd004c, CODE_FOR_vec_widen_umult_hi_v32qi },
  { 0xfd004d, CODE_FOR_vec_widen_umult_hi_v16hi },
  { 0xfd004e, CODE_FOR_vec_widen_umult_hi_v8si },
  { 0xfe0047, CODE_FOR_vec_widen_umult_lo_v16qi },
  { 0xfe0048, CODE_FOR_vec_widen_umult_lo_v8hi },
  { 0xfe0049, CODE_FOR_vec_widen_umult_lo_v4si },
  { 0xfe004c, CODE_FOR_vec_widen_umult_lo_v32qi },
  { 0xfe004d, CODE_FOR_vec_widen_umult_lo_v16hi },
  { 0xfe004e, CODE_FOR_vec_widen_umult_lo_v8si },
  { 0xff0049, CODE_FOR_vec_widen_umult_odd_v4si },
  { 0xff004e, CODE_FOR_vec_widen_umult_odd_v8si },
  { 0xff0053, CODE_FOR_vec_widen_umult_odd_v16si },
  { 0x10a000f, CODE_FOR_atomic_addqi },
  { 0x10a0010, CODE_FOR_atomic_addhi },
  { 0x10a0011, CODE_FOR_atomic_addsi },
  { 0x10a0012, CODE_FOR_atomic_adddi },
  { 0x10c000f, CODE_FOR_atomic_andqi },
  { 0x10c0010, CODE_FOR_atomic_andhi },
  { 0x10c0011, CODE_FOR_atomic_andsi },
  { 0x10c0012, CODE_FOR_atomic_anddi },
  { 0x10d0010, CODE_FOR_atomic_bit_test_and_sethi },
  { 0x10d0011, CODE_FOR_atomic_bit_test_and_setsi },
  { 0x10d0012, CODE_FOR_atomic_bit_test_and_setdi },
  { 0x10e0010, CODE_FOR_atomic_bit_test_and_complementhi },
  { 0x10e0011, CODE_FOR_atomic_bit_test_and_complementsi },
  { 0x10e0012, CODE_FOR_atomic_bit_test_and_complementdi },
  { 0x10f0010, CODE_FOR_atomic_bit_test_and_resethi },
  { 0x10f0011, CODE_FOR_atomic_bit_test_and_resetsi },
  { 0x10f0012, CODE_FOR_atomic_bit_test_and_resetdi },
  { 0x110000f, CODE_FOR_atomic_compare_and_swapqi },
  { 0x1100010, CODE_FOR_atomic_compare_and_swaphi },
  { 0x1100011, CODE_FOR_atomic_compare_and_swapsi },
  { 0x1100012, CODE_FOR_atomic_compare_and_swapdi },
  { 0x1100013, CODE_FOR_atomic_compare_and_swapti },
  { 0x111000f, CODE_FOR_atomic_exchangeqi },
  { 0x1110010, CODE_FOR_atomic_exchangehi },
  { 0x1110011, CODE_FOR_atomic_exchangesi },
  { 0x1110012, CODE_FOR_atomic_exchangedi },
  { 0x112000f, CODE_FOR_atomic_fetch_addqi },
  { 0x1120010, CODE_FOR_atomic_fetch_addhi },
  { 0x1120011, CODE_FOR_atomic_fetch_addsi },
  { 0x1120012, CODE_FOR_atomic_fetch_adddi },
  { 0x118000f, CODE_FOR_atomic_loadqi },
  { 0x1180010, CODE_FOR_atomic_loadhi },
  { 0x1180011, CODE_FOR_atomic_loadsi },
  { 0x1180012, CODE_FOR_atomic_loaddi },
  { 0x11c000f, CODE_FOR_atomic_orqi },
  { 0x11c0010, CODE_FOR_atomic_orhi },
  { 0x11c0011, CODE_FOR_atomic_orsi },
  { 0x11c0012, CODE_FOR_atomic_ordi },
  { 0x11d000f, CODE_FOR_atomic_storeqi },
  { 0x11d0010, CODE_FOR_atomic_storehi },
  { 0x11d0011, CODE_FOR_atomic_storesi },
  { 0x11d0012, CODE_FOR_atomic_storedi },
  { 0x11f000f, CODE_FOR_atomic_subqi },
  { 0x11f0010, CODE_FOR_atomic_subhi },
  { 0x11f0011, CODE_FOR_atomic_subsi },
  { 0x11f0012, CODE_FOR_atomic_subdi },
  { 0x121000f, CODE_FOR_atomic_xorqi },
  { 0x1210010, CODE_FOR_atomic_xorhi },
  { 0x1210011, CODE_FOR_atomic_xorsi },
  { 0x1210012, CODE_FOR_atomic_xordi },
};

void
init_all_optabs (struct target_optabs *optabs)
{
  bool *ena = optabs->pat_enable;
  ena[0] = HAVE_extendqihi2;
  ena[1] = HAVE_extendqisi2;
  ena[2] = HAVE_extendqidi2;
  ena[3] = HAVE_extendhisi2;
  ena[4] = HAVE_extendhidi2;
  ena[5] = HAVE_extendsidi2;
  ena[6] = HAVE_extendsfdf2;
  ena[7] = HAVE_extendsfxf2;
  ena[8] = HAVE_extenddfxf2;
  ena[9] = HAVE_truncdfsf2;
  ena[10] = HAVE_truncxfsf2;
  ena[11] = HAVE_truncxfdf2;
  ena[12] = HAVE_zero_extendqihi2;
  ena[13] = HAVE_zero_extendqisi2;
  ena[14] = HAVE_zero_extendqidi2;
  ena[15] = HAVE_zero_extendhisi2;
  ena[16] = HAVE_zero_extendhidi2;
  ena[17] = HAVE_zero_extendsidi2;
  ena[18] = HAVE_floathisf2;
  ena[19] = HAVE_floathidf2;
  ena[20] = HAVE_floathixf2;
  ena[21] = HAVE_floatsisf2;
  ena[22] = HAVE_floatsidf2;
  ena[23] = HAVE_floatsixf2;
  ena[24] = HAVE_floatdisf2;
  ena[25] = HAVE_floatdidf2;
  ena[26] = HAVE_floatdixf2;
  ena[27] = HAVE_floatv4siv4sf2;
  ena[28] = HAVE_floatv4siv4df2;
  ena[29] = HAVE_floatv2div2df2;
  ena[30] = HAVE_floatv8siv8sf2;
  ena[31] = HAVE_floatv8siv8df2;
  ena[32] = HAVE_floatv4div4sf2;
  ena[33] = HAVE_floatv4div4df2;
  ena[34] = HAVE_floatv16siv16sf2;
  ena[35] = HAVE_floatv8div8sf2;
  ena[36] = HAVE_floatv8div8df2;
  ena[37] = HAVE_floatunsqisf2;
  ena[38] = HAVE_floatunsqidf2;
  ena[39] = HAVE_floatunshisf2;
  ena[40] = HAVE_floatunshidf2;
  ena[41] = HAVE_floatunssisf2;
  ena[42] = HAVE_floatunssidf2;
  ena[43] = HAVE_floatunssixf2;
  ena[44] = HAVE_floatunsdisf2;
  ena[45] = HAVE_floatunsdidf2;
  ena[46] = HAVE_floatunsv4siv4sf2;
  ena[47] = HAVE_floatunsv8siv8sf2;
  ena[48] = HAVE_floatunsv16siv16sf2;
  ena[49] = HAVE_lrintsfsi2;
  ena[50] = HAVE_lrintsfdi2;
  ena[51] = HAVE_lrintdfsi2;
  ena[52] = HAVE_lrintdfdi2;
  ena[53] = HAVE_lrintxfhi2;
  ena[54] = HAVE_lrintxfsi2;
  ena[55] = HAVE_lrintxfdi2;
  ena[56] = HAVE_lroundsfhi2;
  ena[57] = HAVE_lroundsfsi2;
  ena[58] = HAVE_lroundsfdi2;
  ena[59] = HAVE_lrounddfhi2;
  ena[60] = HAVE_lrounddfsi2;
  ena[61] = HAVE_lrounddfdi2;
  ena[62] = HAVE_lroundxfhi2;
  ena[63] = HAVE_lroundxfsi2;
  ena[64] = HAVE_lroundxfdi2;
  ena[65] = HAVE_lfloorsfsi2;
  ena[66] = HAVE_lfloorsfdi2;
  ena[67] = HAVE_lfloordfsi2;
  ena[68] = HAVE_lfloordfdi2;
  ena[69] = HAVE_lfloorxfhi2;
  ena[70] = HAVE_lfloorxfsi2;
  ena[71] = HAVE_lfloorxfdi2;
  ena[72] = HAVE_lceilsfsi2;
  ena[73] = HAVE_lceilsfdi2;
  ena[74] = HAVE_lceildfsi2;
  ena[75] = HAVE_lceildfdi2;
  ena[76] = HAVE_lceilxfhi2;
  ena[77] = HAVE_lceilxfsi2;
  ena[78] = HAVE_lceilxfdi2;
  ena[79] = HAVE_fix_truncsfhi2;
  ena[80] = HAVE_fix_truncsfsi2;
  ena[81] = HAVE_fix_truncsfdi2;
  ena[82] = HAVE_fix_truncdfhi2;
  ena[83] = HAVE_fix_truncdfsi2;
  ena[84] = HAVE_fix_truncdfdi2;
  ena[85] = HAVE_fix_truncxfhi2;
  ena[86] = HAVE_fix_truncxfsi2;
  ena[87] = HAVE_fix_truncxfdi2;
  ena[88] = HAVE_fix_truncv2sfv2di2;
  ena[89] = HAVE_fix_truncv4sfv4si2;
  ena[90] = HAVE_fix_truncv4sfv4di2;
  ena[91] = HAVE_fix_truncv2dfv2di2;
  ena[92] = HAVE_fix_truncv8sfv8si2;
  ena[93] = HAVE_fix_truncv8sfv8di2;
  ena[94] = HAVE_fix_truncv4dfv4si2;
  ena[95] = HAVE_fix_truncv4dfv4di2;
  ena[96] = HAVE_fix_truncv16sfv16si2;
  ena[97] = HAVE_fix_truncv8dfv8si2;
  ena[98] = HAVE_fix_truncv8dfv8di2;
  ena[99] = HAVE_fixuns_truncsfhi2;
  ena[100] = HAVE_fixuns_truncsfsi2;
  ena[101] = HAVE_fixuns_truncdfhi2;
  ena[102] = HAVE_fixuns_truncdfsi2;
  ena[103] = HAVE_fixuns_truncv4sfv4si2;
  ena[104] = HAVE_fixuns_truncv8sfv8si2;
  ena[105] = HAVE_fixuns_truncv16sfv16si2;
  ena[106] = HAVE_mulqihi3;
  ena[107] = HAVE_mulsidi3;
  ena[108] = HAVE_mulditi3;
  ena[109] = HAVE_umulqihi3;
  ena[110] = HAVE_umulsidi3;
  ena[111] = HAVE_umulditi3;
  ena[112] = HAVE_vcondv16qiv16qi;
  ena[113] = HAVE_vcondv8hiv16qi;
  ena[114] = HAVE_vcondv4siv16qi;
  ena[115] = HAVE_vcondv2div16qi;
  ena[116] = HAVE_vcondv4sfv16qi;
  ena[117] = HAVE_vcondv2dfv16qi;
  ena[118] = HAVE_vcondv16qiv8hi;
  ena[119] = HAVE_vcondv8hiv8hi;
  ena[120] = HAVE_vcondv4siv8hi;
  ena[121] = HAVE_vcondv2div8hi;
  ena[122] = HAVE_vcondv4sfv8hi;
  ena[123] = HAVE_vcondv2dfv8hi;
  ena[124] = HAVE_vcondv16qiv4si;
  ena[125] = HAVE_vcondv8hiv4si;
  ena[126] = HAVE_vcondv4siv4si;
  ena[127] = HAVE_vcondv2div4si;
  ena[128] = HAVE_vcondv4sfv4si;
  ena[129] = HAVE_vcondv2dfv4si;
  ena[130] = HAVE_vcondv2div2di;
  ena[131] = HAVE_vcondv2dfv2di;
  ena[132] = HAVE_vcondv32qiv32qi;
  ena[133] = HAVE_vcondv16hiv32qi;
  ena[134] = HAVE_vcondv8siv32qi;
  ena[135] = HAVE_vcondv4div32qi;
  ena[136] = HAVE_vcondv8sfv32qi;
  ena[137] = HAVE_vcondv4dfv32qi;
  ena[138] = HAVE_vcondv32qiv16hi;
  ena[139] = HAVE_vcondv16hiv16hi;
  ena[140] = HAVE_vcondv8siv16hi;
  ena[141] = HAVE_vcondv4div16hi;
  ena[142] = HAVE_vcondv8sfv16hi;
  ena[143] = HAVE_vcondv4dfv16hi;
  ena[144] = HAVE_vcondv32qiv8si;
  ena[145] = HAVE_vcondv16hiv8si;
  ena[146] = HAVE_vcondv8siv8si;
  ena[147] = HAVE_vcondv4div8si;
  ena[148] = HAVE_vcondv8sfv8si;
  ena[149] = HAVE_vcondv4dfv8si;
  ena[150] = HAVE_vcondv32qiv4di;
  ena[151] = HAVE_vcondv16hiv4di;
  ena[152] = HAVE_vcondv8siv4di;
  ena[153] = HAVE_vcondv4div4di;
  ena[154] = HAVE_vcondv8sfv4di;
  ena[155] = HAVE_vcondv4dfv4di;
  ena[156] = HAVE_vcondv64qiv64qi;
  ena[157] = HAVE_vcondv32hiv64qi;
  ena[158] = HAVE_vcondv16siv64qi;
  ena[159] = HAVE_vcondv8div64qi;
  ena[160] = HAVE_vcondv16sfv64qi;
  ena[161] = HAVE_vcondv8dfv64qi;
  ena[162] = HAVE_vcondv64qiv32hi;
  ena[163] = HAVE_vcondv32hiv32hi;
  ena[164] = HAVE_vcondv16siv32hi;
  ena[165] = HAVE_vcondv8div32hi;
  ena[166] = HAVE_vcondv16sfv32hi;
  ena[167] = HAVE_vcondv8dfv32hi;
  ena[168] = HAVE_vcondv64qiv16si;
  ena[169] = HAVE_vcondv32hiv16si;
  ena[170] = HAVE_vcondv16siv16si;
  ena[171] = HAVE_vcondv8div16si;
  ena[172] = HAVE_vcondv16sfv16si;
  ena[173] = HAVE_vcondv8dfv16si;
  ena[174] = HAVE_vcondv64qiv8di;
  ena[175] = HAVE_vcondv32hiv8di;
  ena[176] = HAVE_vcondv16siv8di;
  ena[177] = HAVE_vcondv8div8di;
  ena[178] = HAVE_vcondv16sfv8di;
  ena[179] = HAVE_vcondv8dfv8di;
  ena[180] = HAVE_vcondv16qiv4sf;
  ena[181] = HAVE_vcondv8hiv4sf;
  ena[182] = HAVE_vcondv4siv4sf;
  ena[183] = HAVE_vcondv2div4sf;
  ena[184] = HAVE_vcondv4sfv4sf;
  ena[185] = HAVE_vcondv2dfv4sf;
  ena[186] = HAVE_vcondv16qiv2df;
  ena[187] = HAVE_vcondv8hiv2df;
  ena[188] = HAVE_vcondv4siv2df;
  ena[189] = HAVE_vcondv2div2df;
  ena[190] = HAVE_vcondv4sfv2df;
  ena[191] = HAVE_vcondv2dfv2df;
  ena[192] = HAVE_vcondv32qiv8sf;
  ena[193] = HAVE_vcondv16hiv8sf;
  ena[194] = HAVE_vcondv8siv8sf;
  ena[195] = HAVE_vcondv4div8sf;
  ena[196] = HAVE_vcondv8sfv8sf;
  ena[197] = HAVE_vcondv4dfv8sf;
  ena[198] = HAVE_vcondv32qiv4df;
  ena[199] = HAVE_vcondv16hiv4df;
  ena[200] = HAVE_vcondv8siv4df;
  ena[201] = HAVE_vcondv4div4df;
  ena[202] = HAVE_vcondv8sfv4df;
  ena[203] = HAVE_vcondv4dfv4df;
  ena[204] = HAVE_vcondv64qiv16sf;
  ena[205] = HAVE_vcondv32hiv16sf;
  ena[206] = HAVE_vcondv16siv16sf;
  ena[207] = HAVE_vcondv8div16sf;
  ena[208] = HAVE_vcondv16sfv16sf;
  ena[209] = HAVE_vcondv8dfv16sf;
  ena[210] = HAVE_vcondv64qiv8df;
  ena[211] = HAVE_vcondv32hiv8df;
  ena[212] = HAVE_vcondv16siv8df;
  ena[213] = HAVE_vcondv8div8df;
  ena[214] = HAVE_vcondv16sfv8df;
  ena[215] = HAVE_vcondv8dfv8df;
  ena[216] = HAVE_vconduv16qiv16qi;
  ena[217] = HAVE_vconduv8hiv16qi;
  ena[218] = HAVE_vconduv4siv16qi;
  ena[219] = HAVE_vconduv2div16qi;
  ena[220] = HAVE_vconduv4sfv16qi;
  ena[221] = HAVE_vconduv2dfv16qi;
  ena[222] = HAVE_vconduv16qiv8hi;
  ena[223] = HAVE_vconduv8hiv8hi;
  ena[224] = HAVE_vconduv4siv8hi;
  ena[225] = HAVE_vconduv2div8hi;
  ena[226] = HAVE_vconduv4sfv8hi;
  ena[227] = HAVE_vconduv2dfv8hi;
  ena[228] = HAVE_vconduv16qiv4si;
  ena[229] = HAVE_vconduv8hiv4si;
  ena[230] = HAVE_vconduv4siv4si;
  ena[231] = HAVE_vconduv2div4si;
  ena[232] = HAVE_vconduv4sfv4si;
  ena[233] = HAVE_vconduv2dfv4si;
  ena[234] = HAVE_vconduv2div2di;
  ena[235] = HAVE_vconduv2dfv2di;
  ena[236] = HAVE_vconduv32qiv32qi;
  ena[237] = HAVE_vconduv16hiv32qi;
  ena[238] = HAVE_vconduv8siv32qi;
  ena[239] = HAVE_vconduv4div32qi;
  ena[240] = HAVE_vconduv8sfv32qi;
  ena[241] = HAVE_vconduv4dfv32qi;
  ena[242] = HAVE_vconduv32qiv16hi;
  ena[243] = HAVE_vconduv16hiv16hi;
  ena[244] = HAVE_vconduv8siv16hi;
  ena[245] = HAVE_vconduv4div16hi;
  ena[246] = HAVE_vconduv8sfv16hi;
  ena[247] = HAVE_vconduv4dfv16hi;
  ena[248] = HAVE_vconduv32qiv8si;
  ena[249] = HAVE_vconduv16hiv8si;
  ena[250] = HAVE_vconduv8siv8si;
  ena[251] = HAVE_vconduv4div8si;
  ena[252] = HAVE_vconduv8sfv8si;
  ena[253] = HAVE_vconduv4dfv8si;
  ena[254] = HAVE_vconduv32qiv4di;
  ena[255] = HAVE_vconduv16hiv4di;
  ena[256] = HAVE_vconduv8siv4di;
  ena[257] = HAVE_vconduv4div4di;
  ena[258] = HAVE_vconduv8sfv4di;
  ena[259] = HAVE_vconduv4dfv4di;
  ena[260] = HAVE_vconduv64qiv64qi;
  ena[261] = HAVE_vconduv32hiv64qi;
  ena[262] = HAVE_vconduv16siv64qi;
  ena[263] = HAVE_vconduv8div64qi;
  ena[264] = HAVE_vconduv16sfv64qi;
  ena[265] = HAVE_vconduv8dfv64qi;
  ena[266] = HAVE_vconduv64qiv32hi;
  ena[267] = HAVE_vconduv32hiv32hi;
  ena[268] = HAVE_vconduv16siv32hi;
  ena[269] = HAVE_vconduv8div32hi;
  ena[270] = HAVE_vconduv16sfv32hi;
  ena[271] = HAVE_vconduv8dfv32hi;
  ena[272] = HAVE_vconduv64qiv16si;
  ena[273] = HAVE_vconduv32hiv16si;
  ena[274] = HAVE_vconduv16siv16si;
  ena[275] = HAVE_vconduv8div16si;
  ena[276] = HAVE_vconduv16sfv16si;
  ena[277] = HAVE_vconduv8dfv16si;
  ena[278] = HAVE_vconduv64qiv8di;
  ena[279] = HAVE_vconduv32hiv8di;
  ena[280] = HAVE_vconduv16siv8di;
  ena[281] = HAVE_vconduv8div8di;
  ena[282] = HAVE_vconduv16sfv8di;
  ena[283] = HAVE_vconduv8dfv8di;
  ena[284] = HAVE_vcondeqv2div2di;
  ena[285] = HAVE_vcondeqv2dfv2di;
  ena[286] = HAVE_vcond_mask_v8hiqi;
  ena[287] = HAVE_vcond_mask_v4siqi;
  ena[288] = HAVE_vcond_mask_v2diqi;
  ena[289] = HAVE_vcond_mask_v8siqi;
  ena[290] = HAVE_vcond_mask_v4diqi;
  ena[291] = HAVE_vcond_mask_v8diqi;
  ena[292] = HAVE_vcond_mask_v4sfqi;
  ena[293] = HAVE_vcond_mask_v2dfqi;
  ena[294] = HAVE_vcond_mask_v8sfqi;
  ena[295] = HAVE_vcond_mask_v4dfqi;
  ena[296] = HAVE_vcond_mask_v8dfqi;
  ena[297] = HAVE_vcond_mask_v16qihi;
  ena[298] = HAVE_vcond_mask_v16hihi;
  ena[299] = HAVE_vcond_mask_v16sihi;
  ena[300] = HAVE_vcond_mask_v16sfhi;
  ena[301] = HAVE_vcond_mask_v32qisi;
  ena[302] = HAVE_vcond_mask_v32hisi;
  ena[303] = HAVE_vcond_mask_v64qidi;
  ena[304] = HAVE_vcond_mask_v16qiv16qi;
  ena[305] = HAVE_vcond_mask_v8hiv8hi;
  ena[306] = HAVE_vcond_mask_v4siv4si;
  ena[307] = HAVE_vcond_mask_v4sfv4si;
  ena[308] = HAVE_vcond_mask_v2div2di;
  ena[309] = HAVE_vcond_mask_v2dfv2di;
  ena[310] = HAVE_vcond_mask_v32qiv32qi;
  ena[311] = HAVE_vcond_mask_v16hiv16hi;
  ena[312] = HAVE_vcond_mask_v8siv8si;
  ena[313] = HAVE_vcond_mask_v8sfv8si;
  ena[314] = HAVE_vcond_mask_v4div4di;
  ena[315] = HAVE_vcond_mask_v4dfv4di;
  ena[316] = HAVE_vec_cmpv8hiqi;
  ena[317] = HAVE_vec_cmpv4siqi;
  ena[318] = HAVE_vec_cmpv2diqi;
  ena[319] = HAVE_vec_cmpv8siqi;
  ena[320] = HAVE_vec_cmpv4diqi;
  ena[321] = HAVE_vec_cmpv8diqi;
  ena[322] = HAVE_vec_cmpv4sfqi;
  ena[323] = HAVE_vec_cmpv2dfqi;
  ena[324] = HAVE_vec_cmpv8sfqi;
  ena[325] = HAVE_vec_cmpv4dfqi;
  ena[326] = HAVE_vec_cmpv8dfqi;
  ena[327] = HAVE_vec_cmpv16qihi;
  ena[328] = HAVE_vec_cmpv16hihi;
  ena[329] = HAVE_vec_cmpv16sihi;
  ena[330] = HAVE_vec_cmpv16sfhi;
  ena[331] = HAVE_vec_cmpv32qisi;
  ena[332] = HAVE_vec_cmpv32hisi;
  ena[333] = HAVE_vec_cmpv64qidi;
  ena[334] = HAVE_vec_cmpv16qiv16qi;
  ena[335] = HAVE_vec_cmpv8hiv8hi;
  ena[336] = HAVE_vec_cmpv4siv4si;
  ena[337] = HAVE_vec_cmpv4sfv4si;
  ena[338] = HAVE_vec_cmpv2div2di;
  ena[339] = HAVE_vec_cmpv2dfv2di;
  ena[340] = HAVE_vec_cmpv32qiv32qi;
  ena[341] = HAVE_vec_cmpv16hiv16hi;
  ena[342] = HAVE_vec_cmpv8siv8si;
  ena[343] = HAVE_vec_cmpv8sfv8si;
  ena[344] = HAVE_vec_cmpv4div4di;
  ena[345] = HAVE_vec_cmpv4dfv4di;
  ena[346] = HAVE_vec_cmpuv8hiqi;
  ena[347] = HAVE_vec_cmpuv4siqi;
  ena[348] = HAVE_vec_cmpuv2diqi;
  ena[349] = HAVE_vec_cmpuv8siqi;
  ena[350] = HAVE_vec_cmpuv4diqi;
  ena[351] = HAVE_vec_cmpuv8diqi;
  ena[352] = HAVE_vec_cmpuv16qihi;
  ena[353] = HAVE_vec_cmpuv16hihi;
  ena[354] = HAVE_vec_cmpuv16sihi;
  ena[355] = HAVE_vec_cmpuv32qisi;
  ena[356] = HAVE_vec_cmpuv32hisi;
  ena[357] = HAVE_vec_cmpuv64qidi;
  ena[358] = HAVE_vec_cmpuv16qiv16qi;
  ena[359] = HAVE_vec_cmpuv8hiv8hi;
  ena[360] = HAVE_vec_cmpuv4siv4si;
  ena[361] = HAVE_vec_cmpuv2div2di;
  ena[362] = HAVE_vec_cmpuv32qiv32qi;
  ena[363] = HAVE_vec_cmpuv16hiv16hi;
  ena[364] = HAVE_vec_cmpuv8siv8si;
  ena[365] = HAVE_vec_cmpuv4div4di;
  ena[366] = HAVE_vec_cmpeqv2div2di;
  ena[367] = HAVE_maskloadv8hiqi;
  ena[368] = HAVE_maskloadv4siqi;
  ena[369] = HAVE_maskloadv2diqi;
  ena[370] = HAVE_maskloadv8siqi;
  ena[371] = HAVE_maskloadv4diqi;
  ena[372] = HAVE_maskloadv8diqi;
  ena[373] = HAVE_maskloadv4sfqi;
  ena[374] = HAVE_maskloadv2dfqi;
  ena[375] = HAVE_maskloadv8sfqi;
  ena[376] = HAVE_maskloadv4dfqi;
  ena[377] = HAVE_maskloadv8dfqi;
  ena[378] = HAVE_maskloadv16qihi;
  ena[379] = HAVE_maskloadv16hihi;
  ena[380] = HAVE_maskloadv16sihi;
  ena[381] = HAVE_maskloadv16sfhi;
  ena[382] = HAVE_maskloadv32qisi;
  ena[383] = HAVE_maskloadv32hisi;
  ena[384] = HAVE_maskloadv64qidi;
  ena[385] = HAVE_maskloadv4siv4si;
  ena[386] = HAVE_maskloadv4sfv4si;
  ena[387] = HAVE_maskloadv2div2di;
  ena[388] = HAVE_maskloadv2dfv2di;
  ena[389] = HAVE_maskloadv8siv8si;
  ena[390] = HAVE_maskloadv8sfv8si;
  ena[391] = HAVE_maskloadv4div4di;
  ena[392] = HAVE_maskloadv4dfv4di;
  ena[393] = HAVE_maskstorev8hiqi;
  ena[394] = HAVE_maskstorev4siqi;
  ena[395] = HAVE_maskstorev2diqi;
  ena[396] = HAVE_maskstorev8siqi;
  ena[397] = HAVE_maskstorev4diqi;
  ena[398] = HAVE_maskstorev8diqi;
  ena[399] = HAVE_maskstorev4sfqi;
  ena[400] = HAVE_maskstorev2dfqi;
  ena[401] = HAVE_maskstorev8sfqi;
  ena[402] = HAVE_maskstorev4dfqi;
  ena[403] = HAVE_maskstorev8dfqi;
  ena[404] = HAVE_maskstorev16qihi;
  ena[405] = HAVE_maskstorev16hihi;
  ena[406] = HAVE_maskstorev16sihi;
  ena[407] = HAVE_maskstorev16sfhi;
  ena[408] = HAVE_maskstorev32qisi;
  ena[409] = HAVE_maskstorev32hisi;
  ena[410] = HAVE_maskstorev64qidi;
  ena[411] = HAVE_maskstorev4siv4si;
  ena[412] = HAVE_maskstorev4sfv4si;
  ena[413] = HAVE_maskstorev2div2di;
  ena[414] = HAVE_maskstorev2dfv2di;
  ena[415] = HAVE_maskstorev8siv8si;
  ena[416] = HAVE_maskstorev8sfv8si;
  ena[417] = HAVE_maskstorev4div4di;
  ena[418] = HAVE_maskstorev4dfv4di;
  ena[419] = HAVE_vec_extractv8qiqi;
  ena[420] = HAVE_vec_extractv16qiqi;
  ena[421] = HAVE_vec_extractv32qiqi;
  ena[422] = HAVE_vec_extractv64qiqi;
  ena[423] = HAVE_vec_extractv4hihi;
  ena[424] = HAVE_vec_extractv8hihi;
  ena[425] = HAVE_vec_extractv16hihi;
  ena[426] = HAVE_vec_extractv32hihi;
  ena[427] = HAVE_vec_extractv2sisi;
  ena[428] = HAVE_vec_extractv4sisi;
  ena[429] = HAVE_vec_extractv8sisi;
  ena[430] = HAVE_vec_extractv16sisi;
  ena[431] = HAVE_vec_extractv2didi;
  ena[432] = HAVE_vec_extractv4didi;
  ena[433] = HAVE_vec_extractv8didi;
  ena[434] = HAVE_vec_extractv2titi;
  ena[435] = HAVE_vec_extractv4titi;
  ena[436] = HAVE_vec_extractv2sfsf;
  ena[437] = HAVE_vec_extractv4sfsf;
  ena[438] = HAVE_vec_extractv8sfsf;
  ena[439] = HAVE_vec_extractv16sfsf;
  ena[440] = HAVE_vec_extractv2dfdf;
  ena[441] = HAVE_vec_extractv4dfdf;
  ena[442] = HAVE_vec_extractv8dfdf;
  ena[443] = HAVE_vec_extractv64qiv32qi;
  ena[444] = HAVE_vec_extractv32hiv16hi;
  ena[445] = HAVE_vec_extractv16siv8si;
  ena[446] = HAVE_vec_extractv8div4di;
  ena[447] = HAVE_vec_extractv16sfv8sf;
  ena[448] = HAVE_vec_extractv8dfv4df;
  ena[449] = HAVE_vec_initv8qiqi;
  ena[450] = HAVE_vec_initv16qiqi;
  ena[451] = HAVE_vec_initv32qiqi;
  ena[452] = HAVE_vec_initv64qiqi;
  ena[453] = HAVE_vec_initv4hihi;
  ena[454] = HAVE_vec_initv8hihi;
  ena[455] = HAVE_vec_initv16hihi;
  ena[456] = HAVE_vec_initv32hihi;
  ena[457] = HAVE_vec_initv2sisi;
  ena[458] = HAVE_vec_initv4sisi;
  ena[459] = HAVE_vec_initv8sisi;
  ena[460] = HAVE_vec_initv16sisi;
  ena[461] = HAVE_vec_initv2didi;
  ena[462] = HAVE_vec_initv4didi;
  ena[463] = HAVE_vec_initv8didi;
  ena[464] = HAVE_vec_initv2titi;
  ena[465] = HAVE_vec_initv4titi;
  ena[466] = HAVE_vec_initv2sfsf;
  ena[467] = HAVE_vec_initv4sfsf;
  ena[468] = HAVE_vec_initv8sfsf;
  ena[469] = HAVE_vec_initv16sfsf;
  ena[470] = HAVE_vec_initv2dfdf;
  ena[471] = HAVE_vec_initv4dfdf;
  ena[472] = HAVE_vec_initv8dfdf;
  ena[473] = HAVE_vec_initv16qiv8qi;
  ena[474] = HAVE_vec_initv8hiv4hi;
  ena[475] = HAVE_vec_initv4siv2si;
  ena[476] = HAVE_vec_initv32qiv16qi;
  ena[477] = HAVE_vec_initv16hiv8hi;
  ena[478] = HAVE_vec_initv8siv4si;
  ena[479] = HAVE_vec_initv4div2di;
  ena[480] = HAVE_vec_initv64qiv32qi;
  ena[481] = HAVE_vec_initv32hiv16hi;
  ena[482] = HAVE_vec_initv16siv8si;
  ena[483] = HAVE_vec_initv8div4di;
  ena[484] = HAVE_vec_initv4tiv2ti;
  ena[485] = HAVE_vec_initv4sfv2sf;
  ena[486] = HAVE_vec_initv8sfv4sf;
  ena[487] = HAVE_vec_initv4dfv2df;
  ena[488] = HAVE_vec_initv16sfv8sf;
  ena[489] = HAVE_vec_initv8dfv4df;
  ena[490] = HAVE_addqi3;
  ena[491] = HAVE_addhi3;
  ena[492] = HAVE_addsi3;
  ena[493] = HAVE_adddi3;
  ena[494] = HAVE_addti3;
  ena[495] = HAVE_addsf3;
  ena[496] = HAVE_adddf3;
  ena[497] = HAVE_addxf3;
  ena[498] = HAVE_addv16qi3;
  ena[499] = HAVE_addv8hi3;
  ena[500] = HAVE_addv4si3;
  ena[501] = HAVE_addv2di3;
  ena[502] = HAVE_addv32qi3;
  ena[503] = HAVE_addv16hi3;
  ena[504] = HAVE_addv8si3;
  ena[505] = HAVE_addv4di3;
  ena[506] = HAVE_addv64qi3;
  ena[507] = HAVE_addv32hi3;
  ena[508] = HAVE_addv16si3;
  ena[509] = HAVE_addv8di3;
  ena[510] = HAVE_addv4sf3;
  ena[511] = HAVE_addv2df3;
  ena[512] = HAVE_addv8sf3;
  ena[513] = HAVE_addv4df3;
  ena[514] = HAVE_addv16sf3;
  ena[515] = HAVE_addv8df3;
  ena[516] = HAVE_subqi3;
  ena[517] = HAVE_subhi3;
  ena[518] = HAVE_subsi3;
  ena[519] = HAVE_subdi3;
  ena[520] = HAVE_subti3;
  ena[521] = HAVE_subsf3;
  ena[522] = HAVE_subdf3;
  ena[523] = HAVE_subxf3;
  ena[524] = HAVE_subv16qi3;
  ena[525] = HAVE_subv8hi3;
  ena[526] = HAVE_subv4si3;
  ena[527] = HAVE_subv2di3;
  ena[528] = HAVE_subv32qi3;
  ena[529] = HAVE_subv16hi3;
  ena[530] = HAVE_subv8si3;
  ena[531] = HAVE_subv4di3;
  ena[532] = HAVE_subv64qi3;
  ena[533] = HAVE_subv32hi3;
  ena[534] = HAVE_subv16si3;
  ena[535] = HAVE_subv8di3;
  ena[536] = HAVE_subv4sf3;
  ena[537] = HAVE_subv2df3;
  ena[538] = HAVE_subv8sf3;
  ena[539] = HAVE_subv4df3;
  ena[540] = HAVE_subv16sf3;
  ena[541] = HAVE_subv8df3;
  ena[542] = HAVE_mulqi3;
  ena[543] = HAVE_mulhi3;
  ena[544] = HAVE_mulsi3;
  ena[545] = HAVE_muldi3;
  ena[546] = HAVE_mulsf3;
  ena[547] = HAVE_muldf3;
  ena[548] = HAVE_mulxf3;
  ena[549] = HAVE_mulv16qi3;
  ena[550] = HAVE_mulv8hi3;
  ena[551] = HAVE_mulv4si3;
  ena[552] = HAVE_mulv2di3;
  ena[553] = HAVE_mulv32qi3;
  ena[554] = HAVE_mulv16hi3;
  ena[555] = HAVE_mulv8si3;
  ena[556] = HAVE_mulv4di3;
  ena[557] = HAVE_mulv64qi3;
  ena[558] = HAVE_mulv32hi3;
  ena[559] = HAVE_mulv16si3;
  ena[560] = HAVE_mulv8di3;
  ena[561] = HAVE_mulv4sf3;
  ena[562] = HAVE_mulv2df3;
  ena[563] = HAVE_mulv8sf3;
  ena[564] = HAVE_mulv4df3;
  ena[565] = HAVE_mulv16sf3;
  ena[566] = HAVE_mulv8df3;
  ena[567] = HAVE_divsf3;
  ena[568] = HAVE_divdf3;
  ena[569] = HAVE_divxf3;
  ena[570] = HAVE_divv4sf3;
  ena[571] = HAVE_divv2df3;
  ena[572] = HAVE_divv8sf3;
  ena[573] = HAVE_divv4df3;
  ena[574] = HAVE_divv16sf3;
  ena[575] = HAVE_divv8df3;
  ena[576] = HAVE_divmodqi4;
  ena[577] = HAVE_divmodhi4;
  ena[578] = HAVE_divmodsi4;
  ena[579] = HAVE_divmoddi4;
  ena[580] = HAVE_udivmodqi4;
  ena[581] = HAVE_udivmodhi4;
  ena[582] = HAVE_udivmodsi4;
  ena[583] = HAVE_udivmoddi4;
  ena[584] = HAVE_andqi3;
  ena[585] = HAVE_andhi3;
  ena[586] = HAVE_andsi3;
  ena[587] = HAVE_anddi3;
  ena[588] = HAVE_andtf3;
  ena[589] = HAVE_andv16qi3;
  ena[590] = HAVE_andv8hi3;
  ena[591] = HAVE_andv4si3;
  ena[592] = HAVE_andv2di3;
  ena[593] = HAVE_andv32qi3;
  ena[594] = HAVE_andv16hi3;
  ena[595] = HAVE_andv8si3;
  ena[596] = HAVE_andv4di3;
  ena[597] = HAVE_andv64qi3;
  ena[598] = HAVE_andv32hi3;
  ena[599] = HAVE_andv16si3;
  ena[600] = HAVE_andv8di3;
  ena[601] = HAVE_andv4sf3;
  ena[602] = HAVE_andv2df3;
  ena[603] = HAVE_andv8sf3;
  ena[604] = HAVE_andv4df3;
  ena[605] = HAVE_andv16sf3;
  ena[606] = HAVE_andv8df3;
  ena[607] = HAVE_iorqi3;
  ena[608] = HAVE_iorhi3;
  ena[609] = HAVE_iorsi3;
  ena[610] = HAVE_iordi3;
  ena[611] = HAVE_iortf3;
  ena[612] = HAVE_iorv16qi3;
  ena[613] = HAVE_iorv8hi3;
  ena[614] = HAVE_iorv4si3;
  ena[615] = HAVE_iorv2di3;
  ena[616] = HAVE_iorv32qi3;
  ena[617] = HAVE_iorv16hi3;
  ena[618] = HAVE_iorv8si3;
  ena[619] = HAVE_iorv4di3;
  ena[620] = HAVE_iorv64qi3;
  ena[621] = HAVE_iorv32hi3;
  ena[622] = HAVE_iorv16si3;
  ena[623] = HAVE_iorv8di3;
  ena[624] = HAVE_iorv4sf3;
  ena[625] = HAVE_iorv2df3;
  ena[626] = HAVE_iorv8sf3;
  ena[627] = HAVE_iorv4df3;
  ena[628] = HAVE_iorv16sf3;
  ena[629] = HAVE_iorv8df3;
  ena[630] = HAVE_xorqi3;
  ena[631] = HAVE_xorhi3;
  ena[632] = HAVE_xorsi3;
  ena[633] = HAVE_xordi3;
  ena[634] = HAVE_xortf3;
  ena[635] = HAVE_xorv16qi3;
  ena[636] = HAVE_xorv8hi3;
  ena[637] = HAVE_xorv4si3;
  ena[638] = HAVE_xorv2di3;
  ena[639] = HAVE_xorv32qi3;
  ena[640] = HAVE_xorv16hi3;
  ena[641] = HAVE_xorv8si3;
  ena[642] = HAVE_xorv4di3;
  ena[643] = HAVE_xorv64qi3;
  ena[644] = HAVE_xorv32hi3;
  ena[645] = HAVE_xorv16si3;
  ena[646] = HAVE_xorv8di3;
  ena[647] = HAVE_xorv4sf3;
  ena[648] = HAVE_xorv2df3;
  ena[649] = HAVE_xorv8sf3;
  ena[650] = HAVE_xorv4df3;
  ena[651] = HAVE_xorv16sf3;
  ena[652] = HAVE_xorv8df3;
  ena[653] = HAVE_ashlqi3;
  ena[654] = HAVE_ashlhi3;
  ena[655] = HAVE_ashlsi3;
  ena[656] = HAVE_ashldi3;
  ena[657] = HAVE_ashlti3;
  ena[658] = HAVE_ashlv16qi3;
  ena[659] = HAVE_ashlv8hi3;
  ena[660] = HAVE_ashlv4si3;
  ena[661] = HAVE_ashlv2di3;
  ena[662] = HAVE_ashlv32qi3;
  ena[663] = HAVE_ashlv16hi3;
  ena[664] = HAVE_ashlv8si3;
  ena[665] = HAVE_ashlv4di3;
  ena[666] = HAVE_ashlv64qi3;
  ena[667] = HAVE_ashlv32hi3;
  ena[668] = HAVE_ashlv16si3;
  ena[669] = HAVE_ashlv8di3;
  ena[670] = HAVE_ashrqi3;
  ena[671] = HAVE_ashrhi3;
  ena[672] = HAVE_ashrsi3;
  ena[673] = HAVE_ashrdi3;
  ena[674] = HAVE_ashrti3;
  ena[675] = HAVE_ashrv16qi3;
  ena[676] = HAVE_ashrv8hi3;
  ena[677] = HAVE_ashrv4si3;
  ena[678] = HAVE_ashrv2di3;
  ena[679] = HAVE_ashrv32qi3;
  ena[680] = HAVE_ashrv16hi3;
  ena[681] = HAVE_ashrv8si3;
  ena[682] = HAVE_ashrv4di3;
  ena[683] = HAVE_ashrv64qi3;
  ena[684] = HAVE_ashrv32hi3;
  ena[685] = HAVE_ashrv16si3;
  ena[686] = HAVE_ashrv8di3;
  ena[687] = HAVE_lshrqi3;
  ena[688] = HAVE_lshrhi3;
  ena[689] = HAVE_lshrsi3;
  ena[690] = HAVE_lshrdi3;
  ena[691] = HAVE_lshrti3;
  ena[692] = HAVE_lshrv16qi3;
  ena[693] = HAVE_lshrv8hi3;
  ena[694] = HAVE_lshrv4si3;
  ena[695] = HAVE_lshrv2di3;
  ena[696] = HAVE_lshrv32qi3;
  ena[697] = HAVE_lshrv16hi3;
  ena[698] = HAVE_lshrv8si3;
  ena[699] = HAVE_lshrv4di3;
  ena[700] = HAVE_lshrv64qi3;
  ena[701] = HAVE_lshrv32hi3;
  ena[702] = HAVE_lshrv16si3;
  ena[703] = HAVE_lshrv8di3;
  ena[704] = HAVE_rotlqi3;
  ena[705] = HAVE_rotlhi3;
  ena[706] = HAVE_rotlsi3;
  ena[707] = HAVE_rotldi3;
  ena[708] = HAVE_rotlti3;
  ena[709] = HAVE_rotlv16qi3;
  ena[710] = HAVE_rotlv8hi3;
  ena[711] = HAVE_rotlv4si3;
  ena[712] = HAVE_rotlv2di3;
  ena[713] = HAVE_rotrqi3;
  ena[714] = HAVE_rotrhi3;
  ena[715] = HAVE_rotrsi3;
  ena[716] = HAVE_rotrdi3;
  ena[717] = HAVE_rotrti3;
  ena[718] = HAVE_rotrv16qi3;
  ena[719] = HAVE_rotrv8hi3;
  ena[720] = HAVE_rotrv4si3;
  ena[721] = HAVE_rotrv2di3;
  ena[722] = HAVE_vashlv16qi3;
  ena[723] = HAVE_vashlv8hi3;
  ena[724] = HAVE_vashlv4si3;
  ena[725] = HAVE_vashlv2di3;
  ena[726] = HAVE_vashlv8si3;
  ena[727] = HAVE_vashlv4di3;
  ena[728] = HAVE_vashlv16si3;
  ena[729] = HAVE_vashlv8di3;
  ena[730] = HAVE_vashrv16qi3;
  ena[731] = HAVE_vashrv8hi3;
  ena[732] = HAVE_vashrv4si3;
  ena[733] = HAVE_vashrv2di3;
  ena[734] = HAVE_vashrv8si3;
  ena[735] = HAVE_vashrv16si3;
  ena[736] = HAVE_vlshrv16qi3;
  ena[737] = HAVE_vlshrv8hi3;
  ena[738] = HAVE_vlshrv4si3;
  ena[739] = HAVE_vlshrv2di3;
  ena[740] = HAVE_vlshrv8si3;
  ena[741] = HAVE_vlshrv4di3;
  ena[742] = HAVE_vlshrv16si3;
  ena[743] = HAVE_vlshrv8di3;
  ena[744] = HAVE_vrotlv16qi3;
  ena[745] = HAVE_vrotlv8hi3;
  ena[746] = HAVE_vrotlv4si3;
  ena[747] = HAVE_vrotlv2di3;
  ena[748] = HAVE_vrotrv16qi3;
  ena[749] = HAVE_vrotrv8hi3;
  ena[750] = HAVE_vrotrv4si3;
  ena[751] = HAVE_vrotrv2di3;
  ena[752] = HAVE_sminsf3;
  ena[753] = HAVE_smindf3;
  ena[754] = HAVE_sminv16qi3;
  ena[755] = HAVE_sminv8hi3;
  ena[756] = HAVE_sminv4si3;
  ena[757] = HAVE_sminv2di3;
  ena[758] = HAVE_sminv32qi3;
  ena[759] = HAVE_sminv16hi3;
  ena[760] = HAVE_sminv8si3;
  ena[761] = HAVE_sminv4di3;
  ena[762] = HAVE_sminv64qi3;
  ena[763] = HAVE_sminv32hi3;
  ena[764] = HAVE_sminv16si3;
  ena[765] = HAVE_sminv8di3;
  ena[766] = HAVE_sminv4sf3;
  ena[767] = HAVE_sminv2df3;
  ena[768] = HAVE_sminv8sf3;
  ena[769] = HAVE_sminv4df3;
  ena[770] = HAVE_sminv16sf3;
  ena[771] = HAVE_sminv8df3;
  ena[772] = HAVE_smaxsf3;
  ena[773] = HAVE_smaxdf3;
  ena[774] = HAVE_smaxv16qi3;
  ena[775] = HAVE_smaxv8hi3;
  ena[776] = HAVE_smaxv4si3;
  ena[777] = HAVE_smaxv2di3;
  ena[778] = HAVE_smaxv32qi3;
  ena[779] = HAVE_smaxv16hi3;
  ena[780] = HAVE_smaxv8si3;
  ena[781] = HAVE_smaxv4di3;
  ena[782] = HAVE_smaxv64qi3;
  ena[783] = HAVE_smaxv32hi3;
  ena[784] = HAVE_smaxv16si3;
  ena[785] = HAVE_smaxv8di3;
  ena[786] = HAVE_smaxv4sf3;
  ena[787] = HAVE_smaxv2df3;
  ena[788] = HAVE_smaxv8sf3;
  ena[789] = HAVE_smaxv4df3;
  ena[790] = HAVE_smaxv16sf3;
  ena[791] = HAVE_smaxv8df3;
  ena[792] = HAVE_uminv16qi3;
  ena[793] = HAVE_uminv8hi3;
  ena[794] = HAVE_uminv4si3;
  ena[795] = HAVE_uminv2di3;
  ena[796] = HAVE_uminv32qi3;
  ena[797] = HAVE_uminv16hi3;
  ena[798] = HAVE_uminv8si3;
  ena[799] = HAVE_uminv4di3;
  ena[800] = HAVE_uminv64qi3;
  ena[801] = HAVE_uminv32hi3;
  ena[802] = HAVE_uminv16si3;
  ena[803] = HAVE_uminv8di3;
  ena[804] = HAVE_umaxv16qi3;
  ena[805] = HAVE_umaxv8hi3;
  ena[806] = HAVE_umaxv4si3;
  ena[807] = HAVE_umaxv2di3;
  ena[808] = HAVE_umaxv32qi3;
  ena[809] = HAVE_umaxv16hi3;
  ena[810] = HAVE_umaxv8si3;
  ena[811] = HAVE_umaxv4di3;
  ena[812] = HAVE_umaxv64qi3;
  ena[813] = HAVE_umaxv32hi3;
  ena[814] = HAVE_umaxv16si3;
  ena[815] = HAVE_umaxv8di3;
  ena[816] = HAVE_negqi2;
  ena[817] = HAVE_neghi2;
  ena[818] = HAVE_negsi2;
  ena[819] = HAVE_negdi2;
  ena[820] = HAVE_negti2;
  ena[821] = HAVE_negsf2;
  ena[822] = HAVE_negdf2;
  ena[823] = HAVE_negxf2;
  ena[824] = HAVE_negtf2;
  ena[825] = HAVE_negv16qi2;
  ena[826] = HAVE_negv8hi2;
  ena[827] = HAVE_negv4si2;
  ena[828] = HAVE_negv2di2;
  ena[829] = HAVE_negv32qi2;
  ena[830] = HAVE_negv16hi2;
  ena[831] = HAVE_negv8si2;
  ena[832] = HAVE_negv4di2;
  ena[833] = HAVE_negv64qi2;
  ena[834] = HAVE_negv32hi2;
  ena[835] = HAVE_negv16si2;
  ena[836] = HAVE_negv8di2;
  ena[837] = HAVE_negv4sf2;
  ena[838] = HAVE_negv2df2;
  ena[839] = HAVE_negv8sf2;
  ena[840] = HAVE_negv4df2;
  ena[841] = HAVE_negv16sf2;
  ena[842] = HAVE_negv8df2;
  ena[843] = HAVE_abssf2;
  ena[844] = HAVE_absdf2;
  ena[845] = HAVE_absxf2;
  ena[846] = HAVE_abstf2;
  ena[847] = HAVE_absv8qi2;
  ena[848] = HAVE_absv4hi2;
  ena[849] = HAVE_absv2si2;
  ena[850] = HAVE_absv16qi2;
  ena[851] = HAVE_absv8hi2;
  ena[852] = HAVE_absv4si2;
  ena[853] = HAVE_absv2di2;
  ena[854] = HAVE_absv32qi2;
  ena[855] = HAVE_absv16hi2;
  ena[856] = HAVE_absv8si2;
  ena[857] = HAVE_absv4di2;
  ena[858] = HAVE_absv64qi2;
  ena[859] = HAVE_absv32hi2;
  ena[860] = HAVE_absv16si2;
  ena[861] = HAVE_absv8di2;
  ena[862] = HAVE_absv4sf2;
  ena[863] = HAVE_absv2df2;
  ena[864] = HAVE_absv8sf2;
  ena[865] = HAVE_absv4df2;
  ena[866] = HAVE_absv16sf2;
  ena[867] = HAVE_absv8df2;
  ena[868] = HAVE_one_cmplqi2;
  ena[869] = HAVE_one_cmplhi2;
  ena[870] = HAVE_one_cmplsi2;
  ena[871] = HAVE_one_cmpldi2;
  ena[872] = HAVE_one_cmplv16qi2;
  ena[873] = HAVE_one_cmplv8hi2;
  ena[874] = HAVE_one_cmplv4si2;
  ena[875] = HAVE_one_cmplv2di2;
  ena[876] = HAVE_one_cmplv32qi2;
  ena[877] = HAVE_one_cmplv16hi2;
  ena[878] = HAVE_one_cmplv8si2;
  ena[879] = HAVE_one_cmplv4di2;
  ena[880] = HAVE_one_cmplv64qi2;
  ena[881] = HAVE_one_cmplv32hi2;
  ena[882] = HAVE_one_cmplv16si2;
  ena[883] = HAVE_one_cmplv8di2;
  ena[884] = HAVE_bswaphi2;
  ena[885] = HAVE_bswapsi2;
  ena[886] = HAVE_bswapdi2;
  ena[887] = HAVE_ffssi2;
  ena[888] = HAVE_ffsdi2;
  ena[889] = HAVE_clzsi2;
  ena[890] = HAVE_clzdi2;
  ena[891] = HAVE_clzv4si2;
  ena[892] = HAVE_clzv2di2;
  ena[893] = HAVE_clzv8si2;
  ena[894] = HAVE_clzv4di2;
  ena[895] = HAVE_clzv16si2;
  ena[896] = HAVE_clzv8di2;
  ena[897] = HAVE_ctzsi2;
  ena[898] = HAVE_ctzdi2;
  ena[899] = HAVE_popcounthi2;
  ena[900] = HAVE_popcountsi2;
  ena[901] = HAVE_popcountdi2;
  ena[902] = HAVE_paritysi2;
  ena[903] = HAVE_paritydi2;
  ena[904] = HAVE_sqrtsf2;
  ena[905] = HAVE_sqrtdf2;
  ena[906] = HAVE_sqrtxf2;
  ena[907] = HAVE_sqrtv4sf2;
  ena[908] = HAVE_sqrtv2df2;
  ena[909] = HAVE_sqrtv8sf2;
  ena[910] = HAVE_sqrtv4df2;
  ena[911] = HAVE_sqrtv16sf2;
  ena[912] = HAVE_sqrtv8df2;
  ena[913] = HAVE_movqi;
  ena[914] = HAVE_movhi;
  ena[915] = HAVE_movsi;
  ena[916] = HAVE_movdi;
  ena[917] = HAVE_movti;
  ena[918] = HAVE_movoi;
  ena[919] = HAVE_movxi;
  ena[920] = HAVE_movbnd32;
  ena[921] = HAVE_movbnd64;
  ena[922] = HAVE_movsf;
  ena[923] = HAVE_movdf;
  ena[924] = HAVE_movxf;
  ena[925] = HAVE_movtf;
  ena[926] = HAVE_movcdi;
  ena[927] = HAVE_movv8qi;
  ena[928] = HAVE_movv4hi;
  ena[929] = HAVE_movv2si;
  ena[930] = HAVE_movv1di;
  ena[931] = HAVE_movv16qi;
  ena[932] = HAVE_movv8hi;
  ena[933] = HAVE_movv4si;
  ena[934] = HAVE_movv2di;
  ena[935] = HAVE_movv1ti;
  ena[936] = HAVE_movv32qi;
  ena[937] = HAVE_movv16hi;
  ena[938] = HAVE_movv8si;
  ena[939] = HAVE_movv4di;
  ena[940] = HAVE_movv2ti;
  ena[941] = HAVE_movv64qi;
  ena[942] = HAVE_movv32hi;
  ena[943] = HAVE_movv16si;
  ena[944] = HAVE_movv8di;
  ena[945] = HAVE_movv4ti;
  ena[946] = HAVE_movv64si;
  ena[947] = HAVE_movv2sf;
  ena[948] = HAVE_movv4sf;
  ena[949] = HAVE_movv2df;
  ena[950] = HAVE_movv8sf;
  ena[951] = HAVE_movv4df;
  ena[952] = HAVE_movv16sf;
  ena[953] = HAVE_movv8df;
  ena[954] = HAVE_movv64sf;
  ena[955] = HAVE_movstrictqi;
  ena[956] = HAVE_movstricthi;
  ena[957] = HAVE_movmisalignv8qi;
  ena[958] = HAVE_movmisalignv4hi;
  ena[959] = HAVE_movmisalignv2si;
  ena[960] = HAVE_movmisalignv1di;
  ena[961] = HAVE_movmisalignv16qi;
  ena[962] = HAVE_movmisalignv8hi;
  ena[963] = HAVE_movmisalignv4si;
  ena[964] = HAVE_movmisalignv2di;
  ena[965] = HAVE_movmisalignv1ti;
  ena[966] = HAVE_movmisalignv32qi;
  ena[967] = HAVE_movmisalignv16hi;
  ena[968] = HAVE_movmisalignv8si;
  ena[969] = HAVE_movmisalignv4di;
  ena[970] = HAVE_movmisalignv2ti;
  ena[971] = HAVE_movmisalignv64qi;
  ena[972] = HAVE_movmisalignv32hi;
  ena[973] = HAVE_movmisalignv16si;
  ena[974] = HAVE_movmisalignv8di;
  ena[975] = HAVE_movmisalignv4ti;
  ena[976] = HAVE_movmisalignv2sf;
  ena[977] = HAVE_movmisalignv4sf;
  ena[978] = HAVE_movmisalignv2df;
  ena[979] = HAVE_movmisalignv8sf;
  ena[980] = HAVE_movmisalignv4df;
  ena[981] = HAVE_movmisalignv16sf;
  ena[982] = HAVE_movmisalignv8df;
  ena[983] = HAVE_storentsi;
  ena[984] = HAVE_storentdi;
  ena[985] = HAVE_storentsf;
  ena[986] = HAVE_storentdf;
  ena[987] = HAVE_storentv2di;
  ena[988] = HAVE_storentv4di;
  ena[989] = HAVE_storentv8di;
  ena[990] = HAVE_storentv4sf;
  ena[991] = HAVE_storentv2df;
  ena[992] = HAVE_storentv8sf;
  ena[993] = HAVE_storentv4df;
  ena[994] = HAVE_storentv16sf;
  ena[995] = HAVE_storentv8df;
  ena[996] = HAVE_insvhi;
  ena[997] = HAVE_insvsi;
  ena[998] = HAVE_insvdi;
  ena[999] = HAVE_extvhi;
  ena[1000] = HAVE_extvsi;
  ena[1001] = HAVE_extzvhi;
  ena[1002] = HAVE_extzvsi;
  ena[1003] = HAVE_extzvdi;
  ena[1004] = HAVE_cbranchcc4;
  ena[1005] = HAVE_cbranchqi4;
  ena[1006] = HAVE_cbranchhi4;
  ena[1007] = HAVE_cbranchsi4;
  ena[1008] = HAVE_cbranchdi4;
  ena[1009] = HAVE_cbranchti4;
  ena[1010] = HAVE_cbranchsf4;
  ena[1011] = HAVE_cbranchdf4;
  ena[1012] = HAVE_cbranchxf4;
  ena[1013] = HAVE_cbranchv4si4;
  ena[1014] = HAVE_cbranchv2di4;
  ena[1015] = HAVE_cbranchv8si4;
  ena[1016] = HAVE_cbranchv4di4;
  ena[1017] = HAVE_addqicc;
  ena[1018] = HAVE_addhicc;
  ena[1019] = HAVE_addsicc;
  ena[1020] = HAVE_adddicc;
  ena[1021] = HAVE_movqicc;
  ena[1022] = HAVE_movhicc;
  ena[1023] = HAVE_movsicc;
  ena[1024] = HAVE_movdicc;
  ena[1025] = HAVE_movsfcc;
  ena[1026] = HAVE_movdfcc;
  ena[1027] = HAVE_movxfcc;
  ena[1028] = HAVE_cstorecc4;
  ena[1029] = HAVE_cstoreqi4;
  ena[1030] = HAVE_cstorehi4;
  ena[1031] = HAVE_cstoresi4;
  ena[1032] = HAVE_cstoredi4;
  ena[1033] = HAVE_cstoresf4;
  ena[1034] = HAVE_cstoredf4;
  ena[1035] = HAVE_cstorexf4;
  ena[1036] = HAVE_addvqi4;
  ena[1037] = HAVE_addvhi4;
  ena[1038] = HAVE_addvsi4;
  ena[1039] = HAVE_addvdi4;
  ena[1040] = HAVE_subvqi4;
  ena[1041] = HAVE_subvhi4;
  ena[1042] = HAVE_subvsi4;
  ena[1043] = HAVE_subvdi4;
  ena[1044] = HAVE_mulvqi4;
  ena[1045] = HAVE_mulvhi4;
  ena[1046] = HAVE_mulvsi4;
  ena[1047] = HAVE_mulvdi4;
  ena[1048] = HAVE_uaddvqi4;
  ena[1049] = HAVE_uaddvhi4;
  ena[1050] = HAVE_uaddvsi4;
  ena[1051] = HAVE_uaddvdi4;
  ena[1052] = HAVE_usubvqi4;
  ena[1053] = HAVE_usubvhi4;
  ena[1054] = HAVE_usubvsi4;
  ena[1055] = HAVE_usubvdi4;
  ena[1056] = HAVE_umulvqi4;
  ena[1057] = HAVE_umulvhi4;
  ena[1058] = HAVE_umulvsi4;
  ena[1059] = HAVE_umulvdi4;
  ena[1060] = HAVE_negvqi3;
  ena[1061] = HAVE_negvhi3;
  ena[1062] = HAVE_negvsi3;
  ena[1063] = HAVE_negvdi3;
  ena[1064] = HAVE_smulsi3_highpart;
  ena[1065] = HAVE_smuldi3_highpart;
  ena[1066] = HAVE_smulv8hi3_highpart;
  ena[1067] = HAVE_smulv16hi3_highpart;
  ena[1068] = HAVE_smulv32hi3_highpart;
  ena[1069] = HAVE_umulsi3_highpart;
  ena[1070] = HAVE_umuldi3_highpart;
  ena[1071] = HAVE_umulv8hi3_highpart;
  ena[1072] = HAVE_umulv16hi3_highpart;
  ena[1073] = HAVE_umulv32hi3_highpart;
  ena[1074] = HAVE_cmpstrnsi;
  ena[1075] = HAVE_movmemsi;
  ena[1076] = HAVE_movmemdi;
  ena[1077] = HAVE_setmemsi;
  ena[1078] = HAVE_setmemdi;
  ena[1079] = HAVE_strlensi;
  ena[1080] = HAVE_strlendi;
  ena[1081] = HAVE_fmasf4;
  ena[1082] = HAVE_fmadf4;
  ena[1083] = HAVE_fmav4sf4;
  ena[1084] = HAVE_fmav2df4;
  ena[1085] = HAVE_fmav8sf4;
  ena[1086] = HAVE_fmav4df4;
  ena[1087] = HAVE_fmav16sf4;
  ena[1088] = HAVE_fmav8df4;
  ena[1089] = HAVE_fmssf4;
  ena[1090] = HAVE_fmsdf4;
  ena[1091] = HAVE_fmsv4sf4;
  ena[1092] = HAVE_fmsv2df4;
  ena[1093] = HAVE_fmsv8sf4;
  ena[1094] = HAVE_fmsv4df4;
  ena[1095] = HAVE_fmsv16sf4;
  ena[1096] = HAVE_fmsv8df4;
  ena[1097] = HAVE_fnmasf4;
  ena[1098] = HAVE_fnmadf4;
  ena[1099] = HAVE_fnmav4sf4;
  ena[1100] = HAVE_fnmav2df4;
  ena[1101] = HAVE_fnmav8sf4;
  ena[1102] = HAVE_fnmav4df4;
  ena[1103] = HAVE_fnmav16sf4;
  ena[1104] = HAVE_fnmav8df4;
  ena[1105] = HAVE_fnmssf4;
  ena[1106] = HAVE_fnmsdf4;
  ena[1107] = HAVE_fnmsv4sf4;
  ena[1108] = HAVE_fnmsv2df4;
  ena[1109] = HAVE_fnmsv8sf4;
  ena[1110] = HAVE_fnmsv4df4;
  ena[1111] = HAVE_fnmsv16sf4;
  ena[1112] = HAVE_fnmsv8df4;
  ena[1113] = HAVE_rintsf2;
  ena[1114] = HAVE_rintdf2;
  ena[1115] = HAVE_rintxf2;
  ena[1116] = HAVE_roundsf2;
  ena[1117] = HAVE_rounddf2;
  ena[1118] = HAVE_roundxf2;
  ena[1119] = HAVE_roundv4sf2;
  ena[1120] = HAVE_roundv2df2;
  ena[1121] = HAVE_roundv8sf2;
  ena[1122] = HAVE_roundv4df2;
  ena[1123] = HAVE_roundv16sf2;
  ena[1124] = HAVE_roundv8df2;
  ena[1125] = HAVE_floorsf2;
  ena[1126] = HAVE_floordf2;
  ena[1127] = HAVE_floorxf2;
  ena[1128] = HAVE_ceilsf2;
  ena[1129] = HAVE_ceildf2;
  ena[1130] = HAVE_ceilxf2;
  ena[1131] = HAVE_btruncsf2;
  ena[1132] = HAVE_btruncdf2;
  ena[1133] = HAVE_btruncxf2;
  ena[1134] = HAVE_nearbyintsf2;
  ena[1135] = HAVE_nearbyintdf2;
  ena[1136] = HAVE_nearbyintxf2;
  ena[1137] = HAVE_acossf2;
  ena[1138] = HAVE_acosdf2;
  ena[1139] = HAVE_acosxf2;
  ena[1140] = HAVE_asinsf2;
  ena[1141] = HAVE_asindf2;
  ena[1142] = HAVE_asinxf2;
  ena[1143] = HAVE_atan2sf3;
  ena[1144] = HAVE_atan2df3;
  ena[1145] = HAVE_atan2xf3;
  ena[1146] = HAVE_atansf2;
  ena[1147] = HAVE_atandf2;
  ena[1148] = HAVE_atanxf2;
  ena[1149] = HAVE_copysignsf3;
  ena[1150] = HAVE_copysigndf3;
  ena[1151] = HAVE_copysigntf3;
  ena[1152] = HAVE_copysignv4sf3;
  ena[1153] = HAVE_copysignv2df3;
  ena[1154] = HAVE_copysignv8sf3;
  ena[1155] = HAVE_copysignv4df3;
  ena[1156] = HAVE_copysignv16sf3;
  ena[1157] = HAVE_copysignv8df3;
  ena[1158] = HAVE_exp10sf2;
  ena[1159] = HAVE_exp10df2;
  ena[1160] = HAVE_exp10xf2;
  ena[1161] = HAVE_exp2sf2;
  ena[1162] = HAVE_exp2df2;
  ena[1163] = HAVE_exp2xf2;
  ena[1164] = HAVE_expsf2;
  ena[1165] = HAVE_expdf2;
  ena[1166] = HAVE_expxf2;
  ena[1167] = HAVE_expm1sf2;
  ena[1168] = HAVE_expm1df2;
  ena[1169] = HAVE_expm1xf2;
  ena[1170] = HAVE_fmodsf3;
  ena[1171] = HAVE_fmoddf3;
  ena[1172] = HAVE_fmodxf3;
  ena[1173] = HAVE_ilogbsf2;
  ena[1174] = HAVE_ilogbdf2;
  ena[1175] = HAVE_ilogbxf2;
  ena[1176] = HAVE_isinfsf2;
  ena[1177] = HAVE_isinfdf2;
  ena[1178] = HAVE_isinfxf2;
  ena[1179] = HAVE_ldexpsf3;
  ena[1180] = HAVE_ldexpdf3;
  ena[1181] = HAVE_ldexpxf3;
  ena[1182] = HAVE_log10sf2;
  ena[1183] = HAVE_log10df2;
  ena[1184] = HAVE_log10xf2;
  ena[1185] = HAVE_log1psf2;
  ena[1186] = HAVE_log1pdf2;
  ena[1187] = HAVE_log1pxf2;
  ena[1188] = HAVE_log2sf2;
  ena[1189] = HAVE_log2df2;
  ena[1190] = HAVE_log2xf2;
  ena[1191] = HAVE_logsf2;
  ena[1192] = HAVE_logdf2;
  ena[1193] = HAVE_logxf2;
  ena[1194] = HAVE_logbsf2;
  ena[1195] = HAVE_logbdf2;
  ena[1196] = HAVE_logbxf2;
  ena[1197] = HAVE_remaindersf3;
  ena[1198] = HAVE_remainderdf3;
  ena[1199] = HAVE_remainderxf3;
  ena[1200] = HAVE_rsqrtsf2;
  ena[1201] = HAVE_rsqrtv4sf2;
  ena[1202] = HAVE_rsqrtv8sf2;
  ena[1203] = HAVE_rsqrtv16sf2;
  ena[1204] = HAVE_scalbsf3;
  ena[1205] = HAVE_scalbdf3;
  ena[1206] = HAVE_scalbxf3;
  ena[1207] = HAVE_signbitsf2;
  ena[1208] = HAVE_signbitdf2;
  ena[1209] = HAVE_signbitxf2;
  ena[1210] = HAVE_signbittf2;
  ena[1211] = HAVE_significandsf2;
  ena[1212] = HAVE_significanddf2;
  ena[1213] = HAVE_significandxf2;
  ena[1214] = HAVE_sincossf3;
  ena[1215] = HAVE_sincosdf3;
  ena[1216] = HAVE_sincosxf3;
  ena[1217] = HAVE_tansf2;
  ena[1218] = HAVE_tandf2;
  ena[1219] = HAVE_tanxf2;
  ena[1220] = HAVE_reduc_smax_scal_v32qi;
  ena[1221] = HAVE_reduc_smax_scal_v16hi;
  ena[1222] = HAVE_reduc_smax_scal_v8si;
  ena[1223] = HAVE_reduc_smax_scal_v4di;
  ena[1224] = HAVE_reduc_smax_scal_v64qi;
  ena[1225] = HAVE_reduc_smax_scal_v32hi;
  ena[1226] = HAVE_reduc_smax_scal_v16si;
  ena[1227] = HAVE_reduc_smax_scal_v8di;
  ena[1228] = HAVE_reduc_smax_scal_v4sf;
  ena[1229] = HAVE_reduc_smax_scal_v8sf;
  ena[1230] = HAVE_reduc_smax_scal_v4df;
  ena[1231] = HAVE_reduc_smax_scal_v16sf;
  ena[1232] = HAVE_reduc_smax_scal_v8df;
  ena[1233] = HAVE_reduc_smin_scal_v32qi;
  ena[1234] = HAVE_reduc_smin_scal_v16hi;
  ena[1235] = HAVE_reduc_smin_scal_v8si;
  ena[1236] = HAVE_reduc_smin_scal_v4di;
  ena[1237] = HAVE_reduc_smin_scal_v64qi;
  ena[1238] = HAVE_reduc_smin_scal_v32hi;
  ena[1239] = HAVE_reduc_smin_scal_v16si;
  ena[1240] = HAVE_reduc_smin_scal_v8di;
  ena[1241] = HAVE_reduc_smin_scal_v4sf;
  ena[1242] = HAVE_reduc_smin_scal_v8sf;
  ena[1243] = HAVE_reduc_smin_scal_v4df;
  ena[1244] = HAVE_reduc_smin_scal_v16sf;
  ena[1245] = HAVE_reduc_smin_scal_v8df;
  ena[1246] = HAVE_reduc_plus_scal_v4sf;
  ena[1247] = HAVE_reduc_plus_scal_v2df;
  ena[1248] = HAVE_reduc_plus_scal_v8sf;
  ena[1249] = HAVE_reduc_plus_scal_v4df;
  ena[1250] = HAVE_reduc_plus_scal_v16sf;
  ena[1251] = HAVE_reduc_plus_scal_v8df;
  ena[1252] = HAVE_reduc_umax_scal_v32qi;
  ena[1253] = HAVE_reduc_umax_scal_v16hi;
  ena[1254] = HAVE_reduc_umax_scal_v8si;
  ena[1255] = HAVE_reduc_umax_scal_v4di;
  ena[1256] = HAVE_reduc_umax_scal_v64qi;
  ena[1257] = HAVE_reduc_umax_scal_v32hi;
  ena[1258] = HAVE_reduc_umax_scal_v16si;
  ena[1259] = HAVE_reduc_umax_scal_v8di;
  ena[1260] = HAVE_reduc_umin_scal_v8hi;
  ena[1261] = HAVE_reduc_umin_scal_v32qi;
  ena[1262] = HAVE_reduc_umin_scal_v16hi;
  ena[1263] = HAVE_reduc_umin_scal_v8si;
  ena[1264] = HAVE_reduc_umin_scal_v4di;
  ena[1265] = HAVE_reduc_umin_scal_v64qi;
  ena[1266] = HAVE_reduc_umin_scal_v32hi;
  ena[1267] = HAVE_reduc_umin_scal_v16si;
  ena[1268] = HAVE_reduc_umin_scal_v8di;
  ena[1269] = HAVE_sdot_prodv8hi;
  ena[1270] = HAVE_sdot_prodv4si;
  ena[1271] = HAVE_sdot_prodv16hi;
  ena[1272] = HAVE_sdot_prodv32hi;
  ena[1273] = HAVE_usadv16qi;
  ena[1274] = HAVE_usadv32qi;
  ena[1275] = HAVE_vec_pack_sfix_trunc_v2df;
  ena[1276] = HAVE_vec_pack_sfix_trunc_v4df;
  ena[1277] = HAVE_vec_pack_sfix_trunc_v8df;
  ena[1278] = HAVE_vec_pack_trunc_qi;
  ena[1279] = HAVE_vec_pack_trunc_hi;
  ena[1280] = HAVE_vec_pack_trunc_si;
  ena[1281] = HAVE_vec_pack_trunc_v8hi;
  ena[1282] = HAVE_vec_pack_trunc_v4si;
  ena[1283] = HAVE_vec_pack_trunc_v2di;
  ena[1284] = HAVE_vec_pack_trunc_v16hi;
  ena[1285] = HAVE_vec_pack_trunc_v8si;
  ena[1286] = HAVE_vec_pack_trunc_v4di;
  ena[1287] = HAVE_vec_pack_trunc_v32hi;
  ena[1288] = HAVE_vec_pack_trunc_v16si;
  ena[1289] = HAVE_vec_pack_trunc_v8di;
  ena[1290] = HAVE_vec_pack_trunc_v2df;
  ena[1291] = HAVE_vec_pack_trunc_v4df;
  ena[1292] = HAVE_vec_pack_trunc_v8df;
  ena[1293] = HAVE_vec_pack_ufix_trunc_v2df;
  ena[1294] = HAVE_vec_pack_ufix_trunc_v4df;
  ena[1295] = HAVE_vec_pack_ufix_trunc_v8df;
  ena[1296] = HAVE_vec_permv16qi;
  ena[1297] = HAVE_vec_permv8hi;
  ena[1298] = HAVE_vec_permv4si;
  ena[1299] = HAVE_vec_permv2di;
  ena[1300] = HAVE_vec_permv32qi;
  ena[1301] = HAVE_vec_permv16hi;
  ena[1302] = HAVE_vec_permv8si;
  ena[1303] = HAVE_vec_permv4di;
  ena[1304] = HAVE_vec_permv64qi;
  ena[1305] = HAVE_vec_permv32hi;
  ena[1306] = HAVE_vec_permv16si;
  ena[1307] = HAVE_vec_permv8di;
  ena[1308] = HAVE_vec_permv4sf;
  ena[1309] = HAVE_vec_permv2df;
  ena[1310] = HAVE_vec_permv8sf;
  ena[1311] = HAVE_vec_permv4df;
  ena[1312] = HAVE_vec_permv16sf;
  ena[1313] = HAVE_vec_permv8df;
  ena[1314] = HAVE_vec_setv8qi;
  ena[1315] = HAVE_vec_setv4hi;
  ena[1316] = HAVE_vec_setv2si;
  ena[1317] = HAVE_vec_setv16qi;
  ena[1318] = HAVE_vec_setv8hi;
  ena[1319] = HAVE_vec_setv4si;
  ena[1320] = HAVE_vec_setv2di;
  ena[1321] = HAVE_vec_setv32qi;
  ena[1322] = HAVE_vec_setv16hi;
  ena[1323] = HAVE_vec_setv8si;
  ena[1324] = HAVE_vec_setv4di;
  ena[1325] = HAVE_vec_setv64qi;
  ena[1326] = HAVE_vec_setv32hi;
  ena[1327] = HAVE_vec_setv16si;
  ena[1328] = HAVE_vec_setv8di;
  ena[1329] = HAVE_vec_setv2sf;
  ena[1330] = HAVE_vec_setv4sf;
  ena[1331] = HAVE_vec_setv2df;
  ena[1332] = HAVE_vec_setv8sf;
  ena[1333] = HAVE_vec_setv4df;
  ena[1334] = HAVE_vec_setv16sf;
  ena[1335] = HAVE_vec_setv8df;
  ena[1336] = HAVE_vec_shr_v16qi;
  ena[1337] = HAVE_vec_shr_v8hi;
  ena[1338] = HAVE_vec_shr_v4si;
  ena[1339] = HAVE_vec_shr_v2di;
  ena[1340] = HAVE_vec_unpacks_float_hi_v8hi;
  ena[1341] = HAVE_vec_unpacks_float_hi_v4si;
  ena[1342] = HAVE_vec_unpacks_float_hi_v16hi;
  ena[1343] = HAVE_vec_unpacks_float_hi_v8si;
  ena[1344] = HAVE_vec_unpacks_float_hi_v32hi;
  ena[1345] = HAVE_vec_unpacks_float_hi_v16si;
  ena[1346] = HAVE_vec_unpacks_float_lo_v8hi;
  ena[1347] = HAVE_vec_unpacks_float_lo_v4si;
  ena[1348] = HAVE_vec_unpacks_float_lo_v16hi;
  ena[1349] = HAVE_vec_unpacks_float_lo_v8si;
  ena[1350] = HAVE_vec_unpacks_float_lo_v32hi;
  ena[1351] = HAVE_vec_unpacks_float_lo_v16si;
  ena[1352] = HAVE_vec_unpacks_hi_hi;
  ena[1353] = HAVE_vec_unpacks_hi_si;
  ena[1354] = HAVE_vec_unpacks_hi_di;
  ena[1355] = HAVE_vec_unpacks_hi_v16qi;
  ena[1356] = HAVE_vec_unpacks_hi_v8hi;
  ena[1357] = HAVE_vec_unpacks_hi_v4si;
  ena[1358] = HAVE_vec_unpacks_hi_v32qi;
  ena[1359] = HAVE_vec_unpacks_hi_v16hi;
  ena[1360] = HAVE_vec_unpacks_hi_v8si;
  ena[1361] = HAVE_vec_unpacks_hi_v64qi;
  ena[1362] = HAVE_vec_unpacks_hi_v32hi;
  ena[1363] = HAVE_vec_unpacks_hi_v16si;
  ena[1364] = HAVE_vec_unpacks_hi_v4sf;
  ena[1365] = HAVE_vec_unpacks_hi_v8sf;
  ena[1366] = HAVE_vec_unpacks_hi_v16sf;
  ena[1367] = HAVE_vec_unpacks_lo_hi;
  ena[1368] = HAVE_vec_unpacks_lo_si;
  ena[1369] = HAVE_vec_unpacks_lo_di;
  ena[1370] = HAVE_vec_unpacks_lo_v16qi;
  ena[1371] = HAVE_vec_unpacks_lo_v8hi;
  ena[1372] = HAVE_vec_unpacks_lo_v4si;
  ena[1373] = HAVE_vec_unpacks_lo_v32qi;
  ena[1374] = HAVE_vec_unpacks_lo_v16hi;
  ena[1375] = HAVE_vec_unpacks_lo_v8si;
  ena[1376] = HAVE_vec_unpacks_lo_v64qi;
  ena[1377] = HAVE_vec_unpacks_lo_v32hi;
  ena[1378] = HAVE_vec_unpacks_lo_v16si;
  ena[1379] = HAVE_vec_unpacks_lo_v4sf;
  ena[1380] = HAVE_vec_unpacks_lo_v8sf;
  ena[1381] = HAVE_vec_unpacks_lo_v16sf;
  ena[1382] = HAVE_vec_unpacku_float_hi_v8hi;
  ena[1383] = HAVE_vec_unpacku_float_hi_v4si;
  ena[1384] = HAVE_vec_unpacku_float_hi_v16hi;
  ena[1385] = HAVE_vec_unpacku_float_hi_v8si;
  ena[1386] = HAVE_vec_unpacku_float_hi_v32hi;
  ena[1387] = HAVE_vec_unpacku_float_hi_v16si;
  ena[1388] = HAVE_vec_unpacku_float_lo_v8hi;
  ena[1389] = HAVE_vec_unpacku_float_lo_v4si;
  ena[1390] = HAVE_vec_unpacku_float_lo_v16hi;
  ena[1391] = HAVE_vec_unpacku_float_lo_v8si;
  ena[1392] = HAVE_vec_unpacku_float_lo_v32hi;
  ena[1393] = HAVE_vec_unpacku_float_lo_v16si;
  ena[1394] = HAVE_vec_unpacku_hi_v16qi;
  ena[1395] = HAVE_vec_unpacku_hi_v8hi;
  ena[1396] = HAVE_vec_unpacku_hi_v4si;
  ena[1397] = HAVE_vec_unpacku_hi_v32qi;
  ena[1398] = HAVE_vec_unpacku_hi_v16hi;
  ena[1399] = HAVE_vec_unpacku_hi_v8si;
  ena[1400] = HAVE_vec_unpacku_hi_v64qi;
  ena[1401] = HAVE_vec_unpacku_hi_v32hi;
  ena[1402] = HAVE_vec_unpacku_hi_v16si;
  ena[1403] = HAVE_vec_unpacku_lo_v16qi;
  ena[1404] = HAVE_vec_unpacku_lo_v8hi;
  ena[1405] = HAVE_vec_unpacku_lo_v4si;
  ena[1406] = HAVE_vec_unpacku_lo_v32qi;
  ena[1407] = HAVE_vec_unpacku_lo_v16hi;
  ena[1408] = HAVE_vec_unpacku_lo_v8si;
  ena[1409] = HAVE_vec_unpacku_lo_v64qi;
  ena[1410] = HAVE_vec_unpacku_lo_v32hi;
  ena[1411] = HAVE_vec_unpacku_lo_v16si;
  ena[1412] = HAVE_vec_widen_smult_even_v4si;
  ena[1413] = HAVE_vec_widen_smult_even_v8si;
  ena[1414] = HAVE_vec_widen_smult_even_v16si;
  ena[1415] = HAVE_vec_widen_smult_hi_v16qi;
  ena[1416] = HAVE_vec_widen_smult_hi_v8hi;
  ena[1417] = HAVE_vec_widen_smult_hi_v4si;
  ena[1418] = HAVE_vec_widen_smult_hi_v32qi;
  ena[1419] = HAVE_vec_widen_smult_hi_v16hi;
  ena[1420] = HAVE_vec_widen_smult_hi_v8si;
  ena[1421] = HAVE_vec_widen_smult_lo_v16qi;
  ena[1422] = HAVE_vec_widen_smult_lo_v8hi;
  ena[1423] = HAVE_vec_widen_smult_lo_v4si;
  ena[1424] = HAVE_vec_widen_smult_lo_v32qi;
  ena[1425] = HAVE_vec_widen_smult_lo_v16hi;
  ena[1426] = HAVE_vec_widen_smult_lo_v8si;
  ena[1427] = HAVE_vec_widen_smult_odd_v4si;
  ena[1428] = HAVE_vec_widen_smult_odd_v8si;
  ena[1429] = HAVE_vec_widen_smult_odd_v16si;
  ena[1430] = HAVE_vec_widen_umult_even_v4si;
  ena[1431] = HAVE_vec_widen_umult_even_v8si;
  ena[1432] = HAVE_vec_widen_umult_even_v16si;
  ena[1433] = HAVE_vec_widen_umult_hi_v16qi;
  ena[1434] = HAVE_vec_widen_umult_hi_v8hi;
  ena[1435] = HAVE_vec_widen_umult_hi_v4si;
  ena[1436] = HAVE_vec_widen_umult_hi_v32qi;
  ena[1437] = HAVE_vec_widen_umult_hi_v16hi;
  ena[1438] = HAVE_vec_widen_umult_hi_v8si;
  ena[1439] = HAVE_vec_widen_umult_lo_v16qi;
  ena[1440] = HAVE_vec_widen_umult_lo_v8hi;
  ena[1441] = HAVE_vec_widen_umult_lo_v4si;
  ena[1442] = HAVE_vec_widen_umult_lo_v32qi;
  ena[1443] = HAVE_vec_widen_umult_lo_v16hi;
  ena[1444] = HAVE_vec_widen_umult_lo_v8si;
  ena[1445] = HAVE_vec_widen_umult_odd_v4si;
  ena[1446] = HAVE_vec_widen_umult_odd_v8si;
  ena[1447] = HAVE_vec_widen_umult_odd_v16si;
  ena[1448] = HAVE_atomic_addqi;
  ena[1449] = HAVE_atomic_addhi;
  ena[1450] = HAVE_atomic_addsi;
  ena[1451] = HAVE_atomic_adddi;
  ena[1452] = HAVE_atomic_andqi;
  ena[1453] = HAVE_atomic_andhi;
  ena[1454] = HAVE_atomic_andsi;
  ena[1455] = HAVE_atomic_anddi;
  ena[1456] = HAVE_atomic_bit_test_and_sethi;
  ena[1457] = HAVE_atomic_bit_test_and_setsi;
  ena[1458] = HAVE_atomic_bit_test_and_setdi;
  ena[1459] = HAVE_atomic_bit_test_and_complementhi;
  ena[1460] = HAVE_atomic_bit_test_and_complementsi;
  ena[1461] = HAVE_atomic_bit_test_and_complementdi;
  ena[1462] = HAVE_atomic_bit_test_and_resethi;
  ena[1463] = HAVE_atomic_bit_test_and_resetsi;
  ena[1464] = HAVE_atomic_bit_test_and_resetdi;
  ena[1465] = HAVE_atomic_compare_and_swapqi;
  ena[1466] = HAVE_atomic_compare_and_swaphi;
  ena[1467] = HAVE_atomic_compare_and_swapsi;
  ena[1468] = HAVE_atomic_compare_and_swapdi;
  ena[1469] = HAVE_atomic_compare_and_swapti;
  ena[1470] = HAVE_atomic_exchangeqi;
  ena[1471] = HAVE_atomic_exchangehi;
  ena[1472] = HAVE_atomic_exchangesi;
  ena[1473] = HAVE_atomic_exchangedi;
  ena[1474] = HAVE_atomic_fetch_addqi;
  ena[1475] = HAVE_atomic_fetch_addhi;
  ena[1476] = HAVE_atomic_fetch_addsi;
  ena[1477] = HAVE_atomic_fetch_adddi;
  ena[1478] = HAVE_atomic_loadqi;
  ena[1479] = HAVE_atomic_loadhi;
  ena[1480] = HAVE_atomic_loadsi;
  ena[1481] = HAVE_atomic_loaddi;
  ena[1482] = HAVE_atomic_orqi;
  ena[1483] = HAVE_atomic_orhi;
  ena[1484] = HAVE_atomic_orsi;
  ena[1485] = HAVE_atomic_ordi;
  ena[1486] = HAVE_atomic_storeqi;
  ena[1487] = HAVE_atomic_storehi;
  ena[1488] = HAVE_atomic_storesi;
  ena[1489] = HAVE_atomic_storedi;
  ena[1490] = HAVE_atomic_subqi;
  ena[1491] = HAVE_atomic_subhi;
  ena[1492] = HAVE_atomic_subsi;
  ena[1493] = HAVE_atomic_subdi;
  ena[1494] = HAVE_atomic_xorqi;
  ena[1495] = HAVE_atomic_xorhi;
  ena[1496] = HAVE_atomic_xorsi;
  ena[1497] = HAVE_atomic_xordi;
}

static int
lookup_handler (unsigned scode)
{
  int l = 0, h = ARRAY_SIZE (pats), m;
  while (h > l)
    {
      m = (h + l) / 2;
      if (scode == pats[m].scode)
        return m;
      else if (scode < pats[m].scode)
        h = m;
      else
        l = m + 1;
    }
  return -1;
}

enum insn_code
raw_optab_handler (unsigned scode)
{
  int i = lookup_handler (scode);
  return (i >= 0 && this_fn_optabs->pat_enable[i]
          ? pats[i].icode : CODE_FOR_nothing);
}

bool
swap_optab_enable (optab op, machine_mode m, bool set)
{
  unsigned scode = (op << 16) | m;
  int i = lookup_handler (scode);
  if (i >= 0)
    {
      bool ret = this_fn_optabs->pat_enable[i];
      this_fn_optabs->pat_enable[i] = set;
      return ret;
    }
  else
    {
      gcc_assert (!set);
      return false;
    }
}

const struct convert_optab_libcall_d convlib_def[NUM_CONVLIB_OPTABS] = {
  { "extend", gen_extend_conv_libfunc },
  { "trunc", gen_trunc_conv_libfunc },
  { NULL, NULL },
  { "fix", gen_fp_to_int_conv_libfunc },
  { "fixuns", gen_fp_to_int_conv_libfunc },
  { "float", gen_int_to_fp_conv_libfunc },
  { NULL, gen_ufloat_conv_libfunc },
  { "lrint", gen_int_to_fp_nondecimal_conv_libfunc },
  { "lround", gen_int_to_fp_nondecimal_conv_libfunc },
  { "lfloor", gen_int_to_fp_nondecimal_conv_libfunc },
  { "lceil", gen_int_to_fp_nondecimal_conv_libfunc },
  { "fract", gen_fract_conv_libfunc },
  { "fractuns", gen_fractuns_conv_libfunc },
  { "satfract", gen_satfract_conv_libfunc },
  { "satfractuns", gen_satfractuns_conv_libfunc },
};

const struct optab_libcall_d normlib_def[NUM_NORMLIB_OPTABS] = {
  { '3', "add", gen_int_fp_fixed_libfunc },
  { '3', "add", gen_intv_fp_libfunc },
  { '3', "ssadd", gen_signed_fixed_libfunc },
  { '3', "usadd", gen_unsigned_fixed_libfunc },
  { '3', "sub", gen_int_fp_fixed_libfunc },
  { '3', "sub", gen_intv_fp_libfunc },
  { '3', "sssub", gen_signed_fixed_libfunc },
  { '3', "ussub", gen_unsigned_fixed_libfunc },
  { '3', "mul", gen_int_fp_fixed_libfunc },
  { '3', "mul", gen_intv_fp_libfunc },
  { '3', "ssmul", gen_signed_fixed_libfunc },
  { '3', "usmul", gen_unsigned_fixed_libfunc },
  { '3', "div", gen_int_fp_signed_fixed_libfunc },
  { '3', "divv", gen_int_libfunc },
  { '3', "ssdiv", gen_signed_fixed_libfunc },
  { '3', "udiv", gen_int_unsigned_fixed_libfunc },
  { '3', "usdiv", gen_unsigned_fixed_libfunc },
  { '\0', NULL, NULL },
  { '\0', NULL, NULL },
  { '3', "mod", gen_int_libfunc },
  { '3', "umod", gen_int_libfunc },
  { '2', "ftrunc", gen_fp_libfunc },
  { '3', "and", gen_int_libfunc },
  { '3', "ior", gen_int_libfunc },
  { '3', "xor", gen_int_libfunc },
  { '3', "ashl", gen_int_fixed_libfunc },
  { '3', "ssashl", gen_signed_fixed_libfunc },
  { '3', "usashl", gen_unsigned_fixed_libfunc },
  { '3', "ashr", gen_int_signed_fixed_libfunc },
  { '3', "lshr", gen_int_unsigned_fixed_libfunc },
  { '\0', NULL, NULL },
  { '\0', NULL, NULL },
  { '\0', NULL, NULL },
  { '\0', NULL, NULL },
  { '\0', NULL, NULL },
  { '\0', NULL, NULL },
  { '\0', NULL, NULL },
  { '3', "min", gen_int_fp_libfunc },
  { '3', "max", gen_int_fp_libfunc },
  { '3', "umin", gen_int_libfunc },
  { '3', "umax", gen_int_libfunc },
  { '2', "neg", gen_int_fp_fixed_libfunc },
  { '2', "neg", gen_intv_fp_libfunc },
  { '2', "ssneg", gen_signed_fixed_libfunc },
  { '2', "usneg", gen_unsigned_fixed_libfunc },
  { '\0', NULL, NULL },
  { '\0', NULL, NULL },
  { '2', "one_cmpl", gen_int_libfunc },
  { '\0', NULL, NULL },
  { '2', "ffs", gen_int_libfunc },
  { '2', "clz", gen_int_libfunc },
  { '2', "ctz", gen_int_libfunc },
  { '2', "clrsb", gen_int_libfunc },
  { '2', "popcount", gen_int_libfunc },
  { '2', "parity", gen_int_libfunc },
  { '2', "cmp", gen_int_fp_fixed_libfunc },
  { '2', "ucmp", gen_int_libfunc },
  { '2', "eq", gen_fp_libfunc },
  { '2', "ne", gen_fp_libfunc },
  { '2', "gt", gen_fp_libfunc },
  { '2', "ge", gen_fp_libfunc },
  { '2', "lt", gen_fp_libfunc },
  { '2', "le", gen_fp_libfunc },
  { '2', "unord", gen_fp_libfunc },
  { '2', "powi", gen_fp_libfunc },
  { '\0', NULL, NULL },
  { '\0', NULL, NULL },
  { '\0', NULL, NULL },
  { '\0', NULL, NULL },
  { '\0', NULL, NULL },
  { '\0', NULL, NULL },
  { '\0', NULL, NULL },
  { '\0', NULL, NULL },
  { '\0', NULL, NULL },
  { '\0', NULL, NULL },
  { '\0', NULL, NULL },
  { '\0', NULL, NULL },
  { '\0', NULL, NULL },
  { '\0', NULL, NULL },
  { '\0', NULL, NULL },
};

enum rtx_code const optab_to_code_[NUM_OPTABS] = {
  UNKNOWN,
  SIGN_EXTEND,
  TRUNCATE,
  ZERO_EXTEND,
  FIX,
  UNSIGNED_FIX,
  FLOAT,
  UNSIGNED_FLOAT,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  FRACT_CONVERT,
  UNSIGNED_FRACT_CONVERT,
  SAT_FRACT,
  UNSIGNED_SAT_FRACT,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  PLUS,
  PLUS,
  SS_PLUS,
  US_PLUS,
  MINUS,
  MINUS,
  SS_MINUS,
  US_MINUS,
  MULT,
  MULT,
  SS_MULT,
  US_MULT,
  DIV,
  DIV,
  SS_DIV,
  UDIV,
  US_DIV,
  UNKNOWN,
  UNKNOWN,
  MOD,
  UMOD,
  UNKNOWN,
  AND,
  IOR,
  XOR,
  ASHIFT,
  SS_ASHIFT,
  US_ASHIFT,
  ASHIFTRT,
  LSHIFTRT,
  ROTATE,
  ROTATERT,
  ASHIFT,
  ASHIFTRT,
  LSHIFTRT,
  ROTATE,
  ROTATERT,
  SMIN,
  SMAX,
  UMIN,
  UMAX,
  NEG,
  NEG,
  SS_NEG,
  US_NEG,
  ABS,
  ABS,
  NOT,
  BSWAP,
  FFS,
  CLZ,
  CTZ,
  CLRSB,
  POPCOUNT,
  PARITY,
  UNKNOWN,
  UNKNOWN,
  EQ,
  NE,
  GT,
  GE,
  LT,
  LE,
  UNORDERED,
  UNKNOWN,
  SQRT,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  SET,
  STRICT_LOW_PART,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  COMPARE,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  FMA,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  VEC_DUPLICATE,
  VEC_SERIES,
  UNKNOWN,
};

const optab code_to_optab_[NUM_RTX_CODE] = {
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  mov_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  movstrict_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  cbranch_optab,
  add_optab,
  sub_optab,
  neg_optab,
  smul_optab,
  ssmul_optab,
  usmul_optab,
  sdiv_optab,
  ssdiv_optab,
  usdiv_optab,
  smod_optab,
  udiv_optab,
  umod_optab,
  and_optab,
  ior_optab,
  xor_optab,
  one_cmpl_optab,
  ashl_optab,
  rotl_optab,
  ashr_optab,
  lshr_optab,
  rotr_optab,
  smin_optab,
  smax_optab,
  umin_optab,
  umax_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  ne_optab,
  eq_optab,
  ge_optab,
  gt_optab,
  le_optab,
  lt_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unord_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  abs_optab,
  sqrt_optab,
  bswap_optab,
  ffs_optab,
  clrsb_optab,
  clz_optab,
  ctz_optab,
  popcount_optab,
  parity_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  vec_duplicate_optab,
  vec_series_optab,
  ssadd_optab,
  usadd_optab,
  sssub_optab,
  ssneg_optab,
  usneg_optab,
  unknown_optab,
  ssashl_optab,
  usashl_optab,
  ussub_optab,
  unknown_optab,
  unknown_optab,
  fma_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
};

