/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:15:43 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSError, NSArray;


@protocol MPMiddlewareOperation <NSObject>
@property (nonatomic,readonly) NSError * error; 
@property (nonatomic,copy) id invalidationHandler; 
@property (nonatomic,readonly) NSArray * invalidationObservers; 
@optional
-(id)timeoutDescription;

@required
-(NSError *)error;
-(void)setInvalidationHandler:(/*^block*/id)arg1;
-(id)invalidationHandler;
-(NSArray *)invalidationObservers;

@end
