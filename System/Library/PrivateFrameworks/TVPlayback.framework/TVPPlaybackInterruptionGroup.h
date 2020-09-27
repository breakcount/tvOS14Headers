/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:57:34 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/TVPlayback.framework/TVPlayback
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVPlayback/TVPPlaybackInterruptable.h>
#import <TVPlayback/TVPPlaybackInterruptableRegistration.h>

@class NSHashTable, NSString;

@interface TVPPlaybackInterruptionGroup : NSObject <TVPPlaybackInterruptable, TVPPlaybackInterruptableRegistration> {

	NSHashTable* _interruptables;

}

@property (nonatomic,retain) NSHashTable * interruptables;              //@synthesize interruptables=_interruptables - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)addInterruptable:(id)arg1 ;
-(void)removeInterruptable:(id)arg1 ;
-(void)interruptionWillBegin;
-(void)interruptionDidBegin;
-(void)interruptionWillEnd;
-(void)interruptionDidEnd;
-(void)addInterruptablesFromGroup:(id)arg1 ;
-(BOOL)containsInterruptable:(id)arg1 ;
-(NSHashTable *)interruptables;
-(void)_performInterruptionSelector:(SEL)arg1 ;
-(void)setInterruptables:(NSHashTable *)arg1 ;
@end
