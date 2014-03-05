//
//  AppData.h
//  SwiftzMac
//
//  Created by XiNGRZ on 13-10-2.
//  Copyright (c) 2013年 XiNGRZ. All rights reserved.
//

#import <Foundation/Foundation.h>

extern NSString * const SMInitialKey;
extern NSString * const SMServerKey;
extern NSString * const SMEntryKey;
extern NSString * const SMEntryListKey;
extern NSString * const SMInterfaceKey;
extern NSString * const SMIpKey;
extern NSString * const SMIpManualKey;
extern NSString * const SMKeychainKey;
extern NSString * const SMStatusBarKey;
extern NSString * const SMUsernameKey;

@class NetworkInterface;

@interface AppData : NSObject {
    NSArray *_entries;
    NSArray *_addresses;
    NSArray *_interfaces;
    NSUserDefaults *_defaults;
}

+ (AppData *)instance;

// flags
@property (readonly) BOOL firstrun;

// caches
@property NSArray *entries;
@property NSArray *addresses;
@property NSArray *interfaces;

// network info
@property BOOL allowManualIp;
@property NSString *mac;

// login params
@property NSString *username;
@property NSString *server;
@property NSString *entry;
@property NSString *interface;
@property NSString *address;

// usage params
@property BOOL shouldUseKeychain;
@property BOOL shouldShowStatusBarMenu;

@end