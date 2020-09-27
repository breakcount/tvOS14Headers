/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:36:41 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/CryptoTokenKit.framework/CryptoTokenKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/TKTokenAccessDB.h>

@class NSUserDefaults, NSString;

@interface TKTokenAccessDBBackedByUserDefaults : NSObject <TKTokenAccessDB> {

	NSUserDefaults* _db;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id)_keyRefForRequest:(id)arg1 ;
-(long long)fetchAccessForRequest:(id)arg1 ;
-(void)storeAccess:(long long)arg1 forRequest:(id)arg2 ;
-(void)clearAllAccessRecords;
@end

