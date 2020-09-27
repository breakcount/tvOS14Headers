/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:29:24 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <UIKitCore/UIKitCore-Structs.h>
@class UILabel, NSHashTable, NSCache;

@interface _UIDatePickerLinkedLabelStorage : NSObject {

	UILabel* _sizingLabel;
	NSHashTable* _attachedLabels;
	unsigned long long _currentPriority;
	NSCache* _sizeCache;

}
-(id)init;
-(unsigned long long)_currentPriority;
-(void)_resetPriority;
-(void)_notifyAllLabelsExcept:(id)arg1 ;
-(BOOL)_cachedSizeForKey:(id)arg1 size:(CGSize*)arg2 ;
-(void)_setCachedSize:(CGSize)arg1 forKey:(id)arg2 ;
-(void)_attachLabel:(id)arg1 ;
-(void)_detachLabel:(id)arg1 ;
-(unsigned long long)_requiresLowerPriority:(id)arg1 ;
-(CGSize)_sizeForText:(id)arg1 font:(id)arg2 height:(double)arg3 ;
@end

