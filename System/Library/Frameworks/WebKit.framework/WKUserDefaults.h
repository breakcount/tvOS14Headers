/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:14:03 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreFoundation/NSUserDefaults.h>

@class NSString, WKPreferenceObserver;

@interface WKUserDefaults : NSUserDefaults {

	NSString* m_suiteName;
	WKPreferenceObserver* m_observer;

}
-(void)_notifyObserversOfChangeFromValuesForKeys:(id)arg1 toValuesForKeys:(id)arg2 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id)initWithSuiteName:(id)arg1 ;
@end
