/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:33:24 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/AudioServerApplication.framework/AudioServerApplication
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AudioServerApplication/ASAControl.h>

@class NSArray;

@interface ASASelectorControl : ASAControl {

	NSArray* _currentItems;

}

@property (assign,nonatomic) unsigned currentItem; 
@property (assign,nonatomic) NSArray * currentItems;                       //@synthesize currentItems=_currentItems - In the implementation block
@property (nonatomic,copy,readonly) NSArray * availableItems; 
-(void)setCurrentItem:(unsigned)arg1 ;
-(unsigned)currentItem;
-(NSArray *)currentItems;
-(void)setCurrentItems:(NSArray *)arg1 ;
-(NSArray *)availableItems;
-(id)diagnosticDescriptionWithIndent:(id)arg1 walkTree:(BOOL)arg2 ;
-(id)coreAudioClassName;
-(id)nameForItem:(unsigned)arg1 ;
@end

