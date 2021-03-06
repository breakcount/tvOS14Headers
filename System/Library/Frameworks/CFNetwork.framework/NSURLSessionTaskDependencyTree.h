/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:02:18 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSURL, NSMutableDictionary, __NSCFURLSessionTaskDependencyTreeNode;

@interface NSURLSessionTaskDependencyTree : NSObject {

	NSURL* _mainDocumentURL;
	NSMutableDictionary* _dependencies;
	__NSCFURLSessionTaskDependencyTreeNode* _effectiveTree;

}

@property (nonatomic,retain) NSURL * mainDocumentURL;              //@synthesize mainDocumentURL=_mainDocumentURL - In the implementation block
+(id)dependencyTreeDefaultWeb;
+(id)dependencyTreeWithJSONData:(id)arg1 error:(id*)arg2 ;
+(id)dependencyTreeWithMainDocumentURL:(id)arg1 dependencyDescriptions:(id)arg2 ;
-(void)dealloc;
-(NSURL *)mainDocumentURL;
-(void)setMainDocumentURL:(NSURL *)arg1 ;
@end

