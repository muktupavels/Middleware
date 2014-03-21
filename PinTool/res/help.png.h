#ifndef HELP_PNG_H
#define HELP_PNG_H

#include <wx/mstream.h>
#include <wx/image.h>
#include <wx/bitmap.h>

static const unsigned char help_png[] = 
{
	0x89, 0x50, 0x4E, 0x47, 0x0D, 0x0A, 0x1A, 0x0A, 0x00, 0x00, 
	0x00, 0x0D, 0x49, 0x48, 0x44, 0x52, 0x00, 0x00, 0x00, 0x10, 
	0x00, 0x00, 0x00, 0x10, 0x08, 0x06, 0x00, 0x00, 0x00, 0x1F, 
	0xF3, 0xFF, 0x61, 0x00, 0x00, 0x00, 0x06, 0x62, 0x4B, 0x47, 
	0x44, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF9, 0x43, 0xBB, 
	0x7F, 0x00, 0x00, 0x00, 0x09, 0x70, 0x48, 0x59, 0x73, 0x00, 
	0x00, 0x00, 0x48, 0x00, 0x00, 0x00, 0x48, 0x00, 0x46, 0xC9, 
	0x6B, 0x3E, 0x00, 0x00, 0x00, 0x09, 0x76, 0x70, 0x41, 0x67, 
	0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x10, 0x00, 0x5C, 
	0xC6, 0xAD, 0xC3, 0x00, 0x00, 0x03, 0xD8, 0x49, 0x44, 0x41, 
	0x54, 0x38, 0xCB, 0x55, 0xD1, 0x6D, 0x4C, 0x1B, 0x05, 0x1C, 
	0xC7, 0xF1, 0xFF, 0xF5, 0xAE, 0x77, 0xD7, 0xDE, 0xF5, 0x7A, 
	0xED, 0xD1, 0x07, 0x68, 0x0B, 0x94, 0xA7, 0x40, 0xCB, 0xD3, 
	0x78, 0xD8, 0x34, 0x63, 0x61, 0x01, 0x9C, 0x4C, 0xCC, 0xDC, 
	0x14, 0x8D, 0xC4, 0xE8, 0xAB, 0x65, 0x89, 0x26, 0x66, 0x6A, 
	0xD0, 0xF8, 0x42, 0xCD, 0xDE, 0x68, 0xD8, 0x34, 0xBE, 0x58, 
	0x4C, 0xF6, 0x82, 0x98, 0x11, 0x1F, 0xA2, 0x86, 0xCD, 0x30, 
	0x1D, 0x26, 0x63, 0x03, 0xE6, 0x86, 0x85, 0x3D, 0x74, 0x4E, 
	0x0A, 0x05, 0x0A, 0xA5, 0x40, 0xBB, 0x96, 0x3E, 0xD1, 0xD2, 
	0x96, 0xC2, 0xF5, 0x7A, 0xAD, 0xAF, 0x24, 0xEE, 0xFB, 0xEA, 
	0xF7, 0xE6, 0xF3, 0xEA, 0x87, 0xC0, 0xFF, 0xFA, 0xF9, 0x95, 
	0x36, 0x78, 0xE6, 0x60, 0x15, 0xF4, 0x7D, 0xFC, 0xBD, 0xFC, 
	0xCD, 0xDE, 0xCE, 0x72, 0xAE, 0xBC, 0xDA, 0x10, 0x65, 0x4B, 
	0xD5, 0x79, 0x5A, 0x49, 0x6E, 0x78, 0x37, 0x67, 0xCE, 0x9F, 
	0x9F, 0x5A, 0xBA, 0xDE, 0xF5, 0xB7, 0xF8, 0xE2, 0x2D, 0xFF, 
	0xBE, 0xC1, 0xFE, 0x1B, 0x43, 0xDD, 0xCD, 0x30, 0xE6, 0x08, 
	0x11, 0x6A, 0xA3, 0xE1, 0xB9, 0x2B, 0x97, 0x3F, 0xEB, 0xC3, 
	0x95, 0x8A, 0xDA, 0xB8, 0x28, 0xD3, 0xCA, 0xEB, 0xDB, 0x51, 
	0x84, 0x62, 0xF0, 0x48, 0x60, 0x73, 0xD6, 0x2A, 0x8D, 0x0F, 
	0x5E, 0xFA, 0xCE, 0x39, 0x72, 0xA9, 0xA7, 0x2D, 0xF9, 0xF6, 
	0xE8, 0x14, 0x00, 0x00, 0xA0, 0x47, 0x4E, 0x0F, 0xC2, 0xF3, 
	0x85, 0x72, 0x28, 0xCC, 0x84, 0xD9, 0x53, 0x6D, 0xA6, 0x0F, 
	0x0F, 0x18, 0x89, 0x2F, 0xD8, 0x74, 0xE8, 0x90, 0x3C, 0xE2, 
	0xD7, 0x09, 0x59, 0xA0, 0x95, 0xAD, 0x1D, 0x14, 0xAB, 0xD5, 
	0x91, 0x5A, 0x71, 0xAB, 0xC4, 0xBC, 0x31, 0xD1, 0x61, 0xD5, 
	0xD3, 0xE4, 0x5A, 0x30, 0x6D, 0x3F, 0x5A, 0xAC, 0xD9, 0x1B, 
	0x5F, 0x0B, 0x00, 0x5A, 0xD1, 0x79, 0x06, 0x49, 0xFD, 0x75, 
	0x85, 0xEE, 0x6D, 0xA0, 0xCE, 0xD6, 0x73, 0xB9, 0x8F, 0x08, 
	0xEF, 0x8A, 0x32, 0xB9, 0xEA, 0x85, 0x35, 0x77, 0x20, 0xB7, 
	0x10, 0xCC, 0xF0, 0x2B, 0x84, 0x4A, 0xD8, 0xCE, 0x64, 0x51, 
	0x7A, 0xE6, 0x1A, 0xC2, 0x3E, 0x1C, 0x21, 0x35, 0x5A, 0xA6, 
	0x49, 0x2A, 0x97, 0x67, 0xBF, 0x9D, 0x70, 0xCD, 0xAC, 0xA6, 
	0x53, 0x22, 0xAA, 0xD5, 0x55, 0xB3, 0x1D, 0xF5, 0xDA, 0x17, 
	0x5A, 0x9A, 0x2C, 0xE7, 0xF0, 0x27, 0x6E, 0x36, 0xE6, 0x8B, 
	0x82, 0xCD, 0x27, 0x86, 0x46, 0x3C, 0x99, 0x9B, 0x77, 0xD7, 
	0xE3, 0x97, 0x1F, 0xD8, 0xA6, 0x7F, 0x5D, 0x9F, 0x9F, 0xF3, 
	0xCB, 0x66, 0x6D, 0x45, 0x9C, 0x90, 0x62, 0x14, 0xF9, 0x1D, 
	0x9C, 0xE6, 0x94, 0x35, 0x14, 0xCD, 0xCC, 0x6C, 0x05, 0xD3, 
	0xEB, 0x68, 0x77, 0xB3, 0xC5, 0xFC, 0x52, 0xDF, 0xCB, 0xFD, 
	0xD6, 0xEE, 0x93, 0xF5, 0x7E, 0xA6, 0x02, 0xF9, 0x73, 0xCE, 
	0xBF, 0x35, 0xEA, 0x0C, 0x0D, 0x4D, 0xF3, 0xF2, 0x8B, 0xF3, 
	0xF1, 0xBD, 0x3F, 0xEC, 0xFE, 0x15, 0xBB, 0x77, 0x71, 0x61, 
	0x0A, 0x8B, 0x25, 0xC2, 0x1A, 0x05, 0xD5, 0xAC, 0xC3, 0xB3, 
	0x0C, 0x49, 0x22, 0x14, 0x42, 0xB1, 0xE9, 0x81, 0xDB, 0xB3, 
	0x37, 0x25, 0x6A, 0x9A, 0x28, 0xD2, 0x17, 0x17, 0x5B, 0x09, 
	0x46, 0x25, 0xD9, 0x33, 0x56, 0xE4, 0x1E, 0x2B, 0x4D, 0xA3, 
	0xF7, 0x12, 0xFC, 0x57, 0xB0, 0xB9, 0x34, 0x5B, 0xA2, 0xC0, 
	0x85, 0x3A, 0x00, 0x50, 0x01, 0x24, 0x7E, 0x88, 0xA4, 0x7F, 
	0x9A, 0x0B, 0xEE, 0x8C, 0x6C, 0xEF, 0x88, 0x39, 0x2C, 0x11, 
	0x43, 0x38, 0x8C, 0x6F, 0xEA, 0xAD, 0xB5, 0x18, 0x31, 0x6C, 
	0xD9, 0x2E, 0x52, 0xB6, 0x1F, 0xF9, 0x9C, 0xAF, 0x1C, 0xD2, 
	0xC1, 0x8C, 0xB0, 0xBD, 0xE8, 0x98, 0x5E, 0x8E, 0x07, 0x82, 
	0x2D, 0x3A, 0x33, 0xDC, 0xDF, 0x5C, 0xDD, 0xBF, 0xAB, 0x83, 
	0xC0, 0x76, 0xD6, 0xC8, 0x02, 0x7B, 0xB4, 0xF6, 0x20, 0xAF, 
	0x55, 0xE5, 0x64, 0xF9, 0x3D, 0x44, 0xAB, 0xD1, 0x41, 0x29, 
	0x86, 0xED, 0x26, 0x33, 0xC8, 0x83, 0xDF, 0xF2, 0xC8, 0xDD, 
	0x38, 0xD0, 0x9B, 0x12, 0xE0, 0x5C, 0x51, 0x64, 0xBC, 0x5C, 
	0x03, 0x9D, 0x6E, 0xCF, 0x3E, 0xB6, 0x18, 0x6A, 0xA1, 0x5C, 
	0x85, 0x02, 0x5F, 0xD7, 0x84, 0xEE, 0xBE, 0xF6, 0x1E, 0x02, 
	0x55, 0x65, 0xB0, 0xBB, 0xB4, 0x8C, 0xC4, 0xEC, 0x17, 0xA4, 
	0x92, 0xC5, 0x8D, 0xA0, 0x1B, 0x00, 0xF5, 0x21, 0x18, 0x0A, 
	0x2A, 0x2C, 0x83, 0x5B, 0x58, 0xE9, 0x91, 0x0F, 0xDC, 0x61, 
	0xE5, 0x09, 0x43, 0x11, 0x00, 0x00, 0x34, 0x97, 0x34, 0x80, 
	0x73, 0x5B, 0x81, 0x38, 0x22, 0x89, 0x02, 0x53, 0x45, 0x55, 
	0x3B, 0xAB, 0x2E, 0x20, 0x10, 0x19, 0x0D, 0x09, 0x51, 0x02, 
	0x40, 0xD1, 0x02, 0xEA, 0x4C, 0x26, 0xD3, 0xAF, 0x56, 0x6A, 
	0x4D, 0x7A, 0x1A, 0x6D, 0x97, 0x89, 0xBC, 0x24, 0x0F, 0xA8, 
	0x91, 0x93, 0xE2, 0x99, 0x59, 0x7F, 0xD4, 0x79, 0xE1, 0x97, 
	0xAB, 0xBB, 0x17, 0x07, 0x87, 0xB1, 0x76, 0x1D, 0x58, 0x4F, 
	0xEA, 0xE0, 0xFD, 0x67, 0xD1, 0x70, 0x9F, 0x12, 0xCD, 0x12, 
	0x59, 0x8C, 0x10, 0x6D, 0x53, 0xF7, 0x46, 0x26, 0xA7, 0x1C, 
	0x13, 0x68, 0x0B, 0x4A, 0x40, 0x21, 0x2B, 0x0F, 0x19, 0x39, 
	0x79, 0xBB, 0x0A, 0x17, 0xF5, 0x4C, 0x9E, 0x27, 0xC9, 0x96, 
	0xA3, 0xAD, 0x9A, 0xB7, 0xCE, 0x36, 0x7A, 0x96, 0x96, 0xCA, 
	0x8E, 0x11, 0x89, 0xCE, 0xE3, 0x44, 0xE4, 0xCC, 0xE1, 0x02, 
	0xE1, 0xB8, 0x15, 0x0D, 0x31, 0x54, 0xD8, 0x09, 0x0B, 0x0B, 
	0xCB, 0xEE, 0xE1, 0xB1, 0xC7, 0xDF, 0x84, 0xB9, 0xBA, 0x45, 
	0xEC, 0xA1, 0xC8, 0x03, 0x3D, 0x9F, 0x76, 0x19, 0x54, 0xE4, 
	0x00, 0x5E, 0xA6, 0xFB, 0xB2, 0xA0, 0x4E, 0x61, 0x6C, 0x3C, 
	0xF5, 0x0E, 0x63, 0xD0, 0xD5, 0x9C, 0x48, 0xC6, 0x63, 0x3D, 
	0x39, 0x3A, 0x01, 0xFA, 0xE5, 0x14, 0xCA, 0xCA, 0x51, 0x90, 
	0x50, 0x32, 0x08, 0xE6, 0x64, 0x01, 0xCF, 0xA2, 0xFB, 0x73, 
	0x87, 0x27, 0x7B, 0x43, 0x4A, 0xA6, 0x78, 0x14, 0x00, 0xE0, 
	0xDD, 0x86, 0x42, 0xF8, 0x64, 0xDC, 0xE9, 0xAA, 0x2C, 0xAD, 
	0x78, 0x22, 0x3D, 0xD4, 0x63, 0x61, 0x5A, 0xBB, 0xD4, 0x6A, 
	0x4E, 0x2D, 0xE1, 0x58, 0x46, 0x82, 0x67, 0x52, 0x12, 0x85, 
	0x5E, 0x03, 0x82, 0xA9, 0x46, 0xF0, 0xE4, 0x18, 0xC7, 0x1D, 
	0x57, 0xF4, 0xDC, 0xA7, 0x57, 0xEF, 0x0C, 0x9B, 0xCD, 0x55, 
	0xBC, 0xA0, 0x2E, 0x01, 0x14, 0x00, 0x60, 0xCC, 0x17, 0x85, 
	0x46, 0x02, 0x17, 0xBF, 0xFE, 0x67, 0x65, 0x41, 0x14, 0xE8, 
	0xFB, 0x3B, 0x19, 0x61, 0x97, 0xCF, 0x66, 0x65, 0xB1, 0x48, 
	0xC4, 0xEF, 0x0F, 0xC5, 0xBC, 0x49, 0x5E, 0x7C, 0x34, 0xED, 
	0x58, 0x1B, 0xBA, 0x7E, 0xFB, 0xD1, 0x40, 0xFF, 0xEF, 0x93, 
	0x93, 0x75, 0x32, 0x59, 0x76, 0xDC, 0xE7, 0x06, 0xAF, 0xCB, 
	0x06, 0x4F, 0xF5, 0x46, 0x65, 0x19, 0xE4, 0xC3, 0x01, 0xA8, 
	0x57, 0x19, 0xD8, 0xEE, 0x03, 0x87, 0x5B, 0xBA, 0x4A, 0xAB, 
	0x5B, 0x8F, 0x99, 0xCC, 0x55, 0x35, 0x00, 0x6A, 0x00, 0x40, 
	0xAE, 0xF5, 0x9F, 0x86, 0xD7, 0x4B, 0x8C, 0x4F, 0x99, 0x7F, 
	0x01, 0xAE, 0x64, 0x9F, 0x8E, 0x50, 0x0D, 0x3C, 0x4C, 0x00, 
	0x00, 0x00, 0x25, 0x74, 0x45, 0x58, 0x74, 0x63, 0x72, 0x65, 
	0x61, 0x74, 0x65, 0x2D, 0x64, 0x61, 0x74, 0x65, 0x00, 0x32, 
	0x30, 0x30, 0x39, 0x2D, 0x31, 0x31, 0x2D, 0x32, 0x38, 0x54, 
	0x31, 0x37, 0x3A, 0x31, 0x38, 0x3A, 0x32, 0x38, 0x2D, 0x30, 
	0x37, 0x3A, 0x30, 0x30, 0x31, 0x91, 0xB2, 0x2C, 0x00, 0x00, 
	0x00, 0x25, 0x74, 0x45, 0x58, 0x74, 0x64, 0x61, 0x74, 0x65, 
	0x3A, 0x63, 0x72, 0x65, 0x61, 0x74, 0x65, 0x00, 0x32, 0x30, 
	0x31, 0x30, 0x2D, 0x30, 0x32, 0x2D, 0x32, 0x30, 0x54, 0x32, 
	0x33, 0x3A, 0x32, 0x36, 0x3A, 0x31, 0x37, 0x2D, 0x30, 0x37, 
	0x3A, 0x30, 0x30, 0x91, 0xA4, 0x4D, 0xA8, 0x00, 0x00, 0x00, 
	0x25, 0x74, 0x45, 0x58, 0x74, 0x64, 0x61, 0x74, 0x65, 0x3A, 
	0x6D, 0x6F, 0x64, 0x69, 0x66, 0x79, 0x00, 0x32, 0x30, 0x31, 
	0x30, 0x2D, 0x30, 0x31, 0x2D, 0x31, 0x31, 0x54, 0x30, 0x38, 
	0x3A, 0x34, 0x32, 0x3A, 0x34, 0x37, 0x2D, 0x30, 0x37, 0x3A, 
	0x30, 0x30, 0x11, 0x44, 0xA6, 0xFB, 0x00, 0x00, 0x00, 0x35, 
	0x74, 0x45, 0x58, 0x74, 0x4C, 0x69, 0x63, 0x65, 0x6E, 0x73, 
	0x65, 0x00, 0x68, 0x74, 0x74, 0x70, 0x3A, 0x2F, 0x2F, 0x63, 
	0x72, 0x65, 0x61, 0x74, 0x69, 0x76, 0x65, 0x63, 0x6F, 0x6D, 
	0x6D, 0x6F, 0x6E, 0x73, 0x2E, 0x6F, 0x72, 0x67, 0x2F, 0x6C, 
	0x69, 0x63, 0x65, 0x6E, 0x73, 0x65, 0x73, 0x2F, 0x4C, 0x47, 
	0x50, 0x4C, 0x2F, 0x32, 0x2E, 0x31, 0x2F, 0x3B, 0xC1, 0xB4, 
	0x18, 0x00, 0x00, 0x00, 0x25, 0x74, 0x45, 0x58, 0x74, 0x6D, 
	0x6F, 0x64, 0x69, 0x66, 0x79, 0x2D, 0x64, 0x61, 0x74, 0x65, 
	0x00, 0x32, 0x30, 0x30, 0x39, 0x2D, 0x31, 0x31, 0x2D, 0x32, 
	0x38, 0x54, 0x31, 0x34, 0x3A, 0x33, 0x32, 0x3A, 0x31, 0x37, 
	0x2D, 0x30, 0x37, 0x3A, 0x30, 0x30, 0xE4, 0x63, 0xF6, 0xD4, 
	0x00, 0x00, 0x00, 0x16, 0x74, 0x45, 0x58, 0x74, 0x53, 0x6F, 
	0x75, 0x72, 0x63, 0x65, 0x00, 0x43, 0x72, 0x79, 0x73, 0x74, 
	0x61, 0x6C, 0x20, 0x50, 0x72, 0x6F, 0x6A, 0x65, 0x63, 0x74, 
	0xEB, 0xE3, 0xE4, 0x8B, 0x00, 0x00, 0x00, 0x27, 0x74, 0x45, 
	0x58, 0x74, 0x53, 0x6F, 0x75, 0x72, 0x63, 0x65, 0x5F, 0x55, 
	0x52, 0x4C, 0x00, 0x68, 0x74, 0x74, 0x70, 0x3A, 0x2F, 0x2F, 
	0x65, 0x76, 0x65, 0x72, 0x61, 0x6C, 0x64, 0x6F, 0x2E, 0x63, 
	0x6F, 0x6D, 0x2F, 0x63, 0x72, 0x79, 0x73, 0x74, 0x61, 0x6C, 
	0x2F, 0xA5, 0x91, 0x93, 0x5B, 0x00, 0x00, 0x00, 0x00, 0x49, 
	0x45, 0x4E, 0x44, 0xAE, 0x42, 0x60, 0x82, 
};

wxBitmap& help_png_to_wx_bitmap()
{
	static wxMemoryInputStream memIStream( help_png, sizeof( help_png ) );
	static wxImage image( memIStream, wxBITMAP_TYPE_PNG );
	static wxBitmap bmp( image );
	return bmp;
};


#endif //HELP_PNG_H
