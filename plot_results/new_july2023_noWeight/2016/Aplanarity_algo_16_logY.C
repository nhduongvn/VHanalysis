void Aplanarity_algo_16_logY()
{
//=========Macro generated from canvas: Aplanarity_algo_16/Aplanarity_algo_16
//=========  (Thu Aug 10 12:32:17 2023) by ROOT version 6.14/09
   TCanvas *Aplanarity_algo_16 = new TCanvas("Aplanarity_algo_16", "Aplanarity_algo_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Aplanarity_algo_16->SetHighLightColor(2);
   Aplanarity_algo_16->Range(0,0,1,1);
   Aplanarity_algo_16->SetFillColor(0);
   Aplanarity_algo_16->SetFillStyle(4000);
   Aplanarity_algo_16->SetBorderMode(0);
   Aplanarity_algo_16->SetBorderSize(2);
   Aplanarity_algo_16->SetFrameFillStyle(1000);
   Aplanarity_algo_16->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.1532254,-2.984889,1.052419,17.08293);
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
   st->SetMinimum(0.01);
   st->SetMaximum(2.778535e+14);
   
   TH1F *st_stack_157 = new TH1F("st_stack_157","",50,0,1);
   st_stack_157->SetMinimum(0.001084374);
   st_stack_157->SetMaximum(1.191648e+15);
   st_stack_157->SetDirectory(0);
   st_stack_157->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_157->SetLineColor(ci);
   st_stack_157->GetXaxis()->SetRange(1,50);
   st_stack_157->GetXaxis()->SetLabelFont(42);
   st_stack_157->GetXaxis()->SetLabelSize(0.035);
   st_stack_157->GetXaxis()->SetTitleSize(0.035);
   st_stack_157->GetXaxis()->SetTitleFont(42);
   st_stack_157->GetYaxis()->SetTitle("Events/0.02");
   st_stack_157->GetYaxis()->SetLabelFont(42);
   st_stack_157->GetYaxis()->SetLabelSize(0.05);
   st_stack_157->GetYaxis()->SetTitleSize(0.057);
   st_stack_157->GetYaxis()->SetTitleOffset(1.2);
   st_stack_157->GetYaxis()->SetTitleFont(42);
   st_stack_157->GetZaxis()->SetLabelFont(42);
   st_stack_157->GetZaxis()->SetLabelSize(0.035);
   st_stack_157->GetZaxis()->SetTitleSize(0.035);
   st_stack_157->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_157);
   
   
   TH1D *VbbHcc_algo_Aplanarity_stack_1 = new TH1D("VbbHcc_algo_Aplanarity_stack_1","",50,0,1);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(1,2783026);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(2,453404.3);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(3,100180);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(4,21906.7);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(5,4959.521);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(6,1732.705);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(7,190.7027);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(8,150.8602);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(9,56.16638);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(10,22.20356);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(11,22.20356);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(12,5.879633);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(13,28.08319);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(15,5.879633);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(1,45802.49);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(2,24018.93);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(3,6536.864);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(4,2782.796);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(5,1016.717);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(6,606.8121);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(7,60.48476);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(8,55.33261);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(9,32.48286);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(10,22.20356);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(11,22.20356);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(12,5.879633);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(13,22.96885);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(15,5.879633);
   VbbHcc_algo_Aplanarity_stack_1->SetEntries(135373);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_algo_Aplanarity_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Aplanarity_stack_1->SetLineColor(ci);
   VbbHcc_algo_Aplanarity_stack_1->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Aplanarity_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Aplanarity_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Aplanarity_stack_1,"");
   
   TH1D *VbbHcc_algo_Aplanarity_stack_2 = new TH1D("VbbHcc_algo_Aplanarity_stack_2","",50,0,1);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(1,20742.87);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(2,2969.615);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(3,655.8527);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(4,187.0592);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(5,61.09397);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(6,23.7488);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(7,10.72257);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(8,5.739701);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(9,2.390702);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(10,1.500598);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(11,0.723194);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(12,0.6864517);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(13,0.2326537);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(14,0.4468063);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(15,0.1381939);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(18,0.04373405);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(1,52.66002);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(2,19.98284);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(3,9.446154);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(4,5.090903);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(5,2.892423);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(6,1.840864);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(7,1.198354);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(8,0.92418);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(9,0.5874592);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(10,0.4323977);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(11,0.3021068);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(12,0.3000271);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(13,0.1043274);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(14,0.2801279);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(15,0.07999024);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(18,0.04373405);
   VbbHcc_algo_Aplanarity_stack_2->SetEntries(358903);

   ci = TColor::GetColor("#660066");
   VbbHcc_algo_Aplanarity_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Aplanarity_stack_2->SetLineColor(ci);
   VbbHcc_algo_Aplanarity_stack_2->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Aplanarity_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Aplanarity_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Aplanarity_stack_2,"");
   
   TH1D *VbbHcc_algo_Aplanarity_stack_3 = new TH1D("VbbHcc_algo_Aplanarity_stack_3","",50,0,1);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(1,336371.1);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(2,45621.87);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(3,9623.406);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(4,2727.537);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(5,918.7293);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(6,364.8968);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(7,163.6104);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(8,76.0373);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(9,40.6786);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(10,19.68703);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(11,12.03104);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(12,6.859491);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(13,5.32307);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(14,2.24832);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(15,1.459857);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(16,0.9106449);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(17,0.4487182);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(18,0.3705935);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(19,0.0479567);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(22,0.06964491);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(1,145.1089);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(2,53.28116);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(3,24.32576);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(4,12.86549);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(5,7.425426);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(6,4.647817);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(7,3.11209);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(8,2.112317);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(9,1.549236);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(10,1.068337);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(11,0.8411632);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(12,0.6285641);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(13,0.5679601);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(14,0.3623811);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(15,0.2859352);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(16,0.2321855);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(17,0.1614016);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(18,0.1430337);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(19,0.0479567);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(22,0.06964491);
   VbbHcc_algo_Aplanarity_stack_3->SetEntries(6548404);

   ci = TColor::GetColor("#cc00cc");
   VbbHcc_algo_Aplanarity_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Aplanarity_stack_3->SetLineColor(ci);
   VbbHcc_algo_Aplanarity_stack_3->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Aplanarity_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_3->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_stack_3->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_3->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_stack_3->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_stack_3->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Aplanarity_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_3->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_stack_3->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Aplanarity_stack_3,"");
   
   TH1D *VbbHcc_algo_Aplanarity_stack_4 = new TH1D("VbbHcc_algo_Aplanarity_stack_4","",50,0,1);
   VbbHcc_algo_Aplanarity_stack_4->SetBinContent(1,12911.28);
   VbbHcc_algo_Aplanarity_stack_4->SetBinContent(2,1706.024);
   VbbHcc_algo_Aplanarity_stack_4->SetBinContent(3,393.2523);
   VbbHcc_algo_Aplanarity_stack_4->SetBinContent(4,86.22161);
   VbbHcc_algo_Aplanarity_stack_4->SetBinContent(5,28.67784);
   VbbHcc_algo_Aplanarity_stack_4->SetBinContent(6,6.269949);
   VbbHcc_algo_Aplanarity_stack_4->SetBinContent(7,7.463035);
   VbbHcc_algo_Aplanarity_stack_4->SetBinContent(8,3.407391);
   VbbHcc_algo_Aplanarity_stack_4->SetBinContent(9,0.4361223);
   VbbHcc_algo_Aplanarity_stack_4->SetBinContent(10,0.3578197);
   VbbHcc_algo_Aplanarity_stack_4->SetBinContent(11,0.1448776);
   VbbHcc_algo_Aplanarity_stack_4->SetBinContent(13,0.279517);
   VbbHcc_algo_Aplanarity_stack_4->SetBinError(1,99.7814);
   VbbHcc_algo_Aplanarity_stack_4->SetBinError(2,42.48588);
   VbbHcc_algo_Aplanarity_stack_4->SetBinError(3,20.84876);
   VbbHcc_algo_Aplanarity_stack_4->SetBinError(4,9.19997);
   VbbHcc_algo_Aplanarity_stack_4->SetBinError(5,6.256964);
   VbbHcc_algo_Aplanarity_stack_4->SetBinError(6,2.824203);
   VbbHcc_algo_Aplanarity_stack_4->SetBinError(7,3.857435);
   VbbHcc_algo_Aplanarity_stack_4->SetBinError(8,2.702228);
   VbbHcc_algo_Aplanarity_stack_4->SetBinError(9,0.3006532);
   VbbHcc_algo_Aplanarity_stack_4->SetBinError(10,0.2902776);
   VbbHcc_algo_Aplanarity_stack_4->SetBinError(11,0.1027791);
   VbbHcc_algo_Aplanarity_stack_4->SetBinError(13,0.279517);
   VbbHcc_algo_Aplanarity_stack_4->SetEntries(93897);

   ci = TColor::GetColor("#00cccc");
   VbbHcc_algo_Aplanarity_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Aplanarity_stack_4->SetLineColor(ci);
   VbbHcc_algo_Aplanarity_stack_4->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Aplanarity_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_4->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_stack_4->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_4->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_stack_4->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_stack_4->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Aplanarity_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_4->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_stack_4->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Aplanarity_stack_4,"");
   
   TH1D *VbbHcc_algo_Aplanarity_stack_5 = new TH1D("VbbHcc_algo_Aplanarity_stack_5","",50,0,1);
   VbbHcc_algo_Aplanarity_stack_5->SetBinContent(1,6724.228);
   VbbHcc_algo_Aplanarity_stack_5->SetBinContent(2,781.0826);
   VbbHcc_algo_Aplanarity_stack_5->SetBinContent(3,182.5789);
   VbbHcc_algo_Aplanarity_stack_5->SetBinContent(4,31.98887);
   VbbHcc_algo_Aplanarity_stack_5->SetBinContent(5,5.316655);
   VbbHcc_algo_Aplanarity_stack_5->SetBinContent(6,9.498089);
   VbbHcc_algo_Aplanarity_stack_5->SetBinContent(7,6.965032);
   VbbHcc_algo_Aplanarity_stack_5->SetBinContent(8,0.4494169);
   VbbHcc_algo_Aplanarity_stack_5->SetBinContent(9,0.5405709);
   VbbHcc_algo_Aplanarity_stack_5->SetBinContent(10,0.3784462);
   VbbHcc_algo_Aplanarity_stack_5->SetBinContent(11,0.07097071);
   VbbHcc_algo_Aplanarity_stack_5->SetBinError(1,103.4945);
   VbbHcc_algo_Aplanarity_stack_5->SetBinError(2,41.86346);
   VbbHcc_algo_Aplanarity_stack_5->SetBinError(3,21.10637);
   VbbHcc_algo_Aplanarity_stack_5->SetBinError(4,7.253195);
   VbbHcc_algo_Aplanarity_stack_5->SetBinError(5,1.374118);
   VbbHcc_algo_Aplanarity_stack_5->SetBinError(6,6.266129);
   VbbHcc_algo_Aplanarity_stack_5->SetBinError(7,6.086001);
   VbbHcc_algo_Aplanarity_stack_5->SetBinError(8,0.3440433);
   VbbHcc_algo_Aplanarity_stack_5->SetBinError(9,0.4202643);
   VbbHcc_algo_Aplanarity_stack_5->SetBinError(10,0.3366437);
   VbbHcc_algo_Aplanarity_stack_5->SetBinError(11,0.07097071);
   VbbHcc_algo_Aplanarity_stack_5->SetEntries(71986);

   ci = TColor::GetColor("#ff99cc");
   VbbHcc_algo_Aplanarity_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Aplanarity_stack_5->SetLineColor(ci);
   VbbHcc_algo_Aplanarity_stack_5->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Aplanarity_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_5->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_stack_5->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_5->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_stack_5->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_stack_5->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Aplanarity_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_5->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_stack_5->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Aplanarity_stack_5,"");
   
   TH1D *VbbHcc_algo_Aplanarity_stack_6 = new TH1D("VbbHcc_algo_Aplanarity_stack_6","",50,0,1);
   VbbHcc_algo_Aplanarity_stack_6->SetBinContent(1,68.2596);
   VbbHcc_algo_Aplanarity_stack_6->SetBinContent(2,6.584096);
   VbbHcc_algo_Aplanarity_stack_6->SetBinContent(3,1.478062);
   VbbHcc_algo_Aplanarity_stack_6->SetBinContent(4,0.4031079);
   VbbHcc_algo_Aplanarity_stack_6->SetBinContent(5,0.1343693);
   VbbHcc_algo_Aplanarity_stack_6->SetBinContent(7,0.1343693);
   VbbHcc_algo_Aplanarity_stack_6->SetBinError(1,3.02853);
   VbbHcc_algo_Aplanarity_stack_6->SetBinError(2,0.9405851);
   VbbHcc_algo_Aplanarity_stack_6->SetBinError(3,0.4456525);
   VbbHcc_algo_Aplanarity_stack_6->SetBinError(4,0.2327345);
   VbbHcc_algo_Aplanarity_stack_6->SetBinError(5,0.1343693);
   VbbHcc_algo_Aplanarity_stack_6->SetBinError(7,0.1343693);
   VbbHcc_algo_Aplanarity_stack_6->SetEntries(573);

   ci = TColor::GetColor("#9933ff");
   VbbHcc_algo_Aplanarity_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Aplanarity_stack_6->SetLineColor(ci);
   VbbHcc_algo_Aplanarity_stack_6->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Aplanarity_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Aplanarity_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Aplanarity_stack_6,"");
   
   TH1D *VbbHcc_algo_Aplanarity_stack_7 = new TH1D("VbbHcc_algo_Aplanarity_stack_7","",50,0,1);
   VbbHcc_algo_Aplanarity_stack_7->SetBinContent(1,109.713);
   VbbHcc_algo_Aplanarity_stack_7->SetBinContent(2,12.97798);
   VbbHcc_algo_Aplanarity_stack_7->SetBinContent(3,2.617407);
   VbbHcc_algo_Aplanarity_stack_7->SetBinContent(4,0.4362346);
   VbbHcc_algo_Aplanarity_stack_7->SetBinContent(5,0.3271759);
   VbbHcc_algo_Aplanarity_stack_7->SetBinContent(6,0.2181173);
   VbbHcc_algo_Aplanarity_stack_7->SetBinContent(7,0.1090586);
   VbbHcc_algo_Aplanarity_stack_7->SetBinError(1,3.459068);
   VbbHcc_algo_Aplanarity_stack_7->SetBinError(2,1.189689);
   VbbHcc_algo_Aplanarity_stack_7->SetBinError(3,0.534276);
   VbbHcc_algo_Aplanarity_stack_7->SetBinError(4,0.2181173);
   VbbHcc_algo_Aplanarity_stack_7->SetBinError(5,0.1888951);
   VbbHcc_algo_Aplanarity_stack_7->SetBinError(6,0.1542322);
   VbbHcc_algo_Aplanarity_stack_7->SetBinError(7,0.1090586);
   VbbHcc_algo_Aplanarity_stack_7->SetEntries(1159);

   ci = TColor::GetColor("#3399ff");
   VbbHcc_algo_Aplanarity_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Aplanarity_stack_7->SetLineColor(ci);
   VbbHcc_algo_Aplanarity_stack_7->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Aplanarity_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Aplanarity_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Aplanarity_stack_7,"");
   
   TH1D *VbbHcc_algo_Aplanarity_stack_8 = new TH1D("VbbHcc_algo_Aplanarity_stack_8","",50,0,1);
   VbbHcc_algo_Aplanarity_stack_8->SetBinContent(1,138.8713);
   VbbHcc_algo_Aplanarity_stack_8->SetBinContent(2,18.97016);
   VbbHcc_algo_Aplanarity_stack_8->SetBinContent(3,3.161693);
   VbbHcc_algo_Aplanarity_stack_8->SetBinContent(4,0.4864143);
   VbbHcc_algo_Aplanarity_stack_8->SetBinContent(6,0.2432072);
   VbbHcc_algo_Aplanarity_stack_8->SetBinError(1,5.811582);
   VbbHcc_algo_Aplanarity_stack_8->SetBinError(2,2.147947);
   VbbHcc_algo_Aplanarity_stack_8->SetBinError(3,0.8768959);
   VbbHcc_algo_Aplanarity_stack_8->SetBinError(4,0.3439469);
   VbbHcc_algo_Aplanarity_stack_8->SetBinError(6,0.2432072);
   VbbHcc_algo_Aplanarity_stack_8->SetEntries(665);

   ci = TColor::GetColor("#33ff99");
   VbbHcc_algo_Aplanarity_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Aplanarity_stack_8->SetLineColor(ci);
   VbbHcc_algo_Aplanarity_stack_8->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Aplanarity_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Aplanarity_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Aplanarity_stack_8,"");
   
   TH1D *VbbHcc_algo_Aplanarity_stack_9 = new TH1D("VbbHcc_algo_Aplanarity_stack_9","",50,0,1);
   VbbHcc_algo_Aplanarity_stack_9->SetBinContent(1,89.67365);
   VbbHcc_algo_Aplanarity_stack_9->SetBinContent(2,8.386596);
   VbbHcc_algo_Aplanarity_stack_9->SetBinContent(3,1.442648);
   VbbHcc_algo_Aplanarity_stack_9->SetBinContent(4,0.3448616);
   VbbHcc_algo_Aplanarity_stack_9->SetBinContent(5,0.0810631);
   VbbHcc_algo_Aplanarity_stack_9->SetBinContent(6,0.02747902);
   VbbHcc_algo_Aplanarity_stack_9->SetBinContent(7,0.006869754);
   VbbHcc_algo_Aplanarity_stack_9->SetBinContent(8,0.008243705);
   VbbHcc_algo_Aplanarity_stack_9->SetBinContent(9,0.002747902);
   VbbHcc_algo_Aplanarity_stack_9->SetBinContent(10,0.001373951);
   VbbHcc_algo_Aplanarity_stack_9->SetBinError(1,0.3510088);
   VbbHcc_algo_Aplanarity_stack_9->SetBinError(2,0.1073442);
   VbbHcc_algo_Aplanarity_stack_9->SetBinError(3,0.04452109);
   VbbHcc_algo_Aplanarity_stack_9->SetBinError(4,0.02176747);
   VbbHcc_algo_Aplanarity_stack_9->SetBinError(5,0.01055352);
   VbbHcc_algo_Aplanarity_stack_9->SetBinError(6,0.006144495);
   VbbHcc_algo_Aplanarity_stack_9->SetBinError(7,0.003072247);
   VbbHcc_algo_Aplanarity_stack_9->SetBinError(8,0.003365478);
   VbbHcc_algo_Aplanarity_stack_9->SetBinError(9,0.00194306);
   VbbHcc_algo_Aplanarity_stack_9->SetBinError(10,0.001373951);
   VbbHcc_algo_Aplanarity_stack_9->SetEntries(72765);

   ci = TColor::GetColor("#cccc00");
   VbbHcc_algo_Aplanarity_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Aplanarity_stack_9->SetLineColor(ci);
   VbbHcc_algo_Aplanarity_stack_9->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Aplanarity_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_9->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_stack_9->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_9->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_stack_9->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_stack_9->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Aplanarity_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_9->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_stack_9->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Aplanarity_stack_9,"");
   
   TH1D *VbbHcc_algo_Aplanarity_stack_10 = new TH1D("VbbHcc_algo_Aplanarity_stack_10","",50,0,1);
   VbbHcc_algo_Aplanarity_stack_10->SetBinContent(1,35.192);
   VbbHcc_algo_Aplanarity_stack_10->SetBinContent(2,4.002599);
   VbbHcc_algo_Aplanarity_stack_10->SetBinContent(3,0.7740959);
   VbbHcc_algo_Aplanarity_stack_10->SetBinContent(4,0.1700719);
   VbbHcc_algo_Aplanarity_stack_10->SetBinContent(5,0.05800349);
   VbbHcc_algo_Aplanarity_stack_10->SetBinContent(6,0.01754426);
   VbbHcc_algo_Aplanarity_stack_10->SetBinContent(7,0.006086786);
   VbbHcc_algo_Aplanarity_stack_10->SetBinContent(8,0.003222416);
   VbbHcc_algo_Aplanarity_stack_10->SetBinContent(9,0.001790231);
   VbbHcc_algo_Aplanarity_stack_10->SetBinContent(10,0.001074139);
   VbbHcc_algo_Aplanarity_stack_10->SetBinContent(11,0.0003580462);
   VbbHcc_algo_Aplanarity_stack_10->SetBinContent(12,0.0003580462);
   VbbHcc_algo_Aplanarity_stack_10->SetBinError(1,0.1122513);
   VbbHcc_algo_Aplanarity_stack_10->SetBinError(2,0.03785651);
   VbbHcc_algo_Aplanarity_stack_10->SetBinError(3,0.01664819);
   VbbHcc_algo_Aplanarity_stack_10->SetBinError(4,0.007803436);
   VbbHcc_algo_Aplanarity_stack_10->SetBinError(5,0.004557184);
   VbbHcc_algo_Aplanarity_stack_10->SetBinError(6,0.002506323);
   VbbHcc_algo_Aplanarity_stack_10->SetBinError(7,0.001476262);
   VbbHcc_algo_Aplanarity_stack_10->SetBinError(8,0.001074139);
   VbbHcc_algo_Aplanarity_stack_10->SetBinError(9,0.0008006157);
   VbbHcc_algo_Aplanarity_stack_10->SetBinError(10,0.0006201542);
   VbbHcc_algo_Aplanarity_stack_10->SetBinError(11,0.0003580462);
   VbbHcc_algo_Aplanarity_stack_10->SetBinError(12,0.0003580462);
   VbbHcc_algo_Aplanarity_stack_10->SetEntries(112352);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_algo_Aplanarity_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Aplanarity_stack_10->SetLineColor(ci);
   VbbHcc_algo_Aplanarity_stack_10->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Aplanarity_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_10->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_stack_10->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_10->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_stack_10->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_stack_10->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Aplanarity_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_10->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_stack_10->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Aplanarity_stack_10,"");
   
   TH1D *VbbHcc_algo_Aplanarity_stack_11 = new TH1D("VbbHcc_algo_Aplanarity_stack_11","",50,0,1);
   VbbHcc_algo_Aplanarity_stack_11->SetBinContent(1,0.9299025);
   VbbHcc_algo_Aplanarity_stack_11->SetBinContent(2,0.0738452);
   VbbHcc_algo_Aplanarity_stack_11->SetBinContent(3,0.01641004);
   VbbHcc_algo_Aplanarity_stack_11->SetBinContent(4,0.005470015);
   VbbHcc_algo_Aplanarity_stack_11->SetBinContent(6,0.002735007);
   VbbHcc_algo_Aplanarity_stack_11->SetBinError(1,0.05043105);
   VbbHcc_algo_Aplanarity_stack_11->SetBinError(2,0.01421152);
   VbbHcc_algo_Aplanarity_stack_11->SetBinError(3,0.006699373);
   VbbHcc_algo_Aplanarity_stack_11->SetBinError(4,0.003867885);
   VbbHcc_algo_Aplanarity_stack_11->SetBinError(6,0.002735007);
   VbbHcc_algo_Aplanarity_stack_11->SetEntries(376);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_algo_Aplanarity_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Aplanarity_stack_11->SetLineColor(ci);
   VbbHcc_algo_Aplanarity_stack_11->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Aplanarity_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Aplanarity_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Aplanarity_stack_11,"");
   
   TH1D *VbbHcc_algo_Aplanarity_stack_12 = new TH1D("VbbHcc_algo_Aplanarity_stack_12","",50,0,1);
   VbbHcc_algo_Aplanarity_stack_12->SetBinContent(1,0.3469051);
   VbbHcc_algo_Aplanarity_stack_12->SetBinContent(2,0.04537276);
   VbbHcc_algo_Aplanarity_stack_12->SetBinContent(3,0.009288912);
   VbbHcc_algo_Aplanarity_stack_12->SetBinContent(4,0.001786329);
   VbbHcc_algo_Aplanarity_stack_12->SetBinContent(5,0.001071798);
   VbbHcc_algo_Aplanarity_stack_12->SetBinError(1,0.01113272);
   VbbHcc_algo_Aplanarity_stack_12->SetBinError(2,0.004026182);
   VbbHcc_algo_Aplanarity_stack_12->SetBinError(3,0.001821706);
   VbbHcc_algo_Aplanarity_stack_12->SetBinError(4,0.0007988707);
   VbbHcc_algo_Aplanarity_stack_12->SetBinError(5,0.0006188026);
   VbbHcc_algo_Aplanarity_stack_12->SetEntries(1132);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_algo_Aplanarity_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Aplanarity_stack_12->SetLineColor(ci);
   VbbHcc_algo_Aplanarity_stack_12->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Aplanarity_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_12->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_stack_12->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_12->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_stack_12->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_stack_12->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Aplanarity_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_12->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_stack_12->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Aplanarity_stack_12,"");
   st->Draw("hist");
   
   TH1D *VbbHcc_algo_Aplanarity__430 = new TH1D("VbbHcc_algo_Aplanarity__430","",50,0,1);
   VbbHcc_algo_Aplanarity__430->SetBinContent(1,729299);
   VbbHcc_algo_Aplanarity__430->SetBinContent(2,91528);
   VbbHcc_algo_Aplanarity__430->SetBinContent(3,20331);
   VbbHcc_algo_Aplanarity__430->SetBinContent(4,5375);
   VbbHcc_algo_Aplanarity__430->SetBinContent(5,1557);
   VbbHcc_algo_Aplanarity__430->SetBinContent(6,551);
   VbbHcc_algo_Aplanarity__430->SetBinContent(7,225);
   VbbHcc_algo_Aplanarity__430->SetBinContent(8,99);
   VbbHcc_algo_Aplanarity__430->SetBinContent(9,55);
   VbbHcc_algo_Aplanarity__430->SetBinContent(10,34);
   VbbHcc_algo_Aplanarity__430->SetBinContent(11,21);
   VbbHcc_algo_Aplanarity__430->SetBinContent(12,10);
   VbbHcc_algo_Aplanarity__430->SetBinContent(13,7);
   VbbHcc_algo_Aplanarity__430->SetBinContent(14,3);
   VbbHcc_algo_Aplanarity__430->SetBinContent(15,2);
   VbbHcc_algo_Aplanarity__430->SetBinContent(16,4);
   VbbHcc_algo_Aplanarity__430->SetBinContent(17,1);
   VbbHcc_algo_Aplanarity__430->SetBinContent(18,2);
   VbbHcc_algo_Aplanarity__430->SetEntries(849153);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Aplanarity__430->SetLineColor(ci);
   VbbHcc_algo_Aplanarity__430->SetLineWidth(2);
   VbbHcc_algo_Aplanarity__430->SetMarkerStyle(20);
   VbbHcc_algo_Aplanarity__430->SetMarkerSize(1.2);
   VbbHcc_algo_Aplanarity__430->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Aplanarity__430->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity__430->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity__430->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity__430->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity__430->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity__430->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity__430->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity__430->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Aplanarity__430->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity__430->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity__430->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity__430->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity__430->GetZaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity__430->Draw("same E");
   
   Double_t Graph_from_VbbHcc_algo_Aplanarity_fx1313[50] = {
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
   Double_t Graph_from_VbbHcc_algo_Aplanarity_fy1313[50] = {
   3160218,
   504533.9,
   111044.6,
   24941.36,
   5973.94,
   2137.627,
   379.7201,
   236.5055,
   100.2169,
   44.1299,
   35.174,
   13.42593,
   33.91843,
   2.695126,
   7.477684,
   0.9106449,
   0.4487182,
   0.4143276,
   0.0479567,
   0,
   0,
   0.06964491,
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
   0,
   0,
   0};
   Double_t Graph_from_VbbHcc_algo_Aplanarity_fex1313[50] = {
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
   Double_t Graph_from_VbbHcc_algo_Aplanarity_fey1313[50] = {
   45802.98,
   24019.07,
   6536.983,
   2782.855,
   1016.769,
   606.8716,
   61.00391,
   55.44758,
   32.52919,
   22.23789,
   22.22189,
   5.920743,
   22.97781,
   0.4580302,
   5.887125,
   0.2321855,
   0.1614016,
   0.1495704,
   0.0479567,
   0,
   0,
   0.06964491,
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
   0,
   0,
   0};
   TGraphErrors *gre = new TGraphErrors(50,Graph_from_VbbHcc_algo_Aplanarity_fx1313,Graph_from_VbbHcc_algo_Aplanarity_fy1313,Graph_from_VbbHcc_algo_Aplanarity_fex1313,Graph_from_VbbHcc_algo_Aplanarity_fey1313);
   gre->SetName("Graph_from_VbbHcc_algo_Aplanarity");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_algo_Aplanarity1313 = new TH1F("Graph_Graph_from_VbbHcc_algo_Aplanarity1313","",100,0,1.1);
   Graph_Graph_from_VbbHcc_algo_Aplanarity1313->SetMinimum(3526.624);
   Graph_Graph_from_VbbHcc_algo_Aplanarity1313->SetMaximum(3526624);
   Graph_Graph_from_VbbHcc_algo_Aplanarity1313->SetDirectory(0);
   Graph_Graph_from_VbbHcc_algo_Aplanarity1313->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_algo_Aplanarity1313->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_algo_Aplanarity1313->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_algo_Aplanarity1313->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Aplanarity1313->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Aplanarity1313->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_algo_Aplanarity1313->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_algo_Aplanarity1313->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Aplanarity1313->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Aplanarity1313->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_VbbHcc_algo_Aplanarity1313->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_algo_Aplanarity1313->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_algo_Aplanarity1313->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Aplanarity1313->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Aplanarity1313->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_algo_Aplanarity1313);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_algo_Aplanarity","Data (JetHT, 2016)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_algo_Aplanarity_stack_12","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Aplanarity_stack_11","ZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Aplanarity_stack_10","ggZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Aplanarity_stack_9","ZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Aplanarity_stack_8","ZZ","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Aplanarity_stack_7","WZ","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Aplanarity_stack_6","WW","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Aplanarity_stack_5","W + jets","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Aplanarity_stack_4","Z + jets","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Aplanarity_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Aplanarity_stack_2","Single top","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Aplanarity_stack_1","QCD","F");

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
   entry=leg->AddEntry("Graph_from_VbbHcc_algo_Aplanarity","MC unc. (stat.)","fl");

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
   Aplanarity_algo_16->cd();
  
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
   
   TH1D *data_mc_ratio__431 = new TH1D("data_mc_ratio__431","",50,0,1);
   data_mc_ratio__431->SetBinContent(1,0.2307749);
   data_mc_ratio__431->SetBinContent(2,0.181411);
   data_mc_ratio__431->SetBinContent(3,0.1830887);
   data_mc_ratio__431->SetBinContent(4,0.2155055);
   data_mc_ratio__431->SetBinContent(5,0.260632);
   data_mc_ratio__431->SetBinContent(6,0.2577624);
   data_mc_ratio__431->SetBinContent(7,0.5925417);
   data_mc_ratio__431->SetBinContent(8,0.4185949);
   data_mc_ratio__431->SetBinContent(9,0.5488095);
   data_mc_ratio__431->SetBinContent(10,0.7704527);
   data_mc_ratio__431->SetBinContent(11,0.5970319);
   data_mc_ratio__431->SetBinContent(12,0.7448272);
   data_mc_ratio__431->SetBinContent(13,0.2063775);
   data_mc_ratio__431->SetBinContent(14,1.11312);
   data_mc_ratio__431->SetBinContent(15,0.2674625);
   data_mc_ratio__431->SetBinContent(16,4.392492);
   data_mc_ratio__431->SetBinContent(17,2.22857);
   data_mc_ratio__431->SetBinContent(18,4.827098);
   data_mc_ratio__431->SetBinError(1,0.0002702313);
   data_mc_ratio__431->SetBinError(2,0.0005996345);
   data_mc_ratio__431->SetBinError(3,0.00128405);
   data_mc_ratio__431->SetBinError(4,0.002939471);
   data_mc_ratio__431->SetBinError(5,0.006605161);
   data_mc_ratio__431->SetBinError(6,0.01098105);
   data_mc_ratio__431->SetBinError(7,0.03950278);
   data_mc_ratio__431->SetBinError(8,0.04207037);
   data_mc_ratio__431->SetBinError(9,0.07400146);
   data_mc_ratio__431->SetBinError(10,0.1321316);
   data_mc_ratio__431->SetBinError(11,0.130283);
   data_mc_ratio__431->SetBinError(12,0.235535);
   data_mc_ratio__431->SetBinError(13,0.07800335);
   data_mc_ratio__431->SetBinError(14,0.6426604);
   data_mc_ratio__431->SetBinError(15,0.1891245);
   data_mc_ratio__431->SetBinError(16,2.196246);
   data_mc_ratio__431->SetBinError(17,2.22857);
   data_mc_ratio__431->SetBinError(18,3.413274);
   data_mc_ratio__431->SetMinimum(0.4);
   data_mc_ratio__431->SetMaximum(1.6);
   data_mc_ratio__431->SetEntries(11.83545);
   data_mc_ratio__431->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__431->SetLineColor(ci);
   data_mc_ratio__431->SetLineWidth(2);
   data_mc_ratio__431->SetMarkerStyle(20);
   data_mc_ratio__431->SetMarkerSize(1.2);
   data_mc_ratio__431->GetXaxis()->SetTitle("Aplanarity");
   data_mc_ratio__431->GetXaxis()->SetRange(1,50);
   data_mc_ratio__431->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__431->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__431->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__431->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__431->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__431->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__431->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__431->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__431->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__431->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__431->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__431->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__431->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__431->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__431->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__431->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__431->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1314[50] = {
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
   Double_t Graph_from_mc_statistical_error_fy1314[50] = {
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
   Double_t Graph_from_mc_statistical_error_fex1314[50] = {
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
   Double_t Graph_from_mc_statistical_error_fey1314[50] = {
   0.01449361,
   0.04760646,
   0.05886811,
   0.1115759,
   0.1702007,
   0.2838996,
   0.1606549,
   0.2344452,
   0.3245878,
   0.503919,
   0.6317704,
   0.440993,
   0.6774431,
   0.1699476,
   0.7872926,
   0.2549682,
   0.3596947,
   0.3609955,
   1,
   0,
   0,
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
   0,
   0,
   0};
   gre = new TGraphErrors(50,Graph_from_mc_statistical_error_fx1314,Graph_from_mc_statistical_error_fy1314,Graph_from_mc_statistical_error_fex1314,Graph_from_mc_statistical_error_fey1314);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1314 = new TH1F("Graph_Graph_from_mc_statistical_error1314","",100,0,1.1);
   Graph_Graph_from_mc_statistical_error1314->SetMinimum(0);
   Graph_Graph_from_mc_statistical_error1314->SetMaximum(2.2);
   Graph_Graph_from_mc_statistical_error1314->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1314->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1314->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1314->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1314->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1314->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1314->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1314->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1314->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1314->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1314->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1314->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1314->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1314->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1314->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1314->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1314);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,1,1);
   line->Draw();
   bottomPad->Modified();
   Aplanarity_algo_16->cd();
   Aplanarity_algo_16->Modified();
   Aplanarity_algo_16->cd();
   Aplanarity_algo_16->SetSelected(Aplanarity_algo_16);
}
