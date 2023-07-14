void Sphericity_both_16()
{
//=========Macro generated from canvas: Sphericity_both_16/Sphericity_both_16
//=========  (Fri Jul 14 13:38:55 2023) by ROOT version 6.14/09
   TCanvas *Sphericity_both_16 = new TCanvas("Sphericity_both_16", "Sphericity_both_16",0,0,600,600);
   Sphericity_both_16->SetHighLightColor(2);
   Sphericity_both_16->Range(0,0,1,1);
   Sphericity_both_16->SetFillColor(0);
   Sphericity_both_16->SetFillStyle(4000);
   Sphericity_both_16->SetBorderMode(0);
   Sphericity_both_16->SetBorderSize(2);
   Sphericity_both_16->SetFrameFillStyle(1000);
   Sphericity_both_16->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.1532254,-1935.554,1.052419,1933628);
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
   st->SetMaximum(1657211);
   
   TH1F *st_stack_249 = new TH1F("st_stack_249","",25,0,1);
   st_stack_249->SetMinimum(0.01);
   st_stack_249->SetMaximum(1740072);
   st_stack_249->SetDirectory(0);
   st_stack_249->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_249->SetLineColor(ci);
   st_stack_249->GetXaxis()->SetRange(1,25);
   st_stack_249->GetXaxis()->SetLabelFont(42);
   st_stack_249->GetXaxis()->SetLabelSize(0.035);
   st_stack_249->GetXaxis()->SetTitleSize(0.035);
   st_stack_249->GetXaxis()->SetTitleFont(42);
   st_stack_249->GetYaxis()->SetTitle("Events/0.04");
   st_stack_249->GetYaxis()->SetLabelFont(42);
   st_stack_249->GetYaxis()->SetLabelSize(0.05);
   st_stack_249->GetYaxis()->SetTitleSize(0.057);
   st_stack_249->GetYaxis()->SetTitleOffset(1.2);
   st_stack_249->GetYaxis()->SetTitleFont(42);
   st_stack_249->GetZaxis()->SetLabelFont(42);
   st_stack_249->GetZaxis()->SetLabelSize(0.035);
   st_stack_249->GetZaxis()->SetTitleSize(0.035);
   st_stack_249->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_249);
   
   
   TH1D *VbbHcc_both_Sphericity_stack_1 = new TH1D("VbbHcc_both_Sphericity_stack_1","",25,0,1);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(1,584109.7);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(2,630701.2);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(3,416099);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(4,284284.5);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(5,208771.4);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(6,155449.4);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(7,116261.7);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(8,93056.69);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(9,77458.83);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(10,53733.35);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(11,50449.03);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(12,42315);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(13,29883.71);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(14,24819.39);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(15,23407.41);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(16,14273);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(17,17990.59);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(18,8896.826);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(19,5887.738);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(20,3309.884);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(21,679.4953);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(22,689.2077);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(23,8.146095);
   VbbHcc_both_Sphericity_stack_1->SetBinError(1,26212.09);
   VbbHcc_both_Sphericity_stack_1->SetBinError(2,26177.57);
   VbbHcc_both_Sphericity_stack_1->SetBinError(3,23923.11);
   VbbHcc_both_Sphericity_stack_1->SetBinError(4,9657.003);
   VbbHcc_both_Sphericity_stack_1->SetBinError(5,8084.534);
   VbbHcc_both_Sphericity_stack_1->SetBinError(6,7005.657);
   VbbHcc_both_Sphericity_stack_1->SetBinError(7,5537.302);
   VbbHcc_both_Sphericity_stack_1->SetBinError(8,4432.041);
   VbbHcc_both_Sphericity_stack_1->SetBinError(9,4856.552);
   VbbHcc_both_Sphericity_stack_1->SetBinError(10,4121.375);
   VbbHcc_both_Sphericity_stack_1->SetBinError(11,3239.406);
   VbbHcc_both_Sphericity_stack_1->SetBinError(12,3297.497);
   VbbHcc_both_Sphericity_stack_1->SetBinError(13,2615.962);
   VbbHcc_both_Sphericity_stack_1->SetBinError(14,2397.571);
   VbbHcc_both_Sphericity_stack_1->SetBinError(15,2041.262);
   VbbHcc_both_Sphericity_stack_1->SetBinError(16,1471.728);
   VbbHcc_both_Sphericity_stack_1->SetBinError(17,2782.665);
   VbbHcc_both_Sphericity_stack_1->SetBinError(18,1207.163);
   VbbHcc_both_Sphericity_stack_1->SetBinError(19,1070.612);
   VbbHcc_both_Sphericity_stack_1->SetBinError(20,1582.501);
   VbbHcc_both_Sphericity_stack_1->SetBinError(21,251.0123);
   VbbHcc_both_Sphericity_stack_1->SetBinError(22,409.9983);
   VbbHcc_both_Sphericity_stack_1->SetBinError(23,7.413752);
   VbbHcc_both_Sphericity_stack_1->SetEntries(182810);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_both_Sphericity_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Sphericity_stack_1->SetLineColor(ci);
   VbbHcc_both_Sphericity_stack_1->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Sphericity_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Sphericity_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Sphericity_stack_1,"");
   
   TH1D *VbbHcc_both_Sphericity_stack_2 = new TH1D("VbbHcc_both_Sphericity_stack_2","",25,0,1);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(1,5786.266);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(2,5835.666);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(3,4104.764);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(4,2929.894);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(5,2155.551);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(6,1641.453);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(7,1280.705);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(8,1009.208);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(9,820.1869);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(10,653.0788);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(11,523.6829);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(12,457.4829);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(13,383.4164);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(14,312.9029);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(15,248.7252);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(16,205.5532);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(17,146.6349);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(18,115.5101);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(19,66.31826);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(20,31.48397);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(21,11.27166);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(22,2.743905);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(23,1.515408);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(24,0.04716519);
   VbbHcc_both_Sphericity_stack_2->SetBinError(1,31.63401);
   VbbHcc_both_Sphericity_stack_2->SetBinError(2,31.16517);
   VbbHcc_both_Sphericity_stack_2->SetBinError(3,26.4241);
   VbbHcc_both_Sphericity_stack_2->SetBinError(4,22.7339);
   VbbHcc_both_Sphericity_stack_2->SetBinError(5,19.7376);
   VbbHcc_both_Sphericity_stack_2->SetBinError(6,17.50074);
   VbbHcc_both_Sphericity_stack_2->SetBinError(7,15.49873);
   VbbHcc_both_Sphericity_stack_2->SetBinError(8,13.96759);
   VbbHcc_both_Sphericity_stack_2->SetBinError(9,12.70855);
   VbbHcc_both_Sphericity_stack_2->SetBinError(10,11.44802);
   VbbHcc_both_Sphericity_stack_2->SetBinError(11,10.19836);
   VbbHcc_both_Sphericity_stack_2->SetBinError(12,9.664999);
   VbbHcc_both_Sphericity_stack_2->SetBinError(13,8.897304);
   VbbHcc_both_Sphericity_stack_2->SetBinError(14,8.040499);
   VbbHcc_both_Sphericity_stack_2->SetBinError(15,7.185736);
   VbbHcc_both_Sphericity_stack_2->SetBinError(16,6.541842);
   VbbHcc_both_Sphericity_stack_2->SetBinError(17,5.552628);
   VbbHcc_both_Sphericity_stack_2->SetBinError(18,4.979255);
   VbbHcc_both_Sphericity_stack_2->SetBinError(19,3.730624);
   VbbHcc_both_Sphericity_stack_2->SetBinError(20,2.560152);
   VbbHcc_both_Sphericity_stack_2->SetBinError(21,1.511999);
   VbbHcc_both_Sphericity_stack_2->SetBinError(22,0.6670046);
   VbbHcc_both_Sphericity_stack_2->SetBinError(23,0.5836386);
   VbbHcc_both_Sphericity_stack_2->SetBinError(24,0.04716519);
   VbbHcc_both_Sphericity_stack_2->SetEntries(401943);

   ci = TColor::GetColor("#660066");
   VbbHcc_both_Sphericity_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Sphericity_stack_2->SetLineColor(ci);
   VbbHcc_both_Sphericity_stack_2->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Sphericity_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Sphericity_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Sphericity_stack_2,"");
   
   TH1D *VbbHcc_both_Sphericity_stack_3 = new TH1D("VbbHcc_both_Sphericity_stack_3","",25,0,1);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(1,92700.77);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(2,102510.7);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(3,72543.98);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(4,52470.94);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(5,39124.56);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(6,29717.46);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(7,23075.61);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(8,18197.46);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(9,14593.8);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(10,11798.22);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(11,9611.144);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(12,7923.753);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(13,6524.385);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(14,5340.619);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(15,4355.694);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(16,3467.095);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(17,2667.068);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(18,1900.407);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(19,1135.714);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(20,543.9528);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(21,220.8955);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(22,74.02915);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(23,17.47047);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(24,3.059877);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(25,0.09841009);
   VbbHcc_both_Sphericity_stack_3->SetBinError(1,78.68743);
   VbbHcc_both_Sphericity_stack_3->SetBinError(2,82.85206);
   VbbHcc_both_Sphericity_stack_3->SetBinError(3,69.8143);
   VbbHcc_both_Sphericity_stack_3->SetBinError(4,59.45167);
   VbbHcc_both_Sphericity_stack_3->SetBinError(5,51.39687);
   VbbHcc_both_Sphericity_stack_3->SetBinError(6,44.82943);
   VbbHcc_both_Sphericity_stack_3->SetBinError(7,39.5072);
   VbbHcc_both_Sphericity_stack_3->SetBinError(8,35.09826);
   VbbHcc_both_Sphericity_stack_3->SetBinError(9,31.42848);
   VbbHcc_both_Sphericity_stack_3->SetBinError(10,28.25712);
   VbbHcc_both_Sphericity_stack_3->SetBinError(11,25.51389);
   VbbHcc_both_Sphericity_stack_3->SetBinError(12,23.17417);
   VbbHcc_both_Sphericity_stack_3->SetBinError(13,21.01496);
   VbbHcc_both_Sphericity_stack_3->SetBinError(14,19.01739);
   VbbHcc_both_Sphericity_stack_3->SetBinError(15,17.17465);
   VbbHcc_both_Sphericity_stack_3->SetBinError(16,15.33323);
   VbbHcc_both_Sphericity_stack_3->SetBinError(17,13.44902);
   VbbHcc_both_Sphericity_stack_3->SetBinError(18,11.34877);
   VbbHcc_both_Sphericity_stack_3->SetBinError(19,8.764997);
   VbbHcc_both_Sphericity_stack_3->SetBinError(20,6.070705);
   VbbHcc_both_Sphericity_stack_3->SetBinError(21,3.87739);
   VbbHcc_both_Sphericity_stack_3->SetBinError(22,2.245987);
   VbbHcc_both_Sphericity_stack_3->SetBinError(23,1.090009);
   VbbHcc_both_Sphericity_stack_3->SetBinError(24,0.4619861);
   VbbHcc_both_Sphericity_stack_3->SetBinError(25,0.07014583);
   VbbHcc_both_Sphericity_stack_3->SetEntries(7926175);

   ci = TColor::GetColor("#cc00cc");
   VbbHcc_both_Sphericity_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Sphericity_stack_3->SetLineColor(ci);
   VbbHcc_both_Sphericity_stack_3->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Sphericity_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_3->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_3->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_3->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_3->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_3->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Sphericity_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_3->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_3->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Sphericity_stack_3,"");
   
   TH1D *VbbHcc_both_Sphericity_stack_4 = new TH1D("VbbHcc_both_Sphericity_stack_4","",25,0,1);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(1,3961.96);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(2,4083.932);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(3,2980.549);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(4,2161.751);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(5,1747.319);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(6,1338.382);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(7,1077.434);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(8,843.9311);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(9,746.741);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(10,592.3637);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(11,479.4325);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(12,382.6177);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(13,349.6236);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(14,283.5824);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(15,257.4044);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(16,190.2816);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(17,149.9469);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(18,104.0802);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(19,51.48215);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(20,22.90961);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(21,7.072683);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(22,2.002183);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(23,0.5787168);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(24,0.0855621);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(25,0.08144662);
   VbbHcc_both_Sphericity_stack_4->SetBinError(1,45.51432);
   VbbHcc_both_Sphericity_stack_4->SetBinError(2,50.09207);
   VbbHcc_both_Sphericity_stack_4->SetBinError(3,43.48993);
   VbbHcc_both_Sphericity_stack_4->SetBinError(4,34.57782);
   VbbHcc_both_Sphericity_stack_4->SetBinError(5,34.18592);
   VbbHcc_both_Sphericity_stack_4->SetBinError(6,28.91992);
   VbbHcc_both_Sphericity_stack_4->SetBinError(7,26.47525);
   VbbHcc_both_Sphericity_stack_4->SetBinError(8,22.01799);
   VbbHcc_both_Sphericity_stack_4->SetBinError(9,23.06406);
   VbbHcc_both_Sphericity_stack_4->SetBinError(10,19.31039);
   VbbHcc_both_Sphericity_stack_4->SetBinError(11,15.98315);
   VbbHcc_both_Sphericity_stack_4->SetBinError(12,13.42397);
   VbbHcc_both_Sphericity_stack_4->SetBinError(13,14.04157);
   VbbHcc_both_Sphericity_stack_4->SetBinError(14,13.55526);
   VbbHcc_both_Sphericity_stack_4->SetBinError(15,13.84549);
   VbbHcc_both_Sphericity_stack_4->SetBinError(16,11.03702);
   VbbHcc_both_Sphericity_stack_4->SetBinError(17,10.26814);
   VbbHcc_both_Sphericity_stack_4->SetBinError(18,9.497798);
   VbbHcc_both_Sphericity_stack_4->SetBinError(19,5.091418);
   VbbHcc_both_Sphericity_stack_4->SetBinError(20,3.875649);
   VbbHcc_both_Sphericity_stack_4->SetBinError(21,1.166823);
   VbbHcc_both_Sphericity_stack_4->SetBinError(22,0.6708523);
   VbbHcc_both_Sphericity_stack_4->SetBinError(23,0.3552115);
   VbbHcc_both_Sphericity_stack_4->SetBinError(24,0.0855621);
   VbbHcc_both_Sphericity_stack_4->SetBinError(25,0.08144662);
   VbbHcc_both_Sphericity_stack_4->SetEntries(171964);

   ci = TColor::GetColor("#00cccc");
   VbbHcc_both_Sphericity_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Sphericity_stack_4->SetLineColor(ci);
   VbbHcc_both_Sphericity_stack_4->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Sphericity_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_4->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_4->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_4->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_4->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_4->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Sphericity_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_4->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_4->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Sphericity_stack_4,"");
   
   TH1D *VbbHcc_both_Sphericity_stack_5 = new TH1D("VbbHcc_both_Sphericity_stack_5","",25,0,1);
   VbbHcc_both_Sphericity_stack_5->SetBinContent(1,2527.681);
   VbbHcc_both_Sphericity_stack_5->SetBinContent(2,2510.252);
   VbbHcc_both_Sphericity_stack_5->SetBinContent(3,1686.892);
   VbbHcc_both_Sphericity_stack_5->SetBinContent(4,1265.805);
   VbbHcc_both_Sphericity_stack_5->SetBinContent(5,919.2812);
   VbbHcc_both_Sphericity_stack_5->SetBinContent(6,757.9868);
   VbbHcc_both_Sphericity_stack_5->SetBinContent(7,566.5145);
   VbbHcc_both_Sphericity_stack_5->SetBinContent(8,491.4357);
   VbbHcc_both_Sphericity_stack_5->SetBinContent(9,345.8546);
   VbbHcc_both_Sphericity_stack_5->SetBinContent(10,300.8011);
   VbbHcc_both_Sphericity_stack_5->SetBinContent(11,267.3146);
   VbbHcc_both_Sphericity_stack_5->SetBinContent(12,219.7338);
   VbbHcc_both_Sphericity_stack_5->SetBinContent(13,177.2273);
   VbbHcc_both_Sphericity_stack_5->SetBinContent(14,139.3688);
   VbbHcc_both_Sphericity_stack_5->SetBinContent(15,101.3595);
   VbbHcc_both_Sphericity_stack_5->SetBinContent(16,94.90031);
   VbbHcc_both_Sphericity_stack_5->SetBinContent(17,52.02493);
   VbbHcc_both_Sphericity_stack_5->SetBinContent(18,48.31041);
   VbbHcc_both_Sphericity_stack_5->SetBinContent(19,32.68316);
   VbbHcc_both_Sphericity_stack_5->SetBinContent(20,16.59082);
   VbbHcc_both_Sphericity_stack_5->SetBinContent(21,1.731759);
   VbbHcc_both_Sphericity_stack_5->SetBinContent(22,0.3142284);
   VbbHcc_both_Sphericity_stack_5->SetBinContent(23,0.4100734);
   VbbHcc_both_Sphericity_stack_5->SetBinError(1,55.93039);
   VbbHcc_both_Sphericity_stack_5->SetBinError(2,63.28917);
   VbbHcc_both_Sphericity_stack_5->SetBinError(3,46.05621);
   VbbHcc_both_Sphericity_stack_5->SetBinError(4,44.71907);
   VbbHcc_both_Sphericity_stack_5->SetBinError(5,35.10091);
   VbbHcc_both_Sphericity_stack_5->SetBinError(6,35.77327);
   VbbHcc_both_Sphericity_stack_5->SetBinError(7,24.80692);
   VbbHcc_both_Sphericity_stack_5->SetBinError(8,28.98202);
   VbbHcc_both_Sphericity_stack_5->SetBinError(9,15.88906);
   VbbHcc_both_Sphericity_stack_5->SetBinError(10,18.32798);
   VbbHcc_both_Sphericity_stack_5->SetBinError(11,22.15886);
   VbbHcc_both_Sphericity_stack_5->SetBinError(12,15.80409);
   VbbHcc_both_Sphericity_stack_5->SetBinError(13,14.89043);
   VbbHcc_both_Sphericity_stack_5->SetBinError(14,12.59577);
   VbbHcc_both_Sphericity_stack_5->SetBinError(15,9.311428);
   VbbHcc_both_Sphericity_stack_5->SetBinError(16,12.83075);
   VbbHcc_both_Sphericity_stack_5->SetBinError(17,7.042471);
   VbbHcc_both_Sphericity_stack_5->SetBinError(18,8.169741);
   VbbHcc_both_Sphericity_stack_5->SetBinError(19,8.327602);
   VbbHcc_both_Sphericity_stack_5->SetBinError(20,6.969604);
   VbbHcc_both_Sphericity_stack_5->SetBinError(21,1.01853);
   VbbHcc_both_Sphericity_stack_5->SetBinError(22,0.1571547);
   VbbHcc_both_Sphericity_stack_5->SetBinError(23,0.2469001);
   VbbHcc_both_Sphericity_stack_5->SetEntries(118385);

   ci = TColor::GetColor("#ff99cc");
   VbbHcc_both_Sphericity_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Sphericity_stack_5->SetLineColor(ci);
   VbbHcc_both_Sphericity_stack_5->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Sphericity_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_5->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_5->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_5->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_5->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_5->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Sphericity_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_5->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_5->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Sphericity_stack_5,"");
   
   TH1D *VbbHcc_both_Sphericity_stack_6 = new TH1D("VbbHcc_both_Sphericity_stack_6","",25,0,1);
   VbbHcc_both_Sphericity_stack_6->SetBinContent(1,14.06699);
   VbbHcc_both_Sphericity_stack_6->SetBinContent(2,12.54008);
   VbbHcc_both_Sphericity_stack_6->SetBinContent(3,9.304335);
   VbbHcc_both_Sphericity_stack_6->SetBinContent(4,6.962798);
   VbbHcc_both_Sphericity_stack_6->SetBinContent(5,5.804918);
   VbbHcc_both_Sphericity_stack_6->SetBinContent(6,4.784419);
   VbbHcc_both_Sphericity_stack_6->SetBinContent(7,3.136704);
   VbbHcc_both_Sphericity_stack_6->SetBinContent(8,2.545505);
   VbbHcc_both_Sphericity_stack_6->SetBinContent(9,1.483075);
   VbbHcc_both_Sphericity_stack_6->SetBinContent(10,1.5707);
   VbbHcc_both_Sphericity_stack_6->SetBinContent(11,1.348842);
   VbbHcc_both_Sphericity_stack_6->SetBinContent(12,1.435168);
   VbbHcc_both_Sphericity_stack_6->SetBinContent(13,1.099806);
   VbbHcc_both_Sphericity_stack_6->SetBinContent(14,1.364247);
   VbbHcc_both_Sphericity_stack_6->SetBinContent(15,0.6840238);
   VbbHcc_both_Sphericity_stack_6->SetBinContent(16,0.3919414);
   VbbHcc_both_Sphericity_stack_6->SetBinContent(17,0.6205097);
   VbbHcc_both_Sphericity_stack_6->SetBinContent(18,0.2881463);
   VbbHcc_both_Sphericity_stack_6->SetBinContent(19,0.1948688);
   VbbHcc_both_Sphericity_stack_6->SetBinError(1,1.125777);
   VbbHcc_both_Sphericity_stack_6->SetBinError(2,1.068258);
   VbbHcc_both_Sphericity_stack_6->SetBinError(3,0.9191057);
   VbbHcc_both_Sphericity_stack_6->SetBinError(4,0.7934519);
   VbbHcc_both_Sphericity_stack_6->SetBinError(5,0.7344591);
   VbbHcc_both_Sphericity_stack_6->SetBinError(6,0.6585795);
   VbbHcc_both_Sphericity_stack_6->SetBinError(7,0.5389676);
   VbbHcc_both_Sphericity_stack_6->SetBinError(8,0.4787668);
   VbbHcc_both_Sphericity_stack_6->SetBinError(9,0.3626417);
   VbbHcc_both_Sphericity_stack_6->SetBinError(10,0.3815734);
   VbbHcc_both_Sphericity_stack_6->SetBinError(11,0.349439);
   VbbHcc_both_Sphericity_stack_6->SetBinError(12,0.3628848);
   VbbHcc_both_Sphericity_stack_6->SetBinError(13,0.3184679);
   VbbHcc_both_Sphericity_stack_6->SetBinError(14,0.3530045);
   VbbHcc_both_Sphericity_stack_6->SetBinError(15,0.2427317);
   VbbHcc_both_Sphericity_stack_6->SetBinError(16,0.1961835);
   VbbHcc_both_Sphericity_stack_6->SetBinError(17,0.2366435);
   VbbHcc_both_Sphericity_stack_6->SetBinError(18,0.1666534);
   VbbHcc_both_Sphericity_stack_6->SetBinError(19,0.1380209);
   VbbHcc_both_Sphericity_stack_6->SetEntries(777);

   ci = TColor::GetColor("#9933ff");
   VbbHcc_both_Sphericity_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Sphericity_stack_6->SetLineColor(ci);
   VbbHcc_both_Sphericity_stack_6->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Sphericity_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Sphericity_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Sphericity_stack_6,"");
   
   TH1D *VbbHcc_both_Sphericity_stack_7 = new TH1D("VbbHcc_both_Sphericity_stack_7","",25,0,1);
   VbbHcc_both_Sphericity_stack_7->SetBinContent(1,31.84806);
   VbbHcc_both_Sphericity_stack_7->SetBinContent(2,29.6058);
   VbbHcc_both_Sphericity_stack_7->SetBinContent(3,26.07568);
   VbbHcc_both_Sphericity_stack_7->SetBinContent(4,15.97012);
   VbbHcc_both_Sphericity_stack_7->SetBinContent(5,14.75202);
   VbbHcc_both_Sphericity_stack_7->SetBinContent(6,10.94789);
   VbbHcc_both_Sphericity_stack_7->SetBinContent(7,6.458526);
   VbbHcc_both_Sphericity_stack_7->SetBinContent(8,5.275674);
   VbbHcc_both_Sphericity_stack_7->SetBinContent(9,5.904542);
   VbbHcc_both_Sphericity_stack_7->SetBinContent(10,4.850937);
   VbbHcc_both_Sphericity_stack_7->SetBinContent(11,4.557652);
   VbbHcc_both_Sphericity_stack_7->SetBinContent(12,3.446377);
   VbbHcc_both_Sphericity_stack_7->SetBinContent(13,2.673256);
   VbbHcc_both_Sphericity_stack_7->SetBinContent(14,1.650887);
   VbbHcc_both_Sphericity_stack_7->SetBinContent(15,2.264667);
   VbbHcc_both_Sphericity_stack_7->SetBinContent(16,1.467569);
   VbbHcc_both_Sphericity_stack_7->SetBinContent(17,1.259794);
   VbbHcc_both_Sphericity_stack_7->SetBinContent(18,1.264712);
   VbbHcc_both_Sphericity_stack_7->SetBinContent(19,0.5578024);
   VbbHcc_both_Sphericity_stack_7->SetBinContent(20,0.2189257);
   VbbHcc_both_Sphericity_stack_7->SetBinError(1,1.467939);
   VbbHcc_both_Sphericity_stack_7->SetBinError(2,1.417484);
   VbbHcc_both_Sphericity_stack_7->SetBinError(3,1.333402);
   VbbHcc_both_Sphericity_stack_7->SetBinError(4,1.045701);
   VbbHcc_both_Sphericity_stack_7->SetBinError(5,1.006655);
   VbbHcc_both_Sphericity_stack_7->SetBinError(6,0.8644621);
   VbbHcc_both_Sphericity_stack_7->SetBinError(7,0.66746);
   VbbHcc_both_Sphericity_stack_7->SetBinError(8,0.5986563);
   VbbHcc_both_Sphericity_stack_7->SetBinError(9,0.6360745);
   VbbHcc_both_Sphericity_stack_7->SetBinError(10,0.5786536);
   VbbHcc_both_Sphericity_stack_7->SetBinError(11,0.5581925);
   VbbHcc_both_Sphericity_stack_7->SetBinError(12,0.4834329);
   VbbHcc_both_Sphericity_stack_7->SetBinError(13,0.4247914);
   VbbHcc_both_Sphericity_stack_7->SetBinError(14,0.3381668);
   VbbHcc_both_Sphericity_stack_7->SetBinError(15,0.3955431);
   VbbHcc_both_Sphericity_stack_7->SetBinError(16,0.3153777);
   VbbHcc_both_Sphericity_stack_7->SetBinError(17,0.2919952);
   VbbHcc_both_Sphericity_stack_7->SetBinError(18,0.2923726);
   VbbHcc_both_Sphericity_stack_7->SetBinError(19,0.1974582);
   VbbHcc_both_Sphericity_stack_7->SetBinError(20,0.1158346);
   VbbHcc_both_Sphericity_stack_7->SetEntries(2557);

   ci = TColor::GetColor("#3399ff");
   VbbHcc_both_Sphericity_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Sphericity_stack_7->SetLineColor(ci);
   VbbHcc_both_Sphericity_stack_7->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Sphericity_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Sphericity_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Sphericity_stack_7,"");
   
   TH1D *VbbHcc_both_Sphericity_stack_8 = new TH1D("VbbHcc_both_Sphericity_stack_8","",25,0,1);
   VbbHcc_both_Sphericity_stack_8->SetBinContent(1,27.97545);
   VbbHcc_both_Sphericity_stack_8->SetBinContent(2,32.43882);
   VbbHcc_both_Sphericity_stack_8->SetBinContent(3,23.94263);
   VbbHcc_both_Sphericity_stack_8->SetBinContent(4,15.11499);
   VbbHcc_both_Sphericity_stack_8->SetBinContent(5,12.13295);
   VbbHcc_both_Sphericity_stack_8->SetBinContent(6,12.52773);
   VbbHcc_both_Sphericity_stack_8->SetBinContent(7,7.948259);
   VbbHcc_both_Sphericity_stack_8->SetBinContent(8,5.672611);
   VbbHcc_both_Sphericity_stack_8->SetBinContent(9,3.758487);
   VbbHcc_both_Sphericity_stack_8->SetBinContent(10,3.083302);
   VbbHcc_both_Sphericity_stack_8->SetBinContent(11,4.905087);
   VbbHcc_both_Sphericity_stack_8->SetBinContent(12,3.022527);
   VbbHcc_both_Sphericity_stack_8->SetBinContent(13,2.859432);
   VbbHcc_both_Sphericity_stack_8->SetBinContent(14,1.688752);
   VbbHcc_both_Sphericity_stack_8->SetBinContent(15,2.191378);
   VbbHcc_both_Sphericity_stack_8->SetBinContent(16,1.424763);
   VbbHcc_both_Sphericity_stack_8->SetBinContent(17,0.9541798);
   VbbHcc_both_Sphericity_stack_8->SetBinContent(18,0.4880635);
   VbbHcc_both_Sphericity_stack_8->SetBinContent(19,0.949148);
   VbbHcc_both_Sphericity_stack_8->SetBinContent(20,0.1924008);
   VbbHcc_both_Sphericity_stack_8->SetBinError(1,2.301871);
   VbbHcc_both_Sphericity_stack_8->SetBinError(2,2.481915);
   VbbHcc_both_Sphericity_stack_8->SetBinError(3,2.134669);
   VbbHcc_both_Sphericity_stack_8->SetBinError(4,1.698716);
   VbbHcc_both_Sphericity_stack_8->SetBinError(5,1.533396);
   VbbHcc_both_Sphericity_stack_8->SetBinError(6,1.548851);
   VbbHcc_both_Sphericity_stack_8->SetBinError(7,1.233688);
   VbbHcc_both_Sphericity_stack_8->SetBinError(8,1.054933);
   VbbHcc_both_Sphericity_stack_8->SetBinError(9,0.8641416);
   VbbHcc_both_Sphericity_stack_8->SetBinError(10,0.7738283);
   VbbHcc_both_Sphericity_stack_8->SetBinError(11,0.9669171);
   VbbHcc_both_Sphericity_stack_8->SetBinError(12,0.7619814);
   VbbHcc_both_Sphericity_stack_8->SetBinError(13,0.7650723);
   VbbHcc_both_Sphericity_stack_8->SetBinError(14,0.5677316);
   VbbHcc_both_Sphericity_stack_8->SetBinError(15,0.6629899);
   VbbHcc_both_Sphericity_stack_8->SetBinError(16,0.5391083);
   VbbHcc_both_Sphericity_stack_8->SetBinError(17,0.4274052);
   VbbHcc_both_Sphericity_stack_8->SetBinError(18,0.2971272);
   VbbHcc_both_Sphericity_stack_8->SetBinError(19,0.4245617);
   VbbHcc_both_Sphericity_stack_8->SetBinError(20,0.1924008);
   VbbHcc_both_Sphericity_stack_8->SetEntries(868);

   ci = TColor::GetColor("#33ff99");
   VbbHcc_both_Sphericity_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Sphericity_stack_8->SetLineColor(ci);
   VbbHcc_both_Sphericity_stack_8->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Sphericity_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Sphericity_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Sphericity_stack_8,"");
   
   TH1D *VbbHcc_both_Sphericity_stack_9 = new TH1D("VbbHcc_both_Sphericity_stack_9","",25,0,1);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(1,16.77013);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(2,18.68419);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(3,13.66032);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(4,10.66381);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(5,8.354031);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(6,6.647748);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(7,5.461298);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(8,4.466439);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(9,3.804016);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(10,3.04424);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(11,2.490704);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(12,2.204534);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(13,1.89456);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(14,1.569893);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(15,1.200696);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(16,0.9325618);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(17,0.6820204);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(18,0.4717538);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(19,0.3070009);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(20,0.1434656);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(21,0.04832821);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(22,0.01248195);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(23,0.003077613);
   VbbHcc_both_Sphericity_stack_9->SetBinError(1,0.1585259);
   VbbHcc_both_Sphericity_stack_9->SetBinError(2,0.1675772);
   VbbHcc_both_Sphericity_stack_9->SetBinError(3,0.1433532);
   VbbHcc_both_Sphericity_stack_9->SetBinError(4,0.1265079);
   VbbHcc_both_Sphericity_stack_9->SetBinError(5,0.1123608);
   VbbHcc_both_Sphericity_stack_9->SetBinError(6,0.1005975);
   VbbHcc_both_Sphericity_stack_9->SetBinError(7,0.09082909);
   VbbHcc_both_Sphericity_stack_9->SetBinError(8,0.08214634);
   VbbHcc_both_Sphericity_stack_9->SetBinError(9,0.07587603);
   VbbHcc_both_Sphericity_stack_9->SetBinError(10,0.0677437);
   VbbHcc_both_Sphericity_stack_9->SetBinError(11,0.06135254);
   VbbHcc_both_Sphericity_stack_9->SetBinError(12,0.05769127);
   VbbHcc_both_Sphericity_stack_9->SetBinError(13,0.05339193);
   VbbHcc_both_Sphericity_stack_9->SetBinError(14,0.04888721);
   VbbHcc_both_Sphericity_stack_9->SetBinError(15,0.04261416);
   VbbHcc_both_Sphericity_stack_9->SetBinError(16,0.0376341);
   VbbHcc_both_Sphericity_stack_9->SetBinError(17,0.0322219);
   VbbHcc_both_Sphericity_stack_9->SetBinError(18,0.02660252);
   VbbHcc_both_Sphericity_stack_9->SetBinError(19,0.02135652);
   VbbHcc_both_Sphericity_stack_9->SetBinError(20,0.01478284);
   VbbHcc_both_Sphericity_stack_9->SetBinError(21,0.008550311);
   VbbHcc_both_Sphericity_stack_9->SetBinError(22,0.004418277);
   VbbHcc_both_Sphericity_stack_9->SetBinError(23,0.00217999);
   VbbHcc_both_Sphericity_stack_9->SetEntries(72695);

   ci = TColor::GetColor("#cccc00");
   VbbHcc_both_Sphericity_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Sphericity_stack_9->SetLineColor(ci);
   VbbHcc_both_Sphericity_stack_9->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Sphericity_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_9->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_9->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_9->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_9->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_9->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Sphericity_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_9->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_9->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Sphericity_stack_9,"");
   
   TH1D *VbbHcc_both_Sphericity_stack_10 = new TH1D("VbbHcc_both_Sphericity_stack_10","",25,0,1);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(1,9.226672);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(2,9.373891);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(3,6.648149);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(4,4.976602);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(5,3.883341);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(6,3.177413);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(7,2.610513);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(8,2.135577);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(9,1.776288);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(10,1.545972);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(11,1.281751);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(12,1.088883);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(13,0.9323543);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(14,0.7809685);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(15,0.6601356);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(16,0.4793755);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(17,0.3807634);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(18,0.2835778);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(19,0.1560004);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(20,0.06107933);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(21,0.01925678);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(22,0.004715975);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(23,0.0007596086);
   VbbHcc_both_Sphericity_stack_10->SetBinError(1,0.05922969);
   VbbHcc_both_Sphericity_stack_10->SetBinError(2,0.05976352);
   VbbHcc_both_Sphericity_stack_10->SetBinError(3,0.05037321);
   VbbHcc_both_Sphericity_stack_10->SetBinError(4,0.04363025);
   VbbHcc_both_Sphericity_stack_10->SetBinError(5,0.03855835);
   VbbHcc_both_Sphericity_stack_10->SetBinError(6,0.034927);
   VbbHcc_both_Sphericity_stack_10->SetBinError(7,0.03166052);
   VbbHcc_both_Sphericity_stack_10->SetBinError(8,0.02863988);
   VbbHcc_both_Sphericity_stack_10->SetBinError(9,0.02613285);
   VbbHcc_both_Sphericity_stack_10->SetBinError(10,0.02437984);
   VbbHcc_both_Sphericity_stack_10->SetBinError(11,0.02219515);
   VbbHcc_both_Sphericity_stack_10->SetBinError(12,0.02045069);
   VbbHcc_both_Sphericity_stack_10->SetBinError(13,0.0189252);
   VbbHcc_both_Sphericity_stack_10->SetBinError(14,0.01730656);
   VbbHcc_both_Sphericity_stack_10->SetBinError(15,0.01594418);
   VbbHcc_both_Sphericity_stack_10->SetBinError(16,0.01356651);
   VbbHcc_both_Sphericity_stack_10->SetBinError(17,0.01210091);
   VbbHcc_both_Sphericity_stack_10->SetBinError(18,0.01043115);
   VbbHcc_both_Sphericity_stack_10->SetBinError(19,0.007743035);
   VbbHcc_both_Sphericity_stack_10->SetBinError(20,0.004842025);
   VbbHcc_both_Sphericity_stack_10->SetBinError(21,0.002737251);
   VbbHcc_both_Sphericity_stack_10->SetBinError(22,0.001365783);
   VbbHcc_both_Sphericity_stack_10->SetBinError(23,0.0005371576);
   VbbHcc_both_Sphericity_stack_10->SetEntries(137175);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_both_Sphericity_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Sphericity_stack_10->SetLineColor(ci);
   VbbHcc_both_Sphericity_stack_10->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Sphericity_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_10->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_10->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_10->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_10->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_10->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Sphericity_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_10->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_10->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Sphericity_stack_10,"");
   
   TH1D *VbbHcc_both_Sphericity_stack_11 = new TH1D("VbbHcc_both_Sphericity_stack_11","",25,0,1);
   VbbHcc_both_Sphericity_stack_11->SetBinContent(1,0.4446264);
   VbbHcc_both_Sphericity_stack_11->SetBinContent(2,0.4551414);
   VbbHcc_both_Sphericity_stack_11->SetBinContent(3,0.3196254);
   VbbHcc_both_Sphericity_stack_11->SetBinContent(4,0.2390485);
   VbbHcc_both_Sphericity_stack_11->SetBinContent(5,0.2149616);
   VbbHcc_both_Sphericity_stack_11->SetBinContent(6,0.1518859);
   VbbHcc_both_Sphericity_stack_11->SetBinContent(7,0.1264405);
   VbbHcc_both_Sphericity_stack_11->SetBinContent(8,0.1280321);
   VbbHcc_both_Sphericity_stack_11->SetBinContent(9,0.1370364);
   VbbHcc_both_Sphericity_stack_11->SetBinContent(10,0.08935465);
   VbbHcc_both_Sphericity_stack_11->SetBinContent(11,0.03782478);
   VbbHcc_both_Sphericity_stack_11->SetBinContent(12,0.05405054);
   VbbHcc_both_Sphericity_stack_11->SetBinContent(13,0.04416099);
   VbbHcc_both_Sphericity_stack_11->SetBinContent(14,0.04026474);
   VbbHcc_both_Sphericity_stack_11->SetBinContent(15,0.02585098);
   VbbHcc_both_Sphericity_stack_11->SetBinContent(16,0.03263052);
   VbbHcc_both_Sphericity_stack_11->SetBinContent(17,0.01149153);
   VbbHcc_both_Sphericity_stack_11->SetBinContent(18,0.01590101);
   VbbHcc_both_Sphericity_stack_11->SetBinContent(19,0.01106121);
   VbbHcc_both_Sphericity_stack_11->SetBinError(1,0.0361407);
   VbbHcc_both_Sphericity_stack_11->SetBinError(2,0.03676821);
   VbbHcc_both_Sphericity_stack_11->SetBinError(3,0.03091807);
   VbbHcc_both_Sphericity_stack_11->SetBinError(4,0.02659124);
   VbbHcc_both_Sphericity_stack_11->SetBinError(5,0.02501781);
   VbbHcc_both_Sphericity_stack_11->SetBinError(6,0.02163453);
   VbbHcc_both_Sphericity_stack_11->SetBinError(7,0.01923218);
   VbbHcc_both_Sphericity_stack_11->SetBinError(8,0.01949388);
   VbbHcc_both_Sphericity_stack_11->SetBinError(9,0.02004861);
   VbbHcc_both_Sphericity_stack_11->SetBinError(10,0.0166142);
   VbbHcc_both_Sphericity_stack_11->SetBinError(11,0.01119377);
   VbbHcc_both_Sphericity_stack_11->SetBinError(12,0.01275132);
   VbbHcc_both_Sphericity_stack_11->SetBinError(13,0.01152911);
   VbbHcc_both_Sphericity_stack_11->SetBinError(14,0.01080513);
   VbbHcc_both_Sphericity_stack_11->SetBinError(15,0.008662391);
   VbbHcc_both_Sphericity_stack_11->SetBinError(16,0.009846077);
   VbbHcc_both_Sphericity_stack_11->SetBinError(17,0.005637855);
   VbbHcc_both_Sphericity_stack_11->SetBinError(18,0.006789107);
   VbbHcc_both_Sphericity_stack_11->SetBinError(19,0.005544575);
   VbbHcc_both_Sphericity_stack_11->SetEntries(910);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_both_Sphericity_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Sphericity_stack_11->SetLineColor(ci);
   VbbHcc_both_Sphericity_stack_11->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Sphericity_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Sphericity_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Sphericity_stack_11,"");
   
   TH1D *VbbHcc_both_Sphericity_stack_12 = new TH1D("VbbHcc_both_Sphericity_stack_12","",25,0,1);
   VbbHcc_both_Sphericity_stack_12->SetBinContent(1,0.2022424);
   VbbHcc_both_Sphericity_stack_12->SetBinContent(2,0.210988);
   VbbHcc_both_Sphericity_stack_12->SetBinContent(3,0.1369348);
   VbbHcc_both_Sphericity_stack_12->SetBinContent(4,0.1064453);
   VbbHcc_both_Sphericity_stack_12->SetBinContent(5,0.08811593);
   VbbHcc_both_Sphericity_stack_12->SetBinContent(6,0.07154504);
   VbbHcc_both_Sphericity_stack_12->SetBinContent(7,0.05992826);
   VbbHcc_both_Sphericity_stack_12->SetBinContent(8,0.0591873);
   VbbHcc_both_Sphericity_stack_12->SetBinContent(9,0.04732609);
   VbbHcc_both_Sphericity_stack_12->SetBinContent(10,0.04493938);
   VbbHcc_both_Sphericity_stack_12->SetBinContent(11,0.03705953);
   VbbHcc_both_Sphericity_stack_12->SetBinContent(12,0.02212282);
   VbbHcc_both_Sphericity_stack_12->SetBinContent(13,0.02349182);
   VbbHcc_both_Sphericity_stack_12->SetBinContent(14,0.01952045);
   VbbHcc_both_Sphericity_stack_12->SetBinContent(15,0.01868766);
   VbbHcc_both_Sphericity_stack_12->SetBinContent(16,0.0134256);
   VbbHcc_both_Sphericity_stack_12->SetBinContent(17,0.008710717);
   VbbHcc_both_Sphericity_stack_12->SetBinContent(18,0.006088054);
   VbbHcc_both_Sphericity_stack_12->SetBinContent(19,0.001209193);
   VbbHcc_both_Sphericity_stack_12->SetBinContent(20,0.001425069);
   VbbHcc_both_Sphericity_stack_12->SetBinContent(21,0.001590923);
   VbbHcc_both_Sphericity_stack_12->SetBinError(1,0.008753419);
   VbbHcc_both_Sphericity_stack_12->SetBinError(2,0.008946577);
   VbbHcc_both_Sphericity_stack_12->SetBinError(3,0.007192978);
   VbbHcc_both_Sphericity_stack_12->SetBinError(4,0.006373114);
   VbbHcc_both_Sphericity_stack_12->SetBinError(5,0.00577819);
   VbbHcc_both_Sphericity_stack_12->SetBinError(6,0.005243897);
   VbbHcc_both_Sphericity_stack_12->SetBinError(7,0.004789505);
   VbbHcc_both_Sphericity_stack_12->SetBinError(8,0.004790185);
   VbbHcc_both_Sphericity_stack_12->SetBinError(9,0.004263335);
   VbbHcc_both_Sphericity_stack_12->SetBinError(10,0.0041494);
   VbbHcc_both_Sphericity_stack_12->SetBinError(11,0.003767214);
   VbbHcc_both_Sphericity_stack_12->SetBinError(12,0.002907585);
   VbbHcc_both_Sphericity_stack_12->SetBinError(13,0.002969843);
   VbbHcc_both_Sphericity_stack_12->SetBinError(14,0.002701868);
   VbbHcc_both_Sphericity_stack_12->SetBinError(15,0.002669816);
   VbbHcc_both_Sphericity_stack_12->SetBinError(16,0.002276213);
   VbbHcc_both_Sphericity_stack_12->SetBinError(17,0.001803222);
   VbbHcc_both_Sphericity_stack_12->SetBinError(18,0.001528639);
   VbbHcc_both_Sphericity_stack_12->SetBinError(19,0.0006992488);
   VbbHcc_both_Sphericity_stack_12->SetBinError(20,0.0007162717);
   VbbHcc_both_Sphericity_stack_12->SetBinError(21,0.000796518);
   VbbHcc_both_Sphericity_stack_12->SetEntries(3163);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_both_Sphericity_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Sphericity_stack_12->SetLineColor(ci);
   VbbHcc_both_Sphericity_stack_12->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Sphericity_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_12->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_12->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_12->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_12->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_12->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Sphericity_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_12->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_12->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Sphericity_stack_12,"");
   st->Draw("hist");
   
   TH1D *VbbHcc_both_Sphericity__497 = new TH1D("VbbHcc_both_Sphericity__497","",25,0,1);
   VbbHcc_both_Sphericity__497->SetBinContent(1,349626);
   VbbHcc_both_Sphericity__497->SetBinContent(2,317544);
   VbbHcc_both_Sphericity__497->SetBinContent(3,219014);
   VbbHcc_both_Sphericity__497->SetBinContent(4,156726);
   VbbHcc_both_Sphericity__497->SetBinContent(5,116296);
   VbbHcc_both_Sphericity__497->SetBinContent(6,89331);
   VbbHcc_both_Sphericity__497->SetBinContent(7,69880);
   VbbHcc_both_Sphericity__497->SetBinContent(8,55445);
   VbbHcc_both_Sphericity__497->SetBinContent(9,45715);
   VbbHcc_both_Sphericity__497->SetBinContent(10,37173);
   VbbHcc_both_Sphericity__497->SetBinContent(11,30847);
   VbbHcc_both_Sphericity__497->SetBinContent(12,25554);
   VbbHcc_both_Sphericity__497->SetBinContent(13,21327);
   VbbHcc_both_Sphericity__497->SetBinContent(14,17362);
   VbbHcc_both_Sphericity__497->SetBinContent(15,14174);
   VbbHcc_both_Sphericity__497->SetBinContent(16,11192);
   VbbHcc_both_Sphericity__497->SetBinContent(17,8603);
   VbbHcc_both_Sphericity__497->SetBinContent(18,5860);
   VbbHcc_both_Sphericity__497->SetBinContent(19,3254);
   VbbHcc_both_Sphericity__497->SetBinContent(20,1396);
   VbbHcc_both_Sphericity__497->SetBinContent(21,477);
   VbbHcc_both_Sphericity__497->SetBinContent(22,150);
   VbbHcc_both_Sphericity__497->SetBinContent(23,48);
   VbbHcc_both_Sphericity__497->SetBinContent(24,7);
   VbbHcc_both_Sphericity__497->SetBinContent(25,1);
   VbbHcc_both_Sphericity__497->SetEntries(1597002);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Sphericity__497->SetLineColor(ci);
   VbbHcc_both_Sphericity__497->SetLineWidth(2);
   VbbHcc_both_Sphericity__497->SetMarkerStyle(20);
   VbbHcc_both_Sphericity__497->SetMarkerSize(1.2);
   VbbHcc_both_Sphericity__497->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Sphericity__497->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity__497->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity__497->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity__497->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity__497->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity__497->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity__497->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity__497->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Sphericity__497->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity__497->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity__497->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity__497->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity__497->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity__497->Draw("same E");
   
   Double_t Graph_from_VbbHcc_both_Sphericity_fx1497[25] = {
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
   Double_t Graph_from_VbbHcc_both_Sphericity_fy1497[25] = {
   689187,
   745745,
   497495.3,
   343167,
   252763.3,
   188943,
   142287.7,
   113619,
   93982.32,
   67092.04,
   61345.26,
   51309.86,
   37327.89,
   30902.98,
   28377.64,
   18235.57,
   21010.18,
   11067.95,
   7176.113,
   3925.438,
   920.5361,
   768.3144,
   28.1246,
   3.192604,
   0.1798567};
   Double_t Graph_from_VbbHcc_both_Sphericity_fex1497[25] = {
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
   Double_t Graph_from_VbbHcc_both_Sphericity_fey1497[25] = {
   26212.33,
   26177.85,
   23923.31,
   9657.378,
   8084.87,
   7005.973,
   5537.584,
   4432.352,
   4856.752,
   4121.573,
   3239.638,
   3297.658,
   2616.142,
   2397.731,
   2041.415,
   1471.92,
   2782.731,
   1207.291,
   1070.699,
   1582.535,
   251.0516,
   410.0056,
   7.528587,
   0.472204,
   0.1074895};
   TGraphErrors *gre = new TGraphErrors(25,Graph_from_VbbHcc_both_Sphericity_fx1497,Graph_from_VbbHcc_both_Sphericity_fy1497,Graph_from_VbbHcc_both_Sphericity_fex1497,Graph_from_VbbHcc_both_Sphericity_fey1497);
   gre->SetName("Graph_from_VbbHcc_both_Sphericity");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_both_Sphericity1497 = new TH1F("Graph_Graph_from_VbbHcc_both_Sphericity1497","",100,0,1.1);
   Graph_Graph_from_VbbHcc_both_Sphericity1497->SetMinimum(0.0651305);
   Graph_Graph_from_VbbHcc_both_Sphericity1497->SetMaximum(849115.2);
   Graph_Graph_from_VbbHcc_both_Sphericity1497->SetDirectory(0);
   Graph_Graph_from_VbbHcc_both_Sphericity1497->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_both_Sphericity1497->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_both_Sphericity1497->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_both_Sphericity1497->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_both_Sphericity1497->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_both_Sphericity1497->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_both_Sphericity1497->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_both_Sphericity1497->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_both_Sphericity1497->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_both_Sphericity1497->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_VbbHcc_both_Sphericity1497->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_both_Sphericity1497->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_both_Sphericity1497->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_both_Sphericity1497->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_both_Sphericity1497->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_both_Sphericity1497);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_both_Sphericity","Data (JetHT, 2016)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.2);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_both_Sphericity_stack_12","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_both_Sphericity_stack_11","ZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_both_Sphericity_stack_10","ggZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_both_Sphericity_stack_9","ZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_both_Sphericity_stack_8","ZZ","F");

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
   entry=leg->AddEntry("VbbHcc_both_Sphericity_stack_7","WZ","F");

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
   entry=leg->AddEntry("VbbHcc_both_Sphericity_stack_6","WW","F");

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
   entry=leg->AddEntry("VbbHcc_both_Sphericity_stack_5","W + jets","F");

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
   entry=leg->AddEntry("VbbHcc_both_Sphericity_stack_4","Z + jets","F");

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
   entry=leg->AddEntry("VbbHcc_both_Sphericity_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_both_Sphericity_stack_2","Single top","F");

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
   entry=leg->AddEntry("VbbHcc_both_Sphericity_stack_1","QCD","F");

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
   entry=leg->AddEntry("Graph_from_VbbHcc_both_Sphericity","MC unc. (stat.)","fl");

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
   TLatex *   tex = new TLatex(0.5,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetLineWidth(2);
   tex->Draw();
   topPad->Modified();
   Sphericity_both_16->cd();
  
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
   
   TH1D *data_mc_ratio__498 = new TH1D("data_mc_ratio__498","",25,0,1);
   data_mc_ratio__498->SetBinContent(1,0.5073021);
   data_mc_ratio__498->SetBinContent(2,0.4258077);
   data_mc_ratio__498->SetBinContent(3,0.4402333);
   data_mc_ratio__498->SetBinContent(4,0.4567048);
   data_mc_ratio__498->SetBinContent(5,0.4600985);
   data_mc_ratio__498->SetBinContent(6,0.4727934);
   data_mc_ratio__498->SetBinContent(7,0.4911175);
   data_mc_ratio__498->SetBinContent(8,0.4879906);
   data_mc_ratio__498->SetBinContent(9,0.4864213);
   data_mc_ratio__498->SetBinContent(10,0.5540598);
   data_mc_ratio__498->SetBinContent(11,0.5028424);
   data_mc_ratio__498->SetBinContent(12,0.4980329);
   data_mc_ratio__498->SetBinContent(13,0.5713423);
   data_mc_ratio__498->SetBinContent(14,0.5618229);
   data_mc_ratio__498->SetBinContent(15,0.4994777);
   data_mc_ratio__498->SetBinContent(16,0.6137456);
   data_mc_ratio__498->SetBinContent(17,0.4094682);
   data_mc_ratio__498->SetBinContent(18,0.5294566);
   data_mc_ratio__498->SetBinContent(19,0.4534488);
   data_mc_ratio__498->SetBinContent(20,0.3556291);
   data_mc_ratio__498->SetBinContent(21,0.5181763);
   data_mc_ratio__498->SetBinContent(22,0.1952326);
   data_mc_ratio__498->SetBinContent(23,1.706691);
   data_mc_ratio__498->SetBinContent(24,2.192567);
   data_mc_ratio__498->SetBinContent(25,5.559982);
   data_mc_ratio__498->SetBinError(1,0.0008579556);
   data_mc_ratio__498->SetBinError(2,0.0007556342);
   data_mc_ratio__498->SetBinError(3,0.000940691);
   data_mc_ratio__498->SetBinError(4,0.001153626);
   data_mc_ratio__498->SetBinError(5,0.001349175);
   data_mc_ratio__498->SetBinError(6,0.001581868);
   data_mc_ratio__498->SetBinError(7,0.001857843);
   data_mc_ratio__498->SetBinError(8,0.002072432);
   data_mc_ratio__498->SetBinError(9,0.002275009);
   data_mc_ratio__498->SetBinError(10,0.002873709);
   data_mc_ratio__498->SetBinError(11,0.002863027);
   data_mc_ratio__498->SetBinError(12,0.003115506);
   data_mc_ratio__498->SetBinError(13,0.003912294);
   data_mc_ratio__498->SetBinError(14,0.004263827);
   data_mc_ratio__498->SetBinError(15,0.004195367);
   data_mc_ratio__498->SetBinError(16,0.005801423);
   data_mc_ratio__498->SetBinError(17,0.00441464);
   data_mc_ratio__498->SetBinError(18,0.006916423);
   data_mc_ratio__498->SetBinError(19,0.007949128);
   data_mc_ratio__498->SetBinError(20,0.009518194);
   data_mc_ratio__498->SetBinError(21,0.02372566);
   data_mc_ratio__498->SetBinError(22,0.01594067);
   data_mc_ratio__498->SetBinError(23,0.2463396);
   data_mc_ratio__498->SetBinError(24,0.8287126);
   data_mc_ratio__498->SetBinError(25,5.559982);
   data_mc_ratio__498->SetMinimum(0.4);
   data_mc_ratio__498->SetMaximum(1.6);
   data_mc_ratio__498->SetEntries(9.236352);
   data_mc_ratio__498->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__498->SetLineColor(ci);
   data_mc_ratio__498->SetLineWidth(2);
   data_mc_ratio__498->SetMarkerStyle(20);
   data_mc_ratio__498->SetMarkerSize(1.2);
   data_mc_ratio__498->GetXaxis()->SetTitle("Sphericity");
   data_mc_ratio__498->GetXaxis()->SetRange(1,25);
   data_mc_ratio__498->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__498->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__498->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__498->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__498->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__498->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__498->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__498->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__498->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__498->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__498->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__498->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__498->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__498->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__498->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__498->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__498->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1498[25] = {
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
   Double_t Graph_from_mc_statistical_error_fy1498[25] = {
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
   Double_t Graph_from_mc_statistical_error_fex1498[25] = {
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
   Double_t Graph_from_mc_statistical_error_fey1498[25] = {
   0.0380337,
   0.03510295,
   0.04808751,
   0.02814192,
   0.03198594,
   0.03707983,
   0.03891821,
   0.03901065,
   0.05167729,
   0.06143163,
   0.0528099,
   0.06426947,
   0.07008545,
   0.077589,
   0.07193745,
   0.08071697,
   0.1324468,
   0.1090799,
   0.1492032,
   0.4031485,
   0.2727232,
   0.533643,
   0.2676869,
   0.1479056,
   0.5976396};
   gre = new TGraphErrors(25,Graph_from_mc_statistical_error_fx1498,Graph_from_mc_statistical_error_fy1498,Graph_from_mc_statistical_error_fex1498,Graph_from_mc_statistical_error_fey1498);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1498 = new TH1F("Graph_Graph_from_mc_statistical_error1498","",100,0,1.1);
   Graph_Graph_from_mc_statistical_error1498->SetMinimum(0.2828325);
   Graph_Graph_from_mc_statistical_error1498->SetMaximum(1.717167);
   Graph_Graph_from_mc_statistical_error1498->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1498->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1498->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1498->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1498->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1498->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1498->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1498->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1498->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1498->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1498->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1498->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1498->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1498->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1498->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1498->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1498);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,1,1);
   line->Draw();
   bottomPad->Modified();
   Sphericity_both_16->cd();
   Sphericity_both_16->Modified();
   Sphericity_both_16->cd();
   Sphericity_both_16->SetSelected(Sphericity_both_16);
}
