/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:56:13 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class REHTMLElement, NSArray, NSString;

@interface REHTMLPageBuilder : NSObject {

	REHTMLElement* _stylesheetsElement;
	REHTMLElement* _scriptsElement;
	REHTMLElement* _pageDescriptionElement;
	REHTMLElement* _navigationLinksElement;
	NSArray* _stylesheets;
	NSArray* _loadingScripts;
	NSString* _pageDescription;
	NSArray* _links;

}

@property (nonatomic,retain) NSArray * stylesheets;                   //@synthesize stylesheets=_stylesheets - In the implementation block
@property (nonatomic,retain) NSArray * loadingScripts;                //@synthesize loadingScripts=_loadingScripts - In the implementation block
@property (nonatomic,retain) NSString * pageDescription;              //@synthesize pageDescription=_pageDescription - In the implementation block
@property (nonatomic,retain) NSArray * links;                         //@synthesize links=_links - In the implementation block
+(id)_headElement;
+(id)_viewportElement;
+(id)_iosIcon;
+(id)_smallFavicon;
+(id)_largeFavicon;
+(id)_safariIcon;
+(id)_stylesheetElementWithLocation:(id)arg1 ;
+(id)_scriptElementWithLocation:(id)arg1 ;
+(id)_htmlElement;
+(id)_bodyElement;
+(id)_mainNavigationElement;
+(id)_docTypeElement;
-(id)init;
-(NSArray *)links;
-(NSString *)pageDescription;
-(void)setPageDescription:(NSString *)arg1 ;
-(void)setLinks:(NSArray *)arg1 ;
-(void)setStylesheets:(NSArray *)arg1 ;
-(void)setLoadingScripts:(NSArray *)arg1 ;
-(id)pageWithTitle:(id)arg1 content:(id)arg2 backLocation:(id)arg3 ;
-(NSArray *)stylesheets;
-(NSArray *)loadingScripts;
@end

