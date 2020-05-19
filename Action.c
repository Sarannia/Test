Action()
{
	web_set_sockets_option("SSL_VERSION","TLS1.2");

	web_add_header("Content-Type", "application/json");
    
    web_add_header("x-ibm-client-id","d74ba5b2e34789eb6262fa1269933dc4");
    
    web_add_header("storeCode","EN");
    
    lr_think_time(9);
    
    lr_start_transaction("TC01_MarketPlace_GetTopBrand");
    
	 web_custom_request("GetTopBrands",
        "Method=GET",
        "URL={P_URL}/api-factory/sit/ecommerce/1.0.0/top-brands?searchCriteria=eyJmaWx0ZXJHcm91cHMiOlt7ImZpbHRlcnMiOlt7ImZpZWxkIjoidG9wYnJhbmQiLCJjb25kaXRpb25UeXBlIjoiZXEiLCJ2YWx1ZSI6IjEifV19XX0=&pageSize=10&fields=seller_id|topbrand|banner_pic|shop_title|logo_pic|country_pic|company_description|contact_number|store_id|topbrand",
        "Snapshot=t7147711.inf",
        "TargetFrame=",            	
    	 LAST );
    
    lr_end_transaction("TC01_MarketPlace_GetTopBrand", LR_AUTO);
	
	return 0;
}
