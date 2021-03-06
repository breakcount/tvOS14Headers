/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:55:39 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSURL, PHPersistentChangeToken;

@interface PGLibraryChangeListenerStateStore : NSObject {

	NSURL* _changeTokenURL;

}

@property (nonatomic,readonly) PHPersistentChangeToken * changeToken; 
-(id)initWithPhotoLibrary:(id)arg1 ;
-(PHPersistentChangeToken *)changeToken;
-(void)setChangeToken:(PHPersistentChangeToken *)arg1 ;
@end

