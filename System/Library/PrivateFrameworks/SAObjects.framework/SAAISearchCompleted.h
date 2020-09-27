/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:13:00 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSArray;

@interface SAAISearchCompleted : SABaseClientBoundCommand

@property (nonatomic,copy) NSArray * results; 
+(id)searchCompleted;
+(id)searchCompletedWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSArray *)results;
-(id)groupIdentifier;
-(void)setResults:(NSArray *)arg1 ;
-(id)encodedClassName;
-(BOOL)requiresResponse;
@end
