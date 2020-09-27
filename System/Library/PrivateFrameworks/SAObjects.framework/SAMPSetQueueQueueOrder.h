/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:13:01 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSString;

@interface SAMPSetQueueQueueOrder : AceObject <SAAceSerializable>

@property (assign,nonatomic) BOOL descending; 
@property (nonatomic,copy) NSString * mediaItemProperty; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)setQueueQueueOrder;
+(id)setQueueQueueOrderWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(NSString *)mediaItemProperty;
-(void)setMediaItemProperty:(NSString *)arg1 ;
-(BOOL)descending;
-(void)setDescending:(BOOL)arg1 ;
@end

