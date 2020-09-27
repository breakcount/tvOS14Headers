/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:36:38 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/BackgroundTasks.framework/BackgroundTasks
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BackgroundTasks/BackgroundTasks-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSDate;

@interface BGTaskRequest : NSObject <NSCopying> {

	NSString* _identifier;
	NSDate* _earliestBeginDate;

}

@property (copy,readonly) NSString * identifier;              //@synthesize identifier=_identifier - In the implementation block
@property (copy) NSDate * earliestBeginDate;                  //@synthesize earliestBeginDate=_earliestBeginDate - In the implementation block
+(id)_requestFromActivity:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)identifier;
-(void)setEarliestBeginDate:(NSDate *)arg1 ;
-(NSDate *)earliestBeginDate;
-(id)_initWithIdentifier:(id)arg1 ;
@end

