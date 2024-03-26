#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Sphericity_DHZfirst_17()
{
//=========Macro generated from canvas: Sphericity_DHZfirst_17/Sphericity_DHZfirst_17
//=========  (Wed Feb 14 12:33:03 2024) by ROOT version 6.28/10
   TCanvas *Sphericity_DHZfirst_17 = new TCanvas("Sphericity_DHZfirst_17", "Sphericity_DHZfirst_17",0,0,600,600);
   Sphericity_DHZfirst_17->SetHighLightColor(2);
   Sphericity_DHZfirst_17->Range(0,0,1,1);
   Sphericity_DHZfirst_17->SetFillColor(0);
   Sphericity_DHZfirst_17->SetFillStyle(4000);
   Sphericity_DHZfirst_17->SetBorderMode(0);
   Sphericity_DHZfirst_17->SetBorderSize(2);
   Sphericity_DHZfirst_17->SetFrameFillStyle(1000);
   Sphericity_DHZfirst_17->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.1532254,-166.3359,1.052419,166179.6);
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
   st->SetMaximum(149545);
   
   TH1F *st_stack_116 = new TH1F("st_stack_116","",25,0,1);
   st_stack_116->SetMinimum(0.01);
   st_stack_116->SetMaximum(149545);
   st_stack_116->SetDirectory(nullptr);
   st_stack_116->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_116->SetLineColor(ci);
   st_stack_116->SetLineWidth(0);
   st_stack_116->GetXaxis()->SetRange(1,25);
   st_stack_116->GetXaxis()->SetLabelFont(42);
   st_stack_116->GetXaxis()->SetTitleOffset(1);
   st_stack_116->GetXaxis()->SetTitleFont(42);
   st_stack_116->GetYaxis()->SetTitle("Events/0.04");
   st_stack_116->GetYaxis()->SetLabelFont(42);
   st_stack_116->GetYaxis()->SetLabelSize(0.05);
   st_stack_116->GetYaxis()->SetTitleSize(0.057);
   st_stack_116->GetYaxis()->SetTitleOffset(1.2);
   st_stack_116->GetYaxis()->SetTitleFont(42);
   st_stack_116->GetZaxis()->SetLabelFont(42);
   st_stack_116->GetZaxis()->SetTitleOffset(1);
   st_stack_116->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_116);
   
   
   TH1D *VH_DHZfirst_Sphericity_stack_1 = new TH1D("VH_DHZfirst_Sphericity_stack_1","",25,0,1);
   VH_DHZfirst_Sphericity_stack_1->SetBinContent(1,47458.83);
   VH_DHZfirst_Sphericity_stack_1->SetBinContent(2,62089.19);
   VH_DHZfirst_Sphericity_stack_1->SetBinContent(3,22481.28);
   VH_DHZfirst_Sphericity_stack_1->SetBinContent(4,12033.87);
   VH_DHZfirst_Sphericity_stack_1->SetBinContent(5,8584.767);
   VH_DHZfirst_Sphericity_stack_1->SetBinContent(6,3607.069);
   VH_DHZfirst_Sphericity_stack_1->SetBinContent(7,3734.88);
   VH_DHZfirst_Sphericity_stack_1->SetBinContent(8,385.5261);
   VH_DHZfirst_Sphericity_stack_1->SetBinContent(9,61.01755);
   VH_DHZfirst_Sphericity_stack_1->SetBinContent(10,347.3506);
   VH_DHZfirst_Sphericity_stack_1->SetBinContent(11,9.174606);
   VH_DHZfirst_Sphericity_stack_1->SetBinContent(12,16.89586);
   VH_DHZfirst_Sphericity_stack_1->SetBinContent(13,6.450446);
   VH_DHZfirst_Sphericity_stack_1->SetBinContent(14,1.959578);
   VH_DHZfirst_Sphericity_stack_1->SetBinContent(15,0.1762375);
   VH_DHZfirst_Sphericity_stack_1->SetBinContent(17,1.999241);
   VH_DHZfirst_Sphericity_stack_1->SetBinError(1,2774.642);
   VH_DHZfirst_Sphericity_stack_1->SetBinError(2,23814.59);
   VH_DHZfirst_Sphericity_stack_1->SetBinError(3,2446.887);
   VH_DHZfirst_Sphericity_stack_1->SetBinError(4,1666.184);
   VH_DHZfirst_Sphericity_stack_1->SetBinError(5,1735.628);
   VH_DHZfirst_Sphericity_stack_1->SetBinError(6,850.2491);
   VH_DHZfirst_Sphericity_stack_1->SetBinError(7,2937.667);
   VH_DHZfirst_Sphericity_stack_1->SetBinError(8,206.4504);
   VH_DHZfirst_Sphericity_stack_1->SetBinError(9,31.37369);
   VH_DHZfirst_Sphericity_stack_1->SetBinError(10,344.12);
   VH_DHZfirst_Sphericity_stack_1->SetBinError(11,5.507057);
   VH_DHZfirst_Sphericity_stack_1->SetBinError(12,13.54043);
   VH_DHZfirst_Sphericity_stack_1->SetBinError(13,6.128068);
   VH_DHZfirst_Sphericity_stack_1->SetBinError(14,1.959578);
   VH_DHZfirst_Sphericity_stack_1->SetBinError(15,0.1762375);
   VH_DHZfirst_Sphericity_stack_1->SetBinError(17,1.999241);
   VH_DHZfirst_Sphericity_stack_1->SetEntries(11551);

   ci = TColor::GetColor("#ff6600");
   VH_DHZfirst_Sphericity_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VH_DHZfirst_Sphericity_stack_1->SetLineColor(ci);
   VH_DHZfirst_Sphericity_stack_1->GetXaxis()->SetRange(1,100);
   VH_DHZfirst_Sphericity_stack_1->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_Sphericity_stack_1->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_Sphericity_stack_1->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_Sphericity_stack_1->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_Sphericity_stack_1->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_Sphericity_stack_1->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_Sphericity_stack_1->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_Sphericity_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VH_DHZfirst_Sphericity_stack_1,"");
   
   TH1D *VH_DHZfirst_Sphericity_stack_2 = new TH1D("VH_DHZfirst_Sphericity_stack_2","",25,0,1);
   VH_DHZfirst_Sphericity_stack_2->SetBinContent(1,407.7894);
   VH_DHZfirst_Sphericity_stack_2->SetBinContent(2,407.6745);
   VH_DHZfirst_Sphericity_stack_2->SetBinContent(3,224.9931);
   VH_DHZfirst_Sphericity_stack_2->SetBinContent(4,120.6049);
   VH_DHZfirst_Sphericity_stack_2->SetBinContent(5,60.81459);
   VH_DHZfirst_Sphericity_stack_2->SetBinContent(6,29.54216);
   VH_DHZfirst_Sphericity_stack_2->SetBinContent(7,12.61314);
   VH_DHZfirst_Sphericity_stack_2->SetBinContent(8,4.311582);
   VH_DHZfirst_Sphericity_stack_2->SetBinContent(9,1.324727);
   VH_DHZfirst_Sphericity_stack_2->SetBinContent(10,2.393878);
   VH_DHZfirst_Sphericity_stack_2->SetBinContent(11,0.6537298);
   VH_DHZfirst_Sphericity_stack_2->SetBinContent(12,0.4261309);
   VH_DHZfirst_Sphericity_stack_2->SetBinContent(13,0.1571454);
   VH_DHZfirst_Sphericity_stack_2->SetBinContent(14,0.05747876);
   VH_DHZfirst_Sphericity_stack_2->SetBinContent(15,0.09808318);
   VH_DHZfirst_Sphericity_stack_2->SetBinContent(16,0.05058042);
   VH_DHZfirst_Sphericity_stack_2->SetBinContent(17,0.283431);
   VH_DHZfirst_Sphericity_stack_2->SetBinContent(18,0.006885793);
   VH_DHZfirst_Sphericity_stack_2->SetBinError(1,9.043845);
   VH_DHZfirst_Sphericity_stack_2->SetBinError(2,9.093546);
   VH_DHZfirst_Sphericity_stack_2->SetBinError(3,6.7093);
   VH_DHZfirst_Sphericity_stack_2->SetBinError(4,4.806049);
   VH_DHZfirst_Sphericity_stack_2->SetBinError(5,3.874007);
   VH_DHZfirst_Sphericity_stack_2->SetBinError(6,2.505642);
   VH_DHZfirst_Sphericity_stack_2->SetBinError(7,1.753496);
   VH_DHZfirst_Sphericity_stack_2->SetBinError(8,0.932056);
   VH_DHZfirst_Sphericity_stack_2->SetBinError(9,0.3387798);
   VH_DHZfirst_Sphericity_stack_2->SetBinError(10,0.7940877);
   VH_DHZfirst_Sphericity_stack_2->SetBinError(11,0.2470786);
   VH_DHZfirst_Sphericity_stack_2->SetBinError(12,0.2447789);
   VH_DHZfirst_Sphericity_stack_2->SetBinError(13,0.1110458);
   VH_DHZfirst_Sphericity_stack_2->SetBinError(14,0.03468314);
   VH_DHZfirst_Sphericity_stack_2->SetBinError(15,0.05135017);
   VH_DHZfirst_Sphericity_stack_2->SetBinError(16,0.0357709);
   VH_DHZfirst_Sphericity_stack_2->SetBinError(17,0.2335126);
   VH_DHZfirst_Sphericity_stack_2->SetBinError(18,0.006885793);
   VH_DHZfirst_Sphericity_stack_2->SetEntries(17936);

   ci = TColor::GetColor("#660066");
   VH_DHZfirst_Sphericity_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VH_DHZfirst_Sphericity_stack_2->SetLineColor(ci);
   VH_DHZfirst_Sphericity_stack_2->GetXaxis()->SetRange(1,100);
   VH_DHZfirst_Sphericity_stack_2->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_Sphericity_stack_2->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_Sphericity_stack_2->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_Sphericity_stack_2->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_Sphericity_stack_2->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_Sphericity_stack_2->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_Sphericity_stack_2->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_Sphericity_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VH_DHZfirst_Sphericity_stack_2,"");
   
   TH1D *VH_DHZfirst_Sphericity_stack_3 = new TH1D("VH_DHZfirst_Sphericity_stack_3","",25,0,1);
   VH_DHZfirst_Sphericity_stack_3->SetBinContent(1,4179.89);
   VH_DHZfirst_Sphericity_stack_3->SetBinContent(2,4336.533);
   VH_DHZfirst_Sphericity_stack_3->SetBinContent(3,2400.71);
   VH_DHZfirst_Sphericity_stack_3->SetBinContent(4,1268.492);
   VH_DHZfirst_Sphericity_stack_3->SetBinContent(5,657.6285);
   VH_DHZfirst_Sphericity_stack_3->SetBinContent(6,317.1111);
   VH_DHZfirst_Sphericity_stack_3->SetBinContent(7,146.8555);
   VH_DHZfirst_Sphericity_stack_3->SetBinContent(8,66.91641);
   VH_DHZfirst_Sphericity_stack_3->SetBinContent(9,31.95939);
   VH_DHZfirst_Sphericity_stack_3->SetBinContent(10,17.44052);
   VH_DHZfirst_Sphericity_stack_3->SetBinContent(11,10.96476);
   VH_DHZfirst_Sphericity_stack_3->SetBinContent(12,5.291361);
   VH_DHZfirst_Sphericity_stack_3->SetBinContent(13,4.384223);
   VH_DHZfirst_Sphericity_stack_3->SetBinContent(14,2.851251);
   VH_DHZfirst_Sphericity_stack_3->SetBinContent(15,1.72924);
   VH_DHZfirst_Sphericity_stack_3->SetBinContent(16,1.482157);
   VH_DHZfirst_Sphericity_stack_3->SetBinContent(17,0.7554933);
   VH_DHZfirst_Sphericity_stack_3->SetBinContent(18,0.274196);
   VH_DHZfirst_Sphericity_stack_3->SetBinContent(19,0.2184381);
   VH_DHZfirst_Sphericity_stack_3->SetBinContent(20,0.03529894);
   VH_DHZfirst_Sphericity_stack_3->SetBinContent(23,0.02102153);
   VH_DHZfirst_Sphericity_stack_3->SetBinError(1,18.04827);
   VH_DHZfirst_Sphericity_stack_3->SetBinError(2,18.26712);
   VH_DHZfirst_Sphericity_stack_3->SetBinError(3,13.63467);
   VH_DHZfirst_Sphericity_stack_3->SetBinError(4,9.928273);
   VH_DHZfirst_Sphericity_stack_3->SetBinError(5,7.110312);
   VH_DHZfirst_Sphericity_stack_3->SetBinError(6,4.96382);
   VH_DHZfirst_Sphericity_stack_3->SetBinError(7,3.312294);
   VH_DHZfirst_Sphericity_stack_3->SetBinError(8,2.238902);
   VH_DHZfirst_Sphericity_stack_3->SetBinError(9,1.551469);
   VH_DHZfirst_Sphericity_stack_3->SetBinError(10,1.087979);
   VH_DHZfirst_Sphericity_stack_3->SetBinError(11,0.8667217);
   VH_DHZfirst_Sphericity_stack_3->SetBinError(12,0.6089225);
   VH_DHZfirst_Sphericity_stack_3->SetBinError(13,0.5347694);
   VH_DHZfirst_Sphericity_stack_3->SetBinError(14,0.4561888);
   VH_DHZfirst_Sphericity_stack_3->SetBinError(15,0.3848017);
   VH_DHZfirst_Sphericity_stack_3->SetBinError(16,0.29824);
   VH_DHZfirst_Sphericity_stack_3->SetBinError(17,0.1849087);
   VH_DHZfirst_Sphericity_stack_3->SetBinError(18,0.1094969);
   VH_DHZfirst_Sphericity_stack_3->SetBinError(19,0.1012113);
   VH_DHZfirst_Sphericity_stack_3->SetBinError(20,0.03529894);
   VH_DHZfirst_Sphericity_stack_3->SetBinError(23,0.02102153);
   VH_DHZfirst_Sphericity_stack_3->SetEntries(239044);

   ci = TColor::GetColor("#cc00cc");
   VH_DHZfirst_Sphericity_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VH_DHZfirst_Sphericity_stack_3->SetLineColor(ci);
   VH_DHZfirst_Sphericity_stack_3->GetXaxis()->SetRange(1,100);
   VH_DHZfirst_Sphericity_stack_3->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_Sphericity_stack_3->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_Sphericity_stack_3->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_Sphericity_stack_3->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_Sphericity_stack_3->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_Sphericity_stack_3->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_Sphericity_stack_3->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_Sphericity_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VH_DHZfirst_Sphericity_stack_3,"");
   
   TH1D *VH_DHZfirst_Sphericity_stack_4 = new TH1D("VH_DHZfirst_Sphericity_stack_4","",25,0,1);
   VH_DHZfirst_Sphericity_stack_4->SetBinContent(1,314.5801);
   VH_DHZfirst_Sphericity_stack_4->SetBinContent(2,289.4665);
   VH_DHZfirst_Sphericity_stack_4->SetBinContent(3,175.7004);
   VH_DHZfirst_Sphericity_stack_4->SetBinContent(4,108.8157);
   VH_DHZfirst_Sphericity_stack_4->SetBinContent(5,45.56809);
   VH_DHZfirst_Sphericity_stack_4->SetBinContent(6,23.49886);
   VH_DHZfirst_Sphericity_stack_4->SetBinContent(7,7.296222);
   VH_DHZfirst_Sphericity_stack_4->SetBinContent(8,2.042842);
   VH_DHZfirst_Sphericity_stack_4->SetBinContent(9,1.075827);
   VH_DHZfirst_Sphericity_stack_4->SetBinContent(10,0.6589599);
   VH_DHZfirst_Sphericity_stack_4->SetBinContent(11,0.4892498);
   VH_DHZfirst_Sphericity_stack_4->SetBinContent(12,0.1264897);
   VH_DHZfirst_Sphericity_stack_4->SetBinContent(13,0.03935861);
   VH_DHZfirst_Sphericity_stack_4->SetBinContent(14,0.1075587);
   VH_DHZfirst_Sphericity_stack_4->SetBinContent(15,0.04828596);
   VH_DHZfirst_Sphericity_stack_4->SetBinError(1,10.43812);
   VH_DHZfirst_Sphericity_stack_4->SetBinError(2,12.14055);
   VH_DHZfirst_Sphericity_stack_4->SetBinError(3,9.381391);
   VH_DHZfirst_Sphericity_stack_4->SetBinError(4,9.966037);
   VH_DHZfirst_Sphericity_stack_4->SetBinError(5,3.493168);
   VH_DHZfirst_Sphericity_stack_4->SetBinError(6,3.311871);
   VH_DHZfirst_Sphericity_stack_4->SetBinError(7,1.382681);
   VH_DHZfirst_Sphericity_stack_4->SetBinError(8,0.6881743);
   VH_DHZfirst_Sphericity_stack_4->SetBinError(9,0.6389721);
   VH_DHZfirst_Sphericity_stack_4->SetBinError(10,0.4039215);
   VH_DHZfirst_Sphericity_stack_4->SetBinError(11,0.3465867);
   VH_DHZfirst_Sphericity_stack_4->SetBinError(12,0.0939936);
   VH_DHZfirst_Sphericity_stack_4->SetBinError(13,0.03935861);
   VH_DHZfirst_Sphericity_stack_4->SetBinError(14,0.1075587);
   VH_DHZfirst_Sphericity_stack_4->SetBinError(15,0.04828596);
   VH_DHZfirst_Sphericity_stack_4->SetEntries(6404);

   ci = TColor::GetColor("#00cccc");
   VH_DHZfirst_Sphericity_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VH_DHZfirst_Sphericity_stack_4->SetLineColor(ci);
   VH_DHZfirst_Sphericity_stack_4->GetXaxis()->SetRange(1,100);
   VH_DHZfirst_Sphericity_stack_4->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_Sphericity_stack_4->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_Sphericity_stack_4->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_Sphericity_stack_4->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_Sphericity_stack_4->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_Sphericity_stack_4->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_Sphericity_stack_4->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_Sphericity_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VH_DHZfirst_Sphericity_stack_4,"");
   
   TH1D *VH_DHZfirst_Sphericity_stack_5 = new TH1D("VH_DHZfirst_Sphericity_stack_5","",25,0,1);
   VH_DHZfirst_Sphericity_stack_5->SetBinContent(1,156.5824);
   VH_DHZfirst_Sphericity_stack_5->SetBinContent(2,156.7114);
   VH_DHZfirst_Sphericity_stack_5->SetBinContent(3,93.56724);
   VH_DHZfirst_Sphericity_stack_5->SetBinContent(4,48.09351);
   VH_DHZfirst_Sphericity_stack_5->SetBinContent(5,21.61515);
   VH_DHZfirst_Sphericity_stack_5->SetBinContent(6,9.77339);
   VH_DHZfirst_Sphericity_stack_5->SetBinContent(7,2.042553);
   VH_DHZfirst_Sphericity_stack_5->SetBinContent(8,0.06271304);
   VH_DHZfirst_Sphericity_stack_5->SetBinContent(9,1.241021);
   VH_DHZfirst_Sphericity_stack_5->SetBinContent(10,0.116668);
   VH_DHZfirst_Sphericity_stack_5->SetBinError(1,10.43577);
   VH_DHZfirst_Sphericity_stack_5->SetBinError(2,14.54899);
   VH_DHZfirst_Sphericity_stack_5->SetBinError(3,10.31434);
   VH_DHZfirst_Sphericity_stack_5->SetBinError(4,5.456966);
   VH_DHZfirst_Sphericity_stack_5->SetBinError(5,3.549669);
   VH_DHZfirst_Sphericity_stack_5->SetBinError(6,2.095712);
   VH_DHZfirst_Sphericity_stack_5->SetBinError(7,0.9190724);
   VH_DHZfirst_Sphericity_stack_5->SetBinError(8,0.04853942);
   VH_DHZfirst_Sphericity_stack_5->SetBinError(9,0.9532021);
   VH_DHZfirst_Sphericity_stack_5->SetBinError(10,0.0859648);
   VH_DHZfirst_Sphericity_stack_5->SetEntries(2842);

   ci = TColor::GetColor("#ff99cc");
   VH_DHZfirst_Sphericity_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VH_DHZfirst_Sphericity_stack_5->SetLineColor(ci);
   VH_DHZfirst_Sphericity_stack_5->GetXaxis()->SetRange(1,100);
   VH_DHZfirst_Sphericity_stack_5->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_Sphericity_stack_5->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_Sphericity_stack_5->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_Sphericity_stack_5->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_Sphericity_stack_5->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_Sphericity_stack_5->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_Sphericity_stack_5->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_Sphericity_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VH_DHZfirst_Sphericity_stack_5,"");
   
   TH1D *VH_DHZfirst_Sphericity_stack_6 = new TH1D("VH_DHZfirst_Sphericity_stack_6","",25,0,1);
   VH_DHZfirst_Sphericity_stack_6->SetBinContent(1,2.029148);
   VH_DHZfirst_Sphericity_stack_6->SetBinContent(2,1.956421);
   VH_DHZfirst_Sphericity_stack_6->SetBinContent(3,0.611046);
   VH_DHZfirst_Sphericity_stack_6->SetBinContent(4,0.4632122);
   VH_DHZfirst_Sphericity_stack_6->SetBinContent(5,0.2278499);
   VH_DHZfirst_Sphericity_stack_6->SetBinContent(6,0.2325045);
   VH_DHZfirst_Sphericity_stack_6->SetBinError(1,0.8449436);
   VH_DHZfirst_Sphericity_stack_6->SetBinError(2,0.8288579);
   VH_DHZfirst_Sphericity_stack_6->SetBinError(3,0.433503);
   VH_DHZfirst_Sphericity_stack_6->SetBinError(4,0.4632122);
   VH_DHZfirst_Sphericity_stack_6->SetBinError(5,0.2278499);
   VH_DHZfirst_Sphericity_stack_6->SetBinError(6,0.2325045);
   VH_DHZfirst_Sphericity_stack_6->SetEntries(19);

   ci = TColor::GetColor("#9933ff");
   VH_DHZfirst_Sphericity_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VH_DHZfirst_Sphericity_stack_6->SetLineColor(ci);
   VH_DHZfirst_Sphericity_stack_6->GetXaxis()->SetRange(1,100);
   VH_DHZfirst_Sphericity_stack_6->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_Sphericity_stack_6->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_Sphericity_stack_6->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_Sphericity_stack_6->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_Sphericity_stack_6->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_Sphericity_stack_6->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_Sphericity_stack_6->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_Sphericity_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VH_DHZfirst_Sphericity_stack_6,"");
   
   TH1D *VH_DHZfirst_Sphericity_stack_7 = new TH1D("VH_DHZfirst_Sphericity_stack_7","",25,0,1);
   VH_DHZfirst_Sphericity_stack_7->SetBinContent(1,4.879594);
   VH_DHZfirst_Sphericity_stack_7->SetBinContent(2,5.427737);
   VH_DHZfirst_Sphericity_stack_7->SetBinContent(3,3.122846);
   VH_DHZfirst_Sphericity_stack_7->SetBinContent(4,1.597762);
   VH_DHZfirst_Sphericity_stack_7->SetBinContent(5,1.334116);
   VH_DHZfirst_Sphericity_stack_7->SetBinContent(6,0.6927549);
   VH_DHZfirst_Sphericity_stack_7->SetBinError(1,1.232531);
   VH_DHZfirst_Sphericity_stack_7->SetBinError(2,1.266957);
   VH_DHZfirst_Sphericity_stack_7->SetBinError(3,0.9932184);
   VH_DHZfirst_Sphericity_stack_7->SetBinError(4,0.8383032);
   VH_DHZfirst_Sphericity_stack_7->SetBinError(5,0.5131713);
   VH_DHZfirst_Sphericity_stack_7->SetBinError(6,0.4080144);
   VH_DHZfirst_Sphericity_stack_7->SetEntries(72);

   ci = TColor::GetColor("#3399ff");
   VH_DHZfirst_Sphericity_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VH_DHZfirst_Sphericity_stack_7->SetLineColor(ci);
   VH_DHZfirst_Sphericity_stack_7->GetXaxis()->SetRange(1,100);
   VH_DHZfirst_Sphericity_stack_7->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_Sphericity_stack_7->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_Sphericity_stack_7->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_Sphericity_stack_7->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_Sphericity_stack_7->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_Sphericity_stack_7->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_Sphericity_stack_7->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_Sphericity_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VH_DHZfirst_Sphericity_stack_7,"");
   
   TH1D *VH_DHZfirst_Sphericity_stack_8 = new TH1D("VH_DHZfirst_Sphericity_stack_8","",25,0,1);
   VH_DHZfirst_Sphericity_stack_8->SetBinContent(1,5.705255);
   VH_DHZfirst_Sphericity_stack_8->SetBinContent(2,4.312375);
   VH_DHZfirst_Sphericity_stack_8->SetBinContent(3,2.78272);
   VH_DHZfirst_Sphericity_stack_8->SetBinContent(4,2.01494);
   VH_DHZfirst_Sphericity_stack_8->SetBinContent(5,0.8332897);
   VH_DHZfirst_Sphericity_stack_8->SetBinContent(6,0.2957681);
   VH_DHZfirst_Sphericity_stack_8->SetBinError(1,1.249725);
   VH_DHZfirst_Sphericity_stack_8->SetBinError(2,1.167402);
   VH_DHZfirst_Sphericity_stack_8->SetBinError(3,1.371745);
   VH_DHZfirst_Sphericity_stack_8->SetBinError(4,0.9381614);
   VH_DHZfirst_Sphericity_stack_8->SetBinError(5,0.4225654);
   VH_DHZfirst_Sphericity_stack_8->SetBinError(6,0.2957681);
   VH_DHZfirst_Sphericity_stack_8->SetEntries(58);

   ci = TColor::GetColor("#33ff99");
   VH_DHZfirst_Sphericity_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VH_DHZfirst_Sphericity_stack_8->SetLineColor(ci);
   VH_DHZfirst_Sphericity_stack_8->GetXaxis()->SetRange(1,100);
   VH_DHZfirst_Sphericity_stack_8->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_Sphericity_stack_8->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_Sphericity_stack_8->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_Sphericity_stack_8->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_Sphericity_stack_8->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_Sphericity_stack_8->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_Sphericity_stack_8->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_Sphericity_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VH_DHZfirst_Sphericity_stack_8,"");
   
   TH1D *VH_DHZfirst_Sphericity_stack_9 = new TH1D("VH_DHZfirst_Sphericity_stack_9","",25,0,1);
   VH_DHZfirst_Sphericity_stack_9->SetBinContent(1,2.637202);
   VH_DHZfirst_Sphericity_stack_9->SetBinContent(2,2.398547);
   VH_DHZfirst_Sphericity_stack_9->SetBinContent(3,1.347775);
   VH_DHZfirst_Sphericity_stack_9->SetBinContent(4,0.8828982);
   VH_DHZfirst_Sphericity_stack_9->SetBinContent(5,0.6041477);
   VH_DHZfirst_Sphericity_stack_9->SetBinContent(6,0.3209322);
   VH_DHZfirst_Sphericity_stack_9->SetBinContent(7,0.08293295);
   VH_DHZfirst_Sphericity_stack_9->SetBinContent(8,0.01914983);
   VH_DHZfirst_Sphericity_stack_9->SetBinContent(9,0.0006168053);
   VH_DHZfirst_Sphericity_stack_9->SetBinContent(13,0.0007524721);
   VH_DHZfirst_Sphericity_stack_9->SetBinError(1,0.07197791);
   VH_DHZfirst_Sphericity_stack_9->SetBinError(2,0.06720751);
   VH_DHZfirst_Sphericity_stack_9->SetBinError(3,0.0489208);
   VH_DHZfirst_Sphericity_stack_9->SetBinError(4,0.04124786);
   VH_DHZfirst_Sphericity_stack_9->SetBinError(5,0.03407767);
   VH_DHZfirst_Sphericity_stack_9->SetBinError(6,0.02541585);
   VH_DHZfirst_Sphericity_stack_9->SetBinError(7,0.01380174);
   VH_DHZfirst_Sphericity_stack_9->SetBinError(8,0.00516714);
   VH_DHZfirst_Sphericity_stack_9->SetBinError(9,0.0006168053);
   VH_DHZfirst_Sphericity_stack_9->SetBinError(13,0.0007524721);
   VH_DHZfirst_Sphericity_stack_9->SetEntries(5676);

   ci = TColor::GetColor("#cccc00");
   VH_DHZfirst_Sphericity_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VH_DHZfirst_Sphericity_stack_9->SetLineColor(ci);
   VH_DHZfirst_Sphericity_stack_9->GetXaxis()->SetRange(1,100);
   VH_DHZfirst_Sphericity_stack_9->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_Sphericity_stack_9->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_Sphericity_stack_9->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_Sphericity_stack_9->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_Sphericity_stack_9->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_Sphericity_stack_9->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_Sphericity_stack_9->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_Sphericity_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VH_DHZfirst_Sphericity_stack_9,"");
   
   TH1D *VH_DHZfirst_Sphericity_stack_10 = new TH1D("VH_DHZfirst_Sphericity_stack_10","",25,0,1);
   VH_DHZfirst_Sphericity_stack_10->SetBinContent(1,1.461999);
   VH_DHZfirst_Sphericity_stack_10->SetBinContent(2,1.464541);
   VH_DHZfirst_Sphericity_stack_10->SetBinContent(3,0.8294274);
   VH_DHZfirst_Sphericity_stack_10->SetBinContent(4,0.512244);
   VH_DHZfirst_Sphericity_stack_10->SetBinContent(5,0.3047792);
   VH_DHZfirst_Sphericity_stack_10->SetBinContent(6,0.143691);
   VH_DHZfirst_Sphericity_stack_10->SetBinContent(7,0.0439802);
   VH_DHZfirst_Sphericity_stack_10->SetBinContent(8,0.01858842);
   VH_DHZfirst_Sphericity_stack_10->SetBinContent(9,0.005916342);
   VH_DHZfirst_Sphericity_stack_10->SetBinContent(10,0.00237506);
   VH_DHZfirst_Sphericity_stack_10->SetBinContent(11,0.0009554017);
   VH_DHZfirst_Sphericity_stack_10->SetBinContent(12,0.0009136726);
   VH_DHZfirst_Sphericity_stack_10->SetBinContent(13,0.0004051181);
   VH_DHZfirst_Sphericity_stack_10->SetBinContent(14,0.0004110366);
   VH_DHZfirst_Sphericity_stack_10->SetBinContent(15,0.0003241072);
   VH_DHZfirst_Sphericity_stack_10->SetBinError(1,0.02160421);
   VH_DHZfirst_Sphericity_stack_10->SetBinError(2,0.0214585);
   VH_DHZfirst_Sphericity_stack_10->SetBinError(3,0.01610517);
   VH_DHZfirst_Sphericity_stack_10->SetBinError(4,0.01268717);
   VH_DHZfirst_Sphericity_stack_10->SetBinError(5,0.009806347);
   VH_DHZfirst_Sphericity_stack_10->SetBinError(6,0.006803557);
   VH_DHZfirst_Sphericity_stack_10->SetBinError(7,0.003711593);
   VH_DHZfirst_Sphericity_stack_10->SetBinError(8,0.002430553);
   VH_DHZfirst_Sphericity_stack_10->SetBinError(9,0.001340778);
   VH_DHZfirst_Sphericity_stack_10->SetBinError(10,0.0008165577);
   VH_DHZfirst_Sphericity_stack_10->SetBinError(11,0.0005526604);
   VH_DHZfirst_Sphericity_stack_10->SetBinError(12,0.000475145);
   VH_DHZfirst_Sphericity_stack_10->SetBinError(13,0.0003252225);
   VH_DHZfirst_Sphericity_stack_10->SetBinError(14,0.0004110366);
   VH_DHZfirst_Sphericity_stack_10->SetBinError(15,0.0003241072);
   VH_DHZfirst_Sphericity_stack_10->SetEntries(15848);

   ci = TColor::GetColor("#0000cc");
   VH_DHZfirst_Sphericity_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VH_DHZfirst_Sphericity_stack_10->SetLineColor(ci);
   VH_DHZfirst_Sphericity_stack_10->GetXaxis()->SetRange(1,100);
   VH_DHZfirst_Sphericity_stack_10->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_Sphericity_stack_10->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_Sphericity_stack_10->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_Sphericity_stack_10->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_Sphericity_stack_10->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_Sphericity_stack_10->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_Sphericity_stack_10->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_Sphericity_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VH_DHZfirst_Sphericity_stack_10,"");
   
   TH1D *VH_DHZfirst_Sphericity_stack_11 = new TH1D("VH_DHZfirst_Sphericity_stack_11","",25,0,1);
   VH_DHZfirst_Sphericity_stack_11->SetBinContent(1,0.08306489);
   VH_DHZfirst_Sphericity_stack_11->SetBinContent(2,0.06830305);
   VH_DHZfirst_Sphericity_stack_11->SetBinContent(3,0.04478864);
   VH_DHZfirst_Sphericity_stack_11->SetBinContent(4,0.02714184);
   VH_DHZfirst_Sphericity_stack_11->SetBinContent(5,0.02351778);
   VH_DHZfirst_Sphericity_stack_11->SetBinContent(6,0.006925327);
   VH_DHZfirst_Sphericity_stack_11->SetBinError(1,0.0110536);
   VH_DHZfirst_Sphericity_stack_11->SetBinError(2,0.01040228);
   VH_DHZfirst_Sphericity_stack_11->SetBinError(3,0.008133);
   VH_DHZfirst_Sphericity_stack_11->SetBinError(4,0.005878046);
   VH_DHZfirst_Sphericity_stack_11->SetBinError(5,0.005924318);
   VH_DHZfirst_Sphericity_stack_11->SetBinError(6,0.003035898);
   VH_DHZfirst_Sphericity_stack_11->SetEntries(199);

   ci = TColor::GetColor("#cc0000");
   VH_DHZfirst_Sphericity_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VH_DHZfirst_Sphericity_stack_11->SetLineColor(ci);
   VH_DHZfirst_Sphericity_stack_11->GetXaxis()->SetRange(1,100);
   VH_DHZfirst_Sphericity_stack_11->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_Sphericity_stack_11->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_Sphericity_stack_11->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_Sphericity_stack_11->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_Sphericity_stack_11->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_Sphericity_stack_11->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_Sphericity_stack_11->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_Sphericity_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VH_DHZfirst_Sphericity_stack_11,"");
   
   TH1D *VH_DHZfirst_Sphericity_stack_12 = new TH1D("VH_DHZfirst_Sphericity_stack_12","",25,0,1);
   VH_DHZfirst_Sphericity_stack_12->SetBinContent(1,0.02994787);
   VH_DHZfirst_Sphericity_stack_12->SetBinContent(2,0.03025905);
   VH_DHZfirst_Sphericity_stack_12->SetBinContent(3,0.01948774);
   VH_DHZfirst_Sphericity_stack_12->SetBinContent(4,0.009327624);
   VH_DHZfirst_Sphericity_stack_12->SetBinContent(5,0.006225467);
   VH_DHZfirst_Sphericity_stack_12->SetBinContent(6,0.001502715);
   VH_DHZfirst_Sphericity_stack_12->SetBinContent(7,0.001180063);
   VH_DHZfirst_Sphericity_stack_12->SetBinContent(8,0.0007141608);
   VH_DHZfirst_Sphericity_stack_12->SetBinContent(10,0.000205128);
   VH_DHZfirst_Sphericity_stack_12->SetBinContent(15,8.92071e-05);
   VH_DHZfirst_Sphericity_stack_12->SetBinError(1,0.002550895);
   VH_DHZfirst_Sphericity_stack_12->SetBinError(2,0.002597658);
   VH_DHZfirst_Sphericity_stack_12->SetBinError(3,0.002014062);
   VH_DHZfirst_Sphericity_stack_12->SetBinError(4,0.001377885);
   VH_DHZfirst_Sphericity_stack_12->SetBinError(5,0.001111328);
   VH_DHZfirst_Sphericity_stack_12->SetBinError(6,0.0005320088);
   VH_DHZfirst_Sphericity_stack_12->SetBinError(7,0.0005463606);
   VH_DHZfirst_Sphericity_stack_12->SetBinError(8,0.0003241961);
   VH_DHZfirst_Sphericity_stack_12->SetBinError(10,0.0001947029);
   VH_DHZfirst_Sphericity_stack_12->SetBinError(15,8.92071e-05);
   VH_DHZfirst_Sphericity_stack_12->SetEntries(559);

   ci = TColor::GetColor("#00cc00");
   VH_DHZfirst_Sphericity_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VH_DHZfirst_Sphericity_stack_12->SetLineColor(ci);
   VH_DHZfirst_Sphericity_stack_12->GetXaxis()->SetRange(1,100);
   VH_DHZfirst_Sphericity_stack_12->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_Sphericity_stack_12->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_Sphericity_stack_12->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_Sphericity_stack_12->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_Sphericity_stack_12->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_Sphericity_stack_12->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_Sphericity_stack_12->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_Sphericity_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VH_DHZfirst_Sphericity_stack_12,"");
   st->Draw("hist");
   
   TH1D *VH_DHZfirst_Sphericity__231 = new TH1D("VH_DHZfirst_Sphericity__231","",25,0,1);
   VH_DHZfirst_Sphericity__231->SetBinContent(1,40696);
   VH_DHZfirst_Sphericity__231->SetBinContent(2,37735);
   VH_DHZfirst_Sphericity__231->SetBinContent(3,20266);
   VH_DHZfirst_Sphericity__231->SetBinContent(4,10827);
   VH_DHZfirst_Sphericity__231->SetBinContent(5,5341);
   VH_DHZfirst_Sphericity__231->SetBinContent(6,2293);
   VH_DHZfirst_Sphericity__231->SetBinContent(7,855);
   VH_DHZfirst_Sphericity__231->SetBinContent(8,296);
   VH_DHZfirst_Sphericity__231->SetBinContent(9,127);
   VH_DHZfirst_Sphericity__231->SetBinContent(10,66);
   VH_DHZfirst_Sphericity__231->SetBinContent(11,39);
   VH_DHZfirst_Sphericity__231->SetBinContent(12,19);
   VH_DHZfirst_Sphericity__231->SetBinContent(13,10);
   VH_DHZfirst_Sphericity__231->SetBinContent(14,11);
   VH_DHZfirst_Sphericity__231->SetBinContent(15,4);
   VH_DHZfirst_Sphericity__231->SetBinContent(16,2);
   VH_DHZfirst_Sphericity__231->SetBinContent(17,1);
   VH_DHZfirst_Sphericity__231->SetBinContent(18,3);
   VH_DHZfirst_Sphericity__231->SetBinContent(19,3);
   VH_DHZfirst_Sphericity__231->SetBinContent(20,1);
   VH_DHZfirst_Sphericity__231->SetEntries(118619);

   ci = TColor::GetColor("#000099");
   VH_DHZfirst_Sphericity__231->SetLineColor(ci);
   VH_DHZfirst_Sphericity__231->SetLineWidth(2);
   VH_DHZfirst_Sphericity__231->SetMarkerStyle(20);
   VH_DHZfirst_Sphericity__231->SetMarkerSize(1.2);
   VH_DHZfirst_Sphericity__231->GetXaxis()->SetRange(1,100);
   VH_DHZfirst_Sphericity__231->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_Sphericity__231->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_Sphericity__231->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_Sphericity__231->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_Sphericity__231->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_Sphericity__231->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_Sphericity__231->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_Sphericity__231->GetZaxis()->SetTitleFont(42);
   VH_DHZfirst_Sphericity__231->Draw("same E");
   
   Double_t Graph_from_VH_DHZfirst_Sphericity_fx1231[25] = { 0.02, 0.06, 0.1, 0.14, 0.18, 0.22, 0.26, 0.3, 0.34, 0.38, 0.42, 0.46, 0.5, 0.54, 0.58, 0.62, 0.66,
   0.7, 0.74, 0.78, 0.82, 0.86, 0.9, 0.94, 0.98 };
   Double_t Graph_from_VH_DHZfirst_Sphericity_fy1231[25] = { 52534.5, 67295.24, 25385.01, 13585.38, 9373.727, 3988.688, 3903.815, 458.8981, 96.62505, 367.9632, 21.2833, 22.74075, 11.03233, 4.976277, 2.05226, 1.532738, 3.038165,
   0.2810818, 0.2184381, 0.03529894, 0, 0, 0.02102153, 0, 0 };
   Double_t Graph_from_VH_DHZfirst_Sphericity_fex1231[25] = { 0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02,
   0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02 };
   Double_t Graph_from_VH_DHZfirst_Sphericity_fey1231[25] = { 2774.755, 23814.61, 2446.975, 1666.26, 1735.654, 850.2765, 2937.67, 206.4658, 31.43481, 344.1229, 5.591069, 13.55665, 6.152485, 2.015149, 0.4290693, 0.3003775, 2.021307,
   0.1097131, 0.1012113, 0.03529894, 0, 0, 0.02102153, 0, 0 };
   TGraphErrors *gre = new TGraphErrors(25,Graph_from_VH_DHZfirst_Sphericity_fx1231,Graph_from_VH_DHZfirst_Sphericity_fy1231,Graph_from_VH_DHZfirst_Sphericity_fex1231,Graph_from_VH_DHZfirst_Sphericity_fey1231);
   gre->SetName("Graph_from_VH_DHZfirst_Sphericity");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VH_DHZfirst_Sphericity1231 = new TH1F("Graph_Graph_from_VH_DHZfirst_Sphericity1231","",100,0,1.1);
   Graph_Graph_from_VH_DHZfirst_Sphericity1231->SetMinimum(-9110.984);
   Graph_Graph_from_VH_DHZfirst_Sphericity1231->SetMaximum(100220.8);
   Graph_Graph_from_VH_DHZfirst_Sphericity1231->SetDirectory(nullptr);
   Graph_Graph_from_VH_DHZfirst_Sphericity1231->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VH_DHZfirst_Sphericity1231->SetLineColor(ci);
   Graph_Graph_from_VH_DHZfirst_Sphericity1231->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VH_DHZfirst_Sphericity1231->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_from_VH_DHZfirst_Sphericity1231->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VH_DHZfirst_Sphericity1231->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VH_DHZfirst_Sphericity1231->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VH_DHZfirst_Sphericity1231->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VH_DHZfirst_Sphericity1231->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_from_VH_DHZfirst_Sphericity1231->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VH_DHZfirst_Sphericity1231);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VH_DHZfirst_Sphericity","Data (BTagCSV, 2017)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VH_DHZfirst_Sphericity","ggZHcc","F");

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
   entry=leg->AddEntry("VH_DHZfirst_Sphericity","ZHcc","F");

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
   entry=leg->AddEntry("VH_DHZfirst_Sphericity","ggZHbb","F");

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
   entry=leg->AddEntry("VH_DHZfirst_Sphericity","ZHbb","F");

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
   entry=leg->AddEntry("VH_DHZfirst_Sphericity","ZZ","F");

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
   entry=leg->AddEntry("VH_DHZfirst_Sphericity","WZ","F");

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
   entry=leg->AddEntry("VH_DHZfirst_Sphericity","WW","F");

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
   entry=leg->AddEntry("VH_DHZfirst_Sphericity","W + jets","F");

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
   entry=leg->AddEntry("VH_DHZfirst_Sphericity","Z + jets","F");

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
   entry=leg->AddEntry("VH_DHZfirst_Sphericity","t#bar{t}","F");

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
   entry=leg->AddEntry("VH_DHZfirst_Sphericity","Single top","F");

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
   entry=leg->AddEntry("VH_DHZfirst_Sphericity","QCD","F");

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
   entry=leg->AddEntry("Graph_from_VH_DHZfirst_Sphericity","MC unc. (stat.)","fl");

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 36.8 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetLineWidth(2);
   tex->Draw();
   topPad->Modified();
   Sphericity_DHZfirst_17->cd();
  
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
   
   TH1D *data_mc_ratio__232 = new TH1D("data_mc_ratio__232","",25,0,1);
   data_mc_ratio__232->SetBinContent(1,0.7746529);
   data_mc_ratio__232->SetBinContent(2,0.5607381);
   data_mc_ratio__232->SetBinContent(3,0.7983452);
   data_mc_ratio__232->SetBinContent(4,0.7969597);
   data_mc_ratio__232->SetBinContent(5,0.569784);
   data_mc_ratio__232->SetBinContent(6,0.5748757);
   data_mc_ratio__232->SetBinContent(7,0.2190165);
   data_mc_ratio__232->SetBinContent(8,0.6450233);
   data_mc_ratio__232->SetBinContent(9,1.314359);
   data_mc_ratio__232->SetBinContent(10,0.1793658);
   data_mc_ratio__232->SetBinContent(11,1.832423);
   data_mc_ratio__232->SetBinContent(12,0.8355045);
   data_mc_ratio__232->SetBinContent(13,0.9064268);
   data_mc_ratio__232->SetBinContent(14,2.210488);
   data_mc_ratio__232->SetBinContent(15,1.949071);
   data_mc_ratio__232->SetBinContent(16,1.304855);
   data_mc_ratio__232->SetBinContent(17,0.329146);
   data_mc_ratio__232->SetBinContent(18,10.67305);
   data_mc_ratio__232->SetBinContent(19,13.73387);
   data_mc_ratio__232->SetBinContent(20,28.32947);
   data_mc_ratio__232->SetBinError(1,0.00384);
   data_mc_ratio__232->SetBinError(2,0.002886608);
   data_mc_ratio__232->SetBinError(3,0.005607983);
   data_mc_ratio__232->SetBinError(4,0.00765918);
   data_mc_ratio__232->SetBinError(5,0.007796488);
   data_mc_ratio__232->SetBinError(6,0.01200527);
   data_mc_ratio__232->SetBinError(7,0.007490206);
   data_mc_ratio__232->SetBinError(8,0.03749122);
   data_mc_ratio__232->SetBinError(9,0.1166305);
   data_mc_ratio__232->SetBinError(10,0.0220784);
   data_mc_ratio__232->SetBinError(11,0.2934225);
   data_mc_ratio__232->SetBinError(12,0.1916779);
   data_mc_ratio__232->SetBinError(13,0.2866373);
   data_mc_ratio__232->SetBinError(14,0.6664871);
   data_mc_ratio__232->SetBinError(15,0.9745355);
   data_mc_ratio__232->SetBinError(16,0.9226715);
   data_mc_ratio__232->SetBinError(17,0.329146);
   data_mc_ratio__232->SetBinError(18,6.162087);
   data_mc_ratio__232->SetBinError(19,7.929253);
   data_mc_ratio__232->SetBinError(20,28.32947);
   data_mc_ratio__232->SetMinimum(0.4);
   data_mc_ratio__232->SetMaximum(1.6);
   data_mc_ratio__232->SetEntries(2.655977);
   data_mc_ratio__232->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__232->SetLineColor(ci);
   data_mc_ratio__232->SetLineWidth(2);
   data_mc_ratio__232->SetMarkerStyle(20);
   data_mc_ratio__232->SetMarkerSize(1.2);
   data_mc_ratio__232->GetXaxis()->SetTitle("Sphericity");
   data_mc_ratio__232->GetXaxis()->SetRange(1,25);
   data_mc_ratio__232->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__232->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__232->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__232->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__232->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__232->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__232->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__232->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__232->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__232->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__232->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__232->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__232->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__232->GetZaxis()->SetTitleOffset(1);
   data_mc_ratio__232->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__232->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1232[25] = { 0.02, 0.06, 0.1, 0.14, 0.18, 0.22, 0.26, 0.3, 0.34, 0.38, 0.42, 0.46, 0.5, 0.54, 0.58, 0.62, 0.66,
   0.7, 0.74, 0.78, 0.82, 0.86, 0.9, 0.94, 0.98 };
   Double_t Graph_from_mc_statistical_error_fy1232[25] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1 };
   Double_t Graph_from_mc_statistical_error_fex1232[25] = { 0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02,
   0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02 };
   Double_t Graph_from_mc_statistical_error_fey1232[25] = { 0.05281778, 0.3538825, 0.09639448, 0.122651, 0.1851616, 0.213172, 0.7525126, 0.4499165, 0.3253278, 0.9352102, 0.2626975, 0.596139, 0.5576778, 0.4049511, 0.2090717, 0.1959745, 0.6653053,
   0.3903246, 0.4633408, 1, 0, 0, 1, 0, 0 };
   gre = new TGraphErrors(25,Graph_from_mc_statistical_error_fx1232,Graph_from_mc_statistical_error_fy1232,Graph_from_mc_statistical_error_fex1232,Graph_from_mc_statistical_error_fey1232);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1232 = new TH1F("Graph_Graph_from_mc_statistical_error1232","",100,0,1.1);
   Graph_Graph_from_mc_statistical_error1232->SetMinimum(-0.2);
   Graph_Graph_from_mc_statistical_error1232->SetMaximum(2.2);
   Graph_Graph_from_mc_statistical_error1232->SetDirectory(nullptr);
   Graph_Graph_from_mc_statistical_error1232->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1232->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1232->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1232->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_from_mc_statistical_error1232->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1232->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1232->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1232->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1232->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_from_mc_statistical_error1232->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1232);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,1,1);
   line->Draw();
   bottomPad->Modified();
   Sphericity_DHZfirst_17->cd();
   Sphericity_DHZfirst_17->Modified();
   Sphericity_DHZfirst_17->cd();
   Sphericity_DHZfirst_17->SetSelected(Sphericity_DHZfirst_17);
}
