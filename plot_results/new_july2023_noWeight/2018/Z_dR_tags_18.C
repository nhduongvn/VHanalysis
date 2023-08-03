void Z_dR_tags_18()
{
//=========Macro generated from canvas: Z_dR_tags_18/Z_dR_tags_18
//=========  (Thu Aug  3 12:23:05 2023) by ROOT version 6.14/09
   TCanvas *Z_dR_tags_18 = new TCanvas("Z_dR_tags_18", "Z_dR_tags_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_dR_tags_18->SetHighLightColor(2);
   Z_dR_tags_18->Range(0,0,1,1);
   Z_dR_tags_18->SetFillColor(0);
   Z_dR_tags_18->SetFillStyle(4000);
   Z_dR_tags_18->SetBorderMode(0);
   Z_dR_tags_18->SetBorderSize(2);
   Z_dR_tags_18->SetFrameFillStyle(1000);
   Z_dR_tags_18->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.9193524,-50.20467,6.314516,50164.47);
   topPad->SetFillColor(0);
   topPad->SetBorderMode(0);
   topPad->SetBorderSize(2);
   topPad->SetLeftMargin(0.12709);
   topPad->SetRightMargin(0.0434783);
   topPad->SetBottomMargin(0.001);
   topPad->SetFrameBorderMode(0);
   topPad->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(0.01);
   st->SetMaximum(42993.33);
   
   TH1F *st_stack_19 = new TH1F("st_stack_19","",30,0,6);
   st_stack_19->SetMinimum(0.01);
   st_stack_19->SetMaximum(45143);
   st_stack_19->SetDirectory(0);
   st_stack_19->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_19->SetLineColor(ci);
   st_stack_19->GetXaxis()->SetRange(1,30);
   st_stack_19->GetXaxis()->SetLabelFont(42);
   st_stack_19->GetXaxis()->SetLabelSize(0.035);
   st_stack_19->GetXaxis()->SetTitleSize(0.035);
   st_stack_19->GetXaxis()->SetTitleFont(42);
   st_stack_19->GetYaxis()->SetTitle("Events/0.2");
   st_stack_19->GetYaxis()->SetLabelFont(42);
   st_stack_19->GetYaxis()->SetLabelSize(0.05);
   st_stack_19->GetYaxis()->SetTitleSize(0.057);
   st_stack_19->GetYaxis()->SetTitleOffset(1.2);
   st_stack_19->GetYaxis()->SetTitleFont(42);
   st_stack_19->GetZaxis()->SetLabelFont(42);
   st_stack_19->GetZaxis()->SetLabelSize(0.035);
   st_stack_19->GetZaxis()->SetTitleSize(0.035);
   st_stack_19->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_19);
   
   
   TH1D *VbbHcc_tags_Z_dR_stack_1 = new TH1D("VbbHcc_tags_Z_dR_stack_1","",30,0,6);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(3,11002.68);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(4,12810.8);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(5,11244.94);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(6,7097.564);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(7,7269.016);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(8,10513.95);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(9,8295.368);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(10,8358.932);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(11,5702.073);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(12,9596.533);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(13,7880.691);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(14,12488.49);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(15,13846.19);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(16,11709.22);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(17,13558.15);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(18,10720.42);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(19,12151);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(20,7736.901);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(21,7192.702);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(22,4400.871);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(23,3635.147);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(24,6279.729);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(25,3251.707);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(26,1713.232);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(27,2086.46);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(28,2035.93);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(29,1390.382);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(30,1114.307);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(31,548.0495);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(3,1131.546);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(4,1404.43);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(5,2098.024);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(6,970.2594);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(7,974.2067);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(8,2182.894);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(9,1269.261);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(10,1317.886);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(11,807.0307);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(12,2027.848);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(13,1103.96);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(14,1577.901);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(15,1704.315);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(16,1397.469);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(17,1702.361);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(18,1344.4);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(19,1652.514);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(20,1158.649);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(21,1154.788);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(22,865.2847);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(23,689.472);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(24,1974.822);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(25,847.0717);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(26,545.1632);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(27,552.184);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(28,657.7454);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(29,401.0598);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(30,393.5267);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(31,116.7437);
   VbbHcc_tags_Z_dR_stack_1->SetEntries(10231);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_tags_Z_dR_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_stack_1->SetLineColor(ci);
   VbbHcc_tags_Z_dR_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_stack_1,"");
   
   TH1D *VbbHcc_tags_Z_dR_stack_2 = new TH1D("VbbHcc_tags_Z_dR_stack_2","",30,0,6);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(3,33.40706);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(4,44.88752);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(5,45.40333);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(6,52.79527);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(7,45.27628);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(8,53.51967);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(9,55.31165);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(10,60.37004);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(11,62.14493);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(12,65.60903);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(13,74.85808);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(14,69.41659);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(15,81.72897);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(16,73.35561);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(17,72.30606);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(18,64.07512);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(19,56.16602);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(20,49.3014);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(21,43.45554);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(22,37.1438);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(23,30.72625);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(24,25.45035);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(25,20.92052);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(26,17.91888);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(27,13.78701);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(28,11.08237);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(29,9.009594);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(30,6.353605);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(31,4.201922);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(3,2.308373);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(4,2.717915);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(5,2.78779);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(6,3.030138);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(7,2.712063);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(8,3.019142);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(9,3.018445);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(10,3.345701);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(11,3.199015);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(12,3.348873);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(13,3.594204);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(14,3.345467);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(15,3.76559);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(16,3.455666);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(17,3.487575);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(18,3.265885);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(19,3.016954);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(20,2.790488);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(21,2.68445);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(22,2.495075);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(23,2.259091);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(24,2.105436);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(25,1.789624);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(26,1.810506);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(27,1.554892);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(28,1.393133);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(29,1.211374);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(30,1.09031);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(31,0.8222312);
   VbbHcc_tags_Z_dR_stack_2->SetEntries(14890);

   ci = TColor::GetColor("#660066");
   VbbHcc_tags_Z_dR_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_stack_2->SetLineColor(ci);
   VbbHcc_tags_Z_dR_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_stack_2,"");
   
   TH1D *VbbHcc_tags_Z_dR_stack_3 = new TH1D("VbbHcc_tags_Z_dR_stack_3","",30,0,6);
   VbbHcc_tags_Z_dR_stack_3->SetBinContent(2,0.1842433);
   VbbHcc_tags_Z_dR_stack_3->SetBinContent(3,508.8526);
   VbbHcc_tags_Z_dR_stack_3->SetBinContent(4,799.0445);
   VbbHcc_tags_Z_dR_stack_3->SetBinContent(5,840.8811);
   VbbHcc_tags_Z_dR_stack_3->SetBinContent(6,906.6286);
   VbbHcc_tags_Z_dR_stack_3->SetBinContent(7,945.9008);
   VbbHcc_tags_Z_dR_stack_3->SetBinContent(8,994.6258);
   VbbHcc_tags_Z_dR_stack_3->SetBinContent(9,1028.856);
   VbbHcc_tags_Z_dR_stack_3->SetBinContent(10,1108.543);
   VbbHcc_tags_Z_dR_stack_3->SetBinContent(11,1200.731);
   VbbHcc_tags_Z_dR_stack_3->SetBinContent(12,1284.313);
   VbbHcc_tags_Z_dR_stack_3->SetBinContent(13,1392.7);
   VbbHcc_tags_Z_dR_stack_3->SetBinContent(14,1482.964);
   VbbHcc_tags_Z_dR_stack_3->SetBinContent(15,1578.419);
   VbbHcc_tags_Z_dR_stack_3->SetBinContent(16,1593.525);
   VbbHcc_tags_Z_dR_stack_3->SetBinContent(17,1504.281);
   VbbHcc_tags_Z_dR_stack_3->SetBinContent(18,1389.484);
   VbbHcc_tags_Z_dR_stack_3->SetBinContent(19,1243.351);
   VbbHcc_tags_Z_dR_stack_3->SetBinContent(20,1073.389);
   VbbHcc_tags_Z_dR_stack_3->SetBinContent(21,903.3154);
   VbbHcc_tags_Z_dR_stack_3->SetBinContent(22,753.2298);
   VbbHcc_tags_Z_dR_stack_3->SetBinContent(23,611.9049);
   VbbHcc_tags_Z_dR_stack_3->SetBinContent(24,486.5286);
   VbbHcc_tags_Z_dR_stack_3->SetBinContent(25,383.6904);
   VbbHcc_tags_Z_dR_stack_3->SetBinContent(26,316.2526);
   VbbHcc_tags_Z_dR_stack_3->SetBinContent(27,254.6066);
   VbbHcc_tags_Z_dR_stack_3->SetBinContent(28,191.2356);
   VbbHcc_tags_Z_dR_stack_3->SetBinContent(29,151.4421);
   VbbHcc_tags_Z_dR_stack_3->SetBinContent(30,99.78394);
   VbbHcc_tags_Z_dR_stack_3->SetBinContent(31,91.19084);
   VbbHcc_tags_Z_dR_stack_3->SetBinError(2,0.1078318);
   VbbHcc_tags_Z_dR_stack_3->SetBinError(3,5.561609);
   VbbHcc_tags_Z_dR_stack_3->SetBinError(4,6.999939);
   VbbHcc_tags_Z_dR_stack_3->SetBinError(5,7.197662);
   VbbHcc_tags_Z_dR_stack_3->SetBinError(6,7.477739);
   VbbHcc_tags_Z_dR_stack_3->SetBinError(7,7.629727);
   VbbHcc_tags_Z_dR_stack_3->SetBinError(8,7.82483);
   VbbHcc_tags_Z_dR_stack_3->SetBinError(9,7.957891);
   VbbHcc_tags_Z_dR_stack_3->SetBinError(10,8.248486);
   VbbHcc_tags_Z_dR_stack_3->SetBinError(11,8.58551);
   VbbHcc_tags_Z_dR_stack_3->SetBinError(12,8.8892);
   VbbHcc_tags_Z_dR_stack_3->SetBinError(13,9.260409);
   VbbHcc_tags_Z_dR_stack_3->SetBinError(14,9.577314);
   VbbHcc_tags_Z_dR_stack_3->SetBinError(15,9.887718);
   VbbHcc_tags_Z_dR_stack_3->SetBinError(16,9.938391);
   VbbHcc_tags_Z_dR_stack_3->SetBinError(17,9.663522);
   VbbHcc_tags_Z_dR_stack_3->SetBinError(18,9.294164);
   VbbHcc_tags_Z_dR_stack_3->SetBinError(19,8.794607);
   VbbHcc_tags_Z_dR_stack_3->SetBinError(20,8.159981);
   VbbHcc_tags_Z_dR_stack_3->SetBinError(21,7.48397);
   VbbHcc_tags_Z_dR_stack_3->SetBinError(22,6.825101);
   VbbHcc_tags_Z_dR_stack_3->SetBinError(23,6.143176);
   VbbHcc_tags_Z_dR_stack_3->SetBinError(24,5.468129);
   VbbHcc_tags_Z_dR_stack_3->SetBinError(25,4.852996);
   VbbHcc_tags_Z_dR_stack_3->SetBinError(26,4.406983);
   VbbHcc_tags_Z_dR_stack_3->SetBinError(27,3.953892);
   VbbHcc_tags_Z_dR_stack_3->SetBinError(28,3.42221);
   VbbHcc_tags_Z_dR_stack_3->SetBinError(29,3.035334);
   VbbHcc_tags_Z_dR_stack_3->SetBinError(30,2.469678);
   VbbHcc_tags_Z_dR_stack_3->SetBinError(31,2.353726);
   VbbHcc_tags_Z_dR_stack_3->SetEntries(421807);

   ci = TColor::GetColor("#cc00cc");
   VbbHcc_tags_Z_dR_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_stack_3->SetLineColor(ci);
   VbbHcc_tags_Z_dR_stack_3->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_3->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_3->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_3->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_3->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_3->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_3->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_3->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_stack_3,"");
   
   TH1D *VbbHcc_tags_Z_dR_stack_4 = new TH1D("VbbHcc_tags_Z_dR_stack_4","",30,0,6);
   VbbHcc_tags_Z_dR_stack_4->SetBinContent(3,130.3986);
   VbbHcc_tags_Z_dR_stack_4->SetBinContent(4,232.2441);
   VbbHcc_tags_Z_dR_stack_4->SetBinContent(5,198.6755);
   VbbHcc_tags_Z_dR_stack_4->SetBinContent(6,178.0443);
   VbbHcc_tags_Z_dR_stack_4->SetBinContent(7,146.9534);
   VbbHcc_tags_Z_dR_stack_4->SetBinContent(8,115.2732);
   VbbHcc_tags_Z_dR_stack_4->SetBinContent(9,116.0446);
   VbbHcc_tags_Z_dR_stack_4->SetBinContent(10,104.7364);
   VbbHcc_tags_Z_dR_stack_4->SetBinContent(11,110.4354);
   VbbHcc_tags_Z_dR_stack_4->SetBinContent(12,130.238);
   VbbHcc_tags_Z_dR_stack_4->SetBinContent(13,137.0737);
   VbbHcc_tags_Z_dR_stack_4->SetBinContent(14,177.9609);
   VbbHcc_tags_Z_dR_stack_4->SetBinContent(15,197.8217);
   VbbHcc_tags_Z_dR_stack_4->SetBinContent(16,180.0149);
   VbbHcc_tags_Z_dR_stack_4->SetBinContent(17,179.3077);
   VbbHcc_tags_Z_dR_stack_4->SetBinContent(18,165.6202);
   VbbHcc_tags_Z_dR_stack_4->SetBinContent(19,140.492);
   VbbHcc_tags_Z_dR_stack_4->SetBinContent(20,136.9165);
   VbbHcc_tags_Z_dR_stack_4->SetBinContent(21,98.99626);
   VbbHcc_tags_Z_dR_stack_4->SetBinContent(22,84.60333);
   VbbHcc_tags_Z_dR_stack_4->SetBinContent(23,58.54056);
   VbbHcc_tags_Z_dR_stack_4->SetBinContent(24,49.25434);
   VbbHcc_tags_Z_dR_stack_4->SetBinContent(25,50.8942);
   VbbHcc_tags_Z_dR_stack_4->SetBinContent(26,49.53199);
   VbbHcc_tags_Z_dR_stack_4->SetBinContent(27,30.71657);
   VbbHcc_tags_Z_dR_stack_4->SetBinContent(28,27.96367);
   VbbHcc_tags_Z_dR_stack_4->SetBinContent(29,30.70881);
   VbbHcc_tags_Z_dR_stack_4->SetBinContent(30,14.23032);
   VbbHcc_tags_Z_dR_stack_4->SetBinContent(31,11.88829);
   VbbHcc_tags_Z_dR_stack_4->SetBinError(3,4.58985);
   VbbHcc_tags_Z_dR_stack_4->SetBinError(4,8.439396);
   VbbHcc_tags_Z_dR_stack_4->SetBinError(5,8.493762);
   VbbHcc_tags_Z_dR_stack_4->SetBinError(6,11.22229);
   VbbHcc_tags_Z_dR_stack_4->SetBinError(7,9.366535);
   VbbHcc_tags_Z_dR_stack_4->SetBinError(8,5.875411);
   VbbHcc_tags_Z_dR_stack_4->SetBinError(9,7.964473);
   VbbHcc_tags_Z_dR_stack_4->SetBinError(10,6.677693);
   VbbHcc_tags_Z_dR_stack_4->SetBinError(11,5.561329);
   VbbHcc_tags_Z_dR_stack_4->SetBinError(12,7.34114);
   VbbHcc_tags_Z_dR_stack_4->SetBinError(13,9.173192);
   VbbHcc_tags_Z_dR_stack_4->SetBinError(14,9.930363);
   VbbHcc_tags_Z_dR_stack_4->SetBinError(15,11.64953);
   VbbHcc_tags_Z_dR_stack_4->SetBinError(16,9.850623);
   VbbHcc_tags_Z_dR_stack_4->SetBinError(17,11.20282);
   VbbHcc_tags_Z_dR_stack_4->SetBinError(18,10.34608);
   VbbHcc_tags_Z_dR_stack_4->SetBinError(19,8.40618);
   VbbHcc_tags_Z_dR_stack_4->SetBinError(20,7.522586);
   VbbHcc_tags_Z_dR_stack_4->SetBinError(21,6.679046);
   VbbHcc_tags_Z_dR_stack_4->SetBinError(22,5.131179);
   VbbHcc_tags_Z_dR_stack_4->SetBinError(23,4.259092);
   VbbHcc_tags_Z_dR_stack_4->SetBinError(24,5.395192);
   VbbHcc_tags_Z_dR_stack_4->SetBinError(25,5.547293);
   VbbHcc_tags_Z_dR_stack_4->SetBinError(26,6.736486);
   VbbHcc_tags_Z_dR_stack_4->SetBinError(27,2.962174);
   VbbHcc_tags_Z_dR_stack_4->SetBinError(28,2.775015);
   VbbHcc_tags_Z_dR_stack_4->SetBinError(29,4.806057);
   VbbHcc_tags_Z_dR_stack_4->SetBinError(30,1.687783);
   VbbHcc_tags_Z_dR_stack_4->SetBinError(31,1.668631);
   VbbHcc_tags_Z_dR_stack_4->SetEntries(18660);

   ci = TColor::GetColor("#00cccc");
   VbbHcc_tags_Z_dR_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_stack_4->SetLineColor(ci);
   VbbHcc_tags_Z_dR_stack_4->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_4->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_4->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_4->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_4->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_4->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_4->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_4->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_stack_4,"");
   
   TH1D *VbbHcc_tags_Z_dR_stack_5 = new TH1D("VbbHcc_tags_Z_dR_stack_5","",30,0,6);
   VbbHcc_tags_Z_dR_stack_5->SetBinContent(3,27.68777);
   VbbHcc_tags_Z_dR_stack_5->SetBinContent(4,33.52675);
   VbbHcc_tags_Z_dR_stack_5->SetBinContent(5,27.16624);
   VbbHcc_tags_Z_dR_stack_5->SetBinContent(6,11.68266);
   VbbHcc_tags_Z_dR_stack_5->SetBinContent(7,8.543413);
   VbbHcc_tags_Z_dR_stack_5->SetBinContent(8,19.27836);
   VbbHcc_tags_Z_dR_stack_5->SetBinContent(9,8.902708);
   VbbHcc_tags_Z_dR_stack_5->SetBinContent(10,7.36806);
   VbbHcc_tags_Z_dR_stack_5->SetBinContent(11,13.95618);
   VbbHcc_tags_Z_dR_stack_5->SetBinContent(12,14.30505);
   VbbHcc_tags_Z_dR_stack_5->SetBinContent(13,7.920591);
   VbbHcc_tags_Z_dR_stack_5->SetBinContent(14,13.59202);
   VbbHcc_tags_Z_dR_stack_5->SetBinContent(15,12.34116);
   VbbHcc_tags_Z_dR_stack_5->SetBinContent(16,17.84327);
   VbbHcc_tags_Z_dR_stack_5->SetBinContent(17,11.31705);
   VbbHcc_tags_Z_dR_stack_5->SetBinContent(18,12.59543);
   VbbHcc_tags_Z_dR_stack_5->SetBinContent(19,7.633113);
   VbbHcc_tags_Z_dR_stack_5->SetBinContent(20,10.01342);
   VbbHcc_tags_Z_dR_stack_5->SetBinContent(21,9.379415);
   VbbHcc_tags_Z_dR_stack_5->SetBinContent(22,9.3713);
   VbbHcc_tags_Z_dR_stack_5->SetBinContent(23,7.93558);
   VbbHcc_tags_Z_dR_stack_5->SetBinContent(24,5.019866);
   VbbHcc_tags_Z_dR_stack_5->SetBinContent(25,5.102564);
   VbbHcc_tags_Z_dR_stack_5->SetBinContent(26,9.855256);
   VbbHcc_tags_Z_dR_stack_5->SetBinContent(27,1.541146);
   VbbHcc_tags_Z_dR_stack_5->SetBinContent(28,3.153239);
   VbbHcc_tags_Z_dR_stack_5->SetBinContent(29,2.547899);
   VbbHcc_tags_Z_dR_stack_5->SetBinContent(30,2.069331);
   VbbHcc_tags_Z_dR_stack_5->SetBinContent(31,1.46933);
   VbbHcc_tags_Z_dR_stack_5->SetBinError(3,3.662851);
   VbbHcc_tags_Z_dR_stack_5->SetBinError(4,5.44508);
   VbbHcc_tags_Z_dR_stack_5->SetBinError(5,11.01131);
   VbbHcc_tags_Z_dR_stack_5->SetBinError(6,1.424494);
   VbbHcc_tags_Z_dR_stack_5->SetBinError(7,1.182761);
   VbbHcc_tags_Z_dR_stack_5->SetBinError(8,4.388406);
   VbbHcc_tags_Z_dR_stack_5->SetBinError(9,2.351347);
   VbbHcc_tags_Z_dR_stack_5->SetBinError(10,1.141193);
   VbbHcc_tags_Z_dR_stack_5->SetBinError(11,3.249628);
   VbbHcc_tags_Z_dR_stack_5->SetBinError(12,3.296218);
   VbbHcc_tags_Z_dR_stack_5->SetBinError(13,1.087891);
   VbbHcc_tags_Z_dR_stack_5->SetBinError(14,3.810967);
   VbbHcc_tags_Z_dR_stack_5->SetBinError(15,2.493049);
   VbbHcc_tags_Z_dR_stack_5->SetBinError(16,4.162884);
   VbbHcc_tags_Z_dR_stack_5->SetBinError(17,2.531386);
   VbbHcc_tags_Z_dR_stack_5->SetBinError(18,2.536453);
   VbbHcc_tags_Z_dR_stack_5->SetBinError(19,2.290697);
   VbbHcc_tags_Z_dR_stack_5->SetBinError(20,2.463238);
   VbbHcc_tags_Z_dR_stack_5->SetBinError(21,2.390327);
   VbbHcc_tags_Z_dR_stack_5->SetBinError(22,3.119498);
   VbbHcc_tags_Z_dR_stack_5->SetBinError(23,3.078029);
   VbbHcc_tags_Z_dR_stack_5->SetBinError(24,1.038437);
   VbbHcc_tags_Z_dR_stack_5->SetBinError(25,2.227751);
   VbbHcc_tags_Z_dR_stack_5->SetBinError(26,3.697688);
   VbbHcc_tags_Z_dR_stack_5->SetBinError(27,0.4649265);
   VbbHcc_tags_Z_dR_stack_5->SetBinError(28,0.8100725);
   VbbHcc_tags_Z_dR_stack_5->SetBinError(29,0.8034727);
   VbbHcc_tags_Z_dR_stack_5->SetBinError(30,0.6718904);
   VbbHcc_tags_Z_dR_stack_5->SetBinError(31,0.5652773);
   VbbHcc_tags_Z_dR_stack_5->SetEntries(2359);

   ci = TColor::GetColor("#ff99cc");
   VbbHcc_tags_Z_dR_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_stack_5->SetLineColor(ci);
   VbbHcc_tags_Z_dR_stack_5->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_5->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_5->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_5->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_5->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_5->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_5->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_5->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_stack_5,"");
   
   TH1D *VbbHcc_tags_Z_dR_stack_6 = new TH1D("VbbHcc_tags_Z_dR_stack_6","",30,0,6);
   VbbHcc_tags_Z_dR_stack_6->SetBinContent(4,0.4520427);
   VbbHcc_tags_Z_dR_stack_6->SetBinContent(9,0.4520427);
   VbbHcc_tags_Z_dR_stack_6->SetBinContent(10,0.4520427);
   VbbHcc_tags_Z_dR_stack_6->SetBinContent(20,0.4520427);
   VbbHcc_tags_Z_dR_stack_6->SetBinError(4,0.4520427);
   VbbHcc_tags_Z_dR_stack_6->SetBinError(9,0.4520427);
   VbbHcc_tags_Z_dR_stack_6->SetBinError(10,0.4520427);
   VbbHcc_tags_Z_dR_stack_6->SetBinError(20,0.4520427);
   VbbHcc_tags_Z_dR_stack_6->SetEntries(4);

   ci = TColor::GetColor("#9933ff");
   VbbHcc_tags_Z_dR_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_stack_6->SetLineColor(ci);
   VbbHcc_tags_Z_dR_stack_6->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_stack_6,"");
   
   TH1D *VbbHcc_tags_Z_dR_stack_7 = new TH1D("VbbHcc_tags_Z_dR_stack_7","",30,0,6);
   VbbHcc_tags_Z_dR_stack_7->SetBinContent(3,1.062597);
   VbbHcc_tags_Z_dR_stack_7->SetBinContent(4,2.479394);
   VbbHcc_tags_Z_dR_stack_7->SetBinContent(5,1.416796);
   VbbHcc_tags_Z_dR_stack_7->SetBinContent(6,0.7083982);
   VbbHcc_tags_Z_dR_stack_7->SetBinContent(7,0.3541991);
   VbbHcc_tags_Z_dR_stack_7->SetBinContent(9,0.7083982);
   VbbHcc_tags_Z_dR_stack_7->SetBinContent(12,0.7083982);
   VbbHcc_tags_Z_dR_stack_7->SetBinContent(13,0.7083982);
   VbbHcc_tags_Z_dR_stack_7->SetBinContent(14,1.062597);
   VbbHcc_tags_Z_dR_stack_7->SetBinContent(15,0.3541991);
   VbbHcc_tags_Z_dR_stack_7->SetBinContent(17,0.7083982);
   VbbHcc_tags_Z_dR_stack_7->SetBinContent(26,0.3541991);
   VbbHcc_tags_Z_dR_stack_7->SetBinContent(27,0.3541991);
   VbbHcc_tags_Z_dR_stack_7->SetBinContent(28,0.3541991);
   VbbHcc_tags_Z_dR_stack_7->SetBinError(3,0.6134909);
   VbbHcc_tags_Z_dR_stack_7->SetBinError(4,0.9371228);
   VbbHcc_tags_Z_dR_stack_7->SetBinError(5,0.7083982);
   VbbHcc_tags_Z_dR_stack_7->SetBinError(6,0.5009132);
   VbbHcc_tags_Z_dR_stack_7->SetBinError(7,0.3541991);
   VbbHcc_tags_Z_dR_stack_7->SetBinError(9,0.5009132);
   VbbHcc_tags_Z_dR_stack_7->SetBinError(12,0.5009132);
   VbbHcc_tags_Z_dR_stack_7->SetBinError(13,0.5009132);
   VbbHcc_tags_Z_dR_stack_7->SetBinError(14,0.6134909);
   VbbHcc_tags_Z_dR_stack_7->SetBinError(15,0.3541991);
   VbbHcc_tags_Z_dR_stack_7->SetBinError(17,0.5009132);
   VbbHcc_tags_Z_dR_stack_7->SetBinError(26,0.3541991);
   VbbHcc_tags_Z_dR_stack_7->SetBinError(27,0.3541991);
   VbbHcc_tags_Z_dR_stack_7->SetBinError(28,0.3541991);
   VbbHcc_tags_Z_dR_stack_7->SetEntries(32);

   ci = TColor::GetColor("#3399ff");
   VbbHcc_tags_Z_dR_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_stack_7->SetLineColor(ci);
   VbbHcc_tags_Z_dR_stack_7->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_stack_7,"");
   
   TH1D *VbbHcc_tags_Z_dR_stack_8 = new TH1D("VbbHcc_tags_Z_dR_stack_8","",30,0,6);
   VbbHcc_tags_Z_dR_stack_8->SetBinContent(3,2.794144);
   VbbHcc_tags_Z_dR_stack_8->SetBinContent(4,3.632387);
   VbbHcc_tags_Z_dR_stack_8->SetBinContent(5,7.544187);
   VbbHcc_tags_Z_dR_stack_8->SetBinContent(6,1.9559);
   VbbHcc_tags_Z_dR_stack_8->SetBinContent(7,2.514729);
   VbbHcc_tags_Z_dR_stack_8->SetBinContent(8,1.397072);
   VbbHcc_tags_Z_dR_stack_8->SetBinContent(9,1.676486);
   VbbHcc_tags_Z_dR_stack_8->SetBinContent(10,0.8382431);
   VbbHcc_tags_Z_dR_stack_8->SetBinContent(11,1.397072);
   VbbHcc_tags_Z_dR_stack_8->SetBinContent(12,1.117657);
   VbbHcc_tags_Z_dR_stack_8->SetBinContent(13,2.794144);
   VbbHcc_tags_Z_dR_stack_8->SetBinContent(14,5.029458);
   VbbHcc_tags_Z_dR_stack_8->SetBinContent(15,6.147116);
   VbbHcc_tags_Z_dR_stack_8->SetBinContent(16,5.029458);
   VbbHcc_tags_Z_dR_stack_8->SetBinContent(17,5.308873);
   VbbHcc_tags_Z_dR_stack_8->SetBinContent(18,3.352972);
   VbbHcc_tags_Z_dR_stack_8->SetBinContent(19,3.352972);
   VbbHcc_tags_Z_dR_stack_8->SetBinContent(20,1.676486);
   VbbHcc_tags_Z_dR_stack_8->SetBinContent(21,1.397072);
   VbbHcc_tags_Z_dR_stack_8->SetBinContent(22,1.397072);
   VbbHcc_tags_Z_dR_stack_8->SetBinContent(23,1.397072);
   VbbHcc_tags_Z_dR_stack_8->SetBinContent(25,0.2794144);
   VbbHcc_tags_Z_dR_stack_8->SetBinContent(26,0.8382431);
   VbbHcc_tags_Z_dR_stack_8->SetBinContent(27,0.2794144);
   VbbHcc_tags_Z_dR_stack_8->SetBinContent(28,0.2794144);
   VbbHcc_tags_Z_dR_stack_8->SetBinContent(29,0.5588287);
   VbbHcc_tags_Z_dR_stack_8->SetBinContent(30,0.2794144);
   VbbHcc_tags_Z_dR_stack_8->SetBinError(3,0.8835858);
   VbbHcc_tags_Z_dR_stack_8->SetBinError(4,1.007443);
   VbbHcc_tags_Z_dR_stack_8->SetBinError(5,1.45188);
   VbbHcc_tags_Z_dR_stack_8->SetBinError(6,0.7392609);
   VbbHcc_tags_Z_dR_stack_8->SetBinError(7,0.8382431);
   VbbHcc_tags_Z_dR_stack_8->SetBinError(8,0.6247895);
   VbbHcc_tags_Z_dR_stack_8->SetBinError(9,0.6844226);
   VbbHcc_tags_Z_dR_stack_8->SetBinError(10,0.4839599);
   VbbHcc_tags_Z_dR_stack_8->SetBinError(11,0.6247895);
   VbbHcc_tags_Z_dR_stack_8->SetBinError(12,0.5588287);
   VbbHcc_tags_Z_dR_stack_8->SetBinError(13,0.8835858);
   VbbHcc_tags_Z_dR_stack_8->SetBinError(14,1.185455);
   VbbHcc_tags_Z_dR_stack_8->SetBinError(15,1.310569);
   VbbHcc_tags_Z_dR_stack_8->SetBinError(16,1.185455);
   VbbHcc_tags_Z_dR_stack_8->SetBinError(17,1.217939);
   VbbHcc_tags_Z_dR_stack_8->SetBinError(18,0.9679197);
   VbbHcc_tags_Z_dR_stack_8->SetBinError(19,0.9679197);
   VbbHcc_tags_Z_dR_stack_8->SetBinError(20,0.6844226);
   VbbHcc_tags_Z_dR_stack_8->SetBinError(21,0.6247895);
   VbbHcc_tags_Z_dR_stack_8->SetBinError(22,0.6247895);
   VbbHcc_tags_Z_dR_stack_8->SetBinError(23,0.6247895);
   VbbHcc_tags_Z_dR_stack_8->SetBinError(25,0.2794144);
   VbbHcc_tags_Z_dR_stack_8->SetBinError(26,0.4839599);
   VbbHcc_tags_Z_dR_stack_8->SetBinError(27,0.2794144);
   VbbHcc_tags_Z_dR_stack_8->SetBinError(28,0.2794144);
   VbbHcc_tags_Z_dR_stack_8->SetBinError(29,0.3951516);
   VbbHcc_tags_Z_dR_stack_8->SetBinError(30,0.2794144);
   VbbHcc_tags_Z_dR_stack_8->SetEntries(230);

   ci = TColor::GetColor("#33ff99");
   VbbHcc_tags_Z_dR_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_stack_8->SetLineColor(ci);
   VbbHcc_tags_Z_dR_stack_8->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_stack_8,"");
   
   TH1D *VbbHcc_tags_Z_dR_stack_9 = new TH1D("VbbHcc_tags_Z_dR_stack_9","",30,0,6);
   VbbHcc_tags_Z_dR_stack_9->SetBinContent(3,2.509785);
   VbbHcc_tags_Z_dR_stack_9->SetBinContent(4,4.797849);
   VbbHcc_tags_Z_dR_stack_9->SetBinContent(5,4.763563);
   VbbHcc_tags_Z_dR_stack_9->SetBinContent(6,3.744105);
   VbbHcc_tags_Z_dR_stack_9->SetBinContent(7,2.418354);
   VbbHcc_tags_Z_dR_stack_9->SetBinContent(8,1.478899);
   VbbHcc_tags_Z_dR_stack_9->SetBinContent(9,1.222892);
   VbbHcc_tags_Z_dR_stack_9->SetBinContent(10,1.291465);
   VbbHcc_tags_Z_dR_stack_9->SetBinContent(11,1.61376);
   VbbHcc_tags_Z_dR_stack_9->SetBinContent(12,2.004628);
   VbbHcc_tags_Z_dR_stack_9->SetBinContent(13,2.838937);
   VbbHcc_tags_Z_dR_stack_9->SetBinContent(14,3.90411);
   VbbHcc_tags_Z_dR_stack_9->SetBinContent(15,4.304121);
   VbbHcc_tags_Z_dR_stack_9->SetBinContent(16,4.914424);
   VbbHcc_tags_Z_dR_stack_9->SetBinContent(17,4.681275);
   VbbHcc_tags_Z_dR_stack_9->SetBinContent(18,3.92011);
   VbbHcc_tags_Z_dR_stack_9->SetBinContent(19,3.28695);
   VbbHcc_tags_Z_dR_stack_9->SetBinContent(20,2.224063);
   VbbHcc_tags_Z_dR_stack_9->SetBinContent(21,1.42404);
   VbbHcc_tags_Z_dR_stack_9->SetBinContent(22,0.9943137);
   VbbHcc_tags_Z_dR_stack_9->SetBinContent(23,0.7177345);
   VbbHcc_tags_Z_dR_stack_9->SetBinContent(24,0.4411553);
   VbbHcc_tags_Z_dR_stack_9->SetBinContent(25,0.3794393);
   VbbHcc_tags_Z_dR_stack_9->SetBinContent(26,0.4640131);
   VbbHcc_tags_Z_dR_stack_9->SetBinContent(27,0.4982997);
   VbbHcc_tags_Z_dR_stack_9->SetBinContent(28,0.5805878);
   VbbHcc_tags_Z_dR_stack_9->SetBinContent(29,0.4640131);
   VbbHcc_tags_Z_dR_stack_9->SetBinContent(30,0.2857223);
   VbbHcc_tags_Z_dR_stack_9->SetBinContent(31,0.1280036);
   VbbHcc_tags_Z_dR_stack_9->SetBinError(3,0.07574175);
   VbbHcc_tags_Z_dR_stack_9->SetBinError(4,0.1047226);
   VbbHcc_tags_Z_dR_stack_9->SetBinError(5,0.1043477);
   VbbHcc_tags_Z_dR_stack_9->SetBinError(6,0.09251052);
   VbbHcc_tags_Z_dR_stack_9->SetBinError(7,0.07434932);
   VbbHcc_tags_Z_dR_stack_9->SetBinError(8,0.05814151);
   VbbHcc_tags_Z_dR_stack_9->SetBinError(9,0.05287021);
   VbbHcc_tags_Z_dR_stack_9->SetBinError(10,0.05433234);
   VbbHcc_tags_Z_dR_stack_9->SetBinError(11,0.06073465);
   VbbHcc_tags_Z_dR_stack_9->SetBinError(12,0.06769147);
   VbbHcc_tags_Z_dR_stack_9->SetBinError(13,0.08055546);
   VbbHcc_tags_Z_dR_stack_9->SetBinError(14,0.09446656);
   VbbHcc_tags_Z_dR_stack_9->SetBinError(15,0.09918805);
   VbbHcc_tags_Z_dR_stack_9->SetBinError(16,0.1059872);
   VbbHcc_tags_Z_dR_stack_9->SetBinError(17,0.1034425);
   VbbHcc_tags_Z_dR_stack_9->SetBinError(18,0.09465994);
   VbbHcc_tags_Z_dR_stack_9->SetBinError(19,0.08667894);
   VbbHcc_tags_Z_dR_stack_9->SetBinError(20,0.07130017);
   VbbHcc_tags_Z_dR_stack_9->SetBinError(21,0.05705296);
   VbbHcc_tags_Z_dR_stack_9->SetBinError(22,0.04767369);
   VbbHcc_tags_Z_dR_stack_9->SetBinError(23,0.0405041);
   VbbHcc_tags_Z_dR_stack_9->SetBinError(24,0.03175505);
   VbbHcc_tags_Z_dR_stack_9->SetBinError(25,0.0294502);
   VbbHcc_tags_Z_dR_stack_9->SetBinError(26,0.03256733);
   VbbHcc_tags_Z_dR_stack_9->SetBinError(27,0.03374912);
   VbbHcc_tags_Z_dR_stack_9->SetBinError(28,0.03642932);
   VbbHcc_tags_Z_dR_stack_9->SetBinError(29,0.03256733);
   VbbHcc_tags_Z_dR_stack_9->SetBinError(30,0.02555578);
   VbbHcc_tags_Z_dR_stack_9->SetBinError(31,0.0171052);
   VbbHcc_tags_Z_dR_stack_9->SetEntries(27254);

   ci = TColor::GetColor("#cccc00");
   VbbHcc_tags_Z_dR_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_stack_9->SetLineColor(ci);
   VbbHcc_tags_Z_dR_stack_9->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_9->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_9->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_9->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_9->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_9->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_9->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_9->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_stack_9,"");
   
   TH1D *VbbHcc_tags_Z_dR_stack_10 = new TH1D("VbbHcc_tags_Z_dR_stack_10","",30,0,6);
   VbbHcc_tags_Z_dR_stack_10->SetBinContent(3,0.8548714);
   VbbHcc_tags_Z_dR_stack_10->SetBinContent(4,1.828376);
   VbbHcc_tags_Z_dR_stack_10->SetBinContent(5,2.173543);
   VbbHcc_tags_Z_dR_stack_10->SetBinContent(6,2.06743);
   VbbHcc_tags_Z_dR_stack_10->SetBinContent(7,1.683512);
   VbbHcc_tags_Z_dR_stack_10->SetBinContent(8,1.2215);
   VbbHcc_tags_Z_dR_stack_10->SetBinContent(9,0.9997346);
   VbbHcc_tags_Z_dR_stack_10->SetBinContent(10,0.9389278);
   VbbHcc_tags_Z_dR_stack_10->SetBinContent(11,0.9830425);
   VbbHcc_tags_Z_dR_stack_10->SetBinContent(12,1.226866);
   VbbHcc_tags_Z_dR_stack_10->SetBinContent(13,1.388421);
   VbbHcc_tags_Z_dR_stack_10->SetBinContent(14,1.554745);
   VbbHcc_tags_Z_dR_stack_10->SetBinContent(15,1.637013);
   VbbHcc_tags_Z_dR_stack_10->SetBinContent(16,1.750281);
   VbbHcc_tags_Z_dR_stack_10->SetBinContent(17,1.641186);
   VbbHcc_tags_Z_dR_stack_10->SetBinContent(18,1.459362);
   VbbHcc_tags_Z_dR_stack_10->SetBinContent(19,1.208981);
   VbbHcc_tags_Z_dR_stack_10->SetBinContent(20,0.9776772);
   VbbHcc_tags_Z_dR_stack_10->SetBinContent(21,0.762469);
   VbbHcc_tags_Z_dR_stack_10->SetBinContent(22,0.5627605);
   VbbHcc_tags_Z_dR_stack_10->SetBinContent(23,0.4345894);
   VbbHcc_tags_Z_dR_stack_10->SetBinContent(24,0.3553022);
   VbbHcc_tags_Z_dR_stack_10->SetBinContent(25,0.3028415);
   VbbHcc_tags_Z_dR_stack_10->SetBinContent(26,0.3022453);
   VbbHcc_tags_Z_dR_stack_10->SetBinContent(27,0.3105914);
   VbbHcc_tags_Z_dR_stack_10->SetBinContent(28,0.2545538);
   VbbHcc_tags_Z_dR_stack_10->SetBinContent(29,0.1907663);
   VbbHcc_tags_Z_dR_stack_10->SetBinContent(30,0.1239981);
   VbbHcc_tags_Z_dR_stack_10->SetBinContent(31,0.06915278);
   VbbHcc_tags_Z_dR_stack_10->SetBinError(3,0.02257492);
   VbbHcc_tags_Z_dR_stack_10->SetBinError(4,0.03301479);
   VbbHcc_tags_Z_dR_stack_10->SetBinError(5,0.03599648);
   VbbHcc_tags_Z_dR_stack_10->SetBinError(6,0.0351068);
   VbbHcc_tags_Z_dR_stack_10->SetBinError(7,0.03167991);
   VbbHcc_tags_Z_dR_stack_10->SetBinError(8,0.02698501);
   VbbHcc_tags_Z_dR_stack_10->SetBinError(9,0.02441283);
   VbbHcc_tags_Z_dR_stack_10->SetBinError(10,0.02365876);
   VbbHcc_tags_Z_dR_stack_10->SetBinError(11,0.02420817);
   VbbHcc_tags_Z_dR_stack_10->SetBinError(12,0.02704421);
   VbbHcc_tags_Z_dR_stack_10->SetBinError(13,0.02876977);
   VbbHcc_tags_Z_dR_stack_10->SetBinError(14,0.03044426);
   VbbHcc_tags_Z_dR_stack_10->SetBinError(15,0.03123934);
   VbbHcc_tags_Z_dR_stack_10->SetBinError(16,0.03230202);
   VbbHcc_tags_Z_dR_stack_10->SetBinError(17,0.03127914);
   VbbHcc_tags_Z_dR_stack_10->SetBinError(18,0.02949561);
   VbbHcc_tags_Z_dR_stack_10->SetBinError(19,0.02684637);
   VbbHcc_tags_Z_dR_stack_10->SetBinError(20,0.02414202);
   VbbHcc_tags_Z_dR_stack_10->SetBinError(21,0.02131999);
   VbbHcc_tags_Z_dR_stack_10->SetBinError(22,0.0183163);
   VbbHcc_tags_Z_dR_stack_10->SetBinError(23,0.01609591);
   VbbHcc_tags_Z_dR_stack_10->SetBinError(24,0.01455375);
   VbbHcc_tags_Z_dR_stack_10->SetBinError(25,0.01343642);
   VbbHcc_tags_Z_dR_stack_10->SetBinError(26,0.01342319);
   VbbHcc_tags_Z_dR_stack_10->SetBinError(27,0.01360725);
   VbbHcc_tags_Z_dR_stack_10->SetBinError(28,0.01231872);
   VbbHcc_tags_Z_dR_stack_10->SetBinError(29,0.01066416);
   VbbHcc_tags_Z_dR_stack_10->SetBinError(30,0.00859772);
   VbbHcc_tags_Z_dR_stack_10->SetBinError(31,0.006420674);
   VbbHcc_tags_Z_dR_stack_10->SetEntries(49090);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_tags_Z_dR_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_stack_10->SetLineColor(ci);
   VbbHcc_tags_Z_dR_stack_10->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_10->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_10->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_10->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_10->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_10->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_10->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_10->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_stack_10,"");
   
   TH1D *VbbHcc_tags_Z_dR_stack_11 = new TH1D("VbbHcc_tags_Z_dR_stack_11","",30,0,6);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(3,0.02730914);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(4,0.0295849);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(5,0.02275762);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(6,0.01137881);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(7,0.006827286);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(8,0.004551524);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(9,0.002275762);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(11,0.004551524);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(12,0.004551524);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(13,0.002275762);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(14,0.01137881);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(15,0.006827286);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(16,0.004551524);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(17,0.004551524);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(18,0.002275762);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(19,0.009103048);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(20,0.006827286);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(22,0.002275762);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(23,0.006827286);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(27,0.002275762);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(29,0.002275762);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(3,0.00788347);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(4,0.008205376);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(5,0.007196591);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(6,0.005088758);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(7,0.003941735);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(8,0.003218413);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(9,0.002275762);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(11,0.003218413);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(12,0.003218413);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(13,0.002275762);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(14,0.005088758);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(15,0.003941735);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(16,0.003218413);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(17,0.003218413);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(18,0.002275762);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(19,0.004551524);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(20,0.003941735);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(22,0.002275762);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(23,0.003941735);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(27,0.002275762);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(29,0.002275762);
   VbbHcc_tags_Z_dR_stack_11->SetEntries(77);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_tags_Z_dR_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_stack_11->SetLineColor(ci);
   VbbHcc_tags_Z_dR_stack_11->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_stack_11,"");
   
   TH1D *VbbHcc_tags_Z_dR_stack_12 = new TH1D("VbbHcc_tags_Z_dR_stack_12","",30,0,6);
   VbbHcc_tags_Z_dR_stack_12->SetBinContent(3,0.007191763);
   VbbHcc_tags_Z_dR_stack_12->SetBinContent(4,0.01258559);
   VbbHcc_tags_Z_dR_stack_12->SetBinContent(5,0.0152825);
   VbbHcc_tags_Z_dR_stack_12->SetBinContent(6,0.009589018);
   VbbHcc_tags_Z_dR_stack_12->SetBinContent(7,0.005993136);
   VbbHcc_tags_Z_dR_stack_12->SetBinContent(8,0.002097598);
   VbbHcc_tags_Z_dR_stack_12->SetBinContent(9,0.002097598);
   VbbHcc_tags_Z_dR_stack_12->SetBinContent(10,0.0008989704);
   VbbHcc_tags_Z_dR_stack_12->SetBinContent(11,0.001797941);
   VbbHcc_tags_Z_dR_stack_12->SetBinContent(12,0.001797941);
   VbbHcc_tags_Z_dR_stack_12->SetBinContent(13,0.003595882);
   VbbHcc_tags_Z_dR_stack_12->SetBinContent(14,0.001198627);
   VbbHcc_tags_Z_dR_stack_12->SetBinContent(15,0.002996568);
   VbbHcc_tags_Z_dR_stack_12->SetBinContent(16,0.001797941);
   VbbHcc_tags_Z_dR_stack_12->SetBinContent(17,0.003296225);
   VbbHcc_tags_Z_dR_stack_12->SetBinContent(18,0.003296225);
   VbbHcc_tags_Z_dR_stack_12->SetBinContent(19,0.001498284);
   VbbHcc_tags_Z_dR_stack_12->SetBinContent(20,0.002397254);
   VbbHcc_tags_Z_dR_stack_12->SetBinContent(21,0.0008989704);
   VbbHcc_tags_Z_dR_stack_12->SetBinContent(22,0.001198627);
   VbbHcc_tags_Z_dR_stack_12->SetBinContent(23,0.001498284);
   VbbHcc_tags_Z_dR_stack_12->SetBinContent(25,0.0005993136);
   VbbHcc_tags_Z_dR_stack_12->SetBinContent(26,0.0008989704);
   VbbHcc_tags_Z_dR_stack_12->SetBinContent(27,0.0008989704);
   VbbHcc_tags_Z_dR_stack_12->SetBinContent(28,0.003296225);
   VbbHcc_tags_Z_dR_stack_12->SetBinContent(29,0.0002996568);
   VbbHcc_tags_Z_dR_stack_12->SetBinContent(30,0.0002996568);
   VbbHcc_tags_Z_dR_stack_12->SetBinError(3,0.001468013);
   VbbHcc_tags_Z_dR_stack_12->SetBinError(4,0.001941998);
   VbbHcc_tags_Z_dR_stack_12->SetBinError(5,0.002139978);
   VbbHcc_tags_Z_dR_stack_12->SetBinError(6,0.001695115);
   VbbHcc_tags_Z_dR_stack_12->SetBinError(7,0.001340106);
   VbbHcc_tags_Z_dR_stack_12->SetBinError(8,0.0007928174);
   VbbHcc_tags_Z_dR_stack_12->SetBinError(9,0.0007928174);
   VbbHcc_tags_Z_dR_stack_12->SetBinError(10,0.0005190208);
   VbbHcc_tags_Z_dR_stack_12->SetBinError(11,0.0007340063);
   VbbHcc_tags_Z_dR_stack_12->SetBinError(12,0.0007340063);
   VbbHcc_tags_Z_dR_stack_12->SetBinError(13,0.001038042);
   VbbHcc_tags_Z_dR_stack_12->SetBinError(14,0.0005993136);
   VbbHcc_tags_Z_dR_stack_12->SetBinError(15,0.000947598);
   VbbHcc_tags_Z_dR_stack_12->SetBinError(16,0.0007340063);
   VbbHcc_tags_Z_dR_stack_12->SetBinError(17,0.0009938492);
   VbbHcc_tags_Z_dR_stack_12->SetBinError(18,0.0009938492);
   VbbHcc_tags_Z_dR_stack_12->SetBinError(19,0.000670053);
   VbbHcc_tags_Z_dR_stack_12->SetBinError(20,0.0008475574);
   VbbHcc_tags_Z_dR_stack_12->SetBinError(21,0.0005190208);
   VbbHcc_tags_Z_dR_stack_12->SetBinError(22,0.0005993136);
   VbbHcc_tags_Z_dR_stack_12->SetBinError(23,0.000670053);
   VbbHcc_tags_Z_dR_stack_12->SetBinError(25,0.0004237787);
   VbbHcc_tags_Z_dR_stack_12->SetBinError(26,0.0005190208);
   VbbHcc_tags_Z_dR_stack_12->SetBinError(27,0.0005190208);
   VbbHcc_tags_Z_dR_stack_12->SetBinError(28,0.0009938492);
   VbbHcc_tags_Z_dR_stack_12->SetBinError(29,0.0002996568);
   VbbHcc_tags_Z_dR_stack_12->SetBinError(30,0.0002996568);
   VbbHcc_tags_Z_dR_stack_12->SetEntries(298);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_tags_Z_dR_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_stack_12->SetLineColor(ci);
   VbbHcc_tags_Z_dR_stack_12->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_12->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_12->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_12->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_12->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_12->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_12->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_12->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_stack_12,"");
   st->Draw("hist");
   
   TH1D *VbbHcc_tags_Z_dR__51 = new TH1D("VbbHcc_tags_Z_dR__51","",30,0,6);
   VbbHcc_tags_Z_dR__51->SetBinContent(2,12);
   VbbHcc_tags_Z_dR__51->SetBinContent(3,16566);
   VbbHcc_tags_Z_dR__51->SetBinContent(4,19347);
   VbbHcc_tags_Z_dR__51->SetBinContent(5,14917);
   VbbHcc_tags_Z_dR__51->SetBinContent(6,13329);
   VbbHcc_tags_Z_dR__51->SetBinContent(7,12312);
   VbbHcc_tags_Z_dR__51->SetBinContent(8,11750);
   VbbHcc_tags_Z_dR__51->SetBinContent(9,11649);
   VbbHcc_tags_Z_dR__51->SetBinContent(10,11497);
   VbbHcc_tags_Z_dR__51->SetBinContent(11,12236);
   VbbHcc_tags_Z_dR__51->SetBinContent(12,13089);
   VbbHcc_tags_Z_dR__51->SetBinContent(13,14249);
   VbbHcc_tags_Z_dR__51->SetBinContent(14,15620);
   VbbHcc_tags_Z_dR__51->SetBinContent(15,17073);
   VbbHcc_tags_Z_dR__51->SetBinContent(16,17926);
   VbbHcc_tags_Z_dR__51->SetBinContent(17,17530);
   VbbHcc_tags_Z_dR__51->SetBinContent(18,16059);
   VbbHcc_tags_Z_dR__51->SetBinContent(19,14403);
   VbbHcc_tags_Z_dR__51->SetBinContent(20,12571);
   VbbHcc_tags_Z_dR__51->SetBinContent(21,10533);
   VbbHcc_tags_Z_dR__51->SetBinContent(22,8590);
   VbbHcc_tags_Z_dR__51->SetBinContent(23,6742);
   VbbHcc_tags_Z_dR__51->SetBinContent(24,5677);
   VbbHcc_tags_Z_dR__51->SetBinContent(25,4654);
   VbbHcc_tags_Z_dR__51->SetBinContent(26,3803);
   VbbHcc_tags_Z_dR__51->SetBinContent(27,3254);
   VbbHcc_tags_Z_dR__51->SetBinContent(28,2914);
   VbbHcc_tags_Z_dR__51->SetBinContent(29,2701);
   VbbHcc_tags_Z_dR__51->SetBinContent(30,1833);
   VbbHcc_tags_Z_dR__51->SetBinContent(31,1399);
   VbbHcc_tags_Z_dR__51->SetEntries(314264);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR__51->SetLineColor(ci);
   VbbHcc_tags_Z_dR__51->SetLineWidth(2);
   VbbHcc_tags_Z_dR__51->SetMarkerStyle(20);
   VbbHcc_tags_Z_dR__51->SetMarkerSize(1.2);
   VbbHcc_tags_Z_dR__51->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR__51->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR__51->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR__51->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR__51->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR__51->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR__51->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR__51->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR__51->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR__51->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR__51->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR__51->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR__51->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR__51->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR__51->Draw("same E");
   
   Double_t Graph_from_VbbHcc_tags_Z_dR_fx1037[30] = {
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
   Double_t Graph_from_VbbHcc_tags_Z_dR_fy1037[30] = {
   0,
   0.1842433,
   11710.29,
   13933.74,
   12373,
   8255.212,
   8422.674,
   11700.75,
   9509.547,
   9643.472,
   7093.34,
   11096.06,
   9500.979,
   14243.98,
   15728.95,
   13585.65,
   15337.7,
   12360.93,
   13606.5,
   9011.86,
   8251.434,
   5288.176,
   4346.812,
   6846.779,
   3713.277,
   2108.751,
   2388.557,
   2270.837,
   1585.306,
   1237.434};
   Double_t Graph_from_VbbHcc_tags_Z_dR_fex1037[30] = {
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
   Double_t Graph_from_VbbHcc_tags_Z_dR_fey1037[30] = {
   0,
   0.1078318,
   1131.578,
   1404.487,
   2098.084,
   970.3593,
   974.2865,
   2182.923,
   1269.317,
   1317.934,
   807.1086,
   2027.887,
   1104.044,
   1577.97,
   1704.39,
   1397.55,
   1702.431,
   1344.479,
   1652.564,
   1158.708,
   1154.837,
   865.3362,
   689.5234,
   1974.839,
   847.1087,
   545.2385,
   552.2087,
   657.7623,
   401.1029,
   393.5402};
   TGraphErrors *gre = new TGraphErrors(30,Graph_from_VbbHcc_tags_Z_dR_fx1037,Graph_from_VbbHcc_tags_Z_dR_fy1037,Graph_from_VbbHcc_tags_Z_dR_fex1037,Graph_from_VbbHcc_tags_Z_dR_fey1037);
   gre->SetName("Graph_from_VbbHcc_tags_Z_dR");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_tags_Z_dR1037 = new TH1F("Graph_Graph_from_VbbHcc_tags_Z_dR1037","",100,0,6.6);
   Graph_Graph_from_VbbHcc_tags_Z_dR1037->SetMinimum(0);
   Graph_Graph_from_VbbHcc_tags_Z_dR1037->SetMaximum(19176.67);
   Graph_Graph_from_VbbHcc_tags_Z_dR1037->SetDirectory(0);
   Graph_Graph_from_VbbHcc_tags_Z_dR1037->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_tags_Z_dR1037->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_tags_Z_dR1037->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_Z_dR1037->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Z_dR1037->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Z_dR1037->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_tags_Z_dR1037->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_Z_dR1037->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Z_dR1037->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Z_dR1037->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_VbbHcc_tags_Z_dR1037->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_tags_Z_dR1037->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_Z_dR1037->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Z_dR1037->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Z_dR1037->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_tags_Z_dR1037);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_tags_Z_dR","Data (JetHT, 2018)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_stack_12","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_stack_11","ZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_stack_10","ggZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_stack_9","ZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_stack_8","ZZ","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_stack_7","WZ","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_stack_6","WW","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_stack_5","W + jets","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_stack_4","Z + jets","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_stack_2","Single top","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_stack_1","QCD","F");

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
   entry=leg->AddEntry("Graph_from_VbbHcc_tags_Z_dR","MC unc. (stat.)","fl");

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetLineWidth(2);
   tex->Draw();
   topPad->Modified();
   Z_dR_tags_18->cd();
  
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
   
   TH1D *data_mc_ratio__52 = new TH1D("data_mc_ratio__52","",30,0,6);
   data_mc_ratio__52->SetBinContent(2,65.13126);
   data_mc_ratio__52->SetBinContent(3,1.414654);
   data_mc_ratio__52->SetBinContent(4,1.3885);
   data_mc_ratio__52->SetBinContent(5,1.205609);
   data_mc_ratio__52->SetBinContent(6,1.614616);
   data_mc_ratio__52->SetBinContent(7,1.461769);
   data_mc_ratio__52->SetBinContent(8,1.004209);
   data_mc_ratio__52->SetBinContent(9,1.22498);
   data_mc_ratio__52->SetBinContent(10,1.192206);
   data_mc_ratio__52->SetBinContent(11,1.724998);
   data_mc_ratio__52->SetBinContent(12,1.179608);
   data_mc_ratio__52->SetBinContent(13,1.49974);
   data_mc_ratio__52->SetBinContent(14,1.096603);
   data_mc_ratio__52->SetBinContent(15,1.085451);
   data_mc_ratio__52->SetBinContent(16,1.31948);
   data_mc_ratio__52->SetBinContent(17,1.142935);
   data_mc_ratio__52->SetBinContent(18,1.299174);
   data_mc_ratio__52->SetBinContent(19,1.058538);
   data_mc_ratio__52->SetBinContent(20,1.39494);
   data_mc_ratio__52->SetBinContent(21,1.276505);
   data_mc_ratio__52->SetBinContent(22,1.624378);
   data_mc_ratio__52->SetBinContent(23,1.551022);
   data_mc_ratio__52->SetBinContent(24,0.829149);
   data_mc_ratio__52->SetBinContent(25,1.25334);
   data_mc_ratio__52->SetBinContent(26,1.803438);
   data_mc_ratio__52->SetBinContent(27,1.362329);
   data_mc_ratio__52->SetBinContent(28,1.283227);
   data_mc_ratio__52->SetBinContent(29,1.703772);
   data_mc_ratio__52->SetBinContent(30,1.481291);
   data_mc_ratio__52->SetBinContent(31,2.129386);
   data_mc_ratio__52->SetBinError(2,18.80178);
   data_mc_ratio__52->SetBinError(3,0.01099111);
   data_mc_ratio__52->SetBinError(4,0.009982498);
   data_mc_ratio__52->SetBinError(5,0.009871105);
   data_mc_ratio__52->SetBinError(6,0.01398526);
   data_mc_ratio__52->SetBinError(7,0.0131739);
   data_mc_ratio__52->SetBinError(8,0.009264141);
   data_mc_ratio__52->SetBinError(9,0.0113497);
   data_mc_ratio__52->SetBinError(10,0.01111882);
   data_mc_ratio__52->SetBinError(11,0.01559441);
   data_mc_ratio__52->SetBinError(12,0.01031061);
   data_mc_ratio__52->SetBinError(13,0.01256388);
   data_mc_ratio__52->SetBinError(14,0.008774232);
   data_mc_ratio__52->SetBinError(15,0.00830721);
   data_mc_ratio__52->SetBinError(16,0.009855102);
   data_mc_ratio__52->SetBinError(17,0.008632381);
   data_mc_ratio__52->SetBinError(18,0.01025199);
   data_mc_ratio__52->SetBinError(19,0.008820234);
   data_mc_ratio__52->SetBinError(20,0.01244143);
   data_mc_ratio__52->SetBinError(21,0.01243789);
   data_mc_ratio__52->SetBinError(22,0.01752632);
   data_mc_ratio__52->SetBinError(23,0.01888963);
   data_mc_ratio__52->SetBinError(24,0.01100457);
   data_mc_ratio__52->SetBinError(25,0.01837197);
   data_mc_ratio__52->SetBinError(26,0.02924408);
   data_mc_ratio__52->SetBinError(27,0.02388214);
   data_mc_ratio__52->SetBinError(28,0.02377162);
   data_mc_ratio__52->SetBinError(29,0.03278303);
   data_mc_ratio__52->SetBinError(30,0.03459865);
   data_mc_ratio__52->SetBinError(31,0.3827635);
   data_mc_ratio__52->SetMinimum(0.4);
   data_mc_ratio__52->SetMaximum(1.6);
   data_mc_ratio__52->SetEntries(5.82243);
   data_mc_ratio__52->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__52->SetLineColor(ci);
   data_mc_ratio__52->SetLineWidth(2);
   data_mc_ratio__52->SetMarkerStyle(20);
   data_mc_ratio__52->SetMarkerSize(1.2);
   data_mc_ratio__52->GetXaxis()->SetTitle("#DeltaR(b,b)");
   data_mc_ratio__52->GetXaxis()->SetRange(1,30);
   data_mc_ratio__52->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__52->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__52->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__52->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__52->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__52->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__52->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__52->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__52->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__52->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__52->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__52->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__52->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__52->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__52->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__52->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__52->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1038[30] = {
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
   Double_t Graph_from_mc_statistical_error_fy1038[30] = {
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
   Double_t Graph_from_mc_statistical_error_fex1038[30] = {
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
   Double_t Graph_from_mc_statistical_error_fey1038[30] = {
   0,
   0.5852686,
   0.09663108,
   0.1007976,
   0.1695696,
   0.117545,
   0.1156743,
   0.1865626,
   0.1334782,
   0.1366659,
   0.113784,
   0.1827573,
   0.1162031,
   0.1107816,
   0.1083601,
   0.1028695,
   0.1109965,
   0.1087684,
   0.121454,
   0.1285759,
   0.1399559,
   0.163636,
   0.1586274,
   0.2884333,
   0.2281297,
   0.25856,
   0.2311893,
   0.2896563,
   0.2530129,
   0.3180292};
   gre = new TGraphErrors(30,Graph_from_mc_statistical_error_fx1038,Graph_from_mc_statistical_error_fy1038,Graph_from_mc_statistical_error_fex1038,Graph_from_mc_statistical_error_fey1038);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1038 = new TH1F("Graph_Graph_from_mc_statistical_error1038","",100,0,6.6);
   Graph_Graph_from_mc_statistical_error1038->SetMinimum(0.2976777);
   Graph_Graph_from_mc_statistical_error1038->SetMaximum(1.702322);
   Graph_Graph_from_mc_statistical_error1038->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1038->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1038->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1038->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1038->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1038->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1038->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1038->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1038->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1038->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1038->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1038->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1038->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1038->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1038->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1038->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1038);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,6,1);
   line->Draw();
   bottomPad->Modified();
   Z_dR_tags_18->cd();
   Z_dR_tags_18->Modified();
   Z_dR_tags_18->cd();
   Z_dR_tags_18->SetSelected(Z_dR_tags_18);
}
