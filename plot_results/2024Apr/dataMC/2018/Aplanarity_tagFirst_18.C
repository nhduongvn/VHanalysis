#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Aplanarity_tagFirst_18()
{
//=========Macro generated from canvas: Aplanarity_tagFirst_18/Aplanarity_tagFirst_18
//=========  (Thu Apr 11 14:06:25 2024) by ROOT version 6.28/10
   TCanvas *Aplanarity_tagFirst_18 = new TCanvas("Aplanarity_tagFirst_18", "Aplanarity_tagFirst_18",0,0,600,600);
   Aplanarity_tagFirst_18->SetHighLightColor(2);
   Aplanarity_tagFirst_18->Range(0,0,1,1);
   Aplanarity_tagFirst_18->SetFillColor(0);
   Aplanarity_tagFirst_18->SetFillStyle(4000);
   Aplanarity_tagFirst_18->SetBorderMode(0);
   Aplanarity_tagFirst_18->SetBorderSize(2);
   Aplanarity_tagFirst_18->SetFrameFillStyle(1000);
   Aplanarity_tagFirst_18->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.1532254,-7193.174,1.052419,7185991);
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
   st->SetMaximum(6466672);
   
   TH1F *st_stack_48 = new TH1F("st_stack_48","",50,0,1);
   st_stack_48->SetMinimum(0.01);
   st_stack_48->SetMaximum(6466672);
   st_stack_48->SetDirectory(nullptr);
   st_stack_48->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_48->SetLineColor(ci);
   st_stack_48->SetLineWidth(0);
   st_stack_48->GetXaxis()->SetRange(1,50);
   st_stack_48->GetXaxis()->SetLabelFont(42);
   st_stack_48->GetXaxis()->SetTitleOffset(1);
   st_stack_48->GetXaxis()->SetTitleFont(42);
   st_stack_48->GetYaxis()->SetTitle("Events/0.02");
   st_stack_48->GetYaxis()->SetLabelFont(42);
   st_stack_48->GetYaxis()->SetLabelSize(0.05);
   st_stack_48->GetYaxis()->SetTitleSize(0.057);
   st_stack_48->GetYaxis()->SetTitleOffset(1.2);
   st_stack_48->GetYaxis()->SetTitleFont(42);
   st_stack_48->GetZaxis()->SetLabelFont(42);
   st_stack_48->GetZaxis()->SetTitleOffset(1);
   st_stack_48->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_48);
   
   
   TH1D *VH_tagFirst_Aplanarity_stack_1 = new TH1D("VH_tagFirst_Aplanarity_stack_1","",50,0,1);
   VH_tagFirst_Aplanarity_stack_1->SetBinContent(1,2296546);
   VH_tagFirst_Aplanarity_stack_1->SetBinContent(2,295899.4);
   VH_tagFirst_Aplanarity_stack_1->SetBinContent(3,65205.05);
   VH_tagFirst_Aplanarity_stack_1->SetBinContent(4,23120.52);
   VH_tagFirst_Aplanarity_stack_1->SetBinContent(5,7365.568);
   VH_tagFirst_Aplanarity_stack_1->SetBinContent(6,4637);
   VH_tagFirst_Aplanarity_stack_1->SetBinContent(7,1279.728);
   VH_tagFirst_Aplanarity_stack_1->SetBinContent(8,7032.195);
   VH_tagFirst_Aplanarity_stack_1->SetBinContent(9,603.5351);
   VH_tagFirst_Aplanarity_stack_1->SetBinContent(10,473.1283);
   VH_tagFirst_Aplanarity_stack_1->SetBinContent(11,113.1088);
   VH_tagFirst_Aplanarity_stack_1->SetBinContent(12,104.8418);
   VH_tagFirst_Aplanarity_stack_1->SetBinContent(13,1077.596);
   VH_tagFirst_Aplanarity_stack_1->SetBinContent(14,72.73382);
   VH_tagFirst_Aplanarity_stack_1->SetBinContent(16,9.883991);
   VH_tagFirst_Aplanarity_stack_1->SetBinContent(17,62.03037);
   VH_tagFirst_Aplanarity_stack_1->SetBinContent(19,26.78773);
   VH_tagFirst_Aplanarity_stack_1->SetBinError(1,46840.6);
   VH_tagFirst_Aplanarity_stack_1->SetBinError(2,14565.42);
   VH_tagFirst_Aplanarity_stack_1->SetBinError(3,5761.681);
   VH_tagFirst_Aplanarity_stack_1->SetBinError(4,3200.638);
   VH_tagFirst_Aplanarity_stack_1->SetBinError(5,984.251);
   VH_tagFirst_Aplanarity_stack_1->SetBinError(6,1190.954);
   VH_tagFirst_Aplanarity_stack_1->SetBinError(7,256.3152);
   VH_tagFirst_Aplanarity_stack_1->SetBinError(8,4793.639);
   VH_tagFirst_Aplanarity_stack_1->SetBinError(9,166.5442);
   VH_tagFirst_Aplanarity_stack_1->SetBinError(10,176.4682);
   VH_tagFirst_Aplanarity_stack_1->SetBinError(11,54.85909);
   VH_tagFirst_Aplanarity_stack_1->SetBinError(12,43.99534);
   VH_tagFirst_Aplanarity_stack_1->SetBinError(13,925.5147);
   VH_tagFirst_Aplanarity_stack_1->SetBinError(14,40.51065);
   VH_tagFirst_Aplanarity_stack_1->SetBinError(16,9.082946);
   VH_tagFirst_Aplanarity_stack_1->SetBinError(17,62.03037);
   VH_tagFirst_Aplanarity_stack_1->SetBinError(19,26.78773);
   VH_tagFirst_Aplanarity_stack_1->SetEntries(88189);

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
   VH_tagFirst_Aplanarity_stack_2->SetBinContent(1,31383.9);
   VH_tagFirst_Aplanarity_stack_2->SetBinContent(2,4190.851);
   VH_tagFirst_Aplanarity_stack_2->SetBinContent(3,1080.297);
   VH_tagFirst_Aplanarity_stack_2->SetBinContent(4,410.715);
   VH_tagFirst_Aplanarity_stack_2->SetBinContent(5,163.541);
   VH_tagFirst_Aplanarity_stack_2->SetBinContent(6,74.30598);
   VH_tagFirst_Aplanarity_stack_2->SetBinContent(7,46.99685);
   VH_tagFirst_Aplanarity_stack_2->SetBinContent(8,32.16735);
   VH_tagFirst_Aplanarity_stack_2->SetBinContent(9,13.65996);
   VH_tagFirst_Aplanarity_stack_2->SetBinContent(10,5.345863);
   VH_tagFirst_Aplanarity_stack_2->SetBinContent(11,3.29089);
   VH_tagFirst_Aplanarity_stack_2->SetBinContent(12,4.256857);
   VH_tagFirst_Aplanarity_stack_2->SetBinContent(13,2.610377);
   VH_tagFirst_Aplanarity_stack_2->SetBinContent(14,1.430054);
   VH_tagFirst_Aplanarity_stack_2->SetBinContent(15,0.5041376);
   VH_tagFirst_Aplanarity_stack_2->SetBinContent(16,0.4680665);
   VH_tagFirst_Aplanarity_stack_2->SetBinContent(17,0.6228564);
   VH_tagFirst_Aplanarity_stack_2->SetBinContent(18,0.141595);
   VH_tagFirst_Aplanarity_stack_2->SetBinError(1,121.5113);
   VH_tagFirst_Aplanarity_stack_2->SetBinError(2,43.13025);
   VH_tagFirst_Aplanarity_stack_2->SetBinError(3,22.35205);
   VH_tagFirst_Aplanarity_stack_2->SetBinError(4,13.17551);
   VH_tagFirst_Aplanarity_stack_2->SetBinError(5,8.758012);
   VH_tagFirst_Aplanarity_stack_2->SetBinError(6,5.336223);
   VH_tagFirst_Aplanarity_stack_2->SetBinError(7,7.853524);
   VH_tagFirst_Aplanarity_stack_2->SetBinError(8,4.667617);
   VH_tagFirst_Aplanarity_stack_2->SetBinError(9,2.292914);
   VH_tagFirst_Aplanarity_stack_2->SetBinError(10,1.027858);
   VH_tagFirst_Aplanarity_stack_2->SetBinError(11,0.9497498);
   VH_tagFirst_Aplanarity_stack_2->SetBinError(12,1.326312);
   VH_tagFirst_Aplanarity_stack_2->SetBinError(13,0.8857739);
   VH_tagFirst_Aplanarity_stack_2->SetBinError(14,0.65986);
   VH_tagFirst_Aplanarity_stack_2->SetBinError(15,0.3444202);
   VH_tagFirst_Aplanarity_stack_2->SetBinError(16,0.3247539);
   VH_tagFirst_Aplanarity_stack_2->SetBinError(17,0.3590595);
   VH_tagFirst_Aplanarity_stack_2->SetBinError(18,0.09183141);
   VH_tagFirst_Aplanarity_stack_2->SetEntries(235768);

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
   VH_tagFirst_Aplanarity_stack_3->SetBinContent(1,546878.8);
   VH_tagFirst_Aplanarity_stack_3->SetBinContent(2,73103.86);
   VH_tagFirst_Aplanarity_stack_3->SetBinContent(3,19178.14);
   VH_tagFirst_Aplanarity_stack_3->SetBinContent(4,6930.733);
   VH_tagFirst_Aplanarity_stack_3->SetBinContent(5,3209.59);
   VH_tagFirst_Aplanarity_stack_3->SetBinContent(6,1621.973);
   VH_tagFirst_Aplanarity_stack_3->SetBinContent(7,917.5653);
   VH_tagFirst_Aplanarity_stack_3->SetBinContent(8,534.4653);
   VH_tagFirst_Aplanarity_stack_3->SetBinContent(9,313.0671);
   VH_tagFirst_Aplanarity_stack_3->SetBinContent(10,213.2113);
   VH_tagFirst_Aplanarity_stack_3->SetBinContent(11,132.5987);
   VH_tagFirst_Aplanarity_stack_3->SetBinContent(12,88.12645);
   VH_tagFirst_Aplanarity_stack_3->SetBinContent(13,50.90064);
   VH_tagFirst_Aplanarity_stack_3->SetBinContent(14,33.15174);
   VH_tagFirst_Aplanarity_stack_3->SetBinContent(15,19.33292);
   VH_tagFirst_Aplanarity_stack_3->SetBinContent(16,10.61719);
   VH_tagFirst_Aplanarity_stack_3->SetBinContent(17,9.462065);
   VH_tagFirst_Aplanarity_stack_3->SetBinContent(18,4.104761);
   VH_tagFirst_Aplanarity_stack_3->SetBinContent(19,2.197296);
   VH_tagFirst_Aplanarity_stack_3->SetBinContent(20,0.4592605);
   VH_tagFirst_Aplanarity_stack_3->SetBinContent(21,0.9147863);
   VH_tagFirst_Aplanarity_stack_3->SetBinContent(22,0.08122825);
   VH_tagFirst_Aplanarity_stack_3->SetBinError(1,319.0824);
   VH_tagFirst_Aplanarity_stack_3->SetBinError(2,116.1347);
   VH_tagFirst_Aplanarity_stack_3->SetBinError(3,60.10227);
   VH_tagFirst_Aplanarity_stack_3->SetBinError(4,35.27253);
   VH_tagFirst_Aplanarity_stack_3->SetBinError(5,26.48391);
   VH_tagFirst_Aplanarity_stack_3->SetBinError(6,16.94817);
   VH_tagFirst_Aplanarity_stack_3->SetBinError(7,13.25151);
   VH_tagFirst_Aplanarity_stack_3->SetBinError(8,9.644377);
   VH_tagFirst_Aplanarity_stack_3->SetBinError(9,7.394896);
   VH_tagFirst_Aplanarity_stack_3->SetBinError(10,6.268308);
   VH_tagFirst_Aplanarity_stack_3->SetBinError(11,4.767412);
   VH_tagFirst_Aplanarity_stack_3->SetBinError(12,4.350696);
   VH_tagFirst_Aplanarity_stack_3->SetBinError(13,2.852832);
   VH_tagFirst_Aplanarity_stack_3->SetBinError(14,3.953597);
   VH_tagFirst_Aplanarity_stack_3->SetBinError(15,1.901375);
   VH_tagFirst_Aplanarity_stack_3->SetBinError(16,1.379436);
   VH_tagFirst_Aplanarity_stack_3->SetBinError(17,2.617461);
   VH_tagFirst_Aplanarity_stack_3->SetBinError(18,0.839066);
   VH_tagFirst_Aplanarity_stack_3->SetBinError(19,0.5261507);
   VH_tagFirst_Aplanarity_stack_3->SetBinError(20,0.2172462);
   VH_tagFirst_Aplanarity_stack_3->SetBinError(21,0.5041351);
   VH_tagFirst_Aplanarity_stack_3->SetBinError(22,0.08122825);
   VH_tagFirst_Aplanarity_stack_3->SetEntries(5777025);

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
   VH_tagFirst_Aplanarity_stack_4->SetBinContent(1,22581.78);
   VH_tagFirst_Aplanarity_stack_4->SetBinContent(2,2480.776);
   VH_tagFirst_Aplanarity_stack_4->SetBinContent(3,617.1001);
   VH_tagFirst_Aplanarity_stack_4->SetBinContent(4,200.1835);
   VH_tagFirst_Aplanarity_stack_4->SetBinContent(5,100.3509);
   VH_tagFirst_Aplanarity_stack_4->SetBinContent(6,47.15032);
   VH_tagFirst_Aplanarity_stack_4->SetBinContent(7,33.06038);
   VH_tagFirst_Aplanarity_stack_4->SetBinContent(8,14.77201);
   VH_tagFirst_Aplanarity_stack_4->SetBinContent(9,11.35475);
   VH_tagFirst_Aplanarity_stack_4->SetBinContent(10,7.305357);
   VH_tagFirst_Aplanarity_stack_4->SetBinContent(11,3.364927);
   VH_tagFirst_Aplanarity_stack_4->SetBinContent(12,3.04298);
   VH_tagFirst_Aplanarity_stack_4->SetBinContent(13,0.6769692);
   VH_tagFirst_Aplanarity_stack_4->SetBinContent(14,0.8366591);
   VH_tagFirst_Aplanarity_stack_4->SetBinContent(15,0.72135);
   VH_tagFirst_Aplanarity_stack_4->SetBinContent(16,0.1080063);
   VH_tagFirst_Aplanarity_stack_4->SetBinContent(17,0.02188203);
   VH_tagFirst_Aplanarity_stack_4->SetBinContent(18,1.53054);
   VH_tagFirst_Aplanarity_stack_4->SetBinContent(19,0.1371683);
   VH_tagFirst_Aplanarity_stack_4->SetBinError(1,144.443);
   VH_tagFirst_Aplanarity_stack_4->SetBinError(2,52.2501);
   VH_tagFirst_Aplanarity_stack_4->SetBinError(3,22.42682);
   VH_tagFirst_Aplanarity_stack_4->SetBinError(4,11.35992);
   VH_tagFirst_Aplanarity_stack_4->SetBinError(5,7.803266);
   VH_tagFirst_Aplanarity_stack_4->SetBinError(6,5.588961);
   VH_tagFirst_Aplanarity_stack_4->SetBinError(7,13.6093);
   VH_tagFirst_Aplanarity_stack_4->SetBinError(8,2.555796);
   VH_tagFirst_Aplanarity_stack_4->SetBinError(9,2.388025);
   VH_tagFirst_Aplanarity_stack_4->SetBinError(10,4.089413);
   VH_tagFirst_Aplanarity_stack_4->SetBinError(11,1.245105);
   VH_tagFirst_Aplanarity_stack_4->SetBinError(12,1.528701);
   VH_tagFirst_Aplanarity_stack_4->SetBinError(13,0.3484162);
   VH_tagFirst_Aplanarity_stack_4->SetBinError(14,0.4796178);
   VH_tagFirst_Aplanarity_stack_4->SetBinError(15,0.4355374);
   VH_tagFirst_Aplanarity_stack_4->SetBinError(16,0.1080063);
   VH_tagFirst_Aplanarity_stack_4->SetBinError(17,0.02188203);
   VH_tagFirst_Aplanarity_stack_4->SetBinError(18,1.374591);
   VH_tagFirst_Aplanarity_stack_4->SetBinError(19,0.1371683);
   VH_tagFirst_Aplanarity_stack_4->SetEntries(92535);

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
   VH_tagFirst_Aplanarity_stack_5->SetBinContent(1,11841.84);
   VH_tagFirst_Aplanarity_stack_5->SetBinContent(2,1259.027);
   VH_tagFirst_Aplanarity_stack_5->SetBinContent(3,366.2541);
   VH_tagFirst_Aplanarity_stack_5->SetBinContent(4,127.071);
   VH_tagFirst_Aplanarity_stack_5->SetBinContent(5,54.27584);
   VH_tagFirst_Aplanarity_stack_5->SetBinContent(6,42.04435);
   VH_tagFirst_Aplanarity_stack_5->SetBinContent(7,14.68529);
   VH_tagFirst_Aplanarity_stack_5->SetBinContent(8,17.63118);
   VH_tagFirst_Aplanarity_stack_5->SetBinContent(9,2.905407);
   VH_tagFirst_Aplanarity_stack_5->SetBinContent(10,1.440201);
   VH_tagFirst_Aplanarity_stack_5->SetBinContent(11,0.6277787);
   VH_tagFirst_Aplanarity_stack_5->SetBinContent(12,2.510478);
   VH_tagFirst_Aplanarity_stack_5->SetBinContent(14,0.1532648);
   VH_tagFirst_Aplanarity_stack_5->SetBinContent(16,0.4111188);
   VH_tagFirst_Aplanarity_stack_5->SetBinContent(17,0.1470552);
   VH_tagFirst_Aplanarity_stack_5->SetBinContent(18,2.31318);
   VH_tagFirst_Aplanarity_stack_5->SetBinError(1,201.15);
   VH_tagFirst_Aplanarity_stack_5->SetBinError(2,64.21812);
   VH_tagFirst_Aplanarity_stack_5->SetBinError(3,36.5715);
   VH_tagFirst_Aplanarity_stack_5->SetBinError(4,24.42473);
   VH_tagFirst_Aplanarity_stack_5->SetBinError(5,12.93582);
   VH_tagFirst_Aplanarity_stack_5->SetBinError(6,14.9377);
   VH_tagFirst_Aplanarity_stack_5->SetBinError(7,3.991156);
   VH_tagFirst_Aplanarity_stack_5->SetBinError(8,7.281279);
   VH_tagFirst_Aplanarity_stack_5->SetBinError(9,1.478657);
   VH_tagFirst_Aplanarity_stack_5->SetBinError(10,0.4750183);
   VH_tagFirst_Aplanarity_stack_5->SetBinError(11,0.3764289);
   VH_tagFirst_Aplanarity_stack_5->SetBinError(12,1.778214);
   VH_tagFirst_Aplanarity_stack_5->SetBinError(14,0.1296677);
   VH_tagFirst_Aplanarity_stack_5->SetBinError(16,0.4111188);
   VH_tagFirst_Aplanarity_stack_5->SetBinError(17,0.1470552);
   VH_tagFirst_Aplanarity_stack_5->SetBinError(18,2.31318);
   VH_tagFirst_Aplanarity_stack_5->SetEntries(40747);

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
   VH_tagFirst_Aplanarity_stack_6->SetBinContent(1,95.86573);
   VH_tagFirst_Aplanarity_stack_6->SetBinContent(2,9.504744);
   VH_tagFirst_Aplanarity_stack_6->SetBinContent(3,2.691043);
   VH_tagFirst_Aplanarity_stack_6->SetBinContent(5,2.805743);
   VH_tagFirst_Aplanarity_stack_6->SetBinContent(7,0.5362758);
   VH_tagFirst_Aplanarity_stack_6->SetBinError(1,9.471995);
   VH_tagFirst_Aplanarity_stack_6->SetBinError(2,2.629766);
   VH_tagFirst_Aplanarity_stack_6->SetBinError(3,1.65815);
   VH_tagFirst_Aplanarity_stack_6->SetBinError(5,2.072426);
   VH_tagFirst_Aplanarity_stack_6->SetBinError(7,0.5362758);
   VH_tagFirst_Aplanarity_stack_6->SetEntries(150);

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
   VH_tagFirst_Aplanarity_stack_7->SetBinContent(1,276.6528);
   VH_tagFirst_Aplanarity_stack_7->SetBinContent(2,31.67723);
   VH_tagFirst_Aplanarity_stack_7->SetBinContent(3,6.564308);
   VH_tagFirst_Aplanarity_stack_7->SetBinContent(4,8.929379);
   VH_tagFirst_Aplanarity_stack_7->SetBinError(1,14.83145);
   VH_tagFirst_Aplanarity_stack_7->SetBinError(2,6.120792);
   VH_tagFirst_Aplanarity_stack_7->SetBinError(3,2.175934);
   VH_tagFirst_Aplanarity_stack_7->SetBinError(4,3.618223);
   VH_tagFirst_Aplanarity_stack_7->SetEntries(523);

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
   VH_tagFirst_Aplanarity_stack_8->SetBinContent(1,214.4979);
   VH_tagFirst_Aplanarity_stack_8->SetBinContent(2,18.33098);
   VH_tagFirst_Aplanarity_stack_8->SetBinContent(3,3.288103);
   VH_tagFirst_Aplanarity_stack_8->SetBinContent(4,0.2948286);
   VH_tagFirst_Aplanarity_stack_8->SetBinContent(6,1.062598);
   VH_tagFirst_Aplanarity_stack_8->SetBinError(1,10.96193);
   VH_tagFirst_Aplanarity_stack_8->SetBinError(2,3.072006);
   VH_tagFirst_Aplanarity_stack_8->SetBinError(3,1.228205);
   VH_tagFirst_Aplanarity_stack_8->SetBinError(4,0.2948286);
   VH_tagFirst_Aplanarity_stack_8->SetBinError(6,1.062598);
   VH_tagFirst_Aplanarity_stack_8->SetEntries(548);

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
   VH_tagFirst_Aplanarity_stack_9->SetBinContent(1,117.6905);
   VH_tagFirst_Aplanarity_stack_9->SetBinContent(2,10.93948);
   VH_tagFirst_Aplanarity_stack_9->SetBinContent(3,2.670029);
   VH_tagFirst_Aplanarity_stack_9->SetBinContent(4,0.8246791);
   VH_tagFirst_Aplanarity_stack_9->SetBinContent(5,0.4848686);
   VH_tagFirst_Aplanarity_stack_9->SetBinContent(6,0.1711124);
   VH_tagFirst_Aplanarity_stack_9->SetBinContent(7,0.09018531);
   VH_tagFirst_Aplanarity_stack_9->SetBinContent(8,0.09600628);
   VH_tagFirst_Aplanarity_stack_9->SetBinContent(9,0.01053287);
   VH_tagFirst_Aplanarity_stack_9->SetBinContent(10,0.03251534);
   VH_tagFirst_Aplanarity_stack_9->SetBinContent(11,0.05044659);
   VH_tagFirst_Aplanarity_stack_9->SetBinContent(14,0.006263798);
   VH_tagFirst_Aplanarity_stack_9->SetBinContent(15,0.003036819);
   VH_tagFirst_Aplanarity_stack_9->SetBinContent(16,0.005447691);
   VH_tagFirst_Aplanarity_stack_9->SetBinContent(18,0.002177154);
   VH_tagFirst_Aplanarity_stack_9->SetBinError(1,0.8729421);
   VH_tagFirst_Aplanarity_stack_9->SetBinError(2,0.2406511);
   VH_tagFirst_Aplanarity_stack_9->SetBinError(3,0.1216526);
   VH_tagFirst_Aplanarity_stack_9->SetBinError(4,0.06501252);
   VH_tagFirst_Aplanarity_stack_9->SetBinError(5,0.09198146);
   VH_tagFirst_Aplanarity_stack_9->SetBinError(6,0.02974242);
   VH_tagFirst_Aplanarity_stack_9->SetBinError(7,0.018962);
   VH_tagFirst_Aplanarity_stack_9->SetBinError(8,0.02623272);
   VH_tagFirst_Aplanarity_stack_9->SetBinError(9,0.00532305);
   VH_tagFirst_Aplanarity_stack_9->SetBinError(10,0.01099035);
   VH_tagFirst_Aplanarity_stack_9->SetBinError(11,0.01906172);
   VH_tagFirst_Aplanarity_stack_9->SetBinError(14,0.004525388);
   VH_tagFirst_Aplanarity_stack_9->SetBinError(15,0.003036819);
   VH_tagFirst_Aplanarity_stack_9->SetBinError(16,0.003854332);
   VH_tagFirst_Aplanarity_stack_9->SetBinError(18,0.002177154);
   VH_tagFirst_Aplanarity_stack_9->SetEntries(36422);

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
   VH_tagFirst_Aplanarity_stack_10->SetBinContent(1,61.59389);
   VH_tagFirst_Aplanarity_stack_10->SetBinContent(2,6.912779);
   VH_tagFirst_Aplanarity_stack_10->SetBinContent(3,1.665544);
   VH_tagFirst_Aplanarity_stack_10->SetBinContent(4,0.5795734);
   VH_tagFirst_Aplanarity_stack_10->SetBinContent(5,0.2718289);
   VH_tagFirst_Aplanarity_stack_10->SetBinContent(6,0.1079656);
   VH_tagFirst_Aplanarity_stack_10->SetBinContent(7,0.08152649);
   VH_tagFirst_Aplanarity_stack_10->SetBinContent(8,0.03944821);
   VH_tagFirst_Aplanarity_stack_10->SetBinContent(9,0.02220726);
   VH_tagFirst_Aplanarity_stack_10->SetBinContent(10,0.01437415);
   VH_tagFirst_Aplanarity_stack_10->SetBinContent(11,0.009177734);
   VH_tagFirst_Aplanarity_stack_10->SetBinContent(12,0.004993941);
   VH_tagFirst_Aplanarity_stack_10->SetBinContent(13,0.003889538);
   VH_tagFirst_Aplanarity_stack_10->SetBinContent(14,0.003159253);
   VH_tagFirst_Aplanarity_stack_10->SetBinContent(16,0.0009346947);
   VH_tagFirst_Aplanarity_stack_10->SetBinContent(17,0.000639571);
   VH_tagFirst_Aplanarity_stack_10->SetBinContent(19,0.001493128);
   VH_tagFirst_Aplanarity_stack_10->SetBinContent(21,0.0006796078);
   VH_tagFirst_Aplanarity_stack_10->SetBinError(1,0.1979331);
   VH_tagFirst_Aplanarity_stack_10->SetBinError(2,0.06540794);
   VH_tagFirst_Aplanarity_stack_10->SetBinError(3,0.03217526);
   VH_tagFirst_Aplanarity_stack_10->SetBinError(4,0.01929163);
   VH_tagFirst_Aplanarity_stack_10->SetBinError(5,0.01331939);
   VH_tagFirst_Aplanarity_stack_10->SetBinError(6,0.008230237);
   VH_tagFirst_Aplanarity_stack_10->SetBinError(7,0.007264289);
   VH_tagFirst_Aplanarity_stack_10->SetBinError(8,0.005022959);
   VH_tagFirst_Aplanarity_stack_10->SetBinError(9,0.003751264);
   VH_tagFirst_Aplanarity_stack_10->SetBinError(10,0.002904469);
   VH_tagFirst_Aplanarity_stack_10->SetBinError(11,0.002686736);
   VH_tagFirst_Aplanarity_stack_10->SetBinError(12,0.001754489);
   VH_tagFirst_Aplanarity_stack_10->SetBinError(13,0.001603699);
   VH_tagFirst_Aplanarity_stack_10->SetBinError(14,0.001420306);
   VH_tagFirst_Aplanarity_stack_10->SetBinError(16,0.000679574);
   VH_tagFirst_Aplanarity_stack_10->SetBinError(17,0.000639571);
   VH_tagFirst_Aplanarity_stack_10->SetBinError(19,0.00106154);
   VH_tagFirst_Aplanarity_stack_10->SetBinError(21,0.0006796078);
   VH_tagFirst_Aplanarity_stack_10->SetEntries(118380);

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
   VH_tagFirst_Aplanarity_stack_11->SetBinContent(1,2.540921);
   VH_tagFirst_Aplanarity_stack_11->SetBinContent(2,0.196944);
   VH_tagFirst_Aplanarity_stack_11->SetBinContent(3,0.05599686);
   VH_tagFirst_Aplanarity_stack_11->SetBinContent(4,0.00789285);
   VH_tagFirst_Aplanarity_stack_11->SetBinContent(5,0.004784755);
   VH_tagFirst_Aplanarity_stack_11->SetBinContent(6,0.001750385);
   VH_tagFirst_Aplanarity_stack_11->SetBinContent(7,0.006058982);
   VH_tagFirst_Aplanarity_stack_11->SetBinContent(8,0.005370295);
   VH_tagFirst_Aplanarity_stack_11->SetBinError(1,0.1011269);
   VH_tagFirst_Aplanarity_stack_11->SetBinError(2,0.02523643);
   VH_tagFirst_Aplanarity_stack_11->SetBinError(3,0.016435);
   VH_tagFirst_Aplanarity_stack_11->SetBinError(4,0.005584141);
   VH_tagFirst_Aplanarity_stack_11->SetBinError(5,0.003386026);
   VH_tagFirst_Aplanarity_stack_11->SetBinError(6,0.001750385);
   VH_tagFirst_Aplanarity_stack_11->SetBinError(7,0.004310176);
   VH_tagFirst_Aplanarity_stack_11->SetBinError(8,0.005370295);
   VH_tagFirst_Aplanarity_stack_11->SetEntries(939);

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
   VH_tagFirst_Aplanarity_stack_12->SetBinContent(1,1.289126);
   VH_tagFirst_Aplanarity_stack_12->SetBinContent(2,0.1353805);
   VH_tagFirst_Aplanarity_stack_12->SetBinContent(3,0.03454886);
   VH_tagFirst_Aplanarity_stack_12->SetBinContent(4,0.008597072);
   VH_tagFirst_Aplanarity_stack_12->SetBinContent(5,0.002700478);
   VH_tagFirst_Aplanarity_stack_12->SetBinContent(6,0.001024649);
   VH_tagFirst_Aplanarity_stack_12->SetBinContent(8,0.002246996);
   VH_tagFirst_Aplanarity_stack_12->SetBinContent(9,0.0006995791);
   VH_tagFirst_Aplanarity_stack_12->SetBinContent(10,0.0008107704);
   VH_tagFirst_Aplanarity_stack_12->SetBinContent(12,0.0007021084);
   VH_tagFirst_Aplanarity_stack_12->SetBinContent(14,0.0008758926);
   VH_tagFirst_Aplanarity_stack_12->SetBinError(1,0.02601592);
   VH_tagFirst_Aplanarity_stack_12->SetBinError(2,0.008293695);
   VH_tagFirst_Aplanarity_stack_12->SetBinError(3,0.00434067);
   VH_tagFirst_Aplanarity_stack_12->SetBinError(4,0.001919495);
   VH_tagFirst_Aplanarity_stack_12->SetBinError(5,0.001041273);
   VH_tagFirst_Aplanarity_stack_12->SetBinError(6,0.0007256441);
   VH_tagFirst_Aplanarity_stack_12->SetBinError(8,0.0009402317);
   VH_tagFirst_Aplanarity_stack_12->SetBinError(9,0.0004953022);
   VH_tagFirst_Aplanarity_stack_12->SetBinError(10,0.0008107704);
   VH_tagFirst_Aplanarity_stack_12->SetBinError(12,0.0004964887);
   VH_tagFirst_Aplanarity_stack_12->SetBinError(14,0.0006544837);
   VH_tagFirst_Aplanarity_stack_12->SetEntries(3484);

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
   
   TH1D *VH_tagFirst_Aplanarity__95 = new TH1D("VH_tagFirst_Aplanarity__95","",50,0,1);
   VH_tagFirst_Aplanarity__95->SetBinContent(0,1);
   VH_tagFirst_Aplanarity__95->SetBinContent(1,2526057);
   VH_tagFirst_Aplanarity__95->SetBinContent(2,330580);
   VH_tagFirst_Aplanarity__95->SetBinContent(3,85998);
   VH_tagFirst_Aplanarity__95->SetBinContent(4,29078);
   VH_tagFirst_Aplanarity__95->SetBinContent(5,12122);
   VH_tagFirst_Aplanarity__95->SetBinContent(6,5945);
   VH_tagFirst_Aplanarity__95->SetBinContent(7,3144);
   VH_tagFirst_Aplanarity__95->SetBinContent(8,1846);
   VH_tagFirst_Aplanarity__95->SetBinContent(9,1074);
   VH_tagFirst_Aplanarity__95->SetBinContent(10,719);
   VH_tagFirst_Aplanarity__95->SetBinContent(11,430);
   VH_tagFirst_Aplanarity__95->SetBinContent(12,292);
   VH_tagFirst_Aplanarity__95->SetBinContent(13,205);
   VH_tagFirst_Aplanarity__95->SetBinContent(14,84);
   VH_tagFirst_Aplanarity__95->SetBinContent(15,68);
   VH_tagFirst_Aplanarity__95->SetBinContent(16,46);
   VH_tagFirst_Aplanarity__95->SetBinContent(17,33);
   VH_tagFirst_Aplanarity__95->SetBinContent(18,12);
   VH_tagFirst_Aplanarity__95->SetBinContent(19,12);
   VH_tagFirst_Aplanarity__95->SetBinContent(20,1);
   VH_tagFirst_Aplanarity__95->SetBinContent(21,1);
   VH_tagFirst_Aplanarity__95->SetEntries(2997797);

   ci = TColor::GetColor("#000099");
   VH_tagFirst_Aplanarity__95->SetLineColor(ci);
   VH_tagFirst_Aplanarity__95->SetLineWidth(2);
   VH_tagFirst_Aplanarity__95->SetMarkerStyle(20);
   VH_tagFirst_Aplanarity__95->SetMarkerSize(1.2);
   VH_tagFirst_Aplanarity__95->GetXaxis()->SetRange(1,100);
   VH_tagFirst_Aplanarity__95->GetXaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity__95->GetXaxis()->SetTitleOffset(1);
   VH_tagFirst_Aplanarity__95->GetXaxis()->SetTitleFont(42);
   VH_tagFirst_Aplanarity__95->GetYaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity__95->GetYaxis()->SetTitleFont(42);
   VH_tagFirst_Aplanarity__95->GetZaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity__95->GetZaxis()->SetTitleOffset(1);
   VH_tagFirst_Aplanarity__95->GetZaxis()->SetTitleFont(42);
   VH_tagFirst_Aplanarity__95->Draw("same E");
   
   Double_t Graph_from_VH_tagFirst_Aplanarity_fx1095[50] = { 0.01, 0.03, 0.05, 0.07, 0.09, 0.11, 0.13, 0.15, 0.17, 0.19, 0.21, 0.23, 0.25, 0.27, 0.29, 0.31, 0.33,
   0.35, 0.37, 0.39, 0.41, 0.43, 0.45, 0.47, 0.49, 0.51, 0.53, 0.55, 0.57, 0.59, 0.61, 0.63, 0.65,
   0.67, 0.69, 0.71, 0.73, 0.75, 0.77, 0.79, 0.81, 0.83, 0.85, 0.87, 0.89, 0.91, 0.93, 0.95, 0.97,
   0.99 };
   Double_t Graph_from_VH_tagFirst_Aplanarity_fy1095[50] = { 2910003, 377011.6, 86463.81, 30799.87, 10896.9, 6423.818, 2292.749, 7631.373, 944.5558, 700.4788, 253.0507, 202.7842, 1131.788, 108.3158, 20.56145, 21.49475, 72.28487,
   8.092253, 29.12368, 0.4592605, 0.915466, 0.08122825, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0 };
   Double_t Graph_from_VH_tagFirst_Aplanarity_fex1095[50] = { 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01 };
   Double_t Graph_from_VH_tagFirst_Aplanarity_fey1095[50] = { 46842.5, 14566.18, 5762.199, 3200.975, 984.7643, 1191.193, 257.1696, 4793.657, 166.7477, 176.6305, 55.08941, 44.29195, 925.5195, 40.7115, 1.980796, 9.202659, 62.08679,
   2.820066, 26.79324, 0.2172462, 0.5041356, 0.08122825, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0 };
   TGraphErrors *gre = new TGraphErrors(50,Graph_from_VH_tagFirst_Aplanarity_fx1095,Graph_from_VH_tagFirst_Aplanarity_fy1095,Graph_from_VH_tagFirst_Aplanarity_fex1095,Graph_from_VH_tagFirst_Aplanarity_fey1095);
   gre->SetName("Graph_from_VH_tagFirst_Aplanarity");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VH_tagFirst_Aplanarity1095 = new TH1F("Graph_Graph_from_VH_tagFirst_Aplanarity1095","",100,0,1.1);
   Graph_Graph_from_VH_tagFirst_Aplanarity1095->SetMinimum(0);
   Graph_Graph_from_VH_tagFirst_Aplanarity1095->SetMaximum(3252530);
   Graph_Graph_from_VH_tagFirst_Aplanarity1095->SetDirectory(nullptr);
   Graph_Graph_from_VH_tagFirst_Aplanarity1095->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VH_tagFirst_Aplanarity1095->SetLineColor(ci);
   Graph_Graph_from_VH_tagFirst_Aplanarity1095->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VH_tagFirst_Aplanarity1095->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_from_VH_tagFirst_Aplanarity1095->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VH_tagFirst_Aplanarity1095->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VH_tagFirst_Aplanarity1095->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VH_tagFirst_Aplanarity1095->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VH_tagFirst_Aplanarity1095->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_from_VH_tagFirst_Aplanarity1095->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VH_tagFirst_Aplanarity1095);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VH_tagFirst_Aplanarity","Data (JetHT, 2018)","p");
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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetLineWidth(2);
   tex->Draw();
   topPad->Modified();
   Aplanarity_tagFirst_18->cd();
  
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
   
   TH1D *data_mc_ratio__96 = new TH1D("data_mc_ratio__96","",50,0,1);
   data_mc_ratio__96->SetBinContent(1,0.86806);
   data_mc_ratio__96->SetBinContent(2,0.8768431);
   data_mc_ratio__96->SetBinContent(3,0.9946127);
   data_mc_ratio__96->SetBinContent(4,0.9440948);
   data_mc_ratio__96->SetBinContent(5,1.112427);
   data_mc_ratio__96->SetBinContent(6,0.925462);
   data_mc_ratio__96->SetBinContent(7,1.371279);
   data_mc_ratio__96->SetBinContent(8,0.2418962);
   data_mc_ratio__96->SetBinContent(9,1.137042);
   data_mc_ratio__96->SetBinContent(10,1.026441);
   data_mc_ratio__96->SetBinContent(11,1.699264);
   data_mc_ratio__96->SetBinContent(12,1.439954);
   data_mc_ratio__96->SetBinContent(13,0.1811293);
   data_mc_ratio__96->SetBinContent(14,0.7755099);
   data_mc_ratio__96->SetBinContent(15,3.307161);
   data_mc_ratio__96->SetBinContent(16,2.140057);
   data_mc_ratio__96->SetBinContent(17,0.4565271);
   data_mc_ratio__96->SetBinContent(18,1.4829);
   data_mc_ratio__96->SetBinContent(19,0.4120358);
   data_mc_ratio__96->SetBinContent(20,2.177413);
   data_mc_ratio__96->SetBinContent(21,1.09234);
   data_mc_ratio__96->SetBinError(1,0.0005461704);
   data_mc_ratio__96->SetBinError(2,0.001525048);
   data_mc_ratio__96->SetBinError(3,0.003391641);
   data_mc_ratio__96->SetBinError(4,0.005536475);
   data_mc_ratio__96->SetBinError(5,0.01010379);
   data_mc_ratio__96->SetBinError(6,0.0120028);
   data_mc_ratio__96->SetBinError(7,0.02445596);
   data_mc_ratio__96->SetBinError(8,0.005630062);
   data_mc_ratio__96->SetBinError(9,0.03469561);
   data_mc_ratio__96->SetBinError(10,0.03827978);
   data_mc_ratio__96->SetBinError(11,0.08194578);
   data_mc_ratio__96->SetBinError(12,0.08426694);
   data_mc_ratio__96->SetBinError(13,0.01265062);
   data_mc_ratio__96->SetBinError(14,0.08461507);
   data_mc_ratio__96->SetBinError(15,0.4010521);
   data_mc_ratio__96->SetBinError(16,0.3155343);
   data_mc_ratio__96->SetBinError(17,0.07947116);
   data_mc_ratio__96->SetBinError(18,0.4280763);
   data_mc_ratio__96->SetBinError(19,0.1189445);
   data_mc_ratio__96->SetBinError(20,2.177413);
   data_mc_ratio__96->SetBinError(21,1.09234);
   data_mc_ratio__96->SetMinimum(0.4);
   data_mc_ratio__96->SetMaximum(1.6);
   data_mc_ratio__96->SetEntries(61.41928);
   data_mc_ratio__96->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__96->SetLineColor(ci);
   data_mc_ratio__96->SetLineWidth(2);
   data_mc_ratio__96->SetMarkerStyle(20);
   data_mc_ratio__96->SetMarkerSize(1.2);
   data_mc_ratio__96->GetXaxis()->SetTitle("Aplanarity");
   data_mc_ratio__96->GetXaxis()->SetRange(1,50);
   data_mc_ratio__96->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__96->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__96->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__96->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__96->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__96->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__96->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__96->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__96->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__96->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__96->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__96->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__96->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__96->GetZaxis()->SetTitleOffset(1);
   data_mc_ratio__96->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__96->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1096[50] = { 0.01, 0.03, 0.05, 0.07, 0.09, 0.11, 0.13, 0.15, 0.17, 0.19, 0.21, 0.23, 0.25, 0.27, 0.29, 0.31, 0.33,
   0.35, 0.37, 0.39, 0.41, 0.43, 0.45, 0.47, 0.49, 0.51, 0.53, 0.55, 0.57, 0.59, 0.61, 0.63, 0.65,
   0.67, 0.69, 0.71, 0.73, 0.75, 0.77, 0.79, 0.81, 0.83, 0.85, 0.87, 0.89, 0.91, 0.93, 0.95, 0.97,
   0.99 };
   Double_t Graph_from_mc_statistical_error_fy1096[50] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1 };
   Double_t Graph_from_mc_statistical_error_fex1096[50] = { 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01 };
   Double_t Graph_from_mc_statistical_error_fey1096[50] = { 0.01609707, 0.0386359, 0.0666429, 0.1039282, 0.09037109, 0.1854338, 0.1121664, 0.6281513, 0.1765356, 0.2521568, 0.217701, 0.2184191, 0.8177499, 0.3758592, 0.09633547, 0.4281352, 0.8589182,
   0.3484895, 0.9199813, 0.4730349, 0.5506874, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0 };
   gre = new TGraphErrors(50,Graph_from_mc_statistical_error_fx1096,Graph_from_mc_statistical_error_fy1096,Graph_from_mc_statistical_error_fex1096,Graph_from_mc_statistical_error_fey1096);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1096 = new TH1F("Graph_Graph_from_mc_statistical_error1096","",100,0,1.1);
   Graph_Graph_from_mc_statistical_error1096->SetMinimum(0);
   Graph_Graph_from_mc_statistical_error1096->SetMaximum(2.2);
   Graph_Graph_from_mc_statistical_error1096->SetDirectory(nullptr);
   Graph_Graph_from_mc_statistical_error1096->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1096->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1096->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1096->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_from_mc_statistical_error1096->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1096->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1096->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1096->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1096->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_from_mc_statistical_error1096->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1096);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,1,1);
   line->Draw();
   bottomPad->Modified();
   Aplanarity_tagFirst_18->cd();
   Aplanarity_tagFirst_18->Modified();
   Aplanarity_tagFirst_18->cd();
   Aplanarity_tagFirst_18->SetSelected(Aplanarity_tagFirst_18);
}
