/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:13:29 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/PLUniformTypeIdentifierIdentity.h>

@class NSString;

@interface PLSharedStreamsUniformTypeIdentifier : NSObject <PLUniformTypeIdentifierIdentity> {

	BOOL _conformsToRawImage;
	BOOL _conformsToImage;
	BOOL _conformsToMovie;
	NSString* _identifier;

}

@property (nonatomic,copy) NSString * identifier;                                                //@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic) BOOL conformsToRawImage;                                            //@synthesize conformsToRawImage=_conformsToRawImage - In the implementation block
@property (assign,nonatomic) BOOL conformsToImage;                                               //@synthesize conformsToImage=_conformsToImage - In the implementation block
@property (assign,nonatomic) BOOL conformsToMovie;                                               //@synthesize conformsToMovie=_conformsToMovie - In the implementation block
@property (getter=isPrimaryImageFormat,nonatomic,readonly) BOOL primaryImageFormat; 
@property (nonatomic,readonly) BOOL isPlayableVideo; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(BOOL)conformsToMovie;
-(BOOL)conformsToImage;
-(BOOL)isPlayableVideo;
-(BOOL)isPrimaryImageFormat;
-(BOOL)conformsToRawImage;
-(void)setConformsToRawImage:(BOOL)arg1 ;
-(void)setConformsToImage:(BOOL)arg1 ;
-(void)setConformsToMovie:(BOOL)arg1 ;
@end

