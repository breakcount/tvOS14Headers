/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:38:35 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/HIDPlugins/IOHIDKeyboardFilter.plugin/IOHIDKeyboardFilter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <IOHIDKeyboardFilter/IOHIDKeyboardFilter-Structs.h>
@interface StickyKeyHandler : NSObject {

	IOHIDKeyboardFilter* _filter;
	IOHIDServiceRef _service;

}
-(void)removeObserver;
-(id)initWithFilter:(IOHIDKeyboardFilter*)arg1 service:(IOHIDServiceRef)arg2 ;
-(void)StickyKeyNotification:(id)arg1 ;
@end

