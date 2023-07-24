void Z_dR_tags_18()
{
//=========Macro generated from canvas: Z_dR_tags_18/Z_dR_tags_18
//=========  (Mon Jul 24 10:11:16 2023) by ROOT version 6.14/09
   TCanvas *Z_dR_tags_18 = new TCanvas("Z_dR_tags_18", "Z_dR_tags_18",0,0,600,600);
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
   topPad->Range(-0.9193524,-624.3137,6.314516,623699.4);
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
   st->SetMaximum(534540);
   
   TH1F *st_stack_19 = new TH1F("st_stack_19","",30,0,6);
   st_stack_19->SetMinimum(0.01);
   st_stack_19->SetMaximum(561267);
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
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(2,56.49559);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(3,176560.3);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(4,170941);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(5,120217.6);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(6,96974.9);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(7,83119.18);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(8,72394);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(9,67095.71);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(10,61466.8);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(11,61776.34);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(12,59468.49);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(13,59566.31);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(14,67195.25);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(15,75936.46);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(16,77935.82);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(17,71797.08);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(18,72296.76);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(19,54371.83);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(20,57461.07);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(21,44979.83);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(22,42249.24);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(23,30768.28);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(24,27005);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(25,23868.58);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(26,22197.9);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(27,18068.58);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(28,18398.15);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(29,18920.91);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(30,11397.39);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(31,11545.57);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(2,20.07906);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(3,4480.73);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(4,5575.245);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(5,4780.991);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(6,3788.601);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(7,3691.097);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(8,3678.701);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(9,3290.531);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(10,3604.229);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(11,3782.162);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(12,3889.234);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(13,2972.747);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(14,3568.558);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(15,3669.67);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(16,4111.996);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(17,3821.94);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(18,4332.458);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(19,2689.858);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(20,3584.54);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(21,3498.511);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(22,3916.317);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(23,2228.455);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(24,2612.544);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(25,2656.216);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(26,2112.347);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(27,1601.287);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(28,1729.391);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(29,1679.783);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(30,934.2528);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(31,2482.058);
   VbbHcc_tags_Z_dR_stack_1->SetEntries(155876);

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
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(2,0.06390553);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(3,336.6793);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(4,575.0455);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(5,656.9414);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(6,731.4832);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(7,811.1414);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(8,876.9303);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(9,953.9144);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(10,976.0598);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(11,1064.473);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(12,1115.653);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(13,1195.279);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(14,1242.485);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(15,1271.673);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(16,1246.227);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(17,1170.478);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(18,1092.496);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(19,944.9864);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(20,868.2816);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(21,749.2925);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(22,594.247);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(23,510.8901);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(24,407.9933);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(25,341.0472);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(26,297.8548);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(27,215.8143);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(28,175.3919);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(29,138.2943);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(30,83.43022);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(31,92.0045);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(2,0.06390553);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(3,9.656614);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(4,11.36291);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(5,11.99144);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(6,13.24669);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(7,13.47024);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(8,14.74659);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(9,19.62473);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(10,15.30756);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(11,20.01148);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(12,15.85966);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(13,16.43477);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(14,16.33649);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(15,17.02842);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(16,16.66771);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(17,16.15227);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(18,17.0051);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(19,14.39643);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(20,14.43742);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(21,12.9867);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(22,11.66503);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(23,10.86662);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(24,9.60822);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(25,8.894629);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(26,8.347114);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(27,7.300405);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(28,6.540087);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(29,6.058971);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(30,4.198024);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(31,4.619905);
   VbbHcc_tags_Z_dR_stack_2->SetEntries(222347);

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
   VbbHcc_tags_Z_dR_stack_3->SetBinContent(2,2.188066);
   VbbHcc_tags_Z_dR_stack_3->SetBinContent(3,5072.475);
   VbbHcc_tags_Z_dR_stack_3->SetBinContent(4,9516.495);
   VbbHcc_tags_Z_dR_stack_3->SetBinContent(5,11068.66);
   VbbHcc_tags_Z_dR_stack_3->SetBinContent(6,12617.98);
   VbbHcc_tags_Z_dR_stack_3->SetBinContent(7,13545.43);
   VbbHcc_tags_Z_dR_stack_3->SetBinContent(8,14323.19);
   VbbHcc_tags_Z_dR_stack_3->SetBinContent(9,15337.92);
   VbbHcc_tags_Z_dR_stack_3->SetBinContent(10,16422.43);
   VbbHcc_tags_Z_dR_stack_3->SetBinContent(11,18150.69);
   VbbHcc_tags_Z_dR_stack_3->SetBinContent(12,20040.87);
   VbbHcc_tags_Z_dR_stack_3->SetBinContent(13,22308.2);
   VbbHcc_tags_Z_dR_stack_3->SetBinContent(14,24403.01);
   VbbHcc_tags_Z_dR_stack_3->SetBinContent(15,25952.06);
   VbbHcc_tags_Z_dR_stack_3->SetBinContent(16,26582.01);
   VbbHcc_tags_Z_dR_stack_3->SetBinContent(17,25648.35);
   VbbHcc_tags_Z_dR_stack_3->SetBinContent(18,23657.78);
   VbbHcc_tags_Z_dR_stack_3->SetBinContent(19,21061.57);
   VbbHcc_tags_Z_dR_stack_3->SetBinContent(20,18069.18);
   VbbHcc_tags_Z_dR_stack_3->SetBinContent(21,14933.5);
   VbbHcc_tags_Z_dR_stack_3->SetBinContent(22,11942.64);
   VbbHcc_tags_Z_dR_stack_3->SetBinContent(23,9392.368);
   VbbHcc_tags_Z_dR_stack_3->SetBinContent(24,7282.344);
   VbbHcc_tags_Z_dR_stack_3->SetBinContent(25,5624.716);
   VbbHcc_tags_Z_dR_stack_3->SetBinContent(26,4369.201);
   VbbHcc_tags_Z_dR_stack_3->SetBinContent(27,3368.438);
   VbbHcc_tags_Z_dR_stack_3->SetBinContent(28,2526.83);
   VbbHcc_tags_Z_dR_stack_3->SetBinContent(29,1870.059);
   VbbHcc_tags_Z_dR_stack_3->SetBinContent(30,1137.762);
   VbbHcc_tags_Z_dR_stack_3->SetBinContent(31,978.2891);
   VbbHcc_tags_Z_dR_stack_3->SetBinError(2,0.3979576);
   VbbHcc_tags_Z_dR_stack_3->SetBinError(3,20.48409);
   VbbHcc_tags_Z_dR_stack_3->SetBinError(4,27.81972);
   VbbHcc_tags_Z_dR_stack_3->SetBinError(5,30.47826);
   VbbHcc_tags_Z_dR_stack_3->SetBinError(6,32.94962);
   VbbHcc_tags_Z_dR_stack_3->SetBinError(7,33.55583);
   VbbHcc_tags_Z_dR_stack_3->SetBinError(8,34.46268);
   VbbHcc_tags_Z_dR_stack_3->SetBinError(9,35.72615);
   VbbHcc_tags_Z_dR_stack_3->SetBinError(10,37.21339);
   VbbHcc_tags_Z_dR_stack_3->SetBinError(11,38.94002);
   VbbHcc_tags_Z_dR_stack_3->SetBinError(12,40.71286);
   VbbHcc_tags_Z_dR_stack_3->SetBinError(13,44.01845);
   VbbHcc_tags_Z_dR_stack_3->SetBinError(14,45.11441);
   VbbHcc_tags_Z_dR_stack_3->SetBinError(15,46.35113);
   VbbHcc_tags_Z_dR_stack_3->SetBinError(16,46.97052);
   VbbHcc_tags_Z_dR_stack_3->SetBinError(17,47.29877);
   VbbHcc_tags_Z_dR_stack_3->SetBinError(18,45.24884);
   VbbHcc_tags_Z_dR_stack_3->SetBinError(19,42.83687);
   VbbHcc_tags_Z_dR_stack_3->SetBinError(20,39.34119);
   VbbHcc_tags_Z_dR_stack_3->SetBinError(21,35.26838);
   VbbHcc_tags_Z_dR_stack_3->SetBinError(22,31.48983);
   VbbHcc_tags_Z_dR_stack_3->SetBinError(23,28.13687);
   VbbHcc_tags_Z_dR_stack_3->SetBinError(24,24.13767);
   VbbHcc_tags_Z_dR_stack_3->SetBinError(25,21.16935);
   VbbHcc_tags_Z_dR_stack_3->SetBinError(26,19.09565);
   VbbHcc_tags_Z_dR_stack_3->SetBinError(27,16.73156);
   VbbHcc_tags_Z_dR_stack_3->SetBinError(28,14.03022);
   VbbHcc_tags_Z_dR_stack_3->SetBinError(29,11.95902);
   VbbHcc_tags_Z_dR_stack_3->SetBinError(30,9.925248);
   VbbHcc_tags_Z_dR_stack_3->SetBinError(31,9.719242);
   VbbHcc_tags_Z_dR_stack_3->SetEntries(5745643);

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
   VbbHcc_tags_Z_dR_stack_4->SetBinContent(2,0.3234844);
   VbbHcc_tags_Z_dR_stack_4->SetBinContent(3,1241.038);
   VbbHcc_tags_Z_dR_stack_4->SetBinContent(4,1784.169);
   VbbHcc_tags_Z_dR_stack_4->SetBinContent(5,1519.42);
   VbbHcc_tags_Z_dR_stack_4->SetBinContent(6,1183.46);
   VbbHcc_tags_Z_dR_stack_4->SetBinContent(7,844.2334);
   VbbHcc_tags_Z_dR_stack_4->SetBinContent(8,605.1348);
   VbbHcc_tags_Z_dR_stack_4->SetBinContent(9,505.348);
   VbbHcc_tags_Z_dR_stack_4->SetBinContent(10,465.7226);
   VbbHcc_tags_Z_dR_stack_4->SetBinContent(11,448.5689);
   VbbHcc_tags_Z_dR_stack_4->SetBinContent(12,428.6413);
   VbbHcc_tags_Z_dR_stack_4->SetBinContent(13,455.4228);
   VbbHcc_tags_Z_dR_stack_4->SetBinContent(14,509.3473);
   VbbHcc_tags_Z_dR_stack_4->SetBinContent(15,537.7265);
   VbbHcc_tags_Z_dR_stack_4->SetBinContent(16,561.904);
   VbbHcc_tags_Z_dR_stack_4->SetBinContent(17,550.9987);
   VbbHcc_tags_Z_dR_stack_4->SetBinContent(18,486.8254);
   VbbHcc_tags_Z_dR_stack_4->SetBinContent(19,462.371);
   VbbHcc_tags_Z_dR_stack_4->SetBinContent(20,427.1055);
   VbbHcc_tags_Z_dR_stack_4->SetBinContent(21,326.6722);
   VbbHcc_tags_Z_dR_stack_4->SetBinContent(22,261.6559);
   VbbHcc_tags_Z_dR_stack_4->SetBinContent(23,239.0516);
   VbbHcc_tags_Z_dR_stack_4->SetBinContent(24,203.9935);
   VbbHcc_tags_Z_dR_stack_4->SetBinContent(25,190.1174);
   VbbHcc_tags_Z_dR_stack_4->SetBinContent(26,205.3333);
   VbbHcc_tags_Z_dR_stack_4->SetBinContent(27,201.6447);
   VbbHcc_tags_Z_dR_stack_4->SetBinContent(28,214.8487);
   VbbHcc_tags_Z_dR_stack_4->SetBinContent(29,189.8898);
   VbbHcc_tags_Z_dR_stack_4->SetBinContent(30,127.1715);
   VbbHcc_tags_Z_dR_stack_4->SetBinContent(31,70.15309);
   VbbHcc_tags_Z_dR_stack_4->SetBinError(2,0.1870826);
   VbbHcc_tags_Z_dR_stack_4->SetBinError(3,19.58546);
   VbbHcc_tags_Z_dR_stack_4->SetBinError(4,23.02972);
   VbbHcc_tags_Z_dR_stack_4->SetBinError(5,25.34017);
   VbbHcc_tags_Z_dR_stack_4->SetBinError(6,28.31324);
   VbbHcc_tags_Z_dR_stack_4->SetBinError(7,22.44962);
   VbbHcc_tags_Z_dR_stack_4->SetBinError(8,19.44833);
   VbbHcc_tags_Z_dR_stack_4->SetBinError(9,18.23213);
   VbbHcc_tags_Z_dR_stack_4->SetBinError(10,19.29773);
   VbbHcc_tags_Z_dR_stack_4->SetBinError(11,16.29498);
   VbbHcc_tags_Z_dR_stack_4->SetBinError(12,12.99141);
   VbbHcc_tags_Z_dR_stack_4->SetBinError(13,14.81411);
   VbbHcc_tags_Z_dR_stack_4->SetBinError(14,14.90886);
   VbbHcc_tags_Z_dR_stack_4->SetBinError(15,18.30492);
   VbbHcc_tags_Z_dR_stack_4->SetBinError(16,17.49988);
   VbbHcc_tags_Z_dR_stack_4->SetBinError(17,22.08091);
   VbbHcc_tags_Z_dR_stack_4->SetBinError(18,16.81907);
   VbbHcc_tags_Z_dR_stack_4->SetBinError(19,16.94752);
   VbbHcc_tags_Z_dR_stack_4->SetBinError(20,19.70723);
   VbbHcc_tags_Z_dR_stack_4->SetBinError(21,15.78744);
   VbbHcc_tags_Z_dR_stack_4->SetBinError(22,9.406597);
   VbbHcc_tags_Z_dR_stack_4->SetBinError(23,11.668);
   VbbHcc_tags_Z_dR_stack_4->SetBinError(24,9.139469);
   VbbHcc_tags_Z_dR_stack_4->SetBinError(25,10.57452);
   VbbHcc_tags_Z_dR_stack_4->SetBinError(26,10.18915);
   VbbHcc_tags_Z_dR_stack_4->SetBinError(27,14.27758);
   VbbHcc_tags_Z_dR_stack_4->SetBinError(28,12.87764);
   VbbHcc_tags_Z_dR_stack_4->SetBinError(29,8.559748);
   VbbHcc_tags_Z_dR_stack_4->SetBinError(30,6.19914);
   VbbHcc_tags_Z_dR_stack_4->SetBinError(31,4.402083);
   VbbHcc_tags_Z_dR_stack_4->SetEntries(86588);

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
   VbbHcc_tags_Z_dR_stack_5->SetBinContent(2,0.139138);
   VbbHcc_tags_Z_dR_stack_5->SetBinContent(3,875.1778);
   VbbHcc_tags_Z_dR_stack_5->SetBinContent(4,817.5375);
   VbbHcc_tags_Z_dR_stack_5->SetBinContent(5,563.4786);
   VbbHcc_tags_Z_dR_stack_5->SetBinContent(6,425.8334);
   VbbHcc_tags_Z_dR_stack_5->SetBinContent(7,348.2405);
   VbbHcc_tags_Z_dR_stack_5->SetBinContent(8,318.3189);
   VbbHcc_tags_Z_dR_stack_5->SetBinContent(9,273.5474);
   VbbHcc_tags_Z_dR_stack_5->SetBinContent(10,268.2978);
   VbbHcc_tags_Z_dR_stack_5->SetBinContent(11,260.0865);
   VbbHcc_tags_Z_dR_stack_5->SetBinContent(12,262.8638);
   VbbHcc_tags_Z_dR_stack_5->SetBinContent(13,298.7283);
   VbbHcc_tags_Z_dR_stack_5->SetBinContent(14,278.817);
   VbbHcc_tags_Z_dR_stack_5->SetBinContent(15,333.5652);
   VbbHcc_tags_Z_dR_stack_5->SetBinContent(16,313.3176);
   VbbHcc_tags_Z_dR_stack_5->SetBinContent(17,308.6057);
   VbbHcc_tags_Z_dR_stack_5->SetBinContent(18,279.6614);
   VbbHcc_tags_Z_dR_stack_5->SetBinContent(19,265.5112);
   VbbHcc_tags_Z_dR_stack_5->SetBinContent(20,216.3555);
   VbbHcc_tags_Z_dR_stack_5->SetBinContent(21,182.3994);
   VbbHcc_tags_Z_dR_stack_5->SetBinContent(22,156.3285);
   VbbHcc_tags_Z_dR_stack_5->SetBinContent(23,158.1242);
   VbbHcc_tags_Z_dR_stack_5->SetBinContent(24,113.3667);
   VbbHcc_tags_Z_dR_stack_5->SetBinContent(25,89.3404);
   VbbHcc_tags_Z_dR_stack_5->SetBinContent(26,102.9734);
   VbbHcc_tags_Z_dR_stack_5->SetBinContent(27,109.9628);
   VbbHcc_tags_Z_dR_stack_5->SetBinContent(28,85.61942);
   VbbHcc_tags_Z_dR_stack_5->SetBinContent(29,113.2138);
   VbbHcc_tags_Z_dR_stack_5->SetBinContent(30,76.53997);
   VbbHcc_tags_Z_dR_stack_5->SetBinContent(31,33.57847);
   VbbHcc_tags_Z_dR_stack_5->SetBinError(2,0.125004);
   VbbHcc_tags_Z_dR_stack_5->SetBinError(3,34.58019);
   VbbHcc_tags_Z_dR_stack_5->SetBinError(4,31.99817);
   VbbHcc_tags_Z_dR_stack_5->SetBinError(5,28.35744);
   VbbHcc_tags_Z_dR_stack_5->SetBinError(6,25.26024);
   VbbHcc_tags_Z_dR_stack_5->SetBinError(7,20.80557);
   VbbHcc_tags_Z_dR_stack_5->SetBinError(8,20.84426);
   VbbHcc_tags_Z_dR_stack_5->SetBinError(9,18.8202);
   VbbHcc_tags_Z_dR_stack_5->SetBinError(10,21.67524);
   VbbHcc_tags_Z_dR_stack_5->SetBinError(11,17.69434);
   VbbHcc_tags_Z_dR_stack_5->SetBinError(12,19.07963);
   VbbHcc_tags_Z_dR_stack_5->SetBinError(13,23.47221);
   VbbHcc_tags_Z_dR_stack_5->SetBinError(14,19.01196);
   VbbHcc_tags_Z_dR_stack_5->SetBinError(15,23.80025);
   VbbHcc_tags_Z_dR_stack_5->SetBinError(16,21.67646);
   VbbHcc_tags_Z_dR_stack_5->SetBinError(17,29.60661);
   VbbHcc_tags_Z_dR_stack_5->SetBinError(18,23.09674);
   VbbHcc_tags_Z_dR_stack_5->SetBinError(19,27.01234);
   VbbHcc_tags_Z_dR_stack_5->SetBinError(20,14.36263);
   VbbHcc_tags_Z_dR_stack_5->SetBinError(21,13.29571);
   VbbHcc_tags_Z_dR_stack_5->SetBinError(22,12.4255);
   VbbHcc_tags_Z_dR_stack_5->SetBinError(23,23.40798);
   VbbHcc_tags_Z_dR_stack_5->SetBinError(24,9.852803);
   VbbHcc_tags_Z_dR_stack_5->SetBinError(25,8.434313);
   VbbHcc_tags_Z_dR_stack_5->SetBinError(26,9.406596);
   VbbHcc_tags_Z_dR_stack_5->SetBinError(27,13.72897);
   VbbHcc_tags_Z_dR_stack_5->SetBinError(28,9.16617);
   VbbHcc_tags_Z_dR_stack_5->SetBinError(29,26.84021);
   VbbHcc_tags_Z_dR_stack_5->SetBinError(30,14.21862);
   VbbHcc_tags_Z_dR_stack_5->SetBinError(31,4.832623);
   VbbHcc_tags_Z_dR_stack_5->SetEntries(38399);

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
   VbbHcc_tags_Z_dR_stack_6->SetBinContent(3,3.406862);
   VbbHcc_tags_Z_dR_stack_6->SetBinContent(4,3.052617);
   VbbHcc_tags_Z_dR_stack_6->SetBinContent(5,2.179333);
   VbbHcc_tags_Z_dR_stack_6->SetBinContent(6,0.6219823);
   VbbHcc_tags_Z_dR_stack_6->SetBinContent(7,1.408295);
   VbbHcc_tags_Z_dR_stack_6->SetBinContent(8,1.783064);
   VbbHcc_tags_Z_dR_stack_6->SetBinContent(9,1.964337);
   VbbHcc_tags_Z_dR_stack_6->SetBinContent(10,2.154017);
   VbbHcc_tags_Z_dR_stack_6->SetBinContent(11,1.302149);
   VbbHcc_tags_Z_dR_stack_6->SetBinContent(12,1.949113);
   VbbHcc_tags_Z_dR_stack_6->SetBinContent(13,1.698108);
   VbbHcc_tags_Z_dR_stack_6->SetBinContent(14,2.642199);
   VbbHcc_tags_Z_dR_stack_6->SetBinContent(15,2.5704);
   VbbHcc_tags_Z_dR_stack_6->SetBinContent(16,1.620073);
   VbbHcc_tags_Z_dR_stack_6->SetBinContent(17,2.031265);
   VbbHcc_tags_Z_dR_stack_6->SetBinContent(18,2.340134);
   VbbHcc_tags_Z_dR_stack_6->SetBinContent(19,1.852626);
   VbbHcc_tags_Z_dR_stack_6->SetBinContent(20,2.390415);
   VbbHcc_tags_Z_dR_stack_6->SetBinContent(21,0.6868056);
   VbbHcc_tags_Z_dR_stack_6->SetBinContent(22,1.18256);
   VbbHcc_tags_Z_dR_stack_6->SetBinContent(23,0.9154341);
   VbbHcc_tags_Z_dR_stack_6->SetBinContent(24,0.7612098);
   VbbHcc_tags_Z_dR_stack_6->SetBinContent(25,1.06872);
   VbbHcc_tags_Z_dR_stack_6->SetBinContent(26,0.9366801);
   VbbHcc_tags_Z_dR_stack_6->SetBinContent(27,0.538866);
   VbbHcc_tags_Z_dR_stack_6->SetBinContent(29,0.3105298);
   VbbHcc_tags_Z_dR_stack_6->SetBinContent(30,1.139981);
   VbbHcc_tags_Z_dR_stack_6->SetBinError(3,1.097192);
   VbbHcc_tags_Z_dR_stack_6->SetBinError(4,0.9847495);
   VbbHcc_tags_Z_dR_stack_6->SetBinError(5,0.8454296);
   VbbHcc_tags_Z_dR_stack_6->SetBinError(6,0.4398084);
   VbbHcc_tags_Z_dR_stack_6->SetBinError(7,0.7062588);
   VbbHcc_tags_Z_dR_stack_6->SetBinError(8,0.7360318);
   VbbHcc_tags_Z_dR_stack_6->SetBinError(9,0.7689455);
   VbbHcc_tags_Z_dR_stack_6->SetBinError(10,0.8293592);
   VbbHcc_tags_Z_dR_stack_6->SetBinError(11,0.6519672);
   VbbHcc_tags_Z_dR_stack_6->SetBinError(12,0.8004002);
   VbbHcc_tags_Z_dR_stack_6->SetBinError(13,0.7662165);
   VbbHcc_tags_Z_dR_stack_6->SetBinError(14,0.9381974);
   VbbHcc_tags_Z_dR_stack_6->SetBinError(15,0.9250932);
   VbbHcc_tags_Z_dR_stack_6->SetBinError(16,0.7368116);
   VbbHcc_tags_Z_dR_stack_6->SetBinError(17,0.7565946);
   VbbHcc_tags_Z_dR_stack_6->SetBinError(18,0.8958007);
   VbbHcc_tags_Z_dR_stack_6->SetBinError(19,0.7245303);
   VbbHcc_tags_Z_dR_stack_6->SetBinError(20,0.9181681);
   VbbHcc_tags_Z_dR_stack_6->SetBinError(21,0.4056959);
   VbbHcc_tags_Z_dR_stack_6->SetBinError(22,0.5982393);
   VbbHcc_tags_Z_dR_stack_6->SetBinError(23,0.5285942);
   VbbHcc_tags_Z_dR_stack_6->SetBinError(24,0.4456288);
   VbbHcc_tags_Z_dR_stack_6->SetBinError(25,0.5381366);
   VbbHcc_tags_Z_dR_stack_6->SetBinError(26,0.5408014);
   VbbHcc_tags_Z_dR_stack_6->SetBinError(27,0.3834035);
   VbbHcc_tags_Z_dR_stack_6->SetBinError(29,0.3105298);
   VbbHcc_tags_Z_dR_stack_6->SetBinError(30,0.6646432);
   VbbHcc_tags_Z_dR_stack_6->SetEntries(144);

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
   VbbHcc_tags_Z_dR_stack_7->SetBinContent(3,13.71873);
   VbbHcc_tags_Z_dR_stack_7->SetBinContent(4,22.10758);
   VbbHcc_tags_Z_dR_stack_7->SetBinContent(5,18.3656);
   VbbHcc_tags_Z_dR_stack_7->SetBinContent(6,9.723695);
   VbbHcc_tags_Z_dR_stack_7->SetBinContent(7,6.478858);
   VbbHcc_tags_Z_dR_stack_7->SetBinContent(8,3.279038);
   VbbHcc_tags_Z_dR_stack_7->SetBinContent(9,3.348116);
   VbbHcc_tags_Z_dR_stack_7->SetBinContent(10,2.016111);
   VbbHcc_tags_Z_dR_stack_7->SetBinContent(11,1.767584);
   VbbHcc_tags_Z_dR_stack_7->SetBinContent(12,2.123595);
   VbbHcc_tags_Z_dR_stack_7->SetBinContent(13,2.821633);
   VbbHcc_tags_Z_dR_stack_7->SetBinContent(14,2.06395);
   VbbHcc_tags_Z_dR_stack_7->SetBinContent(15,3.358381);
   VbbHcc_tags_Z_dR_stack_7->SetBinContent(16,2.86008);
   VbbHcc_tags_Z_dR_stack_7->SetBinContent(17,3.794249);
   VbbHcc_tags_Z_dR_stack_7->SetBinContent(18,2.169406);
   VbbHcc_tags_Z_dR_stack_7->SetBinContent(19,2.852623);
   VbbHcc_tags_Z_dR_stack_7->SetBinContent(20,0.6732093);
   VbbHcc_tags_Z_dR_stack_7->SetBinContent(21,1.677719);
   VbbHcc_tags_Z_dR_stack_7->SetBinContent(22,1.115953);
   VbbHcc_tags_Z_dR_stack_7->SetBinContent(23,1.621294);
   VbbHcc_tags_Z_dR_stack_7->SetBinContent(24,0.6997464);
   VbbHcc_tags_Z_dR_stack_7->SetBinContent(25,0.6742128);
   VbbHcc_tags_Z_dR_stack_7->SetBinContent(26,1.209343);
   VbbHcc_tags_Z_dR_stack_7->SetBinContent(27,2.605551);
   VbbHcc_tags_Z_dR_stack_7->SetBinContent(28,2.355201);
   VbbHcc_tags_Z_dR_stack_7->SetBinContent(29,1.485139);
   VbbHcc_tags_Z_dR_stack_7->SetBinContent(30,1.313883);
   VbbHcc_tags_Z_dR_stack_7->SetBinContent(31,0.2148387);
   VbbHcc_tags_Z_dR_stack_7->SetBinError(3,1.869762);
   VbbHcc_tags_Z_dR_stack_7->SetBinError(4,2.332847);
   VbbHcc_tags_Z_dR_stack_7->SetBinError(5,2.131309);
   VbbHcc_tags_Z_dR_stack_7->SetBinError(6,1.512964);
   VbbHcc_tags_Z_dR_stack_7->SetBinError(7,1.224475);
   VbbHcc_tags_Z_dR_stack_7->SetBinError(8,0.9112901);
   VbbHcc_tags_Z_dR_stack_7->SetBinError(9,0.8936456);
   VbbHcc_tags_Z_dR_stack_7->SetBinError(10,0.6814237);
   VbbHcc_tags_Z_dR_stack_7->SetBinError(11,0.7168393);
   VbbHcc_tags_Z_dR_stack_7->SetBinError(12,0.6832397);
   VbbHcc_tags_Z_dR_stack_7->SetBinError(13,0.8396394);
   VbbHcc_tags_Z_dR_stack_7->SetBinError(14,0.7033185);
   VbbHcc_tags_Z_dR_stack_7->SetBinError(15,0.91103);
   VbbHcc_tags_Z_dR_stack_7->SetBinError(16,0.7983384);
   VbbHcc_tags_Z_dR_stack_7->SetBinError(17,0.994369);
   VbbHcc_tags_Z_dR_stack_7->SetBinError(18,0.7086222);
   VbbHcc_tags_Z_dR_stack_7->SetBinError(19,0.7900844);
   VbbHcc_tags_Z_dR_stack_7->SetBinError(20,0.3888599);
   VbbHcc_tags_Z_dR_stack_7->SetBinError(21,0.6558392);
   VbbHcc_tags_Z_dR_stack_7->SetBinError(22,0.5790526);
   VbbHcc_tags_Z_dR_stack_7->SetBinError(23,0.6670199);
   VbbHcc_tags_Z_dR_stack_7->SetBinError(24,0.4044937);
   VbbHcc_tags_Z_dR_stack_7->SetBinError(25,0.3898976);
   VbbHcc_tags_Z_dR_stack_7->SetBinError(26,0.5308372);
   VbbHcc_tags_Z_dR_stack_7->SetBinError(27,0.8353377);
   VbbHcc_tags_Z_dR_stack_7->SetBinError(28,0.7513666);
   VbbHcc_tags_Z_dR_stack_7->SetBinError(29,0.6135944);
   VbbHcc_tags_Z_dR_stack_7->SetBinError(30,0.5718468);
   VbbHcc_tags_Z_dR_stack_7->SetBinError(31,0.2148387);
   VbbHcc_tags_Z_dR_stack_7->SetEntries(512);

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
   VbbHcc_tags_Z_dR_stack_8->SetBinContent(3,10.8151);
   VbbHcc_tags_Z_dR_stack_8->SetBinContent(4,17.66644);
   VbbHcc_tags_Z_dR_stack_8->SetBinContent(5,15.08205);
   VbbHcc_tags_Z_dR_stack_8->SetBinContent(6,8.952896);
   VbbHcc_tags_Z_dR_stack_8->SetBinContent(7,5.156739);
   VbbHcc_tags_Z_dR_stack_8->SetBinContent(8,4.810429);
   VbbHcc_tags_Z_dR_stack_8->SetBinContent(9,4.408071);
   VbbHcc_tags_Z_dR_stack_8->SetBinContent(10,3.174548);
   VbbHcc_tags_Z_dR_stack_8->SetBinContent(11,2.353089);
   VbbHcc_tags_Z_dR_stack_8->SetBinContent(12,3.75819);
   VbbHcc_tags_Z_dR_stack_8->SetBinContent(13,4.885522);
   VbbHcc_tags_Z_dR_stack_8->SetBinContent(14,2.65691);
   VbbHcc_tags_Z_dR_stack_8->SetBinContent(15,4.177473);
   VbbHcc_tags_Z_dR_stack_8->SetBinContent(16,4.041917);
   VbbHcc_tags_Z_dR_stack_8->SetBinContent(17,4.13286);
   VbbHcc_tags_Z_dR_stack_8->SetBinContent(18,3.304859);
   VbbHcc_tags_Z_dR_stack_8->SetBinContent(19,2.204299);
   VbbHcc_tags_Z_dR_stack_8->SetBinContent(20,2.545488);
   VbbHcc_tags_Z_dR_stack_8->SetBinContent(21,1.968661);
   VbbHcc_tags_Z_dR_stack_8->SetBinContent(22,1.032453);
   VbbHcc_tags_Z_dR_stack_8->SetBinContent(23,1.622009);
   VbbHcc_tags_Z_dR_stack_8->SetBinContent(24,0.8971579);
   VbbHcc_tags_Z_dR_stack_8->SetBinContent(25,1.345325);
   VbbHcc_tags_Z_dR_stack_8->SetBinContent(26,1.167706);
   VbbHcc_tags_Z_dR_stack_8->SetBinContent(27,1.525487);
   VbbHcc_tags_Z_dR_stack_8->SetBinContent(28,1.407041);
   VbbHcc_tags_Z_dR_stack_8->SetBinContent(29,1.787208);
   VbbHcc_tags_Z_dR_stack_8->SetBinContent(30,0.2204648);
   VbbHcc_tags_Z_dR_stack_8->SetBinContent(31,0.1931734);
   VbbHcc_tags_Z_dR_stack_8->SetBinError(3,1.56816);
   VbbHcc_tags_Z_dR_stack_8->SetBinError(4,2.102485);
   VbbHcc_tags_Z_dR_stack_8->SetBinError(5,1.884431);
   VbbHcc_tags_Z_dR_stack_8->SetBinError(6,1.478994);
   VbbHcc_tags_Z_dR_stack_8->SetBinError(7,1.114988);
   VbbHcc_tags_Z_dR_stack_8->SetBinError(8,1.079082);
   VbbHcc_tags_Z_dR_stack_8->SetBinError(9,1.054391);
   VbbHcc_tags_Z_dR_stack_8->SetBinError(10,0.8677783);
   VbbHcc_tags_Z_dR_stack_8->SetBinError(11,0.7647219);
   VbbHcc_tags_Z_dR_stack_8->SetBinError(12,0.9511463);
   VbbHcc_tags_Z_dR_stack_8->SetBinError(13,1.387354);
   VbbHcc_tags_Z_dR_stack_8->SetBinError(14,0.8023491);
   VbbHcc_tags_Z_dR_stack_8->SetBinError(15,0.975099);
   VbbHcc_tags_Z_dR_stack_8->SetBinError(16,0.9753292);
   VbbHcc_tags_Z_dR_stack_8->SetBinError(17,0.9576516);
   VbbHcc_tags_Z_dR_stack_8->SetBinError(18,0.8992501);
   VbbHcc_tags_Z_dR_stack_8->SetBinError(19,0.7417409);
   VbbHcc_tags_Z_dR_stack_8->SetBinError(20,0.7759234);
   VbbHcc_tags_Z_dR_stack_8->SetBinError(21,0.6718642);
   VbbHcc_tags_Z_dR_stack_8->SetBinError(22,0.4533249);
   VbbHcc_tags_Z_dR_stack_8->SetBinError(23,0.6668551);
   VbbHcc_tags_Z_dR_stack_8->SetBinError(24,0.4486219);
   VbbHcc_tags_Z_dR_stack_8->SetBinError(25,0.5654031);
   VbbHcc_tags_Z_dR_stack_8->SetBinError(26,0.5246766);
   VbbHcc_tags_Z_dR_stack_8->SetBinError(27,0.6283192);
   VbbHcc_tags_Z_dR_stack_8->SetBinError(28,0.5780414);
   VbbHcc_tags_Z_dR_stack_8->SetBinError(29,0.6822556);
   VbbHcc_tags_Z_dR_stack_8->SetBinError(30,0.2204648);
   VbbHcc_tags_Z_dR_stack_8->SetBinError(31,0.1931734);
   VbbHcc_tags_Z_dR_stack_8->SetEntries(509);

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
   VbbHcc_tags_Z_dR_stack_9->SetBinContent(2,0.002368554);
   VbbHcc_tags_Z_dR_stack_9->SetBinContent(3,3.246701);
   VbbHcc_tags_Z_dR_stack_9->SetBinContent(4,7.351655);
   VbbHcc_tags_Z_dR_stack_9->SetBinContent(5,8.829666);
   VbbHcc_tags_Z_dR_stack_9->SetBinContent(6,8.457935);
   VbbHcc_tags_Z_dR_stack_9->SetBinContent(7,6.749377);
   VbbHcc_tags_Z_dR_stack_9->SetBinContent(8,4.086743);
   VbbHcc_tags_Z_dR_stack_9->SetBinContent(9,2.887563);
   VbbHcc_tags_Z_dR_stack_9->SetBinContent(10,2.197073);
   VbbHcc_tags_Z_dR_stack_9->SetBinContent(11,2.20696);
   VbbHcc_tags_Z_dR_stack_9->SetBinContent(12,2.444978);
   VbbHcc_tags_Z_dR_stack_9->SetBinContent(13,2.664638);
   VbbHcc_tags_Z_dR_stack_9->SetBinContent(14,3.059402);
   VbbHcc_tags_Z_dR_stack_9->SetBinContent(15,3.346584);
   VbbHcc_tags_Z_dR_stack_9->SetBinContent(16,3.630658);
   VbbHcc_tags_Z_dR_stack_9->SetBinContent(17,3.398239);
   VbbHcc_tags_Z_dR_stack_9->SetBinContent(18,2.925285);
   VbbHcc_tags_Z_dR_stack_9->SetBinContent(19,2.629826);
   VbbHcc_tags_Z_dR_stack_9->SetBinContent(20,1.889601);
   VbbHcc_tags_Z_dR_stack_9->SetBinContent(21,1.433746);
   VbbHcc_tags_Z_dR_stack_9->SetBinContent(22,1.184999);
   VbbHcc_tags_Z_dR_stack_9->SetBinContent(23,1.009011);
   VbbHcc_tags_Z_dR_stack_9->SetBinContent(24,0.9488752);
   VbbHcc_tags_Z_dR_stack_9->SetBinContent(25,1.037039);
   VbbHcc_tags_Z_dR_stack_9->SetBinContent(26,1.221015);
   VbbHcc_tags_Z_dR_stack_9->SetBinContent(27,1.154509);
   VbbHcc_tags_Z_dR_stack_9->SetBinContent(28,1.135322);
   VbbHcc_tags_Z_dR_stack_9->SetBinContent(29,0.7518804);
   VbbHcc_tags_Z_dR_stack_9->SetBinContent(30,0.4822981);
   VbbHcc_tags_Z_dR_stack_9->SetBinContent(31,0.289365);
   VbbHcc_tags_Z_dR_stack_9->SetBinError(2,0.002368554);
   VbbHcc_tags_Z_dR_stack_9->SetBinError(3,0.09930354);
   VbbHcc_tags_Z_dR_stack_9->SetBinError(4,0.1426584);
   VbbHcc_tags_Z_dR_stack_9->SetBinError(5,0.1639539);
   VbbHcc_tags_Z_dR_stack_9->SetBinError(6,0.1645884);
   VbbHcc_tags_Z_dR_stack_9->SetBinError(7,0.1489335);
   VbbHcc_tags_Z_dR_stack_9->SetBinError(8,0.1488651);
   VbbHcc_tags_Z_dR_stack_9->SetBinError(9,0.09228074);
   VbbHcc_tags_Z_dR_stack_9->SetBinError(10,0.07719426);
   VbbHcc_tags_Z_dR_stack_9->SetBinError(11,0.07839633);
   VbbHcc_tags_Z_dR_stack_9->SetBinError(12,0.09066125);
   VbbHcc_tags_Z_dR_stack_9->SetBinError(13,0.09513839);
   VbbHcc_tags_Z_dR_stack_9->SetBinError(14,0.09989898);
   VbbHcc_tags_Z_dR_stack_9->SetBinError(15,0.1007584);
   VbbHcc_tags_Z_dR_stack_9->SetBinError(16,0.09881629);
   VbbHcc_tags_Z_dR_stack_9->SetBinError(17,0.1058003);
   VbbHcc_tags_Z_dR_stack_9->SetBinError(18,0.09193759);
   VbbHcc_tags_Z_dR_stack_9->SetBinError(19,0.09532973);
   VbbHcc_tags_Z_dR_stack_9->SetBinError(20,0.07276234);
   VbbHcc_tags_Z_dR_stack_9->SetBinError(21,0.06376222);
   VbbHcc_tags_Z_dR_stack_9->SetBinError(22,0.05667686);
   VbbHcc_tags_Z_dR_stack_9->SetBinError(23,0.05172188);
   VbbHcc_tags_Z_dR_stack_9->SetBinError(24,0.05702185);
   VbbHcc_tags_Z_dR_stack_9->SetBinError(25,0.05312329);
   VbbHcc_tags_Z_dR_stack_9->SetBinError(26,0.05893563);
   VbbHcc_tags_Z_dR_stack_9->SetBinError(27,0.05628613);
   VbbHcc_tags_Z_dR_stack_9->SetBinError(28,0.05646385);
   VbbHcc_tags_Z_dR_stack_9->SetBinError(29,0.04567277);
   VbbHcc_tags_Z_dR_stack_9->SetBinError(30,0.05328629);
   VbbHcc_tags_Z_dR_stack_9->SetBinError(31,0.02818939);
   VbbHcc_tags_Z_dR_stack_9->SetEntries(32696);

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
   VbbHcc_tags_Z_dR_stack_10->SetBinContent(2,0.001905841);
   VbbHcc_tags_Z_dR_stack_10->SetBinContent(3,3.197558);
   VbbHcc_tags_Z_dR_stack_10->SetBinContent(4,6.561204);
   VbbHcc_tags_Z_dR_stack_10->SetBinContent(5,8.043332);
   VbbHcc_tags_Z_dR_stack_10->SetBinContent(6,8.410896);
   VbbHcc_tags_Z_dR_stack_10->SetBinContent(7,7.37326);
   VbbHcc_tags_Z_dR_stack_10->SetBinContent(8,5.366894);
   VbbHcc_tags_Z_dR_stack_10->SetBinContent(9,3.649952);
   VbbHcc_tags_Z_dR_stack_10->SetBinContent(10,2.623545);
   VbbHcc_tags_Z_dR_stack_10->SetBinContent(11,2.314911);
   VbbHcc_tags_Z_dR_stack_10->SetBinContent(12,2.264172);
   VbbHcc_tags_Z_dR_stack_10->SetBinContent(13,2.288407);
   VbbHcc_tags_Z_dR_stack_10->SetBinContent(14,2.312138);
   VbbHcc_tags_Z_dR_stack_10->SetBinContent(15,2.490132);
   VbbHcc_tags_Z_dR_stack_10->SetBinContent(16,2.587876);
   VbbHcc_tags_Z_dR_stack_10->SetBinContent(17,2.411754);
   VbbHcc_tags_Z_dR_stack_10->SetBinContent(18,2.145116);
   VbbHcc_tags_Z_dR_stack_10->SetBinContent(19,1.869764);
   VbbHcc_tags_Z_dR_stack_10->SetBinContent(20,1.571805);
   VbbHcc_tags_Z_dR_stack_10->SetBinContent(21,1.327799);
   VbbHcc_tags_Z_dR_stack_10->SetBinContent(22,1.133176);
   VbbHcc_tags_Z_dR_stack_10->SetBinContent(23,1.020363);
   VbbHcc_tags_Z_dR_stack_10->SetBinContent(24,1.121998);
   VbbHcc_tags_Z_dR_stack_10->SetBinContent(25,1.152381);
   VbbHcc_tags_Z_dR_stack_10->SetBinContent(26,1.199603);
   VbbHcc_tags_Z_dR_stack_10->SetBinContent(27,1.168038);
   VbbHcc_tags_Z_dR_stack_10->SetBinContent(28,0.9720295);
   VbbHcc_tags_Z_dR_stack_10->SetBinContent(29,0.7493045);
   VbbHcc_tags_Z_dR_stack_10->SetBinContent(30,0.4474515);
   VbbHcc_tags_Z_dR_stack_10->SetBinContent(31,0.283561);
   VbbHcc_tags_Z_dR_stack_10->SetBinError(2,0.001106506);
   VbbHcc_tags_Z_dR_stack_10->SetBinError(3,0.04500316);
   VbbHcc_tags_Z_dR_stack_10->SetBinError(4,0.06449027);
   VbbHcc_tags_Z_dR_stack_10->SetBinError(5,0.07148985);
   VbbHcc_tags_Z_dR_stack_10->SetBinError(6,0.07319223);
   VbbHcc_tags_Z_dR_stack_10->SetBinError(7,0.06860098);
   VbbHcc_tags_Z_dR_stack_10->SetBinError(8,0.05853794);
   VbbHcc_tags_Z_dR_stack_10->SetBinError(9,0.04820932);
   VbbHcc_tags_Z_dR_stack_10->SetBinError(10,0.04085245);
   VbbHcc_tags_Z_dR_stack_10->SetBinError(11,0.03840294);
   VbbHcc_tags_Z_dR_stack_10->SetBinError(12,0.03796644);
   VbbHcc_tags_Z_dR_stack_10->SetBinError(13,0.03817234);
   VbbHcc_tags_Z_dR_stack_10->SetBinError(14,0.03836957);
   VbbHcc_tags_Z_dR_stack_10->SetBinError(15,0.03981042);
   VbbHcc_tags_Z_dR_stack_10->SetBinError(16,0.04063573);
   VbbHcc_tags_Z_dR_stack_10->SetBinError(17,0.03926444);
   VbbHcc_tags_Z_dR_stack_10->SetBinError(18,0.03700672);
   VbbHcc_tags_Z_dR_stack_10->SetBinError(19,0.03455475);
   VbbHcc_tags_Z_dR_stack_10->SetBinError(20,0.03164772);
   VbbHcc_tags_Z_dR_stack_10->SetBinError(21,0.02902171);
   VbbHcc_tags_Z_dR_stack_10->SetBinError(22,0.02681855);
   VbbHcc_tags_Z_dR_stack_10->SetBinError(23,0.02549657);
   VbbHcc_tags_Z_dR_stack_10->SetBinError(24,0.02674647);
   VbbHcc_tags_Z_dR_stack_10->SetBinError(25,0.02711602);
   VbbHcc_tags_Z_dR_stack_10->SetBinError(26,0.02766727);
   VbbHcc_tags_Z_dR_stack_10->SetBinError(27,0.02725561);
   VbbHcc_tags_Z_dR_stack_10->SetBinError(28,0.02487593);
   VbbHcc_tags_Z_dR_stack_10->SetBinError(29,0.02185145);
   VbbHcc_tags_Z_dR_stack_10->SetBinError(30,0.0168285);
   VbbHcc_tags_Z_dR_stack_10->SetBinError(31,0.01343882);
   VbbHcc_tags_Z_dR_stack_10->SetEntries(124885);

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
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(3,0.3222886);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(4,0.4029399);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(5,0.3157134);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(6,0.1890554);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(7,0.08863992);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(8,0.05128643);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(9,0.03980512);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(10,0.06253709);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(11,0.03518136);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(12,0.04174097);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(13,0.04936027);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(14,0.05888039);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(15,0.07816982);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(16,0.06554845);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(17,0.0666162);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(18,0.06123356);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(19,0.03811979);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(20,0.03227322);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(21,0.03305388);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(22,0.02573337);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(23,0.01408879);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(24,0.01613176);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(25,0.02593174);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(26,0.01252346);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(27,0.04600514);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(28,0.03427183);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(29,0.01549467);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(30,0.01167169);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(31,0.01814411);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(3,0.03524349);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(4,0.03401389);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(5,0.02966868);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(6,0.02259383);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(7,0.01506849);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(8,0.01139198);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(9,0.01022705);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(10,0.0232308);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(11,0.01043398);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(12,0.00997831);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(13,0.01122978);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(14,0.01281605);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(15,0.01517788);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(16,0.01362856);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(17,0.01363887);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(18,0.01286535);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(19,0.01029245);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(20,0.008768105);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(21,0.009612858);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(22,0.009306027);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(23,0.005988628);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(24,0.006702055);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(25,0.008091924);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(26,0.005753127);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(27,0.02221025);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(28,0.00958931);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(29,0.006537993);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(30,0.00621024);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(31,0.007506677);
   VbbHcc_tags_Z_dR_stack_11->SetEntries(903);

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
   VbbHcc_tags_Z_dR_stack_12->SetBinContent(3,0.09754797);
   VbbHcc_tags_Z_dR_stack_12->SetBinContent(4,0.2156173);
   VbbHcc_tags_Z_dR_stack_12->SetBinContent(5,0.1851895);
   VbbHcc_tags_Z_dR_stack_12->SetBinContent(6,0.1054766);
   VbbHcc_tags_Z_dR_stack_12->SetBinContent(7,0.05910609);
   VbbHcc_tags_Z_dR_stack_12->SetBinContent(8,0.03640247);
   VbbHcc_tags_Z_dR_stack_12->SetBinContent(9,0.0216698);
   VbbHcc_tags_Z_dR_stack_12->SetBinContent(10,0.01861896);
   VbbHcc_tags_Z_dR_stack_12->SetBinContent(11,0.01772133);
   VbbHcc_tags_Z_dR_stack_12->SetBinContent(12,0.02121551);
   VbbHcc_tags_Z_dR_stack_12->SetBinContent(13,0.02285711);
   VbbHcc_tags_Z_dR_stack_12->SetBinContent(14,0.02253558);
   VbbHcc_tags_Z_dR_stack_12->SetBinContent(15,0.03087983);
   VbbHcc_tags_Z_dR_stack_12->SetBinContent(16,0.03066906);
   VbbHcc_tags_Z_dR_stack_12->SetBinContent(17,0.0358508);
   VbbHcc_tags_Z_dR_stack_12->SetBinContent(18,0.02387069);
   VbbHcc_tags_Z_dR_stack_12->SetBinContent(19,0.02354138);
   VbbHcc_tags_Z_dR_stack_12->SetBinContent(20,0.01686127);
   VbbHcc_tags_Z_dR_stack_12->SetBinContent(21,0.01486604);
   VbbHcc_tags_Z_dR_stack_12->SetBinContent(22,0.01236574);
   VbbHcc_tags_Z_dR_stack_12->SetBinContent(23,0.008268296);
   VbbHcc_tags_Z_dR_stack_12->SetBinContent(24,0.007999373);
   VbbHcc_tags_Z_dR_stack_12->SetBinContent(25,0.009236163);
   VbbHcc_tags_Z_dR_stack_12->SetBinContent(26,0.008329846);
   VbbHcc_tags_Z_dR_stack_12->SetBinContent(27,0.01635113);
   VbbHcc_tags_Z_dR_stack_12->SetBinContent(28,0.02096968);
   VbbHcc_tags_Z_dR_stack_12->SetBinContent(29,0.01603989);
   VbbHcc_tags_Z_dR_stack_12->SetBinContent(30,0.009981622);
   VbbHcc_tags_Z_dR_stack_12->SetBinContent(31,0.00518239);
   VbbHcc_tags_Z_dR_stack_12->SetBinError(3,0.005880769);
   VbbHcc_tags_Z_dR_stack_12->SetBinError(4,0.009256665);
   VbbHcc_tags_Z_dR_stack_12->SetBinError(5,0.008099698);
   VbbHcc_tags_Z_dR_stack_12->SetBinError(6,0.005935931);
   VbbHcc_tags_Z_dR_stack_12->SetBinError(7,0.004547384);
   VbbHcc_tags_Z_dR_stack_12->SetBinError(8,0.00357433);
   VbbHcc_tags_Z_dR_stack_12->SetBinError(9,0.002892851);
   VbbHcc_tags_Z_dR_stack_12->SetBinError(10,0.002553385);
   VbbHcc_tags_Z_dR_stack_12->SetBinError(11,0.002485935);
   VbbHcc_tags_Z_dR_stack_12->SetBinError(12,0.002747126);
   VbbHcc_tags_Z_dR_stack_12->SetBinError(13,0.002826635);
   VbbHcc_tags_Z_dR_stack_12->SetBinError(14,0.002767994);
   VbbHcc_tags_Z_dR_stack_12->SetBinError(15,0.003284659);
   VbbHcc_tags_Z_dR_stack_12->SetBinError(16,0.003269242);
   VbbHcc_tags_Z_dR_stack_12->SetBinError(17,0.004980314);
   VbbHcc_tags_Z_dR_stack_12->SetBinError(18,0.002820401);
   VbbHcc_tags_Z_dR_stack_12->SetBinError(19,0.002892647);
   VbbHcc_tags_Z_dR_stack_12->SetBinError(20,0.002394802);
   VbbHcc_tags_Z_dR_stack_12->SetBinError(21,0.002265979);
   VbbHcc_tags_Z_dR_stack_12->SetBinError(22,0.002051955);
   VbbHcc_tags_Z_dR_stack_12->SetBinError(23,0.001625615);
   VbbHcc_tags_Z_dR_stack_12->SetBinError(24,0.001716611);
   VbbHcc_tags_Z_dR_stack_12->SetBinError(25,0.001754663);
   VbbHcc_tags_Z_dR_stack_12->SetBinError(26,0.001654394);
   VbbHcc_tags_Z_dR_stack_12->SetBinError(27,0.002357351);
   VbbHcc_tags_Z_dR_stack_12->SetBinError(28,0.002703199);
   VbbHcc_tags_Z_dR_stack_12->SetBinError(29,0.002358751);
   VbbHcc_tags_Z_dR_stack_12->SetBinError(30,0.001843548);
   VbbHcc_tags_Z_dR_stack_12->SetBinError(31,0.00140907);
   VbbHcc_tags_Z_dR_stack_12->SetEntries(3336);

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
   
   TH1D *VbbHcc_tags_Z_dR__37 = new TH1D("VbbHcc_tags_Z_dR__37","",30,0,6);
   VbbHcc_tags_Z_dR__37->SetBinContent(2,90);
   VbbHcc_tags_Z_dR__37->SetBinContent(3,215033);
   VbbHcc_tags_Z_dR__37->SetBinContent(4,240543);
   VbbHcc_tags_Z_dR__37->SetBinContent(5,174999);
   VbbHcc_tags_Z_dR__37->SetBinContent(6,148437);
   VbbHcc_tags_Z_dR__37->SetBinContent(7,131129);
   VbbHcc_tags_Z_dR__37->SetBinContent(8,120781);
   VbbHcc_tags_Z_dR__37->SetBinContent(9,115253);
   VbbHcc_tags_Z_dR__37->SetBinContent(10,112863);
   VbbHcc_tags_Z_dR__37->SetBinContent(11,113048);
   VbbHcc_tags_Z_dR__37->SetBinContent(12,116046);
   VbbHcc_tags_Z_dR__37->SetBinContent(13,122543);
   VbbHcc_tags_Z_dR__37->SetBinContent(14,129832);
   VbbHcc_tags_Z_dR__37->SetBinContent(15,137609);
   VbbHcc_tags_Z_dR__37->SetBinContent(16,141992);
   VbbHcc_tags_Z_dR__37->SetBinContent(17,135038);
   VbbHcc_tags_Z_dR__37->SetBinContent(18,125370);
   VbbHcc_tags_Z_dR__37->SetBinContent(19,113169);
   VbbHcc_tags_Z_dR__37->SetBinContent(20,99681);
   VbbHcc_tags_Z_dR__37->SetBinContent(21,86196);
   VbbHcc_tags_Z_dR__37->SetBinContent(22,72289);
   VbbHcc_tags_Z_dR__37->SetBinContent(23,59968);
   VbbHcc_tags_Z_dR__37->SetBinContent(24,50104);
   VbbHcc_tags_Z_dR__37->SetBinContent(25,42882);
   VbbHcc_tags_Z_dR__37->SetBinContent(26,37050);
   VbbHcc_tags_Z_dR__37->SetBinContent(27,33301);
   VbbHcc_tags_Z_dR__37->SetBinContent(28,31377);
   VbbHcc_tags_Z_dR__37->SetBinContent(29,30590);
   VbbHcc_tags_Z_dR__37->SetBinContent(30,20249);
   VbbHcc_tags_Z_dR__37->SetBinContent(31,14644);
   VbbHcc_tags_Z_dR__37->SetEntries(2972135);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR__37->SetLineColor(ci);
   VbbHcc_tags_Z_dR__37->SetLineWidth(2);
   VbbHcc_tags_Z_dR__37->SetMarkerStyle(20);
   VbbHcc_tags_Z_dR__37->SetMarkerSize(1.2);
   VbbHcc_tags_Z_dR__37->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR__37->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR__37->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR__37->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR__37->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR__37->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR__37->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR__37->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR__37->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR__37->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR__37->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR__37->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR__37->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR__37->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR__37->Draw("same E");
   
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
   59.21446,
   184120.5,
   183691.6,
   134079.1,
   111970.1,
   98695.54,
   88536.99,
   84182.77,
   79611.55,
   81710.16,
   81329.11,
   83838.36,
   93641.73,
   104047.5,
   106654.1,
   99491.39,
   97826.49,
   77117.73,
   77051.12,
   61178.83,
   55209.8,
   41074.92,
   35017.15,
   30119.11,
   27179.01,
   21971.5,
   21406.77,
   21237.48,
   12825.92};
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
   20.08436,
   4480.964,
   5575.466,
   4781.255,
   3788.958,
   3691.402,
   3679.003,
   3290.888,
   3604.571,
   3782.492,
   3889.548,
   2973.248,
   3568.962,
   3670.125,
   4112.393,
   3822.446,
   4332.822,
   2690.427,
   3584.868,
   3498.774,
   3916.492,
   2228.813,
   2612.708,
   2656.35,
   2112.495,
   1601.514,
   1729.533,
   1680.073,
   934.4441};
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
   Graph_Graph_from_VbbHcc_tags_Z_dR1037->SetMaximum(208193.8);
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
   TLatex *   tex = new TLatex(0.5,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
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
   
   TH1D *data_mc_ratio__38 = new TH1D("data_mc_ratio__38","",30,0,6);
   data_mc_ratio__38->SetBinContent(2,1.519899);
   data_mc_ratio__38->SetBinContent(3,1.167893);
   data_mc_ratio__38->SetBinContent(4,1.309494);
   data_mc_ratio__38->SetBinContent(5,1.305193);
   data_mc_ratio__38->SetBinContent(6,1.325684);
   data_mc_ratio__38->SetBinContent(7,1.328621);
   data_mc_ratio__38->SetBinContent(8,1.364187);
   data_mc_ratio__38->SetBinContent(9,1.369081);
   data_mc_ratio__38->SetBinContent(10,1.417671);
   data_mc_ratio__38->SetBinContent(11,1.383524);
   data_mc_ratio__38->SetBinContent(12,1.426869);
   data_mc_ratio__38->SetBinContent(13,1.461658);
   data_mc_ratio__38->SetBinContent(14,1.386476);
   data_mc_ratio__38->SetBinContent(15,1.322559);
   data_mc_ratio__38->SetBinContent(16,1.331332);
   data_mc_ratio__38->SetBinContent(17,1.357283);
   data_mc_ratio__38->SetBinContent(18,1.281555);
   data_mc_ratio__38->SetBinContent(19,1.467484);
   data_mc_ratio__38->SetBinContent(20,1.2937);
   data_mc_ratio__38->SetBinContent(21,1.408919);
   data_mc_ratio__38->SetBinContent(22,1.309351);
   data_mc_ratio__38->SetBinContent(23,1.459966);
   data_mc_ratio__38->SetBinContent(24,1.430842);
   data_mc_ratio__38->SetBinContent(25,1.423747);
   data_mc_ratio__38->SetBinContent(26,1.363184);
   data_mc_ratio__38->SetBinContent(27,1.515645);
   data_mc_ratio__38->SetBinContent(28,1.465751);
   data_mc_ratio__38->SetBinContent(29,1.440378);
   data_mc_ratio__38->SetBinContent(30,1.578756);
   data_mc_ratio__38->SetBinContent(31,1.151204);
   data_mc_ratio__38->SetBinError(2,0.1602114);
   data_mc_ratio__38->SetBinError(3,0.002518549);
   data_mc_ratio__38->SetBinError(4,0.002669974);
   data_mc_ratio__38->SetBinError(5,0.003120016);
   data_mc_ratio__38->SetBinError(6,0.003440875);
   data_mc_ratio__38->SetBinError(7,0.003669035);
   data_mc_ratio__38->SetBinError(8,0.003925315);
   data_mc_ratio__38->SetBinError(9,0.004032765);
   data_mc_ratio__38->SetBinError(10,0.004219876);
   data_mc_ratio__38->SetBinError(11,0.004114863);
   data_mc_ratio__38->SetBinError(12,0.004188602);
   data_mc_ratio__38->SetBinError(13,0.004175433);
   data_mc_ratio__38->SetBinError(14,0.00384788);
   data_mc_ratio__38->SetBinError(15,0.003565263);
   data_mc_ratio__38->SetBinError(16,0.003533087);
   data_mc_ratio__38->SetBinError(17,0.003693537);
   data_mc_ratio__38->SetBinError(18,0.003619431);
   data_mc_ratio__38->SetBinError(19,0.004362239);
   data_mc_ratio__38->SetBinError(20,0.004097578);
   data_mc_ratio__38->SetBinError(21,0.004798907);
   data_mc_ratio__38->SetBinError(22,0.004869899);
   data_mc_ratio__38->SetBinError(23,0.005961877);
   data_mc_ratio__38->SetBinError(24,0.006392274);
   data_mc_ratio__38->SetBinError(25,0.006875359);
   data_mc_ratio__38->SetBinError(26,0.007082073);
   data_mc_ratio__38->SetBinError(27,0.008305561);
   data_mc_ratio__38->SetBinError(28,0.008274744);
   data_mc_ratio__38->SetBinError(29,0.008235437);
   data_mc_ratio__38->SetBinError(30,0.01109464);
   data_mc_ratio__38->SetBinError(31,0.2248286);
   data_mc_ratio__38->SetMinimum(0.4);
   data_mc_ratio__38->SetMaximum(1.6);
   data_mc_ratio__38->SetEntries(3555.263);
   data_mc_ratio__38->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__38->SetLineColor(ci);
   data_mc_ratio__38->SetLineWidth(2);
   data_mc_ratio__38->SetMarkerStyle(20);
   data_mc_ratio__38->SetMarkerSize(1.2);
   data_mc_ratio__38->GetXaxis()->SetTitle("#DeltaR(b,b)");
   data_mc_ratio__38->GetXaxis()->SetRange(1,30);
   data_mc_ratio__38->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__38->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__38->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__38->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__38->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__38->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__38->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__38->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__38->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__38->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__38->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__38->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__38->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__38->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__38->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__38->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__38->Draw("E1");
   
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
   0.33918,
   0.02433713,
   0.03035232,
   0.03565997,
   0.03383901,
   0.03740191,
   0.04155329,
   0.03909218,
   0.04527698,
   0.04629157,
   0.04782479,
   0.03546405,
   0.03811295,
   0.03527354,
   0.03855822,
   0.03841986,
   0.04429088,
   0.03488727,
   0.04652584,
   0.05718928,
   0.07093834,
   0.05426213,
   0.07461224,
   0.08819482,
   0.07772524,
   0.07289052,
   0.08079374,
   0.07910883,
   0.0728559};
   gre = new TGraphErrors(30,Graph_from_mc_statistical_error_fx1038,Graph_from_mc_statistical_error_fy1038,Graph_from_mc_statistical_error_fex1038,Graph_from_mc_statistical_error_fey1038);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1038 = new TH1F("Graph_Graph_from_mc_statistical_error1038","",100,0,6.6);
   Graph_Graph_from_mc_statistical_error1038->SetMinimum(0.592984);
   Graph_Graph_from_mc_statistical_error1038->SetMaximum(1.407016);
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
