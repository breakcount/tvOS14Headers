/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:13:03 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SABaseClientBoundCommand.h>

@class SARemoteDevice, NSData;

@interface SAExecuteOnRemoteRequest : SABaseClientBoundCommand

@property (nonatomic,retain) SARemoteDevice * remoteDevice; 
@property (assign,nonatomic) BOOL requiresResponseFromRemote; 
@property (nonatomic,copy) NSData * serializedCommand; 
@property (assign,nonatomic) BOOL useGuaranteedDelivery; 
+(id)executeOnRemoteRequest;
+(id)executeOnRemoteRequestWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(BOOL)mutatingCommand;
-(SARemoteDevice *)remoteDevice;
-(void)setRemoteDevice:(SARemoteDevice *)arg1 ;
-(BOOL)requiresResponseFromRemote;
-(void)setRequiresResponseFromRemote:(BOOL)arg1 ;
-(NSData *)serializedCommand;
-(void)setSerializedCommand:(NSData *)arg1 ;
-(BOOL)useGuaranteedDelivery;
-(void)setUseGuaranteedDelivery:(BOOL)arg1 ;
@end

