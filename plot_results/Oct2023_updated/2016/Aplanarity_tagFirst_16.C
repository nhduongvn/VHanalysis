#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Aplanarity_tagFirst_16()
{
//=========Macro generated from canvas: Aplanarity_tagFirst_16/Aplanarity_tagFirst_16
//=========  (Fri Oct 20 15:09:17 2023) by ROOT version 6.28/04
   TCanvas *Aplanarity_tagFirst_16 = new TCanvas("Aplanarity_tagFirst_16", "Aplanarity_tagFirst_16",0,0,600,600);
   Aplanarity_tagFirst_16->SetHighLightColor(2);
   Aplanarity_tagFirst_16->Range(0,0,1,1);
   Aplanarity_tagFirst_16->SetFillColor(0);
   Aplanarity_tagFirst_16->SetFillStyle(4000);
   Aplanarity_tagFirst_16->SetBorderMode(0);
   Aplanarity_tagFirst_16->SetBorderSize(2);
   Aplanarity_tagFirst_16->SetFrameFillStyle(1000);
   Aplanarity_tagFirst_16->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.1532254,-5263.844,1.052419,5258590);
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
   st->SetMaximum(4732204);
   
   TH1F *st_stack_190 = new TH1F("st_stack_190","",50,0,1);
   st_stack_190->SetMinimum(0.01);
   st_stack_190->SetMaximum(4732204);
   st_stack_190->SetDirectory(nullptr);
   st_stack_190->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_190->SetLineColor(ci);
   st_stack_190->SetLineWidth(0);
   st_stack_190->GetXaxis()->SetRange(1,50);
   st_stack_190->GetXaxis()->SetLabelFont(42);
   st_stack_190->GetXaxis()->SetTitleOffset(1);
   st_stack_190->GetXaxis()->SetTitleFont(42);
   st_stack_190->GetYaxis()->SetTitle("Events/0.02");
   st_stack_190->GetYaxis()->SetLabelFont(42);
   st_stack_190->GetYaxis()->SetLabelSize(0.05);
   st_stack_190->GetYaxis()->SetTitleSize(0.057);
   st_stack_190->GetYaxis()->SetTitleOffset(1.2);
   st_stack_190->GetYaxis()->SetTitleFont(42);
   st_stack_190->GetZaxis()->SetLabelFont(42);
   st_stack_190->GetZaxis()->SetTitleOffset(1);
   st_stack_190->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_190);
   
   
   TH1D *VbbHcc_tagFirst_Aplanarity_stack_1 = new TH1D("VbbHcc_tagFirst_Aplanarity_stack_1","",50,0,1);
   VbbHcc_tagFirst_Aplanarity_stack_1->SetBinContent(1,1521674);
   VbbHcc_tagFirst_Aplanarity_stack_1->SetBinContent(2,417350.8);
   VbbHcc_tagFirst_Aplanarity_stack_1->SetBinContent(3,154154.9);
   VbbHcc_tagFirst_Aplanarity_stack_1->SetBinContent(4,78827.36);
   VbbHcc_tagFirst_Aplanarity_stack_1->SetBinContent(5,50061.67);
   VbbHcc_tagFirst_Aplanarity_stack_1->SetBinContent(6,25088.09);
   VbbHcc_tagFirst_Aplanarity_stack_1->SetBinContent(7,20302.64);
   VbbHcc_tagFirst_Aplanarity_stack_1->SetBinContent(8,11466.8);
   VbbHcc_tagFirst_Aplanarity_stack_1->SetBinContent(9,7512.256);
   VbbHcc_tagFirst_Aplanarity_stack_1->SetBinContent(10,5526.314);
   VbbHcc_tagFirst_Aplanarity_stack_1->SetBinContent(11,3349.585);
   VbbHcc_tagFirst_Aplanarity_stack_1->SetBinContent(12,2670.874);
   VbbHcc_tagFirst_Aplanarity_stack_1->SetBinContent(13,2300.468);
   VbbHcc_tagFirst_Aplanarity_stack_1->SetBinContent(14,1420.944);
   VbbHcc_tagFirst_Aplanarity_stack_1->SetBinContent(15,987.4416);
   VbbHcc_tagFirst_Aplanarity_stack_1->SetBinContent(16,557.848);
   VbbHcc_tagFirst_Aplanarity_stack_1->SetBinContent(17,337.4583);
   VbbHcc_tagFirst_Aplanarity_stack_1->SetBinContent(18,110.3923);
   VbbHcc_tagFirst_Aplanarity_stack_1->SetBinContent(19,15.08251);
   VbbHcc_tagFirst_Aplanarity_stack_1->SetBinContent(21,6.070859);
   VbbHcc_tagFirst_Aplanarity_stack_1->SetBinError(1,27585.4);
   VbbHcc_tagFirst_Aplanarity_stack_1->SetBinError(2,26561.13);
   VbbHcc_tagFirst_Aplanarity_stack_1->SetBinError(3,5916.484);
   VbbHcc_tagFirst_Aplanarity_stack_1->SetBinError(4,4066.664);
   VbbHcc_tagFirst_Aplanarity_stack_1->SetBinError(5,3386.986);
   VbbHcc_tagFirst_Aplanarity_stack_1->SetBinError(6,1847.553);
   VbbHcc_tagFirst_Aplanarity_stack_1->SetBinError(7,2295.523);
   VbbHcc_tagFirst_Aplanarity_stack_1->SetBinError(8,1467.214);
   VbbHcc_tagFirst_Aplanarity_stack_1->SetBinError(9,1010.598);
   VbbHcc_tagFirst_Aplanarity_stack_1->SetBinError(10,954.6003);
   VbbHcc_tagFirst_Aplanarity_stack_1->SetBinError(11,694.5547);
   VbbHcc_tagFirst_Aplanarity_stack_1->SetBinError(12,661.9452);
   VbbHcc_tagFirst_Aplanarity_stack_1->SetBinError(13,583.0624);
   VbbHcc_tagFirst_Aplanarity_stack_1->SetBinError(14,450.5926);
   VbbHcc_tagFirst_Aplanarity_stack_1->SetBinError(15,443.4814);
   VbbHcc_tagFirst_Aplanarity_stack_1->SetBinError(16,317.4865);
   VbbHcc_tagFirst_Aplanarity_stack_1->SetBinError(17,185.8352);
   VbbHcc_tagFirst_Aplanarity_stack_1->SetBinError(18,41.36722);
   VbbHcc_tagFirst_Aplanarity_stack_1->SetBinError(19,8.768735);
   VbbHcc_tagFirst_Aplanarity_stack_1->SetBinError(21,5.3653);
   VbbHcc_tagFirst_Aplanarity_stack_1->SetEntries(186449);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_tagFirst_Aplanarity_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tagFirst_Aplanarity_stack_1->SetLineColor(ci);
   VbbHcc_tagFirst_Aplanarity_stack_1->GetXaxis()->SetRange(1,100);
   VbbHcc_tagFirst_Aplanarity_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_tagFirst_Aplanarity_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tagFirst_Aplanarity_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_tagFirst_Aplanarity_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_tagFirst_Aplanarity_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_tagFirst_Aplanarity_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_tagFirst_Aplanarity_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tagFirst_Aplanarity_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tagFirst_Aplanarity_stack_1,"");
   
   TH1D *VbbHcc_tagFirst_Aplanarity_stack_2 = new TH1D("VbbHcc_tagFirst_Aplanarity_stack_2","",50,0,1);
   VbbHcc_tagFirst_Aplanarity_stack_2->SetBinContent(1,15175.84);
   VbbHcc_tagFirst_Aplanarity_stack_2->SetBinContent(2,4004.707);
   VbbHcc_tagFirst_Aplanarity_stack_2->SetBinContent(3,1787.56);
   VbbHcc_tagFirst_Aplanarity_stack_2->SetBinContent(4,941.4602);
   VbbHcc_tagFirst_Aplanarity_stack_2->SetBinContent(5,570.43);
   VbbHcc_tagFirst_Aplanarity_stack_2->SetBinContent(6,347.5187);
   VbbHcc_tagFirst_Aplanarity_stack_2->SetBinContent(7,221.113);
   VbbHcc_tagFirst_Aplanarity_stack_2->SetBinContent(8,141.6389);
   VbbHcc_tagFirst_Aplanarity_stack_2->SetBinContent(9,100.724);
   VbbHcc_tagFirst_Aplanarity_stack_2->SetBinContent(10,65.20573);
   VbbHcc_tagFirst_Aplanarity_stack_2->SetBinContent(11,45.05953);
   VbbHcc_tagFirst_Aplanarity_stack_2->SetBinContent(12,27.77697);
   VbbHcc_tagFirst_Aplanarity_stack_2->SetBinContent(13,20.87646);
   VbbHcc_tagFirst_Aplanarity_stack_2->SetBinContent(14,11.59977);
   VbbHcc_tagFirst_Aplanarity_stack_2->SetBinContent(15,8.775043);
   VbbHcc_tagFirst_Aplanarity_stack_2->SetBinContent(16,4.424134);
   VbbHcc_tagFirst_Aplanarity_stack_2->SetBinContent(17,2.644238);
   VbbHcc_tagFirst_Aplanarity_stack_2->SetBinContent(18,2.400631);
   VbbHcc_tagFirst_Aplanarity_stack_2->SetBinContent(19,1.688093);
   VbbHcc_tagFirst_Aplanarity_stack_2->SetBinContent(20,0.695856);
   VbbHcc_tagFirst_Aplanarity_stack_2->SetBinContent(21,0.6278424);
   VbbHcc_tagFirst_Aplanarity_stack_2->SetBinContent(23,0.03907533);
   VbbHcc_tagFirst_Aplanarity_stack_2->SetBinError(1,47.5644);
   VbbHcc_tagFirst_Aplanarity_stack_2->SetBinError(2,24.55003);
   VbbHcc_tagFirst_Aplanarity_stack_2->SetBinError(3,16.62613);
   VbbHcc_tagFirst_Aplanarity_stack_2->SetBinError(4,12.16904);
   VbbHcc_tagFirst_Aplanarity_stack_2->SetBinError(5,9.695705);
   VbbHcc_tagFirst_Aplanarity_stack_2->SetBinError(6,7.565561);
   VbbHcc_tagFirst_Aplanarity_stack_2->SetBinError(7,6.068348);
   VbbHcc_tagFirst_Aplanarity_stack_2->SetBinError(8,4.783923);
   VbbHcc_tagFirst_Aplanarity_stack_2->SetBinError(9,4.159019);
   VbbHcc_tagFirst_Aplanarity_stack_2->SetBinError(10,3.241963);
   VbbHcc_tagFirst_Aplanarity_stack_2->SetBinError(11,2.730346);
   VbbHcc_tagFirst_Aplanarity_stack_2->SetBinError(12,2.161018);
   VbbHcc_tagFirst_Aplanarity_stack_2->SetBinError(13,1.821204);
   VbbHcc_tagFirst_Aplanarity_stack_2->SetBinError(14,1.269823);
   VbbHcc_tagFirst_Aplanarity_stack_2->SetBinError(15,1.119752);
   VbbHcc_tagFirst_Aplanarity_stack_2->SetBinError(16,0.8790511);
   VbbHcc_tagFirst_Aplanarity_stack_2->SetBinError(17,0.62248);
   VbbHcc_tagFirst_Aplanarity_stack_2->SetBinError(18,0.6820955);
   VbbHcc_tagFirst_Aplanarity_stack_2->SetBinError(19,0.5398686);
   VbbHcc_tagFirst_Aplanarity_stack_2->SetBinError(20,0.2936249);
   VbbHcc_tagFirst_Aplanarity_stack_2->SetBinError(21,0.4241314);
   VbbHcc_tagFirst_Aplanarity_stack_2->SetBinError(23,0.03907533);
   VbbHcc_tagFirst_Aplanarity_stack_2->SetEntries(400441);

   ci = TColor::GetColor("#660066");
   VbbHcc_tagFirst_Aplanarity_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tagFirst_Aplanarity_stack_2->SetLineColor(ci);
   VbbHcc_tagFirst_Aplanarity_stack_2->GetXaxis()->SetRange(1,100);
   VbbHcc_tagFirst_Aplanarity_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_tagFirst_Aplanarity_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tagFirst_Aplanarity_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_tagFirst_Aplanarity_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_tagFirst_Aplanarity_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_tagFirst_Aplanarity_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_tagFirst_Aplanarity_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tagFirst_Aplanarity_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tagFirst_Aplanarity_stack_2,"");
   
   TH1D *VbbHcc_tagFirst_Aplanarity_stack_3 = new TH1D("VbbHcc_tagFirst_Aplanarity_stack_3","",50,0,1);
   VbbHcc_tagFirst_Aplanarity_stack_3->SetBinContent(1,250279.2);
   VbbHcc_tagFirst_Aplanarity_stack_3->SetBinContent(2,73643.77);
   VbbHcc_tagFirst_Aplanarity_stack_3->SetBinContent(3,33398.14);
   VbbHcc_tagFirst_Aplanarity_stack_3->SetBinContent(4,17971.7);
   VbbHcc_tagFirst_Aplanarity_stack_3->SetBinContent(5,10695.76);
   VbbHcc_tagFirst_Aplanarity_stack_3->SetBinContent(6,6646.837);
   VbbHcc_tagFirst_Aplanarity_stack_3->SetBinContent(7,4335.825);
   VbbHcc_tagFirst_Aplanarity_stack_3->SetBinContent(8,2871.905);
   VbbHcc_tagFirst_Aplanarity_stack_3->SetBinContent(9,1944.624);
   VbbHcc_tagFirst_Aplanarity_stack_3->SetBinContent(10,1331.302);
   VbbHcc_tagFirst_Aplanarity_stack_3->SetBinContent(11,898.0897);
   VbbHcc_tagFirst_Aplanarity_stack_3->SetBinContent(12,599.169);
   VbbHcc_tagFirst_Aplanarity_stack_3->SetBinContent(13,399.5465);
   VbbHcc_tagFirst_Aplanarity_stack_3->SetBinContent(14,267.5165);
   VbbHcc_tagFirst_Aplanarity_stack_3->SetBinContent(15,171.6403);
   VbbHcc_tagFirst_Aplanarity_stack_3->SetBinContent(16,111.255);
   VbbHcc_tagFirst_Aplanarity_stack_3->SetBinContent(17,67.67803);
   VbbHcc_tagFirst_Aplanarity_stack_3->SetBinContent(18,39.17588);
   VbbHcc_tagFirst_Aplanarity_stack_3->SetBinContent(19,21.72571);
   VbbHcc_tagFirst_Aplanarity_stack_3->SetBinContent(20,11.46463);
   VbbHcc_tagFirst_Aplanarity_stack_3->SetBinContent(21,4.092037);
   VbbHcc_tagFirst_Aplanarity_stack_3->SetBinContent(22,1.836968);
   VbbHcc_tagFirst_Aplanarity_stack_3->SetBinContent(23,0.3078169);
   VbbHcc_tagFirst_Aplanarity_stack_3->SetBinContent(24,0.03524097);
   VbbHcc_tagFirst_Aplanarity_stack_3->SetBinError(1,118.3765);
   VbbHcc_tagFirst_Aplanarity_stack_3->SetBinError(2,63.96129);
   VbbHcc_tagFirst_Aplanarity_stack_3->SetBinError(3,43.07199);
   VbbHcc_tagFirst_Aplanarity_stack_3->SetBinError(4,31.58178);
   VbbHcc_tagFirst_Aplanarity_stack_3->SetBinError(5,24.35015);
   VbbHcc_tagFirst_Aplanarity_stack_3->SetBinError(6,19.17579);
   VbbHcc_tagFirst_Aplanarity_stack_3->SetBinError(7,15.46742);
   VbbHcc_tagFirst_Aplanarity_stack_3->SetBinError(8,12.58776);
   VbbHcc_tagFirst_Aplanarity_stack_3->SetBinError(9,10.33692);
   VbbHcc_tagFirst_Aplanarity_stack_3->SetBinError(10,8.561161);
   VbbHcc_tagFirst_Aplanarity_stack_3->SetBinError(11,7.041081);
   VbbHcc_tagFirst_Aplanarity_stack_3->SetBinError(12,5.734164);
   VbbHcc_tagFirst_Aplanarity_stack_3->SetBinError(13,4.671665);
   VbbHcc_tagFirst_Aplanarity_stack_3->SetBinError(14,3.823935);
   VbbHcc_tagFirst_Aplanarity_stack_3->SetBinError(15,3.07233);
   VbbHcc_tagFirst_Aplanarity_stack_3->SetBinError(16,2.467285);
   VbbHcc_tagFirst_Aplanarity_stack_3->SetBinError(17,1.922287);
   VbbHcc_tagFirst_Aplanarity_stack_3->SetBinError(18,1.451347);
   VbbHcc_tagFirst_Aplanarity_stack_3->SetBinError(19,1.089045);
   VbbHcc_tagFirst_Aplanarity_stack_3->SetBinError(20,0.7850583);
   VbbHcc_tagFirst_Aplanarity_stack_3->SetBinError(21,0.4707197);
   VbbHcc_tagFirst_Aplanarity_stack_3->SetBinError(22,0.3168854);
   VbbHcc_tagFirst_Aplanarity_stack_3->SetBinError(23,0.1318727);
   VbbHcc_tagFirst_Aplanarity_stack_3->SetBinError(24,0.03524097);
   VbbHcc_tagFirst_Aplanarity_stack_3->SetEntries(7925609);

   ci = TColor::GetColor("#cc00cc");
   VbbHcc_tagFirst_Aplanarity_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tagFirst_Aplanarity_stack_3->SetLineColor(ci);
   VbbHcc_tagFirst_Aplanarity_stack_3->GetXaxis()->SetRange(1,100);
   VbbHcc_tagFirst_Aplanarity_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_tagFirst_Aplanarity_stack_3->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tagFirst_Aplanarity_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_tagFirst_Aplanarity_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_tagFirst_Aplanarity_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_tagFirst_Aplanarity_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_tagFirst_Aplanarity_stack_3->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tagFirst_Aplanarity_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tagFirst_Aplanarity_stack_3,"");
   
   TH1D *VbbHcc_tagFirst_Aplanarity_stack_4 = new TH1D("VbbHcc_tagFirst_Aplanarity_stack_4","",50,0,1);
   VbbHcc_tagFirst_Aplanarity_stack_4->SetBinContent(1,12129.57);
   VbbHcc_tagFirst_Aplanarity_stack_4->SetBinContent(2,2902.563);
   VbbHcc_tagFirst_Aplanarity_stack_4->SetBinContent(3,1289.199);
   VbbHcc_tagFirst_Aplanarity_stack_4->SetBinContent(4,715.8185);
   VbbHcc_tagFirst_Aplanarity_stack_4->SetBinContent(5,405.5211);
   VbbHcc_tagFirst_Aplanarity_stack_4->SetBinContent(6,242.6325);
   VbbHcc_tagFirst_Aplanarity_stack_4->SetBinContent(7,160.544);
   VbbHcc_tagFirst_Aplanarity_stack_4->SetBinContent(8,108.581);
   VbbHcc_tagFirst_Aplanarity_stack_4->SetBinContent(9,80.40929);
   VbbHcc_tagFirst_Aplanarity_stack_4->SetBinContent(10,51.68805);
   VbbHcc_tagFirst_Aplanarity_stack_4->SetBinContent(11,39.05374);
   VbbHcc_tagFirst_Aplanarity_stack_4->SetBinContent(12,21.1753);
   VbbHcc_tagFirst_Aplanarity_stack_4->SetBinContent(13,25.12158);
   VbbHcc_tagFirst_Aplanarity_stack_4->SetBinContent(14,14.90387);
   VbbHcc_tagFirst_Aplanarity_stack_4->SetBinContent(15,7.922992);
   VbbHcc_tagFirst_Aplanarity_stack_4->SetBinContent(16,4.570491);
   VbbHcc_tagFirst_Aplanarity_stack_4->SetBinContent(17,3.590492);
   VbbHcc_tagFirst_Aplanarity_stack_4->SetBinContent(18,0.922041);
   VbbHcc_tagFirst_Aplanarity_stack_4->SetBinContent(19,0.7712691);
   VbbHcc_tagFirst_Aplanarity_stack_4->SetBinContent(20,0.3036693);
   VbbHcc_tagFirst_Aplanarity_stack_4->SetBinContent(21,0.1541286);
   VbbHcc_tagFirst_Aplanarity_stack_4->SetBinContent(23,0.06293833);
   VbbHcc_tagFirst_Aplanarity_stack_4->SetBinContent(24,0.05708932);
   VbbHcc_tagFirst_Aplanarity_stack_4->SetBinError(1,64.38555);
   VbbHcc_tagFirst_Aplanarity_stack_4->SetBinError(2,35.22801);
   VbbHcc_tagFirst_Aplanarity_stack_4->SetBinError(3,24.46061);
   VbbHcc_tagFirst_Aplanarity_stack_4->SetBinError(4,19.34229);
   VbbHcc_tagFirst_Aplanarity_stack_4->SetBinError(5,14.85943);
   VbbHcc_tagFirst_Aplanarity_stack_4->SetBinError(6,11.33904);
   VbbHcc_tagFirst_Aplanarity_stack_4->SetBinError(7,8.463345);
   VbbHcc_tagFirst_Aplanarity_stack_4->SetBinError(8,7.012489);
   VbbHcc_tagFirst_Aplanarity_stack_4->SetBinError(9,7.466833);
   VbbHcc_tagFirst_Aplanarity_stack_4->SetBinError(10,5.416042);
   VbbHcc_tagFirst_Aplanarity_stack_4->SetBinError(11,4.911652);
   VbbHcc_tagFirst_Aplanarity_stack_4->SetBinError(12,3.166586);
   VbbHcc_tagFirst_Aplanarity_stack_4->SetBinError(13,5.513922);
   VbbHcc_tagFirst_Aplanarity_stack_4->SetBinError(14,3.406618);
   VbbHcc_tagFirst_Aplanarity_stack_4->SetBinError(15,2.469356);
   VbbHcc_tagFirst_Aplanarity_stack_4->SetBinError(16,1.373632);
   VbbHcc_tagFirst_Aplanarity_stack_4->SetBinError(17,1.884407);
   VbbHcc_tagFirst_Aplanarity_stack_4->SetBinError(18,0.3111927);
   VbbHcc_tagFirst_Aplanarity_stack_4->SetBinError(19,0.3491486);
   VbbHcc_tagFirst_Aplanarity_stack_4->SetBinError(20,0.1463817);
   VbbHcc_tagFirst_Aplanarity_stack_4->SetBinError(21,0.1090464);
   VbbHcc_tagFirst_Aplanarity_stack_4->SetBinError(23,0.06293833);
   VbbHcc_tagFirst_Aplanarity_stack_4->SetBinError(24,0.05708932);
   VbbHcc_tagFirst_Aplanarity_stack_4->SetEntries(172036);

   ci = TColor::GetColor("#00cccc");
   VbbHcc_tagFirst_Aplanarity_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tagFirst_Aplanarity_stack_4->SetLineColor(ci);
   VbbHcc_tagFirst_Aplanarity_stack_4->GetXaxis()->SetRange(1,100);
   VbbHcc_tagFirst_Aplanarity_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_tagFirst_Aplanarity_stack_4->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tagFirst_Aplanarity_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_tagFirst_Aplanarity_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_tagFirst_Aplanarity_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_tagFirst_Aplanarity_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_tagFirst_Aplanarity_stack_4->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tagFirst_Aplanarity_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tagFirst_Aplanarity_stack_4,"");
   
   TH1D *VbbHcc_tagFirst_Aplanarity_stack_5 = new TH1D("VbbHcc_tagFirst_Aplanarity_stack_5","",50,0,1);
   VbbHcc_tagFirst_Aplanarity_stack_5->SetBinContent(1,7271.029);
   VbbHcc_tagFirst_Aplanarity_stack_5->SetBinContent(2,1605.418);
   VbbHcc_tagFirst_Aplanarity_stack_5->SetBinContent(3,685.5983);
   VbbHcc_tagFirst_Aplanarity_stack_5->SetBinContent(4,379.9707);
   VbbHcc_tagFirst_Aplanarity_stack_5->SetBinContent(5,179.031);
   VbbHcc_tagFirst_Aplanarity_stack_5->SetBinContent(6,132.1999);
   VbbHcc_tagFirst_Aplanarity_stack_5->SetBinContent(7,85.30454);
   VbbHcc_tagFirst_Aplanarity_stack_5->SetBinContent(8,60.16795);
   VbbHcc_tagFirst_Aplanarity_stack_5->SetBinContent(9,36.6617);
   VbbHcc_tagFirst_Aplanarity_stack_5->SetBinContent(10,19.98798);
   VbbHcc_tagFirst_Aplanarity_stack_5->SetBinContent(11,17.29067);
   VbbHcc_tagFirst_Aplanarity_stack_5->SetBinContent(12,11.09374);
   VbbHcc_tagFirst_Aplanarity_stack_5->SetBinContent(13,6.734876);
   VbbHcc_tagFirst_Aplanarity_stack_5->SetBinContent(14,3.349357);
   VbbHcc_tagFirst_Aplanarity_stack_5->SetBinContent(15,1.581577);
   VbbHcc_tagFirst_Aplanarity_stack_5->SetBinContent(16,2.359493);
   VbbHcc_tagFirst_Aplanarity_stack_5->SetBinContent(17,4.505017);
   VbbHcc_tagFirst_Aplanarity_stack_5->SetBinContent(18,0.1413208);
   VbbHcc_tagFirst_Aplanarity_stack_5->SetBinContent(19,1.151412);
   VbbHcc_tagFirst_Aplanarity_stack_5->SetBinError(1,79.49822);
   VbbHcc_tagFirst_Aplanarity_stack_5->SetBinError(2,41.73881);
   VbbHcc_tagFirst_Aplanarity_stack_5->SetBinError(3,27.06382);
   VbbHcc_tagFirst_Aplanarity_stack_5->SetBinError(4,22.94174);
   VbbHcc_tagFirst_Aplanarity_stack_5->SetBinError(5,12.16617);
   VbbHcc_tagFirst_Aplanarity_stack_5->SetBinError(6,10.6836);
   VbbHcc_tagFirst_Aplanarity_stack_5->SetBinError(7,9.624541);
   VbbHcc_tagFirst_Aplanarity_stack_5->SetBinError(8,10.94374);
   VbbHcc_tagFirst_Aplanarity_stack_5->SetBinError(9,7.407406);
   VbbHcc_tagFirst_Aplanarity_stack_5->SetBinError(10,2.897562);
   VbbHcc_tagFirst_Aplanarity_stack_5->SetBinError(11,6.134559);
   VbbHcc_tagFirst_Aplanarity_stack_5->SetBinError(12,3.792277);
   VbbHcc_tagFirst_Aplanarity_stack_5->SetBinError(13,1.777171);
   VbbHcc_tagFirst_Aplanarity_stack_5->SetBinError(14,1.089793);
   VbbHcc_tagFirst_Aplanarity_stack_5->SetBinError(15,0.4190642);
   VbbHcc_tagFirst_Aplanarity_stack_5->SetBinError(16,0.9229566);
   VbbHcc_tagFirst_Aplanarity_stack_5->SetBinError(17,4.176369);
   VbbHcc_tagFirst_Aplanarity_stack_5->SetBinError(18,0.1413208);
   VbbHcc_tagFirst_Aplanarity_stack_5->SetBinError(19,0.9478046);
   VbbHcc_tagFirst_Aplanarity_stack_5->SetEntries(119104);

   ci = TColor::GetColor("#ff99cc");
   VbbHcc_tagFirst_Aplanarity_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tagFirst_Aplanarity_stack_5->SetLineColor(ci);
   VbbHcc_tagFirst_Aplanarity_stack_5->GetXaxis()->SetRange(1,100);
   VbbHcc_tagFirst_Aplanarity_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_tagFirst_Aplanarity_stack_5->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tagFirst_Aplanarity_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_tagFirst_Aplanarity_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_tagFirst_Aplanarity_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_tagFirst_Aplanarity_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_tagFirst_Aplanarity_stack_5->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tagFirst_Aplanarity_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tagFirst_Aplanarity_stack_5,"");
   
   TH1D *VbbHcc_tagFirst_Aplanarity_stack_6 = new TH1D("VbbHcc_tagFirst_Aplanarity_stack_6","",50,0,1);
   VbbHcc_tagFirst_Aplanarity_stack_6->SetBinContent(1,58.27115);
   VbbHcc_tagFirst_Aplanarity_stack_6->SetBinContent(2,17.69809);
   VbbHcc_tagFirst_Aplanarity_stack_6->SetBinContent(3,5.561304);
   VbbHcc_tagFirst_Aplanarity_stack_6->SetBinContent(4,3.040067);
   VbbHcc_tagFirst_Aplanarity_stack_6->SetBinContent(5,2.61711);
   VbbHcc_tagFirst_Aplanarity_stack_6->SetBinContent(6,1.11229);
   VbbHcc_tagFirst_Aplanarity_stack_6->SetBinContent(7,0.4405449);
   VbbHcc_tagFirst_Aplanarity_stack_6->SetBinContent(8,0.362316);
   VbbHcc_tagFirst_Aplanarity_stack_6->SetBinContent(9,0.1105479);
   VbbHcc_tagFirst_Aplanarity_stack_6->SetBinContent(10,0.2403944);
   VbbHcc_tagFirst_Aplanarity_stack_6->SetBinContent(12,0.0903291);
   VbbHcc_tagFirst_Aplanarity_stack_6->SetBinContent(15,0.09864764);
   VbbHcc_tagFirst_Aplanarity_stack_6->SetBinContent(17,0.1297446);
   VbbHcc_tagFirst_Aplanarity_stack_6->SetBinError(1,2.679054);
   VbbHcc_tagFirst_Aplanarity_stack_6->SetBinError(2,1.462762);
   VbbHcc_tagFirst_Aplanarity_stack_6->SetBinError(3,0.7906182);
   VbbHcc_tagFirst_Aplanarity_stack_6->SetBinError(4,0.5960482);
   VbbHcc_tagFirst_Aplanarity_stack_6->SetBinError(5,0.5540102);
   VbbHcc_tagFirst_Aplanarity_stack_6->SetBinError(6,0.3761406);
   VbbHcc_tagFirst_Aplanarity_stack_6->SetBinError(7,0.220939);
   VbbHcc_tagFirst_Aplanarity_stack_6->SetBinError(8,0.2108767);
   VbbHcc_tagFirst_Aplanarity_stack_6->SetBinError(9,0.1105479);
   VbbHcc_tagFirst_Aplanarity_stack_6->SetBinError(10,0.1699891);
   VbbHcc_tagFirst_Aplanarity_stack_6->SetBinError(12,0.0903291);
   VbbHcc_tagFirst_Aplanarity_stack_6->SetBinError(15,0.09864764);
   VbbHcc_tagFirst_Aplanarity_stack_6->SetBinError(17,0.1297446);
   VbbHcc_tagFirst_Aplanarity_stack_6->SetEntries(777);

   ci = TColor::GetColor("#9933ff");
   VbbHcc_tagFirst_Aplanarity_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tagFirst_Aplanarity_stack_6->SetLineColor(ci);
   VbbHcc_tagFirst_Aplanarity_stack_6->GetXaxis()->SetRange(1,100);
   VbbHcc_tagFirst_Aplanarity_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_tagFirst_Aplanarity_stack_6->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tagFirst_Aplanarity_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_tagFirst_Aplanarity_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_tagFirst_Aplanarity_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_tagFirst_Aplanarity_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_tagFirst_Aplanarity_stack_6->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tagFirst_Aplanarity_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tagFirst_Aplanarity_stack_6,"");
   
   TH1D *VbbHcc_tagFirst_Aplanarity_stack_7 = new TH1D("VbbHcc_tagFirst_Aplanarity_stack_7","",50,0,1);
   VbbHcc_tagFirst_Aplanarity_stack_7->SetBinContent(1,160.7188);
   VbbHcc_tagFirst_Aplanarity_stack_7->SetBinContent(2,38.39986);
   VbbHcc_tagFirst_Aplanarity_stack_7->SetBinContent(3,15.82364);
   VbbHcc_tagFirst_Aplanarity_stack_7->SetBinContent(4,10.02698);
   VbbHcc_tagFirst_Aplanarity_stack_7->SetBinContent(5,4.876674);
   VbbHcc_tagFirst_Aplanarity_stack_7->SetBinContent(6,3.426587);
   VbbHcc_tagFirst_Aplanarity_stack_7->SetBinContent(7,2.502879);
   VbbHcc_tagFirst_Aplanarity_stack_7->SetBinContent(8,0.7855864);
   VbbHcc_tagFirst_Aplanarity_stack_7->SetBinContent(9,0.8800065);
   VbbHcc_tagFirst_Aplanarity_stack_7->SetBinContent(10,0.6826665);
   VbbHcc_tagFirst_Aplanarity_stack_7->SetBinContent(11,0.1463677);
   VbbHcc_tagFirst_Aplanarity_stack_7->SetBinContent(12,0.2617885);
   VbbHcc_tagFirst_Aplanarity_stack_7->SetBinContent(13,0.4730443);
   VbbHcc_tagFirst_Aplanarity_stack_7->SetBinContent(14,0.3760691);
   VbbHcc_tagFirst_Aplanarity_stack_7->SetBinContent(16,0.07675633);
   VbbHcc_tagFirst_Aplanarity_stack_7->SetBinContent(17,0.08240771);
   VbbHcc_tagFirst_Aplanarity_stack_7->SetBinError(1,3.984677);
   VbbHcc_tagFirst_Aplanarity_stack_7->SetBinError(2,1.934426);
   VbbHcc_tagFirst_Aplanarity_stack_7->SetBinError(3,1.220869);
   VbbHcc_tagFirst_Aplanarity_stack_7->SetBinError(4,0.991705);
   VbbHcc_tagFirst_Aplanarity_stack_7->SetBinError(5,0.680987);
   VbbHcc_tagFirst_Aplanarity_stack_7->SetBinError(6,0.5784747);
   VbbHcc_tagFirst_Aplanarity_stack_7->SetBinError(7,0.4837041);
   VbbHcc_tagFirst_Aplanarity_stack_7->SetBinError(8,0.2643683);
   VbbHcc_tagFirst_Aplanarity_stack_7->SetBinError(9,0.2971653);
   VbbHcc_tagFirst_Aplanarity_stack_7->SetBinError(10,0.2625738);
   VbbHcc_tagFirst_Aplanarity_stack_7->SetBinError(11,0.1463677);
   VbbHcc_tagFirst_Aplanarity_stack_7->SetBinError(12,0.151718);
   VbbHcc_tagFirst_Aplanarity_stack_7->SetBinError(13,0.2161254);
   VbbHcc_tagFirst_Aplanarity_stack_7->SetBinError(14,0.2199346);
   VbbHcc_tagFirst_Aplanarity_stack_7->SetBinError(16,0.07675633);
   VbbHcc_tagFirst_Aplanarity_stack_7->SetBinError(17,0.08240771);
   VbbHcc_tagFirst_Aplanarity_stack_7->SetEntries(2555);

   ci = TColor::GetColor("#3399ff");
   VbbHcc_tagFirst_Aplanarity_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tagFirst_Aplanarity_stack_7->SetLineColor(ci);
   VbbHcc_tagFirst_Aplanarity_stack_7->GetXaxis()->SetRange(1,100);
   VbbHcc_tagFirst_Aplanarity_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_tagFirst_Aplanarity_stack_7->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tagFirst_Aplanarity_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_tagFirst_Aplanarity_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_tagFirst_Aplanarity_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_tagFirst_Aplanarity_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_tagFirst_Aplanarity_stack_7->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tagFirst_Aplanarity_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tagFirst_Aplanarity_stack_7,"");
   
   TH1D *VbbHcc_tagFirst_Aplanarity_stack_8 = new TH1D("VbbHcc_tagFirst_Aplanarity_stack_8","",50,0,1);
   VbbHcc_tagFirst_Aplanarity_stack_8->SetBinContent(1,116.7505);
   VbbHcc_tagFirst_Aplanarity_stack_8->SetBinContent(2,26.43397);
   VbbHcc_tagFirst_Aplanarity_stack_8->SetBinContent(3,14.27136);
   VbbHcc_tagFirst_Aplanarity_stack_8->SetBinContent(4,7.922257);
   VbbHcc_tagFirst_Aplanarity_stack_8->SetBinContent(5,4.410224);
   VbbHcc_tagFirst_Aplanarity_stack_8->SetBinContent(6,2.772695);
   VbbHcc_tagFirst_Aplanarity_stack_8->SetBinContent(7,0.7255026);
   VbbHcc_tagFirst_Aplanarity_stack_8->SetBinContent(8,2.15762);
   VbbHcc_tagFirst_Aplanarity_stack_8->SetBinContent(10,0.4551826);
   VbbHcc_tagFirst_Aplanarity_stack_8->SetBinContent(11,0.7950573);
   VbbHcc_tagFirst_Aplanarity_stack_8->SetBinContent(12,0.2241088);
   VbbHcc_tagFirst_Aplanarity_stack_8->SetBinContent(13,0.3107514);
   VbbHcc_tagFirst_Aplanarity_stack_8->SetBinError(1,5.010451);
   VbbHcc_tagFirst_Aplanarity_stack_8->SetBinError(2,2.338281);
   VbbHcc_tagFirst_Aplanarity_stack_8->SetBinError(3,1.786713);
   VbbHcc_tagFirst_Aplanarity_stack_8->SetBinError(4,1.306985);
   VbbHcc_tagFirst_Aplanarity_stack_8->SetBinError(5,0.9320251);
   VbbHcc_tagFirst_Aplanarity_stack_8->SetBinError(6,0.7623055);
   VbbHcc_tagFirst_Aplanarity_stack_8->SetBinError(7,0.4288527);
   VbbHcc_tagFirst_Aplanarity_stack_8->SetBinError(8,0.7012859);
   VbbHcc_tagFirst_Aplanarity_stack_8->SetBinError(10,0.3223503);
   VbbHcc_tagFirst_Aplanarity_stack_8->SetBinError(11,0.4091117);
   VbbHcc_tagFirst_Aplanarity_stack_8->SetBinError(12,0.2241088);
   VbbHcc_tagFirst_Aplanarity_stack_8->SetBinError(13,0.3107514);
   VbbHcc_tagFirst_Aplanarity_stack_8->SetEntries(868);

   ci = TColor::GetColor("#33ff99");
   VbbHcc_tagFirst_Aplanarity_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tagFirst_Aplanarity_stack_8->SetLineColor(ci);
   VbbHcc_tagFirst_Aplanarity_stack_8->GetXaxis()->SetRange(1,100);
   VbbHcc_tagFirst_Aplanarity_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_tagFirst_Aplanarity_stack_8->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tagFirst_Aplanarity_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_tagFirst_Aplanarity_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_tagFirst_Aplanarity_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_tagFirst_Aplanarity_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_tagFirst_Aplanarity_stack_8->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tagFirst_Aplanarity_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tagFirst_Aplanarity_stack_8,"");
   
   TH1D *VbbHcc_tagFirst_Aplanarity_stack_9 = new TH1D("VbbHcc_tagFirst_Aplanarity_stack_9","",50,0,1);
   VbbHcc_tagFirst_Aplanarity_stack_9->SetBinContent(1,52.73909);
   VbbHcc_tagFirst_Aplanarity_stack_9->SetBinContent(2,14.69779);
   VbbHcc_tagFirst_Aplanarity_stack_9->SetBinContent(3,6.755189);
   VbbHcc_tagFirst_Aplanarity_stack_9->SetBinContent(4,3.591575);
   VbbHcc_tagFirst_Aplanarity_stack_9->SetBinContent(5,2.232365);
   VbbHcc_tagFirst_Aplanarity_stack_9->SetBinContent(6,1.430809);
   VbbHcc_tagFirst_Aplanarity_stack_9->SetBinContent(7,0.9330422);
   VbbHcc_tagFirst_Aplanarity_stack_9->SetBinContent(8,0.6099828);
   VbbHcc_tagFirst_Aplanarity_stack_9->SetBinContent(9,0.3426688);
   VbbHcc_tagFirst_Aplanarity_stack_9->SetBinContent(10,0.2722358);
   VbbHcc_tagFirst_Aplanarity_stack_9->SetBinContent(11,0.1804634);
   VbbHcc_tagFirst_Aplanarity_stack_9->SetBinContent(12,0.1275691);
   VbbHcc_tagFirst_Aplanarity_stack_9->SetBinContent(13,0.0713695);
   VbbHcc_tagFirst_Aplanarity_stack_9->SetBinContent(14,0.04824756);
   VbbHcc_tagFirst_Aplanarity_stack_9->SetBinContent(15,0.04164724);
   VbbHcc_tagFirst_Aplanarity_stack_9->SetBinContent(16,0.0205874);
   VbbHcc_tagFirst_Aplanarity_stack_9->SetBinContent(17,0.01701699);
   VbbHcc_tagFirst_Aplanarity_stack_9->SetBinContent(18,0.009982986);
   VbbHcc_tagFirst_Aplanarity_stack_9->SetBinContent(19,0.003394648);
   VbbHcc_tagFirst_Aplanarity_stack_9->SetBinError(1,0.2584182);
   VbbHcc_tagFirst_Aplanarity_stack_9->SetBinError(2,0.1352988);
   VbbHcc_tagFirst_Aplanarity_stack_9->SetBinError(3,0.09173378);
   VbbHcc_tagFirst_Aplanarity_stack_9->SetBinError(4,0.0667315);
   VbbHcc_tagFirst_Aplanarity_stack_9->SetBinError(5,0.05280795);
   VbbHcc_tagFirst_Aplanarity_stack_9->SetBinError(6,0.04192294);
   VbbHcc_tagFirst_Aplanarity_stack_9->SetBinError(7,0.03361381);
   VbbHcc_tagFirst_Aplanarity_stack_9->SetBinError(8,0.0273338);
   VbbHcc_tagFirst_Aplanarity_stack_9->SetBinError(9,0.02050533);
   VbbHcc_tagFirst_Aplanarity_stack_9->SetBinError(10,0.01830626);
   VbbHcc_tagFirst_Aplanarity_stack_9->SetBinError(11,0.01468014);
   VbbHcc_tagFirst_Aplanarity_stack_9->SetBinError(12,0.01249171);
   VbbHcc_tagFirst_Aplanarity_stack_9->SetBinError(13,0.009295469);
   VbbHcc_tagFirst_Aplanarity_stack_9->SetBinError(14,0.007651071);
   VbbHcc_tagFirst_Aplanarity_stack_9->SetBinError(15,0.007073323);
   VbbHcc_tagFirst_Aplanarity_stack_9->SetBinError(16,0.005099451);
   VbbHcc_tagFirst_Aplanarity_stack_9->SetBinError(17,0.004624639);
   VbbHcc_tagFirst_Aplanarity_stack_9->SetBinError(18,0.003536045);
   VbbHcc_tagFirst_Aplanarity_stack_9->SetBinError(19,0.001968593);
   VbbHcc_tagFirst_Aplanarity_stack_9->SetEntries(72695);

   ci = TColor::GetColor("#cccc00");
   VbbHcc_tagFirst_Aplanarity_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tagFirst_Aplanarity_stack_9->SetLineColor(ci);
   VbbHcc_tagFirst_Aplanarity_stack_9->GetXaxis()->SetRange(1,100);
   VbbHcc_tagFirst_Aplanarity_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_tagFirst_Aplanarity_stack_9->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tagFirst_Aplanarity_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_tagFirst_Aplanarity_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_tagFirst_Aplanarity_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_tagFirst_Aplanarity_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_tagFirst_Aplanarity_stack_9->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tagFirst_Aplanarity_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tagFirst_Aplanarity_stack_9,"");
   
   TH1D *VbbHcc_tagFirst_Aplanarity_stack_10 = new TH1D("VbbHcc_tagFirst_Aplanarity_stack_10","",50,0,1);
   VbbHcc_tagFirst_Aplanarity_stack_10->SetBinContent(1,27.47282);
   VbbHcc_tagFirst_Aplanarity_stack_10->SetBinContent(2,7.37189);
   VbbHcc_tagFirst_Aplanarity_stack_10->SetBinContent(3,3.374679);
   VbbHcc_tagFirst_Aplanarity_stack_10->SetBinContent(4,1.905961);
   VbbHcc_tagFirst_Aplanarity_stack_10->SetBinContent(5,1.124281);
   VbbHcc_tagFirst_Aplanarity_stack_10->SetBinContent(6,0.6940015);
   VbbHcc_tagFirst_Aplanarity_stack_10->SetBinContent(7,0.4718802);
   VbbHcc_tagFirst_Aplanarity_stack_10->SetBinContent(8,0.3092849);
   VbbHcc_tagFirst_Aplanarity_stack_10->SetBinContent(9,0.2067351);
   VbbHcc_tagFirst_Aplanarity_stack_10->SetBinContent(10,0.1275199);
   VbbHcc_tagFirst_Aplanarity_stack_10->SetBinContent(11,0.09826906);
   VbbHcc_tagFirst_Aplanarity_stack_10->SetBinContent(12,0.06397948);
   VbbHcc_tagFirst_Aplanarity_stack_10->SetBinContent(13,0.04472516);
   VbbHcc_tagFirst_Aplanarity_stack_10->SetBinContent(14,0.02186815);
   VbbHcc_tagFirst_Aplanarity_stack_10->SetBinContent(15,0.01747986);
   VbbHcc_tagFirst_Aplanarity_stack_10->SetBinContent(16,0.009101737);
   VbbHcc_tagFirst_Aplanarity_stack_10->SetBinContent(17,0.007505474);
   VbbHcc_tagFirst_Aplanarity_stack_10->SetBinContent(18,0.003225933);
   VbbHcc_tagFirst_Aplanarity_stack_10->SetBinContent(19,0.00097547);
   VbbHcc_tagFirst_Aplanarity_stack_10->SetBinContent(20,0.0002957365);
   VbbHcc_tagFirst_Aplanarity_stack_10->SetBinError(1,0.09594604);
   VbbHcc_tagFirst_Aplanarity_stack_10->SetBinError(2,0.04927522);
   VbbHcc_tagFirst_Aplanarity_stack_10->SetBinError(3,0.03322771);
   VbbHcc_tagFirst_Aplanarity_stack_10->SetBinError(4,0.02492037);
   VbbHcc_tagFirst_Aplanarity_stack_10->SetBinError(5,0.01909865);
   VbbHcc_tagFirst_Aplanarity_stack_10->SetBinError(6,0.01494312);
   VbbHcc_tagFirst_Aplanarity_stack_10->SetBinError(7,0.0123741);
   VbbHcc_tagFirst_Aplanarity_stack_10->SetBinError(8,0.009903666);
   VbbHcc_tagFirst_Aplanarity_stack_10->SetBinError(9,0.008129006);
   VbbHcc_tagFirst_Aplanarity_stack_10->SetBinError(10,0.006346761);
   VbbHcc_tagFirst_Aplanarity_stack_10->SetBinError(11,0.00567961);
   VbbHcc_tagFirst_Aplanarity_stack_10->SetBinError(12,0.004514222);
   VbbHcc_tagFirst_Aplanarity_stack_10->SetBinError(13,0.003807682);
   VbbHcc_tagFirst_Aplanarity_stack_10->SetBinError(14,0.00260356);
   VbbHcc_tagFirst_Aplanarity_stack_10->SetBinError(15,0.002386576);
   VbbHcc_tagFirst_Aplanarity_stack_10->SetBinError(16,0.001704554);
   VbbHcc_tagFirst_Aplanarity_stack_10->SetBinError(17,0.001522453);
   VbbHcc_tagFirst_Aplanarity_stack_10->SetBinError(18,0.0009948946);
   VbbHcc_tagFirst_Aplanarity_stack_10->SetBinError(19,0.0005985677);
   VbbHcc_tagFirst_Aplanarity_stack_10->SetBinError(20,0.0002957365);
   VbbHcc_tagFirst_Aplanarity_stack_10->SetEntries(137175);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_tagFirst_Aplanarity_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tagFirst_Aplanarity_stack_10->SetLineColor(ci);
   VbbHcc_tagFirst_Aplanarity_stack_10->GetXaxis()->SetRange(1,100);
   VbbHcc_tagFirst_Aplanarity_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_tagFirst_Aplanarity_stack_10->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tagFirst_Aplanarity_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_tagFirst_Aplanarity_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_tagFirst_Aplanarity_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_tagFirst_Aplanarity_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_tagFirst_Aplanarity_stack_10->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tagFirst_Aplanarity_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tagFirst_Aplanarity_stack_10,"");
   
   TH1D *VbbHcc_tagFirst_Aplanarity_stack_11 = new TH1D("VbbHcc_tagFirst_Aplanarity_stack_11","",50,0,1);
   VbbHcc_tagFirst_Aplanarity_stack_11->SetBinContent(1,1.180705);
   VbbHcc_tagFirst_Aplanarity_stack_11->SetBinContent(2,0.3200945);
   VbbHcc_tagFirst_Aplanarity_stack_11->SetBinContent(3,0.1546624);
   VbbHcc_tagFirst_Aplanarity_stack_11->SetBinContent(4,0.10263);
   VbbHcc_tagFirst_Aplanarity_stack_11->SetBinContent(5,0.06029539);
   VbbHcc_tagFirst_Aplanarity_stack_11->SetBinContent(6,0.04796018);
   VbbHcc_tagFirst_Aplanarity_stack_11->SetBinContent(7,0.02441428);
   VbbHcc_tagFirst_Aplanarity_stack_11->SetBinContent(8,0.01506079);
   VbbHcc_tagFirst_Aplanarity_stack_11->SetBinContent(9,0.002178602);
   VbbHcc_tagFirst_Aplanarity_stack_11->SetBinContent(11,0.007840452);
   VbbHcc_tagFirst_Aplanarity_stack_11->SetBinContent(12,0.001948014);
   VbbHcc_tagFirst_Aplanarity_stack_11->SetBinContent(13,0.005050148);
   VbbHcc_tagFirst_Aplanarity_stack_11->SetBinError(1,0.05179641);
   VbbHcc_tagFirst_Aplanarity_stack_11->SetBinError(2,0.02676909);
   VbbHcc_tagFirst_Aplanarity_stack_11->SetBinError(3,0.01822579);
   VbbHcc_tagFirst_Aplanarity_stack_11->SetBinError(4,0.01512399);
   VbbHcc_tagFirst_Aplanarity_stack_11->SetBinError(5,0.01172168);
   VbbHcc_tagFirst_Aplanarity_stack_11->SetBinError(6,0.01034284);
   VbbHcc_tagFirst_Aplanarity_stack_11->SetBinError(7,0.007678779);
   VbbHcc_tagFirst_Aplanarity_stack_11->SetBinError(8,0.00581199);
   VbbHcc_tagFirst_Aplanarity_stack_11->SetBinError(9,0.002178602);
   VbbHcc_tagFirst_Aplanarity_stack_11->SetBinError(11,0.004131635);
   VbbHcc_tagFirst_Aplanarity_stack_11->SetBinError(12,0.001486079);
   VbbHcc_tagFirst_Aplanarity_stack_11->SetBinError(13,0.002922596);
   VbbHcc_tagFirst_Aplanarity_stack_11->SetEntries(910);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_tagFirst_Aplanarity_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tagFirst_Aplanarity_stack_11->SetLineColor(ci);
   VbbHcc_tagFirst_Aplanarity_stack_11->GetXaxis()->SetRange(1,100);
   VbbHcc_tagFirst_Aplanarity_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_tagFirst_Aplanarity_stack_11->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tagFirst_Aplanarity_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_tagFirst_Aplanarity_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_tagFirst_Aplanarity_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_tagFirst_Aplanarity_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_tagFirst_Aplanarity_stack_11->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tagFirst_Aplanarity_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tagFirst_Aplanarity_stack_11,"");
   
   TH1D *VbbHcc_tagFirst_Aplanarity_stack_12 = new TH1D("VbbHcc_tagFirst_Aplanarity_stack_12","",50,0,1);
   VbbHcc_tagFirst_Aplanarity_stack_12->SetBinContent(1,0.525101);
   VbbHcc_tagFirst_Aplanarity_stack_12->SetBinContent(2,0.1595024);
   VbbHcc_tagFirst_Aplanarity_stack_12->SetBinContent(3,0.08336014);
   VbbHcc_tagFirst_Aplanarity_stack_12->SetBinContent(4,0.04547335);
   VbbHcc_tagFirst_Aplanarity_stack_12->SetBinContent(5,0.027081);
   VbbHcc_tagFirst_Aplanarity_stack_12->SetBinContent(6,0.01395886);
   VbbHcc_tagFirst_Aplanarity_stack_12->SetBinContent(7,0.01448371);
   VbbHcc_tagFirst_Aplanarity_stack_12->SetBinContent(8,0.009568092);
   VbbHcc_tagFirst_Aplanarity_stack_12->SetBinContent(9,0.00425967);
   VbbHcc_tagFirst_Aplanarity_stack_12->SetBinContent(10,0.004139572);
   VbbHcc_tagFirst_Aplanarity_stack_12->SetBinContent(11,0.003313751);
   VbbHcc_tagFirst_Aplanarity_stack_12->SetBinContent(12,0.003439263);
   VbbHcc_tagFirst_Aplanarity_stack_12->SetBinContent(13,0.0015545);
   VbbHcc_tagFirst_Aplanarity_stack_12->SetBinContent(14,0.0003610725);
   VbbHcc_tagFirst_Aplanarity_stack_12->SetBinContent(15,0.0002800402);
   VbbHcc_tagFirst_Aplanarity_stack_12->SetBinError(1,0.01242968);
   VbbHcc_tagFirst_Aplanarity_stack_12->SetBinError(2,0.006837084);
   VbbHcc_tagFirst_Aplanarity_stack_12->SetBinError(3,0.004927017);
   VbbHcc_tagFirst_Aplanarity_stack_12->SetBinError(4,0.003665437);
   VbbHcc_tagFirst_Aplanarity_stack_12->SetBinError(5,0.002805231);
   VbbHcc_tagFirst_Aplanarity_stack_12->SetBinError(6,0.001988744);
   VbbHcc_tagFirst_Aplanarity_stack_12->SetBinError(7,0.002039323);
   VbbHcc_tagFirst_Aplanarity_stack_12->SetBinError(8,0.001614944);
   VbbHcc_tagFirst_Aplanarity_stack_12->SetBinError(9,0.001110141);
   VbbHcc_tagFirst_Aplanarity_stack_12->SetBinError(10,0.001072735);
   VbbHcc_tagFirst_Aplanarity_stack_12->SetBinError(11,0.0009710613);
   VbbHcc_tagFirst_Aplanarity_stack_12->SetBinError(12,0.00100279);
   VbbHcc_tagFirst_Aplanarity_stack_12->SetBinError(13,0.0007131113);
   VbbHcc_tagFirst_Aplanarity_stack_12->SetBinError(14,0.0002553226);
   VbbHcc_tagFirst_Aplanarity_stack_12->SetBinError(15,0.0002800402);
   VbbHcc_tagFirst_Aplanarity_stack_12->SetEntries(3163);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_tagFirst_Aplanarity_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tagFirst_Aplanarity_stack_12->SetLineColor(ci);
   VbbHcc_tagFirst_Aplanarity_stack_12->GetXaxis()->SetRange(1,100);
   VbbHcc_tagFirst_Aplanarity_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_tagFirst_Aplanarity_stack_12->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tagFirst_Aplanarity_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_tagFirst_Aplanarity_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_tagFirst_Aplanarity_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_tagFirst_Aplanarity_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_tagFirst_Aplanarity_stack_12->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tagFirst_Aplanarity_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tagFirst_Aplanarity_stack_12,"");
   st->Draw("hist");
   
   TH1D *VbbHcc_tagFirst_Aplanarity__379 = new TH1D("VbbHcc_tagFirst_Aplanarity__379","",50,0,1);
   VbbHcc_tagFirst_Aplanarity__379->SetBinContent(1,2129492);
   VbbHcc_tagFirst_Aplanarity__379->SetBinContent(2,527712);
   VbbHcc_tagFirst_Aplanarity__379->SetBinContent(3,225055);
   VbbHcc_tagFirst_Aplanarity__379->SetBinContent(4,118805);
   VbbHcc_tagFirst_Aplanarity__379->SetBinContent(5,68440);
   VbbHcc_tagFirst_Aplanarity__379->SetBinContent(6,42073);
   VbbHcc_tagFirst_Aplanarity__379->SetBinContent(7,27082);
   VbbHcc_tagFirst_Aplanarity__379->SetBinContent(8,17814);
   VbbHcc_tagFirst_Aplanarity__379->SetBinContent(9,11835);
   VbbHcc_tagFirst_Aplanarity__379->SetBinContent(10,8243);
   VbbHcc_tagFirst_Aplanarity__379->SetBinContent(11,5516);
   VbbHcc_tagFirst_Aplanarity__379->SetBinContent(12,3735);
   VbbHcc_tagFirst_Aplanarity__379->SetBinContent(13,2445);
   VbbHcc_tagFirst_Aplanarity__379->SetBinContent(14,1657);
   VbbHcc_tagFirst_Aplanarity__379->SetBinContent(15,1027);
   VbbHcc_tagFirst_Aplanarity__379->SetBinContent(16,686);
   VbbHcc_tagFirst_Aplanarity__379->SetBinContent(17,383);
   VbbHcc_tagFirst_Aplanarity__379->SetBinContent(18,263);
   VbbHcc_tagFirst_Aplanarity__379->SetBinContent(19,131);
   VbbHcc_tagFirst_Aplanarity__379->SetBinContent(20,62);
   VbbHcc_tagFirst_Aplanarity__379->SetBinContent(21,16);
   VbbHcc_tagFirst_Aplanarity__379->SetBinContent(22,12);
   VbbHcc_tagFirst_Aplanarity__379->SetBinContent(23,3);
   VbbHcc_tagFirst_Aplanarity__379->SetBinContent(24,1);
   VbbHcc_tagFirst_Aplanarity__379->SetEntries(3192537);

   ci = TColor::GetColor("#000099");
   VbbHcc_tagFirst_Aplanarity__379->SetLineColor(ci);
   VbbHcc_tagFirst_Aplanarity__379->SetLineWidth(2);
   VbbHcc_tagFirst_Aplanarity__379->SetMarkerStyle(20);
   VbbHcc_tagFirst_Aplanarity__379->SetMarkerSize(1.2);
   VbbHcc_tagFirst_Aplanarity__379->GetXaxis()->SetRange(1,100);
   VbbHcc_tagFirst_Aplanarity__379->GetXaxis()->SetLabelFont(42);
   VbbHcc_tagFirst_Aplanarity__379->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tagFirst_Aplanarity__379->GetXaxis()->SetTitleFont(42);
   VbbHcc_tagFirst_Aplanarity__379->GetYaxis()->SetLabelFont(42);
   VbbHcc_tagFirst_Aplanarity__379->GetYaxis()->SetTitleFont(42);
   VbbHcc_tagFirst_Aplanarity__379->GetZaxis()->SetLabelFont(42);
   VbbHcc_tagFirst_Aplanarity__379->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tagFirst_Aplanarity__379->GetZaxis()->SetTitleFont(42);
   VbbHcc_tagFirst_Aplanarity__379->Draw("same E");
   
   Double_t Graph_from_VbbHcc_tagFirst_Aplanarity_fx1379[50] = { 0.01, 0.03, 0.05, 0.07, 0.09, 0.11, 0.13, 0.15, 0.17, 0.19, 0.21, 0.23, 0.25, 0.27, 0.29, 0.31, 0.33,
   0.35, 0.37, 0.39, 0.41, 0.43, 0.45, 0.47, 0.49, 0.51, 0.53, 0.55, 0.57, 0.59, 0.61, 0.63, 0.65,
   0.67, 0.69, 0.71, 0.73, 0.75, 0.77, 0.79, 0.81, 0.83, 0.85, 0.87, 0.89, 0.91, 0.93, 0.95, 0.97,
   0.99 };
   Double_t Graph_from_VbbHcc_tagFirst_Aplanarity_fy1379[50] = { 1806947, 499612.3, 191361.5, 98862.95, 61927.76, 32466.78, 25110.54, 14653.35, 9676.221, 6996.28, 4350.31, 3330.862, 2753.654, 1718.76, 1177.519, 680.5635, 416.1128,
   153.0454, 40.42336, 12.46445, 10.94487, 1.836968, 0.4098306, 0.09233028, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0 };
   Double_t Graph_from_VbbHcc_tagFirst_Aplanarity_fex1379[50] = { 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01 };
   Double_t Graph_from_VbbHcc_tagFirst_Aplanarity_fey1379[50] = { 27585.89, 26561.27, 5916.777, 4066.916, 3387.142, 1847.734, 2295.619, 1467.333, 1010.714, 954.6641, 694.6404, 661.992, 583.1129, 450.6248, 443.5005, 317.5016, 185.9028,
   41.3997, 8.910019, 0.8508583, 5.403684, 0.3168854, 0.1512565, 0.06709035, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0 };
   TGraphErrors *gre = new TGraphErrors(50,Graph_from_VbbHcc_tagFirst_Aplanarity_fx1379,Graph_from_VbbHcc_tagFirst_Aplanarity_fy1379,Graph_from_VbbHcc_tagFirst_Aplanarity_fex1379,Graph_from_VbbHcc_tagFirst_Aplanarity_fey1379);
   gre->SetName("Graph_from_VbbHcc_tagFirst_Aplanarity");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_tagFirst_Aplanarity1379 = new TH1F("Graph_Graph_from_VbbHcc_tagFirst_Aplanarity1379","",100,0,1.1);
   Graph_Graph_from_VbbHcc_tagFirst_Aplanarity1379->SetMinimum(0);
   Graph_Graph_from_VbbHcc_tagFirst_Aplanarity1379->SetMaximum(2017986);
   Graph_Graph_from_VbbHcc_tagFirst_Aplanarity1379->SetDirectory(nullptr);
   Graph_Graph_from_VbbHcc_tagFirst_Aplanarity1379->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_tagFirst_Aplanarity1379->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_tagFirst_Aplanarity1379->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tagFirst_Aplanarity1379->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_from_VbbHcc_tagFirst_Aplanarity1379->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_tagFirst_Aplanarity1379->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tagFirst_Aplanarity1379->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_tagFirst_Aplanarity1379->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tagFirst_Aplanarity1379->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_from_VbbHcc_tagFirst_Aplanarity1379->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_tagFirst_Aplanarity1379);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_tagFirst_Aplanarity","Data (BTagCSV, 2016)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_tagFirst_Aplanarity","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_tagFirst_Aplanarity","ZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_tagFirst_Aplanarity","ggZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_tagFirst_Aplanarity","ZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_tagFirst_Aplanarity","ZZ","F");

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
   entry=leg->AddEntry("VbbHcc_tagFirst_Aplanarity","WZ","F");

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
   entry=leg->AddEntry("VbbHcc_tagFirst_Aplanarity","WW","F");

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
   entry=leg->AddEntry("VbbHcc_tagFirst_Aplanarity","W + jets","F");

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
   entry=leg->AddEntry("VbbHcc_tagFirst_Aplanarity","Z + jets","F");

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
   entry=leg->AddEntry("VbbHcc_tagFirst_Aplanarity","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_tagFirst_Aplanarity","Single top","F");

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
   entry=leg->AddEntry("VbbHcc_tagFirst_Aplanarity","QCD","F");

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
   entry=leg->AddEntry("Graph_from_VbbHcc_tagFirst_Aplanarity","MC unc. (stat.)","fl");

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetLineWidth(2);
   tex->Draw();
   topPad->Modified();
   Aplanarity_tagFirst_16->cd();
  
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
   
   TH1D *data_mc_ratio__380 = new TH1D("data_mc_ratio__380","",50,0,1);
   data_mc_ratio__380->SetBinContent(1,1.178503);
   data_mc_ratio__380->SetBinContent(2,1.056243);
   data_mc_ratio__380->SetBinContent(3,1.176073);
   data_mc_ratio__380->SetBinContent(4,1.201714);
   data_mc_ratio__380->SetBinContent(5,1.105159);
   data_mc_ratio__380->SetBinContent(6,1.295879);
   data_mc_ratio__380->SetBinContent(7,1.078511);
   data_mc_ratio__380->SetBinContent(8,1.215695);
   data_mc_ratio__380->SetBinContent(9,1.223101);
   data_mc_ratio__380->SetBinContent(10,1.178198);
   data_mc_ratio__380->SetBinContent(11,1.267956);
   data_mc_ratio__380->SetBinContent(12,1.121331);
   data_mc_ratio__380->SetBinContent(13,0.8879112);
   data_mc_ratio__380->SetBinContent(14,0.964067);
   data_mc_ratio__380->SetBinContent(15,0.8721724);
   data_mc_ratio__380->SetBinContent(16,1.007988);
   data_mc_ratio__380->SetBinContent(17,0.9204236);
   data_mc_ratio__380->SetBinContent(18,1.718445);
   data_mc_ratio__380->SetBinContent(19,3.240701);
   data_mc_ratio__380->SetBinContent(20,4.974146);
   data_mc_ratio__380->SetBinContent(21,1.461872);
   data_mc_ratio__380->SetBinContent(22,6.532503);
   data_mc_ratio__380->SetBinContent(23,7.320098);
   data_mc_ratio__380->SetBinContent(24,10.83068);
   data_mc_ratio__380->SetBinError(1,0.0008075932);
   data_mc_ratio__380->SetBinError(2,0.001454003);
   data_mc_ratio__380->SetBinError(3,0.002479076);
   data_mc_ratio__380->SetBinError(4,0.003486453);
   data_mc_ratio__380->SetBinError(5,0.004224445);
   data_mc_ratio__380->SetBinError(6,0.006317752);
   data_mc_ratio__380->SetBinError(7,0.006553667);
   data_mc_ratio__380->SetBinError(8,0.009108438);
   data_mc_ratio__380->SetBinError(9,0.0112429);
   data_mc_ratio__380->SetBinError(10,0.01297703);
   data_mc_ratio__380->SetBinError(11,0.0170723);
   data_mc_ratio__380->SetBinError(12,0.01834799);
   data_mc_ratio__380->SetBinError(13,0.01795685);
   data_mc_ratio__380->SetBinError(14,0.0236835);
   data_mc_ratio__380->SetBinError(15,0.02721555);
   data_mc_ratio__380->SetBinError(16,0.03848517);
   data_mc_ratio__380->SetBinError(17,0.04703145);
   data_mc_ratio__380->SetBinError(18,0.1059638);
   data_mc_ratio__380->SetBinError(19,0.2831413);
   data_mc_ratio__380->SetBinError(20,0.6317171);
   data_mc_ratio__380->SetBinError(21,0.3654681);
   data_mc_ratio__380->SetBinError(22,1.885771);
   data_mc_ratio__380->SetBinError(23,4.226261);
   data_mc_ratio__380->SetBinError(24,10.83068);
   data_mc_ratio__380->SetMinimum(0.4);
   data_mc_ratio__380->SetMaximum(1.6);
   data_mc_ratio__380->SetEntries(14.18114);
   data_mc_ratio__380->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__380->SetLineColor(ci);
   data_mc_ratio__380->SetLineWidth(2);
   data_mc_ratio__380->SetMarkerStyle(20);
   data_mc_ratio__380->SetMarkerSize(1.2);
   data_mc_ratio__380->GetXaxis()->SetTitle("Aplanarity");
   data_mc_ratio__380->GetXaxis()->SetRange(1,50);
   data_mc_ratio__380->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__380->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__380->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__380->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__380->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__380->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__380->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__380->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__380->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__380->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__380->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__380->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__380->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__380->GetZaxis()->SetTitleOffset(1);
   data_mc_ratio__380->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__380->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1380[50] = { 0.01, 0.03, 0.05, 0.07, 0.09, 0.11, 0.13, 0.15, 0.17, 0.19, 0.21, 0.23, 0.25, 0.27, 0.29, 0.31, 0.33,
   0.35, 0.37, 0.39, 0.41, 0.43, 0.45, 0.47, 0.49, 0.51, 0.53, 0.55, 0.57, 0.59, 0.61, 0.63, 0.65,
   0.67, 0.69, 0.71, 0.73, 0.75, 0.77, 0.79, 0.81, 0.83, 0.85, 0.87, 0.89, 0.91, 0.93, 0.95, 0.97,
   0.99 };
   Double_t Graph_from_mc_statistical_error_fy1380[50] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1 };
   Double_t Graph_from_mc_statistical_error_fex1380[50] = { 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01 };
   Double_t Graph_from_mc_statistical_error_fey1380[50] = { 0.01526657, 0.05316377, 0.03091938, 0.04113691, 0.05469505, 0.05691154, 0.09142055, 0.1001364, 0.1044534, 0.1364531, 0.1596761, 0.1987449, 0.2117597, 0.2621802, 0.3766396, 0.4665275, 0.4467605,
   0.2705061, 0.2204176, 0.06826279, 0.4937185, 0.1725046, 0.3690708, 0.7266344, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0 };
   gre = new TGraphErrors(50,Graph_from_mc_statistical_error_fx1380,Graph_from_mc_statistical_error_fy1380,Graph_from_mc_statistical_error_fex1380,Graph_from_mc_statistical_error_fey1380);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1380 = new TH1F("Graph_Graph_from_mc_statistical_error1380","",100,0,1.1);
   Graph_Graph_from_mc_statistical_error1380->SetMinimum(0.1280388);
   Graph_Graph_from_mc_statistical_error1380->SetMaximum(1.871961);
   Graph_Graph_from_mc_statistical_error1380->SetDirectory(nullptr);
   Graph_Graph_from_mc_statistical_error1380->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1380->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1380->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1380->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_from_mc_statistical_error1380->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1380->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1380->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1380->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1380->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_from_mc_statistical_error1380->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1380);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,1,1);
   line->Draw();
   bottomPad->Modified();
   Aplanarity_tagFirst_16->cd();
   Aplanarity_tagFirst_16->Modified();
   Aplanarity_tagFirst_16->cd();
   Aplanarity_tagFirst_16->SetSelected(Aplanarity_tagFirst_16);
}
