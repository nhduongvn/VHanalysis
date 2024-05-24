#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Aplanarity_tagOnly_17()
{
//=========Macro generated from canvas: Aplanarity_tagOnly_17/Aplanarity_tagOnly_17
//=========  (Thu May 23 12:59:53 2024) by ROOT version 6.28/10
   TCanvas *Aplanarity_tagOnly_17 = new TCanvas("Aplanarity_tagOnly_17", "Aplanarity_tagOnly_17",0,0,600,600);
   Aplanarity_tagOnly_17->SetHighLightColor(2);
   Aplanarity_tagOnly_17->Range(0,0,1,1);
   Aplanarity_tagOnly_17->SetFillColor(0);
   Aplanarity_tagOnly_17->SetFillStyle(4000);
   Aplanarity_tagOnly_17->SetBorderMode(0);
   Aplanarity_tagOnly_17->SetBorderSize(2);
   Aplanarity_tagOnly_17->SetFrameFillStyle(1000);
   Aplanarity_tagOnly_17->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.1532254,-3397.689,1.052419,3394301);
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
   st->SetMaximum(3054531);
   
   TH1F *st_stack_47 = new TH1F("st_stack_47","",50,0,1);
   st_stack_47->SetMinimum(0.01);
   st_stack_47->SetMaximum(3054531);
   st_stack_47->SetDirectory(nullptr);
   st_stack_47->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_47->SetLineColor(ci);
   st_stack_47->SetLineWidth(0);
   st_stack_47->GetXaxis()->SetRange(1,50);
   st_stack_47->GetXaxis()->SetLabelFont(42);
   st_stack_47->GetXaxis()->SetTitleOffset(1);
   st_stack_47->GetXaxis()->SetTitleFont(42);
   st_stack_47->GetYaxis()->SetTitle("Events/0.02");
   st_stack_47->GetYaxis()->SetLabelFont(42);
   st_stack_47->GetYaxis()->SetLabelSize(0.05);
   st_stack_47->GetYaxis()->SetTitleSize(0.057);
   st_stack_47->GetYaxis()->SetTitleOffset(1.2);
   st_stack_47->GetYaxis()->SetTitleFont(42);
   st_stack_47->GetZaxis()->SetLabelFont(42);
   st_stack_47->GetZaxis()->SetTitleOffset(1);
   st_stack_47->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_47);
   
   
   TH1D *VH_tagOnly_Aplanarity_stack_1 = new TH1D("VH_tagOnly_Aplanarity_stack_1","",50,0,1);
   VH_tagOnly_Aplanarity_stack_1->SetBinContent(1,1113194);
   VH_tagOnly_Aplanarity_stack_1->SetBinContent(2,133749.2);
   VH_tagOnly_Aplanarity_stack_1->SetBinContent(3,32119.34);
   VH_tagOnly_Aplanarity_stack_1->SetBinContent(4,12615.29);
   VH_tagOnly_Aplanarity_stack_1->SetBinContent(5,7363.262);
   VH_tagOnly_Aplanarity_stack_1->SetBinContent(6,1770.938);
   VH_tagOnly_Aplanarity_stack_1->SetBinContent(7,796.3183);
   VH_tagOnly_Aplanarity_stack_1->SetBinContent(8,724.7668);
   VH_tagOnly_Aplanarity_stack_1->SetBinContent(9,466.4745);
   VH_tagOnly_Aplanarity_stack_1->SetBinContent(10,312.9255);
   VH_tagOnly_Aplanarity_stack_1->SetBinContent(11,194.6281);
   VH_tagOnly_Aplanarity_stack_1->SetBinContent(12,26.3534);
   VH_tagOnly_Aplanarity_stack_1->SetBinContent(13,43.95033);
   VH_tagOnly_Aplanarity_stack_1->SetBinContent(14,38.99299);
   VH_tagOnly_Aplanarity_stack_1->SetBinContent(15,1.078283);
   VH_tagOnly_Aplanarity_stack_1->SetBinContent(16,25.07289);
   VH_tagOnly_Aplanarity_stack_1->SetBinContent(17,0.4516895);
   VH_tagOnly_Aplanarity_stack_1->SetBinContent(18,43.63467);
   VH_tagOnly_Aplanarity_stack_1->SetBinError(1,46207.73);
   VH_tagOnly_Aplanarity_stack_1->SetBinError(2,5181.37);
   VH_tagOnly_Aplanarity_stack_1->SetBinError(3,2344.443);
   VH_tagOnly_Aplanarity_stack_1->SetBinError(4,1688.085);
   VH_tagOnly_Aplanarity_stack_1->SetBinError(5,3093.621);
   VH_tagOnly_Aplanarity_stack_1->SetBinError(6,372.0404);
   VH_tagOnly_Aplanarity_stack_1->SetBinError(7,193.4524);
   VH_tagOnly_Aplanarity_stack_1->SetBinError(8,267.5253);
   VH_tagOnly_Aplanarity_stack_1->SetBinError(9,192.5239);
   VH_tagOnly_Aplanarity_stack_1->SetBinError(10,210.8218);
   VH_tagOnly_Aplanarity_stack_1->SetBinError(11,61.10583);
   VH_tagOnly_Aplanarity_stack_1->SetBinError(12,15.18162);
   VH_tagOnly_Aplanarity_stack_1->SetBinError(13,17.44908);
   VH_tagOnly_Aplanarity_stack_1->SetBinError(14,23.25471);
   VH_tagOnly_Aplanarity_stack_1->SetBinError(15,1.078283);
   VH_tagOnly_Aplanarity_stack_1->SetBinError(16,15.10201);
   VH_tagOnly_Aplanarity_stack_1->SetBinError(17,0.4516895);
   VH_tagOnly_Aplanarity_stack_1->SetBinError(18,30.93528);
   VH_tagOnly_Aplanarity_stack_1->SetEntries(102182);

   ci = TColor::GetColor("#ff6600");
   VH_tagOnly_Aplanarity_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VH_tagOnly_Aplanarity_stack_1->SetLineColor(ci);
   VH_tagOnly_Aplanarity_stack_1->GetXaxis()->SetRange(1,100);
   VH_tagOnly_Aplanarity_stack_1->GetXaxis()->SetLabelFont(42);
   VH_tagOnly_Aplanarity_stack_1->GetXaxis()->SetTitleOffset(1);
   VH_tagOnly_Aplanarity_stack_1->GetXaxis()->SetTitleFont(42);
   VH_tagOnly_Aplanarity_stack_1->GetYaxis()->SetLabelFont(42);
   VH_tagOnly_Aplanarity_stack_1->GetYaxis()->SetTitleFont(42);
   VH_tagOnly_Aplanarity_stack_1->GetZaxis()->SetLabelFont(42);
   VH_tagOnly_Aplanarity_stack_1->GetZaxis()->SetTitleOffset(1);
   VH_tagOnly_Aplanarity_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VH_tagOnly_Aplanarity_stack_1,"");
   
   TH1D *VH_tagOnly_Aplanarity_stack_2 = new TH1D("VH_tagOnly_Aplanarity_stack_2","",50,0,1);
   VH_tagOnly_Aplanarity_stack_2->SetBinContent(1,13538.47);
   VH_tagOnly_Aplanarity_stack_2->SetBinContent(2,1894.372);
   VH_tagOnly_Aplanarity_stack_2->SetBinContent(3,494.0281);
   VH_tagOnly_Aplanarity_stack_2->SetBinContent(4,159.2452);
   VH_tagOnly_Aplanarity_stack_2->SetBinContent(5,70.38853);
   VH_tagOnly_Aplanarity_stack_2->SetBinContent(6,34.39052);
   VH_tagOnly_Aplanarity_stack_2->SetBinContent(7,21.28379);
   VH_tagOnly_Aplanarity_stack_2->SetBinContent(8,10.75016);
   VH_tagOnly_Aplanarity_stack_2->SetBinContent(9,5.712167);
   VH_tagOnly_Aplanarity_stack_2->SetBinContent(10,4.063631);
   VH_tagOnly_Aplanarity_stack_2->SetBinContent(11,3.358981);
   VH_tagOnly_Aplanarity_stack_2->SetBinContent(12,2.725251);
   VH_tagOnly_Aplanarity_stack_2->SetBinContent(13,1.523361);
   VH_tagOnly_Aplanarity_stack_2->SetBinContent(14,1.195186);
   VH_tagOnly_Aplanarity_stack_2->SetBinContent(15,0.3446602);
   VH_tagOnly_Aplanarity_stack_2->SetBinContent(16,0.1583968);
   VH_tagOnly_Aplanarity_stack_2->SetBinContent(17,0.2023658);
   VH_tagOnly_Aplanarity_stack_2->SetBinContent(18,0.521713);
   VH_tagOnly_Aplanarity_stack_2->SetBinContent(19,0.1874799);
   VH_tagOnly_Aplanarity_stack_2->SetBinError(1,53.7185);
   VH_tagOnly_Aplanarity_stack_2->SetBinError(2,20.05271);
   VH_tagOnly_Aplanarity_stack_2->SetBinError(3,10.2212);
   VH_tagOnly_Aplanarity_stack_2->SetBinError(4,5.8021);
   VH_tagOnly_Aplanarity_stack_2->SetBinError(5,3.706533);
   VH_tagOnly_Aplanarity_stack_2->SetBinError(6,2.669032);
   VH_tagOnly_Aplanarity_stack_2->SetBinError(7,2.428322);
   VH_tagOnly_Aplanarity_stack_2->SetBinError(8,1.242832);
   VH_tagOnly_Aplanarity_stack_2->SetBinError(9,0.9949529);
   VH_tagOnly_Aplanarity_stack_2->SetBinError(10,0.9085173);
   VH_tagOnly_Aplanarity_stack_2->SetBinError(11,1.029081);
   VH_tagOnly_Aplanarity_stack_2->SetBinError(12,0.8815138);
   VH_tagOnly_Aplanarity_stack_2->SetBinError(13,0.8996827);
   VH_tagOnly_Aplanarity_stack_2->SetBinError(14,0.4963995);
   VH_tagOnly_Aplanarity_stack_2->SetBinError(15,0.2351965);
   VH_tagOnly_Aplanarity_stack_2->SetBinError(16,0.08233285);
   VH_tagOnly_Aplanarity_stack_2->SetBinError(17,0.1906407);
   VH_tagOnly_Aplanarity_stack_2->SetBinError(18,0.4094651);
   VH_tagOnly_Aplanarity_stack_2->SetBinError(19,0.1874799);
   VH_tagOnly_Aplanarity_stack_2->SetEntries(200793);

   ci = TColor::GetColor("#660066");
   VH_tagOnly_Aplanarity_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VH_tagOnly_Aplanarity_stack_2->SetLineColor(ci);
   VH_tagOnly_Aplanarity_stack_2->GetXaxis()->SetRange(1,100);
   VH_tagOnly_Aplanarity_stack_2->GetXaxis()->SetLabelFont(42);
   VH_tagOnly_Aplanarity_stack_2->GetXaxis()->SetTitleOffset(1);
   VH_tagOnly_Aplanarity_stack_2->GetXaxis()->SetTitleFont(42);
   VH_tagOnly_Aplanarity_stack_2->GetYaxis()->SetLabelFont(42);
   VH_tagOnly_Aplanarity_stack_2->GetYaxis()->SetTitleFont(42);
   VH_tagOnly_Aplanarity_stack_2->GetZaxis()->SetLabelFont(42);
   VH_tagOnly_Aplanarity_stack_2->GetZaxis()->SetTitleOffset(1);
   VH_tagOnly_Aplanarity_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VH_tagOnly_Aplanarity_stack_2,"");
   
   TH1D *VH_tagOnly_Aplanarity_stack_3 = new TH1D("VH_tagOnly_Aplanarity_stack_3","",50,0,1);
   VH_tagOnly_Aplanarity_stack_3->SetBinContent(0,0.06949146);
   VH_tagOnly_Aplanarity_stack_3->SetBinContent(1,232312.7);
   VH_tagOnly_Aplanarity_stack_3->SetBinContent(2,31742.9);
   VH_tagOnly_Aplanarity_stack_3->SetBinContent(3,8278.695);
   VH_tagOnly_Aplanarity_stack_3->SetBinContent(4,3011.893);
   VH_tagOnly_Aplanarity_stack_3->SetBinContent(5,1353.06);
   VH_tagOnly_Aplanarity_stack_3->SetBinContent(6,697.1592);
   VH_tagOnly_Aplanarity_stack_3->SetBinContent(7,387.1598);
   VH_tagOnly_Aplanarity_stack_3->SetBinContent(8,231.636);
   VH_tagOnly_Aplanarity_stack_3->SetBinContent(9,142.4839);
   VH_tagOnly_Aplanarity_stack_3->SetBinContent(10,93.94717);
   VH_tagOnly_Aplanarity_stack_3->SetBinContent(11,58.47026);
   VH_tagOnly_Aplanarity_stack_3->SetBinContent(12,36.95818);
   VH_tagOnly_Aplanarity_stack_3->SetBinContent(13,26.13508);
   VH_tagOnly_Aplanarity_stack_3->SetBinContent(14,16.15312);
   VH_tagOnly_Aplanarity_stack_3->SetBinContent(15,10.31597);
   VH_tagOnly_Aplanarity_stack_3->SetBinContent(16,5.477259);
   VH_tagOnly_Aplanarity_stack_3->SetBinContent(17,3.565031);
   VH_tagOnly_Aplanarity_stack_3->SetBinContent(18,1.521411);
   VH_tagOnly_Aplanarity_stack_3->SetBinContent(19,0.7504878);
   VH_tagOnly_Aplanarity_stack_3->SetBinContent(20,0.5949118);
   VH_tagOnly_Aplanarity_stack_3->SetBinContent(21,0.2052921);
   VH_tagOnly_Aplanarity_stack_3->SetBinContent(22,0.3021764);
   VH_tagOnly_Aplanarity_stack_3->SetBinError(0,0.06949146);
   VH_tagOnly_Aplanarity_stack_3->SetBinError(1,148.802);
   VH_tagOnly_Aplanarity_stack_3->SetBinError(2,54.36577);
   VH_tagOnly_Aplanarity_stack_3->SetBinError(3,27.91154);
   VH_tagOnly_Aplanarity_stack_3->SetBinError(4,16.87028);
   VH_tagOnly_Aplanarity_stack_3->SetBinError(5,11.36223);
   VH_tagOnly_Aplanarity_stack_3->SetBinError(6,8.203986);
   VH_tagOnly_Aplanarity_stack_3->SetBinError(7,6.010603);
   VH_tagOnly_Aplanarity_stack_3->SetBinError(8,4.849967);
   VH_tagOnly_Aplanarity_stack_3->SetBinError(9,3.82153);
   VH_tagOnly_Aplanarity_stack_3->SetBinError(10,3.098674);
   VH_tagOnly_Aplanarity_stack_3->SetBinError(11,2.284946);
   VH_tagOnly_Aplanarity_stack_3->SetBinError(12,1.8951);
   VH_tagOnly_Aplanarity_stack_3->SetBinError(13,1.665844);
   VH_tagOnly_Aplanarity_stack_3->SetBinError(14,1.249728);
   VH_tagOnly_Aplanarity_stack_3->SetBinError(15,1.03064);
   VH_tagOnly_Aplanarity_stack_3->SetBinError(16,0.6717269);
   VH_tagOnly_Aplanarity_stack_3->SetBinError(17,0.5922985);
   VH_tagOnly_Aplanarity_stack_3->SetBinError(18,0.3244399);
   VH_tagOnly_Aplanarity_stack_3->SetBinError(19,0.2177242);
   VH_tagOnly_Aplanarity_stack_3->SetBinError(20,0.1876252);
   VH_tagOnly_Aplanarity_stack_3->SetBinError(21,0.1062246);
   VH_tagOnly_Aplanarity_stack_3->SetBinError(22,0.2150108);
   VH_tagOnly_Aplanarity_stack_3->SetEntries(4125860);

   ci = TColor::GetColor("#cc00cc");
   VH_tagOnly_Aplanarity_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VH_tagOnly_Aplanarity_stack_3->SetLineColor(ci);
   VH_tagOnly_Aplanarity_stack_3->GetXaxis()->SetRange(1,100);
   VH_tagOnly_Aplanarity_stack_3->GetXaxis()->SetLabelFont(42);
   VH_tagOnly_Aplanarity_stack_3->GetXaxis()->SetTitleOffset(1);
   VH_tagOnly_Aplanarity_stack_3->GetXaxis()->SetTitleFont(42);
   VH_tagOnly_Aplanarity_stack_3->GetYaxis()->SetLabelFont(42);
   VH_tagOnly_Aplanarity_stack_3->GetYaxis()->SetTitleFont(42);
   VH_tagOnly_Aplanarity_stack_3->GetZaxis()->SetLabelFont(42);
   VH_tagOnly_Aplanarity_stack_3->GetZaxis()->SetTitleOffset(1);
   VH_tagOnly_Aplanarity_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VH_tagOnly_Aplanarity_stack_3,"");
   
   TH1D *VH_tagOnly_Aplanarity_stack_4 = new TH1D("VH_tagOnly_Aplanarity_stack_4","",50,0,1);
   VH_tagOnly_Aplanarity_stack_4->SetBinContent(1,9705.341);
   VH_tagOnly_Aplanarity_stack_4->SetBinContent(2,1066.623);
   VH_tagOnly_Aplanarity_stack_4->SetBinContent(3,284.0979);
   VH_tagOnly_Aplanarity_stack_4->SetBinContent(4,96.09787);
   VH_tagOnly_Aplanarity_stack_4->SetBinContent(5,38.34829);
   VH_tagOnly_Aplanarity_stack_4->SetBinContent(6,16.56542);
   VH_tagOnly_Aplanarity_stack_4->SetBinContent(7,9.871843);
   VH_tagOnly_Aplanarity_stack_4->SetBinContent(8,6.006924);
   VH_tagOnly_Aplanarity_stack_4->SetBinContent(9,3.876025);
   VH_tagOnly_Aplanarity_stack_4->SetBinContent(10,2.789866);
   VH_tagOnly_Aplanarity_stack_4->SetBinContent(11,2.191146);
   VH_tagOnly_Aplanarity_stack_4->SetBinContent(12,0.4877802);
   VH_tagOnly_Aplanarity_stack_4->SetBinContent(13,0.2994622);
   VH_tagOnly_Aplanarity_stack_4->SetBinContent(14,0.4719848);
   VH_tagOnly_Aplanarity_stack_4->SetBinContent(15,0.1256136);
   VH_tagOnly_Aplanarity_stack_4->SetBinContent(16,0.1196562);
   VH_tagOnly_Aplanarity_stack_4->SetBinContent(17,0.1095954);
   VH_tagOnly_Aplanarity_stack_4->SetBinError(1,66.12834);
   VH_tagOnly_Aplanarity_stack_4->SetBinError(2,25.34547);
   VH_tagOnly_Aplanarity_stack_4->SetBinError(3,16.29389);
   VH_tagOnly_Aplanarity_stack_4->SetBinError(4,7.070051);
   VH_tagOnly_Aplanarity_stack_4->SetBinError(5,3.201517);
   VH_tagOnly_Aplanarity_stack_4->SetBinError(6,1.74148);
   VH_tagOnly_Aplanarity_stack_4->SetBinError(7,1.747408);
   VH_tagOnly_Aplanarity_stack_4->SetBinError(8,2.360119);
   VH_tagOnly_Aplanarity_stack_4->SetBinError(9,0.8816918);
   VH_tagOnly_Aplanarity_stack_4->SetBinError(10,0.6593986);
   VH_tagOnly_Aplanarity_stack_4->SetBinError(11,0.8165851);
   VH_tagOnly_Aplanarity_stack_4->SetBinError(12,0.2332376);
   VH_tagOnly_Aplanarity_stack_4->SetBinError(13,0.1454672);
   VH_tagOnly_Aplanarity_stack_4->SetBinError(14,0.2100241);
   VH_tagOnly_Aplanarity_stack_4->SetBinError(15,0.08952342);
   VH_tagOnly_Aplanarity_stack_4->SetBinError(16,0.1196562);
   VH_tagOnly_Aplanarity_stack_4->SetBinError(17,0.07779615);
   VH_tagOnly_Aplanarity_stack_4->SetEntries(88024);

   ci = TColor::GetColor("#00cccc");
   VH_tagOnly_Aplanarity_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VH_tagOnly_Aplanarity_stack_4->SetLineColor(ci);
   VH_tagOnly_Aplanarity_stack_4->GetXaxis()->SetRange(1,100);
   VH_tagOnly_Aplanarity_stack_4->GetXaxis()->SetLabelFont(42);
   VH_tagOnly_Aplanarity_stack_4->GetXaxis()->SetTitleOffset(1);
   VH_tagOnly_Aplanarity_stack_4->GetXaxis()->SetTitleFont(42);
   VH_tagOnly_Aplanarity_stack_4->GetYaxis()->SetLabelFont(42);
   VH_tagOnly_Aplanarity_stack_4->GetYaxis()->SetTitleFont(42);
   VH_tagOnly_Aplanarity_stack_4->GetZaxis()->SetLabelFont(42);
   VH_tagOnly_Aplanarity_stack_4->GetZaxis()->SetTitleOffset(1);
   VH_tagOnly_Aplanarity_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VH_tagOnly_Aplanarity_stack_4,"");
   
   TH1D *VH_tagOnly_Aplanarity_stack_5 = new TH1D("VH_tagOnly_Aplanarity_stack_5","",50,0,1);
   VH_tagOnly_Aplanarity_stack_5->SetBinContent(1,5427.349);
   VH_tagOnly_Aplanarity_stack_5->SetBinContent(2,570.2088);
   VH_tagOnly_Aplanarity_stack_5->SetBinContent(3,140.1998);
   VH_tagOnly_Aplanarity_stack_5->SetBinContent(4,55.26215);
   VH_tagOnly_Aplanarity_stack_5->SetBinContent(5,21.06698);
   VH_tagOnly_Aplanarity_stack_5->SetBinContent(6,14.2199);
   VH_tagOnly_Aplanarity_stack_5->SetBinContent(7,5.744995);
   VH_tagOnly_Aplanarity_stack_5->SetBinContent(8,2.57324);
   VH_tagOnly_Aplanarity_stack_5->SetBinContent(9,1.538774);
   VH_tagOnly_Aplanarity_stack_5->SetBinContent(10,0.5859825);
   VH_tagOnly_Aplanarity_stack_5->SetBinContent(11,0.6715958);
   VH_tagOnly_Aplanarity_stack_5->SetBinContent(12,0.5452484);
   VH_tagOnly_Aplanarity_stack_5->SetBinContent(13,0.09834596);
   VH_tagOnly_Aplanarity_stack_5->SetBinContent(14,0.07276465);
   VH_tagOnly_Aplanarity_stack_5->SetBinError(1,78.2463);
   VH_tagOnly_Aplanarity_stack_5->SetBinError(2,27.66994);
   VH_tagOnly_Aplanarity_stack_5->SetBinError(3,14.04507);
   VH_tagOnly_Aplanarity_stack_5->SetBinError(4,7.596503);
   VH_tagOnly_Aplanarity_stack_5->SetBinError(5,3.730701);
   VH_tagOnly_Aplanarity_stack_5->SetBinError(6,5.094453);
   VH_tagOnly_Aplanarity_stack_5->SetBinError(7,1.688982);
   VH_tagOnly_Aplanarity_stack_5->SetBinError(8,0.6925372);
   VH_tagOnly_Aplanarity_stack_5->SetBinError(9,0.4441239);
   VH_tagOnly_Aplanarity_stack_5->SetBinError(10,0.2967392);
   VH_tagOnly_Aplanarity_stack_5->SetBinError(11,0.2382996);
   VH_tagOnly_Aplanarity_stack_5->SetBinError(12,0.3310989);
   VH_tagOnly_Aplanarity_stack_5->SetBinError(13,0.08406827);
   VH_tagOnly_Aplanarity_stack_5->SetBinError(14,0.07276465);
   VH_tagOnly_Aplanarity_stack_5->SetEntries(42681);

   ci = TColor::GetColor("#ff99cc");
   VH_tagOnly_Aplanarity_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VH_tagOnly_Aplanarity_stack_5->SetLineColor(ci);
   VH_tagOnly_Aplanarity_stack_5->GetXaxis()->SetRange(1,100);
   VH_tagOnly_Aplanarity_stack_5->GetXaxis()->SetLabelFont(42);
   VH_tagOnly_Aplanarity_stack_5->GetXaxis()->SetTitleOffset(1);
   VH_tagOnly_Aplanarity_stack_5->GetXaxis()->SetTitleFont(42);
   VH_tagOnly_Aplanarity_stack_5->GetYaxis()->SetLabelFont(42);
   VH_tagOnly_Aplanarity_stack_5->GetYaxis()->SetTitleFont(42);
   VH_tagOnly_Aplanarity_stack_5->GetZaxis()->SetLabelFont(42);
   VH_tagOnly_Aplanarity_stack_5->GetZaxis()->SetTitleOffset(1);
   VH_tagOnly_Aplanarity_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VH_tagOnly_Aplanarity_stack_5,"");
   
   TH1D *VH_tagOnly_Aplanarity_stack_6 = new TH1D("VH_tagOnly_Aplanarity_stack_6","",50,0,1);
   VH_tagOnly_Aplanarity_stack_6->SetBinContent(1,49.12791);
   VH_tagOnly_Aplanarity_stack_6->SetBinContent(2,6.622979);
   VH_tagOnly_Aplanarity_stack_6->SetBinContent(3,1.678995);
   VH_tagOnly_Aplanarity_stack_6->SetBinContent(4,0.4299916);
   VH_tagOnly_Aplanarity_stack_6->SetBinContent(6,0.2611829);
   VH_tagOnly_Aplanarity_stack_6->SetBinContent(8,0.1686304);
   VH_tagOnly_Aplanarity_stack_6->SetBinError(1,4.248057);
   VH_tagOnly_Aplanarity_stack_6->SetBinError(2,1.618144);
   VH_tagOnly_Aplanarity_stack_6->SetBinError(3,0.8050669);
   VH_tagOnly_Aplanarity_stack_6->SetBinError(4,0.2501648);
   VH_tagOnly_Aplanarity_stack_6->SetBinError(6,0.2611829);
   VH_tagOnly_Aplanarity_stack_6->SetBinError(8,0.1686304);
   VH_tagOnly_Aplanarity_stack_6->SetEntries(198);

   ci = TColor::GetColor("#9933ff");
   VH_tagOnly_Aplanarity_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VH_tagOnly_Aplanarity_stack_6->SetLineColor(ci);
   VH_tagOnly_Aplanarity_stack_6->GetXaxis()->SetRange(1,100);
   VH_tagOnly_Aplanarity_stack_6->GetXaxis()->SetLabelFont(42);
   VH_tagOnly_Aplanarity_stack_6->GetXaxis()->SetTitleOffset(1);
   VH_tagOnly_Aplanarity_stack_6->GetXaxis()->SetTitleFont(42);
   VH_tagOnly_Aplanarity_stack_6->GetYaxis()->SetLabelFont(42);
   VH_tagOnly_Aplanarity_stack_6->GetYaxis()->SetTitleFont(42);
   VH_tagOnly_Aplanarity_stack_6->GetZaxis()->SetLabelFont(42);
   VH_tagOnly_Aplanarity_stack_6->GetZaxis()->SetTitleOffset(1);
   VH_tagOnly_Aplanarity_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VH_tagOnly_Aplanarity_stack_6,"");
   
   TH1D *VH_tagOnly_Aplanarity_stack_7 = new TH1D("VH_tagOnly_Aplanarity_stack_7","",50,0,1);
   VH_tagOnly_Aplanarity_stack_7->SetBinContent(1,126.6353);
   VH_tagOnly_Aplanarity_stack_7->SetBinContent(2,13.81624);
   VH_tagOnly_Aplanarity_stack_7->SetBinContent(3,2.753447);
   VH_tagOnly_Aplanarity_stack_7->SetBinContent(4,1.357695);
   VH_tagOnly_Aplanarity_stack_7->SetBinContent(5,0.2061255);
   VH_tagOnly_Aplanarity_stack_7->SetBinContent(6,0.8384539);
   VH_tagOnly_Aplanarity_stack_7->SetBinContent(8,0.1216993);
   VH_tagOnly_Aplanarity_stack_7->SetBinContent(11,0.5424682);
   VH_tagOnly_Aplanarity_stack_7->SetBinError(1,6.437766);
   VH_tagOnly_Aplanarity_stack_7->SetBinError(2,1.985612);
   VH_tagOnly_Aplanarity_stack_7->SetBinError(3,1.04625);
   VH_tagOnly_Aplanarity_stack_7->SetBinError(4,0.5565141);
   VH_tagOnly_Aplanarity_stack_7->SetBinError(5,0.2061255);
   VH_tagOnly_Aplanarity_stack_7->SetBinError(6,0.6151703);
   VH_tagOnly_Aplanarity_stack_7->SetBinError(8,0.1216993);
   VH_tagOnly_Aplanarity_stack_7->SetBinError(11,0.5424682);
   VH_tagOnly_Aplanarity_stack_7->SetEntries(598);

   ci = TColor::GetColor("#3399ff");
   VH_tagOnly_Aplanarity_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VH_tagOnly_Aplanarity_stack_7->SetLineColor(ci);
   VH_tagOnly_Aplanarity_stack_7->GetXaxis()->SetRange(1,100);
   VH_tagOnly_Aplanarity_stack_7->GetXaxis()->SetLabelFont(42);
   VH_tagOnly_Aplanarity_stack_7->GetXaxis()->SetTitleOffset(1);
   VH_tagOnly_Aplanarity_stack_7->GetXaxis()->SetTitleFont(42);
   VH_tagOnly_Aplanarity_stack_7->GetYaxis()->SetLabelFont(42);
   VH_tagOnly_Aplanarity_stack_7->GetYaxis()->SetTitleFont(42);
   VH_tagOnly_Aplanarity_stack_7->GetZaxis()->SetLabelFont(42);
   VH_tagOnly_Aplanarity_stack_7->GetZaxis()->SetTitleOffset(1);
   VH_tagOnly_Aplanarity_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VH_tagOnly_Aplanarity_stack_7,"");
   
   TH1D *VH_tagOnly_Aplanarity_stack_8 = new TH1D("VH_tagOnly_Aplanarity_stack_8","",50,0,1);
   VH_tagOnly_Aplanarity_stack_8->SetBinContent(1,100.6837);
   VH_tagOnly_Aplanarity_stack_8->SetBinContent(2,10.20436);
   VH_tagOnly_Aplanarity_stack_8->SetBinContent(3,4.077401);
   VH_tagOnly_Aplanarity_stack_8->SetBinContent(4,0.7375593);
   VH_tagOnly_Aplanarity_stack_8->SetBinError(1,6.01084);
   VH_tagOnly_Aplanarity_stack_8->SetBinError(2,1.779815);
   VH_tagOnly_Aplanarity_stack_8->SetBinError(3,1.340036);
   VH_tagOnly_Aplanarity_stack_8->SetBinError(4,0.4480842);
   VH_tagOnly_Aplanarity_stack_8->SetEntries(445);

   ci = TColor::GetColor("#33ff99");
   VH_tagOnly_Aplanarity_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VH_tagOnly_Aplanarity_stack_8->SetLineColor(ci);
   VH_tagOnly_Aplanarity_stack_8->GetXaxis()->SetRange(1,100);
   VH_tagOnly_Aplanarity_stack_8->GetXaxis()->SetLabelFont(42);
   VH_tagOnly_Aplanarity_stack_8->GetXaxis()->SetTitleOffset(1);
   VH_tagOnly_Aplanarity_stack_8->GetXaxis()->SetTitleFont(42);
   VH_tagOnly_Aplanarity_stack_8->GetYaxis()->SetLabelFont(42);
   VH_tagOnly_Aplanarity_stack_8->GetYaxis()->SetTitleFont(42);
   VH_tagOnly_Aplanarity_stack_8->GetZaxis()->SetLabelFont(42);
   VH_tagOnly_Aplanarity_stack_8->GetZaxis()->SetTitleOffset(1);
   VH_tagOnly_Aplanarity_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VH_tagOnly_Aplanarity_stack_8,"");
   
   TH1D *VH_tagOnly_Aplanarity_stack_9 = new TH1D("VH_tagOnly_Aplanarity_stack_9","",50,0,1);
   VH_tagOnly_Aplanarity_stack_9->SetBinContent(1,48.37412);
   VH_tagOnly_Aplanarity_stack_9->SetBinContent(2,4.563819);
   VH_tagOnly_Aplanarity_stack_9->SetBinContent(3,1.059172);
   VH_tagOnly_Aplanarity_stack_9->SetBinContent(4,0.333879);
   VH_tagOnly_Aplanarity_stack_9->SetBinContent(5,0.1655061);
   VH_tagOnly_Aplanarity_stack_9->SetBinContent(6,0.05796823);
   VH_tagOnly_Aplanarity_stack_9->SetBinContent(7,0.05089286);
   VH_tagOnly_Aplanarity_stack_9->SetBinContent(8,0.01224488);
   VH_tagOnly_Aplanarity_stack_9->SetBinContent(9,0.01468712);
   VH_tagOnly_Aplanarity_stack_9->SetBinContent(10,0.01783036);
   VH_tagOnly_Aplanarity_stack_9->SetBinContent(11,0.002246908);
   VH_tagOnly_Aplanarity_stack_9->SetBinContent(12,0.004749928);
   VH_tagOnly_Aplanarity_stack_9->SetBinContent(13,0.003274319);
   VH_tagOnly_Aplanarity_stack_9->SetBinContent(19,0.005490325);
   VH_tagOnly_Aplanarity_stack_9->SetBinError(1,0.316012);
   VH_tagOnly_Aplanarity_stack_9->SetBinError(2,0.09662607);
   VH_tagOnly_Aplanarity_stack_9->SetBinError(3,0.04817004);
   VH_tagOnly_Aplanarity_stack_9->SetBinError(4,0.02702475);
   VH_tagOnly_Aplanarity_stack_9->SetBinError(5,0.01888186);
   VH_tagOnly_Aplanarity_stack_9->SetBinError(6,0.01090959);
   VH_tagOnly_Aplanarity_stack_9->SetBinError(7,0.01149715);
   VH_tagOnly_Aplanarity_stack_9->SetBinError(8,0.004236214);
   VH_tagOnly_Aplanarity_stack_9->SetBinError(9,0.005100606);
   VH_tagOnly_Aplanarity_stack_9->SetBinError(10,0.009567786);
   VH_tagOnly_Aplanarity_stack_9->SetBinError(11,0.001277327);
   VH_tagOnly_Aplanarity_stack_9->SetBinError(12,0.002546967);
   VH_tagOnly_Aplanarity_stack_9->SetBinError(13,0.002473239);
   VH_tagOnly_Aplanarity_stack_9->SetBinError(19,0.003540414);
   VH_tagOnly_Aplanarity_stack_9->SetEntries(35311);

   ci = TColor::GetColor("#cccc00");
   VH_tagOnly_Aplanarity_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VH_tagOnly_Aplanarity_stack_9->SetLineColor(ci);
   VH_tagOnly_Aplanarity_stack_9->GetXaxis()->SetRange(1,100);
   VH_tagOnly_Aplanarity_stack_9->GetXaxis()->SetLabelFont(42);
   VH_tagOnly_Aplanarity_stack_9->GetXaxis()->SetTitleOffset(1);
   VH_tagOnly_Aplanarity_stack_9->GetXaxis()->SetTitleFont(42);
   VH_tagOnly_Aplanarity_stack_9->GetYaxis()->SetLabelFont(42);
   VH_tagOnly_Aplanarity_stack_9->GetYaxis()->SetTitleFont(42);
   VH_tagOnly_Aplanarity_stack_9->GetZaxis()->SetLabelFont(42);
   VH_tagOnly_Aplanarity_stack_9->GetZaxis()->SetTitleOffset(1);
   VH_tagOnly_Aplanarity_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VH_tagOnly_Aplanarity_stack_9,"");
   
   TH1D *VH_tagOnly_Aplanarity_stack_10 = new TH1D("VH_tagOnly_Aplanarity_stack_10","",50,0,1);
   VH_tagOnly_Aplanarity_stack_10->SetBinContent(1,34.34456);
   VH_tagOnly_Aplanarity_stack_10->SetBinContent(2,3.832371);
   VH_tagOnly_Aplanarity_stack_10->SetBinContent(3,0.9091098);
   VH_tagOnly_Aplanarity_stack_10->SetBinContent(4,0.3105118);
   VH_tagOnly_Aplanarity_stack_10->SetBinContent(5,0.1562063);
   VH_tagOnly_Aplanarity_stack_10->SetBinContent(6,0.06138069);
   VH_tagOnly_Aplanarity_stack_10->SetBinContent(7,0.0477543);
   VH_tagOnly_Aplanarity_stack_10->SetBinContent(8,0.02071588);
   VH_tagOnly_Aplanarity_stack_10->SetBinContent(9,0.0125897);
   VH_tagOnly_Aplanarity_stack_10->SetBinContent(10,0.008761115);
   VH_tagOnly_Aplanarity_stack_10->SetBinContent(11,0.004847907);
   VH_tagOnly_Aplanarity_stack_10->SetBinContent(12,0.003367393);
   VH_tagOnly_Aplanarity_stack_10->SetBinContent(13,0.001744388);
   VH_tagOnly_Aplanarity_stack_10->SetBinContent(14,0.001720403);
   VH_tagOnly_Aplanarity_stack_10->SetBinContent(16,0.0005089974);
   VH_tagOnly_Aplanarity_stack_10->SetBinContent(17,0.0003482848);
   VH_tagOnly_Aplanarity_stack_10->SetBinContent(19,0.0004489955);
   VH_tagOnly_Aplanarity_stack_10->SetBinContent(21,0.0003700873);
   VH_tagOnly_Aplanarity_stack_10->SetBinError(1,0.1084997);
   VH_tagOnly_Aplanarity_stack_10->SetBinError(2,0.03573712);
   VH_tagOnly_Aplanarity_stack_10->SetBinError(3,0.01743575);
   VH_tagOnly_Aplanarity_stack_10->SetBinError(4,0.01038347);
   VH_tagOnly_Aplanarity_stack_10->SetBinError(5,0.007426584);
   VH_tagOnly_Aplanarity_stack_10->SetBinError(6,0.004519679);
   VH_tagOnly_Aplanarity_stack_10->SetBinError(7,0.004104154);
   VH_tagOnly_Aplanarity_stack_10->SetBinError(8,0.002696091);
   VH_tagOnly_Aplanarity_stack_10->SetBinError(9,0.002093396);
   VH_tagOnly_Aplanarity_stack_10->SetBinError(10,0.001675404);
   VH_tagOnly_Aplanarity_stack_10->SetBinError(11,0.00141225);
   VH_tagOnly_Aplanarity_stack_10->SetBinError(12,0.001060805);
   VH_tagOnly_Aplanarity_stack_10->SetBinError(13,0.0007893163);
   VH_tagOnly_Aplanarity_stack_10->SetBinError(14,0.0007734416);
   VH_tagOnly_Aplanarity_stack_10->SetBinError(16,0.0003700688);
   VH_tagOnly_Aplanarity_stack_10->SetBinError(17,0.0003482848);
   VH_tagOnly_Aplanarity_stack_10->SetBinError(19,0.0004489955);
   VH_tagOnly_Aplanarity_stack_10->SetBinError(21,0.0003700873);
   VH_tagOnly_Aplanarity_stack_10->SetEntries(122178);

   ci = TColor::GetColor("#0000cc");
   VH_tagOnly_Aplanarity_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VH_tagOnly_Aplanarity_stack_10->SetLineColor(ci);
   VH_tagOnly_Aplanarity_stack_10->GetXaxis()->SetRange(1,100);
   VH_tagOnly_Aplanarity_stack_10->GetXaxis()->SetLabelFont(42);
   VH_tagOnly_Aplanarity_stack_10->GetXaxis()->SetTitleOffset(1);
   VH_tagOnly_Aplanarity_stack_10->GetXaxis()->SetTitleFont(42);
   VH_tagOnly_Aplanarity_stack_10->GetYaxis()->SetLabelFont(42);
   VH_tagOnly_Aplanarity_stack_10->GetYaxis()->SetTitleFont(42);
   VH_tagOnly_Aplanarity_stack_10->GetZaxis()->SetLabelFont(42);
   VH_tagOnly_Aplanarity_stack_10->GetZaxis()->SetTitleOffset(1);
   VH_tagOnly_Aplanarity_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VH_tagOnly_Aplanarity_stack_10,"");
   
   TH1D *VH_tagOnly_Aplanarity_stack_11 = new TH1D("VH_tagOnly_Aplanarity_stack_11","",50,0,1);
   VH_tagOnly_Aplanarity_stack_11->SetBinContent(1,1.25726);
   VH_tagOnly_Aplanarity_stack_11->SetBinContent(2,0.1165547);
   VH_tagOnly_Aplanarity_stack_11->SetBinContent(3,0.02706904);
   VH_tagOnly_Aplanarity_stack_11->SetBinContent(4,0.01161365);
   VH_tagOnly_Aplanarity_stack_11->SetBinContent(5,0.005016942);
   VH_tagOnly_Aplanarity_stack_11->SetBinContent(6,0.001290917);
   VH_tagOnly_Aplanarity_stack_11->SetBinContent(7,0.0001481517);
   VH_tagOnly_Aplanarity_stack_11->SetBinContent(9,0.001064883);
   VH_tagOnly_Aplanarity_stack_11->SetBinContent(11,0.0009156332);
   VH_tagOnly_Aplanarity_stack_11->SetBinError(1,0.04423617);
   VH_tagOnly_Aplanarity_stack_11->SetBinError(2,0.01368821);
   VH_tagOnly_Aplanarity_stack_11->SetBinError(3,0.006903648);
   VH_tagOnly_Aplanarity_stack_11->SetBinError(4,0.003841252);
   VH_tagOnly_Aplanarity_stack_11->SetBinError(5,0.0025094);
   VH_tagOnly_Aplanarity_stack_11->SetBinError(6,0.001290917);
   VH_tagOnly_Aplanarity_stack_11->SetBinError(7,0.0001481517);
   VH_tagOnly_Aplanarity_stack_11->SetBinError(9,0.001064883);
   VH_tagOnly_Aplanarity_stack_11->SetBinError(11,0.0009156332);
   VH_tagOnly_Aplanarity_stack_11->SetEntries(1088);

   ci = TColor::GetColor("#cc0000");
   VH_tagOnly_Aplanarity_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VH_tagOnly_Aplanarity_stack_11->SetLineColor(ci);
   VH_tagOnly_Aplanarity_stack_11->GetXaxis()->SetRange(1,100);
   VH_tagOnly_Aplanarity_stack_11->GetXaxis()->SetLabelFont(42);
   VH_tagOnly_Aplanarity_stack_11->GetXaxis()->SetTitleOffset(1);
   VH_tagOnly_Aplanarity_stack_11->GetXaxis()->SetTitleFont(42);
   VH_tagOnly_Aplanarity_stack_11->GetYaxis()->SetLabelFont(42);
   VH_tagOnly_Aplanarity_stack_11->GetYaxis()->SetTitleFont(42);
   VH_tagOnly_Aplanarity_stack_11->GetZaxis()->SetLabelFont(42);
   VH_tagOnly_Aplanarity_stack_11->GetZaxis()->SetTitleOffset(1);
   VH_tagOnly_Aplanarity_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VH_tagOnly_Aplanarity_stack_11,"");
   
   TH1D *VH_tagOnly_Aplanarity_stack_12 = new TH1D("VH_tagOnly_Aplanarity_stack_12","",50,0,1);
   VH_tagOnly_Aplanarity_stack_12->SetBinContent(1,0.6231425);
   VH_tagOnly_Aplanarity_stack_12->SetBinContent(2,0.0734652);
   VH_tagOnly_Aplanarity_stack_12->SetBinContent(3,0.01566838);
   VH_tagOnly_Aplanarity_stack_12->SetBinContent(4,0.005254937);
   VH_tagOnly_Aplanarity_stack_12->SetBinContent(5,0.00250862);
   VH_tagOnly_Aplanarity_stack_12->SetBinContent(6,0.0002566427);
   VH_tagOnly_Aplanarity_stack_12->SetBinContent(7,0.0006762056);
   VH_tagOnly_Aplanarity_stack_12->SetBinContent(8,0.001198057);
   VH_tagOnly_Aplanarity_stack_12->SetBinContent(10,0.0001482523);
   VH_tagOnly_Aplanarity_stack_12->SetBinContent(11,0.0008430725);
   VH_tagOnly_Aplanarity_stack_12->SetBinError(1,0.01139402);
   VH_tagOnly_Aplanarity_stack_12->SetBinError(2,0.004002337);
   VH_tagOnly_Aplanarity_stack_12->SetBinError(3,0.001843806);
   VH_tagOnly_Aplanarity_stack_12->SetBinError(4,0.001136168);
   VH_tagOnly_Aplanarity_stack_12->SetBinError(5,0.000690103);
   VH_tagOnly_Aplanarity_stack_12->SetBinError(6,0.0001870381);
   VH_tagOnly_Aplanarity_stack_12->SetBinError(7,0.0003392712);
   VH_tagOnly_Aplanarity_stack_12->SetBinError(8,0.0006203505);
   VH_tagOnly_Aplanarity_stack_12->SetBinError(10,0.0001482523);
   VH_tagOnly_Aplanarity_stack_12->SetBinError(11,0.0004308263);
   VH_tagOnly_Aplanarity_stack_12->SetEntries(4044);

   ci = TColor::GetColor("#00cc00");
   VH_tagOnly_Aplanarity_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VH_tagOnly_Aplanarity_stack_12->SetLineColor(ci);
   VH_tagOnly_Aplanarity_stack_12->GetXaxis()->SetRange(1,100);
   VH_tagOnly_Aplanarity_stack_12->GetXaxis()->SetLabelFont(42);
   VH_tagOnly_Aplanarity_stack_12->GetXaxis()->SetTitleOffset(1);
   VH_tagOnly_Aplanarity_stack_12->GetXaxis()->SetTitleFont(42);
   VH_tagOnly_Aplanarity_stack_12->GetYaxis()->SetLabelFont(42);
   VH_tagOnly_Aplanarity_stack_12->GetYaxis()->SetTitleFont(42);
   VH_tagOnly_Aplanarity_stack_12->GetZaxis()->SetLabelFont(42);
   VH_tagOnly_Aplanarity_stack_12->GetZaxis()->SetTitleOffset(1);
   VH_tagOnly_Aplanarity_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VH_tagOnly_Aplanarity_stack_12,"");
   st->Draw("hist");
   
   TH1D *VH_tagOnly_Aplanarity__93 = new TH1D("VH_tagOnly_Aplanarity__93","",50,0,1);
   VH_tagOnly_Aplanarity__93->SetBinContent(1,1132810);
   VH_tagOnly_Aplanarity__93->SetBinContent(2,149893);
   VH_tagOnly_Aplanarity__93->SetBinContent(3,38494);
   VH_tagOnly_Aplanarity__93->SetBinContent(4,13069);
   VH_tagOnly_Aplanarity__93->SetBinContent(5,5348);
   VH_tagOnly_Aplanarity__93->SetBinContent(6,2561);
   VH_tagOnly_Aplanarity__93->SetBinContent(7,1429);
   VH_tagOnly_Aplanarity__93->SetBinContent(8,810);
   VH_tagOnly_Aplanarity__93->SetBinContent(9,470);
   VH_tagOnly_Aplanarity__93->SetBinContent(10,299);
   VH_tagOnly_Aplanarity__93->SetBinContent(11,208);
   VH_tagOnly_Aplanarity__93->SetBinContent(12,115);
   VH_tagOnly_Aplanarity__93->SetBinContent(13,77);
   VH_tagOnly_Aplanarity__93->SetBinContent(14,46);
   VH_tagOnly_Aplanarity__93->SetBinContent(15,37);
   VH_tagOnly_Aplanarity__93->SetBinContent(16,18);
   VH_tagOnly_Aplanarity__93->SetBinContent(17,7);
   VH_tagOnly_Aplanarity__93->SetBinContent(18,10);
   VH_tagOnly_Aplanarity__93->SetBinContent(19,1);
   VH_tagOnly_Aplanarity__93->SetBinContent(21,1);
   VH_tagOnly_Aplanarity__93->SetBinError(1,1064.335);
   VH_tagOnly_Aplanarity__93->SetBinError(2,387.1602);
   VH_tagOnly_Aplanarity__93->SetBinError(3,196.1989);
   VH_tagOnly_Aplanarity__93->SetBinError(4,114.3197);
   VH_tagOnly_Aplanarity__93->SetBinError(5,73.13002);
   VH_tagOnly_Aplanarity__93->SetBinError(6,50.60632);
   VH_tagOnly_Aplanarity__93->SetBinError(7,37.80212);
   VH_tagOnly_Aplanarity__93->SetBinError(8,28.4605);
   VH_tagOnly_Aplanarity__93->SetBinError(9,21.67948);
   VH_tagOnly_Aplanarity__93->SetBinError(10,17.29162);
   VH_tagOnly_Aplanarity__93->SetBinError(11,14.42221);
   VH_tagOnly_Aplanarity__93->SetBinError(12,10.72381);
   VH_tagOnly_Aplanarity__93->SetBinError(13,8.774964);
   VH_tagOnly_Aplanarity__93->SetBinError(14,6.78233);
   VH_tagOnly_Aplanarity__93->SetBinError(15,6.082763);
   VH_tagOnly_Aplanarity__93->SetBinError(16,4.242641);
   VH_tagOnly_Aplanarity__93->SetBinError(17,2.645751);
   VH_tagOnly_Aplanarity__93->SetBinError(18,3.162278);
   VH_tagOnly_Aplanarity__93->SetBinError(19,1);
   VH_tagOnly_Aplanarity__93->SetBinError(21,1);
   VH_tagOnly_Aplanarity__93->SetEntries(1345752);

   ci = TColor::GetColor("#000099");
   VH_tagOnly_Aplanarity__93->SetLineColor(ci);
   VH_tagOnly_Aplanarity__93->SetLineWidth(2);
   VH_tagOnly_Aplanarity__93->SetMarkerStyle(20);
   VH_tagOnly_Aplanarity__93->SetMarkerSize(1.2);
   VH_tagOnly_Aplanarity__93->GetXaxis()->SetRange(1,100);
   VH_tagOnly_Aplanarity__93->GetXaxis()->SetLabelFont(42);
   VH_tagOnly_Aplanarity__93->GetXaxis()->SetTitleOffset(1);
   VH_tagOnly_Aplanarity__93->GetXaxis()->SetTitleFont(42);
   VH_tagOnly_Aplanarity__93->GetYaxis()->SetLabelFont(42);
   VH_tagOnly_Aplanarity__93->GetYaxis()->SetTitleFont(42);
   VH_tagOnly_Aplanarity__93->GetZaxis()->SetLabelFont(42);
   VH_tagOnly_Aplanarity__93->GetZaxis()->SetTitleOffset(1);
   VH_tagOnly_Aplanarity__93->GetZaxis()->SetTitleFont(42);
   VH_tagOnly_Aplanarity__93->Draw("same E");
   
   Double_t Graph_from_VH_tagOnly_Aplanarity_fx1093[50] = { 0.01, 0.03, 0.05, 0.07, 0.09, 0.11, 0.13, 0.15, 0.17, 0.19, 0.21, 0.23, 0.25, 0.27, 0.29, 0.31, 0.33,
   0.35, 0.37, 0.39, 0.41, 0.43, 0.45, 0.47, 0.49, 0.51, 0.53, 0.55, 0.57, 0.59, 0.61, 0.63, 0.65,
   0.67, 0.69, 0.71, 0.73, 0.75, 0.77, 0.79, 0.81, 0.83, 0.85, 0.87, 0.89, 0.91, 0.93, 0.95, 0.97,
   0.99 };
   Double_t Graph_from_VH_tagOnly_Aplanarity_fy1093[50] = { 1374539, 169062.5, 41326.88, 15940.98, 8846.661, 2534.493, 1220.478, 976.0575, 620.1137, 414.3389, 259.8714, 67.07798, 72.01159, 56.88777, 11.86452, 30.82871, 4.329029,
   45.67779, 0.943907, 0.5949118, 0.2056622, 0.3021764, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0 };
   Double_t Graph_from_VH_tagOnly_Aplanarity_fex1093[50] = { 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01 };
   Double_t Graph_from_VH_tagOnly_Aplanarity_fey1093[50] = { 46208.11, 5181.83, 2344.731, 1688.211, 3093.648, 372.1799, 193.5762, 267.5836, 192.5669, 210.8478, 61.16552, 15.33017, 17.5523, 23.29461, 1.512694, 15.11764, 0.7728112,
   30.9397, 0.2873417, 0.1876252, 0.1062253, 0.2150108, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0 };
   TGraphErrors *gre = new TGraphErrors(50,Graph_from_VH_tagOnly_Aplanarity_fx1093,Graph_from_VH_tagOnly_Aplanarity_fy1093,Graph_from_VH_tagOnly_Aplanarity_fex1093,Graph_from_VH_tagOnly_Aplanarity_fey1093);
   gre->SetName("Graph_from_VH_tagOnly_Aplanarity");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VH_tagOnly_Aplanarity1093 = new TH1F("Graph_Graph_from_VH_tagOnly_Aplanarity1093","",100,0,1.1);
   Graph_Graph_from_VH_tagOnly_Aplanarity1093->SetMinimum(0);
   Graph_Graph_from_VH_tagOnly_Aplanarity1093->SetMaximum(1562822);
   Graph_Graph_from_VH_tagOnly_Aplanarity1093->SetDirectory(nullptr);
   Graph_Graph_from_VH_tagOnly_Aplanarity1093->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VH_tagOnly_Aplanarity1093->SetLineColor(ci);
   Graph_Graph_from_VH_tagOnly_Aplanarity1093->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VH_tagOnly_Aplanarity1093->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_from_VH_tagOnly_Aplanarity1093->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VH_tagOnly_Aplanarity1093->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VH_tagOnly_Aplanarity1093->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VH_tagOnly_Aplanarity1093->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VH_tagOnly_Aplanarity1093->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_from_VH_tagOnly_Aplanarity1093->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VH_tagOnly_Aplanarity1093);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VH_tagOnly_Aplanarity","Data (BTagCSV, 2017)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VH_tagOnly_Aplanarity","ggZHcc","F");

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
   entry=leg->AddEntry("VH_tagOnly_Aplanarity","ZHcc","F");

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
   entry=leg->AddEntry("VH_tagOnly_Aplanarity","ggZHbb","F");

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
   entry=leg->AddEntry("VH_tagOnly_Aplanarity","ZHbb","F");

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
   entry=leg->AddEntry("VH_tagOnly_Aplanarity","ZZ","F");

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
   entry=leg->AddEntry("VH_tagOnly_Aplanarity","WZ","F");

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
   entry=leg->AddEntry("VH_tagOnly_Aplanarity","WW","F");

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
   entry=leg->AddEntry("VH_tagOnly_Aplanarity","W + jets","F");

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
   entry=leg->AddEntry("VH_tagOnly_Aplanarity","Z + jets","F");

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
   entry=leg->AddEntry("VH_tagOnly_Aplanarity","t#bar{t}","F");

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
   entry=leg->AddEntry("VH_tagOnly_Aplanarity","Single top","F");

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
   entry=leg->AddEntry("VH_tagOnly_Aplanarity","QCD","F");

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
   entry=leg->AddEntry("Graph_from_VH_tagOnly_Aplanarity","MC unc. (stat.)","fl");

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
   Aplanarity_tagOnly_17->cd();
  
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
   
   TH1D *data_mc_ratio__94 = new TH1D("data_mc_ratio__94","",50,0,1);
   data_mc_ratio__94->SetBinContent(1,0.8241382);
   data_mc_ratio__94->SetBinContent(2,0.886613);
   data_mc_ratio__94->SetBinContent(3,0.9314519);
   data_mc_ratio__94->SetBinContent(4,0.8198367);
   data_mc_ratio__94->SetBinContent(5,0.6045219);
   data_mc_ratio__94->SetBinContent(6,1.010458);
   data_mc_ratio__94->SetBinContent(7,1.170853);
   data_mc_ratio__94->SetBinContent(8,0.8298691);
   data_mc_ratio__94->SetBinContent(9,0.7579256);
   data_mc_ratio__94->SetBinContent(10,0.7216316);
   data_mc_ratio__94->SetBinContent(11,0.8003958);
   data_mc_ratio__94->SetBinContent(12,1.714422);
   data_mc_ratio__94->SetBinContent(13,1.069272);
   data_mc_ratio__94->SetBinContent(14,0.8086096);
   data_mc_ratio__94->SetBinContent(15,3.11854);
   data_mc_ratio__94->SetBinContent(16,0.5838713);
   data_mc_ratio__94->SetBinContent(17,1.616991);
   data_mc_ratio__94->SetBinContent(18,0.2189248);
   data_mc_ratio__94->SetBinContent(19,1.059426);
   data_mc_ratio__94->SetBinContent(21,4.862342);
   data_mc_ratio__94->SetBinError(1,0.0007743218);
   data_mc_ratio__94->SetBinError(2,0.002290042);
   data_mc_ratio__94->SetBinError(3,0.004747489);
   data_mc_ratio__94->SetBinError(4,0.007171437);
   data_mc_ratio__94->SetBinError(5,0.008266398);
   data_mc_ratio__94->SetBinError(6,0.01996704);
   data_mc_ratio__94->SetBinError(7,0.0309732);
   data_mc_ratio__94->SetBinError(8,0.02915863);
   data_mc_ratio__94->SetBinError(9,0.0349605);
   data_mc_ratio__94->SetBinError(10,0.04173303);
   data_mc_ratio__94->SetBinError(11,0.05549746);
   data_mc_ratio__94->SetBinError(12,0.1598707);
   data_mc_ratio__94->SetBinError(13,0.1218549);
   data_mc_ratio__94->SetBinError(14,0.119223);
   data_mc_ratio__94->SetBinError(15,0.5126849);
   data_mc_ratio__94->SetBinError(16,0.1376198);
   data_mc_ratio__94->SetBinError(17,0.611165);
   data_mc_ratio__94->SetBinError(18,0.06923009);
   data_mc_ratio__94->SetBinError(19,1.059426);
   data_mc_ratio__94->SetBinError(21,4.862342);
   data_mc_ratio__94->SetMinimum(0.4);
   data_mc_ratio__94->SetMaximum(1.6);
   data_mc_ratio__94->SetEntries(18.07471);
   data_mc_ratio__94->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__94->SetLineColor(ci);
   data_mc_ratio__94->SetLineWidth(2);
   data_mc_ratio__94->SetMarkerStyle(20);
   data_mc_ratio__94->SetMarkerSize(1.2);
   data_mc_ratio__94->GetXaxis()->SetTitle("Aplanarity");
   data_mc_ratio__94->GetXaxis()->SetRange(1,50);
   data_mc_ratio__94->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__94->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__94->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__94->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__94->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__94->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__94->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__94->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__94->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__94->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__94->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__94->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__94->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__94->GetZaxis()->SetTitleOffset(1);
   data_mc_ratio__94->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__94->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1094[50] = { 0.01, 0.03, 0.05, 0.07, 0.09, 0.11, 0.13, 0.15, 0.17, 0.19, 0.21, 0.23, 0.25, 0.27, 0.29, 0.31, 0.33,
   0.35, 0.37, 0.39, 0.41, 0.43, 0.45, 0.47, 0.49, 0.51, 0.53, 0.55, 0.57, 0.59, 0.61, 0.63, 0.65,
   0.67, 0.69, 0.71, 0.73, 0.75, 0.77, 0.79, 0.81, 0.83, 0.85, 0.87, 0.89, 0.91, 0.93, 0.95, 0.97,
   0.99 };
   Double_t Graph_from_mc_statistical_error_fy1094[50] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1 };
   Double_t Graph_from_mc_statistical_error_fex1094[50] = { 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01 };
   Double_t Graph_from_mc_statistical_error_fey1094[50] = { 0.03361717, 0.03065039, 0.05673622, 0.1059039, 0.3496967, 0.1468459, 0.1586069, 0.2741473, 0.3105349, 0.5088776, 0.2353684, 0.2285425, 0.2437426, 0.4094837, 0.1274972, 0.4903755, 0.1785184,
   0.6773466, 0.3044174, 0.3153832, 0.5165036, 0.7115409, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0 };
   gre = new TGraphErrors(50,Graph_from_mc_statistical_error_fx1094,Graph_from_mc_statistical_error_fy1094,Graph_from_mc_statistical_error_fex1094,Graph_from_mc_statistical_error_fey1094);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1094 = new TH1F("Graph_Graph_from_mc_statistical_error1094","",100,0,1.1);
   Graph_Graph_from_mc_statistical_error1094->SetMinimum(0.1461509);
   Graph_Graph_from_mc_statistical_error1094->SetMaximum(1.853849);
   Graph_Graph_from_mc_statistical_error1094->SetDirectory(nullptr);
   Graph_Graph_from_mc_statistical_error1094->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1094->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1094->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1094->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_from_mc_statistical_error1094->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1094->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1094->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1094->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1094->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_from_mc_statistical_error1094->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1094);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,1,1);
   line->Draw();
   bottomPad->Modified();
   Aplanarity_tagOnly_17->cd();
   Aplanarity_tagOnly_17->Modified();
   Aplanarity_tagOnly_17->cd();
   Aplanarity_tagOnly_17->SetSelected(Aplanarity_tagOnly_17);
}
