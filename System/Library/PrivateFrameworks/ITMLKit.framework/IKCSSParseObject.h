/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:14:33 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <ITMLKit/ITMLKit-Structs.h>
@class IKArray;

@interface IKCSSParseObject : NSObject {

	IKArray* _cssValue;
	long long _type;
	NSRange _range;

}

@property (nonatomic,retain) IKArray * cssValue;              //@synthesize cssValue=_cssValue - In the implementation block
@property (assign,nonatomic) long long type;                  //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) NSRange range;                   //@synthesize range=_range - In the implementation block
+(id)stringifyList:(id)arg1 ;
-(id)description;
-(id)init;
-(void)setType:(long long)arg1 ;
-(long long)type;
-(NSRange)range;
-(void)setRange:(NSRange)arg1 ;
-(IKArray *)cssValue;
-(void)setCssValue:(IKArray *)arg1 ;
@end

