void Aplanarity_both_all()
{
//=========Macro generated from canvas: Aplanarity_both_all/Aplanarity_both_all
//=========  (Tue Aug 22 09:23:19 2023) by ROOT version 6.14/09
   TCanvas *Aplanarity_both_all = new TCanvas("Aplanarity_both_all", "Aplanarity_both_all",0,0,600,600);
   gStyle->SetOptStat(0);
   Aplanarity_both_all->SetHighLightColor(2);
   Aplanarity_both_all->Range(0,0,1,1);
   Aplanarity_both_all->SetFillColor(0);
   Aplanarity_both_all->SetFillStyle(4000);
   Aplanarity_both_all->SetBorderMode(0);
   Aplanarity_both_all->SetBorderSize(2);
   Aplanarity_both_all->SetFrameFillStyle(1000);
   Aplanarity_both_all->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.1532254,-922.2351,1.052419,921612.9);
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
   st->SetMinimum(0.3);
   st->SetMaximum(789866);
   
   TH1F *st_stack_256 = new TH1F("st_stack_256","",50,0,1);
   st_stack_256->SetMinimum(0.3);
   st_stack_256->SetMaximum(829359.3);
   st_stack_256->SetDirectory(0);
   st_stack_256->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_256->SetLineColor(ci);
   st_stack_256->GetXaxis()->SetRange(1,50);
   st_stack_256->GetXaxis()->SetLabelFont(42);
   st_stack_256->GetXaxis()->SetLabelSize(0.035);
   st_stack_256->GetXaxis()->SetTitleSize(0.035);
   st_stack_256->GetXaxis()->SetTitleFont(42);
   st_stack_256->GetYaxis()->SetTitle("Events/0.02");
   st_stack_256->GetYaxis()->SetLabelFont(42);
   st_stack_256->GetYaxis()->SetLabelSize(0.05);
   st_stack_256->GetYaxis()->SetTitleSize(0.057);
   st_stack_256->GetYaxis()->SetTitleOffset(1.2);
   st_stack_256->GetYaxis()->SetTitleFont(42);
   st_stack_256->GetZaxis()->SetLabelFont(42);
   st_stack_256->GetZaxis()->SetLabelSize(0.035);
   st_stack_256->GetZaxis()->SetTitleSize(0.035);
   st_stack_256->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_256);
   
   
   TH1D *VbbHcc_both_Aplanarity_all_stack_1 = new TH1D("VbbHcc_both_Aplanarity_all_stack_1","",50,0,1);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinContent(1,314456.1);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinContent(2,87544.88);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinContent(3,61578.47);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinContent(4,24319.01);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinContent(5,36085.23);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinContent(6,8820.913);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinContent(7,6492.786);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinContent(8,3345.291);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinContent(9,5384.442);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinContent(10,1424.502);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinContent(11,1317.114);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinContent(12,1278.928);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinContent(13,630.5324);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinContent(14,280.3899);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinContent(15,606.1857);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinContent(16,51.12091);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinContent(17,96.98188);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinContent(18,13.08427);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinContent(19,294.244);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinError(1,7867.858);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinError(2,4117.209);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinError(3,16970.1);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinError(4,2286.744);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinError(5,20714.39);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinError(6,1119.066);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinError(7,1421.759);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinError(8,695.7973);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinError(9,2343.493);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinError(10,503.6958);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinError(11,411.1139);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinError(12,734.6746);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinError(13,334.596);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinError(14,69.93782);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinError(15,531.4417);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinError(16,37.57746);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinError(17,55.15446);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinError(18,7.739102);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinError(19,239.8528);
   VbbHcc_both_Aplanarity_all_stack_1->SetEntries(28873);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_both_Aplanarity_all_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Aplanarity_all_stack_1->SetLineColor(ci);
   VbbHcc_both_Aplanarity_all_stack_1->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Aplanarity_all_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_all_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_all_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_all_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_all_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_all_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_all_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_all_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Aplanarity_all_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_all_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_all_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_all_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_all_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Aplanarity_all_stack_1,"");
   
   TH1D *VbbHcc_both_Aplanarity_all_stack_2 = new TH1D("VbbHcc_both_Aplanarity_all_stack_2","",50,0,1);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinContent(1,1688.248);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinContent(2,498.7904);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinContent(3,242.3392);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinContent(4,135.8774);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinContent(5,86.68772);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinContent(6,55.79567);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinContent(7,37.96227);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinContent(8,24.96026);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinContent(9,17.1749);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinContent(10,10.41142);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinContent(11,6.732791);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinContent(12,4.893257);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinContent(13,3.31679);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinContent(14,1.980372);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinContent(15,2.0759);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinContent(16,1.147712);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinContent(17,0.5912813);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinContent(18,0.4397226);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinContent(19,0.315519);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinContent(20,0.05215649);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinContent(21,0.05752587);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinContent(22,0.03624783);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinContent(23,0.06807733);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinError(1,17.54663);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinError(2,9.463403);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinError(3,6.597831);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinError(4,4.964664);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinError(5,3.934684);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinError(6,3.20635);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinError(7,2.575509);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinError(8,2.086063);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinError(9,1.811248);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinError(10,1.429612);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinError(11,1.010358);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinError(12,1.004215);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinError(13,0.8215183);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinError(14,0.5289957);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinError(15,0.6400168);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinError(16,0.5182089);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinError(17,0.3516904);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinError(18,0.2705514);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinError(19,0.315519);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinError(20,0.05215649);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinError(21,0.05752587);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinError(22,0.03624783);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinError(23,0.06807733);
   VbbHcc_both_Aplanarity_all_stack_2->SetEntries(36867);

   ci = TColor::GetColor("#660066");
   VbbHcc_both_Aplanarity_all_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Aplanarity_all_stack_2->SetLineColor(ci);
   VbbHcc_both_Aplanarity_all_stack_2->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Aplanarity_all_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_all_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_all_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_all_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_all_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_all_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_all_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_all_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Aplanarity_all_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_all_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_all_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_all_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_all_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Aplanarity_all_stack_2,"");
   
   TH1D *VbbHcc_both_Aplanarity_all_stack_3 = new TH1D("VbbHcc_both_Aplanarity_all_stack_3","",50,0,1);
   VbbHcc_both_Aplanarity_all_stack_3->SetBinContent(1,33988.26);
   VbbHcc_both_Aplanarity_all_stack_3->SetBinContent(2,11143.77);
   VbbHcc_both_Aplanarity_all_stack_3->SetBinContent(3,5434.859);
   VbbHcc_both_Aplanarity_all_stack_3->SetBinContent(4,3128.127);
   VbbHcc_both_Aplanarity_all_stack_3->SetBinContent(5,1926.606);
   VbbHcc_both_Aplanarity_all_stack_3->SetBinContent(6,1281.996);
   VbbHcc_both_Aplanarity_all_stack_3->SetBinContent(7,849.6841);
   VbbHcc_both_Aplanarity_all_stack_3->SetBinContent(8,575.6547);
   VbbHcc_both_Aplanarity_all_stack_3->SetBinContent(9,402.609);
   VbbHcc_both_Aplanarity_all_stack_3->SetBinContent(10,279.492);
   VbbHcc_both_Aplanarity_all_stack_3->SetBinContent(11,187.5269);
   VbbHcc_both_Aplanarity_all_stack_3->SetBinContent(12,132.6285);
   VbbHcc_both_Aplanarity_all_stack_3->SetBinContent(13,91.21576);
   VbbHcc_both_Aplanarity_all_stack_3->SetBinContent(14,59.37885);
   VbbHcc_both_Aplanarity_all_stack_3->SetBinContent(15,37.67583);
   VbbHcc_both_Aplanarity_all_stack_3->SetBinContent(16,24.24737);
   VbbHcc_both_Aplanarity_all_stack_3->SetBinContent(17,15.02357);
   VbbHcc_both_Aplanarity_all_stack_3->SetBinContent(18,9.949979);
   VbbHcc_both_Aplanarity_all_stack_3->SetBinContent(19,5.058265);
   VbbHcc_both_Aplanarity_all_stack_3->SetBinContent(20,1.789152);
   VbbHcc_both_Aplanarity_all_stack_3->SetBinContent(21,0.5882058);
   VbbHcc_both_Aplanarity_all_stack_3->SetBinContent(22,0.1501913);
   VbbHcc_both_Aplanarity_all_stack_3->SetBinContent(23,0.05113213);
   VbbHcc_both_Aplanarity_all_stack_3->SetBinContent(24,0.06405613);
   VbbHcc_both_Aplanarity_all_stack_3->SetBinError(1,50.01202);
   VbbHcc_both_Aplanarity_all_stack_3->SetBinError(2,28.03921);
   VbbHcc_both_Aplanarity_all_stack_3->SetBinError(3,20.12852);
   VbbHcc_both_Aplanarity_all_stack_3->SetBinError(4,14.97909);
   VbbHcc_both_Aplanarity_all_stack_3->SetBinError(5,12.03506);
   VbbHcc_both_Aplanarity_all_stack_3->SetBinError(6,9.647541);
   VbbHcc_both_Aplanarity_all_stack_3->SetBinError(7,7.860908);
   VbbHcc_both_Aplanarity_all_stack_3->SetBinError(8,7.026104);
   VbbHcc_both_Aplanarity_all_stack_3->SetBinError(9,5.440185);
   VbbHcc_both_Aplanarity_all_stack_3->SetBinError(10,4.530566);
   VbbHcc_both_Aplanarity_all_stack_3->SetBinError(11,3.573091);
   VbbHcc_both_Aplanarity_all_stack_3->SetBinError(12,3.092096);
   VbbHcc_both_Aplanarity_all_stack_3->SetBinError(13,2.527025);
   VbbHcc_both_Aplanarity_all_stack_3->SetBinError(14,2.004292);
   VbbHcc_both_Aplanarity_all_stack_3->SetBinError(15,1.591702);
   VbbHcc_both_Aplanarity_all_stack_3->SetBinError(16,1.265476);
   VbbHcc_both_Aplanarity_all_stack_3->SetBinError(17,1.032152);
   VbbHcc_both_Aplanarity_all_stack_3->SetBinError(18,0.8449575);
   VbbHcc_both_Aplanarity_all_stack_3->SetBinError(19,0.5673379);
   VbbHcc_both_Aplanarity_all_stack_3->SetBinError(20,0.3296732);
   VbbHcc_both_Aplanarity_all_stack_3->SetBinError(21,0.1849067);
   VbbHcc_both_Aplanarity_all_stack_3->SetBinError(22,0.08262245);
   VbbHcc_both_Aplanarity_all_stack_3->SetBinError(23,0.05113213);
   VbbHcc_both_Aplanarity_all_stack_3->SetBinError(24,0.06405613);
   VbbHcc_both_Aplanarity_all_stack_3->SetEntries(982703);

   ci = TColor::GetColor("#cc00cc");
   VbbHcc_both_Aplanarity_all_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Aplanarity_all_stack_3->SetLineColor(ci);
   VbbHcc_both_Aplanarity_all_stack_3->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Aplanarity_all_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_all_stack_3->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_all_stack_3->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_all_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_all_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_all_stack_3->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_all_stack_3->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_all_stack_3->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Aplanarity_all_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_all_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_all_stack_3->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_all_stack_3->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_all_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Aplanarity_all_stack_3,"");
   
   TH1D *VbbHcc_both_Aplanarity_all_stack_4 = new TH1D("VbbHcc_both_Aplanarity_all_stack_4","",50,0,1);
   VbbHcc_both_Aplanarity_all_stack_4->SetBinContent(1,4614.802);
   VbbHcc_both_Aplanarity_all_stack_4->SetBinContent(2,1322.711);
   VbbHcc_both_Aplanarity_all_stack_4->SetBinContent(3,622.8593);
   VbbHcc_both_Aplanarity_all_stack_4->SetBinContent(4,347.0329);
   VbbHcc_both_Aplanarity_all_stack_4->SetBinContent(5,203.7589);
   VbbHcc_both_Aplanarity_all_stack_4->SetBinContent(6,138.3453);
   VbbHcc_both_Aplanarity_all_stack_4->SetBinContent(7,80.37463);
   VbbHcc_both_Aplanarity_all_stack_4->SetBinContent(8,61.64465);
   VbbHcc_both_Aplanarity_all_stack_4->SetBinContent(9,39.22472);
   VbbHcc_both_Aplanarity_all_stack_4->SetBinContent(10,26.54083);
   VbbHcc_both_Aplanarity_all_stack_4->SetBinContent(11,14.87861);
   VbbHcc_both_Aplanarity_all_stack_4->SetBinContent(12,9.040732);
   VbbHcc_both_Aplanarity_all_stack_4->SetBinContent(13,9.835369);
   VbbHcc_both_Aplanarity_all_stack_4->SetBinContent(14,3.627052);
   VbbHcc_both_Aplanarity_all_stack_4->SetBinContent(15,4.668639);
   VbbHcc_both_Aplanarity_all_stack_4->SetBinContent(16,1.693252);
   VbbHcc_both_Aplanarity_all_stack_4->SetBinContent(17,1.895007);
   VbbHcc_both_Aplanarity_all_stack_4->SetBinContent(18,0.8158732);
   VbbHcc_both_Aplanarity_all_stack_4->SetBinContent(20,0.07009327);
   VbbHcc_both_Aplanarity_all_stack_4->SetBinError(1,46.70369);
   VbbHcc_both_Aplanarity_all_stack_4->SetBinError(2,26.66358);
   VbbHcc_both_Aplanarity_all_stack_4->SetBinError(3,20.46441);
   VbbHcc_both_Aplanarity_all_stack_4->SetBinError(4,13.85955);
   VbbHcc_both_Aplanarity_all_stack_4->SetBinError(5,11.34162);
   VbbHcc_both_Aplanarity_all_stack_4->SetBinError(6,9.370914);
   VbbHcc_both_Aplanarity_all_stack_4->SetBinError(7,5.71793);
   VbbHcc_both_Aplanarity_all_stack_4->SetBinError(8,6.319639);
   VbbHcc_both_Aplanarity_all_stack_4->SetBinError(9,3.371052);
   VbbHcc_both_Aplanarity_all_stack_4->SetBinError(10,3.60085);
   VbbHcc_both_Aplanarity_all_stack_4->SetBinError(11,2.278379);
   VbbHcc_both_Aplanarity_all_stack_4->SetBinError(12,1.412641);
   VbbHcc_both_Aplanarity_all_stack_4->SetBinError(13,1.792352);
   VbbHcc_both_Aplanarity_all_stack_4->SetBinError(14,0.8499911);
   VbbHcc_both_Aplanarity_all_stack_4->SetBinError(15,1.864061);
   VbbHcc_both_Aplanarity_all_stack_4->SetBinError(16,0.7186631);
   VbbHcc_both_Aplanarity_all_stack_4->SetBinError(17,0.8135882);
   VbbHcc_both_Aplanarity_all_stack_4->SetBinError(18,0.603852);
   VbbHcc_both_Aplanarity_all_stack_4->SetBinError(20,0.07009327);
   VbbHcc_both_Aplanarity_all_stack_4->SetEntries(51772);

   ci = TColor::GetColor("#00cccc");
   VbbHcc_both_Aplanarity_all_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Aplanarity_all_stack_4->SetLineColor(ci);
   VbbHcc_both_Aplanarity_all_stack_4->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Aplanarity_all_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_all_stack_4->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_all_stack_4->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_all_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_all_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_all_stack_4->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_all_stack_4->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_all_stack_4->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Aplanarity_all_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_all_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_all_stack_4->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_all_stack_4->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_all_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Aplanarity_all_stack_4,"");
   
   TH1D *VbbHcc_both_Aplanarity_all_stack_5 = new TH1D("VbbHcc_both_Aplanarity_all_stack_5","",50,0,1);
   VbbHcc_both_Aplanarity_all_stack_5->SetBinContent(1,483.0022);
   VbbHcc_both_Aplanarity_all_stack_5->SetBinContent(2,144.3031);
   VbbHcc_both_Aplanarity_all_stack_5->SetBinContent(3,59.59736);
   VbbHcc_both_Aplanarity_all_stack_5->SetBinContent(4,32.3124);
   VbbHcc_both_Aplanarity_all_stack_5->SetBinContent(5,19.6942);
   VbbHcc_both_Aplanarity_all_stack_5->SetBinContent(6,7.99778);
   VbbHcc_both_Aplanarity_all_stack_5->SetBinContent(7,9.855263);
   VbbHcc_both_Aplanarity_all_stack_5->SetBinContent(8,3.198539);
   VbbHcc_both_Aplanarity_all_stack_5->SetBinContent(9,1.738153);
   VbbHcc_both_Aplanarity_all_stack_5->SetBinContent(10,1.968615);
   VbbHcc_both_Aplanarity_all_stack_5->SetBinContent(11,1.737762);
   VbbHcc_both_Aplanarity_all_stack_5->SetBinContent(12,2.508797);
   VbbHcc_both_Aplanarity_all_stack_5->SetBinContent(13,0.2934876);
   VbbHcc_both_Aplanarity_all_stack_5->SetBinContent(14,0.6396241);
   VbbHcc_both_Aplanarity_all_stack_5->SetBinContent(15,0.5851377);
   VbbHcc_both_Aplanarity_all_stack_5->SetBinContent(17,1.832965e-05);
   VbbHcc_both_Aplanarity_all_stack_5->SetBinError(1,19.32445);
   VbbHcc_both_Aplanarity_all_stack_5->SetBinError(2,11.40126);
   VbbHcc_both_Aplanarity_all_stack_5->SetBinError(3,7.91564);
   VbbHcc_both_Aplanarity_all_stack_5->SetBinError(4,3.763302);
   VbbHcc_both_Aplanarity_all_stack_5->SetBinError(5,4.223177);
   VbbHcc_both_Aplanarity_all_stack_5->SetBinError(6,1.3682);
   VbbHcc_both_Aplanarity_all_stack_5->SetBinError(7,2.931772);
   VbbHcc_both_Aplanarity_all_stack_5->SetBinError(8,0.7152381);
   VbbHcc_both_Aplanarity_all_stack_5->SetBinError(9,0.5041526);
   VbbHcc_both_Aplanarity_all_stack_5->SetBinError(10,0.6287396);
   VbbHcc_both_Aplanarity_all_stack_5->SetBinError(11,0.5648425);
   VbbHcc_both_Aplanarity_all_stack_5->SetBinError(12,2.106657);
   VbbHcc_both_Aplanarity_all_stack_5->SetBinError(13,0.1886903);
   VbbHcc_both_Aplanarity_all_stack_5->SetBinError(14,0.2673329);
   VbbHcc_both_Aplanarity_all_stack_5->SetBinError(15,0.3031404);
   VbbHcc_both_Aplanarity_all_stack_5->SetBinError(17,1.832965e-05);
   VbbHcc_both_Aplanarity_all_stack_5->SetEntries(7913);

   ci = TColor::GetColor("#ff99cc");
   VbbHcc_both_Aplanarity_all_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Aplanarity_all_stack_5->SetLineColor(ci);
   VbbHcc_both_Aplanarity_all_stack_5->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Aplanarity_all_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_all_stack_5->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_all_stack_5->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_all_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_all_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_all_stack_5->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_all_stack_5->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_all_stack_5->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Aplanarity_all_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_all_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_all_stack_5->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_all_stack_5->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_all_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Aplanarity_all_stack_5,"");
   
   TH1D *VbbHcc_both_Aplanarity_all_stack_6 = new TH1D("VbbHcc_both_Aplanarity_all_stack_6","",50,0,1);
   VbbHcc_both_Aplanarity_all_stack_6->SetBinContent(1,2.711791);
   VbbHcc_both_Aplanarity_all_stack_6->SetBinContent(2,0.3673602);
   VbbHcc_both_Aplanarity_all_stack_6->SetBinContent(4,0.2950387);
   VbbHcc_both_Aplanarity_all_stack_6->SetBinContent(6,0.3049337);
   VbbHcc_both_Aplanarity_all_stack_6->SetBinError(1,0.9585587);
   VbbHcc_both_Aplanarity_all_stack_6->SetBinError(2,0.212126);
   VbbHcc_both_Aplanarity_all_stack_6->SetBinError(4,0.2950387);
   VbbHcc_both_Aplanarity_all_stack_6->SetBinError(6,0.3049337);
   VbbHcc_both_Aplanarity_all_stack_6->SetEntries(17);

   ci = TColor::GetColor("#9933ff");
   VbbHcc_both_Aplanarity_all_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Aplanarity_all_stack_6->SetLineColor(ci);
   VbbHcc_both_Aplanarity_all_stack_6->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Aplanarity_all_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_all_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_all_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_all_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_all_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_all_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_all_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_all_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Aplanarity_all_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_all_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_all_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_all_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_all_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Aplanarity_all_stack_6,"");
   
   TH1D *VbbHcc_both_Aplanarity_all_stack_7 = new TH1D("VbbHcc_both_Aplanarity_all_stack_7","",50,0,1);
   VbbHcc_both_Aplanarity_all_stack_7->SetBinContent(1,4.527185);
   VbbHcc_both_Aplanarity_all_stack_7->SetBinContent(2,0.6908081);
   VbbHcc_both_Aplanarity_all_stack_7->SetBinContent(3,0.5549639);
   VbbHcc_both_Aplanarity_all_stack_7->SetBinContent(4,0.5184047);
   VbbHcc_both_Aplanarity_all_stack_7->SetBinContent(5,0.1860331);
   VbbHcc_both_Aplanarity_all_stack_7->SetBinContent(6,0.3049337);
   VbbHcc_both_Aplanarity_all_stack_7->SetBinContent(10,0.0778465);
   VbbHcc_both_Aplanarity_all_stack_7->SetBinError(1,1.03094);
   VbbHcc_both_Aplanarity_all_stack_7->SetBinError(2,0.2453729);
   VbbHcc_both_Aplanarity_all_stack_7->SetBinError(3,0.2269886);
   VbbHcc_both_Aplanarity_all_stack_7->SetBinError(4,0.3244557);
   VbbHcc_both_Aplanarity_all_stack_7->SetBinError(5,0.1317153);
   VbbHcc_both_Aplanarity_all_stack_7->SetBinError(6,0.3049337);
   VbbHcc_both_Aplanarity_all_stack_7->SetBinError(10,0.0778465);
   VbbHcc_both_Aplanarity_all_stack_7->SetEntries(56);

   ci = TColor::GetColor("#3399ff");
   VbbHcc_both_Aplanarity_all_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Aplanarity_all_stack_7->SetLineColor(ci);
   VbbHcc_both_Aplanarity_all_stack_7->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Aplanarity_all_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_all_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_all_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_all_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_all_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_all_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_all_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_all_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Aplanarity_all_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_all_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_all_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_all_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_all_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Aplanarity_all_stack_7,"");
   
   TH1D *VbbHcc_both_Aplanarity_all_stack_8 = new TH1D("VbbHcc_both_Aplanarity_all_stack_8","",50,0,1);
   VbbHcc_both_Aplanarity_all_stack_8->SetBinContent(1,88.94346);
   VbbHcc_both_Aplanarity_all_stack_8->SetBinContent(2,26.99449);
   VbbHcc_both_Aplanarity_all_stack_8->SetBinContent(3,11.31389);
   VbbHcc_both_Aplanarity_all_stack_8->SetBinContent(4,7.148243);
   VbbHcc_both_Aplanarity_all_stack_8->SetBinContent(5,2.342041);
   VbbHcc_both_Aplanarity_all_stack_8->SetBinContent(6,2.30479);
   VbbHcc_both_Aplanarity_all_stack_8->SetBinContent(7,2.39201);
   VbbHcc_both_Aplanarity_all_stack_8->SetBinContent(8,1.512474);
   VbbHcc_both_Aplanarity_all_stack_8->SetBinContent(9,0.1416337);
   VbbHcc_both_Aplanarity_all_stack_8->SetBinContent(10,0.183263);
   VbbHcc_both_Aplanarity_all_stack_8->SetBinContent(11,0.2561662);
   VbbHcc_both_Aplanarity_all_stack_8->SetBinError(1,4.895609);
   VbbHcc_both_Aplanarity_all_stack_8->SetBinError(2,2.702569);
   VbbHcc_both_Aplanarity_all_stack_8->SetBinError(3,1.669295);
   VbbHcc_both_Aplanarity_all_stack_8->SetBinError(4,1.395435);
   VbbHcc_both_Aplanarity_all_stack_8->SetBinError(5,0.8572644);
   VbbHcc_both_Aplanarity_all_stack_8->SetBinError(6,0.7828436);
   VbbHcc_both_Aplanarity_all_stack_8->SetBinError(7,0.8129807);
   VbbHcc_both_Aplanarity_all_stack_8->SetBinError(8,0.6812262);
   VbbHcc_both_Aplanarity_all_stack_8->SetBinError(9,0.1416337);
   VbbHcc_both_Aplanarity_all_stack_8->SetBinError(10,0.183263);
   VbbHcc_both_Aplanarity_all_stack_8->SetBinError(11,0.2561662);
   VbbHcc_both_Aplanarity_all_stack_8->SetEntries(574);

   ci = TColor::GetColor("#33ff99");
   VbbHcc_both_Aplanarity_all_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Aplanarity_all_stack_8->SetLineColor(ci);
   VbbHcc_both_Aplanarity_all_stack_8->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Aplanarity_all_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_all_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_all_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_all_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_all_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_all_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_all_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_all_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Aplanarity_all_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_all_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_all_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_all_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_all_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Aplanarity_all_stack_8,"");
   
   TH1D *VbbHcc_both_Aplanarity_all_stack_9 = new TH1D("VbbHcc_both_Aplanarity_all_stack_9","",50,0,1);
   VbbHcc_both_Aplanarity_all_stack_9->SetBinContent(1,83.24722);
   VbbHcc_both_Aplanarity_all_stack_9->SetBinContent(2,24.51594);
   VbbHcc_both_Aplanarity_all_stack_9->SetBinContent(3,11.74178);
   VbbHcc_both_Aplanarity_all_stack_9->SetBinContent(4,6.761661);
   VbbHcc_both_Aplanarity_all_stack_9->SetBinContent(5,4.225719);
   VbbHcc_both_Aplanarity_all_stack_9->SetBinContent(6,2.639989);
   VbbHcc_both_Aplanarity_all_stack_9->SetBinContent(7,1.718421);
   VbbHcc_both_Aplanarity_all_stack_9->SetBinContent(8,1.082402);
   VbbHcc_both_Aplanarity_all_stack_9->SetBinContent(9,0.7280122);
   VbbHcc_both_Aplanarity_all_stack_9->SetBinContent(10,0.4804468);
   VbbHcc_both_Aplanarity_all_stack_9->SetBinContent(11,0.3277144);
   VbbHcc_both_Aplanarity_all_stack_9->SetBinContent(12,0.2153653);
   VbbHcc_both_Aplanarity_all_stack_9->SetBinContent(13,0.147413);
   VbbHcc_both_Aplanarity_all_stack_9->SetBinContent(14,0.07392315);
   VbbHcc_both_Aplanarity_all_stack_9->SetBinContent(15,0.07138026);
   VbbHcc_both_Aplanarity_all_stack_9->SetBinContent(16,0.02632592);
   VbbHcc_both_Aplanarity_all_stack_9->SetBinContent(17,0.02767838);
   VbbHcc_both_Aplanarity_all_stack_9->SetBinContent(18,0.01030431);
   VbbHcc_both_Aplanarity_all_stack_9->SetBinContent(19,0.007550118);
   VbbHcc_both_Aplanarity_all_stack_9->SetBinContent(20,0.0009130579);
   VbbHcc_both_Aplanarity_all_stack_9->SetBinContent(22,0.001087504);
   VbbHcc_both_Aplanarity_all_stack_9->SetBinError(1,0.4664542);
   VbbHcc_both_Aplanarity_all_stack_9->SetBinError(2,0.2439369);
   VbbHcc_both_Aplanarity_all_stack_9->SetBinError(3,0.1653962);
   VbbHcc_both_Aplanarity_all_stack_9->SetBinError(4,0.1338504);
   VbbHcc_both_Aplanarity_all_stack_9->SetBinError(5,0.097177);
   VbbHcc_both_Aplanarity_all_stack_9->SetBinError(6,0.09509242);
   VbbHcc_both_Aplanarity_all_stack_9->SetBinError(7,0.0625391);
   VbbHcc_both_Aplanarity_all_stack_9->SetBinError(8,0.04749391);
   VbbHcc_both_Aplanarity_all_stack_9->SetBinError(9,0.0400027);
   VbbHcc_both_Aplanarity_all_stack_9->SetBinError(10,0.03556631);
   VbbHcc_both_Aplanarity_all_stack_9->SetBinError(11,0.02638204);
   VbbHcc_both_Aplanarity_all_stack_9->SetBinError(12,0.02162818);
   VbbHcc_both_Aplanarity_all_stack_9->SetBinError(13,0.01858676);
   VbbHcc_both_Aplanarity_all_stack_9->SetBinError(14,0.0121359);
   VbbHcc_both_Aplanarity_all_stack_9->SetBinError(15,0.01494468);
   VbbHcc_both_Aplanarity_all_stack_9->SetBinError(16,0.007997104);
   VbbHcc_both_Aplanarity_all_stack_9->SetBinError(17,0.007818182);
   VbbHcc_both_Aplanarity_all_stack_9->SetBinError(18,0.004288754);
   VbbHcc_both_Aplanarity_all_stack_9->SetBinError(19,0.004621236);
   VbbHcc_both_Aplanarity_all_stack_9->SetBinError(20,0.0009130579);
   VbbHcc_both_Aplanarity_all_stack_9->SetBinError(22,0.001087504);
   VbbHcc_both_Aplanarity_all_stack_9->SetEntries(80589);

   ci = TColor::GetColor("#cccc00");
   VbbHcc_both_Aplanarity_all_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Aplanarity_all_stack_9->SetLineColor(ci);
   VbbHcc_both_Aplanarity_all_stack_9->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Aplanarity_all_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_all_stack_9->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_all_stack_9->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_all_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_all_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_all_stack_9->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_all_stack_9->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_all_stack_9->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Aplanarity_all_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_all_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_all_stack_9->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_all_stack_9->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_all_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Aplanarity_all_stack_9,"");
   
   TH1D *VbbHcc_both_Aplanarity_all_stack_10 = new TH1D("VbbHcc_both_Aplanarity_all_stack_10","",50,0,1);
   VbbHcc_both_Aplanarity_all_stack_10->SetBinContent(1,29.46575);
   VbbHcc_both_Aplanarity_all_stack_10->SetBinContent(2,9.737163);
   VbbHcc_both_Aplanarity_all_stack_10->SetBinContent(3,5.044037);
   VbbHcc_both_Aplanarity_all_stack_10->SetBinContent(4,2.96017);
   VbbHcc_both_Aplanarity_all_stack_10->SetBinContent(5,1.856013);
   VbbHcc_both_Aplanarity_all_stack_10->SetBinContent(6,1.186896);
   VbbHcc_both_Aplanarity_all_stack_10->SetBinContent(7,0.8232584);
   VbbHcc_both_Aplanarity_all_stack_10->SetBinContent(8,0.5929308);
   VbbHcc_both_Aplanarity_all_stack_10->SetBinContent(9,0.365349);
   VbbHcc_both_Aplanarity_all_stack_10->SetBinContent(10,0.2471781);
   VbbHcc_both_Aplanarity_all_stack_10->SetBinContent(11,0.1369118);
   VbbHcc_both_Aplanarity_all_stack_10->SetBinContent(12,0.1217455);
   VbbHcc_both_Aplanarity_all_stack_10->SetBinContent(13,0.08220148);
   VbbHcc_both_Aplanarity_all_stack_10->SetBinContent(14,0.06216488);
   VbbHcc_both_Aplanarity_all_stack_10->SetBinContent(15,0.0174671);
   VbbHcc_both_Aplanarity_all_stack_10->SetBinContent(16,0.01637246);
   VbbHcc_both_Aplanarity_all_stack_10->SetBinContent(17,0.0152212);
   VbbHcc_both_Aplanarity_all_stack_10->SetBinContent(18,0.002407666);
   VbbHcc_both_Aplanarity_all_stack_10->SetBinContent(19,0.005263493);
   VbbHcc_both_Aplanarity_all_stack_10->SetBinContent(21,0.001149165);
   VbbHcc_both_Aplanarity_all_stack_10->SetBinError(1,0.1154339);
   VbbHcc_both_Aplanarity_all_stack_10->SetBinError(2,0.06595694);
   VbbHcc_both_Aplanarity_all_stack_10->SetBinError(3,0.04742419);
   VbbHcc_both_Aplanarity_all_stack_10->SetBinError(4,0.03625743);
   VbbHcc_both_Aplanarity_all_stack_10->SetBinError(5,0.02871922);
   VbbHcc_both_Aplanarity_all_stack_10->SetBinError(6,0.02290047);
   VbbHcc_both_Aplanarity_all_stack_10->SetBinError(7,0.01907068);
   VbbHcc_both_Aplanarity_all_stack_10->SetBinError(8,0.01618627);
   VbbHcc_both_Aplanarity_all_stack_10->SetBinError(9,0.01268564);
   VbbHcc_both_Aplanarity_all_stack_10->SetBinError(10,0.01042647);
   VbbHcc_both_Aplanarity_all_stack_10->SetBinError(11,0.00767619);
   VbbHcc_both_Aplanarity_all_stack_10->SetBinError(12,0.007379247);
   VbbHcc_both_Aplanarity_all_stack_10->SetBinError(13,0.005998492);
   VbbHcc_both_Aplanarity_all_stack_10->SetBinError(14,0.005191669);
   VbbHcc_both_Aplanarity_all_stack_10->SetBinError(15,0.002774219);
   VbbHcc_both_Aplanarity_all_stack_10->SetBinError(16,0.002703869);
   VbbHcc_both_Aplanarity_all_stack_10->SetBinError(17,0.002523551);
   VbbHcc_both_Aplanarity_all_stack_10->SetBinError(18,0.001017743);
   VbbHcc_both_Aplanarity_all_stack_10->SetBinError(19,0.001562314);
   VbbHcc_both_Aplanarity_all_stack_10->SetBinError(21,0.0006797098);
   VbbHcc_both_Aplanarity_all_stack_10->SetEntries(125673);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_both_Aplanarity_all_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Aplanarity_all_stack_10->SetLineColor(ci);
   VbbHcc_both_Aplanarity_all_stack_10->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Aplanarity_all_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_all_stack_10->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_all_stack_10->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_all_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_all_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_all_stack_10->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_all_stack_10->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_all_stack_10->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Aplanarity_all_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_all_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_all_stack_10->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_all_stack_10->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_all_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Aplanarity_all_stack_10,"");
   
   TH1D *VbbHcc_both_Aplanarity_all_stack_11 = new TH1D("VbbHcc_both_Aplanarity_all_stack_11","",50,0,1);
   VbbHcc_both_Aplanarity_all_stack_11->SetBinContent(1,0.2591202);
   VbbHcc_both_Aplanarity_all_stack_11->SetBinContent(2,0.07436136);
   VbbHcc_both_Aplanarity_all_stack_11->SetBinContent(3,0.02560862);
   VbbHcc_both_Aplanarity_all_stack_11->SetBinContent(4,0.02229567);
   VbbHcc_both_Aplanarity_all_stack_11->SetBinContent(5,0.00938958);
   VbbHcc_both_Aplanarity_all_stack_11->SetBinContent(6,0.005396111);
   VbbHcc_both_Aplanarity_all_stack_11->SetBinContent(7,0.00366241);
   VbbHcc_both_Aplanarity_all_stack_11->SetBinContent(8,0.005134446);
   VbbHcc_both_Aplanarity_all_stack_11->SetBinContent(9,0.002109186);
   VbbHcc_both_Aplanarity_all_stack_11->SetBinContent(10,0.005033882);
   VbbHcc_both_Aplanarity_all_stack_11->SetBinContent(11,0.002398405);
   VbbHcc_both_Aplanarity_all_stack_11->SetBinError(1,0.02304779);
   VbbHcc_both_Aplanarity_all_stack_11->SetBinError(2,0.01250734);
   VbbHcc_both_Aplanarity_all_stack_11->SetBinError(3,0.007391708);
   VbbHcc_both_Aplanarity_all_stack_11->SetBinError(4,0.006630925);
   VbbHcc_both_Aplanarity_all_stack_11->SetBinError(5,0.004294029);
   VbbHcc_both_Aplanarity_all_stack_11->SetBinError(6,0.003913321);
   VbbHcc_both_Aplanarity_all_stack_11->SetBinError(7,0.002608315);
   VbbHcc_both_Aplanarity_all_stack_11->SetBinError(8,0.002994056);
   VbbHcc_both_Aplanarity_all_stack_11->SetBinError(9,0.002109186);
   VbbHcc_both_Aplanarity_all_stack_11->SetBinError(10,0.003178363);
   VbbHcc_both_Aplanarity_all_stack_11->SetBinError(11,0.002398405);
   VbbHcc_both_Aplanarity_all_stack_11->SetEntries(215);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_both_Aplanarity_all_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Aplanarity_all_stack_11->SetLineColor(ci);
   VbbHcc_both_Aplanarity_all_stack_11->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Aplanarity_all_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_all_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_all_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_all_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_all_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_all_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_all_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_all_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Aplanarity_all_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_all_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_all_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_all_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_all_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Aplanarity_all_stack_11,"");
   
   TH1D *VbbHcc_both_Aplanarity_all_stack_12 = new TH1D("VbbHcc_both_Aplanarity_all_stack_12","",50,0,1);
   VbbHcc_both_Aplanarity_all_stack_12->SetBinContent(1,0.114059);
   VbbHcc_both_Aplanarity_all_stack_12->SetBinContent(2,0.03870772);
   VbbHcc_both_Aplanarity_all_stack_12->SetBinContent(3,0.01698856);
   VbbHcc_both_Aplanarity_all_stack_12->SetBinContent(4,0.01206963);
   VbbHcc_both_Aplanarity_all_stack_12->SetBinContent(5,0.006066478);
   VbbHcc_both_Aplanarity_all_stack_12->SetBinContent(6,0.006298284);
   VbbHcc_both_Aplanarity_all_stack_12->SetBinContent(7,0.002695257);
   VbbHcc_both_Aplanarity_all_stack_12->SetBinContent(8,0.001678145);
   VbbHcc_both_Aplanarity_all_stack_12->SetBinContent(9,0.001678977);
   VbbHcc_both_Aplanarity_all_stack_12->SetBinContent(10,0.001195375);
   VbbHcc_both_Aplanarity_all_stack_12->SetBinContent(11,0.0007049512);
   VbbHcc_both_Aplanarity_all_stack_12->SetBinContent(12,0.0002922094);
   VbbHcc_both_Aplanarity_all_stack_12->SetBinContent(13,0.0004012604);
   VbbHcc_both_Aplanarity_all_stack_12->SetBinError(1,0.005696664);
   VbbHcc_both_Aplanarity_all_stack_12->SetBinError(2,0.003277668);
   VbbHcc_both_Aplanarity_all_stack_12->SetBinError(3,0.002150811);
   VbbHcc_both_Aplanarity_all_stack_12->SetBinError(4,0.001816483);
   VbbHcc_both_Aplanarity_all_stack_12->SetBinError(5,0.001282504);
   VbbHcc_both_Aplanarity_all_stack_12->SetBinError(6,0.001471849);
   VbbHcc_both_Aplanarity_all_stack_12->SetBinError(7,0.000870269);
   VbbHcc_both_Aplanarity_all_stack_12->SetBinError(8,0.0007063695);
   VbbHcc_both_Aplanarity_all_stack_12->SetBinError(9,0.0007049083);
   VbbHcc_both_Aplanarity_all_stack_12->SetBinError(10,0.0005613983);
   VbbHcc_both_Aplanarity_all_stack_12->SetBinError(11,0.0004205166);
   VbbHcc_both_Aplanarity_all_stack_12->SetBinError(12,0.0002922094);
   VbbHcc_both_Aplanarity_all_stack_12->SetBinError(13,0.0004012604);
   VbbHcc_both_Aplanarity_all_stack_12->SetEntries(775);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_both_Aplanarity_all_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Aplanarity_all_stack_12->SetLineColor(ci);
   VbbHcc_both_Aplanarity_all_stack_12->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Aplanarity_all_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_all_stack_12->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_all_stack_12->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_all_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_all_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_all_stack_12->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_all_stack_12->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_all_stack_12->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Aplanarity_all_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_all_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_all_stack_12->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_all_stack_12->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_all_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Aplanarity_all_stack_12,"");
   st->Draw("hist");
   
   TH1D *VbbHcc_both_Aplanarity_all__703 = new TH1D("VbbHcc_both_Aplanarity_all__703","",50,0,1);
   VbbHcc_both_Aplanarity_all__703->SetBinContent(1,297974);
   VbbHcc_both_Aplanarity_all__703->SetBinContent(2,85995);
   VbbHcc_both_Aplanarity_all__703->SetBinContent(3,40183);
   VbbHcc_both_Aplanarity_all__703->SetBinContent(4,22367);
   VbbHcc_both_Aplanarity_all__703->SetBinContent(5,13655);
   VbbHcc_both_Aplanarity_all__703->SetBinContent(6,8583);
   VbbHcc_both_Aplanarity_all__703->SetBinContent(7,5625);
   VbbHcc_both_Aplanarity_all__703->SetBinContent(8,3753);
   VbbHcc_both_Aplanarity_all__703->SetBinContent(9,2567);
   VbbHcc_both_Aplanarity_all__703->SetBinContent(10,1762);
   VbbHcc_both_Aplanarity_all__703->SetBinContent(11,1214);
   VbbHcc_both_Aplanarity_all__703->SetBinContent(12,833);
   VbbHcc_both_Aplanarity_all__703->SetBinContent(13,526);
   VbbHcc_both_Aplanarity_all__703->SetBinContent(14,321);
   VbbHcc_both_Aplanarity_all__703->SetBinContent(15,241);
   VbbHcc_both_Aplanarity_all__703->SetBinContent(16,150);
   VbbHcc_both_Aplanarity_all__703->SetBinContent(17,94);
   VbbHcc_both_Aplanarity_all__703->SetBinContent(18,53);
   VbbHcc_both_Aplanarity_all__703->SetBinContent(19,32);
   VbbHcc_both_Aplanarity_all__703->SetBinContent(20,16);
   VbbHcc_both_Aplanarity_all__703->SetBinContent(21,3);
   VbbHcc_both_Aplanarity_all__703->SetBinContent(22,1);
   VbbHcc_both_Aplanarity_all__703->SetBinContent(24,1);
   VbbHcc_both_Aplanarity_all__703->SetEntries(485998);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Aplanarity_all__703->SetLineColor(ci);
   VbbHcc_both_Aplanarity_all__703->SetLineWidth(2);
   VbbHcc_both_Aplanarity_all__703->SetMarkerStyle(20);
   VbbHcc_both_Aplanarity_all__703->SetMarkerSize(1.2);
   VbbHcc_both_Aplanarity_all__703->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Aplanarity_all__703->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_all__703->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_all__703->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_all__703->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_all__703->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_all__703->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_all__703->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_all__703->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Aplanarity_all__703->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_all__703->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_all__703->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_all__703->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_all__703->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_all__703->Draw("same E");
   
   Double_t Graph_from_VbbHcc_both_Aplanarity_all_fx1511[50] = {
   0.01,
   0.03,
   0.05,
   0.07,
   0.09,
   0.11,
   0.13,
   0.15,
   0.17,
   0.19,
   0.21,
   0.23,
   0.25,
   0.27,
   0.29,
   0.31,
   0.33,
   0.35,
   0.37,
   0.39,
   0.41,
   0.43,
   0.45,
   0.47,
   0.49,
   0.51,
   0.53,
   0.55,
   0.57,
   0.59,
   0.61,
   0.63,
   0.65,
   0.67,
   0.69,
   0.71,
   0.73,
   0.75,
   0.77,
   0.79,
   0.81,
   0.83,
   0.85,
   0.87,
   0.89,
   0.91,
   0.93,
   0.95,
   0.97,
   0.99};
   Double_t Graph_from_VbbHcc_both_Aplanarity_all_fy1511[50] = {
   355439.7,
   100716.9,
   67966.82,
   27980.08,
   38330.61,
   10311.8,
   7475.602,
   4013.944,
   5846.428,
   1743.91,
   1528.714,
   1428.337,
   735.4238,
   346.1519,
   651.28,
   78.25195,
   114.5347,
   24.30256,
   299.6306,
   1.912315,
   0.6468809,
   0.1875266,
   0.1192095,
   0.06405613,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph_from_VbbHcc_both_Aplanarity_all_fex1511[50] = {
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01};
   Double_t Graph_from_VbbHcc_both_Aplanarity_all_fey1511[50] = {
   7868.201,
   4117.419,
   16970.13,
   2286.844,
   20714.4,
   1119.153,
   1421.798,
   695.8653,
   2343.502,
   503.7315,
   411.1374,
   734.6862,
   334.6114,
   69.97421,
   531.4478,
   37.60921,
   55.17124,
   7.813163,
   239.8537,
   0.3410552,
   0.1936496,
   0.09023058,
   0.08514116,
   0.06405613,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   TGraphErrors *gre = new TGraphErrors(50,Graph_from_VbbHcc_both_Aplanarity_all_fx1511,Graph_from_VbbHcc_both_Aplanarity_all_fy1511,Graph_from_VbbHcc_both_Aplanarity_all_fex1511,Graph_from_VbbHcc_both_Aplanarity_all_fey1511);
   gre->SetName("Graph_from_VbbHcc_both_Aplanarity_all");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_both_Aplanarity_all1511 = new TH1F("Graph_Graph_from_VbbHcc_both_Aplanarity_all1511","",100,0,1.1);
   Graph_Graph_from_VbbHcc_both_Aplanarity_all1511->SetMinimum(0);
   Graph_Graph_from_VbbHcc_both_Aplanarity_all1511->SetMaximum(399638.7);
   Graph_Graph_from_VbbHcc_both_Aplanarity_all1511->SetDirectory(0);
   Graph_Graph_from_VbbHcc_both_Aplanarity_all1511->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_both_Aplanarity_all1511->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_both_Aplanarity_all1511->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_both_Aplanarity_all1511->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_both_Aplanarity_all1511->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_both_Aplanarity_all1511->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_both_Aplanarity_all1511->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_both_Aplanarity_all1511->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_both_Aplanarity_all1511->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_both_Aplanarity_all1511->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_VbbHcc_both_Aplanarity_all1511->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_both_Aplanarity_all1511->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_both_Aplanarity_all1511->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_both_Aplanarity_all1511->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_both_Aplanarity_all1511->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_both_Aplanarity_all1511);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_both_Aplanarity_all","Data (JetHT)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_both_Aplanarity_all_stack_12","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_both_Aplanarity_all_stack_11","ZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_both_Aplanarity_all_stack_10","ggZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_both_Aplanarity_all_stack_9","ZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_both_Aplanarity_all_stack_8","ZZ","F");

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
   entry=leg->AddEntry("VbbHcc_both_Aplanarity_all_stack_7","WZ","F");

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
   entry=leg->AddEntry("VbbHcc_both_Aplanarity_all_stack_6","WW","F");

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
   entry=leg->AddEntry("VbbHcc_both_Aplanarity_all_stack_5","W + jets","F");

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
   entry=leg->AddEntry("VbbHcc_both_Aplanarity_all_stack_4","Z + jets","F");

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
   entry=leg->AddEntry("VbbHcc_both_Aplanarity_all_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_both_Aplanarity_all_stack_2","Single top","F");

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
   entry=leg->AddEntry("VbbHcc_both_Aplanarity_all_stack_1","QCD","F");

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
   entry=leg->AddEntry("Graph_from_VbbHcc_both_Aplanarity_all","MC unc. (stat.)","fl");

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
   Aplanarity_both_all->cd();
  
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
   
   TH1D *data_mc_ratio__704 = new TH1D("data_mc_ratio__704","",50,0,1);
   data_mc_ratio__704->SetBinContent(1,0.838325);
   data_mc_ratio__704->SetBinContent(2,0.8538292);
   data_mc_ratio__704->SetBinContent(3,0.5912149);
   data_mc_ratio__704->SetBinContent(4,0.7993901);
   data_mc_ratio__704->SetBinContent(5,0.3562427);
   data_mc_ratio__704->SetBinContent(6,0.8323474);
   data_mc_ratio__704->SetBinContent(7,0.7524477);
   data_mc_ratio__704->SetBinContent(8,0.9349907);
   data_mc_ratio__704->SetBinContent(9,0.4390715);
   data_mc_ratio__704->SetBinContent(10,1.010373);
   data_mc_ratio__704->SetBinContent(11,0.7941313);
   data_mc_ratio__704->SetBinContent(12,0.5831959);
   data_mc_ratio__704->SetBinContent(13,0.7152338);
   data_mc_ratio__704->SetBinContent(14,0.9273386);
   data_mc_ratio__704->SetBinContent(15,0.3700405);
   data_mc_ratio__704->SetBinContent(16,1.916885);
   data_mc_ratio__704->SetBinContent(17,0.8207123);
   data_mc_ratio__704->SetBinContent(18,2.180841);
   data_mc_ratio__704->SetBinContent(19,0.1067982);
   data_mc_ratio__704->SetBinContent(20,8.366824);
   data_mc_ratio__704->SetBinContent(21,4.637639);
   data_mc_ratio__704->SetBinContent(22,5.332577);
   data_mc_ratio__704->SetBinContent(24,15.61131);
   data_mc_ratio__704->SetBinError(1,0.00153576);
   data_mc_ratio__704->SetBinError(2,0.002911618);
   data_mc_ratio__704->SetBinError(3,0.002949336);
   data_mc_ratio__704->SetBinError(4,0.005345089);
   data_mc_ratio__704->SetBinError(5,0.003048598);
   data_mc_ratio__704->SetBinError(6,0.008984317);
   data_mc_ratio__704->SetBinError(7,0.01003264);
   data_mc_ratio__704->SetBinError(8,0.01526223);
   data_mc_ratio__704->SetBinError(9,0.008666073);
   data_mc_ratio__704->SetBinError(10,0.02407015);
   data_mc_ratio__704->SetBinError(11,0.02279203);
   data_mc_ratio__704->SetBinError(12,0.02020654);
   data_mc_ratio__704->SetBinError(13,0.03118568);
   data_mc_ratio__704->SetBinError(14,0.05175899);
   data_mc_ratio__704->SetBinError(15,0.02383641);
   data_mc_ratio__704->SetBinError(16,0.156513);
   data_mc_ratio__704->SetBinError(17,0.08465001);
   data_mc_ratio__704->SetBinError(18,0.2995615);
   data_mc_ratio__704->SetBinError(19,0.01887943);
   data_mc_ratio__704->SetBinError(20,2.091706);
   data_mc_ratio__704->SetBinError(21,2.677542);
   data_mc_ratio__704->SetBinError(22,5.332577);
   data_mc_ratio__704->SetBinError(24,15.61131);
   data_mc_ratio__704->SetMinimum(0.4);
   data_mc_ratio__704->SetMaximum(1.6);
   data_mc_ratio__704->SetEntries(4.584234);
   data_mc_ratio__704->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__704->SetLineColor(ci);
   data_mc_ratio__704->SetLineWidth(2);
   data_mc_ratio__704->SetMarkerStyle(20);
   data_mc_ratio__704->SetMarkerSize(1.2);
   data_mc_ratio__704->GetXaxis()->SetTitle("Aplanarity");
   data_mc_ratio__704->GetXaxis()->SetRange(1,50);
   data_mc_ratio__704->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__704->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__704->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__704->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__704->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__704->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__704->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__704->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__704->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__704->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__704->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__704->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__704->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__704->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__704->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__704->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__704->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1512[50] = {
   0.01,
   0.03,
   0.05,
   0.07,
   0.09,
   0.11,
   0.13,
   0.15,
   0.17,
   0.19,
   0.21,
   0.23,
   0.25,
   0.27,
   0.29,
   0.31,
   0.33,
   0.35,
   0.37,
   0.39,
   0.41,
   0.43,
   0.45,
   0.47,
   0.49,
   0.51,
   0.53,
   0.55,
   0.57,
   0.59,
   0.61,
   0.63,
   0.65,
   0.67,
   0.69,
   0.71,
   0.73,
   0.75,
   0.77,
   0.79,
   0.81,
   0.83,
   0.85,
   0.87,
   0.89,
   0.91,
   0.93,
   0.95,
   0.97,
   0.99};
   Double_t Graph_from_mc_statistical_error_fy1512[50] = {
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
   Double_t Graph_from_mc_statistical_error_fex1512[50] = {
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01};
   Double_t Graph_from_mc_statistical_error_fey1512[50] = {
   0.02213653,
   0.04088112,
   0.2496826,
   0.08173116,
   0.540414,
   0.1085313,
   0.1901917,
   0.173362,
   0.4008434,
   0.2888518,
   0.2689433,
   0.5143649,
   0.4549913,
   0.2021489,
   0.8160051,
   0.4806169,
   0.4816991,
   0.3214955,
   0.8004979,
   0.1783468,
   0.299359,
   0.4811615,
   0.7142148,
   1,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   gre = new TGraphErrors(50,Graph_from_mc_statistical_error_fx1512,Graph_from_mc_statistical_error_fy1512,Graph_from_mc_statistical_error_fex1512,Graph_from_mc_statistical_error_fey1512);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1512 = new TH1F("Graph_Graph_from_mc_statistical_error1512","",100,0,1.1);
   Graph_Graph_from_mc_statistical_error1512->SetMinimum(0);
   Graph_Graph_from_mc_statistical_error1512->SetMaximum(2.2);
   Graph_Graph_from_mc_statistical_error1512->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1512->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1512->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1512->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1512->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1512->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1512->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1512->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1512->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1512->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1512->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1512->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1512->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1512->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1512->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1512->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1512);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,1,1);
   line->Draw();
   bottomPad->Modified();
   Aplanarity_both_all->cd();
   Aplanarity_both_all->Modified();
   Aplanarity_both_all->cd();
   Aplanarity_both_all->SetSelected(Aplanarity_both_all);
}
