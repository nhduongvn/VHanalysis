void HMass_VbbHcc_18()
{
//=========Macro generated from canvas: HMass_VbbHcc_18/HMass_VbbHcc_18
//=========  (Tue Sep 20 10:39:22 2022) by ROOT version 6.14/09
   TCanvas *HMass_VbbHcc_18 = new TCanvas("HMass_VbbHcc_18", "HMass_VbbHcc_18",0,0,600,600);
   HMass_VbbHcc_18->SetHighLightColor(2);
   HMass_VbbHcc_18->Range(0,0,1,1);
   HMass_VbbHcc_18->SetFillColor(0);
   HMass_VbbHcc_18->SetFillStyle(4000);
   HMass_VbbHcc_18->SetBorderMode(0);
   HMass_VbbHcc_18->SetBorderSize(2);
   HMass_VbbHcc_18->SetFrameFillStyle(1000);
   HMass_VbbHcc_18->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-45.96762,-239.0697,315.7258,238840.6);
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
   st->SetMaximum(204697.8);
   
   TH1F *st_stack_7 = new TH1F("st_stack_7","",30,0,300);
   st_stack_7->SetMinimum(0.01);
   st_stack_7->SetMaximum(214932.7);
   st_stack_7->SetDirectory(0);
   st_stack_7->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_7->SetLineColor(ci);
   st_stack_7->GetXaxis()->SetRange(1,30);
   st_stack_7->GetXaxis()->SetLabelFont(42);
   st_stack_7->GetXaxis()->SetLabelSize(0.035);
   st_stack_7->GetXaxis()->SetTitleSize(0.035);
   st_stack_7->GetXaxis()->SetTitleFont(42);
   st_stack_7->GetYaxis()->SetTitle("Events/10.0");
   st_stack_7->GetYaxis()->SetLabelFont(42);
   st_stack_7->GetYaxis()->SetLabelSize(0.05);
   st_stack_7->GetYaxis()->SetTitleSize(0.057);
   st_stack_7->GetYaxis()->SetTitleOffset(1.2);
   st_stack_7->GetYaxis()->SetTitleFont(42);
   st_stack_7->GetZaxis()->SetLabelFont(42);
   st_stack_7->GetZaxis()->SetLabelSize(0.035);
   st_stack_7->GetZaxis()->SetTitleSize(0.035);
   st_stack_7->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_7);
   
   
   TH1D *VbbHcc_HMass_stack_1 = new TH1D("VbbHcc_HMass_stack_1","",30,0,300);
   VbbHcc_HMass_stack_1->SetBinContent(2,425.8158);
   VbbHcc_HMass_stack_1->SetBinContent(3,21017.99);
   VbbHcc_HMass_stack_1->SetBinContent(4,59194.53);
   VbbHcc_HMass_stack_1->SetBinContent(5,85517.99);
   VbbHcc_HMass_stack_1->SetBinContent(6,81670.31);
   VbbHcc_HMass_stack_1->SetBinContent(7,75609.38);
   VbbHcc_HMass_stack_1->SetBinContent(8,66990.63);
   VbbHcc_HMass_stack_1->SetBinContent(9,59499.41);
   VbbHcc_HMass_stack_1->SetBinContent(10,60744.71);
   VbbHcc_HMass_stack_1->SetBinContent(11,68656.3);
   VbbHcc_HMass_stack_1->SetBinContent(12,56220.92);
   VbbHcc_HMass_stack_1->SetBinContent(13,55766.67);
   VbbHcc_HMass_stack_1->SetBinContent(14,57181.78);
   VbbHcc_HMass_stack_1->SetBinContent(15,54838.78);
   VbbHcc_HMass_stack_1->SetBinContent(16,47475.12);
   VbbHcc_HMass_stack_1->SetBinContent(17,43067.41);
   VbbHcc_HMass_stack_1->SetBinContent(18,48054.62);
   VbbHcc_HMass_stack_1->SetBinContent(19,34829.08);
   VbbHcc_HMass_stack_1->SetBinContent(20,39184.67);
   VbbHcc_HMass_stack_1->SetBinContent(21,31205.39);
   VbbHcc_HMass_stack_1->SetBinContent(22,35413.57);
   VbbHcc_HMass_stack_1->SetBinContent(23,33222.43);
   VbbHcc_HMass_stack_1->SetBinContent(24,24718.36);
   VbbHcc_HMass_stack_1->SetBinContent(25,28041.88);
   VbbHcc_HMass_stack_1->SetBinContent(26,17980.18);
   VbbHcc_HMass_stack_1->SetBinContent(27,18423.48);
   VbbHcc_HMass_stack_1->SetBinContent(28,16292.61);
   VbbHcc_HMass_stack_1->SetBinContent(29,17067.54);
   VbbHcc_HMass_stack_1->SetBinContent(30,16039.04);
   VbbHcc_HMass_stack_1->SetBinContent(31,184007);
   VbbHcc_HMass_stack_1->SetBinError(2,380.3707);
   VbbHcc_HMass_stack_1->SetBinError(3,2852.505);
   VbbHcc_HMass_stack_1->SetBinError(4,5302.175);
   VbbHcc_HMass_stack_1->SetBinError(5,6862.731);
   VbbHcc_HMass_stack_1->SetBinError(6,5385.065);
   VbbHcc_HMass_stack_1->SetBinError(7,5196.862);
   VbbHcc_HMass_stack_1->SetBinError(8,4703.694);
   VbbHcc_HMass_stack_1->SetBinError(9,4446.356);
   VbbHcc_HMass_stack_1->SetBinError(10,4715.767);
   VbbHcc_HMass_stack_1->SetBinError(11,7663.388);
   VbbHcc_HMass_stack_1->SetBinError(12,4436.711);
   VbbHcc_HMass_stack_1->SetBinError(13,4329.255);
   VbbHcc_HMass_stack_1->SetBinError(14,4480.442);
   VbbHcc_HMass_stack_1->SetBinError(15,4486.633);
   VbbHcc_HMass_stack_1->SetBinError(16,4087.463);
   VbbHcc_HMass_stack_1->SetBinError(17,3943.918);
   VbbHcc_HMass_stack_1->SetBinError(18,4102.513);
   VbbHcc_HMass_stack_1->SetBinError(19,3289.414);
   VbbHcc_HMass_stack_1->SetBinError(20,3691.856);
   VbbHcc_HMass_stack_1->SetBinError(21,3130.959);
   VbbHcc_HMass_stack_1->SetBinError(22,3384.46);
   VbbHcc_HMass_stack_1->SetBinError(23,3279.644);
   VbbHcc_HMass_stack_1->SetBinError(24,2647.2);
   VbbHcc_HMass_stack_1->SetBinError(25,3645.615);
   VbbHcc_HMass_stack_1->SetBinError(26,2222.116);
   VbbHcc_HMass_stack_1->SetBinError(27,2301.16);
   VbbHcc_HMass_stack_1->SetBinError(28,2093.88);
   VbbHcc_HMass_stack_1->SetBinError(29,2224.935);
   VbbHcc_HMass_stack_1->SetBinError(30,2144.163);
   VbbHcc_HMass_stack_1->SetBinError(31,6700.925);
   VbbHcc_HMass_stack_1->SetEntries(20172);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_HMass_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_HMass_stack_1->SetLineColor(ci);
   VbbHcc_HMass_stack_1->GetXaxis()->SetRange(1,300);
   VbbHcc_HMass_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_HMass_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_HMass_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_HMass_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_HMass_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_HMass_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_HMass_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_HMass_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_HMass_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_HMass_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_HMass_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_HMass_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_HMass_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_HMass_stack_1,"");
   
   TH1D *VbbHcc_HMass_stack_2 = new TH1D("VbbHcc_HMass_stack_2","",30,0,300);
   VbbHcc_HMass_stack_2->SetBinContent(2,3.4107);
   VbbHcc_HMass_stack_2->SetBinContent(3,72.47081);
   VbbHcc_HMass_stack_2->SetBinContent(4,202.6217);
   VbbHcc_HMass_stack_2->SetBinContent(5,306.8381);
   VbbHcc_HMass_stack_2->SetBinContent(6,411.0391);
   VbbHcc_HMass_stack_2->SetBinContent(7,604.1521);
   VbbHcc_HMass_stack_2->SetBinContent(8,869.5897);
   VbbHcc_HMass_stack_2->SetBinContent(9,1011.001);
   VbbHcc_HMass_stack_2->SetBinContent(10,822.658);
   VbbHcc_HMass_stack_2->SetBinContent(11,672.4546);
   VbbHcc_HMass_stack_2->SetBinContent(12,647.1674);
   VbbHcc_HMass_stack_2->SetBinContent(13,616.1566);
   VbbHcc_HMass_stack_2->SetBinContent(14,583.0279);
   VbbHcc_HMass_stack_2->SetBinContent(15,555.9614);
   VbbHcc_HMass_stack_2->SetBinContent(16,489.3966);
   VbbHcc_HMass_stack_2->SetBinContent(17,442.4382);
   VbbHcc_HMass_stack_2->SetBinContent(18,404.4842);
   VbbHcc_HMass_stack_2->SetBinContent(19,369.2276);
   VbbHcc_HMass_stack_2->SetBinContent(20,348.4503);
   VbbHcc_HMass_stack_2->SetBinContent(21,316.0024);
   VbbHcc_HMass_stack_2->SetBinContent(22,299.8112);
   VbbHcc_HMass_stack_2->SetBinContent(23,255.4368);
   VbbHcc_HMass_stack_2->SetBinContent(24,258.6447);
   VbbHcc_HMass_stack_2->SetBinContent(25,216.9306);
   VbbHcc_HMass_stack_2->SetBinContent(26,199.0244);
   VbbHcc_HMass_stack_2->SetBinContent(27,192.422);
   VbbHcc_HMass_stack_2->SetBinContent(28,184.1186);
   VbbHcc_HMass_stack_2->SetBinContent(29,156.1102);
   VbbHcc_HMass_stack_2->SetBinContent(30,159.7544);
   VbbHcc_HMass_stack_2->SetBinContent(31,1971.759);
   VbbHcc_HMass_stack_2->SetBinError(2,1.150602);
   VbbHcc_HMass_stack_2->SetBinError(3,3.874709);
   VbbHcc_HMass_stack_2->SetBinError(4,6.754823);
   VbbHcc_HMass_stack_2->SetBinError(5,8.444744);
   VbbHcc_HMass_stack_2->SetBinError(6,9.424461);
   VbbHcc_HMass_stack_2->SetBinError(7,12.18829);
   VbbHcc_HMass_stack_2->SetBinError(8,13.82727);
   VbbHcc_HMass_stack_2->SetBinError(9,15.30221);
   VbbHcc_HMass_stack_2->SetBinError(10,13.81372);
   VbbHcc_HMass_stack_2->SetBinError(11,12.32101);
   VbbHcc_HMass_stack_2->SetBinError(12,11.54016);
   VbbHcc_HMass_stack_2->SetBinError(13,12.36705);
   VbbHcc_HMass_stack_2->SetBinError(14,11.76703);
   VbbHcc_HMass_stack_2->SetBinError(15,15.05681);
   VbbHcc_HMass_stack_2->SetBinError(16,10.78415);
   VbbHcc_HMass_stack_2->SetBinError(17,9.916703);
   VbbHcc_HMass_stack_2->SetBinError(18,9.570112);
   VbbHcc_HMass_stack_2->SetBinError(19,9.042991);
   VbbHcc_HMass_stack_2->SetBinError(20,8.867146);
   VbbHcc_HMass_stack_2->SetBinError(21,8.10445);
   VbbHcc_HMass_stack_2->SetBinError(22,15.10039);
   VbbHcc_HMass_stack_2->SetBinError(23,7.166306);
   VbbHcc_HMass_stack_2->SetBinError(24,9.052018);
   VbbHcc_HMass_stack_2->SetBinError(25,6.554029);
   VbbHcc_HMass_stack_2->SetBinError(26,6.429581);
   VbbHcc_HMass_stack_2->SetBinError(27,6.594617);
   VbbHcc_HMass_stack_2->SetBinError(28,6.906362);
   VbbHcc_HMass_stack_2->SetBinError(29,5.645071);
   VbbHcc_HMass_stack_2->SetBinError(30,13.966);
   VbbHcc_HMass_stack_2->SetBinError(31,20.25756);
   VbbHcc_HMass_stack_2->SetEntries(157315);

   ci = TColor::GetColor("#660066");
   VbbHcc_HMass_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_HMass_stack_2->SetLineColor(ci);
   VbbHcc_HMass_stack_2->GetXaxis()->SetRange(1,300);
   VbbHcc_HMass_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_HMass_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_HMass_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_HMass_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_HMass_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_HMass_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_HMass_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_HMass_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_HMass_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_HMass_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_HMass_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_HMass_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_HMass_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_HMass_stack_2,"");
   
   TH1D *VbbHcc_HMass_stack_3 = new TH1D("VbbHcc_HMass_stack_3","",30,0,300);
   VbbHcc_HMass_stack_3->SetBinContent(2,49.22781);
   VbbHcc_HMass_stack_3->SetBinContent(3,1365.829);
   VbbHcc_HMass_stack_3->SetBinContent(4,4035.789);
   VbbHcc_HMass_stack_3->SetBinContent(5,5972.152);
   VbbHcc_HMass_stack_3->SetBinContent(6,7750.663);
   VbbHcc_HMass_stack_3->SetBinContent(7,10493.21);
   VbbHcc_HMass_stack_3->SetBinContent(8,14473.16);
   VbbHcc_HMass_stack_3->SetBinContent(9,16238.9);
   VbbHcc_HMass_stack_3->SetBinContent(10,14965.96);
   VbbHcc_HMass_stack_3->SetBinContent(11,14071.23);
   VbbHcc_HMass_stack_3->SetBinContent(12,13701.34);
   VbbHcc_HMass_stack_3->SetBinContent(13,12797.76);
   VbbHcc_HMass_stack_3->SetBinContent(14,11587.14);
   VbbHcc_HMass_stack_3->SetBinContent(15,10111.63);
   VbbHcc_HMass_stack_3->SetBinContent(16,8748.321);
   VbbHcc_HMass_stack_3->SetBinContent(17,7638.491);
   VbbHcc_HMass_stack_3->SetBinContent(18,6731.935);
   VbbHcc_HMass_stack_3->SetBinContent(19,5927.1);
   VbbHcc_HMass_stack_3->SetBinContent(20,5301.432);
   VbbHcc_HMass_stack_3->SetBinContent(21,4735.746);
   VbbHcc_HMass_stack_3->SetBinContent(22,4222.61);
   VbbHcc_HMass_stack_3->SetBinContent(23,3809.981);
   VbbHcc_HMass_stack_3->SetBinContent(24,3420.694);
   VbbHcc_HMass_stack_3->SetBinContent(25,3059.99);
   VbbHcc_HMass_stack_3->SetBinContent(26,2781.666);
   VbbHcc_HMass_stack_3->SetBinContent(27,2461.169);
   VbbHcc_HMass_stack_3->SetBinContent(28,2239.216);
   VbbHcc_HMass_stack_3->SetBinContent(29,2025.221);
   VbbHcc_HMass_stack_3->SetBinContent(30,1826.108);
   VbbHcc_HMass_stack_3->SetBinContent(31,20795.63);
   VbbHcc_HMass_stack_3->SetBinError(2,2.112407);
   VbbHcc_HMass_stack_3->SetBinError(3,11.30932);
   VbbHcc_HMass_stack_3->SetBinError(4,18.40668);
   VbbHcc_HMass_stack_3->SetBinError(5,22.73254);
   VbbHcc_HMass_stack_3->SetBinError(6,25.52556);
   VbbHcc_HMass_stack_3->SetBinError(7,29.86579);
   VbbHcc_HMass_stack_3->SetBinError(8,35.22086);
   VbbHcc_HMass_stack_3->SetBinError(9,38.24411);
   VbbHcc_HMass_stack_3->SetBinError(10,35.98559);
   VbbHcc_HMass_stack_3->SetBinError(11,35.21919);
   VbbHcc_HMass_stack_3->SetBinError(12,35.37449);
   VbbHcc_HMass_stack_3->SetBinError(13,33.15914);
   VbbHcc_HMass_stack_3->SetBinError(14,31.77816);
   VbbHcc_HMass_stack_3->SetBinError(15,29.44507);
   VbbHcc_HMass_stack_3->SetBinError(16,27.19254);
   VbbHcc_HMass_stack_3->SetBinError(17,25.49899);
   VbbHcc_HMass_stack_3->SetBinError(18,24.11218);
   VbbHcc_HMass_stack_3->SetBinError(19,22.98768);
   VbbHcc_HMass_stack_3->SetBinError(20,21.70671);
   VbbHcc_HMass_stack_3->SetBinError(21,20.06386);
   VbbHcc_HMass_stack_3->SetBinError(22,19.57764);
   VbbHcc_HMass_stack_3->SetBinError(23,17.94898);
   VbbHcc_HMass_stack_3->SetBinError(24,16.9857);
   VbbHcc_HMass_stack_3->SetBinError(25,15.83554);
   VbbHcc_HMass_stack_3->SetBinError(26,15.42179);
   VbbHcc_HMass_stack_3->SetBinError(27,14.35239);
   VbbHcc_HMass_stack_3->SetBinError(28,13.49684);
   VbbHcc_HMass_stack_3->SetBinError(29,13.33819);
   VbbHcc_HMass_stack_3->SetBinError(30,12.42227);
   VbbHcc_HMass_stack_3->SetBinError(31,42.71419);
   VbbHcc_HMass_stack_3->SetEntries(3233690);

   ci = TColor::GetColor("#cc00cc");
   VbbHcc_HMass_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_HMass_stack_3->SetLineColor(ci);
   VbbHcc_HMass_stack_3->GetXaxis()->SetRange(1,300);
   VbbHcc_HMass_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_HMass_stack_3->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_HMass_stack_3->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_HMass_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_HMass_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_HMass_stack_3->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_HMass_stack_3->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_HMass_stack_3->GetYaxis()->SetTitleOffset(0);
   VbbHcc_HMass_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_HMass_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_HMass_stack_3->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_HMass_stack_3->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_HMass_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_HMass_stack_3,"");
   
   TH1D *VbbHcc_HMass_stack_4 = new TH1D("VbbHcc_HMass_stack_4","",30,0,300);
   VbbHcc_HMass_stack_4->SetBinContent(2,0.5661696);
   VbbHcc_HMass_stack_4->SetBinContent(3,37.04771);
   VbbHcc_HMass_stack_4->SetBinContent(4,117.9247);
   VbbHcc_HMass_stack_4->SetBinContent(5,237.8389);
   VbbHcc_HMass_stack_4->SetBinContent(6,303.7507);
   VbbHcc_HMass_stack_4->SetBinContent(7,437.661);
   VbbHcc_HMass_stack_4->SetBinContent(8,638.0317);
   VbbHcc_HMass_stack_4->SetBinContent(9,766.0417);
   VbbHcc_HMass_stack_4->SetBinContent(10,795.0294);
   VbbHcc_HMass_stack_4->SetBinContent(11,551.2619);
   VbbHcc_HMass_stack_4->SetBinContent(12,374.5649);
   VbbHcc_HMass_stack_4->SetBinContent(13,349.0423);
   VbbHcc_HMass_stack_4->SetBinContent(14,341.5099);
   VbbHcc_HMass_stack_4->SetBinContent(15,350.7686);
   VbbHcc_HMass_stack_4->SetBinContent(16,329.7941);
   VbbHcc_HMass_stack_4->SetBinContent(17,298.4119);
   VbbHcc_HMass_stack_4->SetBinContent(18,340.8106);
   VbbHcc_HMass_stack_4->SetBinContent(19,310.694);
   VbbHcc_HMass_stack_4->SetBinContent(20,277.7977);
   VbbHcc_HMass_stack_4->SetBinContent(21,273.0424);
   VbbHcc_HMass_stack_4->SetBinContent(22,246.9221);
   VbbHcc_HMass_stack_4->SetBinContent(23,240.5437);
   VbbHcc_HMass_stack_4->SetBinContent(24,206.3124);
   VbbHcc_HMass_stack_4->SetBinContent(25,210.956);
   VbbHcc_HMass_stack_4->SetBinContent(26,216.5112);
   VbbHcc_HMass_stack_4->SetBinContent(27,192.1629);
   VbbHcc_HMass_stack_4->SetBinContent(28,165.1413);
   VbbHcc_HMass_stack_4->SetBinContent(29,134.1568);
   VbbHcc_HMass_stack_4->SetBinContent(30,139.9171);
   VbbHcc_HMass_stack_4->SetBinContent(31,2161.141);
   VbbHcc_HMass_stack_4->SetBinError(2,0.2905824);
   VbbHcc_HMass_stack_4->SetBinError(3,4.259655);
   VbbHcc_HMass_stack_4->SetBinError(4,7.566082);
   VbbHcc_HMass_stack_4->SetBinError(5,11.08796);
   VbbHcc_HMass_stack_4->SetBinError(6,11.92817);
   VbbHcc_HMass_stack_4->SetBinError(7,14.27336);
   VbbHcc_HMass_stack_4->SetBinError(8,17.57196);
   VbbHcc_HMass_stack_4->SetBinError(9,20.0339);
   VbbHcc_HMass_stack_4->SetBinError(10,19.57018);
   VbbHcc_HMass_stack_4->SetBinError(11,16.47609);
   VbbHcc_HMass_stack_4->SetBinError(12,12.95957);
   VbbHcc_HMass_stack_4->SetBinError(13,13.27241);
   VbbHcc_HMass_stack_4->SetBinError(14,12.88565);
   VbbHcc_HMass_stack_4->SetBinError(15,12.85786);
   VbbHcc_HMass_stack_4->SetBinError(16,12.36968);
   VbbHcc_HMass_stack_4->SetBinError(17,11.83985);
   VbbHcc_HMass_stack_4->SetBinError(18,12.65658);
   VbbHcc_HMass_stack_4->SetBinError(19,15.3809);
   VbbHcc_HMass_stack_4->SetBinError(20,11.21175);
   VbbHcc_HMass_stack_4->SetBinError(21,10.90048);
   VbbHcc_HMass_stack_4->SetBinError(22,10.62157);
   VbbHcc_HMass_stack_4->SetBinError(23,10.02817);
   VbbHcc_HMass_stack_4->SetBinError(24,9.021989);
   VbbHcc_HMass_stack_4->SetBinError(25,9.46511);
   VbbHcc_HMass_stack_4->SetBinError(26,12.85068);
   VbbHcc_HMass_stack_4->SetBinError(27,8.792135);
   VbbHcc_HMass_stack_4->SetBinError(28,8.179699);
   VbbHcc_HMass_stack_4->SetBinError(29,7.132871);
   VbbHcc_HMass_stack_4->SetBinError(30,7.532382);
   VbbHcc_HMass_stack_4->SetBinError(31,27.7133);
   VbbHcc_HMass_stack_4->SetEntries(45812);

   ci = TColor::GetColor("#00cccc");
   VbbHcc_HMass_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_HMass_stack_4->SetLineColor(ci);
   VbbHcc_HMass_stack_4->GetXaxis()->SetRange(1,300);
   VbbHcc_HMass_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_HMass_stack_4->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_HMass_stack_4->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_HMass_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_HMass_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_HMass_stack_4->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_HMass_stack_4->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_HMass_stack_4->GetYaxis()->SetTitleOffset(0);
   VbbHcc_HMass_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_HMass_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_HMass_stack_4->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_HMass_stack_4->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_HMass_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_HMass_stack_4,"");
   
   TH1D *VbbHcc_HMass_stack_5 = new TH1D("VbbHcc_HMass_stack_5","",30,0,300);
   VbbHcc_HMass_stack_5->SetBinContent(2,0.7194434);
   VbbHcc_HMass_stack_5->SetBinContent(3,7.358965);
   VbbHcc_HMass_stack_5->SetBinContent(4,26.77589);
   VbbHcc_HMass_stack_5->SetBinContent(5,51.75107);
   VbbHcc_HMass_stack_5->SetBinContent(6,63.02361);
   VbbHcc_HMass_stack_5->SetBinContent(7,94.66739);
   VbbHcc_HMass_stack_5->SetBinContent(8,150.954);
   VbbHcc_HMass_stack_5->SetBinContent(9,152.0502);
   VbbHcc_HMass_stack_5->SetBinContent(10,134.6098);
   VbbHcc_HMass_stack_5->SetBinContent(11,110.2932);
   VbbHcc_HMass_stack_5->SetBinContent(12,83.60494);
   VbbHcc_HMass_stack_5->SetBinContent(13,108.199);
   VbbHcc_HMass_stack_5->SetBinContent(14,85.30077);
   VbbHcc_HMass_stack_5->SetBinContent(15,65.67358);
   VbbHcc_HMass_stack_5->SetBinContent(16,96.2757);
   VbbHcc_HMass_stack_5->SetBinContent(17,80.49596);
   VbbHcc_HMass_stack_5->SetBinContent(18,75.30361);
   VbbHcc_HMass_stack_5->SetBinContent(19,85.40864);
   VbbHcc_HMass_stack_5->SetBinContent(20,88.1115);
   VbbHcc_HMass_stack_5->SetBinContent(21,63.19039);
   VbbHcc_HMass_stack_5->SetBinContent(22,78.47041);
   VbbHcc_HMass_stack_5->SetBinContent(23,61.56078);
   VbbHcc_HMass_stack_5->SetBinContent(24,60.19142);
   VbbHcc_HMass_stack_5->SetBinContent(25,56.41512);
   VbbHcc_HMass_stack_5->SetBinContent(26,64.14334);
   VbbHcc_HMass_stack_5->SetBinContent(27,55.49943);
   VbbHcc_HMass_stack_5->SetBinContent(28,53.7159);
   VbbHcc_HMass_stack_5->SetBinContent(29,45.46643);
   VbbHcc_HMass_stack_5->SetBinContent(30,44.35264);
   VbbHcc_HMass_stack_5->SetBinContent(31,698.559);
   VbbHcc_HMass_stack_5->SetBinError(2,0.4283446);
   VbbHcc_HMass_stack_5->SetBinError(3,3.477056);
   VbbHcc_HMass_stack_5->SetBinError(4,6.933854);
   VbbHcc_HMass_stack_5->SetBinError(5,9.63722);
   VbbHcc_HMass_stack_5->SetBinError(6,10.38308);
   VbbHcc_HMass_stack_5->SetBinError(7,13.8524);
   VbbHcc_HMass_stack_5->SetBinError(8,16.44783);
   VbbHcc_HMass_stack_5->SetBinError(9,15.37395);
   VbbHcc_HMass_stack_5->SetBinError(10,15.09623);
   VbbHcc_HMass_stack_5->SetBinError(11,14.11992);
   VbbHcc_HMass_stack_5->SetBinError(12,11.0446);
   VbbHcc_HMass_stack_5->SetBinError(13,13.49699);
   VbbHcc_HMass_stack_5->SetBinError(14,12.31046);
   VbbHcc_HMass_stack_5->SetBinError(15,8.587743);
   VbbHcc_HMass_stack_5->SetBinError(16,12.80068);
   VbbHcc_HMass_stack_5->SetBinError(17,11.80101);
   VbbHcc_HMass_stack_5->SetBinError(18,11.02092);
   VbbHcc_HMass_stack_5->SetBinError(19,12.00757);
   VbbHcc_HMass_stack_5->SetBinError(20,12.38064);
   VbbHcc_HMass_stack_5->SetBinError(21,8.833598);
   VbbHcc_HMass_stack_5->SetBinError(22,11.63392);
   VbbHcc_HMass_stack_5->SetBinError(23,9.239298);
   VbbHcc_HMass_stack_5->SetBinError(24,9.051917);
   VbbHcc_HMass_stack_5->SetBinError(25,7.589021);
   VbbHcc_HMass_stack_5->SetBinError(26,9.621855);
   VbbHcc_HMass_stack_5->SetBinError(27,9.426107);
   VbbHcc_HMass_stack_5->SetBinError(28,8.903726);
   VbbHcc_HMass_stack_5->SetBinError(29,6.607818);
   VbbHcc_HMass_stack_5->SetBinError(30,8.932526);
   VbbHcc_HMass_stack_5->SetBinError(31,25.21569);
   VbbHcc_HMass_stack_5->SetEntries(10641);

   ci = TColor::GetColor("#ff99cc");
   VbbHcc_HMass_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_HMass_stack_5->SetLineColor(ci);
   VbbHcc_HMass_stack_5->GetXaxis()->SetRange(1,300);
   VbbHcc_HMass_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_HMass_stack_5->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_HMass_stack_5->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_HMass_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_HMass_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_HMass_stack_5->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_HMass_stack_5->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_HMass_stack_5->GetYaxis()->SetTitleOffset(0);
   VbbHcc_HMass_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_HMass_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_HMass_stack_5->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_HMass_stack_5->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_HMass_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_HMass_stack_5,"");
   
   TH1D *VbbHcc_HMass_stack_6 = new TH1D("VbbHcc_HMass_stack_6","",30,0,300);
   VbbHcc_HMass_stack_6->SetBinContent(3,0.3126157);
   VbbHcc_HMass_stack_6->SetBinContent(4,0.4050496);
   VbbHcc_HMass_stack_6->SetBinContent(5,1.263871);
   VbbHcc_HMass_stack_6->SetBinContent(6,0.6884555);
   VbbHcc_HMass_stack_6->SetBinContent(7,2.130589);
   VbbHcc_HMass_stack_6->SetBinContent(8,2.158149);
   VbbHcc_HMass_stack_6->SetBinContent(9,3.507735);
   VbbHcc_HMass_stack_6->SetBinContent(10,4.955355);
   VbbHcc_HMass_stack_6->SetBinContent(11,1.150288);
   VbbHcc_HMass_stack_6->SetBinContent(12,1.465248);
   VbbHcc_HMass_stack_6->SetBinContent(13,2.569793);
   VbbHcc_HMass_stack_6->SetBinContent(14,1.577403);
   VbbHcc_HMass_stack_6->SetBinContent(15,1.460781);
   VbbHcc_HMass_stack_6->SetBinContent(16,0.2393503);
   VbbHcc_HMass_stack_6->SetBinContent(17,1.061503);
   VbbHcc_HMass_stack_6->SetBinContent(18,0.9342296);
   VbbHcc_HMass_stack_6->SetBinContent(19,1.419009);
   VbbHcc_HMass_stack_6->SetBinContent(20,0.5291369);
   VbbHcc_HMass_stack_6->SetBinContent(21,0.3366028);
   VbbHcc_HMass_stack_6->SetBinContent(22,1.022758);
   VbbHcc_HMass_stack_6->SetBinContent(23,1.303353);
   VbbHcc_HMass_stack_6->SetBinContent(24,0.2564614);
   VbbHcc_HMass_stack_6->SetBinContent(27,0.328034);
   VbbHcc_HMass_stack_6->SetBinContent(28,0.610572);
   VbbHcc_HMass_stack_6->SetBinContent(30,0.2002826);
   VbbHcc_HMass_stack_6->SetBinContent(31,2.358338);
   VbbHcc_HMass_stack_6->SetBinError(3,0.3126157);
   VbbHcc_HMass_stack_6->SetBinError(4,0.4050496);
   VbbHcc_HMass_stack_6->SetBinError(5,0.6343726);
   VbbHcc_HMass_stack_6->SetBinError(6,0.4943522);
   VbbHcc_HMass_stack_6->SetBinError(7,0.8306202);
   VbbHcc_HMass_stack_6->SetBinError(8,0.89204);
   VbbHcc_HMass_stack_6->SetBinError(9,1.086801);
   VbbHcc_HMass_stack_6->SetBinError(10,1.388143);
   VbbHcc_HMass_stack_6->SetBinError(11,0.5985492);
   VbbHcc_HMass_stack_6->SetBinError(12,0.7404086);
   VbbHcc_HMass_stack_6->SetBinError(13,0.9857936);
   VbbHcc_HMass_stack_6->SetBinError(14,0.705832);
   VbbHcc_HMass_stack_6->SetBinError(15,0.7386823);
   VbbHcc_HMass_stack_6->SetBinError(16,0.2393503);
   VbbHcc_HMass_stack_6->SetBinError(17,0.5732446);
   VbbHcc_HMass_stack_6->SetBinError(18,0.5020136);
   VbbHcc_HMass_stack_6->SetBinError(19,0.7106397);
   VbbHcc_HMass_stack_6->SetBinError(20,0.3794453);
   VbbHcc_HMass_stack_6->SetBinError(21,0.3366028);
   VbbHcc_HMass_stack_6->SetBinError(22,0.5936251);
   VbbHcc_HMass_stack_6->SetBinError(23,0.6542464);
   VbbHcc_HMass_stack_6->SetBinError(24,0.2564614);
   VbbHcc_HMass_stack_6->SetBinError(27,0.328034);
   VbbHcc_HMass_stack_6->SetBinError(28,0.4482986);
   VbbHcc_HMass_stack_6->SetBinError(30,0.2002826);
   VbbHcc_HMass_stack_6->SetBinError(31,0.9036612);
   VbbHcc_HMass_stack_6->SetEntries(105);

   ci = TColor::GetColor("#9933ff");
   VbbHcc_HMass_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_HMass_stack_6->SetLineColor(ci);
   VbbHcc_HMass_stack_6->GetXaxis()->SetRange(1,300);
   VbbHcc_HMass_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_HMass_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_HMass_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_HMass_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_HMass_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_HMass_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_HMass_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_HMass_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_HMass_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_HMass_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_HMass_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_HMass_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_HMass_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_HMass_stack_6,"");
   
   TH1D *VbbHcc_HMass_stack_7 = new TH1D("VbbHcc_HMass_stack_7","",30,0,300);
   VbbHcc_HMass_stack_7->SetBinContent(3,0.9203167);
   VbbHcc_HMass_stack_7->SetBinContent(4,1.780471);
   VbbHcc_HMass_stack_7->SetBinContent(5,1.703093);
   VbbHcc_HMass_stack_7->SetBinContent(6,3.202586);
   VbbHcc_HMass_stack_7->SetBinContent(7,4.302707);
   VbbHcc_HMass_stack_7->SetBinContent(8,7.432777);
   VbbHcc_HMass_stack_7->SetBinContent(9,12.68889);
   VbbHcc_HMass_stack_7->SetBinContent(10,5.754905);
   VbbHcc_HMass_stack_7->SetBinContent(11,5.593486);
   VbbHcc_HMass_stack_7->SetBinContent(12,3.434145);
   VbbHcc_HMass_stack_7->SetBinContent(13,2.660932);
   VbbHcc_HMass_stack_7->SetBinContent(14,4.388222);
   VbbHcc_HMass_stack_7->SetBinContent(15,3.796779);
   VbbHcc_HMass_stack_7->SetBinContent(16,3.201283);
   VbbHcc_HMass_stack_7->SetBinContent(17,3.214298);
   VbbHcc_HMass_stack_7->SetBinContent(18,0.924705);
   VbbHcc_HMass_stack_7->SetBinContent(19,2.388533);
   VbbHcc_HMass_stack_7->SetBinContent(20,1.584968);
   VbbHcc_HMass_stack_7->SetBinContent(21,2.983041);
   VbbHcc_HMass_stack_7->SetBinContent(22,2.168998);
   VbbHcc_HMass_stack_7->SetBinContent(23,1.920327);
   VbbHcc_HMass_stack_7->SetBinContent(24,1.471801);
   VbbHcc_HMass_stack_7->SetBinContent(25,0.885333);
   VbbHcc_HMass_stack_7->SetBinContent(26,1.8015);
   VbbHcc_HMass_stack_7->SetBinContent(27,0.9943241);
   VbbHcc_HMass_stack_7->SetBinContent(28,1.610173);
   VbbHcc_HMass_stack_7->SetBinContent(29,0.8087521);
   VbbHcc_HMass_stack_7->SetBinContent(30,0.6005989);
   VbbHcc_HMass_stack_7->SetBinContent(31,17.64164);
   VbbHcc_HMass_stack_7->SetBinError(3,0.5319964);
   VbbHcc_HMass_stack_7->SetBinError(4,0.6901721);
   VbbHcc_HMass_stack_7->SetBinError(5,0.6563549);
   VbbHcc_HMass_stack_7->SetBinError(6,0.8738452);
   VbbHcc_HMass_stack_7->SetBinError(7,1.03057);
   VbbHcc_HMass_stack_7->SetBinError(8,1.322997);
   VbbHcc_HMass_stack_7->SetBinError(9,1.750317);
   VbbHcc_HMass_stack_7->SetBinError(10,1.182553);
   VbbHcc_HMass_stack_7->SetBinError(11,1.164961);
   VbbHcc_HMass_stack_7->SetBinError(12,0.9023544);
   VbbHcc_HMass_stack_7->SetBinError(13,0.8011397);
   VbbHcc_HMass_stack_7->SetBinError(14,1.08141);
   VbbHcc_HMass_stack_7->SetBinError(15,0.9797411);
   VbbHcc_HMass_stack_7->SetBinError(16,0.9552424);
   VbbHcc_HMass_stack_7->SetBinError(17,0.918949);
   VbbHcc_HMass_stack_7->SetBinError(18,0.4703433);
   VbbHcc_HMass_stack_7->SetBinError(19,0.7684873);
   VbbHcc_HMass_stack_7->SetBinError(20,0.6297123);
   VbbHcc_HMass_stack_7->SetBinError(21,0.9058662);
   VbbHcc_HMass_stack_7->SetBinError(22,0.7322228);
   VbbHcc_HMass_stack_7->SetBinError(23,0.6835935);
   VbbHcc_HMass_stack_7->SetBinError(24,0.6078498);
   VbbHcc_HMass_stack_7->SetBinError(25,0.5114732);
   VbbHcc_HMass_stack_7->SetBinError(26,0.6926028);
   VbbHcc_HMass_stack_7->SetBinError(27,0.5025084);
   VbbHcc_HMass_stack_7->SetBinError(28,0.6094956);
   VbbHcc_HMass_stack_7->SetBinError(29,0.4122709);
   VbbHcc_HMass_stack_7->SetBinError(30,0.4246982);
   VbbHcc_HMass_stack_7->SetBinError(31,2.099836);
   VbbHcc_HMass_stack_7->SetEntries(427);

   ci = TColor::GetColor("#3399ff");
   VbbHcc_HMass_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_HMass_stack_7->SetLineColor(ci);
   VbbHcc_HMass_stack_7->GetXaxis()->SetRange(1,300);
   VbbHcc_HMass_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_HMass_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_HMass_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_HMass_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_HMass_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_HMass_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_HMass_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_HMass_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_HMass_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_HMass_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_HMass_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_HMass_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_HMass_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_HMass_stack_7,"");
   
   TH1D *VbbHcc_HMass_stack_8 = new TH1D("VbbHcc_HMass_stack_8","",30,0,300);
   VbbHcc_HMass_stack_8->SetBinContent(2,0.3109729);
   VbbHcc_HMass_stack_8->SetBinContent(3,5.372739);
   VbbHcc_HMass_stack_8->SetBinContent(4,8.981933);
   VbbHcc_HMass_stack_8->SetBinContent(5,16.40085);
   VbbHcc_HMass_stack_8->SetBinContent(6,21.72886);
   VbbHcc_HMass_stack_8->SetBinContent(7,30.87401);
   VbbHcc_HMass_stack_8->SetBinContent(8,52.54916);
   VbbHcc_HMass_stack_8->SetBinContent(9,75.71183);
   VbbHcc_HMass_stack_8->SetBinContent(10,55.83062);
   VbbHcc_HMass_stack_8->SetBinContent(11,37.32172);
   VbbHcc_HMass_stack_8->SetBinContent(12,18.16436);
   VbbHcc_HMass_stack_8->SetBinContent(13,14.21822);
   VbbHcc_HMass_stack_8->SetBinContent(14,11.5308);
   VbbHcc_HMass_stack_8->SetBinContent(15,8.594879);
   VbbHcc_HMass_stack_8->SetBinContent(16,8.418054);
   VbbHcc_HMass_stack_8->SetBinContent(17,8.356665);
   VbbHcc_HMass_stack_8->SetBinContent(18,7.57612);
   VbbHcc_HMass_stack_8->SetBinContent(19,5.493255);
   VbbHcc_HMass_stack_8->SetBinContent(20,4.46788);
   VbbHcc_HMass_stack_8->SetBinContent(21,3.580004);
   VbbHcc_HMass_stack_8->SetBinContent(22,4.885706);
   VbbHcc_HMass_stack_8->SetBinContent(23,2.982872);
   VbbHcc_HMass_stack_8->SetBinContent(24,1.985192);
   VbbHcc_HMass_stack_8->SetBinContent(25,4.179949);
   VbbHcc_HMass_stack_8->SetBinContent(26,2.506674);
   VbbHcc_HMass_stack_8->SetBinContent(27,2.354826);
   VbbHcc_HMass_stack_8->SetBinContent(28,2.761823);
   VbbHcc_HMass_stack_8->SetBinContent(29,2.204339);
   VbbHcc_HMass_stack_8->SetBinContent(30,2.85449);
   VbbHcc_HMass_stack_8->SetBinContent(31,20.68941);
   VbbHcc_HMass_stack_8->SetBinError(2,0.3109729);
   VbbHcc_HMass_stack_8->SetBinError(3,1.130924);
   VbbHcc_HMass_stack_8->SetBinError(4,1.467749);
   VbbHcc_HMass_stack_8->SetBinError(5,2.050576);
   VbbHcc_HMass_stack_8->SetBinError(6,2.359362);
   VbbHcc_HMass_stack_8->SetBinError(7,2.740443);
   VbbHcc_HMass_stack_8->SetBinError(8,3.603855);
   VbbHcc_HMass_stack_8->SetBinError(9,5.54203);
   VbbHcc_HMass_stack_8->SetBinError(10,3.701933);
   VbbHcc_HMass_stack_8->SetBinError(11,3.029797);
   VbbHcc_HMass_stack_8->SetBinError(12,2.093082);
   VbbHcc_HMass_stack_8->SetBinError(13,1.831515);
   VbbHcc_HMass_stack_8->SetBinError(14,1.639);
   VbbHcc_HMass_stack_8->SetBinError(15,1.892518);
   VbbHcc_HMass_stack_8->SetBinError(16,1.400359);
   VbbHcc_HMass_stack_8->SetBinError(17,1.658261);
   VbbHcc_HMass_stack_8->SetBinError(18,1.351233);
   VbbHcc_HMass_stack_8->SetBinError(19,1.158155);
   VbbHcc_HMass_stack_8->SetBinError(20,1.039867);
   VbbHcc_HMass_stack_8->SetBinError(21,0.9234996);
   VbbHcc_HMass_stack_8->SetBinError(22,1.107077);
   VbbHcc_HMass_stack_8->SetBinError(23,0.8702784);
   VbbHcc_HMass_stack_8->SetBinError(24,0.7060551);
   VbbHcc_HMass_stack_8->SetBinError(25,1.029689);
   VbbHcc_HMass_stack_8->SetBinError(26,0.7694755);
   VbbHcc_HMass_stack_8->SetBinError(27,0.7962561);
   VbbHcc_HMass_stack_8->SetBinError(28,0.8150847);
   VbbHcc_HMass_stack_8->SetBinError(29,0.7084716);
   VbbHcc_HMass_stack_8->SetBinError(30,0.8570872);
   VbbHcc_HMass_stack_8->SetBinError(31,2.226143);
   VbbHcc_HMass_stack_8->SetEntries(1875);

   ci = TColor::GetColor("#33ff99");
   VbbHcc_HMass_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_HMass_stack_8->SetLineColor(ci);
   VbbHcc_HMass_stack_8->GetXaxis()->SetRange(1,300);
   VbbHcc_HMass_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_HMass_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_HMass_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_HMass_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_HMass_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_HMass_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_HMass_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_HMass_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_HMass_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_HMass_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_HMass_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_HMass_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_HMass_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_HMass_stack_8,"");
   
   TH1D *VbbHcc_HMass_stack_9 = new TH1D("VbbHcc_HMass_stack_9","",30,0,300);
   VbbHcc_HMass_stack_9->SetBinContent(2,0.04265395);
   VbbHcc_HMass_stack_9->SetBinContent(3,1.83917);
   VbbHcc_HMass_stack_9->SetBinContent(4,4.967361);
   VbbHcc_HMass_stack_9->SetBinContent(5,7.227804);
   VbbHcc_HMass_stack_9->SetBinContent(6,10.36157);
   VbbHcc_HMass_stack_9->SetBinContent(7,17.15289);
   VbbHcc_HMass_stack_9->SetBinContent(8,26.95641);
   VbbHcc_HMass_stack_9->SetBinContent(9,37.01497);
   VbbHcc_HMass_stack_9->SetBinContent(10,36.1336);
   VbbHcc_HMass_stack_9->SetBinContent(11,26.38513);
   VbbHcc_HMass_stack_9->SetBinContent(12,19.92356);
   VbbHcc_HMass_stack_9->SetBinContent(13,15.16834);
   VbbHcc_HMass_stack_9->SetBinContent(14,10.36815);
   VbbHcc_HMass_stack_9->SetBinContent(15,7.738871);
   VbbHcc_HMass_stack_9->SetBinContent(16,6.358406);
   VbbHcc_HMass_stack_9->SetBinContent(17,5.641606);
   VbbHcc_HMass_stack_9->SetBinContent(18,4.912867);
   VbbHcc_HMass_stack_9->SetBinContent(19,4.423684);
   VbbHcc_HMass_stack_9->SetBinContent(20,3.817654);
   VbbHcc_HMass_stack_9->SetBinContent(21,3.397921);
   VbbHcc_HMass_stack_9->SetBinContent(22,2.979758);
   VbbHcc_HMass_stack_9->SetBinContent(23,2.938976);
   VbbHcc_HMass_stack_9->SetBinContent(24,2.44352);
   VbbHcc_HMass_stack_9->SetBinContent(25,2.303494);
   VbbHcc_HMass_stack_9->SetBinContent(26,2.100318);
   VbbHcc_HMass_stack_9->SetBinContent(27,1.930813);
   VbbHcc_HMass_stack_9->SetBinContent(28,1.529449);
   VbbHcc_HMass_stack_9->SetBinContent(29,1.398184);
   VbbHcc_HMass_stack_9->SetBinContent(30,1.379164);
   VbbHcc_HMass_stack_9->SetBinContent(31,13.1571);
   VbbHcc_HMass_stack_9->SetBinError(2,0.01114665);
   VbbHcc_HMass_stack_9->SetBinError(3,0.07427606);
   VbbHcc_HMass_stack_9->SetBinError(4,0.1199572);
   VbbHcc_HMass_stack_9->SetBinError(5,0.1484128);
   VbbHcc_HMass_stack_9->SetBinError(6,0.1860933);
   VbbHcc_HMass_stack_9->SetBinError(7,0.2340599);
   VbbHcc_HMass_stack_9->SetBinError(8,0.2890816);
   VbbHcc_HMass_stack_9->SetBinError(9,0.346339);
   VbbHcc_HMass_stack_9->SetBinError(10,0.3531814);
   VbbHcc_HMass_stack_9->SetBinError(11,0.2830413);
   VbbHcc_HMass_stack_9->SetBinError(12,0.2560316);
   VbbHcc_HMass_stack_9->SetBinError(13,0.2599464);
   VbbHcc_HMass_stack_9->SetBinError(14,0.1757272);
   VbbHcc_HMass_stack_9->SetBinError(15,0.1549205);
   VbbHcc_HMass_stack_9->SetBinError(16,0.1472603);
   VbbHcc_HMass_stack_9->SetBinError(17,0.1338897);
   VbbHcc_HMass_stack_9->SetBinError(18,0.1236758);
   VbbHcc_HMass_stack_9->SetBinError(19,0.1213238);
   VbbHcc_HMass_stack_9->SetBinError(20,0.1108679);
   VbbHcc_HMass_stack_9->SetBinError(21,0.09957535);
   VbbHcc_HMass_stack_9->SetBinError(22,0.100466);
   VbbHcc_HMass_stack_9->SetBinError(23,0.09249592);
   VbbHcc_HMass_stack_9->SetBinError(24,0.09288846);
   VbbHcc_HMass_stack_9->SetBinError(25,0.08213485);
   VbbHcc_HMass_stack_9->SetBinError(26,0.07735414);
   VbbHcc_HMass_stack_9->SetBinError(27,0.07941732);
   VbbHcc_HMass_stack_9->SetBinError(28,0.06741162);
   VbbHcc_HMass_stack_9->SetBinError(29,0.06439204);
   VbbHcc_HMass_stack_9->SetBinError(30,0.07315225);
   VbbHcc_HMass_stack_9->SetBinError(31,0.1990741);
   VbbHcc_HMass_stack_9->SetEntries(111628);

   ci = TColor::GetColor("#cccc00");
   VbbHcc_HMass_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_HMass_stack_9->SetLineColor(ci);
   VbbHcc_HMass_stack_9->GetXaxis()->SetRange(1,300);
   VbbHcc_HMass_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_HMass_stack_9->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_HMass_stack_9->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_HMass_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_HMass_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_HMass_stack_9->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_HMass_stack_9->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_HMass_stack_9->GetYaxis()->SetTitleOffset(0);
   VbbHcc_HMass_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_HMass_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_HMass_stack_9->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_HMass_stack_9->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_HMass_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_HMass_stack_9,"");
   
   TH1D *VbbHcc_HMass_stack_10 = new TH1D("VbbHcc_HMass_stack_10","",30,0,300);
   VbbHcc_HMass_stack_10->SetBinContent(2,0.001911491);
   VbbHcc_HMass_stack_10->SetBinContent(3,0.07267873);
   VbbHcc_HMass_stack_10->SetBinContent(4,0.2659057);
   VbbHcc_HMass_stack_10->SetBinContent(5,0.614753);
   VbbHcc_HMass_stack_10->SetBinContent(6,1.089079);
   VbbHcc_HMass_stack_10->SetBinContent(7,2.268322);
   VbbHcc_HMass_stack_10->SetBinContent(8,4.069995);
   VbbHcc_HMass_stack_10->SetBinContent(9,5.819966);
   VbbHcc_HMass_stack_10->SetBinContent(10,5.689325);
   VbbHcc_HMass_stack_10->SetBinContent(11,4.22183);
   VbbHcc_HMass_stack_10->SetBinContent(12,3.246159);
   VbbHcc_HMass_stack_10->SetBinContent(13,2.597971);
   VbbHcc_HMass_stack_10->SetBinContent(14,1.879264);
   VbbHcc_HMass_stack_10->SetBinContent(15,1.402025);
   VbbHcc_HMass_stack_10->SetBinContent(16,1.207167);
   VbbHcc_HMass_stack_10->SetBinContent(17,1.090617);
   VbbHcc_HMass_stack_10->SetBinContent(18,1.000094);
   VbbHcc_HMass_stack_10->SetBinContent(19,0.9421584);
   VbbHcc_HMass_stack_10->SetBinContent(20,0.8607765);
   VbbHcc_HMass_stack_10->SetBinContent(21,0.7678557);
   VbbHcc_HMass_stack_10->SetBinContent(22,0.6868958);
   VbbHcc_HMass_stack_10->SetBinContent(23,0.6106919);
   VbbHcc_HMass_stack_10->SetBinContent(24,0.5970235);
   VbbHcc_HMass_stack_10->SetBinContent(25,0.4820086);
   VbbHcc_HMass_stack_10->SetBinContent(26,0.4470475);
   VbbHcc_HMass_stack_10->SetBinContent(27,0.3888904);
   VbbHcc_HMass_stack_10->SetBinContent(28,0.3578314);
   VbbHcc_HMass_stack_10->SetBinContent(29,0.3171084);
   VbbHcc_HMass_stack_10->SetBinContent(30,0.2811024);
   VbbHcc_HMass_stack_10->SetBinContent(31,3.224345);
   VbbHcc_HMass_stack_10->SetBinError(2,0.001103765);
   VbbHcc_HMass_stack_10->SetBinError(3,0.006871902);
   VbbHcc_HMass_stack_10->SetBinError(4,0.01309307);
   VbbHcc_HMass_stack_10->SetBinError(5,0.01995319);
   VbbHcc_HMass_stack_10->SetBinError(6,0.02650183);
   VbbHcc_HMass_stack_10->SetBinError(7,0.03831203);
   VbbHcc_HMass_stack_10->SetBinError(8,0.05133651);
   VbbHcc_HMass_stack_10->SetBinError(9,0.0613589);
   VbbHcc_HMass_stack_10->SetBinError(10,0.06065288);
   VbbHcc_HMass_stack_10->SetBinError(11,0.05222958);
   VbbHcc_HMass_stack_10->SetBinError(12,0.04580992);
   VbbHcc_HMass_stack_10->SetBinError(13,0.04098455);
   VbbHcc_HMass_stack_10->SetBinError(14,0.03483924);
   VbbHcc_HMass_stack_10->SetBinError(15,0.0301178);
   VbbHcc_HMass_stack_10->SetBinError(16,0.02792201);
   VbbHcc_HMass_stack_10->SetBinError(17,0.02651849);
   VbbHcc_HMass_stack_10->SetBinError(18,0.02542959);
   VbbHcc_HMass_stack_10->SetBinError(19,0.0246462);
   VbbHcc_HMass_stack_10->SetBinError(20,0.023604);
   VbbHcc_HMass_stack_10->SetBinError(21,0.02227994);
   VbbHcc_HMass_stack_10->SetBinError(22,0.02108189);
   VbbHcc_HMass_stack_10->SetBinError(23,0.01986349);
   VbbHcc_HMass_stack_10->SetBinError(24,0.01960306);
   VbbHcc_HMass_stack_10->SetBinError(25,0.01763726);
   VbbHcc_HMass_stack_10->SetBinError(26,0.01693152);
   VbbHcc_HMass_stack_10->SetBinError(27,0.01583451);
   VbbHcc_HMass_stack_10->SetBinError(28,0.01517837);
   VbbHcc_HMass_stack_10->SetBinError(29,0.01429607);
   VbbHcc_HMass_stack_10->SetBinError(30,0.01346252);
   VbbHcc_HMass_stack_10->SetBinError(31,0.04545827);
   VbbHcc_HMass_stack_10->SetEntries(72910);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_HMass_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_HMass_stack_10->SetLineColor(ci);
   VbbHcc_HMass_stack_10->GetXaxis()->SetRange(1,300);
   VbbHcc_HMass_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_HMass_stack_10->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_HMass_stack_10->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_HMass_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_HMass_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_HMass_stack_10->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_HMass_stack_10->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_HMass_stack_10->GetYaxis()->SetTitleOffset(0);
   VbbHcc_HMass_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_HMass_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_HMass_stack_10->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_HMass_stack_10->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_HMass_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_HMass_stack_10,"");
   
   TH1D *VbbHcc_HMass_stack_11 = new TH1D("VbbHcc_HMass_stack_11","",30,0,300);
   VbbHcc_HMass_stack_11->SetBinContent(3,0.02521768);
   VbbHcc_HMass_stack_11->SetBinContent(4,0.09437739);
   VbbHcc_HMass_stack_11->SetBinContent(5,0.1704915);
   VbbHcc_HMass_stack_11->SetBinContent(6,0.2098622);
   VbbHcc_HMass_stack_11->SetBinContent(7,0.237311);
   VbbHcc_HMass_stack_11->SetBinContent(8,0.3238359);
   VbbHcc_HMass_stack_11->SetBinContent(9,0.4375664);
   VbbHcc_HMass_stack_11->SetBinContent(10,0.5021885);
   VbbHcc_HMass_stack_11->SetBinContent(11,0.6433127);
   VbbHcc_HMass_stack_11->SetBinContent(12,0.7061872);
   VbbHcc_HMass_stack_11->SetBinContent(13,0.778952);
   VbbHcc_HMass_stack_11->SetBinContent(14,0.4963359);
   VbbHcc_HMass_stack_11->SetBinContent(15,0.326632);
   VbbHcc_HMass_stack_11->SetBinContent(16,0.1988933);
   VbbHcc_HMass_stack_11->SetBinContent(17,0.204115);
   VbbHcc_HMass_stack_11->SetBinContent(18,0.140276);
   VbbHcc_HMass_stack_11->SetBinContent(19,0.1153533);
   VbbHcc_HMass_stack_11->SetBinContent(20,0.1240824);
   VbbHcc_HMass_stack_11->SetBinContent(21,0.09707892);
   VbbHcc_HMass_stack_11->SetBinContent(22,0.156734);
   VbbHcc_HMass_stack_11->SetBinContent(23,0.09192537);
   VbbHcc_HMass_stack_11->SetBinContent(24,0.0952135);
   VbbHcc_HMass_stack_11->SetBinContent(25,0.08525984);
   VbbHcc_HMass_stack_11->SetBinContent(26,0.04874992);
   VbbHcc_HMass_stack_11->SetBinContent(27,0.07574049);
   VbbHcc_HMass_stack_11->SetBinContent(28,0.03453032);
   VbbHcc_HMass_stack_11->SetBinContent(29,0.05094081);
   VbbHcc_HMass_stack_11->SetBinContent(30,0.06269918);
   VbbHcc_HMass_stack_11->SetBinContent(31,0.7073368);
   VbbHcc_HMass_stack_11->SetBinError(3,0.007993708);
   VbbHcc_HMass_stack_11->SetBinError(4,0.01611176);
   VbbHcc_HMass_stack_11->SetBinError(5,0.02146071);
   VbbHcc_HMass_stack_11->SetBinError(6,0.02360424);
   VbbHcc_HMass_stack_11->SetBinError(7,0.02429174);
   VbbHcc_HMass_stack_11->SetBinError(8,0.02943431);
   VbbHcc_HMass_stack_11->SetBinError(9,0.03538936);
   VbbHcc_HMass_stack_11->SetBinError(10,0.03670816);
   VbbHcc_HMass_stack_11->SetBinError(11,0.04249715);
   VbbHcc_HMass_stack_11->SetBinError(12,0.04335457);
   VbbHcc_HMass_stack_11->SetBinError(13,0.04512411);
   VbbHcc_HMass_stack_11->SetBinError(14,0.0358276);
   VbbHcc_HMass_stack_11->SetBinError(15,0.0287288);
   VbbHcc_HMass_stack_11->SetBinError(16,0.02250541);
   VbbHcc_HMass_stack_11->SetBinError(17,0.02327592);
   VbbHcc_HMass_stack_11->SetBinError(18,0.01890784);
   VbbHcc_HMass_stack_11->SetBinError(19,0.01760521);
   VbbHcc_HMass_stack_11->SetBinError(20,0.0176134);
   VbbHcc_HMass_stack_11->SetBinError(21,0.0161502);
   VbbHcc_HMass_stack_11->SetBinError(22,0.02143166);
   VbbHcc_HMass_stack_11->SetBinError(23,0.01534687);
   VbbHcc_HMass_stack_11->SetBinError(24,0.01573861);
   VbbHcc_HMass_stack_11->SetBinError(25,0.01456962);
   VbbHcc_HMass_stack_11->SetBinError(26,0.01089864);
   VbbHcc_HMass_stack_11->SetBinError(27,0.01378427);
   VbbHcc_HMass_stack_11->SetBinError(28,0.009252992);
   VbbHcc_HMass_stack_11->SetBinError(29,0.01168808);
   VbbHcc_HMass_stack_11->SetBinError(30,0.01284159);
   VbbHcc_HMass_stack_11->SetBinError(31,0.04234154);
   VbbHcc_HMass_stack_11->SetEntries(3167);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_HMass_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_HMass_stack_11->SetLineColor(ci);
   VbbHcc_HMass_stack_11->GetXaxis()->SetRange(1,300);
   VbbHcc_HMass_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_HMass_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_HMass_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_HMass_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_HMass_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_HMass_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_HMass_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_HMass_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_HMass_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_HMass_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_HMass_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_HMass_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_HMass_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_HMass_stack_11,"");
   
   TH1D *VbbHcc_HMass_stack_12 = new TH1D("VbbHcc_HMass_stack_12","",30,0,300);
   VbbHcc_HMass_stack_12->SetBinContent(2,0.000319129);
   VbbHcc_HMass_stack_12->SetBinContent(3,0.007420537);
   VbbHcc_HMass_stack_12->SetBinContent(4,0.03267829);
   VbbHcc_HMass_stack_12->SetBinContent(5,0.04962522);
   VbbHcc_HMass_stack_12->SetBinContent(6,0.07650851);
   VbbHcc_HMass_stack_12->SetBinContent(7,0.08625319);
   VbbHcc_HMass_stack_12->SetBinContent(8,0.1028708);
   VbbHcc_HMass_stack_12->SetBinContent(9,0.1365423);
   VbbHcc_HMass_stack_12->SetBinContent(10,0.1711763);
   VbbHcc_HMass_stack_12->SetBinContent(11,0.1940316);
   VbbHcc_HMass_stack_12->SetBinContent(12,0.2254079);
   VbbHcc_HMass_stack_12->SetBinContent(13,0.2399768);
   VbbHcc_HMass_stack_12->SetBinContent(14,0.1765668);
   VbbHcc_HMass_stack_12->SetBinContent(15,0.1091999);
   VbbHcc_HMass_stack_12->SetBinContent(16,0.08673485);
   VbbHcc_HMass_stack_12->SetBinContent(17,0.07554032);
   VbbHcc_HMass_stack_12->SetBinContent(18,0.06971155);
   VbbHcc_HMass_stack_12->SetBinContent(19,0.05759385);
   VbbHcc_HMass_stack_12->SetBinContent(20,0.06559121);
   VbbHcc_HMass_stack_12->SetBinContent(21,0.05656784);
   VbbHcc_HMass_stack_12->SetBinContent(22,0.05117766);
   VbbHcc_HMass_stack_12->SetBinContent(23,0.04795392);
   VbbHcc_HMass_stack_12->SetBinContent(24,0.0480987);
   VbbHcc_HMass_stack_12->SetBinContent(25,0.03994851);
   VbbHcc_HMass_stack_12->SetBinContent(26,0.04160101);
   VbbHcc_HMass_stack_12->SetBinContent(27,0.03486125);
   VbbHcc_HMass_stack_12->SetBinContent(28,0.03551403);
   VbbHcc_HMass_stack_12->SetBinContent(29,0.03103026);
   VbbHcc_HMass_stack_12->SetBinContent(30,0.02963535);
   VbbHcc_HMass_stack_12->SetBinContent(31,0.4012114);
   VbbHcc_HMass_stack_12->SetBinError(2,0.000319129);
   VbbHcc_HMass_stack_12->SetBinError(3,0.001552188);
   VbbHcc_HMass_stack_12->SetBinError(4,0.003314079);
   VbbHcc_HMass_stack_12->SetBinError(5,0.004004184);
   VbbHcc_HMass_stack_12->SetBinError(6,0.005043437);
   VbbHcc_HMass_stack_12->SetBinError(7,0.005447932);
   VbbHcc_HMass_stack_12->SetBinError(8,0.005756359);
   VbbHcc_HMass_stack_12->SetBinError(9,0.007527046);
   VbbHcc_HMass_stack_12->SetBinError(10,0.007554377);
   VbbHcc_HMass_stack_12->SetBinError(11,0.008060391);
   VbbHcc_HMass_stack_12->SetBinError(12,0.00861367);
   VbbHcc_HMass_stack_12->SetBinError(13,0.008841331);
   VbbHcc_HMass_stack_12->SetBinError(14,0.00762641);
   VbbHcc_HMass_stack_12->SetBinError(15,0.005984808);
   VbbHcc_HMass_stack_12->SetBinError(16,0.005346638);
   VbbHcc_HMass_stack_12->SetBinError(17,0.00495135);
   VbbHcc_HMass_stack_12->SetBinError(18,0.00476088);
   VbbHcc_HMass_stack_12->SetBinError(19,0.004362473);
   VbbHcc_HMass_stack_12->SetBinError(20,0.004627578);
   VbbHcc_HMass_stack_12->SetBinError(21,0.004257649);
   VbbHcc_HMass_stack_12->SetBinError(22,0.004278859);
   VbbHcc_HMass_stack_12->SetBinError(23,0.004038361);
   VbbHcc_HMass_stack_12->SetBinError(24,0.003973629);
   VbbHcc_HMass_stack_12->SetBinError(25,0.003593125);
   VbbHcc_HMass_stack_12->SetBinError(26,0.003723733);
   VbbHcc_HMass_stack_12->SetBinError(27,0.003485463);
   VbbHcc_HMass_stack_12->SetBinError(28,0.003375743);
   VbbHcc_HMass_stack_12->SetBinError(29,0.003159019);
   VbbHcc_HMass_stack_12->SetBinError(30,0.003150342);
   VbbHcc_HMass_stack_12->SetBinError(31,0.01167799);
   VbbHcc_HMass_stack_12->SetEntries(9458);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_HMass_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_HMass_stack_12->SetLineColor(ci);
   VbbHcc_HMass_stack_12->GetXaxis()->SetRange(1,300);
   VbbHcc_HMass_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_HMass_stack_12->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_HMass_stack_12->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_HMass_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_HMass_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_HMass_stack_12->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_HMass_stack_12->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_HMass_stack_12->GetYaxis()->SetTitleOffset(0);
   VbbHcc_HMass_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_HMass_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_HMass_stack_12->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_HMass_stack_12->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_HMass_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_HMass_stack_12,"");
   st->Draw("hist");
   
   TH1D *VbbHcc_HMass__13 = new TH1D("VbbHcc_HMass__13","",30,0,300);
   VbbHcc_HMass__13->SetBinContent(2,109);
   VbbHcc_HMass__13->SetBinContent(3,3481);
   VbbHcc_HMass__13->SetBinContent(4,12210);
   VbbHcc_HMass__13->SetBinContent(5,20559);
   VbbHcc_HMass__13->SetBinContent(6,26099);
   VbbHcc_HMass__13->SetBinContent(7,28165);
   VbbHcc_HMass__13->SetBinContent(8,28448);
   VbbHcc_HMass__13->SetBinContent(9,28438);
   VbbHcc_HMass__13->SetBinContent(10,27649);
   VbbHcc_HMass__13->SetBinContent(11,26527);
   VbbHcc_HMass__13->SetBinContent(12,25778);
   VbbHcc_HMass__13->SetBinContent(13,24944);
   VbbHcc_HMass__13->SetBinContent(14,24424);
   VbbHcc_HMass__13->SetBinContent(15,23324);
   VbbHcc_HMass__13->SetBinContent(16,22255);
   VbbHcc_HMass__13->SetBinContent(17,21601);
   VbbHcc_HMass__13->SetBinContent(18,20510);
   VbbHcc_HMass__13->SetBinContent(19,19750);
   VbbHcc_HMass__13->SetBinContent(20,18813);
   VbbHcc_HMass__13->SetBinContent(21,17442);
   VbbHcc_HMass__13->SetBinContent(22,16964);
   VbbHcc_HMass__13->SetBinContent(23,15762);
   VbbHcc_HMass__13->SetBinContent(24,15058);
   VbbHcc_HMass__13->SetBinContent(25,14041);
   VbbHcc_HMass__13->SetBinContent(26,12915);
   VbbHcc_HMass__13->SetBinContent(27,12266);
   VbbHcc_HMass__13->SetBinContent(28,11521);
   VbbHcc_HMass__13->SetBinContent(29,10808);
   VbbHcc_HMass__13->SetBinContent(30,10045);
   VbbHcc_HMass__13->SetBinContent(31,153877);
   VbbHcc_HMass__13->SetBinError(2,10.44031);
   VbbHcc_HMass__13->SetBinError(3,59);
   VbbHcc_HMass__13->SetBinError(4,110.4989);
   VbbHcc_HMass__13->SetBinError(5,143.3841);
   VbbHcc_HMass__13->SetBinError(6,161.5518);
   VbbHcc_HMass__13->SetBinError(7,167.8243);
   VbbHcc_HMass__13->SetBinError(8,168.6653);
   VbbHcc_HMass__13->SetBinError(9,168.6357);
   VbbHcc_HMass__13->SetBinError(10,166.2799);
   VbbHcc_HMass__13->SetBinError(11,162.8711);
   VbbHcc_HMass__13->SetBinError(12,160.5553);
   VbbHcc_HMass__13->SetBinError(13,157.9367);
   VbbHcc_HMass__13->SetBinError(14,156.2818);
   VbbHcc_HMass__13->SetBinError(15,152.722);
   VbbHcc_HMass__13->SetBinError(16,149.1811);
   VbbHcc_HMass__13->SetBinError(17,146.9728);
   VbbHcc_HMass__13->SetBinError(18,143.2131);
   VbbHcc_HMass__13->SetBinError(19,140.5347);
   VbbHcc_HMass__13->SetBinError(20,137.1605);
   VbbHcc_HMass__13->SetBinError(21,132.0682);
   VbbHcc_HMass__13->SetBinError(22,130.2459);
   VbbHcc_HMass__13->SetBinError(23,125.5468);
   VbbHcc_HMass__13->SetBinError(24,122.711);
   VbbHcc_HMass__13->SetBinError(25,118.4947);
   VbbHcc_HMass__13->SetBinError(26,113.6442);
   VbbHcc_HMass__13->SetBinError(27,110.752);
   VbbHcc_HMass__13->SetBinError(28,107.3359);
   VbbHcc_HMass__13->SetBinError(29,103.9615);
   VbbHcc_HMass__13->SetBinError(30,100.2247);
   VbbHcc_HMass__13->SetBinError(31,392.2716);
   VbbHcc_HMass__13->SetEntries(693783);

   ci = TColor::GetColor("#000099");
   VbbHcc_HMass__13->SetLineColor(ci);
   VbbHcc_HMass__13->SetLineWidth(2);
   VbbHcc_HMass__13->SetMarkerStyle(20);
   VbbHcc_HMass__13->SetMarkerSize(1.2);
   VbbHcc_HMass__13->GetXaxis()->SetRange(1,300);
   VbbHcc_HMass__13->GetXaxis()->SetLabelFont(42);
   VbbHcc_HMass__13->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_HMass__13->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_HMass__13->GetXaxis()->SetTitleFont(42);
   VbbHcc_HMass__13->GetYaxis()->SetLabelFont(42);
   VbbHcc_HMass__13->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_HMass__13->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_HMass__13->GetYaxis()->SetTitleOffset(0);
   VbbHcc_HMass__13->GetYaxis()->SetTitleFont(42);
   VbbHcc_HMass__13->GetZaxis()->SetLabelFont(42);
   VbbHcc_HMass__13->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_HMass__13->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_HMass__13->GetZaxis()->SetTitleFont(42);
   VbbHcc_HMass__13->Draw("same E");
   
   Double_t Graph_from_VbbHcc_HMass_fx1013[30] = {
   5,
   15,
   25,
   35,
   45,
   55,
   65,
   75,
   85,
   95,
   105,
   115,
   125,
   135,
   145,
   155,
   165,
   175,
   185,
   195,
   205,
   215,
   225,
   235,
   245,
   255,
   265,
   275,
   285,
   295};
   Double_t Graph_from_VbbHcc_HMass_fy1013[30] = {
   0,
   480.0957,
   22509.24,
   63594.17,
   92114,
   90236.14,
   87296.12,
   83215.96,
   77802.73,
   77572,
   84137.05,
   71074.77,
   69676.07,
   69809.17,
   65946.24,
   57158.62,
   51546.89,
   55622.71,
   41536.35,
   45211.91,
   36604.6,
   40273.33,
   37599.84,
   28671.1,
   31594.15,
   21248.47,
   21330.84,
   18941.74,
   19433.3,
   18214.58};
   Double_t Graph_from_VbbHcc_HMass_fex1013[30] = {
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5};
   Double_t Graph_from_VbbHcc_HMass_fey1013[30] = {
   0,
   380.3787,
   2852.535,
   5302.221,
   6862.79,
   5385.157,
   5197.001,
   4703.909,
   4446.623,
   4715.991,
   7663.51,
   4436.9,
   4329.441,
   4480.606,
   4486.782,
   4087.606,
   3944.048,
   4102.629,
   3289.565,
   3691.969,
   3131.065,
   3384.587,
   3279.73,
   2647.301,
   3645.676,
   2222.237,
   2301.25,
   2093.97,
   2225.003,
   2144.277};
   TGraphErrors *gre = new TGraphErrors(30,Graph_from_VbbHcc_HMass_fx1013,Graph_from_VbbHcc_HMass_fy1013,Graph_from_VbbHcc_HMass_fex1013,Graph_from_VbbHcc_HMass_fey1013);
   gre->SetName("Graph_from_VbbHcc_HMass");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_HMass1013 = new TH1F("Graph_Graph_from_VbbHcc_HMass1013","",100,0,330);
   Graph_Graph_from_VbbHcc_HMass1013->SetMinimum(0);
   Graph_Graph_from_VbbHcc_HMass1013->SetMaximum(108874.5);
   Graph_Graph_from_VbbHcc_HMass1013->SetDirectory(0);
   Graph_Graph_from_VbbHcc_HMass1013->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_HMass1013->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_HMass1013->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_HMass1013->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_HMass1013->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_HMass1013->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_HMass1013->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_HMass1013->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_HMass1013->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_HMass1013->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_VbbHcc_HMass1013->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_HMass1013->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_HMass1013->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_HMass1013->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_HMass1013->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_HMass1013);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_HMass","Data (JetHT, 2018)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.2);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_HMass_stack_12","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_HMass_stack_11","ZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_HMass_stack_10","ggZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_HMass_stack_9","ZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_HMass_stack_8","ZZ","F");

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
   entry=leg->AddEntry("VbbHcc_HMass_stack_7","WZ","F");

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
   entry=leg->AddEntry("VbbHcc_HMass_stack_6","WW","F");

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
   entry=leg->AddEntry("VbbHcc_HMass_stack_5","W + jets","F");

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
   entry=leg->AddEntry("VbbHcc_HMass_stack_4","Z + jets","F");

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
   entry=leg->AddEntry("VbbHcc_HMass_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_HMass_stack_2","Single top","F");

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
   entry=leg->AddEntry("VbbHcc_HMass_stack_1","QCD","F");

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
   entry=leg->AddEntry("Graph_from_VbbHcc_HMass","MC unc. (stat.)","fl");

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
   HMass_VbbHcc_18->cd();
  
// ------------>Primitives in pad: bottomPad
   TPad *bottomPad = new TPad("bottomPad", "bottomPad",0,0,1,0.3);
   bottomPad->Draw();
   bottomPad->cd();
   bottomPad->Range(-45.96762,-0.2774193,315.7258,1.658065);
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
   
   TH1D *data_mc_ratio__14 = new TH1D("data_mc_ratio__14","",30,0,300);
   data_mc_ratio__14->SetBinContent(2,0.227038);
   data_mc_ratio__14->SetBinContent(3,0.1546476);
   data_mc_ratio__14->SetBinContent(4,0.1919987);
   data_mc_ratio__14->SetBinContent(5,0.2231908);
   data_mc_ratio__14->SetBinContent(6,0.28923);
   data_mc_ratio__14->SetBinContent(7,0.3226375);
   data_mc_ratio__14->SetBinContent(8,0.3418575);
   data_mc_ratio__14->SetBinContent(9,0.3655142);
   data_mc_ratio__14->SetBinContent(10,0.3564301);
   data_mc_ratio__14->SetBinContent(11,0.3152832);
   data_mc_ratio__14->SetBinContent(12,0.3626885);
   data_mc_ratio__14->SetBinContent(13,0.3579996);
   data_mc_ratio__14->SetBinContent(14,0.3498681);
   data_mc_ratio__14->SetBinContent(15,0.353682);
   data_mc_ratio__14->SetBinContent(16,0.3893551);
   data_mc_ratio__14->SetBinContent(17,0.4190553);
   data_mc_ratio__14->SetBinContent(18,0.3687343);
   data_mc_ratio__14->SetBinContent(19,0.4754871);
   data_mc_ratio__14->SetBinContent(20,0.4161071);
   data_mc_ratio__14->SetBinContent(21,0.4764975);
   data_mc_ratio__14->SetBinContent(22,0.4212217);
   data_mc_ratio__14->SetBinContent(23,0.4192039);
   data_mc_ratio__14->SetBinContent(24,0.5251978);
   data_mc_ratio__14->SetBinContent(25,0.4444178);
   data_mc_ratio__14->SetBinContent(26,0.6078084);
   data_mc_ratio__14->SetBinContent(27,0.575036);
   data_mc_ratio__14->SetBinContent(28,0.6082334);
   data_mc_ratio__14->SetBinContent(29,0.5561587);
   data_mc_ratio__14->SetBinContent(30,0.5514814);
   data_mc_ratio__14->SetBinContent(31,0.733823);
   data_mc_ratio__14->SetBinError(2,0.0217463);
   data_mc_ratio__14->SetBinError(3,0.002621145);
   data_mc_ratio__14->SetBinError(4,0.001737563);
   data_mc_ratio__14->SetBinError(5,0.001556594);
   data_mc_ratio__14->SetBinError(6,0.001790323);
   data_mc_ratio__14->SetBinError(7,0.001922472);
   data_mc_ratio__14->SetBinError(8,0.002026839);
   data_mc_ratio__14->SetBinError(9,0.002167478);
   data_mc_ratio__14->SetBinError(10,0.002143555);
   data_mc_ratio__14->SetBinError(11,0.001935784);
   data_mc_ratio__14->SetBinError(12,0.002258963);
   data_mc_ratio__14->SetBinError(13,0.002266728);
   data_mc_ratio__14->SetBinError(14,0.0022387);
   data_mc_ratio__14->SetBinError(15,0.002315855);
   data_mc_ratio__14->SetBinError(16,0.002609949);
   data_mc_ratio__14->SetBinError(17,0.002851244);
   data_mc_ratio__14->SetBinError(18,0.002574724);
   data_mc_ratio__14->SetBinError(19,0.003383415);
   data_mc_ratio__14->SetBinError(20,0.003033724);
   data_mc_ratio__14->SetBinError(21,0.003607967);
   data_mc_ratio__14->SetBinError(22,0.003234049);
   data_mc_ratio__14->SetBinError(23,0.003339025);
   data_mc_ratio__14->SetBinError(24,0.004279955);
   data_mc_ratio__14->SetBinError(25,0.003750528);
   data_mc_ratio__14->SetBinError(26,0.005348346);
   data_mc_ratio__14->SetBinError(27,0.005192106);
   data_mc_ratio__14->SetBinError(28,0.005666634);
   data_mc_ratio__14->SetBinError(29,0.005349658);
   data_mc_ratio__14->SetBinError(30,0.005502448);
   data_mc_ratio__14->SetBinError(31,0.02352549);
   data_mc_ratio__14->SetMinimum(0.4);
   data_mc_ratio__14->SetMaximum(1.6);
   data_mc_ratio__14->SetEntries(1777.825);
   data_mc_ratio__14->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__14->SetLineColor(ci);
   data_mc_ratio__14->SetLineWidth(2);
   data_mc_ratio__14->SetMarkerStyle(20);
   data_mc_ratio__14->SetMarkerSize(1.2);
   data_mc_ratio__14->GetXaxis()->SetTitle("M_{H}");
   data_mc_ratio__14->GetXaxis()->SetRange(1,30);
   data_mc_ratio__14->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__14->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__14->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__14->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__14->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__14->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__14->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__14->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__14->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__14->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__14->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__14->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__14->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__14->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__14->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__14->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__14->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1014[30] = {
   5,
   15,
   25,
   35,
   45,
   55,
   65,
   75,
   85,
   95,
   105,
   115,
   125,
   135,
   145,
   155,
   165,
   175,
   185,
   195,
   205,
   215,
   225,
   235,
   245,
   255,
   265,
   275,
   285,
   295};
   Double_t Graph_from_mc_statistical_error_fy1014[30] = {
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
   Double_t Graph_from_mc_statistical_error_fex1014[30] = {
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5};
   Double_t Graph_from_mc_statistical_error_fey1014[30] = {
   0,
   0.7922977,
   0.1267273,
   0.08337591,
   0.07450322,
   0.0596785,
   0.05953301,
   0.05652653,
   0.05715253,
   0.06079501,
   0.09108366,
   0.06242582,
   0.06213671,
   0.06418362,
   0.06803696,
   0.07151338,
   0.07651379,
   0.07375818,
   0.07919725,
   0.0816592,
   0.08553749,
   0.08404039,
   0.08722722,
   0.09233342,
   0.1153909,
   0.1045834,
   0.1078837,
   0.1105479,
   0.1144944,
   0.1177231};
   gre = new TGraphErrors(30,Graph_from_mc_statistical_error_fx1014,Graph_from_mc_statistical_error_fy1014,Graph_from_mc_statistical_error_fex1014,Graph_from_mc_statistical_error_fey1014);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1014 = new TH1F("Graph_Graph_from_mc_statistical_error1014","",100,0,330);
   Graph_Graph_from_mc_statistical_error1014->SetMinimum(0.04924279);
   Graph_Graph_from_mc_statistical_error1014->SetMaximum(1.950757);
   Graph_Graph_from_mc_statistical_error1014->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1014->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1014->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1014->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1014->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1014->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1014->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1014->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1014->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1014->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1014->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1014->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1014->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1014->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1014->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1014->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1014);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,300,1);
   line->Draw();
   bottomPad->Modified();
   HMass_VbbHcc_18->cd();
   HMass_VbbHcc_18->Modified();
   HMass_VbbHcc_18->cd();
   HMass_VbbHcc_18->SetSelected(HMass_VbbHcc_18);
}
