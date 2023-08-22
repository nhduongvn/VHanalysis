void Z_dR_tags_all_logY()
{
//=========Macro generated from canvas: Z_dR_tags_all/Z_dR_tags_all
//=========  (Tue Aug 22 09:16:05 2023) by ROOT version 6.14/09
   TCanvas *Z_dR_tags_all = new TCanvas("Z_dR_tags_all", "Z_dR_tags_all",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_dR_tags_all->SetHighLightColor(2);
   Z_dR_tags_all->Range(0,0,1,1);
   Z_dR_tags_all->SetFillColor(0);
   Z_dR_tags_all->SetFillStyle(4000);
   Z_dR_tags_all->SetBorderMode(0);
   Z_dR_tags_all->SetBorderSize(2);
   Z_dR_tags_all->SetFrameFillStyle(1000);
   Z_dR_tags_all->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.9193524,-1.353166,6.314516,12.4745);
   topPad->SetFillColor(0);
   topPad->SetBorderMode(0);
   topPad->SetBorderSize(2);
   topPad->SetLogy();
   topPad->SetLeftMargin(0.12709);
   topPad->SetRightMargin(0.0434783);
   topPad->SetBottomMargin(0.001);
   topPad->SetFrameBorderMode(0);
   topPad->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(0.3);
   st->SetMaximum(3.834402e+10);
   
   TH1F *st_stack_20 = new TH1F("st_stack_20","",30,0,6);
   st_stack_20->SetMinimum(0.04577855);
   st_stack_20->SetMaximum(1.235182e+11);
   st_stack_20->SetDirectory(0);
   st_stack_20->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_20->SetLineColor(ci);
   st_stack_20->GetXaxis()->SetRange(1,30);
   st_stack_20->GetXaxis()->SetLabelFont(42);
   st_stack_20->GetXaxis()->SetLabelSize(0.035);
   st_stack_20->GetXaxis()->SetTitleSize(0.035);
   st_stack_20->GetXaxis()->SetTitleFont(42);
   st_stack_20->GetYaxis()->SetTitle("Events/0.2");
   st_stack_20->GetYaxis()->SetLabelFont(42);
   st_stack_20->GetYaxis()->SetLabelSize(0.05);
   st_stack_20->GetYaxis()->SetTitleSize(0.057);
   st_stack_20->GetYaxis()->SetTitleOffset(1.2);
   st_stack_20->GetYaxis()->SetTitleFont(42);
   st_stack_20->GetZaxis()->SetLabelFont(42);
   st_stack_20->GetZaxis()->SetLabelSize(0.035);
   st_stack_20->GetZaxis()->SetTitleSize(0.035);
   st_stack_20->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_20);
   
   
   TH1D *VbbHcc_tags_Z_dR_all_stack_1 = new TH1D("VbbHcc_tags_Z_dR_all_stack_1","",30,0,6);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinContent(3,27331.07);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinContent(4,30053.61);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinContent(5,26191.4);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinContent(6,18356.13);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinContent(7,18711.37);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinContent(8,23588.01);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinContent(9,16431.67);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinContent(10,17181.4);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinContent(11,18818.36);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinContent(12,18791.91);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinContent(13,23127.75);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinContent(14,28239.91);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinContent(15,53842.43);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinContent(16,46591.15);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinContent(17,30510.26);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinContent(18,24391.7);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinContent(19,25160.17);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinContent(20,18900.12);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinContent(21,16149.13);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinContent(22,10779.91);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinContent(23,11233.39);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinContent(24,8489.087);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinContent(25,7000.119);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinContent(26,5867.565);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinContent(27,5592.194);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinContent(28,4828.638);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinContent(29,3050.521);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinContent(30,2469.053);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinContent(31,1928.18);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinError(3,1880.749);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinError(4,2359.903);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinError(5,3199.3);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinError(6,1618.541);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinError(7,2066.265);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinError(8,3249.137);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinError(9,1702.368);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinError(10,1772.141);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinError(11,1999.01);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinError(12,2042.013);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinError(13,2458.396);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinError(14,2474.472);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinError(15,20800.48);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinError(16,16719.26);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinError(17,2420.722);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinError(18,2295.625);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinError(19,2221.555);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinError(20,1800.498);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinError(21,1928.435);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinError(22,1299.295);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinError(23,1606.852);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinError(24,1370.535);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinError(25,1329.71);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinError(26,1047.638);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinError(27,903.0235);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinError(28,908.1891);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinError(29,591.8494);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinError(30,690.0469);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinError(31,501.5507);
   VbbHcc_tags_Z_dR_all_stack_1->SetEntries(27568);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_tags_Z_dR_all_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_all_stack_1->SetLineColor(ci);
   VbbHcc_tags_Z_dR_all_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_all_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_all_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_all_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_all_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_all_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_all_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_all_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_all_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_all_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_all_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_all_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_all_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_all_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_all_stack_1,"");
   
   TH1D *VbbHcc_tags_Z_dR_all_stack_2 = new TH1D("VbbHcc_tags_Z_dR_all_stack_2","",30,0,6);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinContent(2,0.05316449);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinContent(3,65.75945);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinContent(4,94.95278);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinContent(5,86.55668);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinContent(6,102.461);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinContent(7,93.81351);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinContent(8,104.9105);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinContent(9,119.6437);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinContent(10,120.428);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinContent(11,131.5888);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinContent(12,138.5722);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinContent(13,150.3574);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinContent(14,152.371);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinContent(15,161.4925);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinContent(16,160.1783);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinContent(17,141.1418);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinContent(18,133.9706);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinContent(19,111.2357);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinContent(20,102.4144);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinContent(21,86.23245);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinContent(22,71.94529);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinContent(23,62.42239);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinContent(24,47.25725);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinContent(25,41.28885);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinContent(26,33.39151);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinContent(27,24.97726);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinContent(28,23.75064);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinContent(29,17.09771);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinContent(30,12.12508);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinContent(31,8.36566);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinError(2,0.05316449);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinError(3,3.332111);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinError(4,4.100632);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinError(5,3.933275);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinError(6,4.341907);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinError(7,3.942333);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinError(8,4.308425);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinError(9,4.623531);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinError(10,4.703335);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinError(11,4.818685);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinError(12,4.986161);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinError(13,5.269702);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinError(14,5.170782);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinError(15,5.54633);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinError(16,5.284691);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinError(17,4.983589);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinError(18,4.912287);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinError(19,4.373218);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinError(20,4.138894);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinError(21,3.905163);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinError(22,3.618621);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinError(23,3.312854);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinError(24,2.892079);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinError(25,2.686347);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinError(26,2.416087);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinError(27,2.141816);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinError(28,2.118811);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinError(29,1.794031);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinError(30,1.512735);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinError(31,1.195385);
   VbbHcc_tags_Z_dR_all_stack_2->SetEntries(34548);

   ci = TColor::GetColor("#660066");
   VbbHcc_tags_Z_dR_all_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_all_stack_2->SetLineColor(ci);
   VbbHcc_tags_Z_dR_all_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_all_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_all_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_all_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_all_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_all_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_all_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_all_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_all_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_all_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_all_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_all_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_all_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_all_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_all_stack_2,"");
   
   TH1D *VbbHcc_tags_Z_dR_all_stack_3 = new TH1D("VbbHcc_tags_Z_dR_all_stack_3","",30,0,6);
   VbbHcc_tags_Z_dR_all_stack_3->SetBinContent(2,0.7718342);
   VbbHcc_tags_Z_dR_all_stack_3->SetBinContent(3,1130.614);
   VbbHcc_tags_Z_dR_all_stack_3->SetBinContent(4,1746.845);
   VbbHcc_tags_Z_dR_all_stack_3->SetBinContent(5,1857.556);
   VbbHcc_tags_Z_dR_all_stack_3->SetBinContent(6,2015.053);
   VbbHcc_tags_Z_dR_all_stack_3->SetBinContent(7,2126.926);
   VbbHcc_tags_Z_dR_all_stack_3->SetBinContent(8,2224.735);
   VbbHcc_tags_Z_dR_all_stack_3->SetBinContent(9,2323.985);
   VbbHcc_tags_Z_dR_all_stack_3->SetBinContent(10,2454.232);
   VbbHcc_tags_Z_dR_all_stack_3->SetBinContent(11,2654.141);
   VbbHcc_tags_Z_dR_all_stack_3->SetBinContent(12,2843.564);
   VbbHcc_tags_Z_dR_all_stack_3->SetBinContent(13,3084.285);
   VbbHcc_tags_Z_dR_all_stack_3->SetBinContent(14,3248.121);
   VbbHcc_tags_Z_dR_all_stack_3->SetBinContent(15,3414.858);
   VbbHcc_tags_Z_dR_all_stack_3->SetBinContent(16,3452.149);
   VbbHcc_tags_Z_dR_all_stack_3->SetBinContent(17,3256.999);
   VbbHcc_tags_Z_dR_all_stack_3->SetBinContent(18,3003.497);
   VbbHcc_tags_Z_dR_all_stack_3->SetBinContent(19,2675.21);
   VbbHcc_tags_Z_dR_all_stack_3->SetBinContent(20,2284.086);
   VbbHcc_tags_Z_dR_all_stack_3->SetBinContent(21,1934.895);
   VbbHcc_tags_Z_dR_all_stack_3->SetBinContent(22,1582.765);
   VbbHcc_tags_Z_dR_all_stack_3->SetBinContent(23,1291.324);
   VbbHcc_tags_Z_dR_all_stack_3->SetBinContent(24,1024.345);
   VbbHcc_tags_Z_dR_all_stack_3->SetBinContent(25,803.8167);
   VbbHcc_tags_Z_dR_all_stack_3->SetBinContent(26,661.2188);
   VbbHcc_tags_Z_dR_all_stack_3->SetBinContent(27,533.2183);
   VbbHcc_tags_Z_dR_all_stack_3->SetBinContent(28,403.6581);
   VbbHcc_tags_Z_dR_all_stack_3->SetBinContent(29,311.7541);
   VbbHcc_tags_Z_dR_all_stack_3->SetBinContent(30,205.0362);
   VbbHcc_tags_Z_dR_all_stack_3->SetBinContent(31,176.7418);
   VbbHcc_tags_Z_dR_all_stack_3->SetBinError(2,0.2259927);
   VbbHcc_tags_Z_dR_all_stack_3->SetBinError(3,8.977748);
   VbbHcc_tags_Z_dR_all_stack_3->SetBinError(4,11.04674);
   VbbHcc_tags_Z_dR_all_stack_3->SetBinError(5,11.49934);
   VbbHcc_tags_Z_dR_all_stack_3->SetBinError(6,12.02257);
   VbbHcc_tags_Z_dR_all_stack_3->SetBinError(7,12.30755);
   VbbHcc_tags_Z_dR_all_stack_3->SetBinError(8,12.63896);
   VbbHcc_tags_Z_dR_all_stack_3->SetBinError(9,12.79487);
   VbbHcc_tags_Z_dR_all_stack_3->SetBinError(10,13.15364);
   VbbHcc_tags_Z_dR_all_stack_3->SetBinError(11,13.95466);
   VbbHcc_tags_Z_dR_all_stack_3->SetBinError(12,14.41391);
   VbbHcc_tags_Z_dR_all_stack_3->SetBinError(13,15.25766);
   VbbHcc_tags_Z_dR_all_stack_3->SetBinError(14,15.52661);
   VbbHcc_tags_Z_dR_all_stack_3->SetBinError(15,15.46385);
   VbbHcc_tags_Z_dR_all_stack_3->SetBinError(16,15.599);
   VbbHcc_tags_Z_dR_all_stack_3->SetBinError(17,15.5133);
   VbbHcc_tags_Z_dR_all_stack_3->SetBinError(18,15.42323);
   VbbHcc_tags_Z_dR_all_stack_3->SetBinError(19,13.80096);
   VbbHcc_tags_Z_dR_all_stack_3->SetBinError(20,13.44719);
   VbbHcc_tags_Z_dR_all_stack_3->SetBinError(21,11.83374);
   VbbHcc_tags_Z_dR_all_stack_3->SetBinError(22,10.52567);
   VbbHcc_tags_Z_dR_all_stack_3->SetBinError(23,9.595703);
   VbbHcc_tags_Z_dR_all_stack_3->SetBinError(24,8.5595);
   VbbHcc_tags_Z_dR_all_stack_3->SetBinError(25,7.407231);
   VbbHcc_tags_Z_dR_all_stack_3->SetBinError(26,6.769233);
   VbbHcc_tags_Z_dR_all_stack_3->SetBinError(27,7.015547);
   VbbHcc_tags_Z_dR_all_stack_3->SetBinError(28,6.238493);
   VbbHcc_tags_Z_dR_all_stack_3->SetBinError(29,5.156817);
   VbbHcc_tags_Z_dR_all_stack_3->SetBinError(30,4.138924);
   VbbHcc_tags_Z_dR_all_stack_3->SetBinError(31,3.546232);
   VbbHcc_tags_Z_dR_all_stack_3->SetEntries(905703);

   ci = TColor::GetColor("#cc00cc");
   VbbHcc_tags_Z_dR_all_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_all_stack_3->SetLineColor(ci);
   VbbHcc_tags_Z_dR_all_stack_3->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_all_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_all_stack_3->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_all_stack_3->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_all_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_all_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_all_stack_3->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_all_stack_3->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_all_stack_3->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_all_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_all_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_all_stack_3->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_all_stack_3->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_all_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_all_stack_3,"");
   
   TH1D *VbbHcc_tags_Z_dR_all_stack_4 = new TH1D("VbbHcc_tags_Z_dR_all_stack_4","",30,0,6);
   VbbHcc_tags_Z_dR_all_stack_4->SetBinContent(3,296.6249);
   VbbHcc_tags_Z_dR_all_stack_4->SetBinContent(4,483.1803);
   VbbHcc_tags_Z_dR_all_stack_4->SetBinContent(5,458.7392);
   VbbHcc_tags_Z_dR_all_stack_4->SetBinContent(6,415.2045);
   VbbHcc_tags_Z_dR_all_stack_4->SetBinContent(7,335.1984);
   VbbHcc_tags_Z_dR_all_stack_4->SetBinContent(8,277.3203);
   VbbHcc_tags_Z_dR_all_stack_4->SetBinContent(9,259.1914);
   VbbHcc_tags_Z_dR_all_stack_4->SetBinContent(10,238.9548);
   VbbHcc_tags_Z_dR_all_stack_4->SetBinContent(11,272.5395);
   VbbHcc_tags_Z_dR_all_stack_4->SetBinContent(12,298.2518);
   VbbHcc_tags_Z_dR_all_stack_4->SetBinContent(13,337.397);
   VbbHcc_tags_Z_dR_all_stack_4->SetBinContent(14,403.9876);
   VbbHcc_tags_Z_dR_all_stack_4->SetBinContent(15,424.3954);
   VbbHcc_tags_Z_dR_all_stack_4->SetBinContent(16,392.6205);
   VbbHcc_tags_Z_dR_all_stack_4->SetBinContent(17,397.6167);
   VbbHcc_tags_Z_dR_all_stack_4->SetBinContent(18,353.5493);
   VbbHcc_tags_Z_dR_all_stack_4->SetBinContent(19,317.4597);
   VbbHcc_tags_Z_dR_all_stack_4->SetBinContent(20,272.7931);
   VbbHcc_tags_Z_dR_all_stack_4->SetBinContent(21,196.2752);
   VbbHcc_tags_Z_dR_all_stack_4->SetBinContent(22,168.7338);
   VbbHcc_tags_Z_dR_all_stack_4->SetBinContent(23,144.0935);
   VbbHcc_tags_Z_dR_all_stack_4->SetBinContent(24,105.8574);
   VbbHcc_tags_Z_dR_all_stack_4->SetBinContent(25,104.5817);
   VbbHcc_tags_Z_dR_all_stack_4->SetBinContent(26,95.98635);
   VbbHcc_tags_Z_dR_all_stack_4->SetBinContent(27,72.04469);
   VbbHcc_tags_Z_dR_all_stack_4->SetBinContent(28,59.95706);
   VbbHcc_tags_Z_dR_all_stack_4->SetBinContent(29,56.54048);
   VbbHcc_tags_Z_dR_all_stack_4->SetBinContent(30,33.78344);
   VbbHcc_tags_Z_dR_all_stack_4->SetBinContent(31,22.73179);
   VbbHcc_tags_Z_dR_all_stack_4->SetBinError(3,6.551382);
   VbbHcc_tags_Z_dR_all_stack_4->SetBinError(4,11.48901);
   VbbHcc_tags_Z_dR_all_stack_4->SetBinError(5,12.96197);
   VbbHcc_tags_Z_dR_all_stack_4->SetBinError(6,17.47425);
   VbbHcc_tags_Z_dR_all_stack_4->SetBinError(7,13.17454);
   VbbHcc_tags_Z_dR_all_stack_4->SetBinError(8,10.41595);
   VbbHcc_tags_Z_dR_all_stack_4->SetBinError(9,10.96582);
   VbbHcc_tags_Z_dR_all_stack_4->SetBinError(10,9.774838);
   VbbHcc_tags_Z_dR_all_stack_4->SetBinError(11,11.00463);
   VbbHcc_tags_Z_dR_all_stack_4->SetBinError(12,11.03803);
   VbbHcc_tags_Z_dR_all_stack_4->SetBinError(13,16.69542);
   VbbHcc_tags_Z_dR_all_stack_4->SetBinError(14,15.04507);
   VbbHcc_tags_Z_dR_all_stack_4->SetBinError(15,20.549);
   VbbHcc_tags_Z_dR_all_stack_4->SetBinError(16,13.46542);
   VbbHcc_tags_Z_dR_all_stack_4->SetBinError(17,14.53181);
   VbbHcc_tags_Z_dR_all_stack_4->SetBinError(18,14.54634);
   VbbHcc_tags_Z_dR_all_stack_4->SetBinError(19,15.53939);
   VbbHcc_tags_Z_dR_all_stack_4->SetBinError(20,10.83003);
   VbbHcc_tags_Z_dR_all_stack_4->SetBinError(21,9.214699);
   VbbHcc_tags_Z_dR_all_stack_4->SetBinError(22,7.647886);
   VbbHcc_tags_Z_dR_all_stack_4->SetBinError(23,8.55245);
   VbbHcc_tags_Z_dR_all_stack_4->SetBinError(24,7.306661);
   VbbHcc_tags_Z_dR_all_stack_4->SetBinError(25,7.822249);
   VbbHcc_tags_Z_dR_all_stack_4->SetBinError(26,9.239923);
   VbbHcc_tags_Z_dR_all_stack_4->SetBinError(27,4.590463);
   VbbHcc_tags_Z_dR_all_stack_4->SetBinError(28,3.959218);
   VbbHcc_tags_Z_dR_all_stack_4->SetBinError(29,5.881406);
   VbbHcc_tags_Z_dR_all_stack_4->SetBinError(30,4.742467);
   VbbHcc_tags_Z_dR_all_stack_4->SetBinError(31,2.263111);
   VbbHcc_tags_Z_dR_all_stack_4->SetEntries(49827);

   ci = TColor::GetColor("#00cccc");
   VbbHcc_tags_Z_dR_all_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_all_stack_4->SetLineColor(ci);
   VbbHcc_tags_Z_dR_all_stack_4->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_all_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_all_stack_4->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_all_stack_4->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_all_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_all_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_all_stack_4->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_all_stack_4->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_all_stack_4->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_all_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_all_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_all_stack_4->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_all_stack_4->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_all_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_all_stack_4,"");
   
   TH1D *VbbHcc_tags_Z_dR_all_stack_5 = new TH1D("VbbHcc_tags_Z_dR_all_stack_5","",30,0,6);
   VbbHcc_tags_Z_dR_all_stack_5->SetBinContent(3,71.95635);
   VbbHcc_tags_Z_dR_all_stack_5->SetBinContent(4,72.37329);
   VbbHcc_tags_Z_dR_all_stack_5->SetBinContent(5,46.04702);
   VbbHcc_tags_Z_dR_all_stack_5->SetBinContent(6,33.50376);
   VbbHcc_tags_Z_dR_all_stack_5->SetBinContent(7,28.5897);
   VbbHcc_tags_Z_dR_all_stack_5->SetBinContent(8,39.31125);
   VbbHcc_tags_Z_dR_all_stack_5->SetBinContent(9,21.71471);
   VbbHcc_tags_Z_dR_all_stack_5->SetBinContent(10,18.91729);
   VbbHcc_tags_Z_dR_all_stack_5->SetBinContent(11,35.11707);
   VbbHcc_tags_Z_dR_all_stack_5->SetBinContent(12,31.68891);
   VbbHcc_tags_Z_dR_all_stack_5->SetBinContent(13,23.42925);
   VbbHcc_tags_Z_dR_all_stack_5->SetBinContent(14,31.27132);
   VbbHcc_tags_Z_dR_all_stack_5->SetBinContent(15,29.87179);
   VbbHcc_tags_Z_dR_all_stack_5->SetBinContent(16,33.07071);
   VbbHcc_tags_Z_dR_all_stack_5->SetBinContent(17,25.01058);
   VbbHcc_tags_Z_dR_all_stack_5->SetBinContent(18,29.54095);
   VbbHcc_tags_Z_dR_all_stack_5->SetBinContent(19,18.87989);
   VbbHcc_tags_Z_dR_all_stack_5->SetBinContent(20,18.26572);
   VbbHcc_tags_Z_dR_all_stack_5->SetBinContent(21,17.59464);
   VbbHcc_tags_Z_dR_all_stack_5->SetBinContent(22,16.64406);
   VbbHcc_tags_Z_dR_all_stack_5->SetBinContent(23,13.04231);
   VbbHcc_tags_Z_dR_all_stack_5->SetBinContent(24,16.21559);
   VbbHcc_tags_Z_dR_all_stack_5->SetBinContent(25,9.068886);
   VbbHcc_tags_Z_dR_all_stack_5->SetBinContent(26,16.16301);
   VbbHcc_tags_Z_dR_all_stack_5->SetBinContent(27,4.436315);
   VbbHcc_tags_Z_dR_all_stack_5->SetBinContent(28,8.142186);
   VbbHcc_tags_Z_dR_all_stack_5->SetBinContent(29,6.359559);
   VbbHcc_tags_Z_dR_all_stack_5->SetBinContent(30,4.950155);
   VbbHcc_tags_Z_dR_all_stack_5->SetBinContent(31,2.411331);
   VbbHcc_tags_Z_dR_all_stack_5->SetBinError(3,7.622299);
   VbbHcc_tags_Z_dR_all_stack_5->SetBinError(4,6.912771);
   VbbHcc_tags_Z_dR_all_stack_5->SetBinError(5,9.92128);
   VbbHcc_tags_Z_dR_all_stack_5->SetBinError(6,3.31362);
   VbbHcc_tags_Z_dR_all_stack_5->SetBinError(7,5.633097);
   VbbHcc_tags_Z_dR_all_stack_5->SetBinError(8,5.871904);
   VbbHcc_tags_Z_dR_all_stack_5->SetBinError(9,2.93403);
   VbbHcc_tags_Z_dR_all_stack_5->SetBinError(10,2.078399);
   VbbHcc_tags_Z_dR_all_stack_5->SetBinError(11,8.833529);
   VbbHcc_tags_Z_dR_all_stack_5->SetBinError(12,4.769183);
   VbbHcc_tags_Z_dR_all_stack_5->SetBinError(13,2.396889);
   VbbHcc_tags_Z_dR_all_stack_5->SetBinError(14,4.825287);
   VbbHcc_tags_Z_dR_all_stack_5->SetBinError(15,3.431832);
   VbbHcc_tags_Z_dR_all_stack_5->SetBinError(16,5.495426);
   VbbHcc_tags_Z_dR_all_stack_5->SetBinError(17,3.212885);
   VbbHcc_tags_Z_dR_all_stack_5->SetBinError(18,3.932735);
   VbbHcc_tags_Z_dR_all_stack_5->SetBinError(19,2.701771);
   VbbHcc_tags_Z_dR_all_stack_5->SetBinError(20,1.995746);
   VbbHcc_tags_Z_dR_all_stack_5->SetBinError(21,2.740645);
   VbbHcc_tags_Z_dR_all_stack_5->SetBinError(22,3.710944);
   VbbHcc_tags_Z_dR_all_stack_5->SetBinError(23,3.088514);
   VbbHcc_tags_Z_dR_all_stack_5->SetBinError(24,5.530222);
   VbbHcc_tags_Z_dR_all_stack_5->SetBinError(25,2.781483);
   VbbHcc_tags_Z_dR_all_stack_5->SetBinError(26,4.572051);
   VbbHcc_tags_Z_dR_all_stack_5->SetBinError(27,0.7581535);
   VbbHcc_tags_Z_dR_all_stack_5->SetBinError(28,1.761847);
   VbbHcc_tags_Z_dR_all_stack_5->SetBinError(29,1.166046);
   VbbHcc_tags_Z_dR_all_stack_5->SetBinError(30,1.028326);
   VbbHcc_tags_Z_dR_all_stack_5->SetBinError(31,0.7030295);
   VbbHcc_tags_Z_dR_all_stack_5->SetEntries(7212);

   ci = TColor::GetColor("#ff99cc");
   VbbHcc_tags_Z_dR_all_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_all_stack_5->SetLineColor(ci);
   VbbHcc_tags_Z_dR_all_stack_5->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_all_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_all_stack_5->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_all_stack_5->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_all_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_all_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_all_stack_5->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_all_stack_5->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_all_stack_5->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_all_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_all_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_all_stack_5->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_all_stack_5->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_all_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_all_stack_5,"");
   
   TH1D *VbbHcc_tags_Z_dR_all_stack_6 = new TH1D("VbbHcc_tags_Z_dR_all_stack_6","",30,0,6);
   VbbHcc_tags_Z_dR_all_stack_6->SetBinContent(3,0.4532962);
   VbbHcc_tags_Z_dR_all_stack_6->SetBinContent(4,0.6225638);
   VbbHcc_tags_Z_dR_all_stack_6->SetBinContent(7,0.1195687);
   VbbHcc_tags_Z_dR_all_stack_6->SetBinContent(9,0.9683726);
   VbbHcc_tags_Z_dR_all_stack_6->SetBinContent(11,0.2467491);
   VbbHcc_tags_Z_dR_all_stack_6->SetBinContent(12,0.2295285);
   VbbHcc_tags_Z_dR_all_stack_6->SetBinContent(13,0.1234178);
   VbbHcc_tags_Z_dR_all_stack_6->SetBinContent(14,0.1335451);
   VbbHcc_tags_Z_dR_all_stack_6->SetBinContent(16,0.2950387);
   VbbHcc_tags_Z_dR_all_stack_6->SetBinContent(17,0.232904);
   VbbHcc_tags_Z_dR_all_stack_6->SetBinContent(22,0.1243737);
   VbbHcc_tags_Z_dR_all_stack_6->SetBinContent(25,0.1297649);
   VbbHcc_tags_Z_dR_all_stack_6->SetBinError(3,0.3832926);
   VbbHcc_tags_Z_dR_all_stack_6->SetBinError(4,0.6225638);
   VbbHcc_tags_Z_dR_all_stack_6->SetBinError(7,0.1195687);
   VbbHcc_tags_Z_dR_all_stack_6->SetBinError(9,0.5757992);
   VbbHcc_tags_Z_dR_all_stack_6->SetBinError(11,0.1746882);
   VbbHcc_tags_Z_dR_all_stack_6->SetBinError(12,0.1623026);
   VbbHcc_tags_Z_dR_all_stack_6->SetBinError(13,0.1234178);
   VbbHcc_tags_Z_dR_all_stack_6->SetBinError(14,0.1335451);
   VbbHcc_tags_Z_dR_all_stack_6->SetBinError(16,0.2950387);
   VbbHcc_tags_Z_dR_all_stack_6->SetBinError(17,0.232904);
   VbbHcc_tags_Z_dR_all_stack_6->SetBinError(22,0.1243737);
   VbbHcc_tags_Z_dR_all_stack_6->SetBinError(25,0.1297649);
   VbbHcc_tags_Z_dR_all_stack_6->SetEntries(17);

   ci = TColor::GetColor("#9933ff");
   VbbHcc_tags_Z_dR_all_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_all_stack_6->SetLineColor(ci);
   VbbHcc_tags_Z_dR_all_stack_6->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_all_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_all_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_all_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_all_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_all_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_all_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_all_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_all_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_all_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_all_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_all_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_all_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_all_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_all_stack_6,"");
   
   TH1D *VbbHcc_tags_Z_dR_all_stack_7 = new TH1D("VbbHcc_tags_Z_dR_all_stack_7","",30,0,6);
   VbbHcc_tags_Z_dR_all_stack_7->SetBinContent(3,1.035993);
   VbbHcc_tags_Z_dR_all_stack_7->SetBinContent(4,1.255398);
   VbbHcc_tags_Z_dR_all_stack_7->SetBinContent(5,0.2603627);
   VbbHcc_tags_Z_dR_all_stack_7->SetBinContent(6,0.2596262);
   VbbHcc_tags_Z_dR_all_stack_7->SetBinContent(8,0.07873842);
   VbbHcc_tags_Z_dR_all_stack_7->SetBinContent(9,1.048224);
   VbbHcc_tags_Z_dR_all_stack_7->SetBinContent(10,0.1825174);
   VbbHcc_tags_Z_dR_all_stack_7->SetBinContent(11,0.228064);
   VbbHcc_tags_Z_dR_all_stack_7->SetBinContent(13,0.08729333);
   VbbHcc_tags_Z_dR_all_stack_7->SetBinContent(14,0.108763);
   VbbHcc_tags_Z_dR_all_stack_7->SetBinContent(15,0.3090167);
   VbbHcc_tags_Z_dR_all_stack_7->SetBinContent(16,0.6654795);
   VbbHcc_tags_Z_dR_all_stack_7->SetBinContent(17,0.515685);
   VbbHcc_tags_Z_dR_all_stack_7->SetBinContent(18,0.09132081);
   VbbHcc_tags_Z_dR_all_stack_7->SetBinContent(19,0.09078265);
   VbbHcc_tags_Z_dR_all_stack_7->SetBinContent(21,0.1805163);
   VbbHcc_tags_Z_dR_all_stack_7->SetBinContent(24,0.07823021);
   VbbHcc_tags_Z_dR_all_stack_7->SetBinContent(29,0.08656424);
   VbbHcc_tags_Z_dR_all_stack_7->SetBinError(3,0.4513042);
   VbbHcc_tags_Z_dR_all_stack_7->SetBinError(4,0.6671395);
   VbbHcc_tags_Z_dR_all_stack_7->SetBinError(5,0.1505751);
   VbbHcc_tags_Z_dR_all_stack_7->SetBinError(6,0.1503824);
   VbbHcc_tags_Z_dR_all_stack_7->SetBinError(8,0.07873842);
   VbbHcc_tags_Z_dR_all_stack_7->SetBinError(9,0.5813098);
   VbbHcc_tags_Z_dR_all_stack_7->SetBinError(10,0.1290644);
   VbbHcc_tags_Z_dR_all_stack_7->SetBinError(11,0.1319954);
   VbbHcc_tags_Z_dR_all_stack_7->SetBinError(13,0.08729333);
   VbbHcc_tags_Z_dR_all_stack_7->SetBinError(14,0.108763);
   VbbHcc_tags_Z_dR_all_stack_7->SetBinError(15,0.1785686);
   VbbHcc_tags_Z_dR_all_stack_7->SetBinError(16,0.3484903);
   VbbHcc_tags_Z_dR_all_stack_7->SetBinError(17,0.2844593);
   VbbHcc_tags_Z_dR_all_stack_7->SetBinError(18,0.09132081);
   VbbHcc_tags_Z_dR_all_stack_7->SetBinError(19,0.09078265);
   VbbHcc_tags_Z_dR_all_stack_7->SetBinError(21,0.1276761);
   VbbHcc_tags_Z_dR_all_stack_7->SetBinError(24,0.07823021);
   VbbHcc_tags_Z_dR_all_stack_7->SetBinError(29,0.08656424);
   VbbHcc_tags_Z_dR_all_stack_7->SetEntries(52);

   ci = TColor::GetColor("#3399ff");
   VbbHcc_tags_Z_dR_all_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_all_stack_7->SetLineColor(ci);
   VbbHcc_tags_Z_dR_all_stack_7->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_all_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_all_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_all_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_all_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_all_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_all_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_all_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_all_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_all_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_all_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_all_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_all_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_all_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_all_stack_7,"");
   
   TH1D *VbbHcc_tags_Z_dR_all_stack_8 = new TH1D("VbbHcc_tags_Z_dR_all_stack_8","",30,0,6);
   VbbHcc_tags_Z_dR_all_stack_8->SetBinContent(3,5.039918);
   VbbHcc_tags_Z_dR_all_stack_8->SetBinContent(4,10.76193);
   VbbHcc_tags_Z_dR_all_stack_8->SetBinContent(5,15.21733);
   VbbHcc_tags_Z_dR_all_stack_8->SetBinContent(6,5.493415);
   VbbHcc_tags_Z_dR_all_stack_8->SetBinContent(7,4.367893);
   VbbHcc_tags_Z_dR_all_stack_8->SetBinContent(8,2.911391);
   VbbHcc_tags_Z_dR_all_stack_8->SetBinContent(9,4.40002);
   VbbHcc_tags_Z_dR_all_stack_8->SetBinContent(10,2.217992);
   VbbHcc_tags_Z_dR_all_stack_8->SetBinContent(11,3.640736);
   VbbHcc_tags_Z_dR_all_stack_8->SetBinContent(12,3.389921);
   VbbHcc_tags_Z_dR_all_stack_8->SetBinContent(13,5.884369);
   VbbHcc_tags_Z_dR_all_stack_8->SetBinContent(14,9.160354);
   VbbHcc_tags_Z_dR_all_stack_8->SetBinContent(15,12.37556);
   VbbHcc_tags_Z_dR_all_stack_8->SetBinContent(16,10.07814);
   VbbHcc_tags_Z_dR_all_stack_8->SetBinContent(17,11.18757);
   VbbHcc_tags_Z_dR_all_stack_8->SetBinContent(18,8.031172);
   VbbHcc_tags_Z_dR_all_stack_8->SetBinContent(19,7.000116);
   VbbHcc_tags_Z_dR_all_stack_8->SetBinContent(20,4.76544);
   VbbHcc_tags_Z_dR_all_stack_8->SetBinContent(21,2.795714);
   VbbHcc_tags_Z_dR_all_stack_8->SetBinContent(22,2.750677);
   VbbHcc_tags_Z_dR_all_stack_8->SetBinContent(23,2.54795);
   VbbHcc_tags_Z_dR_all_stack_8->SetBinContent(24,0.9779921);
   VbbHcc_tags_Z_dR_all_stack_8->SetBinContent(25,1.182763);
   VbbHcc_tags_Z_dR_all_stack_8->SetBinContent(26,1.253194);
   VbbHcc_tags_Z_dR_all_stack_8->SetBinContent(27,0.701755);
   VbbHcc_tags_Z_dR_all_stack_8->SetBinContent(28,1.271102);
   VbbHcc_tags_Z_dR_all_stack_8->SetBinContent(29,0.7628513);
   VbbHcc_tags_Z_dR_all_stack_8->SetBinContent(30,0.4911268);
   VbbHcc_tags_Z_dR_all_stack_8->SetBinContent(31,0.2268635);
   VbbHcc_tags_Z_dR_all_stack_8->SetBinError(3,1.162539);
   VbbHcc_tags_Z_dR_all_stack_8->SetBinError(4,1.673941);
   VbbHcc_tags_Z_dR_all_stack_8->SetBinError(5,2.105375);
   VbbHcc_tags_Z_dR_all_stack_8->SetBinError(6,1.171018);
   VbbHcc_tags_Z_dR_all_stack_8->SetBinError(7,1.117534);
   VbbHcc_tags_Z_dR_all_stack_8->SetBinError(8,0.895084);
   VbbHcc_tags_Z_dR_all_stack_8->SetBinError(9,1.063468);
   VbbHcc_tags_Z_dR_all_stack_8->SetBinError(10,0.7586163);
   VbbHcc_tags_Z_dR_all_stack_8->SetBinError(11,0.9742544);
   VbbHcc_tags_Z_dR_all_stack_8->SetBinError(12,0.8478828);
   VbbHcc_tags_Z_dR_all_stack_8->SetBinError(13,1.26558);
   VbbHcc_tags_Z_dR_all_stack_8->SetBinError(14,1.573911);
   VbbHcc_tags_Z_dR_all_stack_8->SetBinError(15,1.853441);
   VbbHcc_tags_Z_dR_all_stack_8->SetBinError(16,1.666);
   VbbHcc_tags_Z_dR_all_stack_8->SetBinError(17,1.686226);
   VbbHcc_tags_Z_dR_all_stack_8->SetBinError(18,1.431299);
   VbbHcc_tags_Z_dR_all_stack_8->SetBinError(19,1.381413);
   VbbHcc_tags_Z_dR_all_stack_8->SetBinError(20,1.102748);
   VbbHcc_tags_Z_dR_all_stack_8->SetBinError(21,0.915025);
   VbbHcc_tags_Z_dR_all_stack_8->SetBinError(22,0.8481337);
   VbbHcc_tags_Z_dR_all_stack_8->SetBinError(23,0.8925425);
   VbbHcc_tags_Z_dR_all_stack_8->SetBinError(24,0.4911433);
   VbbHcc_tags_Z_dR_all_stack_8->SetBinError(25,0.619681);
   VbbHcc_tags_Z_dR_all_stack_8->SetBinError(26,0.5662788);
   VbbHcc_tags_Z_dR_all_stack_8->SetBinError(27,0.4072088);
   VbbHcc_tags_Z_dR_all_stack_8->SetBinError(28,0.5792997);
   VbbHcc_tags_Z_dR_all_stack_8->SetBinError(29,0.442921);
   VbbHcc_tags_Z_dR_all_stack_8->SetBinError(30,0.3545719);
   VbbHcc_tags_Z_dR_all_stack_8->SetBinError(31,0.2268635);
   VbbHcc_tags_Z_dR_all_stack_8->SetEntries(564);

   ci = TColor::GetColor("#33ff99");
   VbbHcc_tags_Z_dR_all_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_all_stack_8->SetLineColor(ci);
   VbbHcc_tags_Z_dR_all_stack_8->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_all_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_all_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_all_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_all_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_all_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_all_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_all_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_all_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_all_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_all_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_all_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_all_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_all_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_all_stack_8,"");
   
   TH1D *VbbHcc_tags_Z_dR_all_stack_9 = new TH1D("VbbHcc_tags_Z_dR_all_stack_9","",30,0,6);
   VbbHcc_tags_Z_dR_all_stack_9->SetBinContent(3,5.256069);
   VbbHcc_tags_Z_dR_all_stack_9->SetBinContent(4,9.783231);
   VbbHcc_tags_Z_dR_all_stack_9->SetBinContent(5,10.05635);
   VbbHcc_tags_Z_dR_all_stack_9->SetBinContent(6,8.130168);
   VbbHcc_tags_Z_dR_all_stack_9->SetBinContent(7,5.748471);
   VbbHcc_tags_Z_dR_all_stack_9->SetBinContent(8,3.758017);
   VbbHcc_tags_Z_dR_all_stack_9->SetBinContent(9,2.915581);
   VbbHcc_tags_Z_dR_all_stack_9->SetBinContent(10,3.088795);
   VbbHcc_tags_Z_dR_all_stack_9->SetBinContent(11,3.706057);
   VbbHcc_tags_Z_dR_all_stack_9->SetBinContent(12,4.683112);
   VbbHcc_tags_Z_dR_all_stack_9->SetBinContent(13,6.274351);
   VbbHcc_tags_Z_dR_all_stack_9->SetBinContent(14,8.025735);
   VbbHcc_tags_Z_dR_all_stack_9->SetBinContent(15,9.419208);
   VbbHcc_tags_Z_dR_all_stack_9->SetBinContent(16,10.60754);
   VbbHcc_tags_Z_dR_all_stack_9->SetBinContent(17,9.999639);
   VbbHcc_tags_Z_dR_all_stack_9->SetBinContent(18,8.618533);
   VbbHcc_tags_Z_dR_all_stack_9->SetBinContent(19,6.861021);
   VbbHcc_tags_Z_dR_all_stack_9->SetBinContent(20,4.827659);
   VbbHcc_tags_Z_dR_all_stack_9->SetBinContent(21,3.170253);
   VbbHcc_tags_Z_dR_all_stack_9->SetBinContent(22,2.098838);
   VbbHcc_tags_Z_dR_all_stack_9->SetBinContent(23,1.633863);
   VbbHcc_tags_Z_dR_all_stack_9->SetBinContent(24,1.104862);
   VbbHcc_tags_Z_dR_all_stack_9->SetBinContent(25,0.8908001);
   VbbHcc_tags_Z_dR_all_stack_9->SetBinContent(26,1.024973);
   VbbHcc_tags_Z_dR_all_stack_9->SetBinContent(27,1.051665);
   VbbHcc_tags_Z_dR_all_stack_9->SetBinContent(28,1.137487);
   VbbHcc_tags_Z_dR_all_stack_9->SetBinContent(29,0.9790521);
   VbbHcc_tags_Z_dR_all_stack_9->SetBinContent(30,0.5380162);
   VbbHcc_tags_Z_dR_all_stack_9->SetBinContent(31,0.2808633);
   VbbHcc_tags_Z_dR_all_stack_9->SetBinError(3,0.111333);
   VbbHcc_tags_Z_dR_all_stack_9->SetBinError(4,0.159242);
   VbbHcc_tags_Z_dR_all_stack_9->SetBinError(5,0.1543508);
   VbbHcc_tags_Z_dR_all_stack_9->SetBinError(6,0.1410986);
   VbbHcc_tags_Z_dR_all_stack_9->SetBinError(7,0.1220931);
   VbbHcc_tags_Z_dR_all_stack_9->SetBinError(8,0.09149594);
   VbbHcc_tags_Z_dR_all_stack_9->SetBinError(9,0.07949716);
   VbbHcc_tags_Z_dR_all_stack_9->SetBinError(10,0.08238485);
   VbbHcc_tags_Z_dR_all_stack_9->SetBinError(11,0.09432525);
   VbbHcc_tags_Z_dR_all_stack_9->SetBinError(12,0.1093803);
   VbbHcc_tags_Z_dR_all_stack_9->SetBinError(13,0.1231671);
   VbbHcc_tags_Z_dR_all_stack_9->SetBinError(14,0.1372307);
   VbbHcc_tags_Z_dR_all_stack_9->SetBinError(15,0.150385);
   VbbHcc_tags_Z_dR_all_stack_9->SetBinError(16,0.16894);
   VbbHcc_tags_Z_dR_all_stack_9->SetBinError(17,0.1535984);
   VbbHcc_tags_Z_dR_all_stack_9->SetBinError(18,0.1482188);
   VbbHcc_tags_Z_dR_all_stack_9->SetBinError(19,0.1356364);
   VbbHcc_tags_Z_dR_all_stack_9->SetBinError(20,0.1065748);
   VbbHcc_tags_Z_dR_all_stack_9->SetBinError(21,0.08571089);
   VbbHcc_tags_Z_dR_all_stack_9->SetBinError(22,0.06959581);
   VbbHcc_tags_Z_dR_all_stack_9->SetBinError(23,0.1332971);
   VbbHcc_tags_Z_dR_all_stack_9->SetBinError(24,0.0550336);
   VbbHcc_tags_Z_dR_all_stack_9->SetBinError(25,0.04382784);
   VbbHcc_tags_Z_dR_all_stack_9->SetBinError(26,0.04761736);
   VbbHcc_tags_Z_dR_all_stack_9->SetBinError(27,0.0499727);
   VbbHcc_tags_Z_dR_all_stack_9->SetBinError(28,0.05661883);
   VbbHcc_tags_Z_dR_all_stack_9->SetBinError(29,0.04800914);
   VbbHcc_tags_Z_dR_all_stack_9->SetBinError(30,0.03710178);
   VbbHcc_tags_Z_dR_all_stack_9->SetBinError(31,0.024726);
   VbbHcc_tags_Z_dR_all_stack_9->SetEntries(79284);

   ci = TColor::GetColor("#cccc00");
   VbbHcc_tags_Z_dR_all_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_all_stack_9->SetLineColor(ci);
   VbbHcc_tags_Z_dR_all_stack_9->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_all_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_all_stack_9->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_all_stack_9->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_all_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_all_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_all_stack_9->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_all_stack_9->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_all_stack_9->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_all_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_all_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_all_stack_9->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_all_stack_9->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_all_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_all_stack_9,"");
   
   TH1D *VbbHcc_tags_Z_dR_all_stack_10 = new TH1D("VbbHcc_tags_Z_dR_all_stack_10","",30,0,6);
   VbbHcc_tags_Z_dR_all_stack_10->SetBinContent(3,1.58094);
   VbbHcc_tags_Z_dR_all_stack_10->SetBinContent(4,3.321515);
   VbbHcc_tags_Z_dR_all_stack_10->SetBinContent(5,3.865107);
   VbbHcc_tags_Z_dR_all_stack_10->SetBinContent(6,3.658752);
   VbbHcc_tags_Z_dR_all_stack_10->SetBinContent(7,2.933205);
   VbbHcc_tags_Z_dR_all_stack_10->SetBinContent(8,2.127306);
   VbbHcc_tags_Z_dR_all_stack_10->SetBinContent(9,1.747357);
   VbbHcc_tags_Z_dR_all_stack_10->SetBinContent(10,1.673862);
   VbbHcc_tags_Z_dR_all_stack_10->SetBinContent(11,1.728687);
   VbbHcc_tags_Z_dR_all_stack_10->SetBinContent(12,2.13376);
   VbbHcc_tags_Z_dR_all_stack_10->SetBinContent(13,2.445337);
   VbbHcc_tags_Z_dR_all_stack_10->SetBinContent(14,2.740598);
   VbbHcc_tags_Z_dR_all_stack_10->SetBinContent(15,2.874319);
   VbbHcc_tags_Z_dR_all_stack_10->SetBinContent(16,3.052324);
   VbbHcc_tags_Z_dR_all_stack_10->SetBinContent(17,2.836956);
   VbbHcc_tags_Z_dR_all_stack_10->SetBinContent(18,2.552337);
   VbbHcc_tags_Z_dR_all_stack_10->SetBinContent(19,2.120051);
   VbbHcc_tags_Z_dR_all_stack_10->SetBinContent(20,1.669156);
   VbbHcc_tags_Z_dR_all_stack_10->SetBinContent(21,1.349146);
   VbbHcc_tags_Z_dR_all_stack_10->SetBinContent(22,1.001991);
   VbbHcc_tags_Z_dR_all_stack_10->SetBinContent(23,0.7590856);
   VbbHcc_tags_Z_dR_all_stack_10->SetBinContent(24,0.6035028);
   VbbHcc_tags_Z_dR_all_stack_10->SetBinContent(25,0.5402443);
   VbbHcc_tags_Z_dR_all_stack_10->SetBinContent(26,0.5231254);
   VbbHcc_tags_Z_dR_all_stack_10->SetBinContent(27,0.5483907);
   VbbHcc_tags_Z_dR_all_stack_10->SetBinContent(28,0.4397889);
   VbbHcc_tags_Z_dR_all_stack_10->SetBinContent(29,0.3268608);
   VbbHcc_tags_Z_dR_all_stack_10->SetBinContent(30,0.2249754);
   VbbHcc_tags_Z_dR_all_stack_10->SetBinContent(31,0.1181857);
   VbbHcc_tags_Z_dR_all_stack_10->SetBinError(3,0.02758901);
   VbbHcc_tags_Z_dR_all_stack_10->SetBinError(4,0.03929845);
   VbbHcc_tags_Z_dR_all_stack_10->SetBinError(5,0.04191069);
   VbbHcc_tags_Z_dR_all_stack_10->SetBinError(6,0.04043608);
   VbbHcc_tags_Z_dR_all_stack_10->SetBinError(7,0.03612633);
   VbbHcc_tags_Z_dR_all_stack_10->SetBinError(8,0.03077477);
   VbbHcc_tags_Z_dR_all_stack_10->SetBinError(9,0.02797927);
   VbbHcc_tags_Z_dR_all_stack_10->SetBinError(10,0.02745594);
   VbbHcc_tags_Z_dR_all_stack_10->SetBinError(11,0.02777776);
   VbbHcc_tags_Z_dR_all_stack_10->SetBinError(12,0.03085658);
   VbbHcc_tags_Z_dR_all_stack_10->SetBinError(13,0.0329438);
   VbbHcc_tags_Z_dR_all_stack_10->SetBinError(14,0.03486952);
   VbbHcc_tags_Z_dR_all_stack_10->SetBinError(15,0.03578956);
   VbbHcc_tags_Z_dR_all_stack_10->SetBinError(16,0.03683059);
   VbbHcc_tags_Z_dR_all_stack_10->SetBinError(17,0.03549089);
   VbbHcc_tags_Z_dR_all_stack_10->SetBinError(18,0.03368053);
   VbbHcc_tags_Z_dR_all_stack_10->SetBinError(19,0.03068235);
   VbbHcc_tags_Z_dR_all_stack_10->SetBinError(20,0.02718872);
   VbbHcc_tags_Z_dR_all_stack_10->SetBinError(21,0.02451189);
   VbbHcc_tags_Z_dR_all_stack_10->SetBinError(22,0.02115528);
   VbbHcc_tags_Z_dR_all_stack_10->SetBinError(23,0.01839383);
   VbbHcc_tags_Z_dR_all_stack_10->SetBinError(24,0.01632847);
   VbbHcc_tags_Z_dR_all_stack_10->SetBinError(25,0.01551641);
   VbbHcc_tags_Z_dR_all_stack_10->SetBinError(26,0.01518261);
   VbbHcc_tags_Z_dR_all_stack_10->SetBinError(27,0.01569957);
   VbbHcc_tags_Z_dR_all_stack_10->SetBinError(28,0.01410406);
   VbbHcc_tags_Z_dR_all_stack_10->SetBinError(29,0.01227116);
   VbbHcc_tags_Z_dR_all_stack_10->SetBinError(30,0.01013919);
   VbbHcc_tags_Z_dR_all_stack_10->SetBinError(31,0.007399545);
   VbbHcc_tags_Z_dR_all_stack_10->SetEntries(122844);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_tags_Z_dR_all_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_all_stack_10->SetLineColor(ci);
   VbbHcc_tags_Z_dR_all_stack_10->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_all_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_all_stack_10->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_all_stack_10->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_all_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_all_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_all_stack_10->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_all_stack_10->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_all_stack_10->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_all_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_all_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_all_stack_10->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_all_stack_10->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_all_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_all_stack_10,"");
   
   TH1D *VbbHcc_tags_Z_dR_all_stack_11 = new TH1D("VbbHcc_tags_Z_dR_all_stack_11","",30,0,6);
   VbbHcc_tags_Z_dR_all_stack_11->SetBinContent(3,0.05216043);
   VbbHcc_tags_Z_dR_all_stack_11->SetBinContent(4,0.05158295);
   VbbHcc_tags_Z_dR_all_stack_11->SetBinContent(5,0.06015161);
   VbbHcc_tags_Z_dR_all_stack_11->SetBinContent(6,0.0337871);
   VbbHcc_tags_Z_dR_all_stack_11->SetBinContent(7,0.01744842);
   VbbHcc_tags_Z_dR_all_stack_11->SetBinContent(8,0.01323539);
   VbbHcc_tags_Z_dR_all_stack_11->SetBinContent(9,0.006358207);
   VbbHcc_tags_Z_dR_all_stack_11->SetBinContent(10,0.005909586);
   VbbHcc_tags_Z_dR_all_stack_11->SetBinContent(11,0.01036226);
   VbbHcc_tags_Z_dR_all_stack_11->SetBinContent(12,0.01821299);
   VbbHcc_tags_Z_dR_all_stack_11->SetBinContent(13,0.004926267);
   VbbHcc_tags_Z_dR_all_stack_11->SetBinContent(14,0.01507926);
   VbbHcc_tags_Z_dR_all_stack_11->SetBinContent(15,0.01726656);
   VbbHcc_tags_Z_dR_all_stack_11->SetBinContent(16,0.008458132);
   VbbHcc_tags_Z_dR_all_stack_11->SetBinContent(17,0.01019784);
   VbbHcc_tags_Z_dR_all_stack_11->SetBinContent(18,0.00573865);
   VbbHcc_tags_Z_dR_all_stack_11->SetBinContent(19,0.0125124);
   VbbHcc_tags_Z_dR_all_stack_11->SetBinContent(20,0.007413163);
   VbbHcc_tags_Z_dR_all_stack_11->SetBinContent(22,0.002234631);
   VbbHcc_tags_Z_dR_all_stack_11->SetBinContent(23,0.01149158);
   VbbHcc_tags_Z_dR_all_stack_11->SetBinContent(25,0.001860547);
   VbbHcc_tags_Z_dR_all_stack_11->SetBinContent(26,0.00344075);
   VbbHcc_tags_Z_dR_all_stack_11->SetBinContent(27,0.003394154);
   VbbHcc_tags_Z_dR_all_stack_11->SetBinContent(28,0.001937955);
   VbbHcc_tags_Z_dR_all_stack_11->SetBinContent(29,0.009915638);
   VbbHcc_tags_Z_dR_all_stack_11->SetBinContent(31,0.001291342);
   VbbHcc_tags_Z_dR_all_stack_11->SetBinError(3,0.0105032);
   VbbHcc_tags_Z_dR_all_stack_11->SetBinError(4,0.01057711);
   VbbHcc_tags_Z_dR_all_stack_11->SetBinError(5,0.01125532);
   VbbHcc_tags_Z_dR_all_stack_11->SetBinError(6,0.008136616);
   VbbHcc_tags_Z_dR_all_stack_11->SetBinError(7,0.005803848);
   VbbHcc_tags_Z_dR_all_stack_11->SetBinError(8,0.005095773);
   VbbHcc_tags_Z_dR_all_stack_11->SetBinError(9,0.003673779);
   VbbHcc_tags_Z_dR_all_stack_11->SetBinError(10,0.003011185);
   VbbHcc_tags_Z_dR_all_stack_11->SetBinError(11,0.004640618);
   VbbHcc_tags_Z_dR_all_stack_11->SetBinError(12,0.005659378);
   VbbHcc_tags_Z_dR_all_stack_11->SetBinError(13,0.002978808);
   VbbHcc_tags_Z_dR_all_stack_11->SetBinError(14,0.005775099);
   VbbHcc_tags_Z_dR_all_stack_11->SetBinError(15,0.006195025);
   VbbHcc_tags_Z_dR_all_stack_11->SetBinError(16,0.003963458);
   VbbHcc_tags_Z_dR_all_stack_11->SetBinError(17,0.00462602);
   VbbHcc_tags_Z_dR_all_stack_11->SetBinError(18,0.003334432);
   VbbHcc_tags_Z_dR_all_stack_11->SetBinError(19,0.005152464);
   VbbHcc_tags_Z_dR_all_stack_11->SetBinError(20,0.004114358);
   VbbHcc_tags_Z_dR_all_stack_11->SetBinError(22,0.002234631);
   VbbHcc_tags_Z_dR_all_stack_11->SetBinError(23,0.005228345);
   VbbHcc_tags_Z_dR_all_stack_11->SetBinError(25,0.001860547);
   VbbHcc_tags_Z_dR_all_stack_11->SetBinError(26,0.002438184);
   VbbHcc_tags_Z_dR_all_stack_11->SetBinError(27,0.00251105);
   VbbHcc_tags_Z_dR_all_stack_11->SetBinError(28,0.001937955);
   VbbHcc_tags_Z_dR_all_stack_11->SetBinError(29,0.004972681);
   VbbHcc_tags_Z_dR_all_stack_11->SetBinError(31,0.001291342);
   VbbHcc_tags_Z_dR_all_stack_11->SetEntries(200);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_tags_Z_dR_all_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_all_stack_11->SetLineColor(ci);
   VbbHcc_tags_Z_dR_all_stack_11->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_all_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_all_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_all_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_all_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_all_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_all_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_all_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_all_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_all_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_all_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_all_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_all_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_all_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_all_stack_11,"");
   
   TH1D *VbbHcc_tags_Z_dR_all_stack_12 = new TH1D("VbbHcc_tags_Z_dR_all_stack_12","",30,0,6);
   VbbHcc_tags_Z_dR_all_stack_12->SetBinContent(3,0.01538608);
   VbbHcc_tags_Z_dR_all_stack_12->SetBinContent(4,0.02632812);
   VbbHcc_tags_Z_dR_all_stack_12->SetBinContent(5,0.02887658);
   VbbHcc_tags_Z_dR_all_stack_12->SetBinContent(6,0.01923936);
   VbbHcc_tags_Z_dR_all_stack_12->SetBinContent(7,0.01036547);
   VbbHcc_tags_Z_dR_all_stack_12->SetBinContent(8,0.004997628);
   VbbHcc_tags_Z_dR_all_stack_12->SetBinContent(9,0.004519639);
   VbbHcc_tags_Z_dR_all_stack_12->SetBinContent(10,0.003506064);
   VbbHcc_tags_Z_dR_all_stack_12->SetBinContent(11,0.003192015);
   VbbHcc_tags_Z_dR_all_stack_12->SetBinContent(12,0.005533813);
   VbbHcc_tags_Z_dR_all_stack_12->SetBinContent(13,0.006348239);
   VbbHcc_tags_Z_dR_all_stack_12->SetBinContent(14,0.003469083);
   VbbHcc_tags_Z_dR_all_stack_12->SetBinContent(15,0.006303067);
   VbbHcc_tags_Z_dR_all_stack_12->SetBinContent(16,0.0047816);
   VbbHcc_tags_Z_dR_all_stack_12->SetBinContent(17,0.007609929);
   VbbHcc_tags_Z_dR_all_stack_12->SetBinContent(18,0.006229806);
   VbbHcc_tags_Z_dR_all_stack_12->SetBinContent(19,0.0035448);
   VbbHcc_tags_Z_dR_all_stack_12->SetBinContent(20,0.003130704);
   VbbHcc_tags_Z_dR_all_stack_12->SetBinContent(21,0.002580195);
   VbbHcc_tags_Z_dR_all_stack_12->SetBinContent(22,0.00258628);
   VbbHcc_tags_Z_dR_all_stack_12->SetBinContent(23,0.002131626);
   VbbHcc_tags_Z_dR_all_stack_12->SetBinContent(24,0.0003214624);
   VbbHcc_tags_Z_dR_all_stack_12->SetBinContent(25,0.00179602);
   VbbHcc_tags_Z_dR_all_stack_12->SetBinContent(26,0.001379572);
   VbbHcc_tags_Z_dR_all_stack_12->SetBinContent(27,0.002374625);
   VbbHcc_tags_Z_dR_all_stack_12->SetBinContent(28,0.004127513);
   VbbHcc_tags_Z_dR_all_stack_12->SetBinContent(29,0.0009611342);
   VbbHcc_tags_Z_dR_all_stack_12->SetBinContent(30,0.001257689);
   VbbHcc_tags_Z_dR_all_stack_12->SetBinContent(31,0.00053291);
   VbbHcc_tags_Z_dR_all_stack_12->SetBinError(3,0.002106606);
   VbbHcc_tags_Z_dR_all_stack_12->SetBinError(4,0.002767938);
   VbbHcc_tags_Z_dR_all_stack_12->SetBinError(5,0.002872804);
   VbbHcc_tags_Z_dR_all_stack_12->SetBinError(6,0.002291206);
   VbbHcc_tags_Z_dR_all_stack_12->SetBinError(7,0.001778511);
   VbbHcc_tags_Z_dR_all_stack_12->SetBinError(8,0.001189384);
   VbbHcc_tags_Z_dR_all_stack_12->SetBinError(9,0.001126749);
   VbbHcc_tags_Z_dR_all_stack_12->SetBinError(10,0.0009567885);
   VbbHcc_tags_Z_dR_all_stack_12->SetBinError(11,0.0009505205);
   VbbHcc_tags_Z_dR_all_stack_12->SetBinError(12,0.001252256);
   VbbHcc_tags_Z_dR_all_stack_12->SetBinError(13,0.001335108);
   VbbHcc_tags_Z_dR_all_stack_12->SetBinError(14,0.0009324216);
   VbbHcc_tags_Z_dR_all_stack_12->SetBinError(15,0.001285217);
   VbbHcc_tags_Z_dR_all_stack_12->SetBinError(16,0.001124263);
   VbbHcc_tags_Z_dR_all_stack_12->SetBinError(17,0.001444038);
   VbbHcc_tags_Z_dR_all_stack_12->SetBinError(18,0.0013709);
   VbbHcc_tags_Z_dR_all_stack_12->SetBinError(19,0.00100607);
   VbbHcc_tags_Z_dR_all_stack_12->SetBinError(20,0.0009516193);
   VbbHcc_tags_Z_dR_all_stack_12->SetBinError(21,0.0008707282);
   VbbHcc_tags_Z_dR_all_stack_12->SetBinError(22,0.0008431986);
   VbbHcc_tags_Z_dR_all_stack_12->SetBinError(23,0.0007484951);
   VbbHcc_tags_Z_dR_all_stack_12->SetBinError(24,0.0003214624);
   VbbHcc_tags_Z_dR_all_stack_12->SetBinError(25,0.0006510352);
   VbbHcc_tags_Z_dR_all_stack_12->SetBinError(26,0.0006203087);
   VbbHcc_tags_Z_dR_all_stack_12->SetBinError(27,0.0007988137);
   VbbHcc_tags_Z_dR_all_stack_12->SetBinError(28,0.001120188);
   VbbHcc_tags_Z_dR_all_stack_12->SetBinError(29,0.000497905);
   VbbHcc_tags_Z_dR_all_stack_12->SetBinError(30,0.0005747158);
   VbbHcc_tags_Z_dR_all_stack_12->SetBinError(31,0.0003776526);
   VbbHcc_tags_Z_dR_all_stack_12->SetEntries(702);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_tags_Z_dR_all_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_all_stack_12->SetLineColor(ci);
   VbbHcc_tags_Z_dR_all_stack_12->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_all_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_all_stack_12->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_all_stack_12->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_all_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_all_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_all_stack_12->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_all_stack_12->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_all_stack_12->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_all_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_all_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_all_stack_12->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_all_stack_12->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_all_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_all_stack_12,"");
   st->Draw("hist");
   
   TH1D *VbbHcc_tags_Z_dR_all__54 = new TH1D("VbbHcc_tags_Z_dR_all__54","",30,0,6);
   VbbHcc_tags_Z_dR_all__54->SetBinContent(2,16);
   VbbHcc_tags_Z_dR_all__54->SetBinContent(3,25274);
   VbbHcc_tags_Z_dR_all__54->SetBinContent(4,29446);
   VbbHcc_tags_Z_dR_all__54->SetBinContent(5,22452);
   VbbHcc_tags_Z_dR_all__54->SetBinContent(6,20169);
   VbbHcc_tags_Z_dR_all__54->SetBinContent(7,18534);
   VbbHcc_tags_Z_dR_all__54->SetBinContent(8,17916);
   VbbHcc_tags_Z_dR_all__54->SetBinContent(9,17633);
   VbbHcc_tags_Z_dR_all__54->SetBinContent(10,17669);
   VbbHcc_tags_Z_dR_all__54->SetBinContent(11,18456);
   VbbHcc_tags_Z_dR_all__54->SetBinContent(12,19581);
   VbbHcc_tags_Z_dR_all__54->SetBinContent(13,21202);
   VbbHcc_tags_Z_dR_all__54->SetBinContent(14,23022);
   VbbHcc_tags_Z_dR_all__54->SetBinContent(15,25135);
   VbbHcc_tags_Z_dR_all__54->SetBinContent(16,25903);
   VbbHcc_tags_Z_dR_all__54->SetBinContent(17,25096);
   VbbHcc_tags_Z_dR_all__54->SetBinContent(18,23153);
   VbbHcc_tags_Z_dR_all__54->SetBinContent(19,20804);
   VbbHcc_tags_Z_dR_all__54->SetBinContent(20,18155);
   VbbHcc_tags_Z_dR_all__54->SetBinContent(21,15132);
   VbbHcc_tags_Z_dR_all__54->SetBinContent(22,12358);
   VbbHcc_tags_Z_dR_all__54->SetBinContent(23,9809);
   VbbHcc_tags_Z_dR_all__54->SetBinContent(24,8135);
   VbbHcc_tags_Z_dR_all__54->SetBinContent(25,6674);
   VbbHcc_tags_Z_dR_all__54->SetBinContent(26,5541);
   VbbHcc_tags_Z_dR_all__54->SetBinContent(27,4814);
   VbbHcc_tags_Z_dR_all__54->SetBinContent(28,4243);
   VbbHcc_tags_Z_dR_all__54->SetBinContent(29,3930);
   VbbHcc_tags_Z_dR_all__54->SetBinContent(30,2622);
   VbbHcc_tags_Z_dR_all__54->SetBinContent(31,1993);
   VbbHcc_tags_Z_dR_all__54->SetEntries(464896);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_all__54->SetLineColor(ci);
   VbbHcc_tags_Z_dR_all__54->SetLineWidth(2);
   VbbHcc_tags_Z_dR_all__54->SetMarkerStyle(20);
   VbbHcc_tags_Z_dR_all__54->SetMarkerSize(1.2);
   VbbHcc_tags_Z_dR_all__54->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_all__54->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_all__54->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_all__54->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_all__54->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_all__54->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_all__54->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_all__54->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_all__54->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_all__54->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_all__54->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_all__54->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_all__54->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_all__54->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_all__54->Draw("same E");
   
   Double_t Graph_from_VbbHcc_tags_Z_dR_all_fx1039[30] = {
   0.1,
   0.3,
   0.5,
   0.7,
   0.9,
   1.1,
   1.3,
   1.5,
   1.7,
   1.9,
   2.1,
   2.3,
   2.5,
   2.7,
   2.9,
   3.1,
   3.3,
   3.5,
   3.7,
   3.9,
   4.1,
   4.3,
   4.5,
   4.7,
   4.9,
   5.1,
   5.3,
   5.5,
   5.7,
   5.9};
   Double_t Graph_from_VbbHcc_tags_Z_dR_all_fy1039[30] = {
   0,
   0.8249987,
   28909.46,
   32476.79,
   28669.79,
   20939.94,
   21309.09,
   26243.18,
   19167.29,
   20021.11,
   21921.31,
   22114.45,
   26738.05,
   32095.85,
   57898.05,
   50653.88,
   34355.81,
   27931.56,
   28299.04,
   21588.95,
   18391.63,
   12625.98,
   12749.22,
   9685.528,
   7961.623,
   6677.131,
   6229.178,
   5327,
   3444.439,
   2726.203};
   Double_t Graph_from_VbbHcc_tags_Z_dR_all_fex1039[30] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1};
   Double_t Graph_from_VbbHcc_tags_Z_dR_all_fey1039[30] = {
   0,
   0.2321619,
   1880.8,
   2359.971,
   3199.365,
   1618.69,
   2066.355,
   3249.187,
   1702.461,
   1772.225,
   1999.115,
   2042.106,
   2458.507,
   2474.577,
   20800.49,
   16719.27,
   2420.823,
   2295.732,
   2221.658,
   1800.587,
   1928.499,
   1299.371,
   1606.91,
   1370.596,
   1329.76,
   1047.713,
   903.0654,
   908.2236,
   591.9051,
   690.0781};
   TGraphErrors *gre = new TGraphErrors(30,Graph_from_VbbHcc_tags_Z_dR_all_fx1039,Graph_from_VbbHcc_tags_Z_dR_all_fy1039,Graph_from_VbbHcc_tags_Z_dR_all_fex1039,Graph_from_VbbHcc_tags_Z_dR_all_fey1039);
   gre->SetName("Graph_from_VbbHcc_tags_Z_dR_all");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_tags_Z_dR_all1039 = new TH1F("Graph_Graph_from_VbbHcc_tags_Z_dR_all1039","",100,0,6.6);
   Graph_Graph_from_VbbHcc_tags_Z_dR_all1039->SetMinimum(86.56839);
   Graph_Graph_from_VbbHcc_tags_Z_dR_all1039->SetMaximum(86568.39);
   Graph_Graph_from_VbbHcc_tags_Z_dR_all1039->SetDirectory(0);
   Graph_Graph_from_VbbHcc_tags_Z_dR_all1039->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_tags_Z_dR_all1039->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_tags_Z_dR_all1039->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_Z_dR_all1039->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Z_dR_all1039->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Z_dR_all1039->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_tags_Z_dR_all1039->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_Z_dR_all1039->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Z_dR_all1039->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Z_dR_all1039->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_VbbHcc_tags_Z_dR_all1039->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_tags_Z_dR_all1039->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_Z_dR_all1039->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Z_dR_all1039->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Z_dR_all1039->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_tags_Z_dR_all1039);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_tags_Z_dR_all","Data (JetHT)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_all_stack_12","ggZHcc","F");

   ci = TColor::GetColor("#00cc00");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#000099");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_all_stack_11","ZHcc","F");

   ci = TColor::GetColor("#cc0000");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#000099");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_all_stack_10","ggZHbb","F");

   ci = TColor::GetColor("#0000cc");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#000099");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_all_stack_9","ZHbb","F");

   ci = TColor::GetColor("#cccc00");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#000099");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_all_stack_8","ZZ","F");

   ci = TColor::GetColor("#33ff99");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#000099");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_all_stack_7","WZ","F");

   ci = TColor::GetColor("#3399ff");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#000099");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_all_stack_6","WW","F");

   ci = TColor::GetColor("#9933ff");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#000099");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_all_stack_5","W + jets","F");

   ci = TColor::GetColor("#ff99cc");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#000099");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_all_stack_4","Z + jets","F");

   ci = TColor::GetColor("#00cccc");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#000099");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_all_stack_3","t#bar{t}","F");

   ci = TColor::GetColor("#cc00cc");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#000099");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_all_stack_2","Single top","F");

   ci = TColor::GetColor("#660066");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#000099");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_all_stack_1","QCD","F");

   ci = TColor::GetColor("#ff6600");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#000099");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Graph_from_VbbHcc_tags_Z_dR_all","MC unc. (stat.)","fl");

   ci = TColor::GetColor("#333333");
   entry->SetFillColor(ci);
   entry->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 138 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetLineWidth(2);
   tex->Draw();
   topPad->Modified();
   Z_dR_tags_all->cd();
  
// ------------>Primitives in pad: bottomPad
   TPad *bottomPad = new TPad("bottomPad", "bottomPad",0,0,1,0.3);
   bottomPad->Draw();
   bottomPad->cd();
   bottomPad->Range(-0.9193524,-0.2774193,6.314516,1.658065);
   bottomPad->SetFillColor(0);
   bottomPad->SetBorderMode(0);
   bottomPad->SetBorderSize(2);
   bottomPad->SetTickx(1);
   bottomPad->SetTicky(1);
   bottomPad->SetLeftMargin(0.12709);
   bottomPad->SetRightMargin(0.0434783);
   bottomPad->SetTopMargin(0.03);
   bottomPad->SetBottomMargin(0.35);
   bottomPad->SetFrameBorderMode(0);
   bottomPad->SetFrameBorderMode(0);
   
   TH1D *data_mc_ratio__55 = new TH1D("data_mc_ratio__55","",30,0,6);
   data_mc_ratio__55->SetBinContent(2,19.39397);
   data_mc_ratio__55->SetBinContent(3,0.8742468);
   data_mc_ratio__55->SetBinContent(4,0.9066784);
   data_mc_ratio__55->SetBinContent(5,0.7831241);
   data_mc_ratio__55->SetBinContent(6,0.9631831);
   data_mc_ratio__55->SetBinContent(7,0.8697696);
   data_mc_ratio__55->SetBinContent(8,0.6826917);
   data_mc_ratio__55->SetBinContent(9,0.9199525);
   data_mc_ratio__55->SetBinContent(10,0.8825185);
   data_mc_ratio__55->SetBinContent(11,0.8419206);
   data_mc_ratio__55->SetBinContent(12,0.8854391);
   data_mc_ratio__55->SetBinContent(13,0.7929524);
   data_mc_ratio__55->SetBinContent(14,0.7172891);
   data_mc_ratio__55->SetBinContent(15,0.4341252);
   data_mc_ratio__55->SetBinContent(16,0.5113725);
   data_mc_ratio__55->SetBinContent(17,0.7304731);
   data_mc_ratio__55->SetBinContent(18,0.828919);
   data_mc_ratio__55->SetBinContent(19,0.7351485);
   data_mc_ratio__55->SetBinContent(20,0.8409394);
   data_mc_ratio__55->SetBinContent(21,0.8227656);
   data_mc_ratio__55->SetBinContent(22,0.9787756);
   data_mc_ratio__55->SetBinContent(23,0.7693801);
   data_mc_ratio__55->SetBinContent(24,0.8399129);
   data_mc_ratio__55->SetBinContent(25,0.8382713);
   data_mc_ratio__55->SetBinContent(26,0.8298474);
   data_mc_ratio__55->SetBinContent(27,0.7728147);
   data_mc_ratio__55->SetBinContent(28,0.7965083);
   data_mc_ratio__55->SetBinContent(29,1.140969);
   data_mc_ratio__55->SetBinContent(30,0.9617771);
   data_mc_ratio__55->SetBinContent(31,0.9317185);
   data_mc_ratio__55->SetBinError(2,4.848492);
   data_mc_ratio__55->SetBinError(3,0.005499169);
   data_mc_ratio__55->SetBinError(4,0.005283724);
   data_mc_ratio__55->SetBinError(5,0.005226405);
   data_mc_ratio__55->SetBinError(6,0.006782139);
   data_mc_ratio__55->SetBinError(7,0.006388806);
   data_mc_ratio__55->SetBinError(8,0.005100398);
   data_mc_ratio__55->SetBinError(9,0.006927911);
   data_mc_ratio__55->SetBinError(10,0.006639232);
   data_mc_ratio__55->SetBinError(11,0.006197297);
   data_mc_ratio__55->SetBinError(12,0.006327633);
   data_mc_ratio__55->SetBinError(13,0.005445763);
   data_mc_ratio__55->SetBinError(14,0.004727404);
   data_mc_ratio__55->SetBinError(15,0.002738265);
   data_mc_ratio__55->SetBinError(16,0.00317733);
   data_mc_ratio__55->SetBinError(17,0.004611073);
   data_mc_ratio__55->SetBinError(18,0.005447641);
   data_mc_ratio__55->SetBinError(19,0.005096848);
   data_mc_ratio__55->SetBinError(20,0.006241178);
   data_mc_ratio__55->SetBinError(21,0.006688488);
   data_mc_ratio__55->SetBinError(22,0.008804588);
   data_mc_ratio__55->SetBinError(23,0.007768347);
   data_mc_ratio__55->SetBinError(24,0.009312268);
   data_mc_ratio__55->SetBinError(25,0.01026104);
   data_mc_ratio__55->SetBinError(26,0.01114819);
   data_mc_ratio__55->SetBinError(27,0.01113839);
   data_mc_ratio__55->SetBinError(28,0.01222795);
   data_mc_ratio__55->SetBinError(29,0.01820027);
   data_mc_ratio__55->SetBinError(30,0.0187827);
   data_mc_ratio__55->SetBinError(31,0.2194657);
   data_mc_ratio__55->SetMinimum(0.4);
   data_mc_ratio__55->SetMaximum(1.6);
   data_mc_ratio__55->SetEntries(33.43009);
   data_mc_ratio__55->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__55->SetLineColor(ci);
   data_mc_ratio__55->SetLineWidth(2);
   data_mc_ratio__55->SetMarkerStyle(20);
   data_mc_ratio__55->SetMarkerSize(1.2);
   data_mc_ratio__55->GetXaxis()->SetTitle("#DeltaR(b,b)");
   data_mc_ratio__55->GetXaxis()->SetRange(1,30);
   data_mc_ratio__55->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__55->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__55->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__55->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__55->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__55->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__55->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__55->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__55->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__55->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__55->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__55->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__55->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__55->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__55->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__55->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__55->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1040[30] = {
   0.1,
   0.3,
   0.5,
   0.7,
   0.9,
   1.1,
   1.3,
   1.5,
   1.7,
   1.9,
   2.1,
   2.3,
   2.5,
   2.7,
   2.9,
   3.1,
   3.3,
   3.5,
   3.7,
   3.9,
   4.1,
   4.3,
   4.5,
   4.7,
   4.9,
   5.1,
   5.3,
   5.5,
   5.7,
   5.9};
   Double_t Graph_from_mc_statistical_error_fy1040[30] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1};
   Double_t Graph_from_mc_statistical_error_fex1040[30] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1};
   Double_t Graph_from_mc_statistical_error_fey1040[30] = {
   0,
   0.2814088,
   0.0650583,
   0.0726664,
   0.1115936,
   0.07730155,
   0.09697059,
   0.1238107,
   0.08882112,
   0.08851781,
   0.09119506,
   0.0923426,
   0.09194788,
   0.07709959,
   0.3592607,
   0.330069,
   0.07046327,
   0.08219132,
   0.07850648,
   0.08340318,
   0.1048574,
   0.1029125,
   0.1260399,
   0.1415097,
   0.1670212,
   0.1569107,
   0.1449734,
   0.1704944,
   0.1718437,
   0.2531279};
   gre = new TGraphErrors(30,Graph_from_mc_statistical_error_fx1040,Graph_from_mc_statistical_error_fy1040,Graph_from_mc_statistical_error_fex1040,Graph_from_mc_statistical_error_fey1040);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1040 = new TH1F("Graph_Graph_from_mc_statistical_error1040","",100,0,6.6);
   Graph_Graph_from_mc_statistical_error1040->SetMinimum(0.5688872);
   Graph_Graph_from_mc_statistical_error1040->SetMaximum(1.431113);
   Graph_Graph_from_mc_statistical_error1040->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1040->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1040->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1040->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1040->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1040->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1040->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1040->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1040->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1040->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1040->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1040->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1040->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1040->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1040->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1040->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1040);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,6,1);
   line->Draw();
   bottomPad->Modified();
   Z_dR_tags_all->cd();
   Z_dR_tags_all->Modified();
   Z_dR_tags_all->cd();
   Z_dR_tags_all->SetSelected(Z_dR_tags_all);
}
