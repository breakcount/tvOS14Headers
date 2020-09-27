/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:13:11 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AssistantServices/AFSiriRequest.h>

@class NSArray;

@interface AFDismissTimerRequest : AFSiriRequest {

	NSArray* _timerURLs;

}

@property (nonatomic,copy) NSArray * timerURLs;              //@synthesize timerURLs=_timerURLs - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)createResponse;
-(NSArray *)timerURLs;
-(void)setTimerURLs:(NSArray *)arg1 ;
@end

