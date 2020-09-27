/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:57:21 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/TVHomeSharingKit.framework/TVHomeSharingKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVHomeSharingKit/TVHKMediaEntityCollection.h>

@class NSString, TVHKMediaEntityType, TVHKMediaEntityIdentifier;

@interface TVHKDAAPGroupsMediaEntityCollection : TVHKMediaEntityCollection {

	NSString* _imageIdentifier;
	TVHKMediaEntityType* _type;
	TVHKMediaEntityIdentifier* _artistIdentifier;

}
-(id)type;
-(id)artistIdentifier;
-(id)imageIdentifier;
-(id)initWithMediaCategoryType:(unsigned long long)arg1 mediaEntityCollectionType:(unsigned long long)arg2 mediaServerIdentifier:(id)arg3 requestedProperties:(id)arg4 entity:(id)arg5 ;
-(id)initWithMediaServerIdentifier:(id)arg1 requestedProperties:(id)arg2 entity:(id)arg3 kind:(id)arg4 ;
@end

