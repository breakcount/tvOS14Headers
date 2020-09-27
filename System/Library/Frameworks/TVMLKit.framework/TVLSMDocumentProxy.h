/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:38:31 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/TVMLKit.framework/TVMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSURL, _TVStackedMediaDocument;

@interface TVLSMDocumentProxy : NSObject {

	int _state;
	NSURL* _url;
	NSURL* _previewURL;
	long long _intent;
	_TVStackedMediaDocument* _lsmDocument;
	/*^block*/id _completion;

}

@property (nonatomic,retain) _TVStackedMediaDocument * lsmDocument;              //@synthesize lsmDocument=_lsmDocument - In the implementation block
@property (nonatomic,copy) id completion;                                        //@synthesize completion=_completion - In the implementation block
@property (nonatomic,copy,readonly) NSURL * url;                                 //@synthesize url=_url - In the implementation block
@property (nonatomic,copy,readonly) NSURL * previewURL;                          //@synthesize previewURL=_previewURL - In the implementation block
@property (nonatomic,readonly) long long intent;                                 //@synthesize intent=_intent - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(void)dealloc;
-(id)initWithURL:(id)arg1 ;
-(id)completion;
-(void)cancel;
-(NSURL *)url;
-(void)setCompletion:(id)arg1 ;
-(BOOL)isAvailable;
-(BOOL)isLoading;
-(long long)intent;
-(void)loadWithCompletion:(/*^block*/id)arg1 ;
-(NSURL *)previewURL;
-(_TVStackedMediaDocument *)lsmDocument;
-(void)didCompleteWithDocument:(id)arg1 error:(id)arg2 ;
-(id)initWithBaseURL:(id)arg1 previewURL:(id)arg2 intent:(long long)arg3 ;
-(void)setLsmDocument:(_TVStackedMediaDocument *)arg1 ;
-(id)initWithURL:(id)arg1 intent:(long long)arg2 ;
-(id)initWithBaseURL:(id)arg1 previewURL:(id)arg2 ;
@end

