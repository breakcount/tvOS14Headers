/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:14:59 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/AVKit.framework/AVKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, PBSRestrictionService;

@interface AVContentRestrictionsService : NSObject {

	NSObject*<OS_dispatch_queue> _dispatchQueueForRequests;
	BOOL _presentingPasscodePrompt;
	BOOL _profileRestrictingMovies;
	BOOL _profileRestrictingTVShows;
	BOOL _requestingAccess;
	id _requestToken;

}

@property (nonatomic,readonly) PBSRestrictionService * restrictionService; 
@property (nonatomic,retain) id requestToken;                                                                 //@synthesize requestToken=_requestToken - In the implementation block
@property (getter=isRequestingAccess,nonatomic,readonly) BOOL requestingAccess;                               //@synthesize requestingAccess=_requestingAccess - In the implementation block
@property (assign,getter=isPresentingPasscodePrompt,nonatomic) BOOL presentingPasscodePrompt;                 //@synthesize presentingPasscodePrompt=_presentingPasscodePrompt - In the implementation block
@property (assign,getter=hasProfileRestrictingMovies,nonatomic) BOOL profileRestrictingMovies;                //@synthesize profileRestrictingMovies=_profileRestrictingMovies - In the implementation block
@property (assign,getter=hasProfileRestrictingTVShows,nonatomic) BOOL profileRestrictingTVShows;              //@synthesize profileRestrictingTVShows=_profileRestrictingTVShows - In the implementation block
+(id)shared;
-(id)init;
-(id)_init;
-(void)cancelRequest:(id)arg1 ;
-(id)requestToken;
-(void)setRequestToken:(id)arg1 ;
-(BOOL)isRequestingAccess;
-(id)validateMediaContentRating:(id)arg1 allowInteraction:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(long long)_restrictionValueFromPBSRestrictionValue:(unsigned long long)arg1 ;
-(unsigned long long)_pbsRestrictedContentTypeFromDomain:(long long)arg1 ;
-(void)_presentDeniedByProfile:(/*^block*/id)arg1 ;
-(BOOL)shouldRevalidateMediaContentRating:(id)arg1 validatedRating:(id)arg2 validatedDate:(id)arg3 ;
-(PBSRestrictionService *)restrictionService;
-(void)_updateProfileRestrictions;
-(BOOL)isPresentingPasscodePrompt;
-(void)setPresentingPasscodePrompt:(BOOL)arg1 ;
-(BOOL)hasProfileRestrictingMovies;
-(void)setProfileRestrictingMovies:(BOOL)arg1 ;
-(BOOL)hasProfileRestrictingTVShows;
-(void)setProfileRestrictingTVShows:(BOOL)arg1 ;
@end

