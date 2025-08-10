<?
// create lists of links and link text
$wcgd_navu = array( 1 =>
  "index.html",
  "events.html",
  "lwgg.html",
  "bb.html",
  "ephoto1.html",
  "links.html",
//  "nmra.html",
  "photo1.html",
  "newlayout.html",
  "rphoto1.html",
  "about.html",
  "contact.html"
);
$wcgd_navt = array( 1 =>
  "Home",
  "Upcoming Events",
  "Youth Group",
  "Other Events",
  "Past Events",
  "HOBBY Shops / Free-Mo",
//  "Bulletin Board",
  "Club Photo Album",
  "New Layout Photos", // Jenny changed this
  "Club railfan Photos",
  "About Us",
  "Contact Us"
);
$wcgd_navcount = count($wcgd_navu);

// loop to create nav menu and assign correct class and id
$wcgd_navm = ""; // first, clear the navm variable
for ($wcgd_c = 1; $wcgd_c <= $wcgd_navcount; $wcgd_c++) {
  $wcgd_navm .= "      <a class=\"NavBar vertical";
  if ($wcgd_c == 1) {
    $wcgd_navm .= " verticalfirst";
  }
  if ($wcgd_c == $wcgd_navcount) {
    $wcgd_navm .= " verticallast";
  }
  $wcgd_navm .= "\" href=\"{$wcgd_navu[$wcgd_c]}{$wcgd_vurl}\"";
  if ($wcgd_navu[$wcgd_c] == $wcgd_page) {
    $wcgd_navm .= " id=\"currentnavpage\"";
  }
  $wcgd_navm .= ">{$wcgd_navt[$wcgd_c]}</a><!-- {$wcgd_c} -->
";
}
echo "   <!--navbar Type=\"Vert\" uses-text=\"N\"-->
   <div xmlns:local=\"local\" class=\"vnav\"><script language=\"javascript\" type=\"text/javascript\">
        function tweNavbarPreload(imgSrc, imgObj) {
            if (document.images) {
                eval(imgObj+' = new Image()');
                eval(imgObj+'.src = \"'+imgSrc+'\"');
            }
        }

        function tweNavbarChangeImage(imgName, imgObj) {
            if (document.images) {
                document[imgName].src = eval(imgObj + \".src\");        
            }
        } 

    	</script>
{$wcgd_navm}    </div>
   <!--/navbar-->
";
?>