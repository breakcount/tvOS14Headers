/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:13:23 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <EventKit/EKSerializableObject.h>

@class CalLocation;

@interface EKSerializableStructuredLocation : EKSerializableObject {

	CalLocation* _calLocation;

}

@property (nonatomic,copy) CalLocation * calLocation;              //@synthesize calLocation=_calLocation - In the implementation block
+(id)classesForKey;
-(CalLocation *)calLocation;
-(void)setCalLocation:(CalLocation *)arg1 ;
-(id)initWithStructuredLocation:(id)arg1 ;
-(id)createStructuredLocation;
@end

