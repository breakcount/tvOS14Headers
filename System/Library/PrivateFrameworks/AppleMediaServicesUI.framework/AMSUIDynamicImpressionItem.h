/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:39:58 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServicesUI.framework/AppleMediaServicesUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AppleMediaServicesUI/AppleMediaServicesUI-Structs.h>
@class AMSUIDynamicImpressionMetrics;

@interface AMSUIDynamicImpressionItem : NSObject {

	AMSUIDynamicImpressionMetrics* _impressionMetrics;
	CGRect _frame;

}

@property (assign,nonatomic) CGRect frame;                                                   //@synthesize frame=_frame - In the implementation block
@property (nonatomic,retain) AMSUIDynamicImpressionMetrics * impressionMetrics;              //@synthesize impressionMetrics=_impressionMetrics - In the implementation block
-(CGRect)frame;
-(void)setFrame:(CGRect)arg1 ;
-(id)initWithFrame:(CGRect)arg1 impressionMetrics:(id)arg2 ;
-(AMSUIDynamicImpressionMetrics *)impressionMetrics;
-(void)setImpressionMetrics:(AMSUIDynamicImpressionMetrics *)arg1 ;
@end

