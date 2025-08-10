<?
// versions:
# 1.1.20130218 added $wcgd_cssadds variable to add on to style sheet
# 1.1.20130218a corrected position of $wcgd_cssadds
# 1.1.20141102 new StatCounter code, StatCounter centered on index page
#
// end changelog

// non-www to www redirect
$wcgd_url1 = $_SERVER['SERVER_NAME'];
$wcgd_url2 = $_SERVER['PHP_SELF'];
$wcgd_url3 = $_SERVER['QUERY_STRING'];
if ($wcgd_url3 != "") {
  $wcgd_url4 = "?";
}
$wcgd_url = $wcgd_url1.$wcgd_url2.$wcgd_url4.$wcgd_url3;
$wcgd1 = explode(".",$wcgd_url);
if ($wcgd1[0] != "www" AND !isset($wcgd_es)) {
  header('HTTP/1.1 301 Moved Permanently'); 
  header('Location: http://www.'.$wcgd_url);
}

// get page url
  $wcgd1 = explode("/",$wcgd_url);
  $wcgd2 = explode("?",$wcgd1[1]);
  $wcgd_page = $wcgd2[0];

// version changer
if (isset($_GET['v'])) {
  $wcgd_v = $_GET['v'];
  $wcgd_vurl = "?v=".$wcgd_v;
  if ($wcgd_v == 0) {
    $wcgd_vsw = 1;
  } else {
    $wcgd_vsw = 0;
  }
  $wcgd3 = "<a href=\"{$wcgd_page}?v={$wcgd_vsw}\" style=\"color: rgb(51, 255, 0); text-decoration: none;\">{$wcgd_heading}</a>";
  $wcgd_heading = $wcgd3;
} else {
  $wcgd_v = 0;
}

if ($wcgd_title == "") {
  $wcgd_title = $wcgd_page;
}
if ($wcgd_desc != "") {
  $wcgd1 = "   <meta name=\"description\" content=\"";
  $wcgd2 = "\">
";
  $wcgd3 = $wcgd1.$wcgd_desc.$wcgd2;
  $wcgd_desc = $wcgd3;
}
if ($wcgd_keyw != "") {
  $wcgd1 = "   <meta name=\"keywords\" content=\"";
  $wcgd2 = "\">
";
  $wcgd3 = $wcgd1.$wcgd_keyw.$wcgd2;
  $wcgd_keyw = $wcgd3;
}
echo "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.01 Transitional//EN\">
<html><head>


   <title>{$wcgd_title}</title>

{$wcgd_desc}{$wcgd_keyw}   <meta http-equiv=\"Content-Type\" content=\"text/html; charset=ISO-8859-1\">
";
/* echo "   <meta http-equiv=\"Expires\" content=\"0\">
"; */
echo "   <meta name=\"generator\" content=\"Trellix Site Builder v1.0\">
{$wcgd_base}<style xmlns:local=\"local\" type=\"text/css\">
      <!--
    .vertical { display: block; }
    .homelink { border: 0; }
--></style>
   	<style type=\"text/css\"><!-- .cornerimage {  
   		background-image: url(files/spacer.gif);
   		background-repeat: no-repeat;
   		padding-left: 10px;
   		background-position: center center; 
   	}
    .pageheader {  
   		background-image: url(files/design_0088_1.jpg); 
   		background-color: transparent;
   		background-repeat: no-repeat; 
   	}
    .user {  text-align: center; 
   		color: ffff00;
   		font-family: Verdana, Arial, Helvetica, sans-serif;
   		font-size: 12px;
   	}
    .sitetitle {  
   		text-align: center;
   		color: ffff00;
   		font-family: Verdana, Arial, Helvetica, sans-serif;
   		font-size: 24px;
   		font-weight: bold;
";
$wcgd_v1[0] = "    }
    .sitetitle span.wcgd {
   		font-variant: small-caps;
   	}
   	.sitetitle span.mrc {
   	    text-transform: lowercase; font-style: italic; font-size: 80%; letter-spacing: 2px;
";
$wcgd_v1[1] = "        text-transform: uppercase;
";
echo $wcgd_v1[$wcgd_v]."   		
   	}
    .pagetitle {  
   		color: ffff00;
   		font-family: Verdana, Arial, Helvetica, sans-serif;
   		font-size: 20px;
   		font-weight: bold;
   		text-transform: uppercase;
   	}
    .subhead {  
   			font-size: 13px;
   			font-weight: bold; 
   			}
    .main {  }
    .area_a {  }
    .area_b {  }
    .area_c {  }
    .runner {  
   		background-image: url(files/spacer.gif);
   		color: #FFFFFF;
   	}
    .footer {  	
   		color: #FFFFFF;
   	}
    .usertable {  }
    .subhead_table {  }
    .main_table {  }
    .area_a_table {  }
    .area_b_table {  }
    .area_c_table {  }
    .runner_table {  }
    .hnav {  }
    .horizontal {  }
    .horizontal:hover {  }
    .horizontalfirst {  }
    .horizontallast {  }
    .vnav {  height: 40px; width: 194px; }
    .vertical {  text-decoration: none;
   				font-family: Verdana, Arial, Helvetica, sans-serif;
   				font-size: 9px;
   				color: #0A0D0A;
   				text-transform: uppercase;
   				text-align: right;
   				padding: 10px 12px 14px 18px;
   				background-image: url(files/design_0088_2.gif);
   				background-repeat: no-repeat; }
    .vertical:hover {  }
    .verticalfirst {  }
    .verticallast {  }
    #currentnavpage {  
   		color: #ffffff;
   		background-image: url(files/design_0088_3.gif);
   		background-repeat: no-repeat;
   	}
    #currentnavpage:hover {  }
    .tnav {  }
    .textnav {  }
    .textnav:hover {  }
    .textnavfirst {  }
    .textnavlast {  }
    #textnav {  }
    #textnav:hover {  }
    .subnav .vertical { 
   		background-color: ffff66;
   		color: #000000;
   		text-align: left;
   	}
    .subnav .vertical:hover { 
   		background-color: 66cc33;
   		color: #000000;
   		text-align: left;
   	 }
    A.NavBar {  
   		color: #000000;
   	}
    A.NavBar:active link {  
   		color: #000000;
   	}
    .user a { 
   		color: 66aaff;
   	}
    .user a:active { 
   		color: 006666;
   	 }
    .user a:visited { 
   		color: ff6666;
   	 }
    body { 
   	background-image: url(files/spacer.gif);
   	text-align: left;
   	margin-left: 0px;
   	margin-top: 0px;
   	margin-right: 0px;
   	margin-bottom: 0px;
   	background-color: #000000;
   
   	}
{$wcgd_cssadds}   
   	
   -->
   	 </style>
   
   <!-- media=\"all\": hack to hide stuff, when necessary
   	(like background images on normally-inline elements)
   	from NS 4 -->
   	<style type=\"text/css\" media=\"all\"><!--
   -->
   	 </style>
</head>
<body>
";
/* WAS:
   <meta name="generator" content="Trellix Site Builder">
   <meta name="TRELLIX_BUILDER_VER" content="1.0"><meta name="TRELLIX_OPEN_SITE_COMMAND" content="http://sitebuilder.myregisteredsite.com:80SiteBuilderServlet?fUrl=f_error.html&amp;sUrl=f_edit_page.html&amp;Command=OpenSite&amp;FileName=1581922722564960986/site.xml">
   <!--base href="http://www.wcgandydancers.org/"-->
   <!--/base--><script language="Javascript"><!--
		document.isTrellix = 1;
//						--></script><style xmlns:local="local" type="text/css">
      <!--
    .vertical { display: block; }
    .homelink { border: 0; }
--></style>
   	<style type="text/css"><!-- .cornerimage {  
   		background-image: url(files/spacer.gif);
   		background-repeat: no-repeat;
   		padding-left: 10px;
   		background-position: center center; 
   	}
    .pageheader {  
   		background-image: url(files/design_0088_1.jpg); 
   		background-color: transparent;
   		background-repeat: no-repeat; 
   	}
    .user {  text-align: center; 
   		color: ffff00;
   		font-family: Verdana, Arial, Helvetica, sans-serif;
   		font-size: 12px;
   	}
    .sitetitle {  
   		text-align: center;
   		color: ffff00;
   		font-family: Verdana, Arial, Helvetica, sans-serif;
   		font-size: 24px;
   		font-weight: bold;
   		text-transform: uppercase;
   		
   	}
    .pagetitle {  
   		color: ffff00;
   		font-family: Verdana, Arial, Helvetica, sans-serif;
   		font-size: 20px;
   		font-weight: bold;
   		text-transform: uppercase;
   	}
    .subhead {  
   			font-size: 13px;
   			font-weight: bold; 
   			}
    .main {  }
    .area_a {  }
    .area_b {  }
    .area_c {  }
    .runner {  
   		background-image: url(files/spacer.gif);
   		color: #FFFFFF;
   	}
    .footer {  	
   		color: #FFFFFF;
   	}
    .usertable {  }
    .subhead_table {  }
    .main_table {  }
    .area_a_table {  }
    .area_b_table {  }
    .area_c_table {  }
    .runner_table {  }
    .hnav {  }
    .horizontal {  }
    .horizontal:hover {  }
    .horizontalfirst {  }
    .horizontallast {  }
    .vnav {  height: 40px; width: 194px; }
    .vertical {  text-decoration: none;
   				font-family: Verdana, Arial, Helvetica, sans-serif;
   				font-size: 9px;
   				color: #0A0D0A;
   				text-transform: uppercase;
   				text-align: right;
   				padding: 10px 12px 14px 18px;
   				background-image: url(files/design_0088_2.gif);
   				background-repeat: no-repeat; }
    .vertical:hover {  }
    .verticalfirst {  }
    .verticallast {  }
    #currentnavpage {  
   		color: #ffffff;
   		background-image: url(files/design_0088_3.gif);
   		background-repeat: no-repeat;
   	}
    #currentnavpage:hover {  }
    .tnav {  }
    .textnav {  }
    .textnav:hover {  }
    .textnavfirst {  }
    .textnavlast {  }
    #textnav {  }
    #textnav:hover {  }
    .subnav .vertical { 
   		background-color: ffff66;
   		color: #000000;
   		text-align: left;
   	}
    .subnav .vertical:hover { 
   		background-color: 66cc33;
   		color: #000000;
   		text-align: left;
   	 }
    A.NavBar {  
   		color: #000000;
   	}
    A.NavBar:active link {  
   		color: #000000;
   	}
    .user a { 
   		color: 66aaff;
   	}
    .user a:active { 
   		color: 006666;
   	 }
    .user a:visited { 
   		color: ff6666;
   	 }
    body { 
   	background-image: url(files/spacer.gif);
   	text-align: left;
   	margin-left: 0px;
   	margin-top: 0px;
   	margin-right: 0px;
   	margin-bottom: 0px;
   	background-color: #000000;
   
   	}
   
   	
   -->
   	 </style>
   
   <!-- media="all": hack to hide stuff, when necessary
   	(like background images on normally-inline elements)
   	from NS 4 -->
   	<style type="text/css" media="all"><!--
   -->
   	 </style>
   
   <meta content="text/html; charset=iso-8859-1" http="http"></head><body>
 */
echo "   <table width=\"100%\" border=\"0\" cellpadding=\"0\" cellspacing=\"0\" height=\"100\">
     <tbody><tr>
       <td valign=\"top\" align=\"left\" background=\"files/design_0088_4.jpg\" height=\"208\"><table width=\"100%\" border=\"0\" cellpadding=\"0\" cellspacing=\"0\" height=\"208\">
         <tbody><tr>
           <td class=\"pageheader\" valign=\"top\" align=\"left\" height=\"208\"><table width=\"100%\" border=\"0\" cellpadding=\"0\" cellspacing=\"0\" height=\"208\">
             <tbody><tr>
               <td style=\"padding: 24px 0pt;\" valign=\"top\" align=\"left\" height=\"208\"><table width=\"100%\" border=\"0\" cellpadding=\"0\" cellspacing=\"0\" height=\"159\">
                 <tbody><tr height=\"159\">
";
$wcgd_v2[0] = "                   <!-- <td class=\"cornerimage\" valign=\"top\" width=\"250\" align=\"left\" height=\"159\"></td> -->
                   <td style=\"padding: 27px 127px 27px;\" valign=\"top\" align=\"left\" height=\"159\">
                       <div xmlns:local=\"local\" class=\"user sitetitle\">
      <div style=\"text-align: center;\"><span style=\"font-family: tahoma,verdana,sans-serif; color: rgb(255, 255, 0); font-weight: bold; font-size: 30px;\"><span class=\"wcgd\">&nbsp; Waukesha County Gandy Dancers</span><br><span class=\"mrc\">Model Railroad Club</span></span></div>
";
$wcgd_v2[1] = "                   <td class=\"cornerimage\" valign=\"top\" width=\"250\" align=\"left\" height=\"159\"></td>
                   <td style=\"padding: 54px 127px 27px;\" valign=\"top\" align=\"left\" height=\"159\"><div xmlns:local=\"local\" class=\"user sitetitle\">
      <div style=\"text-align: center;\"><span style=\"font-family: tahoma,verdana,sans-serif; color: rgb(255, 255, 0); font-weight: bold; font-size: 24px;\">Waukesha County Gandy Dancers Model Railroad Club</span></div>
";
echo $wcgd_v2[$wcgd_v]."   </div>

                       

   <div xmlns:local=\"local\" class=\"user pagetitle\">

      <div><span style=\"color: rgb(51, 255, 0);\">{$wcgd_heading}</span></div>

   </div></td>
                 </tr>
               </tbody></table></td>
             </tr>
           </tbody></table></td>
         </tr>
       </tbody></table></td>
     </tr>
     <tr>
       <td style=\"background-repeat: repeat-y;\" valign=\"top\" align=\"left\" background=\"files/design_0088_5.jpg\" height=\"392\"><table width=\"100%\" border=\"0\" cellpadding=\"0\" cellspacing=\"0\">
         <tbody><tr>
           <td style=\"background-repeat: no-repeat; background-position: left bottom;\" valign=\"top\" width=\"229\" align=\"left\" background=\"files/design_0088_6.jpg\" height=\"392\"><table width=\"100%\" border=\"0\" cellpadding=\"0\" cellspacing=\"0\">
             <tbody><tr>
               <td style=\"padding: 38px 9px 38px 25px; background-repeat: no-repeat;\" valign=\"top\" align=\"left\" background=\"files/design_0088_7.jpg\" height=\"392\">
";
include("files/nav.inc"); 
echo "               </td>
             </tr>
           </tbody></table></td>
           <td style=\"background-repeat: repeat-y;\" valign=\"top\" align=\"left\" background=\"files/design_0088_8.jpg\" bgcolor=\"#4d5a4b\" height=\"392\"><table width=\"100%\" border=\"0\" cellpadding=\"0\" cellspacing=\"0\">
             <tbody><tr>
               <td style=\"background-repeat: repeat-y; background-position: right center;\" valign=\"top\" align=\"left\" background=\"files/design_0088_9.jpg\" height=\"348\"><table width=\"100%\" border=\"0\" cellpadding=\"0\" cellspacing=\"0\">
                 <tbody><tr>
                   <td style=\"padding: 0pt 15px 0pt 21px; background-repeat: no-repeat;\" valign=\"top\" align=\"left\" background=\"files/design_0088_10.jpg\" height=\"348\"><table width=\"100%\" border=\"0\" cellpadding=\"0\" cellspacing=\"0\">
                     <tbody><tr>
                       <td style=\"background-repeat: repeat-x; background-position: center bottom;\" valign=\"top\" align=\"left\" background=\"files/design_0088_11.jpg\" height=\"348\"><table width=\"100%\" border=\"0\" cellpadding=\"0\" cellspacing=\"0\" height=\"100\">
                         <tbody><tr>
                           <td style=\"padding: 15px 10px; background-repeat: no-repeat; background-position: right bottom;\" valign=\"top\" align=\"left\" background=\"files/design_0088_12.jpg\" height=\"348\">
";

// determine visible/invisible StatCounter
if ($wcgd_page == "index.html") {
  $wcgd_sc = "   <div xmlns:local=\"local\" class=\"user area_c\">
        <table cellpadding=\"0\" cellspacing=\"0\" align=\"center\"><tbody><tr><td><!-- Start of StatCounter Code for Default Guide -->
<script type=\"text/javascript\">
var sc_project=10112930; 
var sc_invisible=0; 
var sc_security=\"27c5e9c5\"; 
var scJsHost = ((\"https:\" == document.location.protocol) ?
\"https://secure.\" : \"http://www.\");
document.write(\"<sc\"+\"ript type='text/javascript' src='\" +
scJsHost+
\"statcounter.com/counter/counter.js'></\"+\"script>\");
</script>
<noscript><div class=\"statcounter\"><a title=\"web analytics\"
href=\"http://statcounter.com/\" target=\"_blank\"><img
class=\"statcounter\"
src=\"http://c.statcounter.com/10112930/0/27c5e9c5/0/\"
alt=\"web analytics\"></a></div></noscript>
<!-- End of StatCounter Code for Default Guide --></td></tr></tbody></table>

         <!--end gem-->
   </div>
";
/* old Statcounter code = "<!-- Start of StatCounter Code -->
<script type=\"text/javascript\">
var sc_project=4760773; 
var sc_invisible=0; 
var sc_partition=54; 
var sc_click_stat=1; 
var sc_security=\"de12c19f\"; 
</script>

<script type=\"text/javascript\"
src=\"http://www.statcounter.com/counter/counter.js\"></script><noscript><div
class=\"statcounter\"><a title=\"web counter\"
href=\"http://www.statcounter.com/free_hit_counter.html\"
target=\"_blank\"><img class=\"statcounter\"
src=\"http://c.statcounter.com/4760773/0/de12c19f/0/\"
alt=\"web counter\" ></a></div></noscript>
<!-- End of StatCounter Code -->"; */
} else {
  $wcgd_sc = "<!-- Start of StatCounter Code for Default Guide -->
<script type=\"text/javascript\">
var sc_project=10112930; 
var sc_invisible=1; 
var sc_security=\"27c5e9c5\"; 
var scJsHost = ((\"https:\" == document.location.protocol) ?
\"https://secure.\" : \"http://www.\");
document.write(\"<sc\"+\"ript type='text/javascript' src='\" +
scJsHost+
\"statcounter.com/counter/counter.js'></\"+\"script>\");
</script>
<noscript><div class=\"statcounter\"><a title=\"shopify site
analytics\" href=\"http://statcounter.com/shopify/\"
target=\"_blank\"><img class=\"statcounter\"
src=\"http://c.statcounter.com/10112930/0/27c5e9c5/1/\"
alt=\"shopify site analytics\"></a></div></noscript>
<!-- End of StatCounter Code for Default Guide -->
";
/* old Statcounter code = "<!-- Start of StatCounter Code -->
<script type=\"text/javascript\">
var sc_project=4760773; 
var sc_invisible=1; 
var sc_partition=54; 
var sc_click_stat=1; 
var sc_security=\"de12c19f\"; 
</script>

<script type=\"text/javascript\"
src=\"http://www.statcounter.com/counter/counter.js\"></script><noscript><div
class=\"statcounter\"><a title=\"web counter\"
href=\"http://www.statcounter.com/free_hit_counter.html\"
target=\"_blank\"><img class=\"statcounter\"
src=\"http://c.statcounter.com/4760773/0/de12c19f/1/\"
alt=\"web counter\" ></a></div></noscript>
<!-- End of StatCounter Code -->"; */
}

// footer
$wcgd_footer = "</td>
                         </tr>
                       </tbody></table></td>
                     </tr>
                   </tbody></table></td>
                 </tr>
               </tbody></table></td>
             </tr>
             <tr>
               <td style=\"background-repeat: no-repeat; background-position: left bottom; padding-left: 21px;\" valign=\"top\" align=\"left\" background=\"files/design_0088_13.jpg\" height=\"44\"><table width=\"100%\" border=\"0\" cellpadding=\"0\" cellspacing=\"0\" height=\"44\">
                 <tbody><tr>
                   <td style=\"background-repeat: repeat-x; background-position: center bottom;\" valign=\"top\" align=\"left\" background=\"files/design_0088_14.jpg\" bgcolor=\"#c1c6bf\" height=\"44\"><table width=\"100%\" border=\"0\" cellpadding=\"0\" cellspacing=\"0\" height=\"44\">
                     <tbody><tr>
                       <td style=\"padding: 8px 10px; background-position: right bottom; background-repeat: no-repeat;\" valign=\"top\" align=\"left\" background=\"files/design_0088_15.jpg\" height=\"44\">
   <!--area Type=\"runner\" class=\"user runner\"-->
   <div xmlns:local=\"local\" class=\"user runner\">
      <p>
         </p><div style=\"text-align: center;\">
            <!--gem:tlx.tlxinv.general-->
            <!--end gem--><!--\"''\"-->
         </div>
      <p></p>
      	
      <!--area Type=\"footer\" class=\"user footer\"-->
      <!--/area Type=\"footer\"-->
   </div>
   <!--/area Type=\"runner\"-->
                       </td>
                     </tr>
                   </tbody></table></td>
                 </tr>
               </tbody></table></td>
             </tr>
           </tbody></table></td>
         </tr>
       </tbody></table></td>
     </tr>
     <tr>
       <td style=\"border-top: 1px solid rgb(255, 255, 255);\" valign=\"top\" align=\"left\" height=\"1\"> <div style=\"width: 760px;\"></div>&nbsp;</td>
     </tr>
   </tbody></table>
   </body></html>";
?>
