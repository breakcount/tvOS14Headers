/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:15:36 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/FMCoreLite.framework/FMCoreLite
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FMCoreLite/FMFileContainer.h>

@class NSURL, NSString;

@interface FMSharedFileContainer : NSObject <FMFileContainer> {

	NSURL* _url;

}

@property (nonatomic,retain) NSURL * url;                           //@synthesize url=_url - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)setUrl:(NSURL *)arg1 ;
-(NSURL *)url;
-(id)initWithIdentifier:(id)arg1 ;
-(id)groupContainerURLWithIdentifier:(id)arg1 ;
@end

