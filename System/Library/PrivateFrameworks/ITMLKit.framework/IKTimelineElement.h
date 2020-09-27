/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:14:31 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ITMLKit/IKViewElement.h>

@class IKTextElement, NSArray, NSURL;

@interface IKTimelineElement : IKViewElement

@property (nonatomic,retain,readonly) IKTextElement * title; 
@property (nonatomic,retain,readonly) NSArray * events; 
@property (nonatomic,readonly) unsigned long long timelineType; 
@property (nonatomic,retain,readonly) NSURL * url; 
@property (nonatomic,readonly) double refreshInterval; 
-(NSURL *)url;
-(IKTextElement *)title;
-(NSArray *)events;
-(double)refreshInterval;
-(unsigned long long)timelineType;
@end

