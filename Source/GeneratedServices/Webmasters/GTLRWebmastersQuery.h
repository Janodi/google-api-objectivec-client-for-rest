// NOTE: This file was generated by the ServiceGenerator.

// ----------------------------------------------------------------------------
// API:
//   Search Console API (webmasters/v3)
// Description:
//   View Google Search Console data for your verified sites.
// Documentation:
//   https://developers.google.com/webmaster-tools/

#if GTLR_BUILT_AS_FRAMEWORK
  #import "GTLR/GTLRQuery.h"
#else
  #import "GTLRQuery.h"
#endif

#if GTLR_RUNTIME_VERSION != 3000
#error This file was generated by a different version of ServiceGenerator which is incompatible with this GTLR library source.
#endif

@class GTLRWebmasters_SearchAnalyticsQueryRequest;

// Generated comments include content from the discovery document; avoid them
// causing warnings since clang's checks are some what arbitrary.
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdocumentation"

NS_ASSUME_NONNULL_BEGIN

// ----------------------------------------------------------------------------
// Constants - For some of the query classes' properties below.

// ----------------------------------------------------------------------------
// category

/** Value: "authPermissions" */
GTLR_EXTERN NSString * const kGTLRWebmastersCategoryAuthPermissions;
/** Value: "flashContent" */
GTLR_EXTERN NSString * const kGTLRWebmastersCategoryFlashContent;
/** Value: "manyToOneRedirect" */
GTLR_EXTERN NSString * const kGTLRWebmastersCategoryManyToOneRedirect;
/** Value: "notFollowed" */
GTLR_EXTERN NSString * const kGTLRWebmastersCategoryNotFollowed;
/** Value: "notFound" */
GTLR_EXTERN NSString * const kGTLRWebmastersCategoryNotFound;
/** Value: "other" */
GTLR_EXTERN NSString * const kGTLRWebmastersCategoryOther;
/** Value: "roboted" */
GTLR_EXTERN NSString * const kGTLRWebmastersCategoryRoboted;
/** Value: "serverError" */
GTLR_EXTERN NSString * const kGTLRWebmastersCategoryServerError;
/** Value: "soft404" */
GTLR_EXTERN NSString * const kGTLRWebmastersCategorySoft404;

// ----------------------------------------------------------------------------
// platform

/** Value: "mobile" */
GTLR_EXTERN NSString * const kGTLRWebmastersPlatformMobile;
/** Value: "smartphoneOnly" */
GTLR_EXTERN NSString * const kGTLRWebmastersPlatformSmartphoneOnly;
/** Value: "web" */
GTLR_EXTERN NSString * const kGTLRWebmastersPlatformWeb;

// ----------------------------------------------------------------------------
// Query Classes
//

/**
 *  Parent class for other Webmasters query classes.
 */
@interface GTLRWebmastersQuery : GTLRQuery

/** Selector specifying which fields to include in a partial response. */
@property(nonatomic, copy, nullable) NSString *fields;

@end

/**
 *  Query your data with filters and parameters that you define. Returns zero or
 *  more rows grouped by the row keys that you define. You must define a date
 *  range of one or more days.
 *  When date is one of the group by values, any days without data are omitted
 *  from the result list. If you need to know which days have data, issue a
 *  broad date range query grouped by date for any metric, and see which day
 *  rows are returned.
 *
 *  Method: webmasters.searchanalytics.query
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeWebmasters
 *    @c kGTLRAuthScopeWebmastersReadonly
 */
@interface GTLRWebmastersQuery_SearchanalyticsQuery : GTLRWebmastersQuery
// Previous library name was
//   +[GTLQueryWebmasters queryForSearchanalyticsQueryWithObject:siteUrl:]

/**
 *  The site's URL, including protocol. For example: http://www.example.com/
 */
@property(nonatomic, copy, nullable) NSString *siteUrl;

/**
 *  Fetches a @c GTLRWebmasters_SearchAnalyticsQueryResponse.
 *
 *  Query your data with filters and parameters that you define. Returns zero or
 *  more rows grouped by the row keys that you define. You must define a date
 *  range of one or more days.
 *  When date is one of the group by values, any days without data are omitted
 *  from the result list. If you need to know which days have data, issue a
 *  broad date range query grouped by date for any metric, and see which day
 *  rows are returned.
 *
 *  @param object The @c GTLRWebmasters_SearchAnalyticsQueryRequest to include
 *    in the query.
 *  @param siteUrl The site's URL, including protocol. For example:
 *    http://www.example.com/
 *
 *  @return GTLRWebmastersQuery_SearchanalyticsQuery
 */
+ (instancetype)queryWithObject:(GTLRWebmasters_SearchAnalyticsQueryRequest *)object
                        siteUrl:(NSString *)siteUrl;

@end

/**
 *  Deletes a sitemap from this site.
 *
 *  Method: webmasters.sitemaps.delete
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeWebmasters
 */
@interface GTLRWebmastersQuery_SitemapsDelete : GTLRWebmastersQuery
// Previous library name was
//   +[GTLQueryWebmasters queryForSitemapsDeleteWithsiteUrl:feedpath:]

/**
 *  The URL of the actual sitemap. For example:
 *  http://www.example.com/sitemap.xml
 */
@property(nonatomic, copy, nullable) NSString *feedpath;

/**
 *  The site's URL, including protocol. For example: http://www.example.com/
 */
@property(nonatomic, copy, nullable) NSString *siteUrl;

/**
 *  Upon successful completion, the callback's object and error parameters will
 *  be nil. This query does not fetch an object.
 *
 *  Deletes a sitemap from this site.
 *
 *  @param siteUrl The site's URL, including protocol. For example:
 *    http://www.example.com/
 *  @param feedpath The URL of the actual sitemap. For example:
 *    http://www.example.com/sitemap.xml
 *
 *  @return GTLRWebmastersQuery_SitemapsDelete
 */
+ (instancetype)queryWithSiteUrl:(NSString *)siteUrl
                        feedpath:(NSString *)feedpath;

@end

/**
 *  Retrieves information about a specific sitemap.
 *
 *  Method: webmasters.sitemaps.get
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeWebmasters
 *    @c kGTLRAuthScopeWebmastersReadonly
 */
@interface GTLRWebmastersQuery_SitemapsGet : GTLRWebmastersQuery
// Previous library name was
//   +[GTLQueryWebmasters queryForSitemapsGetWithsiteUrl:feedpath:]

/**
 *  The URL of the actual sitemap. For example:
 *  http://www.example.com/sitemap.xml
 */
@property(nonatomic, copy, nullable) NSString *feedpath;

/**
 *  The site's URL, including protocol. For example: http://www.example.com/
 */
@property(nonatomic, copy, nullable) NSString *siteUrl;

/**
 *  Fetches a @c GTLRWebmasters_WmxSitemap.
 *
 *  Retrieves information about a specific sitemap.
 *
 *  @param siteUrl The site's URL, including protocol. For example:
 *    http://www.example.com/
 *  @param feedpath The URL of the actual sitemap. For example:
 *    http://www.example.com/sitemap.xml
 *
 *  @return GTLRWebmastersQuery_SitemapsGet
 */
+ (instancetype)queryWithSiteUrl:(NSString *)siteUrl
                        feedpath:(NSString *)feedpath;

@end

/**
 *  Lists the sitemaps-entries submitted for this site, or included in the
 *  sitemap index file (if sitemapIndex is specified in the request).
 *
 *  Method: webmasters.sitemaps.list
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeWebmasters
 *    @c kGTLRAuthScopeWebmastersReadonly
 */
@interface GTLRWebmastersQuery_SitemapsList : GTLRWebmastersQuery
// Previous library name was
//   +[GTLQueryWebmasters queryForSitemapsListWithsiteUrl:]

/**
 *  A URL of a site's sitemap index. For example:
 *  http://www.example.com/sitemapindex.xml
 */
@property(nonatomic, copy, nullable) NSString *sitemapIndex;

/**
 *  The site's URL, including protocol. For example: http://www.example.com/
 */
@property(nonatomic, copy, nullable) NSString *siteUrl;

/**
 *  Fetches a @c GTLRWebmasters_SitemapsListResponse.
 *
 *  Lists the sitemaps-entries submitted for this site, or included in the
 *  sitemap index file (if sitemapIndex is specified in the request).
 *
 *  @param siteUrl The site's URL, including protocol. For example:
 *    http://www.example.com/
 *
 *  @return GTLRWebmastersQuery_SitemapsList
 */
+ (instancetype)queryWithSiteUrl:(NSString *)siteUrl;

@end

/**
 *  Submits a sitemap for a site.
 *
 *  Method: webmasters.sitemaps.submit
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeWebmasters
 */
@interface GTLRWebmastersQuery_SitemapsSubmit : GTLRWebmastersQuery
// Previous library name was
//   +[GTLQueryWebmasters queryForSitemapsSubmitWithsiteUrl:feedpath:]

/**
 *  The URL of the sitemap to add. For example:
 *  http://www.example.com/sitemap.xml
 */
@property(nonatomic, copy, nullable) NSString *feedpath;

/**
 *  The site's URL, including protocol. For example: http://www.example.com/
 */
@property(nonatomic, copy, nullable) NSString *siteUrl;

/**
 *  Upon successful completion, the callback's object and error parameters will
 *  be nil. This query does not fetch an object.
 *
 *  Submits a sitemap for a site.
 *
 *  @param siteUrl The site's URL, including protocol. For example:
 *    http://www.example.com/
 *  @param feedpath The URL of the sitemap to add. For example:
 *    http://www.example.com/sitemap.xml
 *
 *  @return GTLRWebmastersQuery_SitemapsSubmit
 */
+ (instancetype)queryWithSiteUrl:(NSString *)siteUrl
                        feedpath:(NSString *)feedpath;

@end

/**
 *  Adds a site to the set of the user's sites in Search Console.
 *
 *  Method: webmasters.sites.add
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeWebmasters
 */
@interface GTLRWebmastersQuery_SitesAdd : GTLRWebmastersQuery
// Previous library name was
//   +[GTLQueryWebmasters queryForSitesAddWithsiteUrl:]

/** The URL of the site to add. */
@property(nonatomic, copy, nullable) NSString *siteUrl;

/**
 *  Upon successful completion, the callback's object and error parameters will
 *  be nil. This query does not fetch an object.
 *
 *  Adds a site to the set of the user's sites in Search Console.
 *
 *  @param siteUrl The URL of the site to add.
 *
 *  @return GTLRWebmastersQuery_SitesAdd
 */
+ (instancetype)queryWithSiteUrl:(NSString *)siteUrl;

@end

/**
 *  Removes a site from the set of the user's Search Console sites.
 *
 *  Method: webmasters.sites.delete
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeWebmasters
 */
@interface GTLRWebmastersQuery_SitesDelete : GTLRWebmastersQuery
// Previous library name was
//   +[GTLQueryWebmasters queryForSitesDeleteWithsiteUrl:]

/**
 *  The URI of the property as defined in Search Console. Examples:
 *  http://www.example.com/ or android-app://com.example/ Note: for
 *  property-sets, use the URI that starts with sc-set: which is used in Search
 *  Console URLs.
 */
@property(nonatomic, copy, nullable) NSString *siteUrl;

/**
 *  Upon successful completion, the callback's object and error parameters will
 *  be nil. This query does not fetch an object.
 *
 *  Removes a site from the set of the user's Search Console sites.
 *
 *  @param siteUrl The URI of the property as defined in Search Console.
 *    Examples: http://www.example.com/ or android-app://com.example/ Note: for
 *    property-sets, use the URI that starts with sc-set: which is used in
 *    Search Console URLs.
 *
 *  @return GTLRWebmastersQuery_SitesDelete
 */
+ (instancetype)queryWithSiteUrl:(NSString *)siteUrl;

@end

/**
 *  Retrieves information about specific site.
 *
 *  Method: webmasters.sites.get
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeWebmasters
 *    @c kGTLRAuthScopeWebmastersReadonly
 */
@interface GTLRWebmastersQuery_SitesGet : GTLRWebmastersQuery
// Previous library name was
//   +[GTLQueryWebmasters queryForSitesGetWithsiteUrl:]

/**
 *  The URI of the property as defined in Search Console. Examples:
 *  http://www.example.com/ or android-app://com.example/ Note: for
 *  property-sets, use the URI that starts with sc-set: which is used in Search
 *  Console URLs.
 */
@property(nonatomic, copy, nullable) NSString *siteUrl;

/**
 *  Fetches a @c GTLRWebmasters_WmxSite.
 *
 *  Retrieves information about specific site.
 *
 *  @param siteUrl The URI of the property as defined in Search Console.
 *    Examples: http://www.example.com/ or android-app://com.example/ Note: for
 *    property-sets, use the URI that starts with sc-set: which is used in
 *    Search Console URLs.
 *
 *  @return GTLRWebmastersQuery_SitesGet
 */
+ (instancetype)queryWithSiteUrl:(NSString *)siteUrl;

@end

/**
 *  Lists the user's Search Console sites.
 *
 *  Method: webmasters.sites.list
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeWebmasters
 *    @c kGTLRAuthScopeWebmastersReadonly
 */
@interface GTLRWebmastersQuery_SitesList : GTLRWebmastersQuery
// Previous library name was
//   +[GTLQueryWebmasters queryForSitesList]

/**
 *  Fetches a @c GTLRWebmasters_SitesListResponse.
 *
 *  Lists the user's Search Console sites.
 *
 *  @return GTLRWebmastersQuery_SitesList
 */
+ (instancetype)query;

@end

/**
 *  Retrieves a time series of the number of URL crawl errors per error category
 *  and platform.
 *
 *  Method: webmasters.urlcrawlerrorscounts.query
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeWebmasters
 *    @c kGTLRAuthScopeWebmastersReadonly
 */
@interface GTLRWebmastersQuery_UrlcrawlerrorscountsQuery : GTLRWebmastersQuery
// Previous library name was
//   +[GTLQueryWebmasters queryForUrlcrawlerrorscountsQueryWithsiteUrl:]

/**
 *  The crawl error category. For example: serverError. If not specified,
 *  returns results for all categories.
 *
 *  Likely values:
 *    @arg @c kGTLRWebmastersCategoryAuthPermissions Value "authPermissions"
 *    @arg @c kGTLRWebmastersCategoryFlashContent Value "flashContent"
 *    @arg @c kGTLRWebmastersCategoryManyToOneRedirect Value "manyToOneRedirect"
 *    @arg @c kGTLRWebmastersCategoryNotFollowed Value "notFollowed"
 *    @arg @c kGTLRWebmastersCategoryNotFound Value "notFound"
 *    @arg @c kGTLRWebmastersCategoryOther Value "other"
 *    @arg @c kGTLRWebmastersCategoryRoboted Value "roboted"
 *    @arg @c kGTLRWebmastersCategoryServerError Value "serverError"
 *    @arg @c kGTLRWebmastersCategorySoft404 Value "soft404"
 */
@property(nonatomic, copy, nullable) NSString *category;

/**
 *  If true, returns only the latest crawl error counts.
 *
 *  @note If not set, the documented server-side default will be true.
 */
@property(nonatomic, assign) BOOL latestCountsOnly;

/**
 *  The user agent type (platform) that made the request. For example: web. If
 *  not specified, returns results for all platforms.
 *
 *  Likely values:
 *    @arg @c kGTLRWebmastersPlatformMobile Value "mobile"
 *    @arg @c kGTLRWebmastersPlatformSmartphoneOnly Value "smartphoneOnly"
 *    @arg @c kGTLRWebmastersPlatformWeb Value "web"
 */
@property(nonatomic, copy, nullable) NSString *platform;

/**
 *  The site's URL, including protocol. For example: http://www.example.com/
 */
@property(nonatomic, copy, nullable) NSString *siteUrl;

/**
 *  Fetches a @c GTLRWebmasters_UrlCrawlErrorsCountsQueryResponse.
 *
 *  Retrieves a time series of the number of URL crawl errors per error category
 *  and platform.
 *
 *  @param siteUrl The site's URL, including protocol. For example:
 *    http://www.example.com/
 *
 *  @return GTLRWebmastersQuery_UrlcrawlerrorscountsQuery
 */
+ (instancetype)queryWithSiteUrl:(NSString *)siteUrl;

@end

/**
 *  Retrieves details about crawl errors for a site's sample URL.
 *
 *  Method: webmasters.urlcrawlerrorssamples.get
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeWebmasters
 *    @c kGTLRAuthScopeWebmastersReadonly
 */
@interface GTLRWebmastersQuery_UrlcrawlerrorssamplesGet : GTLRWebmastersQuery
// Previous library name was
//   +[GTLQueryWebmasters queryForUrlcrawlerrorssamplesGetWithsiteUrl:url:category:platform:]

/**
 *  The crawl error category. For example: authPermissions
 *
 *  Likely values:
 *    @arg @c kGTLRWebmastersCategoryAuthPermissions Value "authPermissions"
 *    @arg @c kGTLRWebmastersCategoryFlashContent Value "flashContent"
 *    @arg @c kGTLRWebmastersCategoryManyToOneRedirect Value "manyToOneRedirect"
 *    @arg @c kGTLRWebmastersCategoryNotFollowed Value "notFollowed"
 *    @arg @c kGTLRWebmastersCategoryNotFound Value "notFound"
 *    @arg @c kGTLRWebmastersCategoryOther Value "other"
 *    @arg @c kGTLRWebmastersCategoryRoboted Value "roboted"
 *    @arg @c kGTLRWebmastersCategoryServerError Value "serverError"
 *    @arg @c kGTLRWebmastersCategorySoft404 Value "soft404"
 */
@property(nonatomic, copy, nullable) NSString *category;

/**
 *  The user agent type (platform) that made the request. For example: web
 *
 *  Likely values:
 *    @arg @c kGTLRWebmastersPlatformMobile Value "mobile"
 *    @arg @c kGTLRWebmastersPlatformSmartphoneOnly Value "smartphoneOnly"
 *    @arg @c kGTLRWebmastersPlatformWeb Value "web"
 */
@property(nonatomic, copy, nullable) NSString *platform;

/**
 *  The site's URL, including protocol. For example: http://www.example.com/
 */
@property(nonatomic, copy, nullable) NSString *siteUrl;

/**
 *  The relative path (without the site) of the sample URL. It must be one of
 *  the URLs returned by list(). For example, for the URL
 *  https://www.example.com/pagename on the site https://www.example.com/, the
 *  url value is pagename
 */
@property(nonatomic, copy, nullable) NSString *url;

/**
 *  Fetches a @c GTLRWebmasters_UrlCrawlErrorsSample.
 *
 *  Retrieves details about crawl errors for a site's sample URL.
 *
 *  @param siteUrl The site's URL, including protocol. For example:
 *    http://www.example.com/
 *  @param url The relative path (without the site) of the sample URL. It must
 *    be one of the URLs returned by list(). For example, for the URL
 *    https://www.example.com/pagename on the site https://www.example.com/, the
 *    url value is pagename
 *  @param category The crawl error category. For example: authPermissions
 *  @param platform The user agent type (platform) that made the request. For
 *    example: web
 *
 *  Likely values for @c category:
 *    @arg @c kGTLRWebmastersCategoryAuthPermissions Value "authPermissions"
 *    @arg @c kGTLRWebmastersCategoryFlashContent Value "flashContent"
 *    @arg @c kGTLRWebmastersCategoryManyToOneRedirect Value "manyToOneRedirect"
 *    @arg @c kGTLRWebmastersCategoryNotFollowed Value "notFollowed"
 *    @arg @c kGTLRWebmastersCategoryNotFound Value "notFound"
 *    @arg @c kGTLRWebmastersCategoryOther Value "other"
 *    @arg @c kGTLRWebmastersCategoryRoboted Value "roboted"
 *    @arg @c kGTLRWebmastersCategoryServerError Value "serverError"
 *    @arg @c kGTLRWebmastersCategorySoft404 Value "soft404"
 *
 *  Likely values for @c platform:
 *    @arg @c kGTLRWebmastersPlatformMobile Value "mobile"
 *    @arg @c kGTLRWebmastersPlatformSmartphoneOnly Value "smartphoneOnly"
 *    @arg @c kGTLRWebmastersPlatformWeb Value "web"
 *
 *  @return GTLRWebmastersQuery_UrlcrawlerrorssamplesGet
 */
+ (instancetype)queryWithSiteUrl:(NSString *)siteUrl
                             url:(NSString *)url
                        category:(NSString *)category
                        platform:(NSString *)platform;

@end

/**
 *  Lists a site's sample URLs for the specified crawl error category and
 *  platform.
 *
 *  Method: webmasters.urlcrawlerrorssamples.list
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeWebmasters
 *    @c kGTLRAuthScopeWebmastersReadonly
 */
@interface GTLRWebmastersQuery_UrlcrawlerrorssamplesList : GTLRWebmastersQuery
// Previous library name was
//   +[GTLQueryWebmasters queryForUrlcrawlerrorssamplesListWithsiteUrl:category:platform:]

/**
 *  The crawl error category. For example: authPermissions
 *
 *  Likely values:
 *    @arg @c kGTLRWebmastersCategoryAuthPermissions Value "authPermissions"
 *    @arg @c kGTLRWebmastersCategoryFlashContent Value "flashContent"
 *    @arg @c kGTLRWebmastersCategoryManyToOneRedirect Value "manyToOneRedirect"
 *    @arg @c kGTLRWebmastersCategoryNotFollowed Value "notFollowed"
 *    @arg @c kGTLRWebmastersCategoryNotFound Value "notFound"
 *    @arg @c kGTLRWebmastersCategoryOther Value "other"
 *    @arg @c kGTLRWebmastersCategoryRoboted Value "roboted"
 *    @arg @c kGTLRWebmastersCategoryServerError Value "serverError"
 *    @arg @c kGTLRWebmastersCategorySoft404 Value "soft404"
 */
@property(nonatomic, copy, nullable) NSString *category;

/**
 *  The user agent type (platform) that made the request. For example: web
 *
 *  Likely values:
 *    @arg @c kGTLRWebmastersPlatformMobile Value "mobile"
 *    @arg @c kGTLRWebmastersPlatformSmartphoneOnly Value "smartphoneOnly"
 *    @arg @c kGTLRWebmastersPlatformWeb Value "web"
 */
@property(nonatomic, copy, nullable) NSString *platform;

/**
 *  The site's URL, including protocol. For example: http://www.example.com/
 */
@property(nonatomic, copy, nullable) NSString *siteUrl;

/**
 *  Fetches a @c GTLRWebmasters_UrlCrawlErrorsSamplesListResponse.
 *
 *  Lists a site's sample URLs for the specified crawl error category and
 *  platform.
 *
 *  @param siteUrl The site's URL, including protocol. For example:
 *    http://www.example.com/
 *  @param category The crawl error category. For example: authPermissions
 *  @param platform The user agent type (platform) that made the request. For
 *    example: web
 *
 *  Likely values for @c category:
 *    @arg @c kGTLRWebmastersCategoryAuthPermissions Value "authPermissions"
 *    @arg @c kGTLRWebmastersCategoryFlashContent Value "flashContent"
 *    @arg @c kGTLRWebmastersCategoryManyToOneRedirect Value "manyToOneRedirect"
 *    @arg @c kGTLRWebmastersCategoryNotFollowed Value "notFollowed"
 *    @arg @c kGTLRWebmastersCategoryNotFound Value "notFound"
 *    @arg @c kGTLRWebmastersCategoryOther Value "other"
 *    @arg @c kGTLRWebmastersCategoryRoboted Value "roboted"
 *    @arg @c kGTLRWebmastersCategoryServerError Value "serverError"
 *    @arg @c kGTLRWebmastersCategorySoft404 Value "soft404"
 *
 *  Likely values for @c platform:
 *    @arg @c kGTLRWebmastersPlatformMobile Value "mobile"
 *    @arg @c kGTLRWebmastersPlatformSmartphoneOnly Value "smartphoneOnly"
 *    @arg @c kGTLRWebmastersPlatformWeb Value "web"
 *
 *  @return GTLRWebmastersQuery_UrlcrawlerrorssamplesList
 */
+ (instancetype)queryWithSiteUrl:(NSString *)siteUrl
                        category:(NSString *)category
                        platform:(NSString *)platform;

@end

/**
 *  Marks the provided site's sample URL as fixed, and removes it from the
 *  samples list.
 *
 *  Method: webmasters.urlcrawlerrorssamples.markAsFixed
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeWebmasters
 */
@interface GTLRWebmastersQuery_UrlcrawlerrorssamplesMarkAsFixed : GTLRWebmastersQuery
// Previous library name was
//   +[GTLQueryWebmasters queryForUrlcrawlerrorssamplesMarkAsFixedWithsiteUrl:url:category:platform:]

/**
 *  The crawl error category. For example: authPermissions
 *
 *  Likely values:
 *    @arg @c kGTLRWebmastersCategoryAuthPermissions Value "authPermissions"
 *    @arg @c kGTLRWebmastersCategoryFlashContent Value "flashContent"
 *    @arg @c kGTLRWebmastersCategoryManyToOneRedirect Value "manyToOneRedirect"
 *    @arg @c kGTLRWebmastersCategoryNotFollowed Value "notFollowed"
 *    @arg @c kGTLRWebmastersCategoryNotFound Value "notFound"
 *    @arg @c kGTLRWebmastersCategoryOther Value "other"
 *    @arg @c kGTLRWebmastersCategoryRoboted Value "roboted"
 *    @arg @c kGTLRWebmastersCategoryServerError Value "serverError"
 *    @arg @c kGTLRWebmastersCategorySoft404 Value "soft404"
 */
@property(nonatomic, copy, nullable) NSString *category;

/**
 *  The user agent type (platform) that made the request. For example: web
 *
 *  Likely values:
 *    @arg @c kGTLRWebmastersPlatformMobile Value "mobile"
 *    @arg @c kGTLRWebmastersPlatformSmartphoneOnly Value "smartphoneOnly"
 *    @arg @c kGTLRWebmastersPlatformWeb Value "web"
 */
@property(nonatomic, copy, nullable) NSString *platform;

/**
 *  The site's URL, including protocol. For example: http://www.example.com/
 */
@property(nonatomic, copy, nullable) NSString *siteUrl;

/**
 *  The relative path (without the site) of the sample URL. It must be one of
 *  the URLs returned by list(). For example, for the URL
 *  https://www.example.com/pagename on the site https://www.example.com/, the
 *  url value is pagename
 */
@property(nonatomic, copy, nullable) NSString *url;

/**
 *  Upon successful completion, the callback's object and error parameters will
 *  be nil. This query does not fetch an object.
 *
 *  Marks the provided site's sample URL as fixed, and removes it from the
 *  samples list.
 *
 *  @param siteUrl The site's URL, including protocol. For example:
 *    http://www.example.com/
 *  @param url The relative path (without the site) of the sample URL. It must
 *    be one of the URLs returned by list(). For example, for the URL
 *    https://www.example.com/pagename on the site https://www.example.com/, the
 *    url value is pagename
 *  @param category The crawl error category. For example: authPermissions
 *  @param platform The user agent type (platform) that made the request. For
 *    example: web
 *
 *  Likely values for @c category:
 *    @arg @c kGTLRWebmastersCategoryAuthPermissions Value "authPermissions"
 *    @arg @c kGTLRWebmastersCategoryFlashContent Value "flashContent"
 *    @arg @c kGTLRWebmastersCategoryManyToOneRedirect Value "manyToOneRedirect"
 *    @arg @c kGTLRWebmastersCategoryNotFollowed Value "notFollowed"
 *    @arg @c kGTLRWebmastersCategoryNotFound Value "notFound"
 *    @arg @c kGTLRWebmastersCategoryOther Value "other"
 *    @arg @c kGTLRWebmastersCategoryRoboted Value "roboted"
 *    @arg @c kGTLRWebmastersCategoryServerError Value "serverError"
 *    @arg @c kGTLRWebmastersCategorySoft404 Value "soft404"
 *
 *  Likely values for @c platform:
 *    @arg @c kGTLRWebmastersPlatformMobile Value "mobile"
 *    @arg @c kGTLRWebmastersPlatformSmartphoneOnly Value "smartphoneOnly"
 *    @arg @c kGTLRWebmastersPlatformWeb Value "web"
 *
 *  @return GTLRWebmastersQuery_UrlcrawlerrorssamplesMarkAsFixed
 */
+ (instancetype)queryWithSiteUrl:(NSString *)siteUrl
                             url:(NSString *)url
                        category:(NSString *)category
                        platform:(NSString *)platform;

@end

NS_ASSUME_NONNULL_END

#pragma clang diagnostic pop
