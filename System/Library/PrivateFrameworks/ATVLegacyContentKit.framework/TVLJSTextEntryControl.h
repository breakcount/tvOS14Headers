/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:38:35 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/ATVLegacyContentKit.framework/ATVLegacyContentKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class TVImage, TVImageProxy, TVLTextEntryViewController, TVLProxyViewController, NSString;

@interface TVLJSTextEntryControl : NSObject {

	TVImage* _image;
	TVImageProxy* _imageProxy;
	TVLTextEntryViewController* _textEntryViewController;
	BOOL _hideText;
	BOOL _swapping;
	TVLProxyViewController* _proxyViewController;
	NSString* _type;
	NSString* _title;
	NSString* _instructions;
	NSString* _label;
	NSString* _footnote;
	NSString* _defaultValue;
	NSString* _imageURL;
	/*^block*/id _submitBlock;
	/*^block*/id _cancelBlock;

}

@property (nonatomic,retain) TVLProxyViewController * proxyViewController;              //@synthesize proxyViewController=_proxyViewController - In the implementation block
@property (getter=isSwapping,readonly) BOOL swapping;                                   //@synthesize swapping=_swapping - In the implementation block
@property (assign,nonatomic) BOOL hideText;                                             //@synthesize hideText=_hideText - In the implementation block
@property (nonatomic,retain) NSString * type;                                           //@synthesize type=_type - In the implementation block
@property (nonatomic,retain) NSString * title;                                          //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) NSString * instructions;                                   //@synthesize instructions=_instructions - In the implementation block
@property (nonatomic,retain) NSString * label;                                          //@synthesize label=_label - In the implementation block
@property (nonatomic,retain) NSString * footnote;                                       //@synthesize footnote=_footnote - In the implementation block
@property (nonatomic,retain) NSString * defaultValue;                                   //@synthesize defaultValue=_defaultValue - In the implementation block
@property (nonatomic,retain) NSString * imageURL;                                       //@synthesize imageURL=_imageURL - In the implementation block
@property (nonatomic,copy) id submitBlock;                                              //@synthesize submitBlock=_submitBlock - In the implementation block
@property (nonatomic,copy) id cancelBlock;                                              //@synthesize cancelBlock=_cancelBlock - In the implementation block
@property (nonatomic,readonly) id onLoad; 
@property (nonatomic,readonly) id onLoadCompletion; 
@property (nonatomic,readonly) id onCancel; 
-(id)init;
-(void)dealloc;
-(void)setType:(NSString *)arg1 ;
-(NSString *)type;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)label;
-(void)setLabel:(NSString *)arg1 ;
-(void)setCancelBlock:(id)arg1 ;
-(id)cancelBlock;
-(NSString *)defaultValue;
-(void)setDefaultValue:(NSString *)arg1 ;
-(void)setImage:(id)arg1 ;
-(NSString *)instructions;
-(void)setInstructions:(NSString *)arg1 ;
-(void)setFootnote:(NSString *)arg1 ;
-(NSString *)imageURL;
-(NSString *)footnote;
-(void)setImageURL:(NSString *)arg1 ;
-(id)onCancel;
-(id)onLoad;
-(id)onLoadCompletion;
-(BOOL)hideText;
-(id)submitBlock;
-(void)dismissTextEntryViewController:(id)arg1 ;
-(void)_menuButtonAction:(id)arg1 ;
-(TVLProxyViewController *)proxyViewController;
-(void)setProxyViewController:(TVLProxyViewController *)arg1 ;
-(void)setHideText:(BOOL)arg1 ;
-(void)setSubmitBlock:(id)arg1 ;
-(BOOL)isSwapping;
@end

