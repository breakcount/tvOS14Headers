/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:56:40 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/ShazamKit.framework/ShazamKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SHMatcher.h>

@protocol SHMatcherDelegate;
@class MRE, SHLocalStore, NSString;

@interface SHMRESignatureMatcher : NSObject <SHMatcher> {

	id<SHMatcherDelegate> delegate;
	MRE* _mre;
	SHLocalStore* _localStore;

}

@property (nonatomic,retain) MRE * mre;                                          //@synthesize mre=_mre - In the implementation block
@property (nonatomic,retain) SHLocalStore * localStore;                          //@synthesize localStore=_localStore - In the implementation block
@property (assign,nonatomic,__weak) id<SHMatcherDelegate> delegate; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<SHMatcherDelegate>)delegate;
-(void)setDelegate:(id<SHMatcherDelegate>)arg1 ;
-(SHLocalStore *)localStore;
-(void)matchSignature:(id)arg1 ;
-(void)buildMRE;
-(id)MRESignaturesFromMatches:(id)arg1 ;
-(long long)storeDensityToMREDensity:(long long)arg1 ;
-(MRE *)mre;
-(id)mediaItemsFromMREResult:(id)arg1 ;
-(id)initWithLocalStore:(id)arg1 ;
-(void)setMre:(MRE *)arg1 ;
-(void)setLocalStore:(SHLocalStore *)arg1 ;
@end

