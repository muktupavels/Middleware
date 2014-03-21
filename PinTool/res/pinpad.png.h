#ifndef PINPAD_PNG_H
#define PINPAD_PNG_H

#include <wx/mstream.h>
#include <wx/image.h>
#include <wx/bitmap.h>

static const unsigned char pinpad_png[] = 
{
	0x89, 0x50, 0x4E, 0x47, 0x0D, 0x0A, 0x1A, 0x0A, 0x00, 0x00, 
	0x00, 0x0D, 0x49, 0x48, 0x44, 0x52, 0x00, 0x00, 0x00, 0x20, 
	0x00, 0x00, 0x00, 0x20, 0x08, 0x06, 0x00, 0x00, 0x00, 0x73, 
	0x7A, 0x7A, 0xF4, 0x00, 0x00, 0x00, 0x01, 0x73, 0x52, 0x47, 
	0x42, 0x00, 0xAE, 0xCE, 0x1C, 0xE9, 0x00, 0x00, 0x00, 0x06, 
	0x62, 0x4B, 0x47, 0x44, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 
	0xA0, 0xBD, 0xA7, 0x93, 0x00, 0x00, 0x00, 0x09, 0x70, 0x48, 
	0x59, 0x73, 0x00, 0x00, 0x0B, 0x13, 0x00, 0x00, 0x0B, 0x13, 
	0x01, 0x00, 0x9A, 0x9C, 0x18, 0x00, 0x00, 0x00, 0x07, 0x74, 
	0x49, 0x4D, 0x45, 0x07, 0xDC, 0x04, 0x17, 0x16, 0x0D, 0x00, 
	0x3C, 0x63, 0x1E, 0x9D, 0x00, 0x00, 0x07, 0xB9, 0x49, 0x44, 
	0x41, 0x54, 0x58, 0xC3, 0xAD, 0x97, 0x7B, 0x8C, 0x5C, 0x75, 
	0x15, 0xC7, 0x3F, 0xBF, 0xDF, 0xBD, 0x73, 0x77, 0x67, 0xE6, 
	0xCE, 0xEC, 0xEC, 0x8B, 0xA5, 0xD0, 0x6E, 0x8B, 0x2D, 0xB6, 
	0xBB, 0x6D, 0x41, 0xB6, 0x48, 0x80, 0xD2, 0x35, 0x12, 0x34, 
	0x16, 0x28, 0x81, 0x08, 0x94, 0xB6, 0x4B, 0x41, 0x51, 0xF9, 
	0x07, 0x13, 0x15, 0x30, 0x44, 0xE2, 0xA3, 0x08, 0xA8, 0xD4, 
	0x3F, 0x8C, 0x0A, 0x4A, 0x90, 0x97, 0x89, 0x89, 0x68, 0x42, 
	0x82, 0x92, 0x22, 0x7F, 0x50, 0x1E, 0x46, 0x94, 0xD5, 0x4A, 
	0x78, 0x05, 0xB1, 0xA0, 0xDD, 0xED, 0xD6, 0x36, 0x7D, 0xEF, 
	0xBC, 0xEE, 0xDC, 0xD7, 0xF9, 0xF9, 0xC7, 0xBD, 0xBB, 0x9D, 
	0x99, 0xDD, 0xC6, 0x1A, 0x3D, 0xC9, 0x2F, 0xBF, 0xC9, 0xCC, 
	0xDC, 0x73, 0xBE, 0xE7, 0xF1, 0x3D, 0xE7, 0x5C, 0x75, 0xDD, 
	0xF5, 0x37, 0xD0, 0x2C, 0x71, 0x1C, 0x53, 0xF7, 0xBC, 0x73, 
	0x2E, 0xB9, 0xF8, 0xC2, 0xDF, 0x8F, 0xAE, 0x1B, 0x2D, 0xBE, 
	0xFD, 0xCE, 0x3B, 0x58, 0x96, 0x85, 0x52, 0xCC, 0x23, 0x0A, 
	0x63, 0x0C, 0x4A, 0x41, 0x1C, 0x0B, 0x00, 0xC6, 0x24, 0xB7, 
	0x88, 0x21, 0x8E, 0x63, 0x16, 0x2D, 0x5A, 0xC4, 0xC4, 0xC4, 
	0xC4, 0x71, 0xAD, 0xD5, 0x66, 0xDB, 0xCE, 0x3C, 0xA7, 0x9A, 
	0x14, 0x29, 0xA5, 0xB0, 0x33, 0xB6, 0x3D, 0xFB, 0x85, 0x01, 
	0xB4, 0xD6, 0x4C, 0x1F, 0xD8, 0xFF, 0x83, 0x6B, 0xAF, 0xBD, 
	0xAE, 0x78, 0xDA, 0x69, 0x03, 0x0C, 0x9C, 0x3E, 0x80, 0xD6, 
	0x1A, 0x50, 0xE9, 0x3F, 0x4E, 0xFC, 0xD9, 0x00, 0xC6, 0x80, 
	0xC2, 0x60, 0x92, 0x0F, 0x18, 0x93, 0x9C, 0xC4, 0x99, 0x88, 
	0xDE, 0xDE, 0x1E, 0x56, 0xAF, 0x5E, 0x55, 0xFA, 0xC9, 0x43, 
	0x0F, 0xDF, 0x6A, 0xDB, 0xF6, 0x73, 0x4A, 0xB7, 0x7A, 0x62, 
	0x97, 0x7A, 0x7B, 0x9B, 0x94, 0x1A, 0x44, 0x84, 0xE3, 0xE5, 
	0x69, 0xD9, 0xFD, 0xFE, 0xFB, 0xDC, 0x7F, 0xFF, 0xB7, 0x99, 
	0x9A, 0xD8, 0x8F, 0x5F, 0xF7, 0x91, 0x54, 0xBB, 0x42, 0xCD, 
	0x7A, 0x9F, 0x38, 0xA3, 0x66, 0xBD, 0x99, 0xB9, 0x95, 0xB2, 
	0xB0, 0x50, 0xE8, 0x4E, 0xC3, 0x87, 0x96, 0x9D, 0xC5, 0x96, 
	0x2D, 0x5B, 0x28, 0x57, 0xCB, 0xEE, 0xF2, 0xE5, 0x2B, 0x50, 
	0x5A, 0xB7, 0xD8, 0xB3, 0xBB, 0x4B, 0xA5, 0x16, 0x44, 0x22, 
	0xC2, 0x91, 0xC3, 0x87, 0xA5, 0xE8, 0x16, 0x38, 0x7A, 0xA8, 
	0x4C, 0xE4, 0xD4, 0xB9, 0xF6, 0xD6, 0x4F, 0x52, 0xAF, 0x35, 
	0x50, 0x62, 0x40, 0x69, 0x50, 0x26, 0x0D, 0x82, 0x42, 0xA5, 
	0x29, 0x10, 0x63, 0x10, 0x89, 0x51, 0x1A, 0xC2, 0x38, 0x04, 
	0x27, 0xE0, 0xF9, 0x9F, 0x8F, 0x73, 0xFC, 0x58, 0x1F, 0x6E, 
	0xB1, 0x8B, 0x62, 0xB1, 0x20, 0xBD, 0xBD, 0xDD, 0xA8, 0xB6, 
	0x5C, 0xDA, 0x85, 0x42, 0x71, 0x0E, 0x80, 0x5C, 0x2E, 0x4F, 
	0xA1, 0xAB, 0x0B, 0xDF, 0x0F, 0x38, 0x7B, 0xF5, 0x62, 0x6E, 
	0xD9, 0xB4, 0x99, 0xC3, 0x72, 0x0C, 0x91, 0x18, 0x23, 0x06, 
	0xA3, 0x40, 0xE2, 0x18, 0x31, 0x21, 0x81, 0x44, 0x84, 0x51, 
	0x83, 0x30, 0xF6, 0x89, 0x4C, 0xC8, 0xD4, 0x9E, 0x7D, 0x38, 
	0x9D, 0x36, 0x99, 0x9C, 0xCD, 0x5F, 0x5F, 0xD8, 0x8D, 0x54, 
	0x63, 0x8A, 0xAE, 0x8B, 0x9B, 0x2F, 0x50, 0x2A, 0x76, 0x83, 
	0x6A, 0xAE, 0x20, 0x85, 0x6D, 0x59, 0xBA, 0xB5, 0xAC, 0x14, 
	0x58, 0x96, 0xC6, 0xB2, 0x2C, 0xA2, 0x20, 0xC0, 0xD6, 0x0E, 
	0x05, 0x0A, 0xD4, 0xB4, 0x47, 0x80, 0x4F, 0x28, 0x0D, 0x82, 
	0x28, 0x20, 0x14, 0x9F, 0x28, 0x0E, 0x31, 0x26, 0x46, 0x0C, 
	0x38, 0x19, 0x1B, 0x87, 0x0C, 0x9D, 0x3A, 0x4F, 0x58, 0x8D, 
	0x18, 0xE8, 0xEF, 0x23, 0xA8, 0x87, 0x58, 0xB1, 0x80, 0x56, 
	0x49, 0xE0, 0xAC, 0x13, 0x29, 0x9B, 0xB1, 0x65, 0xB7, 0x17, 
	0x56, 0x72, 0x19, 0xE2, 0x30, 0x40, 0x59, 0x1A, 0x2B, 0x76, 
	0x78, 0x76, 0xFC, 0x79, 0xCA, 0xE5, 0x0A, 0x46, 0x04, 0xA3, 
	0x40, 0x2B, 0x8D, 0xD6, 0x0A, 0xAD, 0x74, 0x52, 0x8C, 0x66, 
	0xB6, 0x84, 0xD9, 0xB7, 0xF7, 0x00, 0x8E, 0xE3, 0xB0, 0x7F, 
	0xF7, 0x11, 0x06, 0xFA, 0x16, 0x32, 0x7D, 0xC0, 0x23, 0x0C, 
	0x83, 0x94, 0x15, 0x66, 0x8E, 0xB3, 0xB6, 0x88, 0xB4, 0x00, 
	0x10, 0x23, 0xC4, 0x71, 0x8C, 0x51, 0x0A, 0xB7, 0x98, 0xE3, 
	0x2F, 0xAF, 0xBE, 0xCD, 0x8E, 0xA7, 0x5F, 0xC4, 0x52, 0x1A, 
	0xA3, 0x14, 0x1A, 0x0D, 0x5A, 0x01, 0x0A, 0xDD, 0x84, 0x5B, 
	0x29, 0x50, 0x46, 0xA1, 0x1D, 0x0B, 0x8D, 0x41, 0x8C, 0xA1, 
	0xBB, 0xB7, 0xC4, 0xE0, 0x92, 0x85, 0x60, 0x20, 0x8A, 0x22, 
	0xA2, 0x28, 0x64, 0x0E, 0x0D, 0xEB, 0x0D, 0xBF, 0x25, 0x00, 
	0x22, 0x42, 0xBD, 0xE1, 0x93, 0xCB, 0xE5, 0x78, 0xE6, 0x37, 
	0xCF, 0xB0, 0x6F, 0xDF, 0x3E, 0x1C, 0x3B, 0x83, 0x18, 0x43, 
	0xA3, 0xD1, 0xC0, 0x71, 0x3A, 0x12, 0xDA, 0x01, 0x8D, 0x46, 
	0x03, 0x94, 0xC2, 0xB6, 0x6D, 0x24, 0x8E, 0x01, 0x68, 0x78, 
	0x3E, 0x1D, 0x1D, 0x19, 0x04, 0x83, 0xDF, 0x68, 0x30, 0x34, 
	0x3C, 0xCC, 0xBB, 0x7F, 0x7B, 0x8F, 0x46, 0xA3, 0x81, 0xE7, 
	0x79, 0x29, 0xA5, 0x9B, 0x8A, 0xD0, 0xC4, 0xD2, 0xDA, 0x5B, 
	0x62, 0xC1, 0xC4, 0x31, 0xBE, 0x9F, 0x00, 0xEB, 0xEB, 0xEB, 
	0x03, 0xA0, 0xA3, 0xA3, 0x23, 0x65, 0x8E, 0xA1, 0x5E, 0xAF, 
	0x63, 0x8C, 0x61, 0xC1, 0x19, 0x0B, 0x00, 0x38, 0x7E, 0xEC, 
	0x38, 0x99, 0x4C, 0x06, 0x6D, 0x69, 0xB2, 0xD9, 0x2C, 0x95, 
	0x6A, 0x05, 0x09, 0x85, 0x6A, 0xAD, 0x0A, 0x80, 0xEF, 0xFB, 
	0x49, 0x01, 0xA7, 0x34, 0x6F, 0x89, 0x40, 0xB3, 0x6D, 0x63, 
	0x4C, 0xE2, 0x9B, 0x31, 0x14, 0x0A, 0x05, 0x00, 0xEE, 0xBA, 
	0xEB, 0x6B, 0x74, 0x75, 0x75, 0xF1, 0xE6, 0x1B, 0x6F, 0xB0, 
	0x7D, 0xFB, 0x77, 0xD9, 0x76, 0xCF, 0xBD, 0xAC, 0x59, 0xF3, 
	0x51, 0x76, 0xBE, 0xB8, 0x93, 0xAB, 0xAE, 0xDC, 0xC0, 0x2D, 
	0x9F, 0xFB, 0x0C, 0xA5, 0xEE, 0x56, 0x2A, 0x17, 0xDC, 0xE4, 
	0xD9, 0xAE, 0xEE, 0x2E, 0x00, 0xF2, 0xB9, 0x5C, 0xDA, 0xA0, 
	0x4C, 0x4B, 0x0A, 0x8C, 0x31, 0xD8, 0x33, 0xAD, 0x73, 0x16, 
	0x80, 0x11, 0xC4, 0x18, 0x6A, 0xB5, 0x1A, 0x00, 0x97, 0x7D, 
	0xE2, 0x32, 0x40, 0x73, 0xFE, 0xF9, 0x6B, 0x58, 0xBA, 0xEC, 
	0x6C, 0x6E, 0xD8, 0xB4, 0x09, 0xDB, 0xCA, 0xD0, 0xDB, 0xDB, 
	0xC3, 0xDA, 0xB5, 0x17, 0x71, 0x2A, 0xE2, 0x79, 0x5E, 0xA2, 
	0x57, 0x64, 0xCE, 0x6F, 0xB6, 0x31, 0xA6, 0x0D, 0x40, 0x12, 
	0x81, 0x20, 0x08, 0x00, 0xF8, 0xF8, 0xC7, 0xD6, 0x81, 0xD2, 
	0x64, 0x32, 0x19, 0x00, 0x2E, 0x5F, 0xFF, 0x29, 0xFE, 0x5B, 
	0x09, 0x82, 0x00, 0x89, 0x93, 0xF9, 0xD0, 0xC2, 0x3A, 0xD4, 
	0x49, 0x00, 0x60, 0x28, 0xBA, 0x2E, 0x00, 0xB9, 0xBC, 0xCB, 
	0xFF, 0x2A, 0x79, 0x37, 0x0F, 0x08, 0xC6, 0x08, 0x4D, 0xE6, 
	0x92, 0x1A, 0x30, 0xD2, 0x96, 0x02, 0x49, 0x42, 0x55, 0xF3, 
	0x3C, 0xFE, 0x5F, 0xD2, 0xF0, 0x1A, 0xC4, 0x32, 0x37, 0x05, 
	0x4A, 0x29, 0xB4, 0x98, 0x84, 0xB3, 0xCD, 0xC7, 0x98, 0x94, 
	0x62, 0x27, 0x91, 0x76, 0x45, 0x22, 0x31, 0x5E, 0x3D, 0xA9, 
	0x99, 0x20, 0x8C, 0x68, 0x8E, 0x2A, 0x33, 0x74, 0x4D, 0xA3, 
	0xDB, 0x7E, 0xE6, 0x4D, 0x81, 0x01, 0xF2, 0xF9, 0x3C, 0x00, 
	0x5F, 0xFE, 0xD2, 0x57, 0xB8, 0xE8, 0xC2, 0x8B, 0x78, 0x6D, 
	0xFC, 0x4F, 0xDC, 0x71, 0xFB, 0xED, 0x7C, 0xEF, 0x81, 0x07, 
	0x58, 0xBB, 0x6E, 0x2D, 0xAF, 0xFD, 0x71, 0x9C, 0xD1, 0xD1, 
	0x75, 0xD4, 0xAA, 0x55, 0xDE, 0x7B, 0x6F, 0x37, 0xCB, 0x57, 
	0x7C, 0x98, 0xF1, 0xF1, 0x71, 0x6E, 0xFB, 0xE2, 0x6D, 0x2C, 
	0x5D, 0xBA, 0xB4, 0x05, 0x40, 0x2E, 0x97, 0x4B, 0x87, 0xD5, 
	0x29, 0x16, 0xE1, 0x89, 0x5A, 0x80, 0xE9, 0x6A, 0x8D, 0xBF, 
	0xFF, 0xE3, 0x03, 0xCA, 0xD5, 0x1A, 0x7E, 0x14, 0x50, 0xAB, 
	0x37, 0xA8, 0x54, 0x6A, 0x54, 0x6A, 0x75, 0xFC, 0x20, 0x20, 
	0x88, 0x22, 0x8E, 0x4E, 0x4F, 0x73, 0xF0, 0xC8, 0x11, 0xEA, 
	0x9E, 0x4F, 0x18, 0x84, 0x73, 0x8C, 0xCC, 0x50, 0xBB, 0x59, 
	0xEF, 0x2C, 0x00, 0x69, 0xAB, 0x01, 0x11, 0xC1, 0x88, 0x50, 
	0xA9, 0x54, 0x00, 0x78, 0xEC, 0x67, 0x0F, 0x13, 0x45, 0x21, 
	0xB6, 0x9D, 0xB0, 0xE0, 0x91, 0x47, 0x7E, 0x4A, 0xB5, 0x5C, 
	0x61, 0x6C, 0xD3, 0x66, 0x9C, 0x4E, 0x07, 0x11, 0xE1, 0x9A, 
	0x6B, 0xAE, 0x26, 0x08, 0x7C, 0xDC, 0x9C, 0x4B, 0x64, 0x62, 
	0x2A, 0x95, 0x0A, 0x95, 0x4A, 0x05, 0x4B, 0x5B, 0x0C, 0x9C, 
	0x3E, 0x90, 0x34, 0x26, 0x31, 0x48, 0x24, 0xA0, 0x4F, 0x31, 
	0x02, 0x76, 0xBA, 0x29, 0x3D, 0xF5, 0xCB, 0xA7, 0xE8, 0x3F, 
	0xAD, 0x9F, 0x43, 0x07, 0x0F, 0xB1, 0x7E, 0xFD, 0x7A, 0x76, 
	0xEC, 0xD8, 0xC1, 0x82, 0x05, 0x0B, 0x98, 0x9A, 0x9A, 0x62, 
	0xE5, 0xAA, 0x61, 0x3C, 0xAF, 0xC1, 0xDE, 0xC9, 0xBD, 0x74, 
	0x15, 0x8B, 0x1C, 0x3A, 0x74, 0x98, 0xB1, 0xAD, 0x63, 0xF8, 
	0x83, 0x83, 0xCC, 0xAE, 0x39, 0x93, 0x93, 0x38, 0xB6, 0x33, 
	0xDB, 0xE4, 0x0C, 0xE6, 0x14, 0x00, 0x00, 0xD9, 0x6C, 0x27, 
	0x00, 0xBF, 0xFA, 0xF5, 0xD3, 0x5C, 0x70, 0xE1, 0x05, 0xFC, 
	0x6E, 0xC7, 0x73, 0x2C, 0x5B, 0xB6, 0x8C, 0x47, 0x1F, 0x7B, 
	0x9C, 0x8B, 0x2F, 0xB9, 0x84, 0xD7, 0x77, 0xBD, 0xCE, 0xA5, 
	0x87, 0x0E, 0x53, 0xAB, 0x55, 0x99, 0x98, 0xDC, 0xCB, 0xE2, 
	0x25, 0x67, 0xF1, 0xCA, 0x2B, 0x2F, 0x33, 0xB6, 0x75, 0x6C, 
	0x4E, 0x0A, 0x1C, 0xC7, 0x69, 0xA3, 0xF9, 0x7F, 0x6C, 0x44, 
	0x42, 0xB9, 0x3C, 0x0D, 0xC0, 0xB6, 0x6D, 0xDF, 0xC0, 0x18, 
	0xC3, 0xA7, 0xAF, 0xB9, 0x9A, 0xC1, 0xC1, 0x85, 0x3C, 0xF8, 
	0xE0, 0x8F, 0xA9, 0xD7, 0x6A, 0x5C, 0xB5, 0xE1, 0x0A, 0x16, 
	0x9D, 0xB9, 0x90, 0x30, 0x0A, 0x99, 0xDA, 0x37, 0x05, 0x02, 
	0x1B, 0xAE, 0xBC, 0x22, 0x99, 0x1B, 0x93, 0x93, 0x2D, 0x46, 
	0xAA, 0xB5, 0x2A, 0x22, 0x27, 0xED, 0x84, 0x71, 0xF3, 0x8A, 
	0x86, 0x31, 0xC9, 0xD0, 0x30, 0x71, 0xD2, 0xB3, 0x17, 0x9E, 
	0x79, 0x26, 0xCA, 0x52, 0x98, 0xD8, 0xA0, 0x94, 0x45, 0x7F, 
	0x7F, 0x1F, 0xAA, 0xBF, 0x8F, 0x28, 0x8E, 0xE8, 0xEC, 0xCC, 
	0x22, 0xB1, 0x70, 0xD6, 0x92, 0x25, 0x68, 0xAD, 0xD3, 0x4E, 
	0x37, 0x1F, 0x6F, 0x13, 0xC7, 0xA4, 0x79, 0x63, 0x9D, 0x01, 
	0x10, 0x1B, 0xD5, 0xB2, 0x0F, 0xC4, 0x46, 0x21, 0x28, 0xF2, 
	0x85, 0x84, 0x86, 0x5B, 0x6F, 0xFA, 0x2C, 0x2B, 0x57, 0x0D, 
	0xB3, 0xEB, 0xCF, 0xBB, 0xB8, 0x67, 0xDB, 0xD7, 0xF9, 0xD6, 
	0x3D, 0xF7, 0x31, 0x3A, 0x3A, 0xCA, 0x5B, 0x6F, 0xBE, 0xC5, 
	0xC8, 0xC8, 0xB9, 0xF8, 0xBE, 0xCF, 0xFB, 0x1F, 0xEC, 0x61, 
	0xD5, 0xAA, 0x95, 0xBC, 0xFC, 0xD2, 0x4B, 0xFC, 0xF6, 0xD9, 
	0x67, 0xE0, 0xD8, 0x96, 0x13, 0x3A, 0xBB, 0x7F, 0x81, 0x5B, 
	0x28, 0xA4, 0x1B, 0xF4, 0x3C, 0x29, 0x50, 0x2D, 0x0B, 0x89, 
	0x41, 0x89, 0x80, 0x08, 0x5E, 0xDA, 0x09, 0x37, 0x6C, 0xB8, 
	0x9C, 0x7C, 0xA1, 0xC0, 0xD0, 0x8A, 0xE5, 0x0C, 0x0E, 0x2E, 
	0x66, 0xE3, 0x0D, 0x1B, 0x29, 0x16, 0x8A, 0xF4, 0xF7, 0xF7, 
	0xB3, 0x72, 0xE5, 0x10, 0x81, 0xEF, 0x73, 0xFA, 0x82, 0x33, 
	0x70, 0x5D, 0x97, 0xEB, 0x37, 0x6E, 0x9C, 0x37, 0x00, 0xB6, 
	0x65, 0x9D, 0xBC, 0x06, 0x9A, 0x43, 0x62, 0x66, 0xF3, 0x70, 
	0xA2, 0x13, 0x6E, 0xDD, 0x3A, 0x46, 0x1C, 0x0B, 0x99, 0x8C, 
	0x0D, 0x28, 0x36, 0x6F, 0xDA, 0x48, 0x14, 0x46, 0x49, 0x1B, 
	0xB5, 0x34, 0x62, 0x84, 0x91, 0x91, 0xF3, 0x88, 0x45, 0xC8, 
	0x76, 0x66, 0x67, 0xBD, 0x6E, 0xCD, 0x80, 0x01, 0x24, 0xB5, 
	0xD0, 0x06, 0x20, 0x6C, 0x8B, 0x80, 0x88, 0x20, 0x46, 0x74, 
	0x2E, 0x97, 0x03, 0xE0, 0xEE, 0xBB, 0xBF, 0xC9, 0xC8, 0x79, 
	0xE7, 0xB2, 0x73, 0xE7, 0x8B, 0xDC, 0xFA, 0x85, 0xCF, 0xF3, 
	0xD8, 0xE3, 0x4F, 0xB0, 0x68, 0x70, 0x90, 0xA9, 0xBD, 0x7B, 
	0x59, 0x33, 0x72, 0x1E, 0x75, 0xCF, 0xE3, 0x5F, 0xFB, 0x0F, 
	0xB0, 0x68, 0x70, 0x90, 0x77, 0xDF, 0x7A, 0x87, 0x1F, 0x3D, 
	0xF4, 0x43, 0x06, 0xFD, 0x35, 0xB3, 0x2A, 0x27, 0x3B, 0x76, 
	0x25, 0xEB, 0x58, 0x18, 0xA9, 0x20, 0x08, 0xE6, 0x6E, 0x44, 
	0x5E, 0xAD, 0x3E, 0xA7, 0xCF, 0x07, 0x41, 0x68, 0x47, 0x51, 
	0x94, 0x4C, 0xB2, 0x82, 0x4B, 0x24, 0xD0, 0xDD, 0xD3, 0x43, 
	0x18, 0x85, 0x94, 0x4A, 0xDD, 0x89, 0xB7, 0xAE, 0x8B, 0x95, 
	0xC9, 0xE0, 0xC4, 0x42, 0xC6, 0x71, 0x08, 0xA3, 0x90, 0xAC, 
	0x9B, 0x9D, 0x37, 0x05, 0x95, 0x4A, 0x85, 0x5A, 0xAD, 0xEE, 
	0x1C, 0x3D, 0x7A, 0x14, 0xAD, 0x75, 0x4B, 0x1A, 0xD4, 0xD8, 
	0xD8, 0x4D, 0xB4, 0x6F, 0x45, 0x51, 0x14, 0x5D, 0x3A, 0xB2, 
	0xE6, 0x23, 0x2F, 0x7C, 0xF5, 0xCE, 0x3B, 0x99, 0x98, 0x98, 
	0x60, 0x06, 0xB9, 0x48, 0xF2, 0xF2, 0x11, 0x06, 0x11, 0x28, 
	0x83, 0x52, 0x1A, 0x63, 0x84, 0x28, 0x8C, 0x88, 0x45, 0xC8, 
	0x64, 0x32, 0x9C, 0x73, 0xCE, 0xEA, 0x39, 0x00, 0xB6, 0x6F, 
	0xFF, 0x3E, 0xB6, 0xE3, 0xDC, 0x0C, 0x3C, 0xD9, 0xFE, 0x8A, 
	0xA9, 0x6E, 0xBC, 0xF1, 0xE6, 0xB9, 0x23, 0x52, 0x69, 0x9E, 
	0x78, 0xF2, 0xD1, 0x2E, 0xE0, 0x3E, 0xA0, 0xAB, 0x58, 0x2C, 
	0x4A, 0x4F, 0x6F, 0x8F, 0x5D, 0xEA, 0x2A, 0x51, 0x2A, 0x95, 
	0xB4, 0xEB, 0xBA, 0x56, 0x36, 0x9B, 0xB5, 0x52, 0x41, 0x29, 
	0xAD, 0xE3, 0x28, 0x8A, 0xFC, 0x86, 0x6F, 0xCA, 0xD5, 0xB2, 
	0xF6, 0xEA, 0x5E, 0x54, 0x29, 0x57, 0xA2, 0x83, 0x07, 0x0F, 
	0xAA, 0x72, 0x75, 0xFA, 0x60, 0xBD, 0xEE, 0xDD, 0x71, 0xEF, 
	0x7D, 0xDF, 0x09, 0xA2, 0x38, 0x9D, 0x94, 0xA6, 0xB9, 0x08, 
	0xDB, 0x11, 0x29, 0x85, 0x65, 0x5B, 0x00, 0xD3, 0xC0, 0x6D, 
	0xAF, 0xFE, 0xE1, 0x55, 0x56, 0x0C, 0xAF, 0x20, 0x97, 0xCD, 
	0x75, 0x74, 0x74, 0x74, 0xF4, 0x02, 0x3D, 0xE9, 0xE9, 0x06, 
	0xF2, 0x40, 0x66, 0x66, 0xEA, 0x02, 0x35, 0xE0, 0x38, 0x70, 
	0x0C, 0x38, 0xEC, 0x79, 0xDE, 0xD1, 0x3D, 0x7B, 0xFE, 0x19, 
	0x0E, 0x0D, 0x0D, 0x9F, 0x74, 0xB4, 0xDB, 0xF3, 0xCF, 0x7B, 
	0x33, 0x9B, 0x8E, 0x54, 0x2C, 0xC0, 0x01, 0x62, 0xA0, 0x9E, 
	0xDE, 0xD5, 0xF4, 0xF9, 0x19, 0x1D, 0x11, 0x10, 0xA6, 0x40, 
	0xEA, 0x80, 0x64, 0xB3, 0xD9, 0x8E, 0xA1, 0xA1, 0xE1, 0x38, 
	0xA5, 0xC0, 0xBC, 0xF2, 0x6F, 0xBC, 0x9B, 0x6B, 0xBF, 0x93, 
	0xB2, 0x21, 0x8E, 0x00, 0x00, 0x00, 0x00, 0x49, 0x45, 0x4E, 
	0x44, 0xAE, 0x42, 0x60, 0x82, 
};

wxBitmap& pinpad_png_to_wx_bitmap()
{
	static wxMemoryInputStream memIStream( pinpad_png, sizeof( pinpad_png ) );
	static wxImage image( memIStream, wxBITMAP_TYPE_PNG );
	static wxBitmap bmp( image );
	return bmp;
};


#endif //PINPAD_PNG_H
