/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:55:21 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/MetricsKit.framework/MetricsKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface MTInterprocessChangeNotifier : NSObject {

	NSString* _identifier;
	int _token;

}
+(void)notify:(id)arg1 ;
+(id)fullIdentifier:(id)arg1 ;
-(void)dealloc;
-(void)stop;
-(void)notify;
-(id)initWithIdentifier:(id)arg1 onChange:(/*^block*/id)arg2 ;
@end
