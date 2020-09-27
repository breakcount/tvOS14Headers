/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:16:43 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Home/HFItem.h>
#import <libobjc.A.dylib/HFHomeKitItemProtocol.h>

@protocol HFHomeKitObject;
@class NSString;

@interface HFPlaceholderItem : HFItem <HFHomeKitItemProtocol> {

	id<HFHomeKitObject> _homeKitObject;

}

@property (nonatomic,readonly) id<HFHomeKitObject> homeKitObject;              //@synthesize homeKitObject=_homeKitObject - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id<HFHomeKitObject>)homeKitObject;
-(id)_subclass_updateWithOptions:(id)arg1 ;
-(id)initWithHomeKitObject:(id)arg1 ;
@end

