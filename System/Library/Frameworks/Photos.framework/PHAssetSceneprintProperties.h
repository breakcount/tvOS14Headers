/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:13:49 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Photos/PHAssetPropertySet.h>

@class NSData;

@interface PHAssetSceneprintProperties : PHAssetPropertySet {

	NSData* _sceneprint;

}

@property (nonatomic,readonly) NSData * sceneprint;              //@synthesize sceneprint=_sceneprint - In the implementation block
+(id)propertiesToFetch;
+(id)propertySetName;
-(NSData *)sceneprint;
-(id)initWithFetchDictionary:(id)arg1 asset:(id)arg2 prefetched:(BOOL)arg3 ;
@end
