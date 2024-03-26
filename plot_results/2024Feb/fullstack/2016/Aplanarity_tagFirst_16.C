#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Aplanarity_tagFirst_16()
{
//=========Macro generated from canvas: Aplanarity_tagFirst_16/Aplanarity_tagFirst_16
//=========  (Wed Feb 14 12:33:09 2024) by ROOT version 6.28/10
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
   topPad->Range(-0.1532254,-7368.882,1.052419,7361522);
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
   st->SetMaximum(6624633);
   
   TH1F *st_stack_190 = new TH1F("st_stack_190","",50,0,1);
   st_stack_190->SetMinimum(0.01);
   st_stack_190->SetMaximum(6624633);
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
   
   
   TH1D *VH_tagFirst_Aplanarity_stack_1 = new TH1D("VH_tagFirst_Aplanarity_stack_1","",50,0,1);
   VH_tagFirst_Aplanarity_stack_1->SetBinContent(1,1910959);
   VH_tagFirst_Aplanarity_stack_1->SetBinContent(2,271438.6);
   VH_tagFirst_Aplanarity_stack_1->SetBinContent(3,68104.79);
   VH_tagFirst_Aplanarity_stack_1->SetBinContent(4,22271.54);
   VH_tagFirst_Aplanarity_stack_1->SetBinContent(5,6516.308);
   VH_tagFirst_Aplanarity_stack_1->SetBinContent(6,3099.952);
   VH_tagFirst_Aplanarity_stack_1->SetBinContent(7,1915.854);
   VH_tagFirst_Aplanarity_stack_1->SetBinContent(8,1234.146);
   VH_tagFirst_Aplanarity_stack_1->SetBinContent(9,573.0268);
   VH_tagFirst_Aplanarity_stack_1->SetBinContent(10,115.2184);
   VH_tagFirst_Aplanarity_stack_1->SetBinContent(11,114.0852);
   VH_tagFirst_Aplanarity_stack_1->SetBinContent(12,406.5003);
   VH_tagFirst_Aplanarity_stack_1->SetBinContent(13,110.5302);
   VH_tagFirst_Aplanarity_stack_1->SetBinContent(14,22.48055);
   VH_tagFirst_Aplanarity_stack_1->SetBinContent(15,30.02126);
   VH_tagFirst_Aplanarity_stack_1->SetBinContent(16,0.4282265);
   VH_tagFirst_Aplanarity_stack_1->SetBinContent(17,12.00434);
   VH_tagFirst_Aplanarity_stack_1->SetBinContent(18,0.3962258);
   VH_tagFirst_Aplanarity_stack_1->SetBinError(1,39300.06);
   VH_tagFirst_Aplanarity_stack_1->SetBinError(2,19240.57);
   VH_tagFirst_Aplanarity_stack_1->SetBinError(3,4193.519);
   VH_tagFirst_Aplanarity_stack_1->SetBinError(4,2187.977);
   VH_tagFirst_Aplanarity_stack_1->SetBinError(5,907.5932);
   VH_tagFirst_Aplanarity_stack_1->SetBinError(6,607.832);
   VH_tagFirst_Aplanarity_stack_1->SetBinError(7,443.1755);
   VH_tagFirst_Aplanarity_stack_1->SetBinError(8,379.1008);
   VH_tagFirst_Aplanarity_stack_1->SetBinError(9,190.9498);
   VH_tagFirst_Aplanarity_stack_1->SetBinError(10,33.87858);
   VH_tagFirst_Aplanarity_stack_1->SetBinError(11,36.91985);
   VH_tagFirst_Aplanarity_stack_1->SetBinError(12,251.1066);
   VH_tagFirst_Aplanarity_stack_1->SetBinError(13,40.16911);
   VH_tagFirst_Aplanarity_stack_1->SetBinError(14,12.28792);
   VH_tagFirst_Aplanarity_stack_1->SetBinError(15,17.67375);
   VH_tagFirst_Aplanarity_stack_1->SetBinError(16,0.4282265);
   VH_tagFirst_Aplanarity_stack_1->SetBinError(17,8.561349);
   VH_tagFirst_Aplanarity_stack_1->SetBinError(18,0.3962258);
   VH_tagFirst_Aplanarity_stack_1->SetEntries(187165);

   ci = TColor::GetColor("#ff6600");
   VH_tagFirst_Aplanarity_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VH_tagFirst_Aplanarity_stack_1->SetLineColor(ci);
   VH_tagFirst_Aplanarity_stack_1->GetXaxis()->SetRange(1,100);
   VH_tagFirst_Aplanarity_stack_1->GetXaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity_stack_1->GetXaxis()->SetTitleOffset(1);
   VH_tagFirst_Aplanarity_stack_1->GetXaxis()->SetTitleFont(42);
   VH_tagFirst_Aplanarity_stack_1->GetYaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity_stack_1->GetYaxis()->SetTitleFont(42);
   VH_tagFirst_Aplanarity_stack_1->GetZaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity_stack_1->GetZaxis()->SetTitleOffset(1);
   VH_tagFirst_Aplanarity_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VH_tagFirst_Aplanarity_stack_1,"");
   
   TH1D *VH_tagFirst_Aplanarity_stack_2 = new TH1D("VH_tagFirst_Aplanarity_stack_2","",50,0,1);
   VH_tagFirst_Aplanarity_stack_2->SetBinContent(1,20624.04);
   VH_tagFirst_Aplanarity_stack_2->SetBinContent(2,2985.123);
   VH_tagFirst_Aplanarity_stack_2->SetBinContent(3,778.3292);
   VH_tagFirst_Aplanarity_stack_2->SetBinContent(4,267.9809);
   VH_tagFirst_Aplanarity_stack_2->SetBinContent(5,101.5489);
   VH_tagFirst_Aplanarity_stack_2->SetBinContent(6,52.9286);
   VH_tagFirst_Aplanarity_stack_2->SetBinContent(7,27.81409);
   VH_tagFirst_Aplanarity_stack_2->SetBinContent(8,15.32565);
   VH_tagFirst_Aplanarity_stack_2->SetBinContent(9,10.7818);
   VH_tagFirst_Aplanarity_stack_2->SetBinContent(10,6.975353);
   VH_tagFirst_Aplanarity_stack_2->SetBinContent(11,3.969406);
   VH_tagFirst_Aplanarity_stack_2->SetBinContent(12,1.679845);
   VH_tagFirst_Aplanarity_stack_2->SetBinContent(13,1.993123);
   VH_tagFirst_Aplanarity_stack_2->SetBinContent(14,1.286154);
   VH_tagFirst_Aplanarity_stack_2->SetBinContent(15,1.137239);
   VH_tagFirst_Aplanarity_stack_2->SetBinContent(16,0.3993398);
   VH_tagFirst_Aplanarity_stack_2->SetBinContent(17,0.08494765);
   VH_tagFirst_Aplanarity_stack_2->SetBinContent(18,0.2684927);
   VH_tagFirst_Aplanarity_stack_2->SetBinContent(19,0.0380185);
   VH_tagFirst_Aplanarity_stack_2->SetBinContent(20,0.4076488);
   VH_tagFirst_Aplanarity_stack_2->SetBinError(1,53.30902);
   VH_tagFirst_Aplanarity_stack_2->SetBinError(2,20.03211);
   VH_tagFirst_Aplanarity_stack_2->SetBinError(3,10.30497);
   VH_tagFirst_Aplanarity_stack_2->SetBinError(4,6.092734);
   VH_tagFirst_Aplanarity_stack_2->SetBinError(5,3.667296);
   VH_tagFirst_Aplanarity_stack_2->SetBinError(6,2.887142);
   VH_tagFirst_Aplanarity_stack_2->SetBinError(7,2.060366);
   VH_tagFirst_Aplanarity_stack_2->SetBinError(8,1.481486);
   VH_tagFirst_Aplanarity_stack_2->SetBinError(9,1.278591);
   VH_tagFirst_Aplanarity_stack_2->SetBinError(10,1.113677);
   VH_tagFirst_Aplanarity_stack_2->SetBinError(11,0.7681244);
   VH_tagFirst_Aplanarity_stack_2->SetBinError(12,0.3616055);
   VH_tagFirst_Aplanarity_stack_2->SetBinError(13,0.4940552);
   VH_tagFirst_Aplanarity_stack_2->SetBinError(14,0.4498776);
   VH_tagFirst_Aplanarity_stack_2->SetBinError(15,0.4866086);
   VH_tagFirst_Aplanarity_stack_2->SetBinError(16,0.291605);
   VH_tagFirst_Aplanarity_stack_2->SetBinError(17,0.06007562);
   VH_tagFirst_Aplanarity_stack_2->SetBinError(18,0.2219254);
   VH_tagFirst_Aplanarity_stack_2->SetBinError(19,0.0380185);
   VH_tagFirst_Aplanarity_stack_2->SetBinError(20,0.3088225);
   VH_tagFirst_Aplanarity_stack_2->SetEntries(401724);

   ci = TColor::GetColor("#660066");
   VH_tagFirst_Aplanarity_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VH_tagFirst_Aplanarity_stack_2->SetLineColor(ci);
   VH_tagFirst_Aplanarity_stack_2->GetXaxis()->SetRange(1,100);
   VH_tagFirst_Aplanarity_stack_2->GetXaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity_stack_2->GetXaxis()->SetTitleOffset(1);
   VH_tagFirst_Aplanarity_stack_2->GetXaxis()->SetTitleFont(42);
   VH_tagFirst_Aplanarity_stack_2->GetYaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity_stack_2->GetYaxis()->SetTitleFont(42);
   VH_tagFirst_Aplanarity_stack_2->GetZaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity_stack_2->GetZaxis()->SetTitleOffset(1);
   VH_tagFirst_Aplanarity_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VH_tagFirst_Aplanarity_stack_2,"");
   
   TH1D *VH_tagFirst_Aplanarity_stack_3 = new TH1D("VH_tagFirst_Aplanarity_stack_3","",50,0,1);
   VH_tagFirst_Aplanarity_stack_3->SetBinContent(1,332351.6);
   VH_tagFirst_Aplanarity_stack_3->SetBinContent(2,47681.49);
   VH_tagFirst_Aplanarity_stack_3->SetBinContent(3,12687.08);
   VH_tagFirst_Aplanarity_stack_3->SetBinContent(4,4641.239);
   VH_tagFirst_Aplanarity_stack_3->SetBinContent(5,2064.231);
   VH_tagFirst_Aplanarity_stack_3->SetBinContent(6,1040.956);
   VH_tagFirst_Aplanarity_stack_3->SetBinContent(7,561.0684);
   VH_tagFirst_Aplanarity_stack_3->SetBinContent(8,330.0809);
   VH_tagFirst_Aplanarity_stack_3->SetBinContent(9,202.0659);
   VH_tagFirst_Aplanarity_stack_3->SetBinContent(10,122.0943);
   VH_tagFirst_Aplanarity_stack_3->SetBinContent(11,78.6791);
   VH_tagFirst_Aplanarity_stack_3->SetBinContent(12,49.80325);
   VH_tagFirst_Aplanarity_stack_3->SetBinContent(13,33.4866);
   VH_tagFirst_Aplanarity_stack_3->SetBinContent(14,19.54732);
   VH_tagFirst_Aplanarity_stack_3->SetBinContent(15,12.37221);
   VH_tagFirst_Aplanarity_stack_3->SetBinContent(16,6.941415);
   VH_tagFirst_Aplanarity_stack_3->SetBinContent(17,4.22942);
   VH_tagFirst_Aplanarity_stack_3->SetBinContent(18,2.739292);
   VH_tagFirst_Aplanarity_stack_3->SetBinContent(19,1.518833);
   VH_tagFirst_Aplanarity_stack_3->SetBinContent(20,0.5420866);
   VH_tagFirst_Aplanarity_stack_3->SetBinContent(21,0.2559405);
   VH_tagFirst_Aplanarity_stack_3->SetBinContent(22,0.0537772);
   VH_tagFirst_Aplanarity_stack_3->SetBinError(1,137.714);
   VH_tagFirst_Aplanarity_stack_3->SetBinError(2,51.56069);
   VH_tagFirst_Aplanarity_stack_3->SetBinError(3,26.60723);
   VH_tagFirst_Aplanarity_stack_3->SetBinError(4,16.11374);
   VH_tagFirst_Aplanarity_stack_3->SetBinError(5,10.77491);
   VH_tagFirst_Aplanarity_stack_3->SetBinError(6,7.670838);
   VH_tagFirst_Aplanarity_stack_3->SetBinError(7,5.639696);
   VH_tagFirst_Aplanarity_stack_3->SetBinError(8,4.331659);
   VH_tagFirst_Aplanarity_stack_3->SetBinError(9,3.389852);
   VH_tagFirst_Aplanarity_stack_3->SetBinError(10,2.635133);
   VH_tagFirst_Aplanarity_stack_3->SetBinError(11,2.12901);
   VH_tagFirst_Aplanarity_stack_3->SetBinError(12,1.712776);
   VH_tagFirst_Aplanarity_stack_3->SetBinError(13,1.400257);
   VH_tagFirst_Aplanarity_stack_3->SetBinError(14,1.068248);
   VH_tagFirst_Aplanarity_stack_3->SetBinError(15,0.8545301);
   VH_tagFirst_Aplanarity_stack_3->SetBinError(16,0.6317151);
   VH_tagFirst_Aplanarity_stack_3->SetBinError(17,0.4862647);
   VH_tagFirst_Aplanarity_stack_3->SetBinError(18,0.4087812);
   VH_tagFirst_Aplanarity_stack_3->SetBinError(19,0.2984503);
   VH_tagFirst_Aplanarity_stack_3->SetBinError(20,0.1836915);
   VH_tagFirst_Aplanarity_stack_3->SetBinError(21,0.1210224);
   VH_tagFirst_Aplanarity_stack_3->SetBinError(22,0.0537772);
   VH_tagFirst_Aplanarity_stack_3->SetEntries(7523770);

   ci = TColor::GetColor("#cc00cc");
   VH_tagFirst_Aplanarity_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VH_tagFirst_Aplanarity_stack_3->SetLineColor(ci);
   VH_tagFirst_Aplanarity_stack_3->GetXaxis()->SetRange(1,100);
   VH_tagFirst_Aplanarity_stack_3->GetXaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity_stack_3->GetXaxis()->SetTitleOffset(1);
   VH_tagFirst_Aplanarity_stack_3->GetXaxis()->SetTitleFont(42);
   VH_tagFirst_Aplanarity_stack_3->GetYaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity_stack_3->GetYaxis()->SetTitleFont(42);
   VH_tagFirst_Aplanarity_stack_3->GetZaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity_stack_3->GetZaxis()->SetTitleOffset(1);
   VH_tagFirst_Aplanarity_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VH_tagFirst_Aplanarity_stack_3,"");
   
   TH1D *VH_tagFirst_Aplanarity_stack_4 = new TH1D("VH_tagFirst_Aplanarity_stack_4","",50,0,1);
   VH_tagFirst_Aplanarity_stack_4->SetBinContent(1,15486.29);
   VH_tagFirst_Aplanarity_stack_4->SetBinContent(2,1751.771);
   VH_tagFirst_Aplanarity_stack_4->SetBinContent(3,455.4749);
   VH_tagFirst_Aplanarity_stack_4->SetBinContent(4,144.1577);
   VH_tagFirst_Aplanarity_stack_4->SetBinContent(5,64.10434);
   VH_tagFirst_Aplanarity_stack_4->SetBinContent(6,28.19647);
   VH_tagFirst_Aplanarity_stack_4->SetBinContent(7,18.73315);
   VH_tagFirst_Aplanarity_stack_4->SetBinContent(8,9.752575);
   VH_tagFirst_Aplanarity_stack_4->SetBinContent(9,3.389939);
   VH_tagFirst_Aplanarity_stack_4->SetBinContent(10,4.53234);
   VH_tagFirst_Aplanarity_stack_4->SetBinContent(11,4.996669);
   VH_tagFirst_Aplanarity_stack_4->SetBinContent(12,1.555914);
   VH_tagFirst_Aplanarity_stack_4->SetBinContent(13,0.6768942);
   VH_tagFirst_Aplanarity_stack_4->SetBinContent(14,0.3578952);
   VH_tagFirst_Aplanarity_stack_4->SetBinContent(15,0.488372);
   VH_tagFirst_Aplanarity_stack_4->SetBinContent(16,0.06741251);
   VH_tagFirst_Aplanarity_stack_4->SetBinContent(18,0.2834894);
   VH_tagFirst_Aplanarity_stack_4->SetBinError(1,73.87949);
   VH_tagFirst_Aplanarity_stack_4->SetBinError(2,28.59489);
   VH_tagFirst_Aplanarity_stack_4->SetBinError(3,14.75938);
   VH_tagFirst_Aplanarity_stack_4->SetBinError(4,7.856746);
   VH_tagFirst_Aplanarity_stack_4->SetBinError(5,5.337813);
   VH_tagFirst_Aplanarity_stack_4->SetBinError(6,2.958525);
   VH_tagFirst_Aplanarity_stack_4->SetBinError(7,2.169036);
   VH_tagFirst_Aplanarity_stack_4->SetBinError(8,1.161847);
   VH_tagFirst_Aplanarity_stack_4->SetBinError(9,0.5825944);
   VH_tagFirst_Aplanarity_stack_4->SetBinError(10,1.687316);
   VH_tagFirst_Aplanarity_stack_4->SetBinError(11,2.102744);
   VH_tagFirst_Aplanarity_stack_4->SetBinError(12,0.4786853);
   VH_tagFirst_Aplanarity_stack_4->SetBinError(13,0.2176152);
   VH_tagFirst_Aplanarity_stack_4->SetBinError(14,0.1551258);
   VH_tagFirst_Aplanarity_stack_4->SetBinError(15,0.3540384);
   VH_tagFirst_Aplanarity_stack_4->SetBinError(16,0.06741251);
   VH_tagFirst_Aplanarity_stack_4->SetBinError(18,0.2834894);
   VH_tagFirst_Aplanarity_stack_4->SetEntries(164125);

   ci = TColor::GetColor("#00cccc");
   VH_tagFirst_Aplanarity_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VH_tagFirst_Aplanarity_stack_4->SetLineColor(ci);
   VH_tagFirst_Aplanarity_stack_4->GetXaxis()->SetRange(1,100);
   VH_tagFirst_Aplanarity_stack_4->GetXaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity_stack_4->GetXaxis()->SetTitleOffset(1);
   VH_tagFirst_Aplanarity_stack_4->GetXaxis()->SetTitleFont(42);
   VH_tagFirst_Aplanarity_stack_4->GetYaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity_stack_4->GetYaxis()->SetTitleFont(42);
   VH_tagFirst_Aplanarity_stack_4->GetZaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity_stack_4->GetZaxis()->SetTitleOffset(1);
   VH_tagFirst_Aplanarity_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VH_tagFirst_Aplanarity_stack_4,"");
   
   TH1D *VH_tagFirst_Aplanarity_stack_5 = new TH1D("VH_tagFirst_Aplanarity_stack_5","",50,0,1);
   VH_tagFirst_Aplanarity_stack_5->SetBinContent(1,8982.083);
   VH_tagFirst_Aplanarity_stack_5->SetBinContent(2,969.5262);
   VH_tagFirst_Aplanarity_stack_5->SetBinContent(3,264.9572);
   VH_tagFirst_Aplanarity_stack_5->SetBinContent(4,86.80002);
   VH_tagFirst_Aplanarity_stack_5->SetBinContent(5,32.95546);
   VH_tagFirst_Aplanarity_stack_5->SetBinContent(6,26.63118);
   VH_tagFirst_Aplanarity_stack_5->SetBinContent(7,23.4013);
   VH_tagFirst_Aplanarity_stack_5->SetBinContent(8,6.161777);
   VH_tagFirst_Aplanarity_stack_5->SetBinContent(9,3.336865);
   VH_tagFirst_Aplanarity_stack_5->SetBinContent(10,2.041334);
   VH_tagFirst_Aplanarity_stack_5->SetBinContent(11,1.007679);
   VH_tagFirst_Aplanarity_stack_5->SetBinContent(12,0.951786);
   VH_tagFirst_Aplanarity_stack_5->SetBinContent(13,0.5518284);
   VH_tagFirst_Aplanarity_stack_5->SetBinContent(14,0.04634623);
   VH_tagFirst_Aplanarity_stack_5->SetBinContent(15,0.1673636);
   VH_tagFirst_Aplanarity_stack_5->SetBinContent(18,0.03480107);
   VH_tagFirst_Aplanarity_stack_5->SetBinContent(20,0.08133878);
   VH_tagFirst_Aplanarity_stack_5->SetBinError(1,91.85104);
   VH_tagFirst_Aplanarity_stack_5->SetBinError(2,33.70513);
   VH_tagFirst_Aplanarity_stack_5->SetBinError(3,20.47127);
   VH_tagFirst_Aplanarity_stack_5->SetBinError(4,10.71185);
   VH_tagFirst_Aplanarity_stack_5->SetBinError(5,3.818393);
   VH_tagFirst_Aplanarity_stack_5->SetBinError(6,7.163736);
   VH_tagFirst_Aplanarity_stack_5->SetBinError(7,9.258507);
   VH_tagFirst_Aplanarity_stack_5->SetBinError(8,1.650548);
   VH_tagFirst_Aplanarity_stack_5->SetBinError(9,1.252912);
   VH_tagFirst_Aplanarity_stack_5->SetBinError(10,1.031991);
   VH_tagFirst_Aplanarity_stack_5->SetBinError(11,0.3062722);
   VH_tagFirst_Aplanarity_stack_5->SetBinError(12,0.4855147);
   VH_tagFirst_Aplanarity_stack_5->SetBinError(13,0.2519621);
   VH_tagFirst_Aplanarity_stack_5->SetBinError(14,0.04612992);
   VH_tagFirst_Aplanarity_stack_5->SetBinError(15,0.1673636);
   VH_tagFirst_Aplanarity_stack_5->SetBinError(18,0.03480107);
   VH_tagFirst_Aplanarity_stack_5->SetBinError(20,0.08133878);
   VH_tagFirst_Aplanarity_stack_5->SetEntries(117873);

   ci = TColor::GetColor("#ff99cc");
   VH_tagFirst_Aplanarity_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VH_tagFirst_Aplanarity_stack_5->SetLineColor(ci);
   VH_tagFirst_Aplanarity_stack_5->GetXaxis()->SetRange(1,100);
   VH_tagFirst_Aplanarity_stack_5->GetXaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity_stack_5->GetXaxis()->SetTitleOffset(1);
   VH_tagFirst_Aplanarity_stack_5->GetXaxis()->SetTitleFont(42);
   VH_tagFirst_Aplanarity_stack_5->GetYaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity_stack_5->GetYaxis()->SetTitleFont(42);
   VH_tagFirst_Aplanarity_stack_5->GetZaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity_stack_5->GetZaxis()->SetTitleOffset(1);
   VH_tagFirst_Aplanarity_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VH_tagFirst_Aplanarity_stack_5,"");
   
   TH1D *VH_tagFirst_Aplanarity_stack_6 = new TH1D("VH_tagFirst_Aplanarity_stack_6","",50,0,1);
   VH_tagFirst_Aplanarity_stack_6->SetBinContent(1,77.37183);
   VH_tagFirst_Aplanarity_stack_6->SetBinContent(2,7.864671);
   VH_tagFirst_Aplanarity_stack_6->SetBinContent(3,1.877139);
   VH_tagFirst_Aplanarity_stack_6->SetBinContent(4,1.230356);
   VH_tagFirst_Aplanarity_stack_6->SetBinContent(5,0.3791198);
   VH_tagFirst_Aplanarity_stack_6->SetBinContent(6,0.2056721);
   VH_tagFirst_Aplanarity_stack_6->SetBinContent(7,0.09931191);
   VH_tagFirst_Aplanarity_stack_6->SetBinError(1,3.070943);
   VH_tagFirst_Aplanarity_stack_6->SetBinError(2,0.9383658);
   VH_tagFirst_Aplanarity_stack_6->SetBinError(3,0.4481011);
   VH_tagFirst_Aplanarity_stack_6->SetBinError(4,0.3968533);
   VH_tagFirst_Aplanarity_stack_6->SetBinError(5,0.2204891);
   VH_tagFirst_Aplanarity_stack_6->SetBinError(6,0.1456199);
   VH_tagFirst_Aplanarity_stack_6->SetBinError(7,0.09931191);
   VH_tagFirst_Aplanarity_stack_6->SetEntries(777);

   ci = TColor::GetColor("#9933ff");
   VH_tagFirst_Aplanarity_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VH_tagFirst_Aplanarity_stack_6->SetLineColor(ci);
   VH_tagFirst_Aplanarity_stack_6->GetXaxis()->SetRange(1,100);
   VH_tagFirst_Aplanarity_stack_6->GetXaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity_stack_6->GetXaxis()->SetTitleOffset(1);
   VH_tagFirst_Aplanarity_stack_6->GetXaxis()->SetTitleFont(42);
   VH_tagFirst_Aplanarity_stack_6->GetYaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity_stack_6->GetYaxis()->SetTitleFont(42);
   VH_tagFirst_Aplanarity_stack_6->GetZaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity_stack_6->GetZaxis()->SetTitleOffset(1);
   VH_tagFirst_Aplanarity_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VH_tagFirst_Aplanarity_stack_6,"");
   
   TH1D *VH_tagFirst_Aplanarity_stack_7 = new TH1D("VH_tagFirst_Aplanarity_stack_7","",50,0,1);
   VH_tagFirst_Aplanarity_stack_7->SetBinContent(1,206.693);
   VH_tagFirst_Aplanarity_stack_7->SetBinContent(2,22.213);
   VH_tagFirst_Aplanarity_stack_7->SetBinContent(3,3.896866);
   VH_tagFirst_Aplanarity_stack_7->SetBinContent(4,2.01081);
   VH_tagFirst_Aplanarity_stack_7->SetBinContent(5,0.9467129);
   VH_tagFirst_Aplanarity_stack_7->SetBinContent(6,0.7092143);
   VH_tagFirst_Aplanarity_stack_7->SetBinContent(7,0.09976565);
   VH_tagFirst_Aplanarity_stack_7->SetBinContent(8,0.1817265);
   VH_tagFirst_Aplanarity_stack_7->SetBinError(1,4.482381);
   VH_tagFirst_Aplanarity_stack_7->SetBinError(2,1.450606);
   VH_tagFirst_Aplanarity_stack_7->SetBinError(3,0.6086357);
   VH_tagFirst_Aplanarity_stack_7->SetBinError(4,0.4477624);
   VH_tagFirst_Aplanarity_stack_7->SetBinError(5,0.3029851);
   VH_tagFirst_Aplanarity_stack_7->SetBinError(6,0.2711724);
   VH_tagFirst_Aplanarity_stack_7->SetBinError(7,0.09976565);
   VH_tagFirst_Aplanarity_stack_7->SetBinError(8,0.1301822);
   VH_tagFirst_Aplanarity_stack_7->SetEntries(2555);

   ci = TColor::GetColor("#3399ff");
   VH_tagFirst_Aplanarity_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VH_tagFirst_Aplanarity_stack_7->SetLineColor(ci);
   VH_tagFirst_Aplanarity_stack_7->GetXaxis()->SetRange(1,100);
   VH_tagFirst_Aplanarity_stack_7->GetXaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity_stack_7->GetXaxis()->SetTitleOffset(1);
   VH_tagFirst_Aplanarity_stack_7->GetXaxis()->SetTitleFont(42);
   VH_tagFirst_Aplanarity_stack_7->GetYaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity_stack_7->GetYaxis()->SetTitleFont(42);
   VH_tagFirst_Aplanarity_stack_7->GetZaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity_stack_7->GetZaxis()->SetTitleOffset(1);
   VH_tagFirst_Aplanarity_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VH_tagFirst_Aplanarity_stack_7,"");
   
   TH1D *VH_tagFirst_Aplanarity_stack_8 = new TH1D("VH_tagFirst_Aplanarity_stack_8","",50,0,1);
   VH_tagFirst_Aplanarity_stack_8->SetBinContent(1,145.98);
   VH_tagFirst_Aplanarity_stack_8->SetBinContent(2,17.11246);
   VH_tagFirst_Aplanarity_stack_8->SetBinContent(3,3.957678);
   VH_tagFirst_Aplanarity_stack_8->SetBinContent(4,1.616426);
   VH_tagFirst_Aplanarity_stack_8->SetBinContent(5,1.139779);
   VH_tagFirst_Aplanarity_stack_8->SetBinContent(6,0.9412758);
   VH_tagFirst_Aplanarity_stack_8->SetBinContent(8,0.2475029);
   VH_tagFirst_Aplanarity_stack_8->SetBinError(1,5.779926);
   VH_tagFirst_Aplanarity_stack_8->SetBinError(2,1.955658);
   VH_tagFirst_Aplanarity_stack_8->SetBinError(3,0.9411443);
   VH_tagFirst_Aplanarity_stack_8->SetBinError(4,0.6196642);
   VH_tagFirst_Aplanarity_stack_8->SetBinError(5,0.5260633);
   VH_tagFirst_Aplanarity_stack_8->SetBinError(6,0.4286176);
   VH_tagFirst_Aplanarity_stack_8->SetBinError(8,0.2475029);
   VH_tagFirst_Aplanarity_stack_8->SetEntries(787);

   ci = TColor::GetColor("#33ff99");
   VH_tagFirst_Aplanarity_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VH_tagFirst_Aplanarity_stack_8->SetLineColor(ci);
   VH_tagFirst_Aplanarity_stack_8->GetXaxis()->SetRange(1,100);
   VH_tagFirst_Aplanarity_stack_8->GetXaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity_stack_8->GetXaxis()->SetTitleOffset(1);
   VH_tagFirst_Aplanarity_stack_8->GetXaxis()->SetTitleFont(42);
   VH_tagFirst_Aplanarity_stack_8->GetYaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity_stack_8->GetYaxis()->SetTitleFont(42);
   VH_tagFirst_Aplanarity_stack_8->GetZaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity_stack_8->GetZaxis()->SetTitleOffset(1);
   VH_tagFirst_Aplanarity_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VH_tagFirst_Aplanarity_stack_8,"");
   
   TH1D *VH_tagFirst_Aplanarity_stack_9 = new TH1D("VH_tagFirst_Aplanarity_stack_9","",50,0,1);
   VH_tagFirst_Aplanarity_stack_9->SetBinContent(1,69.89437);
   VH_tagFirst_Aplanarity_stack_9->SetBinContent(2,7.173316);
   VH_tagFirst_Aplanarity_stack_9->SetBinContent(3,1.7444);
   VH_tagFirst_Aplanarity_stack_9->SetBinContent(4,0.5031374);
   VH_tagFirst_Aplanarity_stack_9->SetBinContent(5,0.2302101);
   VH_tagFirst_Aplanarity_stack_9->SetBinContent(6,0.1259001);
   VH_tagFirst_Aplanarity_stack_9->SetBinContent(7,0.06856422);
   VH_tagFirst_Aplanarity_stack_9->SetBinContent(8,0.05152397);
   VH_tagFirst_Aplanarity_stack_9->SetBinContent(9,0.01837382);
   VH_tagFirst_Aplanarity_stack_9->SetBinContent(10,0.01856078);
   VH_tagFirst_Aplanarity_stack_9->SetBinContent(11,0.006908043);
   VH_tagFirst_Aplanarity_stack_9->SetBinContent(12,0.00463906);
   VH_tagFirst_Aplanarity_stack_9->SetBinContent(13,0.00163291);
   VH_tagFirst_Aplanarity_stack_9->SetBinContent(14,0.001495078);
   VH_tagFirst_Aplanarity_stack_9->SetBinContent(17,0.0009890595);
   VH_tagFirst_Aplanarity_stack_9->SetBinContent(20,0.001652488);
   VH_tagFirst_Aplanarity_stack_9->SetBinError(1,0.2988703);
   VH_tagFirst_Aplanarity_stack_9->SetBinError(2,0.09488523);
   VH_tagFirst_Aplanarity_stack_9->SetBinError(3,0.04757908);
   VH_tagFirst_Aplanarity_stack_9->SetBinError(4,0.0256858);
   VH_tagFirst_Aplanarity_stack_9->SetBinError(5,0.01722901);
   VH_tagFirst_Aplanarity_stack_9->SetBinError(6,0.01298412);
   VH_tagFirst_Aplanarity_stack_9->SetBinError(7,0.009499859);
   VH_tagFirst_Aplanarity_stack_9->SetBinError(8,0.008283853);
   VH_tagFirst_Aplanarity_stack_9->SetBinError(9,0.004811613);
   VH_tagFirst_Aplanarity_stack_9->SetBinError(10,0.005102249);
   VH_tagFirst_Aplanarity_stack_9->SetBinError(11,0.00315263);
   VH_tagFirst_Aplanarity_stack_9->SetBinError(12,0.002716629);
   VH_tagFirst_Aplanarity_stack_9->SetBinError(13,0.00163291);
   VH_tagFirst_Aplanarity_stack_9->SetBinError(14,0.001495078);
   VH_tagFirst_Aplanarity_stack_9->SetBinError(17,0.0009890595);
   VH_tagFirst_Aplanarity_stack_9->SetBinError(20,0.001652488);
   VH_tagFirst_Aplanarity_stack_9->SetEntries(65508);

   ci = TColor::GetColor("#cccc00");
   VH_tagFirst_Aplanarity_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VH_tagFirst_Aplanarity_stack_9->SetLineColor(ci);
   VH_tagFirst_Aplanarity_stack_9->GetXaxis()->SetRange(1,100);
   VH_tagFirst_Aplanarity_stack_9->GetXaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity_stack_9->GetXaxis()->SetTitleOffset(1);
   VH_tagFirst_Aplanarity_stack_9->GetXaxis()->SetTitleFont(42);
   VH_tagFirst_Aplanarity_stack_9->GetYaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity_stack_9->GetYaxis()->SetTitleFont(42);
   VH_tagFirst_Aplanarity_stack_9->GetZaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity_stack_9->GetZaxis()->SetTitleOffset(1);
   VH_tagFirst_Aplanarity_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VH_tagFirst_Aplanarity_stack_9,"");
   
   TH1D *VH_tagFirst_Aplanarity_stack_10 = new TH1D("VH_tagFirst_Aplanarity_stack_10","",50,0,1);
   VH_tagFirst_Aplanarity_stack_10->SetBinContent(1,37.02249);
   VH_tagFirst_Aplanarity_stack_10->SetBinContent(2,4.182528);
   VH_tagFirst_Aplanarity_stack_10->SetBinContent(3,1.015279);
   VH_tagFirst_Aplanarity_stack_10->SetBinContent(4,0.3473006);
   VH_tagFirst_Aplanarity_stack_10->SetBinContent(5,0.1691889);
   VH_tagFirst_Aplanarity_stack_10->SetBinContent(6,0.07499716);
   VH_tagFirst_Aplanarity_stack_10->SetBinContent(7,0.04906942);
   VH_tagFirst_Aplanarity_stack_10->SetBinContent(8,0.024523);
   VH_tagFirst_Aplanarity_stack_10->SetBinContent(9,0.01447894);
   VH_tagFirst_Aplanarity_stack_10->SetBinContent(10,0.009176402);
   VH_tagFirst_Aplanarity_stack_10->SetBinContent(11,0.004281904);
   VH_tagFirst_Aplanarity_stack_10->SetBinContent(12,0.003346834);
   VH_tagFirst_Aplanarity_stack_10->SetBinContent(13,0.001946473);
   VH_tagFirst_Aplanarity_stack_10->SetBinContent(14,0.001050011);
   VH_tagFirst_Aplanarity_stack_10->SetBinContent(15,0.0003570109);
   VH_tagFirst_Aplanarity_stack_10->SetBinContent(16,0.00104278);
   VH_tagFirst_Aplanarity_stack_10->SetBinContent(17,0.0001849763);
   VH_tagFirst_Aplanarity_stack_10->SetBinContent(18,0.0006928691);
   VH_tagFirst_Aplanarity_stack_10->SetBinContent(19,0.000347843);
   VH_tagFirst_Aplanarity_stack_10->SetBinContent(20,0.0003891001);
   VH_tagFirst_Aplanarity_stack_10->SetBinContent(21,0.0003535607);
   VH_tagFirst_Aplanarity_stack_10->SetBinError(1,0.1106127);
   VH_tagFirst_Aplanarity_stack_10->SetBinError(2,0.03668823);
   VH_tagFirst_Aplanarity_stack_10->SetBinError(3,0.01810184);
   VH_tagFirst_Aplanarity_stack_10->SetBinError(4,0.01076111);
   VH_tagFirst_Aplanarity_stack_10->SetBinError(5,0.007556468);
   VH_tagFirst_Aplanarity_stack_10->SetBinError(6,0.005000084);
   VH_tagFirst_Aplanarity_stack_10->SetBinError(7,0.004080392);
   VH_tagFirst_Aplanarity_stack_10->SetBinError(8,0.002855753);
   VH_tagFirst_Aplanarity_stack_10->SetBinError(9,0.002169262);
   VH_tagFirst_Aplanarity_stack_10->SetBinError(10,0.001735857);
   VH_tagFirst_Aplanarity_stack_10->SetBinError(11,0.001312563);
   VH_tagFirst_Aplanarity_stack_10->SetBinError(12,0.001041578);
   VH_tagFirst_Aplanarity_stack_10->SetBinError(13,0.0008038125);
   VH_tagFirst_Aplanarity_stack_10->SetBinError(14,0.0006064742);
   VH_tagFirst_Aplanarity_stack_10->SetBinError(15,0.0003570109);
   VH_tagFirst_Aplanarity_stack_10->SetBinError(16,0.0006070986);
   VH_tagFirst_Aplanarity_stack_10->SetBinError(17,0.0001849763);
   VH_tagFirst_Aplanarity_stack_10->SetBinError(18,0.0005036366);
   VH_tagFirst_Aplanarity_stack_10->SetBinError(19,0.000347843);
   VH_tagFirst_Aplanarity_stack_10->SetBinError(20,0.0003891001);
   VH_tagFirst_Aplanarity_stack_10->SetBinError(21,0.0003535607);
   VH_tagFirst_Aplanarity_stack_10->SetEntries(137175);

   ci = TColor::GetColor("#0000cc");
   VH_tagFirst_Aplanarity_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VH_tagFirst_Aplanarity_stack_10->SetLineColor(ci);
   VH_tagFirst_Aplanarity_stack_10->GetXaxis()->SetRange(1,100);
   VH_tagFirst_Aplanarity_stack_10->GetXaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity_stack_10->GetXaxis()->SetTitleOffset(1);
   VH_tagFirst_Aplanarity_stack_10->GetXaxis()->SetTitleFont(42);
   VH_tagFirst_Aplanarity_stack_10->GetYaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity_stack_10->GetYaxis()->SetTitleFont(42);
   VH_tagFirst_Aplanarity_stack_10->GetZaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity_stack_10->GetZaxis()->SetTitleOffset(1);
   VH_tagFirst_Aplanarity_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VH_tagFirst_Aplanarity_stack_10,"");
   
   TH1D *VH_tagFirst_Aplanarity_stack_11 = new TH1D("VH_tagFirst_Aplanarity_stack_11","",50,0,1);
   VH_tagFirst_Aplanarity_stack_11->SetBinContent(1,1.609715);
   VH_tagFirst_Aplanarity_stack_11->SetBinContent(2,0.1446259);
   VH_tagFirst_Aplanarity_stack_11->SetBinContent(3,0.03459963);
   VH_tagFirst_Aplanarity_stack_11->SetBinContent(4,0.01257971);
   VH_tagFirst_Aplanarity_stack_11->SetBinContent(6,0.001736123);
   VH_tagFirst_Aplanarity_stack_11->SetBinError(1,0.05767219);
   VH_tagFirst_Aplanarity_stack_11->SetBinError(2,0.0173736);
   VH_tagFirst_Aplanarity_stack_11->SetBinError(3,0.00827911);
   VH_tagFirst_Aplanarity_stack_11->SetBinError(4,0.005226104);
   VH_tagFirst_Aplanarity_stack_11->SetBinError(6,0.001736123);
   VH_tagFirst_Aplanarity_stack_11->SetEntries(910);

   ci = TColor::GetColor("#cc0000");
   VH_tagFirst_Aplanarity_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VH_tagFirst_Aplanarity_stack_11->SetLineColor(ci);
   VH_tagFirst_Aplanarity_stack_11->GetXaxis()->SetRange(1,100);
   VH_tagFirst_Aplanarity_stack_11->GetXaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity_stack_11->GetXaxis()->SetTitleOffset(1);
   VH_tagFirst_Aplanarity_stack_11->GetXaxis()->SetTitleFont(42);
   VH_tagFirst_Aplanarity_stack_11->GetYaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity_stack_11->GetYaxis()->SetTitleFont(42);
   VH_tagFirst_Aplanarity_stack_11->GetZaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity_stack_11->GetZaxis()->SetTitleOffset(1);
   VH_tagFirst_Aplanarity_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VH_tagFirst_Aplanarity_stack_11,"");
   
   TH1D *VH_tagFirst_Aplanarity_stack_12 = new TH1D("VH_tagFirst_Aplanarity_stack_12","",50,0,1);
   VH_tagFirst_Aplanarity_stack_12->SetBinContent(1,0.7670529);
   VH_tagFirst_Aplanarity_stack_12->SetBinContent(2,0.08420531);
   VH_tagFirst_Aplanarity_stack_12->SetBinContent(3,0.01901949);
   VH_tagFirst_Aplanarity_stack_12->SetBinContent(4,0.00915197);
   VH_tagFirst_Aplanarity_stack_12->SetBinContent(5,0.00235314);
   VH_tagFirst_Aplanarity_stack_12->SetBinContent(6,0.0009582023);
   VH_tagFirst_Aplanarity_stack_12->SetBinContent(7,0.0005351393);
   VH_tagFirst_Aplanarity_stack_12->SetBinContent(8,0.001331997);
   VH_tagFirst_Aplanarity_stack_12->SetBinContent(9,0.0004297189);
   VH_tagFirst_Aplanarity_stack_12->SetBinContent(10,0.0002359775);
   VH_tagFirst_Aplanarity_stack_12->SetBinContent(14,0.0002685819);
   VH_tagFirst_Aplanarity_stack_12->SetBinError(1,0.01492304);
   VH_tagFirst_Aplanarity_stack_12->SetBinError(2,0.004904862);
   VH_tagFirst_Aplanarity_stack_12->SetBinError(3,0.002342118);
   VH_tagFirst_Aplanarity_stack_12->SetBinError(4,0.001650772);
   VH_tagFirst_Aplanarity_stack_12->SetBinError(5,0.0008391686);
   VH_tagFirst_Aplanarity_stack_12->SetBinError(6,0.0004918059);
   VH_tagFirst_Aplanarity_stack_12->SetBinError(7,0.0003784505);
   VH_tagFirst_Aplanarity_stack_12->SetBinError(8,0.0006290442);
   VH_tagFirst_Aplanarity_stack_12->SetBinError(9,0.0004297189);
   VH_tagFirst_Aplanarity_stack_12->SetBinError(10,0.0002359775);
   VH_tagFirst_Aplanarity_stack_12->SetBinError(14,0.0002685819);
   VH_tagFirst_Aplanarity_stack_12->SetEntries(3163);

   ci = TColor::GetColor("#00cc00");
   VH_tagFirst_Aplanarity_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VH_tagFirst_Aplanarity_stack_12->SetLineColor(ci);
   VH_tagFirst_Aplanarity_stack_12->GetXaxis()->SetRange(1,100);
   VH_tagFirst_Aplanarity_stack_12->GetXaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity_stack_12->GetXaxis()->SetTitleOffset(1);
   VH_tagFirst_Aplanarity_stack_12->GetXaxis()->SetTitleFont(42);
   VH_tagFirst_Aplanarity_stack_12->GetYaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity_stack_12->GetYaxis()->SetTitleFont(42);
   VH_tagFirst_Aplanarity_stack_12->GetZaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity_stack_12->GetZaxis()->SetTitleOffset(1);
   VH_tagFirst_Aplanarity_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VH_tagFirst_Aplanarity_stack_12,"");
   st->Draw("hist");
   
   TH1D *VH_tagFirst_Aplanarity__379 = new TH1D("VH_tagFirst_Aplanarity__379","",50,0,1);
   VH_tagFirst_Aplanarity__379->SetBinContent(0,1);
   VH_tagFirst_Aplanarity__379->SetBinContent(1,2981085);
   VH_tagFirst_Aplanarity__379->SetBinContent(2,416567);
   VH_tagFirst_Aplanarity__379->SetBinContent(3,107543);
   VH_tagFirst_Aplanarity__379->SetBinContent(4,35896);
   VH_tagFirst_Aplanarity__379->SetBinContent(5,14115);
   VH_tagFirst_Aplanarity__379->SetBinContent(6,6572);
   VH_tagFirst_Aplanarity__379->SetBinContent(7,3553);
   VH_tagFirst_Aplanarity__379->SetBinContent(8,1956);
   VH_tagFirst_Aplanarity__379->SetBinContent(9,1142);
   VH_tagFirst_Aplanarity__379->SetBinContent(10,750);
   VH_tagFirst_Aplanarity__379->SetBinContent(11,429);
   VH_tagFirst_Aplanarity__379->SetBinContent(12,284);
   VH_tagFirst_Aplanarity__379->SetBinContent(13,188);
   VH_tagFirst_Aplanarity__379->SetBinContent(14,102);
   VH_tagFirst_Aplanarity__379->SetBinContent(15,83);
   VH_tagFirst_Aplanarity__379->SetBinContent(16,39);
   VH_tagFirst_Aplanarity__379->SetBinContent(17,25);
   VH_tagFirst_Aplanarity__379->SetBinContent(18,10);
   VH_tagFirst_Aplanarity__379->SetBinContent(19,10);
   VH_tagFirst_Aplanarity__379->SetBinContent(20,5);
   VH_tagFirst_Aplanarity__379->SetBinContent(21,2);
   VH_tagFirst_Aplanarity__379->SetEntries(3570406);

   ci = TColor::GetColor("#000099");
   VH_tagFirst_Aplanarity__379->SetLineColor(ci);
   VH_tagFirst_Aplanarity__379->SetLineWidth(2);
   VH_tagFirst_Aplanarity__379->SetMarkerStyle(20);
   VH_tagFirst_Aplanarity__379->SetMarkerSize(1.2);
   VH_tagFirst_Aplanarity__379->GetXaxis()->SetRange(1,100);
   VH_tagFirst_Aplanarity__379->GetXaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity__379->GetXaxis()->SetTitleOffset(1);
   VH_tagFirst_Aplanarity__379->GetXaxis()->SetTitleFont(42);
   VH_tagFirst_Aplanarity__379->GetYaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity__379->GetYaxis()->SetTitleFont(42);
   VH_tagFirst_Aplanarity__379->GetZaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity__379->GetZaxis()->SetTitleOffset(1);
   VH_tagFirst_Aplanarity__379->GetZaxis()->SetTitleFont(42);
   VH_tagFirst_Aplanarity__379->Draw("same E");
   
   Double_t Graph_from_VH_tagFirst_Aplanarity_fx1379[50] = { 0.01, 0.03, 0.05, 0.07, 0.09, 0.11, 0.13, 0.15, 0.17, 0.19, 0.21, 0.23, 0.25, 0.27, 0.29, 0.31, 0.33,
   0.35, 0.37, 0.39, 0.41, 0.43, 0.45, 0.47, 0.49, 0.51, 0.53, 0.55, 0.57, 0.59, 0.61, 0.63, 0.65,
   0.67, 0.69, 0.71, 0.73, 0.75, 0.77, 0.79, 0.81, 0.83, 0.85, 0.87, 0.89, 0.91, 0.93, 0.95, 0.97,
   0.99 };
   Double_t Graph_from_VH_tagFirst_Aplanarity_fy1379[50] = { 2288942, 324885.3, 82303.17, 27417.45, 8782.015, 4250.724, 2547.188, 1595.974, 792.6346, 250.8897, 202.7493, 460.4991, 147.2422, 43.72108, 44.18681, 7.837436, 16.31989,
   3.722994, 1.5572, 1.033116, 0.2562941, 0.0537772, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0 };
   Double_t Graph_from_VH_tagFirst_Aplanarity_fex1379[50] = { 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01 };
   Double_t Graph_from_VH_tagFirst_Aplanarity_fey1379[50] = { 39300.51, 19240.7, 4193.692, 2188.086, 907.6885, 607.9369, 443.3182, 379.1339, 190.9892, 34.05664, 37.05015, 251.1136, 40.19793, 12.34353, 17.70542, 0.8197684, 8.575358,
   0.6744816, 0.3008623, 0.3684193, 0.121023, 0.0537772, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0 };
   TGraphErrors *gre = new TGraphErrors(50,Graph_from_VH_tagFirst_Aplanarity_fx1379,Graph_from_VH_tagFirst_Aplanarity_fy1379,Graph_from_VH_tagFirst_Aplanarity_fex1379,Graph_from_VH_tagFirst_Aplanarity_fey1379);
   gre->SetName("Graph_from_VH_tagFirst_Aplanarity");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VH_tagFirst_Aplanarity1379 = new TH1F("Graph_Graph_from_VH_tagFirst_Aplanarity1379","",100,0,1.1);
   Graph_Graph_from_VH_tagFirst_Aplanarity1379->SetMinimum(0);
   Graph_Graph_from_VH_tagFirst_Aplanarity1379->SetMaximum(2561067);
   Graph_Graph_from_VH_tagFirst_Aplanarity1379->SetDirectory(nullptr);
   Graph_Graph_from_VH_tagFirst_Aplanarity1379->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VH_tagFirst_Aplanarity1379->SetLineColor(ci);
   Graph_Graph_from_VH_tagFirst_Aplanarity1379->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VH_tagFirst_Aplanarity1379->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_from_VH_tagFirst_Aplanarity1379->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VH_tagFirst_Aplanarity1379->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VH_tagFirst_Aplanarity1379->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VH_tagFirst_Aplanarity1379->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VH_tagFirst_Aplanarity1379->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_from_VH_tagFirst_Aplanarity1379->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VH_tagFirst_Aplanarity1379);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VH_tagFirst_Aplanarity","Data (BTagCSV, 2016)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VH_tagFirst_Aplanarity","ggZHcc","F");

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
   entry=leg->AddEntry("VH_tagFirst_Aplanarity","ZHcc","F");

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
   entry=leg->AddEntry("VH_tagFirst_Aplanarity","ggZHbb","F");

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
   entry=leg->AddEntry("VH_tagFirst_Aplanarity","ZHbb","F");

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
   entry=leg->AddEntry("VH_tagFirst_Aplanarity","ZZ","F");

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
   entry=leg->AddEntry("VH_tagFirst_Aplanarity","WZ","F");

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
   entry=leg->AddEntry("VH_tagFirst_Aplanarity","WW","F");

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
   entry=leg->AddEntry("VH_tagFirst_Aplanarity","W + jets","F");

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
   entry=leg->AddEntry("VH_tagFirst_Aplanarity","Z + jets","F");

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
   entry=leg->AddEntry("VH_tagFirst_Aplanarity","t#bar{t}","F");

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
   entry=leg->AddEntry("VH_tagFirst_Aplanarity","Single top","F");

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
   entry=leg->AddEntry("VH_tagFirst_Aplanarity","QCD","F");

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
   entry=leg->AddEntry("Graph_from_VH_tagFirst_Aplanarity","MC unc. (stat.)","fl");

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
   data_mc_ratio__380->SetBinContent(1,1.302386);
   data_mc_ratio__380->SetBinContent(2,1.282197);
   data_mc_ratio__380->SetBinContent(3,1.306669);
   data_mc_ratio__380->SetBinContent(4,1.309239);
   data_mc_ratio__380->SetBinContent(5,1.607262);
   data_mc_ratio__380->SetBinContent(6,1.546089);
   data_mc_ratio__380->SetBinContent(7,1.394872);
   data_mc_ratio__380->SetBinContent(8,1.225584);
   data_mc_ratio__380->SetBinContent(9,1.440765);
   data_mc_ratio__380->SetBinContent(10,2.989362);
   data_mc_ratio__380->SetBinContent(11,2.115914);
   data_mc_ratio__380->SetBinContent(12,0.6167222);
   data_mc_ratio__380->SetBinContent(13,1.276808);
   data_mc_ratio__380->SetBinContent(14,2.332971);
   data_mc_ratio__380->SetBinContent(15,1.878389);
   data_mc_ratio__380->SetBinContent(16,4.976117);
   data_mc_ratio__380->SetBinContent(17,1.531874);
   data_mc_ratio__380->SetBinContent(18,2.68601);
   data_mc_ratio__380->SetBinContent(19,6.421784);
   data_mc_ratio__380->SetBinContent(20,4.839729);
   data_mc_ratio__380->SetBinContent(21,7.803536);
   data_mc_ratio__380->SetBinError(1,0.0007543144);
   data_mc_ratio__380->SetBinError(2,0.001986609);
   data_mc_ratio__380->SetBinError(3,0.003984506);
   data_mc_ratio__380->SetBinError(4,0.006910285);
   data_mc_ratio__380->SetBinError(5,0.01352839);
   data_mc_ratio__380->SetBinError(6,0.01907154);
   data_mc_ratio__380->SetBinError(7,0.02340112);
   data_mc_ratio__380->SetBinError(8,0.02771142);
   data_mc_ratio__380->SetBinError(9,0.04263438);
   data_mc_ratio__380->SetBinError(10,0.109156);
   data_mc_ratio__380->SetBinError(11,0.1021573);
   data_mc_ratio__380->SetBinError(12,0.03659573);
   data_mc_ratio__380->SetBinError(13,0.09312078);
   data_mc_ratio__380->SetBinError(14,0.2309985);
   data_mc_ratio__380->SetBinError(15,0.20618);
   data_mc_ratio__380->SetBinError(16,0.7968164);
   data_mc_ratio__380->SetBinError(17,0.3063747);
   data_mc_ratio__380->SetBinError(18,0.8493911);
   data_mc_ratio__380->SetBinError(19,2.030747);
   data_mc_ratio__380->SetBinError(20,2.164392);
   data_mc_ratio__380->SetBinError(21,5.517933);
   data_mc_ratio__380->SetMinimum(0.4);
   data_mc_ratio__380->SetMaximum(1.6);
   data_mc_ratio__380->SetEntries(43.41783);
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
   Double_t Graph_from_mc_statistical_error_fey1380[50] = { 0.01716973, 0.05922308, 0.05095419, 0.07980632, 0.1033577, 0.1430196, 0.1740422, 0.2375565, 0.2409549, 0.1357435, 0.1827387, 0.5453075, 0.2730055, 0.2823244, 0.4006946, 0.1045965, 0.5254546,
   0.1811665, 0.1932073, 0.3566099, 0.4722035, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
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
   Graph_Graph_from_mc_statistical_error1380->SetMinimum(0);
   Graph_Graph_from_mc_statistical_error1380->SetMaximum(2.2);
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
