/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:11:49 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CoreUI/CoreUI-Structs.h>
@class NSString;

@interface CUIPSDLayoutMetricsChannel : NSObject {

	CGRect _edgeInsets;
	NSString* _name;

}

@property (nonatomic,readonly) CGRect edgeInsets;              //@synthesize edgeInsets=_edgeInsets - In the implementation block
@property (nonatomic,retain) NSString * name;                  //@synthesize name=_name - In the implementation block
-(NSString *)name;
-(void)dealloc;
-(void)setName:(NSString *)arg1 ;
-(CGRect)edgeInsets;
-(void)setEdgeInsets:(CGRect)arg1 ;
-(void)sanitizeEdgeInsets;
-(id)initWithEdgeInsets:(CGRect)arg1 ;
@end

