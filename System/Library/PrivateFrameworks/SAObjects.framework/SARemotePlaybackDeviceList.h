/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:13:08 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SADomainObject.h>
#import <SAObjects/SABackgroundContextObject.h>

@class NSArray, NSString;

@interface SARemotePlaybackDeviceList : SADomainObject <SABackgroundContextObject>

@property (nonatomic,copy) NSArray * remotePlaybackDevices; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)remotePlaybackDeviceList;
+(id)remotePlaybackDeviceListWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(NSArray *)remotePlaybackDevices;
-(void)setRemotePlaybackDevices:(NSArray *)arg1 ;
@end

