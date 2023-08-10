void Sphericity_algo_18()
{
//=========Macro generated from canvas: Sphericity_algo_18/Sphericity_algo_18
//=========  (Thu Aug 10 12:28:43 2023) by ROOT version 6.14/09
   TCanvas *Sphericity_algo_18 = new TCanvas("Sphericity_algo_18", "Sphericity_algo_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_algo_18->SetHighLightColor(2);
   Sphericity_algo_18->Range(0,0,1,1);
   Sphericity_algo_18->SetFillColor(0);
   Sphericity_algo_18->SetFillStyle(4000);
   Sphericity_algo_18->SetBorderMode(0);
   Sphericity_algo_18->SetBorderSize(2);
   Sphericity_algo_18->SetFrameFillStyle(1000);
   Sphericity_algo_18->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.1532254,-1845.166,1.052419,1843331);
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
   st->SetMaximum(1579822);
   
   TH1F *st_stack_155 = new TH1F("st_stack_155","",25,0,1);
   st_stack_155->SetMinimum(0.01);
   st_stack_155->SetMaximum(1658813);
   st_stack_155->SetDirectory(0);
   st_stack_155->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_155->SetLineColor(ci);
   st_stack_155->GetXaxis()->SetRange(1,25);
   st_stack_155->GetXaxis()->SetLabelFont(42);
   st_stack_155->GetXaxis()->SetLabelSize(0.035);
   st_stack_155->GetXaxis()->SetTitleSize(0.035);
   st_stack_155->GetXaxis()->SetTitleFont(42);
   st_stack_155->GetYaxis()->SetTitle("Events/0.04");
   st_stack_155->GetYaxis()->SetLabelFont(42);
   st_stack_155->GetYaxis()->SetLabelSize(0.05);
   st_stack_155->GetYaxis()->SetTitleSize(0.057);
   st_stack_155->GetYaxis()->SetTitleOffset(1.2);
   st_stack_155->GetYaxis()->SetTitleFont(42);
   st_stack_155->GetZaxis()->SetLabelFont(42);
   st_stack_155->GetZaxis()->SetLabelSize(0.035);
   st_stack_155->GetZaxis()->SetTitleSize(0.035);
   st_stack_155->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_155);
   
   
   TH1D *VbbHcc_algo_Sphericity_stack_1 = new TH1D("VbbHcc_algo_Sphericity_stack_1","",25,0,1);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(1,626574.6);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(2,556843.9);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(3,324408.7);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(4,173377.2);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(5,82627.3);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(6,42659.8);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(7,12683.75);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(8,3688.033);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(9,1705.711);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(10,934.8539);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(11,375.3564);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(12,556.039);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(13,185.2759);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(14,126.988);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(15,91.42855);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(16,96.54629);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(17,476.9586);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(18,80.87551);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(19,9.789551);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(20,19.5791);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(1,11161.76);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(2,11063.86);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(3,21423.88);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(4,5376.336);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(5,3836.757);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(6,3481.044);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(7,2102.068);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(8,922.234);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(9,542.0448);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(10,386.1068);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(11,92.3069);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(12,375.8764);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(13,55.99528);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(14,43.78546);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(15,39.93715);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(16,40.36065);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(17,372.9425);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(18,38.71121);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(19,9.789551);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(20,13.84452);
   VbbHcc_algo_Sphericity_stack_1->SetEntries(114901);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_algo_Sphericity_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Sphericity_stack_1->SetLineColor(ci);
   VbbHcc_algo_Sphericity_stack_1->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Sphericity_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Sphericity_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Sphericity_stack_1,"");
   
   TH1D *VbbHcc_algo_Sphericity_stack_2 = new TH1D("VbbHcc_algo_Sphericity_stack_2","",25,0,1);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(1,4319.118);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(2,4058.894);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(3,2295.566);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(4,1313.041);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(5,704.4256);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(6,329.3339);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(7,135.7194);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(8,59.52779);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(9,30.10043);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(10,13.10901);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(11,11.11001);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(12,6.555405);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(13,4.2521);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(14,3.727698);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(15,2.367735);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(16,2.404006);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(17,1.726232);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(18,0.512072);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(19,0.2067329);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(20,0.3023572);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(21,0.05476569);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(1,26.12869);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(2,25.38865);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(3,19.05153);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(4,14.523);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(5,10.63298);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(6,7.302097);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(7,4.771531);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(8,3.081707);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(9,2.199811);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(10,1.300445);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(11,1.334262);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(12,1.01126);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(13,0.7761785);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(14,0.7190067);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(15,0.6100202);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(16,0.610911);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(17,0.4711346);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(18,0.290186);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(19,0.1035501);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(20,0.3023572);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(21,0.05476569);
   VbbHcc_algo_Sphericity_stack_2->SetEntries(162879);

   ci = TColor::GetColor("#660066");
   VbbHcc_algo_Sphericity_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Sphericity_stack_2->SetLineColor(ci);
   VbbHcc_algo_Sphericity_stack_2->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Sphericity_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Sphericity_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Sphericity_stack_2,"");
   
   TH1D *VbbHcc_algo_Sphericity_stack_3 = new TH1D("VbbHcc_algo_Sphericity_stack_3","",25,0,1);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(1,73366.94);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(2,73755.39);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(3,39398.44);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(4,21873.67);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(5,11757.64);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(6,5642.331);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(7,2442.3);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(8,1069.744);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(9,519.6354);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(10,278.3159);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(11,165.0585);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(12,102.2654);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(13,65.95218);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(14,46.07306);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(15,30.18992);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(16,22.16706);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(17,14.15536);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(18,10.93797);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(19,5.745606);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(20,2.73738);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(21,0.9718764);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(22,0.3155173);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(23,0.04698062);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(1,67.07186);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(2,67.44408);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(3,49.21915);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(4,36.65143);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(5,26.84165);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(6,18.5208);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(7,12.0646);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(8,7.903623);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(9,5.442726);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(10,3.970263);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(11,3.047407);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(12,2.402956);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(13,1.916104);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(14,1.619076);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(15,1.309207);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(16,1.119374);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(17,0.8969716);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(18,0.7773557);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(19,0.5829351);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(20,0.3988566);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(21,0.2398889);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(22,0.132039);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(23,0.04698062);
   VbbHcc_algo_Sphericity_stack_3->SetEntries(3891102);

   ci = TColor::GetColor("#cc00cc");
   VbbHcc_algo_Sphericity_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Sphericity_stack_3->SetLineColor(ci);
   VbbHcc_algo_Sphericity_stack_3->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Sphericity_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_3->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_3->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_3->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_3->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_3->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Sphericity_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_3->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_3->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Sphericity_stack_3,"");
   
   TH1D *VbbHcc_algo_Sphericity_stack_4 = new TH1D("VbbHcc_algo_Sphericity_stack_4","",25,0,1);
   VbbHcc_algo_Sphericity_stack_4->SetBinContent(1,3712.175);
   VbbHcc_algo_Sphericity_stack_4->SetBinContent(2,3416.461);
   VbbHcc_algo_Sphericity_stack_4->SetBinContent(3,1942.898);
   VbbHcc_algo_Sphericity_stack_4->SetBinContent(4,1183.756);
   VbbHcc_algo_Sphericity_stack_4->SetBinContent(5,610.5247);
   VbbHcc_algo_Sphericity_stack_4->SetBinContent(6,266.3449);
   VbbHcc_algo_Sphericity_stack_4->SetBinContent(7,85.68585);
   VbbHcc_algo_Sphericity_stack_4->SetBinContent(8,27.19894);
   VbbHcc_algo_Sphericity_stack_4->SetBinContent(9,7.561046);
   VbbHcc_algo_Sphericity_stack_4->SetBinContent(10,3.347647);
   VbbHcc_algo_Sphericity_stack_4->SetBinContent(11,4.234062);
   VbbHcc_algo_Sphericity_stack_4->SetBinContent(12,5.908572);
   VbbHcc_algo_Sphericity_stack_4->SetBinContent(13,0.8140376);
   VbbHcc_algo_Sphericity_stack_4->SetBinContent(14,0.6550539);
   VbbHcc_algo_Sphericity_stack_4->SetBinContent(15,0.4034972);
   VbbHcc_algo_Sphericity_stack_4->SetBinContent(16,0.3109243);
   VbbHcc_algo_Sphericity_stack_4->SetBinContent(17,0.5820669);
   VbbHcc_algo_Sphericity_stack_4->SetBinContent(18,0.377335);
   VbbHcc_algo_Sphericity_stack_4->SetBinError(1,45.67974);
   VbbHcc_algo_Sphericity_stack_4->SetBinError(2,46.4369);
   VbbHcc_algo_Sphericity_stack_4->SetBinError(3,33.0188);
   VbbHcc_algo_Sphericity_stack_4->SetBinError(4,25.80794);
   VbbHcc_algo_Sphericity_stack_4->SetBinError(5,18.65656);
   VbbHcc_algo_Sphericity_stack_4->SetBinError(6,12.79059);
   VbbHcc_algo_Sphericity_stack_4->SetBinError(7,6.382379);
   VbbHcc_algo_Sphericity_stack_4->SetBinError(8,2.774299);
   VbbHcc_algo_Sphericity_stack_4->SetBinError(9,1.454055);
   VbbHcc_algo_Sphericity_stack_4->SetBinError(10,0.8603764);
   VbbHcc_algo_Sphericity_stack_4->SetBinError(11,1.100403);
   VbbHcc_algo_Sphericity_stack_4->SetBinError(12,4.065213);
   VbbHcc_algo_Sphericity_stack_4->SetBinError(13,0.3102265);
   VbbHcc_algo_Sphericity_stack_4->SetBinError(14,0.2704992);
   VbbHcc_algo_Sphericity_stack_4->SetBinError(15,0.2037878);
   VbbHcc_algo_Sphericity_stack_4->SetBinError(16,0.1815481);
   VbbHcc_algo_Sphericity_stack_4->SetBinError(17,0.4981707);
   VbbHcc_algo_Sphericity_stack_4->SetBinError(18,0.2178545);
   VbbHcc_algo_Sphericity_stack_4->SetEntries(56536);

   ci = TColor::GetColor("#00cccc");
   VbbHcc_algo_Sphericity_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Sphericity_stack_4->SetLineColor(ci);
   VbbHcc_algo_Sphericity_stack_4->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Sphericity_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_4->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_4->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_4->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_4->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_4->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Sphericity_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_4->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_4->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Sphericity_stack_4,"");
   
   TH1D *VbbHcc_algo_Sphericity_stack_5 = new TH1D("VbbHcc_algo_Sphericity_stack_5","",25,0,1);
   VbbHcc_algo_Sphericity_stack_5->SetBinContent(1,1232.682);
   VbbHcc_algo_Sphericity_stack_5->SetBinContent(2,1030.442);
   VbbHcc_algo_Sphericity_stack_5->SetBinContent(3,571.754);
   VbbHcc_algo_Sphericity_stack_5->SetBinContent(4,366.5742);
   VbbHcc_algo_Sphericity_stack_5->SetBinContent(5,183.562);
   VbbHcc_algo_Sphericity_stack_5->SetBinContent(6,76.81612);
   VbbHcc_algo_Sphericity_stack_5->SetBinContent(7,36.16396);
   VbbHcc_algo_Sphericity_stack_5->SetBinContent(8,12.41107);
   VbbHcc_algo_Sphericity_stack_5->SetBinContent(9,2.509351);
   VbbHcc_algo_Sphericity_stack_5->SetBinContent(10,2.177229);
   VbbHcc_algo_Sphericity_stack_5->SetBinContent(11,0.5333332);
   VbbHcc_algo_Sphericity_stack_5->SetBinContent(12,0.3746698);
   VbbHcc_algo_Sphericity_stack_5->SetBinContent(13,0.7027659);
   VbbHcc_algo_Sphericity_stack_5->SetBinContent(15,0.3310339);
   VbbHcc_algo_Sphericity_stack_5->SetBinContent(16,0.5639564);
   VbbHcc_algo_Sphericity_stack_5->SetBinContent(17,0.1715234);
   VbbHcc_algo_Sphericity_stack_5->SetBinContent(19,0.2594997);
   VbbHcc_algo_Sphericity_stack_5->SetBinError(1,54.96429);
   VbbHcc_algo_Sphericity_stack_5->SetBinError(2,43.89838);
   VbbHcc_algo_Sphericity_stack_5->SetBinError(3,29.34619);
   VbbHcc_algo_Sphericity_stack_5->SetBinError(4,29.02846);
   VbbHcc_algo_Sphericity_stack_5->SetBinError(5,13.04542);
   VbbHcc_algo_Sphericity_stack_5->SetBinError(6,8.39835);
   VbbHcc_algo_Sphericity_stack_5->SetBinError(7,11.63777);
   VbbHcc_algo_Sphericity_stack_5->SetBinError(8,3.830323);
   VbbHcc_algo_Sphericity_stack_5->SetBinError(9,0.7791558);
   VbbHcc_algo_Sphericity_stack_5->SetBinError(10,0.6740877);
   VbbHcc_algo_Sphericity_stack_5->SetBinError(11,0.3095927);
   VbbHcc_algo_Sphericity_stack_5->SetBinError(12,0.3746698);
   VbbHcc_algo_Sphericity_stack_5->SetBinError(13,0.3909862);
   VbbHcc_algo_Sphericity_stack_5->SetBinError(15,0.175153);
   VbbHcc_algo_Sphericity_stack_5->SetBinError(16,0.3697314);
   VbbHcc_algo_Sphericity_stack_5->SetBinError(17,0.1343137);
   VbbHcc_algo_Sphericity_stack_5->SetBinError(19,0.2594997);
   VbbHcc_algo_Sphericity_stack_5->SetEntries(15329);

   ci = TColor::GetColor("#ff99cc");
   VbbHcc_algo_Sphericity_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Sphericity_stack_5->SetLineColor(ci);
   VbbHcc_algo_Sphericity_stack_5->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Sphericity_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_5->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_5->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_5->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_5->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_5->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Sphericity_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_5->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_5->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Sphericity_stack_5,"");
   
   TH1D *VbbHcc_algo_Sphericity_stack_6 = new TH1D("VbbHcc_algo_Sphericity_stack_6","",25,0,1);
   VbbHcc_algo_Sphericity_stack_6->SetBinContent(1,9.492896);
   VbbHcc_algo_Sphericity_stack_6->SetBinContent(2,10.39698);
   VbbHcc_algo_Sphericity_stack_6->SetBinContent(3,6.328597);
   VbbHcc_algo_Sphericity_stack_6->SetBinContent(4,5.424512);
   VbbHcc_algo_Sphericity_stack_6->SetBinContent(5,1.356128);
   VbbHcc_algo_Sphericity_stack_6->SetBinContent(6,1.356128);
   VbbHcc_algo_Sphericity_stack_6->SetBinContent(8,0.4520427);
   VbbHcc_algo_Sphericity_stack_6->SetBinError(1,2.07152);
   VbbHcc_algo_Sphericity_stack_6->SetBinError(2,2.16792);
   VbbHcc_algo_Sphericity_stack_6->SetBinError(3,1.691389);
   VbbHcc_algo_Sphericity_stack_6->SetBinError(4,1.565922);
   VbbHcc_algo_Sphericity_stack_6->SetBinError(5,0.7829609);
   VbbHcc_algo_Sphericity_stack_6->SetBinError(6,0.7829609);
   VbbHcc_algo_Sphericity_stack_6->SetBinError(8,0.4520427);
   VbbHcc_algo_Sphericity_stack_6->SetEntries(77);

   ci = TColor::GetColor("#9933ff");
   VbbHcc_algo_Sphericity_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Sphericity_stack_6->SetLineColor(ci);
   VbbHcc_algo_Sphericity_stack_6->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Sphericity_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Sphericity_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Sphericity_stack_6,"");
   
   TH1D *VbbHcc_algo_Sphericity_stack_7 = new TH1D("VbbHcc_algo_Sphericity_stack_7","",25,0,1);
   VbbHcc_algo_Sphericity_stack_7->SetBinContent(1,34.00312);
   VbbHcc_algo_Sphericity_stack_7->SetBinContent(2,22.31454);
   VbbHcc_algo_Sphericity_stack_7->SetBinContent(3,14.16796);
   VbbHcc_algo_Sphericity_stack_7->SetBinContent(4,9.209177);
   VbbHcc_algo_Sphericity_stack_7->SetBinContent(5,3.541991);
   VbbHcc_algo_Sphericity_stack_7->SetBinContent(6,3.541991);
   VbbHcc_algo_Sphericity_stack_7->SetBinContent(7,0.3541991);
   VbbHcc_algo_Sphericity_stack_7->SetBinContent(13,0.3541991);
   VbbHcc_algo_Sphericity_stack_7->SetBinError(1,3.470428);
   VbbHcc_algo_Sphericity_stack_7->SetBinError(2,2.811368);
   VbbHcc_algo_Sphericity_stack_7->SetBinError(3,2.240152);
   VbbHcc_algo_Sphericity_stack_7->SetBinError(4,1.806068);
   VbbHcc_algo_Sphericity_stack_7->SetBinError(5,1.120076);
   VbbHcc_algo_Sphericity_stack_7->SetBinError(6,1.120076);
   VbbHcc_algo_Sphericity_stack_7->SetBinError(7,0.3541991);
   VbbHcc_algo_Sphericity_stack_7->SetBinError(13,0.3541991);
   VbbHcc_algo_Sphericity_stack_7->SetEntries(247);

   ci = TColor::GetColor("#3399ff");
   VbbHcc_algo_Sphericity_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Sphericity_stack_7->SetLineColor(ci);
   VbbHcc_algo_Sphericity_stack_7->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Sphericity_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Sphericity_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Sphericity_stack_7,"");
   
   TH1D *VbbHcc_algo_Sphericity_stack_8 = new TH1D("VbbHcc_algo_Sphericity_stack_8","",25,0,1);
   VbbHcc_algo_Sphericity_stack_8->SetBinContent(1,56.16228);
   VbbHcc_algo_Sphericity_stack_8->SetBinContent(2,41.07391);
   VbbHcc_algo_Sphericity_stack_8->SetBinContent(3,24.30905);
   VbbHcc_algo_Sphericity_stack_8->SetBinContent(4,13.41189);
   VbbHcc_algo_Sphericity_stack_8->SetBinContent(5,9.779502);
   VbbHcc_algo_Sphericity_stack_8->SetBinContent(6,5.588287);
   VbbHcc_algo_Sphericity_stack_8->SetBinContent(7,0.8382431);
   VbbHcc_algo_Sphericity_stack_8->SetBinContent(8,0.2794144);
   VbbHcc_algo_Sphericity_stack_8->SetBinContent(11,0.2794144);
   VbbHcc_algo_Sphericity_stack_8->SetBinError(1,3.961382);
   VbbHcc_algo_Sphericity_stack_8->SetBinError(2,3.387719);
   VbbHcc_algo_Sphericity_stack_8->SetBinError(3,2.606204);
   VbbHcc_algo_Sphericity_stack_8->SetBinError(4,1.935839);
   VbbHcc_algo_Sphericity_stack_8->SetBinError(5,1.653038);
   VbbHcc_algo_Sphericity_stack_8->SetBinError(6,1.249579);
   VbbHcc_algo_Sphericity_stack_8->SetBinError(7,0.4839599);
   VbbHcc_algo_Sphericity_stack_8->SetBinError(8,0.2794144);
   VbbHcc_algo_Sphericity_stack_8->SetBinError(11,0.2794144);
   VbbHcc_algo_Sphericity_stack_8->SetEntries(543);

   ci = TColor::GetColor("#33ff99");
   VbbHcc_algo_Sphericity_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Sphericity_stack_8->SetLineColor(ci);
   VbbHcc_algo_Sphericity_stack_8->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Sphericity_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Sphericity_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Sphericity_stack_8,"");
   
   TH1D *VbbHcc_algo_Sphericity_stack_9 = new TH1D("VbbHcc_algo_Sphericity_stack_9","",25,0,1);
   VbbHcc_algo_Sphericity_stack_9->SetBinContent(1,34.22039);
   VbbHcc_algo_Sphericity_stack_9->SetBinContent(2,31.53689);
   VbbHcc_algo_Sphericity_stack_9->SetBinContent(3,17.28049);
   VbbHcc_algo_Sphericity_stack_9->SetBinContent(4,12.17177);
   VbbHcc_algo_Sphericity_stack_9->SetBinContent(5,8.178516);
   VbbHcc_algo_Sphericity_stack_9->SetBinContent(6,4.027542);
   VbbHcc_algo_Sphericity_stack_9->SetBinContent(7,1.033172);
   VbbHcc_algo_Sphericity_stack_9->SetBinContent(8,0.2194347);
   VbbHcc_algo_Sphericity_stack_9->SetBinContent(9,0.08000225);
   VbbHcc_algo_Sphericity_stack_9->SetBinContent(10,0.02514357);
   VbbHcc_algo_Sphericity_stack_9->SetBinContent(11,0.01600045);
   VbbHcc_algo_Sphericity_stack_9->SetBinContent(12,0.006857336);
   VbbHcc_algo_Sphericity_stack_9->SetBinContent(13,0.002285779);
   VbbHcc_algo_Sphericity_stack_9->SetBinContent(14,0.004571557);
   VbbHcc_algo_Sphericity_stack_9->SetBinContent(15,0.004571557);
   VbbHcc_algo_Sphericity_stack_9->SetBinContent(16,0.002285779);
   VbbHcc_algo_Sphericity_stack_9->SetBinContent(17,0.002285779);
   VbbHcc_algo_Sphericity_stack_9->SetBinError(1,0.2796788);
   VbbHcc_algo_Sphericity_stack_9->SetBinError(2,0.268489);
   VbbHcc_algo_Sphericity_stack_9->SetBinError(3,0.1987445);
   VbbHcc_algo_Sphericity_stack_9->SetBinError(4,0.1667992);
   VbbHcc_algo_Sphericity_stack_9->SetBinError(5,0.136727);
   VbbHcc_algo_Sphericity_stack_9->SetBinError(6,0.09594826);
   VbbHcc_algo_Sphericity_stack_9->SetBinError(7,0.04859632);
   VbbHcc_algo_Sphericity_stack_9->SetBinError(8,0.02239597);
   VbbHcc_algo_Sphericity_stack_9->SetBinError(9,0.01352285);
   VbbHcc_algo_Sphericity_stack_9->SetBinError(10,0.00758107);
   VbbHcc_algo_Sphericity_stack_9->SetBinError(11,0.006047602);
   VbbHcc_algo_Sphericity_stack_9->SetBinError(12,0.003959085);
   VbbHcc_algo_Sphericity_stack_9->SetBinError(13,0.002285779);
   VbbHcc_algo_Sphericity_stack_9->SetBinError(14,0.003232579);
   VbbHcc_algo_Sphericity_stack_9->SetBinError(15,0.003232579);
   VbbHcc_algo_Sphericity_stack_9->SetBinError(16,0.002285779);
   VbbHcc_algo_Sphericity_stack_9->SetBinError(17,0.002285779);
   VbbHcc_algo_Sphericity_stack_9->SetEntries(47604);

   ci = TColor::GetColor("#cccc00");
   VbbHcc_algo_Sphericity_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Sphericity_stack_9->SetLineColor(ci);
   VbbHcc_algo_Sphericity_stack_9->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Sphericity_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_9->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_9->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_9->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_9->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_9->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Sphericity_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_9->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_9->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Sphericity_stack_9,"");
   
   TH1D *VbbHcc_algo_Sphericity_stack_10 = new TH1D("VbbHcc_algo_Sphericity_stack_10","",25,0,1);
   VbbHcc_algo_Sphericity_stack_10->SetBinContent(1,20.49724);
   VbbHcc_algo_Sphericity_stack_10->SetBinContent(2,20.70351);
   VbbHcc_algo_Sphericity_stack_10->SetBinContent(3,11.66238);
   VbbHcc_algo_Sphericity_stack_10->SetBinContent(4,7.09591);
   VbbHcc_algo_Sphericity_stack_10->SetBinContent(5,4.031726);
   VbbHcc_algo_Sphericity_stack_10->SetBinContent(6,1.898125);
   VbbHcc_algo_Sphericity_stack_10->SetBinContent(7,0.6366825);
   VbbHcc_algo_Sphericity_stack_10->SetBinContent(8,0.2289195);
   VbbHcc_algo_Sphericity_stack_10->SetBinContent(9,0.08167182);
   VbbHcc_algo_Sphericity_stack_10->SetBinContent(10,0.05901832);
   VbbHcc_algo_Sphericity_stack_10->SetBinContent(11,0.02563422);
   VbbHcc_algo_Sphericity_stack_10->SetBinContent(12,0.01669205);
   VbbHcc_algo_Sphericity_stack_10->SetBinContent(13,0.01371133);
   VbbHcc_algo_Sphericity_stack_10->SetBinContent(14,0.007153736);
   VbbHcc_algo_Sphericity_stack_10->SetBinContent(15,0.00774988);
   VbbHcc_algo_Sphericity_stack_10->SetBinContent(16,0.003576868);
   VbbHcc_algo_Sphericity_stack_10->SetBinContent(17,0.004173012);
   VbbHcc_algo_Sphericity_stack_10->SetBinContent(18,0.001788434);
   VbbHcc_algo_Sphericity_stack_10->SetBinContent(19,0.002384579);
   VbbHcc_algo_Sphericity_stack_10->SetBinError(1,0.110541);
   VbbHcc_algo_Sphericity_stack_10->SetBinError(2,0.1110958);
   VbbHcc_algo_Sphericity_stack_10->SetBinError(3,0.08338144);
   VbbHcc_algo_Sphericity_stack_10->SetBinError(4,0.0650399);
   VbbHcc_algo_Sphericity_stack_10->SetBinError(5,0.04902542);
   VbbHcc_algo_Sphericity_stack_10->SetBinError(6,0.03363862);
   VbbHcc_algo_Sphericity_stack_10->SetBinError(7,0.01948217);
   VbbHcc_algo_Sphericity_stack_10->SetBinError(8,0.011682);
   VbbHcc_algo_Sphericity_stack_10->SetBinError(9,0.006977694);
   VbbHcc_algo_Sphericity_stack_10->SetBinError(10,0.005931564);
   VbbHcc_algo_Sphericity_stack_10->SetBinError(11,0.003909182);
   VbbHcc_algo_Sphericity_stack_10->SetBinError(12,0.003154501);
   VbbHcc_algo_Sphericity_stack_10->SetBinError(13,0.002859009);
   VbbHcc_algo_Sphericity_stack_10->SetBinError(14,0.002065106);
   VbbHcc_algo_Sphericity_stack_10->SetBinError(15,0.00214943);
   VbbHcc_algo_Sphericity_stack_10->SetBinError(16,0.00146025);
   VbbHcc_algo_Sphericity_stack_10->SetBinError(17,0.00157725);
   VbbHcc_algo_Sphericity_stack_10->SetBinError(18,0.001032553);
   VbbHcc_algo_Sphericity_stack_10->SetBinError(19,0.001192289);
   VbbHcc_algo_Sphericity_stack_10->SetEntries(112352);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_algo_Sphericity_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Sphericity_stack_10->SetLineColor(ci);
   VbbHcc_algo_Sphericity_stack_10->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Sphericity_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_10->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_10->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_10->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_10->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_10->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Sphericity_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_10->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_10->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Sphericity_stack_10,"");
   
   TH1D *VbbHcc_algo_Sphericity_stack_11 = new TH1D("VbbHcc_algo_Sphericity_stack_11","",25,0,1);
   VbbHcc_algo_Sphericity_stack_11->SetBinContent(1,0.2230247);
   VbbHcc_algo_Sphericity_stack_11->SetBinContent(2,0.2457823);
   VbbHcc_algo_Sphericity_stack_11->SetBinContent(3,0.1183396);
   VbbHcc_algo_Sphericity_stack_11->SetBinContent(4,0.1183396);
   VbbHcc_algo_Sphericity_stack_11->SetBinContent(5,0.05461829);
   VbbHcc_algo_Sphericity_stack_11->SetBinContent(6,0.03186067);
   VbbHcc_algo_Sphericity_stack_11->SetBinContent(7,0.009103048);
   VbbHcc_algo_Sphericity_stack_11->SetBinError(1,0.02252889);
   VbbHcc_algo_Sphericity_stack_11->SetBinError(2,0.02365041);
   VbbHcc_algo_Sphericity_stack_11->SetBinError(3,0.01641075);
   VbbHcc_algo_Sphericity_stack_11->SetBinError(4,0.01641075);
   VbbHcc_algo_Sphericity_stack_11->SetBinError(5,0.01114891);
   VbbHcc_algo_Sphericity_stack_11->SetBinError(6,0.008515121);
   VbbHcc_algo_Sphericity_stack_11->SetBinError(7,0.004551524);
   VbbHcc_algo_Sphericity_stack_11->SetEntries(352);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_algo_Sphericity_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Sphericity_stack_11->SetLineColor(ci);
   VbbHcc_algo_Sphericity_stack_11->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Sphericity_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Sphericity_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Sphericity_stack_11,"");
   
   TH1D *VbbHcc_algo_Sphericity_stack_12 = new TH1D("VbbHcc_algo_Sphericity_stack_12","",25,0,1);
   VbbHcc_algo_Sphericity_stack_12->SetBinContent(1,0.1177651);
   VbbHcc_algo_Sphericity_stack_12->SetBinContent(2,0.120462);
   VbbHcc_algo_Sphericity_stack_12->SetBinContent(3,0.06142964);
   VbbHcc_algo_Sphericity_stack_12->SetBinContent(4,0.04315058);
   VbbHcc_algo_Sphericity_stack_12->SetBinContent(5,0.02247426);
   VbbHcc_algo_Sphericity_stack_12->SetBinContent(6,0.007791077);
   VbbHcc_algo_Sphericity_stack_12->SetBinContent(7,0.003895538);
   VbbHcc_algo_Sphericity_stack_12->SetBinContent(8,0.002097598);
   VbbHcc_algo_Sphericity_stack_12->SetBinContent(9,0.0002996568);
   VbbHcc_algo_Sphericity_stack_12->SetBinContent(10,0.0002996568);
   VbbHcc_algo_Sphericity_stack_12->SetBinContent(11,0.0002996568);
   VbbHcc_algo_Sphericity_stack_12->SetBinContent(12,0.0002996568);
   VbbHcc_algo_Sphericity_stack_12->SetBinContent(13,0.0002996568);
   VbbHcc_algo_Sphericity_stack_12->SetBinError(1,0.005940465);
   VbbHcc_algo_Sphericity_stack_12->SetBinError(2,0.0060081);
   VbbHcc_algo_Sphericity_stack_12->SetBinError(3,0.004290432);
   VbbHcc_algo_Sphericity_stack_12->SetBinError(4,0.003595882);
   VbbHcc_algo_Sphericity_stack_12->SetBinError(5,0.002595104);
   VbbHcc_algo_Sphericity_stack_12->SetBinError(6,0.001527956);
   VbbHcc_algo_Sphericity_stack_12->SetBinError(7,0.001080428);
   VbbHcc_algo_Sphericity_stack_12->SetBinError(8,0.0007928174);
   VbbHcc_algo_Sphericity_stack_12->SetBinError(9,0.0002996568);
   VbbHcc_algo_Sphericity_stack_12->SetBinError(10,0.0002996568);
   VbbHcc_algo_Sphericity_stack_12->SetBinError(11,0.0002996568);
   VbbHcc_algo_Sphericity_stack_12->SetBinError(12,0.0002996568);
   VbbHcc_algo_Sphericity_stack_12->SetBinError(13,0.0002996568);
   VbbHcc_algo_Sphericity_stack_12->SetEntries(1270);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_algo_Sphericity_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Sphericity_stack_12->SetLineColor(ci);
   VbbHcc_algo_Sphericity_stack_12->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Sphericity_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_12->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_12->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_12->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_12->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_12->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Sphericity_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_12->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_12->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Sphericity_stack_12,"");
   st->Draw("hist");
   
   TH1D *VbbHcc_algo_Sphericity__425 = new TH1D("VbbHcc_algo_Sphericity__425","",25,0,1);
   VbbHcc_algo_Sphericity__425->SetBinContent(1,710920);
   VbbHcc_algo_Sphericity__425->SetBinContent(2,663547);
   VbbHcc_algo_Sphericity__425->SetBinContent(3,381247);
   VbbHcc_algo_Sphericity__425->SetBinContent(4,210624);
   VbbHcc_algo_Sphericity__425->SetBinContent(5,105888);
   VbbHcc_algo_Sphericity__425->SetBinContent(6,44549);
   VbbHcc_algo_Sphericity__425->SetBinContent(7,15506);
   VbbHcc_algo_Sphericity__425->SetBinContent(8,5593);
   VbbHcc_algo_Sphericity__425->SetBinContent(9,2432);
   VbbHcc_algo_Sphericity__425->SetBinContent(10,1304);
   VbbHcc_algo_Sphericity__425->SetBinContent(11,740);
   VbbHcc_algo_Sphericity__425->SetBinContent(12,490);
   VbbHcc_algo_Sphericity__425->SetBinContent(13,342);
   VbbHcc_algo_Sphericity__425->SetBinContent(14,228);
   VbbHcc_algo_Sphericity__425->SetBinContent(15,183);
   VbbHcc_algo_Sphericity__425->SetBinContent(16,133);
   VbbHcc_algo_Sphericity__425->SetBinContent(17,68);
   VbbHcc_algo_Sphericity__425->SetBinContent(18,60);
   VbbHcc_algo_Sphericity__425->SetBinContent(19,24);
   VbbHcc_algo_Sphericity__425->SetBinContent(20,13);
   VbbHcc_algo_Sphericity__425->SetBinContent(21,8);
   VbbHcc_algo_Sphericity__425->SetBinContent(22,1);
   VbbHcc_algo_Sphericity__425->SetEntries(2143924);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Sphericity__425->SetLineColor(ci);
   VbbHcc_algo_Sphericity__425->SetLineWidth(2);
   VbbHcc_algo_Sphericity__425->SetMarkerStyle(20);
   VbbHcc_algo_Sphericity__425->SetMarkerSize(1.2);
   VbbHcc_algo_Sphericity__425->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Sphericity__425->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity__425->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity__425->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity__425->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity__425->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity__425->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity__425->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity__425->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Sphericity__425->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity__425->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity__425->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity__425->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity__425->GetZaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity__425->Draw("same E");
   
   Double_t Graph_from_VbbHcc_algo_Sphericity_fx1309[25] = {
   0.02,
   0.06,
   0.1,
   0.14,
   0.18,
   0.22,
   0.26,
   0.3,
   0.34,
   0.38,
   0.42,
   0.46,
   0.5,
   0.54,
   0.58,
   0.62,
   0.66,
   0.7,
   0.74,
   0.78,
   0.82,
   0.86,
   0.9,
   0.94,
   0.98};
   Double_t Graph_from_VbbHcc_algo_Sphericity_fy1309[25] = {
   709360.3,
   639231.5,
   368691.3,
   198161.8,
   95910.42,
   48991.07,
   15386.5,
   4858.097,
   2265.679,
   1231.888,
   556.6137,
   671.1669,
   257.3675,
   177.4556,
   124.7331,
   121.9981,
   493.6003,
   92.70468,
   16.00377,
   22.61884,
   1.026642,
   0.3155173,
   0.04698062,
   0,
   0};
   Double_t Graph_from_VbbHcc_algo_Sphericity_fex1309[25] = {
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02};
   Double_t Graph_from_VbbHcc_algo_Sphericity_fey1309[25] = {
   11162.22,
   11064.28,
   21423.99,
   5376.621,
   3836.934,
   3481.135,
   2102.15,
   922.2853,
   542.0791,
   386.1309,
   92.37432,
   375.9076,
   56.03677,
   43.82212,
   39.96417,
   40.38289,
   372.9442,
   38.72072,
   9.810871,
   13.85356,
   0.2460609,
   0.132039,
   0.04698062,
   0,
   0};
   TGraphErrors *gre = new TGraphErrors(25,Graph_from_VbbHcc_algo_Sphericity_fx1309,Graph_from_VbbHcc_algo_Sphericity_fy1309,Graph_from_VbbHcc_algo_Sphericity_fex1309,Graph_from_VbbHcc_algo_Sphericity_fey1309);
   gre->SetName("Graph_from_VbbHcc_algo_Sphericity");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_algo_Sphericity1309 = new TH1F("Graph_Graph_from_VbbHcc_algo_Sphericity1309","",100,0,1.1);
   Graph_Graph_from_VbbHcc_algo_Sphericity1309->SetMinimum(0);
   Graph_Graph_from_VbbHcc_algo_Sphericity1309->SetMaximum(792574.7);
   Graph_Graph_from_VbbHcc_algo_Sphericity1309->SetDirectory(0);
   Graph_Graph_from_VbbHcc_algo_Sphericity1309->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_algo_Sphericity1309->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_algo_Sphericity1309->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_algo_Sphericity1309->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Sphericity1309->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Sphericity1309->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_algo_Sphericity1309->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_algo_Sphericity1309->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Sphericity1309->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Sphericity1309->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_VbbHcc_algo_Sphericity1309->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_algo_Sphericity1309->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_algo_Sphericity1309->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Sphericity1309->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Sphericity1309->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_algo_Sphericity1309);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_algo_Sphericity","Data (JetHT, 2018)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_algo_Sphericity_stack_12","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Sphericity_stack_11","ZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Sphericity_stack_10","ggZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Sphericity_stack_9","ZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Sphericity_stack_8","ZZ","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Sphericity_stack_7","WZ","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Sphericity_stack_6","WW","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Sphericity_stack_5","W + jets","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Sphericity_stack_4","Z + jets","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Sphericity_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Sphericity_stack_2","Single top","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Sphericity_stack_1","QCD","F");

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
   entry=leg->AddEntry("Graph_from_VbbHcc_algo_Sphericity","MC unc. (stat.)","fl");

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
   Sphericity_algo_18->cd();
  
// ------------>Primitives in pad: bottomPad
   TPad *bottomPad = new TPad("bottomPad", "bottomPad",0,0,1,0.3);
   bottomPad->Draw();
   bottomPad->cd();
   bottomPad->Range(-0.1532254,-0.2774193,1.052419,1.658065);
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
   
   TH1D *data_mc_ratio__426 = new TH1D("data_mc_ratio__426","",25,0,1);
   data_mc_ratio__426->SetBinContent(1,1.002199);
   data_mc_ratio__426->SetBinContent(2,1.038039);
   data_mc_ratio__426->SetBinContent(3,1.034055);
   data_mc_ratio__426->SetBinContent(4,1.062889);
   data_mc_ratio__426->SetBinContent(5,1.10403);
   data_mc_ratio__426->SetBinContent(6,0.9093289);
   data_mc_ratio__426->SetBinContent(7,1.007767);
   data_mc_ratio__426->SetBinContent(8,1.151274);
   data_mc_ratio__426->SetBinContent(9,1.073409);
   data_mc_ratio__426->SetBinContent(10,1.058538);
   data_mc_ratio__426->SetBinContent(11,1.329468);
   data_mc_ratio__426->SetBinContent(12,0.7300717);
   data_mc_ratio__426->SetBinContent(13,1.328839);
   data_mc_ratio__426->SetBinContent(14,1.284829);
   data_mc_ratio__426->SetBinContent(15,1.467133);
   data_mc_ratio__426->SetBinContent(16,1.090181);
   data_mc_ratio__426->SetBinContent(17,0.1377633);
   data_mc_ratio__426->SetBinContent(18,0.6472165);
   data_mc_ratio__426->SetBinContent(19,1.499646);
   data_mc_ratio__426->SetBinContent(20,0.5747421);
   data_mc_ratio__426->SetBinContent(21,7.792395);
   data_mc_ratio__426->SetBinContent(22,3.169399);
   data_mc_ratio__426->SetBinError(1,0.001188621);
   data_mc_ratio__426->SetBinError(2,0.001274318);
   data_mc_ratio__426->SetBinError(3,0.001674713);
   data_mc_ratio__426->SetBinError(4,0.002315976);
   data_mc_ratio__426->SetBinError(5,0.003392795);
   data_mc_ratio__426->SetBinError(6,0.004308261);
   data_mc_ratio__426->SetBinError(7,0.008093011);
   data_mc_ratio__426->SetBinError(8,0.01539417);
   data_mc_ratio__426->SetBinError(9,0.02176624);
   data_mc_ratio__426->SetBinError(10,0.02931349);
   data_mc_ratio__426->SetBinError(11,0.04887221);
   data_mc_ratio__426->SetBinError(12,0.03298128);
   data_mc_ratio__426->SetBinError(13,0.07185539);
   data_mc_ratio__426->SetBinError(14,0.08508986);
   data_mc_ratio__426->SetBinError(15,0.1084536);
   data_mc_ratio__426->SetBinError(16,0.09453067);
   data_mc_ratio__426->SetBinError(17,0.01670625);
   data_mc_ratio__426->SetBinError(18,0.08355529);
   data_mc_ratio__426->SetBinError(19,0.306114);
   data_mc_ratio__426->SetBinError(20,0.1594048);
   data_mc_ratio__426->SetBinError(21,2.755028);
   data_mc_ratio__426->SetBinError(22,3.169399);
   data_mc_ratio__426->SetMinimum(0.4);
   data_mc_ratio__426->SetMaximum(1.6);
   data_mc_ratio__426->SetEntries(39.50611);
   data_mc_ratio__426->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__426->SetLineColor(ci);
   data_mc_ratio__426->SetLineWidth(2);
   data_mc_ratio__426->SetMarkerStyle(20);
   data_mc_ratio__426->SetMarkerSize(1.2);
   data_mc_ratio__426->GetXaxis()->SetTitle("Sphericity");
   data_mc_ratio__426->GetXaxis()->SetRange(1,25);
   data_mc_ratio__426->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__426->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__426->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__426->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__426->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__426->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__426->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__426->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__426->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__426->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__426->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__426->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__426->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__426->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__426->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__426->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__426->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1310[25] = {
   0.02,
   0.06,
   0.1,
   0.14,
   0.18,
   0.22,
   0.26,
   0.3,
   0.34,
   0.38,
   0.42,
   0.46,
   0.5,
   0.54,
   0.58,
   0.62,
   0.66,
   0.7,
   0.74,
   0.78,
   0.82,
   0.86,
   0.9,
   0.94,
   0.98};
   Double_t Graph_from_mc_statistical_error_fy1310[25] = {
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
   Double_t Graph_from_mc_statistical_error_fex1310[25] = {
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02};
   Double_t Graph_from_mc_statistical_error_fey1310[25] = {
   0.01573561,
   0.01730872,
   0.05810822,
   0.02713249,
   0.04000539,
   0.07105652,
   0.1366231,
   0.189845,
   0.2392568,
   0.3134464,
   0.1659577,
   0.5600807,
   0.2177306,
   0.246947,
   0.3203975,
   0.3310125,
   0.7555591,
   0.4176781,
   0.6130348,
   0.6124788,
   0.2396755,
   0.4184842,
   1,
   0,
   0};
   gre = new TGraphErrors(25,Graph_from_mc_statistical_error_fx1310,Graph_from_mc_statistical_error_fy1310,Graph_from_mc_statistical_error_fex1310,Graph_from_mc_statistical_error_fey1310);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1310 = new TH1F("Graph_Graph_from_mc_statistical_error1310","",100,0,1.1);
   Graph_Graph_from_mc_statistical_error1310->SetMinimum(0);
   Graph_Graph_from_mc_statistical_error1310->SetMaximum(2.2);
   Graph_Graph_from_mc_statistical_error1310->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1310->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1310->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1310->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1310->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1310->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1310->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1310->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1310->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1310->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1310->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1310->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1310->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1310->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1310->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1310->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1310);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,1,1);
   line->Draw();
   bottomPad->Modified();
   Sphericity_algo_18->cd();
   Sphericity_algo_18->Modified();
   Sphericity_algo_18->cd();
   Sphericity_algo_18->SetSelected(Sphericity_algo_18);
}
