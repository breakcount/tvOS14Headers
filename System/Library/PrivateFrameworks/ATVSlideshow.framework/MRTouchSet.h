/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:38:42 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <ATVSlideshow/ATVSlideshow-Structs.h>
@class NSMutableSet, NSMutableDictionary, NSSet;

@interface MRTouchSet : NSObject {

	NSMutableSet* _touches;
	NSMutableDictionary* _touchesForUITouches;

}

@property (readonly) NSSet * touches;               //@synthesize touches=_touches - In the implementation block
@property (readonly) CGPoint centroid; 
@property (readonly) double scale; 
@property (readonly) double rotation; 
@property (readonly) BOOL isActive; 
-(id)description;
-(void)dealloc;
-(double)scale;
-(BOOL)isActive;
-(double)rotation;
-(CGPoint)centroid;
-(NSSet *)touches;
-(id)initWithTouch:(id)arg1 ;
-(void)addTouch:(id)arg1 ;
-(void)removeTouch:(id)arg1 ;
-(void)removeAllTouches;
-(id)initWithTouches:(id)arg1 ;
-(void)cancelAllTouches;
-(id)initWithUITouches:(id)arg1 inView:(id)arg2 ;
-(void)updateWithUITouches:(id)arg1 inView:(id)arg2 ;
@end

