/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 7:01:47 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18J386)
                       * Image Source: /System/Library/PrivateFrameworks/PodcastsKit.framework/PodcastsKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <PodcastsKit/PodcastsKit-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, PKShowStoreId;

@interface PKShow : NSObject <NSSecureCoding> {

	 title;
	 descriptionText;
	 storeId;
	 uuid;
	 feedUrl;
	 podcastUuid;
	 artworkDictionary;

}

@property (readonly,nonatomic) BOOL isInLibrary; 
@property (readonly,nonatomic) BOOL isSubscribed; 
@property (readonly,nonatomic) NSString * title; 
@property (readonly,nonatomic) NSString * descriptionText; 
@property (readonly,nonatomic) PKShowStoreId * storeId; 
+(BOOL)supportsSecureCoding;
+(void)setSupportsSecureCoding:(BOOL)arg1 ;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)title;
-(NSString *)descriptionText;
-(BOOL)isSubscribed;
-(PKShowStoreId *)storeId;
-(BOOL)isInLibrary;
-(id)artworkUrlFor:(CGSize)arg1 ;
@end
