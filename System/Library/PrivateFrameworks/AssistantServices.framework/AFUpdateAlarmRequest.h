/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:13:09 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AssistantServices/AFSiriRequest.h>

@class NSArray;

@interface AFUpdateAlarmRequest : AFSiriRequest {

	NSArray* _alarms;

}

@property (nonatomic,copy) NSArray * alarms;              //@synthesize alarms=_alarms - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)alarm;
-(NSArray *)alarms;
-(void)setAlarms:(NSArray *)arg1 ;
-(id)createResponse;
@end

