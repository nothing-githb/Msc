#include "../../Config.h"

#ifndef BIT8_H_
#define BIT8_H_

#include <stdlib.h>
#include "Tables.h"

const uint8_t TABLE(8, 01)[256] = {
        0x00,0x1,0x2,0x3,0x4,0x5,0x6,0x7,0x8,0x9,0xa,0xb,0xc,0xd,0xe,0xf,
        0x10,0x11,0x12,0x13,0x14,0x15,0x16,0x17,0x18,0x19,0x1a,0x1b,0x1c,0x1d,0x1e,0x1f,
        0x20,0x21,0x22,0x23,0x24,0x25,0x26,0x27,0x28,0x29,0x2a,0x2b,0x2c,0x2d,0x2e,0x2f,
        0x30,0x31,0x32,0x33,0x34,0x35,0x36,0x37,0x38,0x39,0x3a,0x3b,0x3c,0x3d,0x3e,0x3f,
        0x40,0x41,0x42,0x43,0x44,0x45,0x46,0x47,0x48,0x49,0x4a,0x4b,0x4c,0x4d,0x4e,0x4f,
        0x50,0x51,0x52,0x53,0x54,0x55,0x56,0x57,0x58,0x59,0x5a,0x5b,0x5c,0x5d,0x5e,0x5f,
        0x60,0x61,0x62,0x63,0x64,0x65,0x66,0x67,0x68,0x69,0x6a,0x6b,0x6c,0x6d,0x6e,0x6f,
        0x70,0x71,0x72,0x73,0x74,0x75,0x76,0x77,0x78,0x79,0x7a,0x7b,0x7c,0x7d,0x7e,0x7f,
        0x80,0x81,0x82,0x83,0x84,0x85,0x86,0x87,0x88,0x89,0x8a,0x8b,0x8c,0x8d,0x8e,0x8f,
        0x90,0x91,0x92,0x93,0x94,0x95,0x96,0x97,0x98,0x99,0x9a,0x9b,0x9c,0x9d,0x9e,0x9f,
        0xa0,0xa1,0xa2,0xa3,0xa4,0xa5,0xa6,0xa7,0xa8,0xa9,0xaa,0xab,0xac,0xad,0xae,0xaf,
        0xb0,0xb1,0xb2,0xb3,0xb4,0xb5,0xb6,0xb7,0xb8,0xb9,0xba,0xbb,0xbc,0xbd,0xbe,0xbf,
        0xc0,0xc1,0xc2,0xc3,0xc4,0xc5,0xc6,0xc7,0xc8,0xc9,0xca,0xcb,0xcc,0xcd,0xce,0xcf,
        0xd0,0xd1,0xd2,0xd3,0xd4,0xd5,0xd6,0xd7,0xd8,0xd9,0xda,0xdb,0xdc,0xdd,0xde,0xdf,
        0xe0,0xe1,0xe2,0xe3,0xe4,0xe5,0xe6,0xe7,0xe8,0xe9,0xea,0xeb,0xec,0xed,0xee,0xef,
        0xf0,0xf1,0xf2,0xf3,0xf4,0xf5,0xf6,0xf7,0xf8,0xf9,0xfa,0xfb,0xfc,0xfd,0xfe,0xff};

const uint8_t TABLE(8, 02)[256] = {
        0x00,0x2,0x4,0x6,0x8,0xa,0xc,0xe,0x10,0x12,0x14,0x16,0x18,0x1a,0x1c,0x1e,
        0x20,0x22,0x24,0x26,0x28,0x2a,0x2c,0x2e,0x30,0x32,0x34,0x36,0x38,0x3a,0x3c,0x3e,
        0x40,0x42,0x44,0x46,0x48,0x4a,0x4c,0x4e,0x50,0x52,0x54,0x56,0x58,0x5a,0x5c,0x5e,
        0x60,0x62,0x64,0x66,0x68,0x6a,0x6c,0x6e,0x70,0x72,0x74,0x76,0x78,0x7a,0x7c,0x7e,
        0x80,0x82,0x84,0x86,0x88,0x8a,0x8c,0x8e,0x90,0x92,0x94,0x96,0x98,0x9a,0x9c,0x9e,
        0xa0,0xa2,0xa4,0xa6,0xa8,0xaa,0xac,0xae,0xb0,0xb2,0xb4,0xb6,0xb8,0xba,0xbc,0xbe,
        0xc0,0xc2,0xc4,0xc6,0xc8,0xca,0xcc,0xce,0xd0,0xd2,0xd4,0xd6,0xd8,0xda,0xdc,0xde,
        0xe0,0xe2,0xe4,0xe6,0xe8,0xea,0xec,0xee,0xf0,0xf2,0xf4,0xf6,0xf8,0xfa,0xfc,0xfe,
        0x1b,0x19,0x1f,0x1d,0x13,0x11,0x17,0x15,0xb,0x9,0xf,0xd,0x3,0x1,0x7,0x5,
        0x3b,0x39,0x3f,0x3d,0x33,0x31,0x37,0x35,0x2b,0x29,0x2f,0x2d,0x23,0x21,0x27,0x25,
        0x5b,0x59,0x5f,0x5d,0x53,0x51,0x57,0x55,0x4b,0x49,0x4f,0x4d,0x43,0x41,0x47,0x45,
        0x7b,0x79,0x7f,0x7d,0x73,0x71,0x77,0x75,0x6b,0x69,0x6f,0x6d,0x63,0x61,0x67,0x65,
        0x9b,0x99,0x9f,0x9d,0x93,0x91,0x97,0x95,0x8b,0x89,0x8f,0x8d,0x83,0x81,0x87,0x85,
        0xbb,0xb9,0xbf,0xbd,0xb3,0xb1,0xb7,0xb5,0xab,0xa9,0xaf,0xad,0xa3,0xa1,0xa7,0xa5,
        0xdb,0xd9,0xdf,0xdd,0xd3,0xd1,0xd7,0xd5,0xcb,0xc9,0xcf,0xcd,0xc3,0xc1,0xc7,0xc5,
        0xfb,0xf9,0xff,0xfd,0xf3,0xf1,0xf7,0xf5,0xeb,0xe9,0xef,0xed,0xe3,0xe1,0xe7,0xe5};

const uint8_t TABLE(8, 03)[256] = {
        0x00,0x3,0x6,0x5,0xc,0xf,0xa,0x9,0x18,0x1b,0x1e,0x1d,0x14,0x17,0x12,0x11,
        0x30,0x33,0x36,0x35,0x3c,0x3f,0x3a,0x39,0x28,0x2b,0x2e,0x2d,0x24,0x27,0x22,0x21,
        0x60,0x63,0x66,0x65,0x6c,0x6f,0x6a,0x69,0x78,0x7b,0x7e,0x7d,0x74,0x77,0x72,0x71,
        0x50,0x53,0x56,0x55,0x5c,0x5f,0x5a,0x59,0x48,0x4b,0x4e,0x4d,0x44,0x47,0x42,0x41,
        0xc0,0xc3,0xc6,0xc5,0xcc,0xcf,0xca,0xc9,0xd8,0xdb,0xde,0xdd,0xd4,0xd7,0xd2,0xd1,
        0xf0,0xf3,0xf6,0xf5,0xfc,0xff,0xfa,0xf9,0xe8,0xeb,0xee,0xed,0xe4,0xe7,0xe2,0xe1,
        0xa0,0xa3,0xa6,0xa5,0xac,0xaf,0xaa,0xa9,0xb8,0xbb,0xbe,0xbd,0xb4,0xb7,0xb2,0xb1,
        0x90,0x93,0x96,0x95,0x9c,0x9f,0x9a,0x99,0x88,0x8b,0x8e,0x8d,0x84,0x87,0x82,0x81,
        0x9b,0x98,0x9d,0x9e,0x97,0x94,0x91,0x92,0x83,0x80,0x85,0x86,0x8f,0x8c,0x89,0x8a,
        0xab,0xa8,0xad,0xae,0xa7,0xa4,0xa1,0xa2,0xb3,0xb0,0xb5,0xb6,0xbf,0xbc,0xb9,0xba,
        0xfb,0xf8,0xfd,0xfe,0xf7,0xf4,0xf1,0xf2,0xe3,0xe0,0xe5,0xe6,0xef,0xec,0xe9,0xea,
        0xcb,0xc8,0xcd,0xce,0xc7,0xc4,0xc1,0xc2,0xd3,0xd0,0xd5,0xd6,0xdf,0xdc,0xd9,0xda,
        0x5b,0x58,0x5d,0x5e,0x57,0x54,0x51,0x52,0x43,0x40,0x45,0x46,0x4f,0x4c,0x49,0x4a,
        0x6b,0x68,0x6d,0x6e,0x67,0x64,0x61,0x62,0x73,0x70,0x75,0x76,0x7f,0x7c,0x79,0x7a,
        0x3b,0x38,0x3d,0x3e,0x37,0x34,0x31,0x32,0x23,0x20,0x25,0x26,0x2f,0x2c,0x29,0x2a,
        0xb,0x8,0xd,0xe,0x7,0x4,0x1,0x2,0x13,0x10,0x15,0x16,0x1f,0x1c,0x19,0x1a};

const uint8_t TABLE(8, 08)[256] = {
        0x00,0x8,0x10,0x18,0x20,0x28,0x30,0x38,0x40,0x48,0x50,0x58,0x60,0x68,0x70,0x78,
        0x80,0x88,0x90,0x98,0xa0,0xa8,0xb0,0xb8,0xc0,0xc8,0xd0,0xd8,0xe0,0xe8,0xf0,0xf8,
        0x1b,0x13,0xb,0x3,0x3b,0x33,0x2b,0x23,0x5b,0x53,0x4b,0x43,0x7b,0x73,0x6b,0x63,
        0x9b,0x93,0x8b,0x83,0xbb,0xb3,0xab,0xa3,0xdb,0xd3,0xcb,0xc3,0xfb,0xf3,0xeb,0xe3,
        0x36,0x3e,0x26,0x2e,0x16,0x1e,0x6,0xe,0x76,0x7e,0x66,0x6e,0x56,0x5e,0x46,0x4e,
        0xb6,0xbe,0xa6,0xae,0x96,0x9e,0x86,0x8e,0xf6,0xfe,0xe6,0xee,0xd6,0xde,0xc6,0xce,
        0x2d,0x25,0x3d,0x35,0xd,0x5,0x1d,0x15,0x6d,0x65,0x7d,0x75,0x4d,0x45,0x5d,0x55,
        0xad,0xa5,0xbd,0xb5,0x8d,0x85,0x9d,0x95,0xed,0xe5,0xfd,0xf5,0xcd,0xc5,0xdd,0xd5,
        0x6c,0x64,0x7c,0x74,0x4c,0x44,0x5c,0x54,0x2c,0x24,0x3c,0x34,0xc,0x4,0x1c,0x14,
        0xec,0xe4,0xfc,0xf4,0xcc,0xc4,0xdc,0xd4,0xac,0xa4,0xbc,0xb4,0x8c,0x84,0x9c,0x94,
        0x77,0x7f,0x67,0x6f,0x57,0x5f,0x47,0x4f,0x37,0x3f,0x27,0x2f,0x17,0x1f,0x7,0xf,
        0xf7,0xff,0xe7,0xef,0xd7,0xdf,0xc7,0xcf,0xb7,0xbf,0xa7,0xaf,0x97,0x9f,0x87,0x8f,
        0x5a,0x52,0x4a,0x42,0x7a,0x72,0x6a,0x62,0x1a,0x12,0xa,0x2,0x3a,0x32,0x2a,0x22,
        0xda,0xd2,0xca,0xc2,0xfa,0xf2,0xea,0xe2,0x9a,0x92,0x8a,0x82,0xba,0xb2,0xaa,0xa2,
        0x41,0x49,0x51,0x59,0x61,0x69,0x71,0x79,0x1,0x9,0x11,0x19,0x21,0x29,0x31,0x39,
        0xc1,0xc9,0xd1,0xd9,0xe1,0xe9,0xf1,0xf9,0x81,0x89,0x91,0x99,0xa1,0xa9,0xb1,0xb9};

const uint8_t TABLE(8, 16)[256] = {
        0x00,0x16,0x2c,0x3a,0x58,0x4e,0x74,0x62,0xb0,0xa6,0x9c,0x8a,0xe8,0xfe,0xc4,0xd2,
        0x7b,0x6d,0x57,0x41,0x23,0x35,0xf,0x19,0xcb,0xdd,0xe7,0xf1,0x93,0x85,0xbf,0xa9,
        0xf6,0xe0,0xda,0xcc,0xae,0xb8,0x82,0x94,0x46,0x50,0x6a,0x7c,0x1e,0x8,0x32,0x24,
        0x8d,0x9b,0xa1,0xb7,0xd5,0xc3,0xf9,0xef,0x3d,0x2b,0x11,0x7,0x65,0x73,0x49,0x5f,
        0xf7,0xe1,0xdb,0xcd,0xaf,0xb9,0x83,0x95,0x47,0x51,0x6b,0x7d,0x1f,0x9,0x33,0x25,
        0x8c,0x9a,0xa0,0xb6,0xd4,0xc2,0xf8,0xee,0x3c,0x2a,0x10,0x6,0x64,0x72,0x48,0x5e,
        0x1,0x17,0x2d,0x3b,0x59,0x4f,0x75,0x63,0xb1,0xa7,0x9d,0x8b,0xe9,0xff,0xc5,0xd3,
        0x7a,0x6c,0x56,0x40,0x22,0x34,0xe,0x18,0xca,0xdc,0xe6,0xf0,0x92,0x84,0xbe,0xa8,
        0xf5,0xe3,0xd9,0xcf,0xad,0xbb,0x81,0x97,0x45,0x53,0x69,0x7f,0x1d,0xb,0x31,0x27,
        0x8e,0x98,0xa2,0xb4,0xd6,0xc0,0xfa,0xec,0x3e,0x28,0x12,0x4,0x66,0x70,0x4a,0x5c,
        0x3,0x15,0x2f,0x39,0x5b,0x4d,0x77,0x61,0xb3,0xa5,0x9f,0x89,0xeb,0xfd,0xc7,0xd1,
        0x78,0x6e,0x54,0x42,0x20,0x36,0xc,0x1a,0xc8,0xde,0xe4,0xf2,0x90,0x86,0xbc,0xaa,
        0x2,0x14,0x2e,0x38,0x5a,0x4c,0x76,0x60,0xb2,0xa4,0x9e,0x88,0xea,0xfc,0xc6,0xd0,
        0x79,0x6f,0x55,0x43,0x21,0x37,0xd,0x1b,0xc9,0xdf,0xe5,0xf3,0x91,0x87,0xbd,0xab,
        0xf4,0xe2,0xd8,0xce,0xac,0xba,0x80,0x96,0x44,0x52,0x68,0x7e,0x1c,0xa,0x30,0x26,
        0x8f,0x99,0xa3,0xb5,0xd7,0xc1,0xfb,0xed,0x3f,0x29,0x13,0x5,0x67,0x71,0x4b,0x5d};

const uint8_t TABLE(8, 8a)[256] = {
        0x00,0x8a,0xf,0x85,0x1e,0x94,0x11,0x9b,0x3c,0xb6,0x33,0xb9,0x22,0xa8,0x2d,0xa7,
        0x78,0xf2,0x77,0xfd,0x66,0xec,0x69,0xe3,0x44,0xce,0x4b,0xc1,0x5a,0xd0,0x55,0xdf,
        0xf0,0x7a,0xff,0x75,0xee,0x64,0xe1,0x6b,0xcc,0x46,0xc3,0x49,0xd2,0x58,0xdd,0x57,
        0x88,0x2,0x87,0xd,0x96,0x1c,0x99,0x13,0xb4,0x3e,0xbb,0x31,0xaa,0x20,0xa5,0x2f,
        0xfb,0x71,0xf4,0x7e,0xe5,0x6f,0xea,0x60,0xc7,0x4d,0xc8,0x42,0xd9,0x53,0xd6,0x5c,
        0x83,0x9,0x8c,0x6,0x9d,0x17,0x92,0x18,0xbf,0x35,0xb0,0x3a,0xa1,0x2b,0xae,0x24,
        0xb,0x81,0x4,0x8e,0x15,0x9f,0x1a,0x90,0x37,0xbd,0x38,0xb2,0x29,0xa3,0x26,0xac,
        0x73,0xf9,0x7c,0xf6,0x6d,0xe7,0x62,0xe8,0x4f,0xc5,0x40,0xca,0x51,0xdb,0x5e,0xd4,
        0xed,0x67,0xe2,0x68,0xf3,0x79,0xfc,0x76,0xd1,0x5b,0xde,0x54,0xcf,0x45,0xc0,0x4a,
        0x95,0x1f,0x9a,0x10,0x8b,0x1,0x84,0xe,0xa9,0x23,0xa6,0x2c,0xb7,0x3d,0xb8,0x32,
        0x1d,0x97,0x12,0x98,0x3,0x89,0xc,0x86,0x21,0xab,0x2e,0xa4,0x3f,0xb5,0x30,0xba,
        0x65,0xef,0x6a,0xe0,0x7b,0xf1,0x74,0xfe,0x59,0xd3,0x56,0xdc,0x47,0xcd,0x48,0xc2,
        0x16,0x9c,0x19,0x93,0x8,0x82,0x7,0x8d,0x2a,0xa0,0x25,0xaf,0x34,0xbe,0x3b,0xb1,
        0x6e,0xe4,0x61,0xeb,0x70,0xfa,0x7f,0xf5,0x52,0xd8,0x5d,0xd7,0x4c,0xc6,0x43,0xc9,
        0xe6,0x6c,0xe9,0x63,0xf8,0x72,0xf7,0x7d,0xda,0x50,0xd5,0x5f,0xc4,0x4e,0xcb,0x41,
        0x9e,0x14,0x91,0x1b,0x80,0xa,0x8f,0x5,0xa2,0x28,0xad,0x27,0xbc,0x36,0xb3,0x39};

const uint8_t TABLE(8, 70)[256] = {
        0x00,0x70,0xe0,0x90,0xdb,0xab,0x3b,0x4b,0xad,0xdd,0x4d,0x3d,0x76,0x6,0x96,0xe6,
        0x41,0x31,0xa1,0xd1,0x9a,0xea,0x7a,0xa,0xec,0x9c,0xc,0x7c,0x37,0x47,0xd7,0xa7,
        0x82,0xf2,0x62,0x12,0x59,0x29,0xb9,0xc9,0x2f,0x5f,0xcf,0xbf,0xf4,0x84,0x14,0x64,
        0xc3,0xb3,0x23,0x53,0x18,0x68,0xf8,0x88,0x6e,0x1e,0x8e,0xfe,0xb5,0xc5,0x55,0x25,
        0x1f,0x6f,0xff,0x8f,0xc4,0xb4,0x24,0x54,0xb2,0xc2,0x52,0x22,0x69,0x19,0x89,0xf9,
        0x5e,0x2e,0xbe,0xce,0x85,0xf5,0x65,0x15,0xf3,0x83,0x13,0x63,0x28,0x58,0xc8,0xb8,
        0x9d,0xed,0x7d,0xd,0x46,0x36,0xa6,0xd6,0x30,0x40,0xd0,0xa0,0xeb,0x9b,0xb,0x7b,
        0xdc,0xac,0x3c,0x4c,0x7,0x77,0xe7,0x97,0x71,0x1,0x91,0xe1,0xaa,0xda,0x4a,0x3a,
        0x3e,0x4e,0xde,0xae,0xe5,0x95,0x5,0x75,0x93,0xe3,0x73,0x3,0x48,0x38,0xa8,0xd8,
        0x7f,0xf,0x9f,0xef,0xa4,0xd4,0x44,0x34,0xd2,0xa2,0x32,0x42,0x9,0x79,0xe9,0x99,
        0xbc,0xcc,0x5c,0x2c,0x67,0x17,0x87,0xf7,0x11,0x61,0xf1,0x81,0xca,0xba,0x2a,0x5a,
        0xfd,0x8d,0x1d,0x6d,0x26,0x56,0xc6,0xb6,0x50,0x20,0xb0,0xc0,0x8b,0xfb,0x6b,0x1b,
        0x21,0x51,0xc1,0xb1,0xfa,0x8a,0x1a,0x6a,0x8c,0xfc,0x6c,0x1c,0x57,0x27,0xb7,0xc7,
        0x60,0x10,0x80,0xf0,0xbb,0xcb,0x5b,0x2b,0xcd,0xbd,0x2d,0x5d,0x16,0x66,0xf6,0x86,
        0xa3,0xd3,0x43,0x33,0x78,0x8,0x98,0xe8,0xe,0x7e,0xee,0x9e,0xd5,0xa5,0x35,0x45,
        0xe2,0x92,0x2,0x72,0x39,0x49,0xd9,0xa9,0x4f,0x3f,0xaf,0xdf,0x94,0xe4,0x74,0x4};

const uint8_t TABLE(8, 8d)[256] = {
        0x00,0x8d,0x1,0x8c,0x2,0x8f,0x3,0x8e,0x4,0x89,0x5,0x88,0x6,0x8b,0x7,0x8a,
        0x8,0x85,0x9,0x84,0xa,0x87,0xb,0x86,0xc,0x81,0xd,0x80,0xe,0x83,0xf,0x82,
        0x10,0x9d,0x11,0x9c,0x12,0x9f,0x13,0x9e,0x14,0x99,0x15,0x98,0x16,0x9b,0x17,0x9a,
        0x18,0x95,0x19,0x94,0x1a,0x97,0x1b,0x96,0x1c,0x91,0x1d,0x90,0x1e,0x93,0x1f,0x92,
        0x20,0xad,0x21,0xac,0x22,0xaf,0x23,0xae,0x24,0xa9,0x25,0xa8,0x26,0xab,0x27,0xaa,
        0x28,0xa5,0x29,0xa4,0x2a,0xa7,0x2b,0xa6,0x2c,0xa1,0x2d,0xa0,0x2e,0xa3,0x2f,0xa2,
        0x30,0xbd,0x31,0xbc,0x32,0xbf,0x33,0xbe,0x34,0xb9,0x35,0xb8,0x36,0xbb,0x37,0xba,
        0x38,0xb5,0x39,0xb4,0x3a,0xb7,0x3b,0xb6,0x3c,0xb1,0x3d,0xb0,0x3e,0xb3,0x3f,0xb2,
        0x40,0xcd,0x41,0xcc,0x42,0xcf,0x43,0xce,0x44,0xc9,0x45,0xc8,0x46,0xcb,0x47,0xca,
        0x48,0xc5,0x49,0xc4,0x4a,0xc7,0x4b,0xc6,0x4c,0xc1,0x4d,0xc0,0x4e,0xc3,0x4f,0xc2,
        0x50,0xdd,0x51,0xdc,0x52,0xdf,0x53,0xde,0x54,0xd9,0x55,0xd8,0x56,0xdb,0x57,0xda,
        0x58,0xd5,0x59,0xd4,0x5a,0xd7,0x5b,0xd6,0x5c,0xd1,0x5d,0xd0,0x5e,0xd3,0x5f,0xd2,
        0x60,0xed,0x61,0xec,0x62,0xef,0x63,0xee,0x64,0xe9,0x65,0xe8,0x66,0xeb,0x67,0xea,
        0x68,0xe5,0x69,0xe4,0x6a,0xe7,0x6b,0xe6,0x6c,0xe1,0x6d,0xe0,0x6e,0xe3,0x6f,0xe2,
        0x70,0xfd,0x71,0xfc,0x72,0xff,0x73,0xfe,0x74,0xf9,0x75,0xf8,0x76,0xfb,0x77,0xfa,
        0x78,0xf5,0x79,0xf4,0x7a,0xf7,0x7b,0xf6,0x7c,0xf1,0x7d,0xf0,0x7e,0xf3,0x7f,0xf2};

const uint8_t TABLE(8, 24)[256] = {
        0x00,0x24,0x48,0x6c,0x90,0xb4,0xd8,0xfc,0x3b,0x1f,0x73,0x57,0xab,0x8f,0xe3,0xc7,
        0x76,0x52,0x3e,0x1a,0xe6,0xc2,0xae,0x8a,0x4d,0x69,0x5,0x21,0xdd,0xf9,0x95,0xb1,
        0xec,0xc8,0xa4,0x80,0x7c,0x58,0x34,0x10,0xd7,0xf3,0x9f,0xbb,0x47,0x63,0xf,0x2b,
        0x9a,0xbe,0xd2,0xf6,0xa,0x2e,0x42,0x66,0xa1,0x85,0xe9,0xcd,0x31,0x15,0x79,0x5d,
        0xc3,0xe7,0x8b,0xaf,0x53,0x77,0x1b,0x3f,0xf8,0xdc,0xb0,0x94,0x68,0x4c,0x20,0x4,
        0xb5,0x91,0xfd,0xd9,0x25,0x1,0x6d,0x49,0x8e,0xaa,0xc6,0xe2,0x1e,0x3a,0x56,0x72,
        0x2f,0xb,0x67,0x43,0xbf,0x9b,0xf7,0xd3,0x14,0x30,0x5c,0x78,0x84,0xa0,0xcc,0xe8,
        0x59,0x7d,0x11,0x35,0xc9,0xed,0x81,0xa5,0x62,0x46,0x2a,0xe,0xf2,0xd6,0xba,0x9e,
        0x9d,0xb9,0xd5,0xf1,0xd,0x29,0x45,0x61,0xa6,0x82,0xee,0xca,0x36,0x12,0x7e,0x5a,
        0xeb,0xcf,0xa3,0x87,0x7b,0x5f,0x33,0x17,0xd0,0xf4,0x98,0xbc,0x40,0x64,0x8,0x2c,
        0x71,0x55,0x39,0x1d,0xe1,0xc5,0xa9,0x8d,0x4a,0x6e,0x2,0x26,0xda,0xfe,0x92,0xb6,
        0x7,0x23,0x4f,0x6b,0x97,0xb3,0xdf,0xfb,0x3c,0x18,0x74,0x50,0xac,0x88,0xe4,0xc0,
        0x5e,0x7a,0x16,0x32,0xce,0xea,0x86,0xa2,0x65,0x41,0x2d,0x9,0xf5,0xd1,0xbd,0x99,
        0x28,0xc,0x60,0x44,0xb8,0x9c,0xf0,0xd4,0x13,0x37,0x5b,0x7f,0x83,0xa7,0xcb,0xef,
        0xb2,0x96,0xfa,0xde,0x22,0x6,0x6a,0x4e,0x89,0xad,0xc1,0xe5,0x19,0x3d,0x51,0x75,
        0xc4,0xe0,0x8c,0xa8,0x54,0x70,0x1c,0x38,0xff,0xdb,0xb7,0x93,0x6f,0x4b,0x27,0x3};

const uint8_t TABLE(8, 76)[256] = {
        0x00,0x76,0xec,0x9a,0xc3,0xb5,0x2f,0x59,0x9d,0xeb,0x71,0x7,0x5e,0x28,0xb2,0xc4,
        0x21,0x57,0xcd,0xbb,0xe2,0x94,0xe,0x78,0xbc,0xca,0x50,0x26,0x7f,0x9,0x93,0xe5,
        0x42,0x34,0xae,0xd8,0x81,0xf7,0x6d,0x1b,0xdf,0xa9,0x33,0x45,0x1c,0x6a,0xf0,0x86,
        0x63,0x15,0x8f,0xf9,0xa0,0xd6,0x4c,0x3a,0xfe,0x88,0x12,0x64,0x3d,0x4b,0xd1,0xa7,
        0x84,0xf2,0x68,0x1e,0x47,0x31,0xab,0xdd,0x19,0x6f,0xf5,0x83,0xda,0xac,0x36,0x40,
        0xa5,0xd3,0x49,0x3f,0x66,0x10,0x8a,0xfc,0x38,0x4e,0xd4,0xa2,0xfb,0x8d,0x17,0x61,
        0xc6,0xb0,0x2a,0x5c,0x5,0x73,0xe9,0x9f,0x5b,0x2d,0xb7,0xc1,0x98,0xee,0x74,0x2,
        0xe7,0x91,0xb,0x7d,0x24,0x52,0xc8,0xbe,0x7a,0xc,0x96,0xe0,0xb9,0xcf,0x55,0x23,
        0x13,0x65,0xff,0x89,0xd0,0xa6,0x3c,0x4a,0x8e,0xf8,0x62,0x14,0x4d,0x3b,0xa1,0xd7,
        0x32,0x44,0xde,0xa8,0xf1,0x87,0x1d,0x6b,0xaf,0xd9,0x43,0x35,0x6c,0x1a,0x80,0xf6,
        0x51,0x27,0xbd,0xcb,0x92,0xe4,0x7e,0x8,0xcc,0xba,0x20,0x56,0xf,0x79,0xe3,0x95,
        0x70,0x6,0x9c,0xea,0xb3,0xc5,0x5f,0x29,0xed,0x9b,0x1,0x77,0x2e,0x58,0xc2,0xb4,
        0x97,0xe1,0x7b,0xd,0x54,0x22,0xb8,0xce,0xa,0x7c,0xe6,0x90,0xc9,0xbf,0x25,0x53,
        0xb6,0xc0,0x5a,0x2c,0x75,0x3,0x99,0xef,0x2b,0x5d,0xc7,0xb1,0xe8,0x9e,0x4,0x72,
        0xd5,0xa3,0x39,0x4f,0x16,0x60,0xfa,0x8c,0x48,0x3e,0xa4,0xd2,0x8b,0xfd,0x67,0x11,
        0xf4,0x82,0x18,0x6e,0x37,0x41,0xdb,0xad,0x69,0x1f,0x85,0xf3,0xaa,0xdc,0x46,0x30};

const uint8_t TABLE(8, a8)[256] = {
        0x00,0xa8,0x4b,0xe3,0x96,0x3e,0xdd,0x75,0x37,0x9f,0x7c,0xd4,0xa1,0x9,0xea,0x42,
        0x6e,0xc6,0x25,0x8d,0xf8,0x50,0xb3,0x1b,0x59,0xf1,0x12,0xba,0xcf,0x67,0x84,0x2c,
        0xdc,0x74,0x97,0x3f,0x4a,0xe2,0x1,0xa9,0xeb,0x43,0xa0,0x8,0x7d,0xd5,0x36,0x9e,
        0xb2,0x1a,0xf9,0x51,0x24,0x8c,0x6f,0xc7,0x85,0x2d,0xce,0x66,0x13,0xbb,0x58,0xf0,
        0xa3,0xb,0xe8,0x40,0x35,0x9d,0x7e,0xd6,0x94,0x3c,0xdf,0x77,0x2,0xaa,0x49,0xe1,
        0xcd,0x65,0x86,0x2e,0x5b,0xf3,0x10,0xb8,0xfa,0x52,0xb1,0x19,0x6c,0xc4,0x27,0x8f,
        0x7f,0xd7,0x34,0x9c,0xe9,0x41,0xa2,0xa,0x48,0xe0,0x3,0xab,0xde,0x76,0x95,0x3d,
        0x11,0xb9,0x5a,0xf2,0x87,0x2f,0xcc,0x64,0x26,0x8e,0x6d,0xc5,0xb0,0x18,0xfb,0x53,
        0x5d,0xf5,0x16,0xbe,0xcb,0x63,0x80,0x28,0x6a,0xc2,0x21,0x89,0xfc,0x54,0xb7,0x1f,
        0x33,0x9b,0x78,0xd0,0xa5,0xd,0xee,0x46,0x4,0xac,0x4f,0xe7,0x92,0x3a,0xd9,0x71,
        0x81,0x29,0xca,0x62,0x17,0xbf,0x5c,0xf4,0xb6,0x1e,0xfd,0x55,0x20,0x88,0x6b,0xc3,
        0xef,0x47,0xa4,0xc,0x79,0xd1,0x32,0x9a,0xd8,0x70,0x93,0x3b,0x4e,0xe6,0x5,0xad,
        0xfe,0x56,0xb5,0x1d,0x68,0xc0,0x23,0x8b,0xc9,0x61,0x82,0x2a,0x5f,0xf7,0x14,0xbc,
        0x90,0x38,0xdb,0x73,0x6,0xae,0x4d,0xe5,0xa7,0xf,0xec,0x44,0x31,0x99,0x7a,0xd2,
        0x22,0x8a,0x69,0xc1,0xb4,0x1c,0xff,0x57,0x15,0xbd,0x5e,0xf6,0x83,0x2b,0xc8,0x60,
        0x4c,0xe4,0x7,0xaf,0xda,0x72,0x91,0x39,0x7b,0xd3,0x30,0x98,0xed,0x45,0xa6,0xe};

const uint8_t TABLE(8, 91)[256] = {
        0x00,0x91,0x39,0xa8,0x72,0xe3,0x4b,0xda,0xe4,0x75,0xdd,0x4c,0x96,0x7,0xaf,0x3e,
        0xd3,0x42,0xea,0x7b,0xa1,0x30,0x98,0x9,0x37,0xa6,0xe,0x9f,0x45,0xd4,0x7c,0xed,
        0xbd,0x2c,0x84,0x15,0xcf,0x5e,0xf6,0x67,0x59,0xc8,0x60,0xf1,0x2b,0xba,0x12,0x83,
        0x6e,0xff,0x57,0xc6,0x1c,0x8d,0x25,0xb4,0x8a,0x1b,0xb3,0x22,0xf8,0x69,0xc1,0x50,
        0x61,0xf0,0x58,0xc9,0x13,0x82,0x2a,0xbb,0x85,0x14,0xbc,0x2d,0xf7,0x66,0xce,0x5f,
        0xb2,0x23,0x8b,0x1a,0xc0,0x51,0xf9,0x68,0x56,0xc7,0x6f,0xfe,0x24,0xb5,0x1d,0x8c,
        0xdc,0x4d,0xe5,0x74,0xae,0x3f,0x97,0x6,0x38,0xa9,0x1,0x90,0x4a,0xdb,0x73,0xe2,
        0xf,0x9e,0x36,0xa7,0x7d,0xec,0x44,0xd5,0xeb,0x7a,0xd2,0x43,0x99,0x8,0xa0,0x31,
        0xc2,0x53,0xfb,0x6a,0xb0,0x21,0x89,0x18,0x26,0xb7,0x1f,0x8e,0x54,0xc5,0x6d,0xfc,
        0x11,0x80,0x28,0xb9,0x63,0xf2,0x5a,0xcb,0xf5,0x64,0xcc,0x5d,0x87,0x16,0xbe,0x2f,
        0x7f,0xee,0x46,0xd7,0xd,0x9c,0x34,0xa5,0x9b,0xa,0xa2,0x33,0xe9,0x78,0xd0,0x41,
        0xac,0x3d,0x95,0x4,0xde,0x4f,0xe7,0x76,0x48,0xd9,0x71,0xe0,0x3a,0xab,0x3,0x92,
        0xa3,0x32,0x9a,0xb,0xd1,0x40,0xe8,0x79,0x47,0xd6,0x7e,0xef,0x35,0xa4,0xc,0x9d,
        0x70,0xe1,0x49,0xd8,0x2,0x93,0x3b,0xaa,0x94,0x5,0xad,0x3c,0xe6,0x77,0xdf,0x4e,
        0x1e,0x8f,0x27,0xb6,0x6c,0xfd,0x55,0xc4,0xfa,0x6b,0xc3,0x52,0x88,0x19,0xb1,0x20,
        0xcd,0x5c,0xf4,0x65,0xbf,0x2e,0x86,0x17,0x29,0xb8,0x10,0x81,0x5b,0xca,0x62,0xf3};

const uint8_t TABLE(8, ad)[256] = {
        0x00,0xad,0x41,0xec,0x82,0x2f,0xc3,0x6e,0x1f,0xb2,0x5e,0xf3,0x9d,0x30,0xdc,0x71,
        0x3e,0x93,0x7f,0xd2,0xbc,0x11,0xfd,0x50,0x21,0x8c,0x60,0xcd,0xa3,0xe,0xe2,0x4f,
        0x7c,0xd1,0x3d,0x90,0xfe,0x53,0xbf,0x12,0x63,0xce,0x22,0x8f,0xe1,0x4c,0xa0,0xd,
        0x42,0xef,0x3,0xae,0xc0,0x6d,0x81,0x2c,0x5d,0xf0,0x1c,0xb1,0xdf,0x72,0x9e,0x33,
        0xf8,0x55,0xb9,0x14,0x7a,0xd7,0x3b,0x96,0xe7,0x4a,0xa6,0xb,0x65,0xc8,0x24,0x89,
        0xc6,0x6b,0x87,0x2a,0x44,0xe9,0x5,0xa8,0xd9,0x74,0x98,0x35,0x5b,0xf6,0x1a,0xb7,
        0x84,0x29,0xc5,0x68,0x6,0xab,0x47,0xea,0x9b,0x36,0xda,0x77,0x19,0xb4,0x58,0xf5,
        0xba,0x17,0xfb,0x56,0x38,0x95,0x79,0xd4,0xa5,0x8,0xe4,0x49,0x27,0x8a,0x66,0xcb,
        0xeb,0x46,0xaa,0x7,0x69,0xc4,0x28,0x85,0xf4,0x59,0xb5,0x18,0x76,0xdb,0x37,0x9a,
        0xd5,0x78,0x94,0x39,0x57,0xfa,0x16,0xbb,0xca,0x67,0x8b,0x26,0x48,0xe5,0x9,0xa4,
        0x97,0x3a,0xd6,0x7b,0x15,0xb8,0x54,0xf9,0x88,0x25,0xc9,0x64,0xa,0xa7,0x4b,0xe6,
        0xa9,0x4,0xe8,0x45,0x2b,0x86,0x6a,0xc7,0xb6,0x1b,0xf7,0x5a,0x34,0x99,0x75,0xd8,
        0x13,0xbe,0x52,0xff,0x91,0x3c,0xd0,0x7d,0xc,0xa1,0x4d,0xe0,0x8e,0x23,0xcf,0x62,
        0x2d,0x80,0x6c,0xc1,0xaf,0x2,0xee,0x43,0x32,0x9f,0x73,0xde,0xb0,0x1d,0xf1,0x5c,
        0x6f,0xc2,0x2e,0x83,0xed,0x40,0xac,0x1,0x70,0xdd,0x31,0x9c,0xf2,0x5f,0xb3,0x1e,
        0x51,0xfc,0x10,0xbd,0xd3,0x7e,0x92,0x3f,0x4e,0xe3,0xf,0xa2,0xcc,0x61,0x8d,0x20};

const uint8_t TABLE(8, 48)[256] = {
        0x00,0x48,0x90,0xd8,0x3b,0x73,0xab,0xe3,0x76,0x3e,0xe6,0xae,0x4d,0x5,0xdd,0x95,
        0xec,0xa4,0x7c,0x34,0xd7,0x9f,0x47,0xf,0x9a,0xd2,0xa,0x42,0xa1,0xe9,0x31,0x79,
        0xc3,0x8b,0x53,0x1b,0xf8,0xb0,0x68,0x20,0xb5,0xfd,0x25,0x6d,0x8e,0xc6,0x1e,0x56,
        0x2f,0x67,0xbf,0xf7,0x14,0x5c,0x84,0xcc,0x59,0x11,0xc9,0x81,0x62,0x2a,0xf2,0xba,
        0x9d,0xd5,0xd,0x45,0xa6,0xee,0x36,0x7e,0xeb,0xa3,0x7b,0x33,0xd0,0x98,0x40,0x8,
        0x71,0x39,0xe1,0xa9,0x4a,0x2,0xda,0x92,0x7,0x4f,0x97,0xdf,0x3c,0x74,0xac,0xe4,
        0x5e,0x16,0xce,0x86,0x65,0x2d,0xf5,0xbd,0x28,0x60,0xb8,0xf0,0x13,0x5b,0x83,0xcb,
        0xb2,0xfa,0x22,0x6a,0x89,0xc1,0x19,0x51,0xc4,0x8c,0x54,0x1c,0xff,0xb7,0x6f,0x27,
        0x21,0x69,0xb1,0xf9,0x1a,0x52,0x8a,0xc2,0x57,0x1f,0xc7,0x8f,0x6c,0x24,0xfc,0xb4,
        0xcd,0x85,0x5d,0x15,0xf6,0xbe,0x66,0x2e,0xbb,0xf3,0x2b,0x63,0x80,0xc8,0x10,0x58,
        0xe2,0xaa,0x72,0x3a,0xd9,0x91,0x49,0x1,0x94,0xdc,0x4,0x4c,0xaf,0xe7,0x3f,0x77,
        0xe,0x46,0x9e,0xd6,0x35,0x7d,0xa5,0xed,0x78,0x30,0xe8,0xa0,0x43,0xb,0xd3,0x9b,
        0xbc,0xf4,0x2c,0x64,0x87,0xcf,0x17,0x5f,0xca,0x82,0x5a,0x12,0xf1,0xb9,0x61,0x29,
        0x50,0x18,0xc0,0x88,0x6b,0x23,0xfb,0xb3,0x26,0x6e,0xb6,0xfe,0x1d,0x55,0x8d,0xc5,
        0x7f,0x37,0xef,0xa7,0x44,0xc,0xd4,0x9c,0x9,0x41,0x99,0xd1,0x32,0x7a,0xa2,0xea,
        0x93,0xdb,0x3,0x4b,0xa8,0xe0,0x38,0x70,0xe5,0xad,0x75,0x3d,0xde,0x96,0x4e,0x6};

const uint8_t TABLE(8, 05)[256] = {
        0x00,0x5,0xa,0xf,0x14,0x11,0x1e,0x1b,0x28,0x2d,0x22,0x27,0x3c,0x39,0x36,0x33,
        0x50,0x55,0x5a,0x5f,0x44,0x41,0x4e,0x4b,0x78,0x7d,0x72,0x77,0x6c,0x69,0x66,0x63,
        0xa0,0xa5,0xaa,0xaf,0xb4,0xb1,0xbe,0xbb,0x88,0x8d,0x82,0x87,0x9c,0x99,0x96,0x93,
        0xf0,0xf5,0xfa,0xff,0xe4,0xe1,0xee,0xeb,0xd8,0xdd,0xd2,0xd7,0xcc,0xc9,0xc6,0xc3,
        0x5b,0x5e,0x51,0x54,0x4f,0x4a,0x45,0x40,0x73,0x76,0x79,0x7c,0x67,0x62,0x6d,0x68,
        0xb,0xe,0x1,0x4,0x1f,0x1a,0x15,0x10,0x23,0x26,0x29,0x2c,0x37,0x32,0x3d,0x38,
        0xfb,0xfe,0xf1,0xf4,0xef,0xea,0xe5,0xe0,0xd3,0xd6,0xd9,0xdc,0xc7,0xc2,0xcd,0xc8,
        0xab,0xae,0xa1,0xa4,0xbf,0xba,0xb5,0xb0,0x83,0x86,0x89,0x8c,0x97,0x92,0x9d,0x98,
        0xb6,0xb3,0xbc,0xb9,0xa2,0xa7,0xa8,0xad,0x9e,0x9b,0x94,0x91,0x8a,0x8f,0x80,0x85,
        0xe6,0xe3,0xec,0xe9,0xf2,0xf7,0xf8,0xfd,0xce,0xcb,0xc4,0xc1,0xda,0xdf,0xd0,0xd5,
        0x16,0x13,0x1c,0x19,0x2,0x7,0x8,0xd,0x3e,0x3b,0x34,0x31,0x2a,0x2f,0x20,0x25,
        0x46,0x43,0x4c,0x49,0x52,0x57,0x58,0x5d,0x6e,0x6b,0x64,0x61,0x7a,0x7f,0x70,0x75,
        0xed,0xe8,0xe7,0xe2,0xf9,0xfc,0xf3,0xf6,0xc5,0xc0,0xcf,0xca,0xd1,0xd4,0xdb,0xde,
        0xbd,0xb8,0xb7,0xb2,0xa9,0xac,0xa3,0xa6,0x95,0x90,0x9f,0x9a,0x81,0x84,0x8b,0x8e,
        0x4d,0x48,0x47,0x42,0x59,0x5c,0x53,0x56,0x65,0x60,0x6f,0x6a,0x71,0x74,0x7b,0x7e,
        0x1d,0x18,0x17,0x12,0x9,0xc,0x3,0x6,0x35,0x30,0x3f,0x3a,0x21,0x24,0x2b,0x2e};

const uint8_t TABLE(8, b5)[256] = {
        0x00,0xb5,0x71,0xc4,0xe2,0x57,0x93,0x26,0xdf,0x6a,0xae,0x1b,0x3d,0x88,0x4c,0xf9,
        0xa5,0x10,0xd4,0x61,0x47,0xf2,0x36,0x83,0x7a,0xcf,0xb,0xbe,0x98,0x2d,0xe9,0x5c,
        0x51,0xe4,0x20,0x95,0xb3,0x6,0xc2,0x77,0x8e,0x3b,0xff,0x4a,0x6c,0xd9,0x1d,0xa8,
        0xf4,0x41,0x85,0x30,0x16,0xa3,0x67,0xd2,0x2b,0x9e,0x5a,0xef,0xc9,0x7c,0xb8,0xd,
        0xa2,0x17,0xd3,0x66,0x40,0xf5,0x31,0x84,0x7d,0xc8,0xc,0xb9,0x9f,0x2a,0xee,0x5b,
        0x7,0xb2,0x76,0xc3,0xe5,0x50,0x94,0x21,0xd8,0x6d,0xa9,0x1c,0x3a,0x8f,0x4b,0xfe,
        0xf3,0x46,0x82,0x37,0x11,0xa4,0x60,0xd5,0x2c,0x99,0x5d,0xe8,0xce,0x7b,0xbf,0xa,
        0x56,0xe3,0x27,0x92,0xb4,0x1,0xc5,0x70,0x89,0x3c,0xf8,0x4d,0x6b,0xde,0x1a,0xaf,
        0x5f,0xea,0x2e,0x9b,0xbd,0x8,0xcc,0x79,0x80,0x35,0xf1,0x44,0x62,0xd7,0x13,0xa6,
        0xfa,0x4f,0x8b,0x3e,0x18,0xad,0x69,0xdc,0x25,0x90,0x54,0xe1,0xc7,0x72,0xb6,0x3,
        0xe,0xbb,0x7f,0xca,0xec,0x59,0x9d,0x28,0xd1,0x64,0xa0,0x15,0x33,0x86,0x42,0xf7,
        0xab,0x1e,0xda,0x6f,0x49,0xfc,0x38,0x8d,0x74,0xc1,0x5,0xb0,0x96,0x23,0xe7,0x52,
        0xfd,0x48,0x8c,0x39,0x1f,0xaa,0x6e,0xdb,0x22,0x97,0x53,0xe6,0xc0,0x75,0xb1,0x4,
        0x58,0xed,0x29,0x9c,0xba,0xf,0xcb,0x7e,0x87,0x32,0xf6,0x43,0x65,0xd0,0x14,0xa1,
        0xac,0x19,0xdd,0x68,0x4e,0xfb,0x3f,0x8a,0x73,0xc6,0x2,0xb7,0x91,0x24,0xe0,0x55,
        0x9,0xbc,0x78,0xcd,0xeb,0x5e,0x9a,0x2f,0xd6,0x63,0xa7,0x12,0x34,0x81,0x45,0xf0};

const uint8_t TABLE(8, af)[256] = {
        0x00,0xaf,0x45,0xea,0x8a,0x25,0xcf,0x60,0xf,0xa0,0x4a,0xe5,0x85,0x2a,0xc0,0x6f,
        0x1e,0xb1,0x5b,0xf4,0x94,0x3b,0xd1,0x7e,0x11,0xbe,0x54,0xfb,0x9b,0x34,0xde,0x71,
        0x3c,0x93,0x79,0xd6,0xb6,0x19,0xf3,0x5c,0x33,0x9c,0x76,0xd9,0xb9,0x16,0xfc,0x53,
        0x22,0x8d,0x67,0xc8,0xa8,0x7,0xed,0x42,0x2d,0x82,0x68,0xc7,0xa7,0x8,0xe2,0x4d,
        0x78,0xd7,0x3d,0x92,0xf2,0x5d,0xb7,0x18,0x77,0xd8,0x32,0x9d,0xfd,0x52,0xb8,0x17,
        0x66,0xc9,0x23,0x8c,0xec,0x43,0xa9,0x6,0x69,0xc6,0x2c,0x83,0xe3,0x4c,0xa6,0x9,
        0x44,0xeb,0x1,0xae,0xce,0x61,0x8b,0x24,0x4b,0xe4,0xe,0xa1,0xc1,0x6e,0x84,0x2b,
        0x5a,0xf5,0x1f,0xb0,0xd0,0x7f,0x95,0x3a,0x55,0xfa,0x10,0xbf,0xdf,0x70,0x9a,0x35,
        0xf0,0x5f,0xb5,0x1a,0x7a,0xd5,0x3f,0x90,0xff,0x50,0xba,0x15,0x75,0xda,0x30,0x9f,
        0xee,0x41,0xab,0x4,0x64,0xcb,0x21,0x8e,0xe1,0x4e,0xa4,0xb,0x6b,0xc4,0x2e,0x81,
        0xcc,0x63,0x89,0x26,0x46,0xe9,0x3,0xac,0xc3,0x6c,0x86,0x29,0x49,0xe6,0xc,0xa3,
        0xd2,0x7d,0x97,0x38,0x58,0xf7,0x1d,0xb2,0xdd,0x72,0x98,0x37,0x57,0xf8,0x12,0xbd,
        0x88,0x27,0xcd,0x62,0x2,0xad,0x47,0xe8,0x87,0x28,0xc2,0x6d,0xd,0xa2,0x48,0xe7,
        0x96,0x39,0xd3,0x7c,0x1c,0xb3,0x59,0xf6,0x99,0x36,0xdc,0x73,0x13,0xbc,0x56,0xf9,
        0xb4,0x1b,0xf1,0x5e,0x3e,0x91,0x7b,0xd4,0xbb,0x14,0xfe,0x51,0x31,0x9e,0x74,0xdb,
        0xaa,0x5,0xef,0x40,0x20,0x8f,0x65,0xca,0xa5,0xa,0xe0,0x4f,0x2f,0x80,0x6a,0xc5};

const uint8_t TABLE(8, f8)[256] = {
        0x00,0xf8,0xeb,0x13,0xcd,0x35,0x26,0xde,0x81,0x79,0x6a,0x92,0x4c,0xb4,0xa7,0x5f,
        0x19,0xe1,0xf2,0xa,0xd4,0x2c,0x3f,0xc7,0x98,0x60,0x73,0x8b,0x55,0xad,0xbe,0x46,
        0x32,0xca,0xd9,0x21,0xff,0x7,0x14,0xec,0xb3,0x4b,0x58,0xa0,0x7e,0x86,0x95,0x6d,
        0x2b,0xd3,0xc0,0x38,0xe6,0x1e,0xd,0xf5,0xaa,0x52,0x41,0xb9,0x67,0x9f,0x8c,0x74,
        0x64,0x9c,0x8f,0x77,0xa9,0x51,0x42,0xba,0xe5,0x1d,0xe,0xf6,0x28,0xd0,0xc3,0x3b,
        0x7d,0x85,0x96,0x6e,0xb0,0x48,0x5b,0xa3,0xfc,0x4,0x17,0xef,0x31,0xc9,0xda,0x22,
        0x56,0xae,0xbd,0x45,0x9b,0x63,0x70,0x88,0xd7,0x2f,0x3c,0xc4,0x1a,0xe2,0xf1,0x9,
        0x4f,0xb7,0xa4,0x5c,0x82,0x7a,0x69,0x91,0xce,0x36,0x25,0xdd,0x3,0xfb,0xe8,0x10,
        0xc8,0x30,0x23,0xdb,0x5,0xfd,0xee,0x16,0x49,0xb1,0xa2,0x5a,0x84,0x7c,0x6f,0x97,
        0xd1,0x29,0x3a,0xc2,0x1c,0xe4,0xf7,0xf,0x50,0xa8,0xbb,0x43,0x9d,0x65,0x76,0x8e,
        0xfa,0x2,0x11,0xe9,0x37,0xcf,0xdc,0x24,0x7b,0x83,0x90,0x68,0xb6,0x4e,0x5d,0xa5,
        0xe3,0x1b,0x8,0xf0,0x2e,0xd6,0xc5,0x3d,0x62,0x9a,0x89,0x71,0xaf,0x57,0x44,0xbc,
        0xac,0x54,0x47,0xbf,0x61,0x99,0x8a,0x72,0x2d,0xd5,0xc6,0x3e,0xe0,0x18,0xb,0xf3,
        0xb5,0x4d,0x5e,0xa6,0x78,0x80,0x93,0x6b,0x34,0xcc,0xdf,0x27,0xf9,0x1,0x12,0xea,
        0x9e,0x66,0x75,0x8d,0x53,0xab,0xb8,0x40,0x1f,0xe7,0xf4,0xc,0xd2,0x2a,0x39,0xc1,
        0x87,0x7f,0x6c,0x94,0x4a,0xb2,0xa1,0x59,0x6,0xfe,0xed,0x15,0xcb,0x33,0x20,0xd8};

#endif
