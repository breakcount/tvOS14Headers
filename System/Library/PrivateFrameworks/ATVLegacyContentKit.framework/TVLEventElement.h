/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:38:38 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/ATVLegacyContentKit.framework/ATVLegacyContentKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ATVLegacyContentKit/TVLElement.h>

@class NSString, TVLImageElement, NSDate;

@interface TVLEventElement : TVLElement {

	NSString* _title;
	NSString* _eventDescription;
	TVLImageElement* _image;
	NSDate* _startDate;
	NSDate* _endDate;

}

@property (nonatomic,copy) NSString * title;                         //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSString * eventDescription;              //@synthesize eventDescription=_eventDescription - In the implementation block
@property (nonatomic,retain) TVLImageElement * image;                //@synthesize image=_image - In the implementation block
@property (nonatomic,retain) NSDate * startDate;                     //@synthesize startDate=_startDate - In the implementation block
@property (nonatomic,retain) NSDate * endDate;                       //@synthesize endDate=_endDate - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(NSDate *)endDate;
-(NSDate *)startDate;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(void)setStartDate:(NSDate *)arg1 ;
-(void)setEndDate:(NSDate *)arg1 ;
-(TVLImageElement *)image;
-(void)setImage:(TVLImageElement *)arg1 ;
-(void)setEventDescription:(NSString *)arg1 ;
-(NSString *)eventDescription;
-(id)initWithXMLElement:(id)arg1 parentFeedElement:(id)arg2 ;
@end

