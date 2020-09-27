/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:38:46 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVFCore/AVOutputDeviceFrecentsWriting.h>

@class NSMutableDictionary, NSMutableArray, NSString;

@interface AVOutputDeviceLegacyFrecentsWriter : NSObject <AVOutputDeviceFrecentsWriting> {

	NSMutableDictionary* _updatedFrecentsList;
	NSMutableArray* _keysToRemove;

}

@property (nonatomic,readonly) long long numberOfKeysToBeSet; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)defaultFrecentsWriter;
-(id)init;
-(void)dealloc;
-(void)setFrecencyInfo:(id)arg1 forDeviceID:(id)arg2 ;
-(long long)numberOfKeysToBeSet;
-(void)removeFrecencyInfoForDeviceID:(id)arg1 ;
-(BOOL)persistToDiskReturningError:(id*)arg1 ;
@end

