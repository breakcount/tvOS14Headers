/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:14:04 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebKit/WebKit-Structs.h>
#import <libobjc.A.dylib/WKObject.h>

@class NSNumber, NSString;

@interface WKWindowFeatures : NSObject <WKObject> {

	ObjectStorage<API::WindowFeatures> _windowFeatures;

}

@property (nonatomic,readonly) NSNumber * _locationBarVisibility; 
@property (nonatomic,readonly) NSNumber * _scrollbarsVisibility; 
@property (nonatomic,readonly) NSNumber * _fullscreenDisplay; 
@property (nonatomic,readonly) NSNumber * _dialogDisplay; 
@property (nonatomic,readonly) NSNumber * menuBarVisibility; 
@property (nonatomic,readonly) NSNumber * statusBarVisibility; 
@property (nonatomic,readonly) NSNumber * toolbarsVisibility; 
@property (nonatomic,readonly) NSNumber * allowsResizing; 
@property (nonatomic,readonly) NSNumber * x; 
@property (nonatomic,readonly) NSNumber * y; 
@property (nonatomic,readonly) NSNumber * width; 
@property (nonatomic,readonly) NSNumber * height; 
@property (readonly) Object* _apiObject; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(NSNumber *)width;
-(NSNumber *)height;
-(NSNumber *)x;
-(NSNumber *)y;
-(Object*)_apiObject;
-(NSNumber *)menuBarVisibility;
-(NSNumber *)statusBarVisibility;
-(NSNumber *)toolbarsVisibility;
-(NSNumber *)allowsResizing;
-(NSNumber *)_locationBarVisibility;
-(NSNumber *)_scrollbarsVisibility;
-(NSNumber *)_fullscreenDisplay;
-(NSNumber *)_dialogDisplay;
@end

