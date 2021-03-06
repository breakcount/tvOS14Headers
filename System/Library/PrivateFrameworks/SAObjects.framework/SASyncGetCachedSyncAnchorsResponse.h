/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:13:03 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SABaseCommand.h>
#import <SAObjects/SAServerBoundCommand.h>

@class NSArray, NSString;

@interface SASyncGetCachedSyncAnchorsResponse : SABaseCommand <SAServerBoundCommand>

@property (nonatomic,copy) NSArray * anchors; 
@property (nonatomic,copy) NSString * interactionId; 
@property (nonatomic,copy) NSString * aceId; 
@property (nonatomic,copy) NSString * refId; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)getCachedSyncAnchorsResponse;
+(id)getCachedSyncAnchorsResponseWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(NSArray *)anchors;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(NSString *)interactionId;
-(void)setInteractionId:(NSString *)arg1 ;
-(void)setAnchors:(NSArray *)arg1 ;
@end

