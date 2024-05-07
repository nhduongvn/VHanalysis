#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Aplanarity_tagFirst_16()
{
//=========Macro generated from canvas: Aplanarity_tagFirst_16/Aplanarity_tagFirst_16
//=========  (Wed Apr 24 14:26:52 2024) by ROOT version 6.28/10
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
   topPad->Range(-0.1532254,-6222.346,1.052419,6216133);
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
   st->SetMaximum(5593898);
   
   TH1F *st_stack_46 = new TH1F("st_stack_46","",50,0,1);
   st_stack_46->SetMinimum(0.01);
   st_stack_46->SetMaximum(5593898);
   st_stack_46->SetDirectory(nullptr);
   st_stack_46->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_46->SetLineColor(ci);
   st_stack_46->SetLineWidth(0);
   st_stack_46->GetXaxis()->SetRange(1,50);
   st_stack_46->GetXaxis()->SetLabelFont(42);
   st_stack_46->GetXaxis()->SetTitleOffset(1);
   st_stack_46->GetXaxis()->SetTitleFont(42);
   st_stack_46->GetYaxis()->SetTitle("Events/0.02");
   st_stack_46->GetYaxis()->SetLabelFont(42);
   st_stack_46->GetYaxis()->SetLabelSize(0.05);
   st_stack_46->GetYaxis()->SetTitleSize(0.057);
   st_stack_46->GetYaxis()->SetTitleOffset(1.2);
   st_stack_46->GetYaxis()->SetTitleFont(42);
   st_stack_46->GetZaxis()->SetLabelFont(42);
   st_stack_46->GetZaxis()->SetTitleOffset(1);
   st_stack_46->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_46);
   
   
   TH1D *VH_tagFirst_Aplanarity_stack_1 = new TH1D("VH_tagFirst_Aplanarity_stack_1","",50,0,1);
   VH_tagFirst_Aplanarity_stack_1->SetBinContent(1,1880021);
   VH_tagFirst_Aplanarity_stack_1->SetBinContent(2,272711.7);
   VH_tagFirst_Aplanarity_stack_1->SetBinContent(3,69656.04);
   VH_tagFirst_Aplanarity_stack_1->SetBinContent(4,22455.86);
   VH_tagFirst_Aplanarity_stack_1->SetBinContent(5,6540.84);
   VH_tagFirst_Aplanarity_stack_1->SetBinContent(6,3560.805);
   VH_tagFirst_Aplanarity_stack_1->SetBinContent(7,2039.901);
   VH_tagFirst_Aplanarity_stack_1->SetBinContent(8,646.6869);
   VH_tagFirst_Aplanarity_stack_1->SetBinContent(9,951.3665);
   VH_tagFirst_Aplanarity_stack_1->SetBinContent(10,129.0387);
   VH_tagFirst_Aplanarity_stack_1->SetBinContent(11,162.7915);
   VH_tagFirst_Aplanarity_stack_1->SetBinContent(12,339.3896);
   VH_tagFirst_Aplanarity_stack_1->SetBinContent(13,111.4329);
   VH_tagFirst_Aplanarity_stack_1->SetBinContent(14,18.50079);
   VH_tagFirst_Aplanarity_stack_1->SetBinContent(15,37.15999);
   VH_tagFirst_Aplanarity_stack_1->SetBinContent(16,0.4282265);
   VH_tagFirst_Aplanarity_stack_1->SetBinContent(17,12.01046);
   VH_tagFirst_Aplanarity_stack_1->SetBinError(1,28628.99);
   VH_tagFirst_Aplanarity_stack_1->SetBinError(2,17800.54);
   VH_tagFirst_Aplanarity_stack_1->SetBinError(3,4175.945);
   VH_tagFirst_Aplanarity_stack_1->SetBinError(4,2191.282);
   VH_tagFirst_Aplanarity_stack_1->SetBinError(5,862.3647);
   VH_tagFirst_Aplanarity_stack_1->SetBinError(6,661.6565);
   VH_tagFirst_Aplanarity_stack_1->SetBinError(7,461.7459);
   VH_tagFirst_Aplanarity_stack_1->SetBinError(8,93.72049);
   VH_tagFirst_Aplanarity_stack_1->SetBinError(9,343.6906);
   VH_tagFirst_Aplanarity_stack_1->SetBinError(10,38.75719);
   VH_tagFirst_Aplanarity_stack_1->SetBinError(11,43.62102);
   VH_tagFirst_Aplanarity_stack_1->SetBinError(12,219.375);
   VH_tagFirst_Aplanarity_stack_1->SetBinError(13,37.90333);
   VH_tagFirst_Aplanarity_stack_1->SetBinError(14,11.44162);
   VH_tagFirst_Aplanarity_stack_1->SetBinError(15,17.65325);
   VH_tagFirst_Aplanarity_stack_1->SetBinError(16,0.4282265);
   VH_tagFirst_Aplanarity_stack_1->SetBinError(17,8.2926);
   VH_tagFirst_Aplanarity_stack_1->SetEntries(189666);

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
   VH_tagFirst_Aplanarity_stack_2->SetBinContent(1,20657.84);
   VH_tagFirst_Aplanarity_stack_2->SetBinContent(2,2976.326);
   VH_tagFirst_Aplanarity_stack_2->SetBinContent(3,768.7715);
   VH_tagFirst_Aplanarity_stack_2->SetBinContent(4,260.0868);
   VH_tagFirst_Aplanarity_stack_2->SetBinContent(5,98.00491);
   VH_tagFirst_Aplanarity_stack_2->SetBinContent(6,50.28443);
   VH_tagFirst_Aplanarity_stack_2->SetBinContent(7,28.34981);
   VH_tagFirst_Aplanarity_stack_2->SetBinContent(8,14.08348);
   VH_tagFirst_Aplanarity_stack_2->SetBinContent(9,10.28573);
   VH_tagFirst_Aplanarity_stack_2->SetBinContent(10,7.324847);
   VH_tagFirst_Aplanarity_stack_2->SetBinContent(11,3.931854);
   VH_tagFirst_Aplanarity_stack_2->SetBinContent(12,1.543826);
   VH_tagFirst_Aplanarity_stack_2->SetBinContent(13,1.912939);
   VH_tagFirst_Aplanarity_stack_2->SetBinContent(14,0.9938571);
   VH_tagFirst_Aplanarity_stack_2->SetBinContent(15,0.9389297);
   VH_tagFirst_Aplanarity_stack_2->SetBinContent(16,0.3742319);
   VH_tagFirst_Aplanarity_stack_2->SetBinContent(17,0.1128299);
   VH_tagFirst_Aplanarity_stack_2->SetBinContent(18,0.4991102);
   VH_tagFirst_Aplanarity_stack_2->SetBinContent(19,0.06937962);
   VH_tagFirst_Aplanarity_stack_2->SetBinContent(20,0.3762877);
   VH_tagFirst_Aplanarity_stack_2->SetBinError(1,53.35411);
   VH_tagFirst_Aplanarity_stack_2->SetBinError(2,19.98393);
   VH_tagFirst_Aplanarity_stack_2->SetBinError(3,10.26862);
   VH_tagFirst_Aplanarity_stack_2->SetBinError(4,6.000019);
   VH_tagFirst_Aplanarity_stack_2->SetBinError(5,3.626391);
   VH_tagFirst_Aplanarity_stack_2->SetBinError(6,2.793246);
   VH_tagFirst_Aplanarity_stack_2->SetBinError(7,2.097719);
   VH_tagFirst_Aplanarity_stack_2->SetBinError(8,1.402208);
   VH_tagFirst_Aplanarity_stack_2->SetBinError(9,1.252976);
   VH_tagFirst_Aplanarity_stack_2->SetBinError(10,1.122262);
   VH_tagFirst_Aplanarity_stack_2->SetBinError(11,0.7379691);
   VH_tagFirst_Aplanarity_stack_2->SetBinError(12,0.3970254);
   VH_tagFirst_Aplanarity_stack_2->SetBinError(13,0.4924564);
   VH_tagFirst_Aplanarity_stack_2->SetBinError(14,0.39699);
   VH_tagFirst_Aplanarity_stack_2->SetBinError(15,0.4454957);
   VH_tagFirst_Aplanarity_stack_2->SetBinError(16,0.2201845);
   VH_tagFirst_Aplanarity_stack_2->SetBinError(17,0.06623067);
   VH_tagFirst_Aplanarity_stack_2->SetBinError(18,0.3561938);
   VH_tagFirst_Aplanarity_stack_2->SetBinError(19,0.04928414);
   VH_tagFirst_Aplanarity_stack_2->SetBinError(20,0.307226);
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
   VH_tagFirst_Aplanarity_stack_3->SetBinContent(1,333201.5);
   VH_tagFirst_Aplanarity_stack_3->SetBinContent(2,47381.81);
   VH_tagFirst_Aplanarity_stack_3->SetBinContent(3,12424);
   VH_tagFirst_Aplanarity_stack_3->SetBinContent(4,4485.421);
   VH_tagFirst_Aplanarity_stack_3->SetBinContent(5,1982.431);
   VH_tagFirst_Aplanarity_stack_3->SetBinContent(6,1008.552);
   VH_tagFirst_Aplanarity_stack_3->SetBinContent(7,544.7517);
   VH_tagFirst_Aplanarity_stack_3->SetBinContent(8,315.9181);
   VH_tagFirst_Aplanarity_stack_3->SetBinContent(9,194.8389);
   VH_tagFirst_Aplanarity_stack_3->SetBinContent(10,117.4975);
   VH_tagFirst_Aplanarity_stack_3->SetBinContent(11,77.09591);
   VH_tagFirst_Aplanarity_stack_3->SetBinContent(12,47.31099);
   VH_tagFirst_Aplanarity_stack_3->SetBinContent(13,31.39147);
   VH_tagFirst_Aplanarity_stack_3->SetBinContent(14,19.15614);
   VH_tagFirst_Aplanarity_stack_3->SetBinContent(15,13.24886);
   VH_tagFirst_Aplanarity_stack_3->SetBinContent(16,6.555689);
   VH_tagFirst_Aplanarity_stack_3->SetBinContent(17,4.197808);
   VH_tagFirst_Aplanarity_stack_3->SetBinContent(18,2.411495);
   VH_tagFirst_Aplanarity_stack_3->SetBinContent(19,1.410139);
   VH_tagFirst_Aplanarity_stack_3->SetBinContent(20,0.2633154);
   VH_tagFirst_Aplanarity_stack_3->SetBinContent(21,0.3859996);
   VH_tagFirst_Aplanarity_stack_3->SetBinContent(22,0.1141517);
   VH_tagFirst_Aplanarity_stack_3->SetBinError(1,137.976);
   VH_tagFirst_Aplanarity_stack_3->SetBinError(2,51.43107);
   VH_tagFirst_Aplanarity_stack_3->SetBinError(3,26.3543);
   VH_tagFirst_Aplanarity_stack_3->SetBinError(4,15.85824);
   VH_tagFirst_Aplanarity_stack_3->SetBinError(5,10.56158);
   VH_tagFirst_Aplanarity_stack_3->SetBinError(6,7.562154);
   VH_tagFirst_Aplanarity_stack_3->SetBinError(7,5.563637);
   VH_tagFirst_Aplanarity_stack_3->SetBinError(8,4.237567);
   VH_tagFirst_Aplanarity_stack_3->SetBinError(9,3.336044);
   VH_tagFirst_Aplanarity_stack_3->SetBinError(10,2.588808);
   VH_tagFirst_Aplanarity_stack_3->SetBinError(11,2.110904);
   VH_tagFirst_Aplanarity_stack_3->SetBinError(12,1.661823);
   VH_tagFirst_Aplanarity_stack_3->SetBinError(13,1.356821);
   VH_tagFirst_Aplanarity_stack_3->SetBinError(14,1.058123);
   VH_tagFirst_Aplanarity_stack_3->SetBinError(15,0.8927018);
   VH_tagFirst_Aplanarity_stack_3->SetBinError(16,0.6145693);
   VH_tagFirst_Aplanarity_stack_3->SetBinError(17,0.4939482);
   VH_tagFirst_Aplanarity_stack_3->SetBinError(18,0.3770029);
   VH_tagFirst_Aplanarity_stack_3->SetBinError(19,0.282786);
   VH_tagFirst_Aplanarity_stack_3->SetBinError(20,0.1133197);
   VH_tagFirst_Aplanarity_stack_3->SetBinError(21,0.1596839);
   VH_tagFirst_Aplanarity_stack_3->SetBinError(22,0.08081149);
   VH_tagFirst_Aplanarity_stack_3->SetEntries(7548869);

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
   VH_tagFirst_Aplanarity_stack_4->SetBinContent(1,15536.75);
   VH_tagFirst_Aplanarity_stack_4->SetBinContent(2,1779.382);
   VH_tagFirst_Aplanarity_stack_4->SetBinContent(3,461.7367);
   VH_tagFirst_Aplanarity_stack_4->SetBinContent(4,147.9651);
   VH_tagFirst_Aplanarity_stack_4->SetBinContent(5,58.43559);
   VH_tagFirst_Aplanarity_stack_4->SetBinContent(6,26.73046);
   VH_tagFirst_Aplanarity_stack_4->SetBinContent(7,16.50576);
   VH_tagFirst_Aplanarity_stack_4->SetBinContent(8,8.588346);
   VH_tagFirst_Aplanarity_stack_4->SetBinContent(9,3.335516);
   VH_tagFirst_Aplanarity_stack_4->SetBinContent(10,8.049086);
   VH_tagFirst_Aplanarity_stack_4->SetBinContent(11,2.189927);
   VH_tagFirst_Aplanarity_stack_4->SetBinContent(12,1.760378);
   VH_tagFirst_Aplanarity_stack_4->SetBinContent(13,0.6657086);
   VH_tagFirst_Aplanarity_stack_4->SetBinContent(14,0.7572734);
   VH_tagFirst_Aplanarity_stack_4->SetBinContent(15,0.1464626);
   VH_tagFirst_Aplanarity_stack_4->SetBinContent(16,0.3193688);
   VH_tagFirst_Aplanarity_stack_4->SetBinError(1,77.74477);
   VH_tagFirst_Aplanarity_stack_4->SetBinError(2,30.82439);
   VH_tagFirst_Aplanarity_stack_4->SetBinError(3,15.97395);
   VH_tagFirst_Aplanarity_stack_4->SetBinError(4,8.996592);
   VH_tagFirst_Aplanarity_stack_4->SetBinError(5,5.094032);
   VH_tagFirst_Aplanarity_stack_4->SetBinError(6,2.525147);
   VH_tagFirst_Aplanarity_stack_4->SetBinError(7,1.491002);
   VH_tagFirst_Aplanarity_stack_4->SetBinError(8,1.0337);
   VH_tagFirst_Aplanarity_stack_4->SetBinError(9,0.547243);
   VH_tagFirst_Aplanarity_stack_4->SetBinError(10,3.105436);
   VH_tagFirst_Aplanarity_stack_4->SetBinError(11,0.5036223);
   VH_tagFirst_Aplanarity_stack_4->SetBinError(12,0.4642453);
   VH_tagFirst_Aplanarity_stack_4->SetBinError(13,0.2139826);
   VH_tagFirst_Aplanarity_stack_4->SetBinError(14,0.3441234);
   VH_tagFirst_Aplanarity_stack_4->SetBinError(15,0.1055822);
   VH_tagFirst_Aplanarity_stack_4->SetBinError(16,0.2608187);
   VH_tagFirst_Aplanarity_stack_4->SetEntries(171964);

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
   VH_tagFirst_Aplanarity_stack_5->SetBinContent(1,8986.918);
   VH_tagFirst_Aplanarity_stack_5->SetBinContent(2,956.5588);
   VH_tagFirst_Aplanarity_stack_5->SetBinContent(3,273.4003);
   VH_tagFirst_Aplanarity_stack_5->SetBinContent(4,88.68857);
   VH_tagFirst_Aplanarity_stack_5->SetBinContent(5,30.38665);
   VH_tagFirst_Aplanarity_stack_5->SetBinContent(6,26.232);
   VH_tagFirst_Aplanarity_stack_5->SetBinContent(7,22.34406);
   VH_tagFirst_Aplanarity_stack_5->SetBinContent(8,5.366916);
   VH_tagFirst_Aplanarity_stack_5->SetBinContent(9,2.260569);
   VH_tagFirst_Aplanarity_stack_5->SetBinContent(10,2.95842);
   VH_tagFirst_Aplanarity_stack_5->SetBinContent(11,0.8898511);
   VH_tagFirst_Aplanarity_stack_5->SetBinContent(12,1.21983);
   VH_tagFirst_Aplanarity_stack_5->SetBinContent(13,0.4083863);
   VH_tagFirst_Aplanarity_stack_5->SetBinContent(14,0.0002168231);
   VH_tagFirst_Aplanarity_stack_5->SetBinContent(15,0.1683859);
   VH_tagFirst_Aplanarity_stack_5->SetBinContent(20,0.1208841);
   VH_tagFirst_Aplanarity_stack_5->SetBinError(1,89.10075);
   VH_tagFirst_Aplanarity_stack_5->SetBinError(2,31.70388);
   VH_tagFirst_Aplanarity_stack_5->SetBinError(3,20.66776);
   VH_tagFirst_Aplanarity_stack_5->SetBinError(4,11.00773);
   VH_tagFirst_Aplanarity_stack_5->SetBinError(5,3.631788);
   VH_tagFirst_Aplanarity_stack_5->SetBinError(6,6.582863);
   VH_tagFirst_Aplanarity_stack_5->SetBinError(7,8.40615);
   VH_tagFirst_Aplanarity_stack_5->SetBinError(8,1.285668);
   VH_tagFirst_Aplanarity_stack_5->SetBinError(9,0.6041652);
   VH_tagFirst_Aplanarity_stack_5->SetBinError(10,1.506317);
   VH_tagFirst_Aplanarity_stack_5->SetBinError(11,0.2686403);
   VH_tagFirst_Aplanarity_stack_5->SetBinError(12,0.5316242);
   VH_tagFirst_Aplanarity_stack_5->SetBinError(13,0.1895473);
   VH_tagFirst_Aplanarity_stack_5->SetBinError(14,0.0002168231);
   VH_tagFirst_Aplanarity_stack_5->SetBinError(15,0.1683859);
   VH_tagFirst_Aplanarity_stack_5->SetBinError(20,0.09208494);
   VH_tagFirst_Aplanarity_stack_5->SetEntries(114942);

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
   VH_tagFirst_Aplanarity_stack_6->SetBinContent(1,77.63144);
   VH_tagFirst_Aplanarity_stack_6->SetBinContent(2,7.605058);
   VH_tagFirst_Aplanarity_stack_6->SetBinContent(3,2.109508);
   VH_tagFirst_Aplanarity_stack_6->SetBinContent(4,0.7492838);
   VH_tagFirst_Aplanarity_stack_6->SetBinContent(5,0.6278226);
   VH_tagFirst_Aplanarity_stack_6->SetBinContent(6,0.1080637);
   VH_tagFirst_Aplanarity_stack_6->SetBinContent(7,0.1969203);
   VH_tagFirst_Aplanarity_stack_6->SetBinError(1,3.074493);
   VH_tagFirst_Aplanarity_stack_6->SetBinError(2,0.9266675);
   VH_tagFirst_Aplanarity_stack_6->SetBinError(3,0.4778257);
   VH_tagFirst_Aplanarity_stack_6->SetBinError(4,0.3097005);
   VH_tagFirst_Aplanarity_stack_6->SetBinError(5,0.2875252);
   VH_tagFirst_Aplanarity_stack_6->SetBinError(6,0.1080637);
   VH_tagFirst_Aplanarity_stack_6->SetBinError(7,0.1392489);
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
   VH_tagFirst_Aplanarity_stack_7->SetBinContent(1,207.0264);
   VH_tagFirst_Aplanarity_stack_7->SetBinContent(2,22.13475);
   VH_tagFirst_Aplanarity_stack_7->SetBinContent(3,3.868062);
   VH_tagFirst_Aplanarity_stack_7->SetBinContent(4,2.458047);
   VH_tagFirst_Aplanarity_stack_7->SetBinContent(5,0.596606);
   VH_tagFirst_Aplanarity_stack_7->SetBinContent(6,0.6231593);
   VH_tagFirst_Aplanarity_stack_7->SetBinContent(7,0.2114924);
   VH_tagFirst_Aplanarity_stack_7->SetBinContent(8,0.07837858);
   VH_tagFirst_Aplanarity_stack_7->SetBinError(1,4.555266);
   VH_tagFirst_Aplanarity_stack_7->SetBinError(2,1.472179);
   VH_tagFirst_Aplanarity_stack_7->SetBinError(3,0.6186323);
   VH_tagFirst_Aplanarity_stack_7->SetBinError(4,0.5010642);
   VH_tagFirst_Aplanarity_stack_7->SetBinError(5,0.2479992);
   VH_tagFirst_Aplanarity_stack_7->SetBinError(6,0.2578621);
   VH_tagFirst_Aplanarity_stack_7->SetBinError(7,0.1496083);
   VH_tagFirst_Aplanarity_stack_7->SetBinError(8,0.07837858);
   VH_tagFirst_Aplanarity_stack_7->SetEntries(2480);

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
   VH_tagFirst_Aplanarity_stack_8->SetBinContent(1,149.2867);
   VH_tagFirst_Aplanarity_stack_8->SetBinContent(2,18.47092);
   VH_tagFirst_Aplanarity_stack_8->SetBinContent(3,3.906129);
   VH_tagFirst_Aplanarity_stack_8->SetBinContent(4,1.237765);
   VH_tagFirst_Aplanarity_stack_8->SetBinContent(5,1.257059);
   VH_tagFirst_Aplanarity_stack_8->SetBinContent(6,0.6878721);
   VH_tagFirst_Aplanarity_stack_8->SetBinContent(8,0.2290902);
   VH_tagFirst_Aplanarity_stack_8->SetBinError(1,5.624402);
   VH_tagFirst_Aplanarity_stack_8->SetBinError(2,1.979813);
   VH_tagFirst_Aplanarity_stack_8->SetBinError(3,0.9058488);
   VH_tagFirst_Aplanarity_stack_8->SetBinError(4,0.5120562);
   VH_tagFirst_Aplanarity_stack_8->SetBinError(5,0.5262113);
   VH_tagFirst_Aplanarity_stack_8->SetBinError(6,0.3518065);
   VH_tagFirst_Aplanarity_stack_8->SetBinError(8,0.2290902);
   VH_tagFirst_Aplanarity_stack_8->SetEntries(868);

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
   VH_tagFirst_Aplanarity_stack_9->SetBinContent(1,69.83616);
   VH_tagFirst_Aplanarity_stack_9->SetBinContent(2,7.129883);
   VH_tagFirst_Aplanarity_stack_9->SetBinContent(3,1.686627);
   VH_tagFirst_Aplanarity_stack_9->SetBinContent(4,0.5172587);
   VH_tagFirst_Aplanarity_stack_9->SetBinContent(5,0.2293748);
   VH_tagFirst_Aplanarity_stack_9->SetBinContent(6,0.1121032);
   VH_tagFirst_Aplanarity_stack_9->SetBinContent(7,0.07195896);
   VH_tagFirst_Aplanarity_stack_9->SetBinContent(8,0.03019436);
   VH_tagFirst_Aplanarity_stack_9->SetBinContent(9,0.02500013);
   VH_tagFirst_Aplanarity_stack_9->SetBinContent(10,0.0153631);
   VH_tagFirst_Aplanarity_stack_9->SetBinContent(11,0.0039714);
   VH_tagFirst_Aplanarity_stack_9->SetBinContent(12,0.006347509);
   VH_tagFirst_Aplanarity_stack_9->SetBinContent(13,0.005560822);
   VH_tagFirst_Aplanarity_stack_9->SetBinContent(15,0.002294612);
   VH_tagFirst_Aplanarity_stack_9->SetBinContent(17,0.0008848379);
   VH_tagFirst_Aplanarity_stack_9->SetBinContent(20,0.001478358);
   VH_tagFirst_Aplanarity_stack_9->SetBinError(1,0.282652);
   VH_tagFirst_Aplanarity_stack_9->SetBinError(2,0.0895397);
   VH_tagFirst_Aplanarity_stack_9->SetBinError(3,0.04436376);
   VH_tagFirst_Aplanarity_stack_9->SetBinError(4,0.02467747);
   VH_tagFirst_Aplanarity_stack_9->SetBinError(5,0.01617695);
   VH_tagFirst_Aplanarity_stack_9->SetBinError(6,0.01157111);
   VH_tagFirst_Aplanarity_stack_9->SetBinError(7,0.009424614);
   VH_tagFirst_Aplanarity_stack_9->SetBinError(8,0.005755077);
   VH_tagFirst_Aplanarity_stack_9->SetBinError(9,0.005423238);
   VH_tagFirst_Aplanarity_stack_9->SetBinError(10,0.004560608);
   VH_tagFirst_Aplanarity_stack_9->SetBinError(11,0.001986464);
   VH_tagFirst_Aplanarity_stack_9->SetBinError(12,0.002903222);
   VH_tagFirst_Aplanarity_stack_9->SetBinError(13,0.002807808);
   VH_tagFirst_Aplanarity_stack_9->SetBinError(15,0.001644687);
   VH_tagFirst_Aplanarity_stack_9->SetBinError(17,0.0008848379);
   VH_tagFirst_Aplanarity_stack_9->SetBinError(20,0.001478358);
   VH_tagFirst_Aplanarity_stack_9->SetEntries(73002);

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
   VH_tagFirst_Aplanarity_stack_10->SetBinContent(1,37.04476);
   VH_tagFirst_Aplanarity_stack_10->SetBinContent(2,4.153891);
   VH_tagFirst_Aplanarity_stack_10->SetBinContent(3,1.004502);
   VH_tagFirst_Aplanarity_stack_10->SetBinContent(4,0.3476144);
   VH_tagFirst_Aplanarity_stack_10->SetBinContent(5,0.1686299);
   VH_tagFirst_Aplanarity_stack_10->SetBinContent(6,0.0705841);
   VH_tagFirst_Aplanarity_stack_10->SetBinContent(7,0.05078388);
   VH_tagFirst_Aplanarity_stack_10->SetBinContent(8,0.02423331);
   VH_tagFirst_Aplanarity_stack_10->SetBinContent(9,0.01344426);
   VH_tagFirst_Aplanarity_stack_10->SetBinContent(10,0.00851777);
   VH_tagFirst_Aplanarity_stack_10->SetBinContent(11,0.005550015);
   VH_tagFirst_Aplanarity_stack_10->SetBinContent(12,0.003259924);
   VH_tagFirst_Aplanarity_stack_10->SetBinContent(13,0.002066907);
   VH_tagFirst_Aplanarity_stack_10->SetBinContent(14,0.002042008);
   VH_tagFirst_Aplanarity_stack_10->SetBinContent(15,0.0004175243);
   VH_tagFirst_Aplanarity_stack_10->SetBinContent(16,0.0004966983);
   VH_tagFirst_Aplanarity_stack_10->SetBinContent(17,0.0003398691);
   VH_tagFirst_Aplanarity_stack_10->SetBinContent(19,0.0007934507);
   VH_tagFirst_Aplanarity_stack_10->SetBinContent(20,0.0003974464);
   VH_tagFirst_Aplanarity_stack_10->SetBinContent(21,0.0003611448);
   VH_tagFirst_Aplanarity_stack_10->SetBinError(1,0.1118346);
   VH_tagFirst_Aplanarity_stack_10->SetBinError(2,0.03695449);
   VH_tagFirst_Aplanarity_stack_10->SetBinError(3,0.01820628);
   VH_tagFirst_Aplanarity_stack_10->SetBinError(4,0.01088353);
   VH_tagFirst_Aplanarity_stack_10->SetBinError(5,0.007634039);
   VH_tagFirst_Aplanarity_stack_10->SetBinError(6,0.004848399);
   VH_tagFirst_Aplanarity_stack_10->SetBinError(7,0.004197017);
   VH_tagFirst_Aplanarity_stack_10->SetBinError(8,0.002891582);
   VH_tagFirst_Aplanarity_stack_10->SetBinError(9,0.002154765);
   VH_tagFirst_Aplanarity_stack_10->SetBinError(10,0.001628865);
   VH_tagFirst_Aplanarity_stack_10->SetBinError(11,0.001504998);
   VH_tagFirst_Aplanarity_stack_10->SetBinError(12,0.001027386);
   VH_tagFirst_Aplanarity_stack_10->SetBinError(13,0.0008522083);
   VH_tagFirst_Aplanarity_stack_10->SetBinError(14,0.0008375849);
   VH_tagFirst_Aplanarity_stack_10->SetBinError(15,0.0004175243);
   VH_tagFirst_Aplanarity_stack_10->SetBinError(16,0.0003611268);
   VH_tagFirst_Aplanarity_stack_10->SetBinError(17,0.0003398691);
   VH_tagFirst_Aplanarity_stack_10->SetBinError(19,0.0005641041);
   VH_tagFirst_Aplanarity_stack_10->SetBinError(20,0.0003974464);
   VH_tagFirst_Aplanarity_stack_10->SetBinError(21,0.0003611448);
   VH_tagFirst_Aplanarity_stack_10->SetEntries(134198);

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
   VH_tagFirst_Aplanarity_stack_11->SetBinContent(1,1.609437);
   VH_tagFirst_Aplanarity_stack_11->SetBinContent(2,0.1469892);
   VH_tagFirst_Aplanarity_stack_11->SetBinContent(3,0.03251455);
   VH_tagFirst_Aplanarity_stack_11->SetBinContent(4,0.01257971);
   VH_tagFirst_Aplanarity_stack_11->SetBinContent(6,0.001736123);
   VH_tagFirst_Aplanarity_stack_11->SetBinError(1,0.05766827);
   VH_tagFirst_Aplanarity_stack_11->SetBinError(2,0.0175112);
   VH_tagFirst_Aplanarity_stack_11->SetBinError(3,0.008012246);
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
   VH_tagFirst_Aplanarity_stack_12->SetBinContent(1,0.7680011);
   VH_tagFirst_Aplanarity_stack_12->SetBinContent(2,0.08340784);
   VH_tagFirst_Aplanarity_stack_12->SetBinContent(3,0.02025888);
   VH_tagFirst_Aplanarity_stack_12->SetBinContent(4,0.007182694);
   VH_tagFirst_Aplanarity_stack_12->SetBinContent(5,0.002943678);
   VH_tagFirst_Aplanarity_stack_12->SetBinContent(6,0.0009468242);
   VH_tagFirst_Aplanarity_stack_12->SetBinContent(7,0.0006445096);
   VH_tagFirst_Aplanarity_stack_12->SetBinContent(8,0.001458604);
   VH_tagFirst_Aplanarity_stack_12->SetBinContent(9,0.0004297189);
   VH_tagFirst_Aplanarity_stack_12->SetBinContent(17,0.0002685819);
   VH_tagFirst_Aplanarity_stack_12->SetBinError(1,0.01493051);
   VH_tagFirst_Aplanarity_stack_12->SetBinError(2,0.004885422);
   VH_tagFirst_Aplanarity_stack_12->SetBinError(3,0.002398345);
   VH_tagFirst_Aplanarity_stack_12->SetBinError(4,0.001498507);
   VH_tagFirst_Aplanarity_stack_12->SetBinError(5,0.0009436653);
   VH_tagFirst_Aplanarity_stack_12->SetBinError(6,0.0004856896);
   VH_tagFirst_Aplanarity_stack_12->SetBinError(7,0.0004612644);
   VH_tagFirst_Aplanarity_stack_12->SetBinError(8,0.0006179336);
   VH_tagFirst_Aplanarity_stack_12->SetBinError(9,0.0004297189);
   VH_tagFirst_Aplanarity_stack_12->SetBinError(17,0.0002685819);
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
   
   TH1D *VH_tagFirst_Aplanarity__91 = new TH1D("VH_tagFirst_Aplanarity__91","",50,0,1);
   VH_tagFirst_Aplanarity__91->SetBinContent(0,1);
   VH_tagFirst_Aplanarity__91->SetBinContent(1,2517254);
   VH_tagFirst_Aplanarity__91->SetBinContent(2,350629);
   VH_tagFirst_Aplanarity__91->SetBinContent(3,89182);
   VH_tagFirst_Aplanarity__91->SetBinContent(4,29474);
   VH_tagFirst_Aplanarity__91->SetBinContent(5,11433);
   VH_tagFirst_Aplanarity__91->SetBinContent(6,5455);
   VH_tagFirst_Aplanarity__91->SetBinContent(7,2928);
   VH_tagFirst_Aplanarity__91->SetBinContent(8,1626);
   VH_tagFirst_Aplanarity__91->SetBinContent(9,984);
   VH_tagFirst_Aplanarity__91->SetBinContent(10,577);
   VH_tagFirst_Aplanarity__91->SetBinContent(11,366);
   VH_tagFirst_Aplanarity__91->SetBinContent(12,233);
   VH_tagFirst_Aplanarity__91->SetBinContent(13,162);
   VH_tagFirst_Aplanarity__91->SetBinContent(14,87);
   VH_tagFirst_Aplanarity__91->SetBinContent(15,72);
   VH_tagFirst_Aplanarity__91->SetBinContent(16,30);
   VH_tagFirst_Aplanarity__91->SetBinContent(17,17);
   VH_tagFirst_Aplanarity__91->SetBinContent(18,10);
   VH_tagFirst_Aplanarity__91->SetBinContent(19,7);
   VH_tagFirst_Aplanarity__91->SetBinContent(20,8);
   VH_tagFirst_Aplanarity__91->SetEntries(3010584);

   ci = TColor::GetColor("#000099");
   VH_tagFirst_Aplanarity__91->SetLineColor(ci);
   VH_tagFirst_Aplanarity__91->SetLineWidth(2);
   VH_tagFirst_Aplanarity__91->SetMarkerStyle(20);
   VH_tagFirst_Aplanarity__91->SetMarkerSize(1.2);
   VH_tagFirst_Aplanarity__91->GetXaxis()->SetRange(1,100);
   VH_tagFirst_Aplanarity__91->GetXaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity__91->GetXaxis()->SetTitleOffset(1);
   VH_tagFirst_Aplanarity__91->GetXaxis()->SetTitleFont(42);
   VH_tagFirst_Aplanarity__91->GetYaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity__91->GetYaxis()->SetTitleFont(42);
   VH_tagFirst_Aplanarity__91->GetZaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity__91->GetZaxis()->SetTitleOffset(1);
   VH_tagFirst_Aplanarity__91->GetZaxis()->SetTitleFont(42);
   VH_tagFirst_Aplanarity__91->Draw("same E");
   
   Double_t Graph_from_VH_tagFirst_Aplanarity_fx1091[50] = { 0.01, 0.03, 0.05, 0.07, 0.09, 0.11, 0.13, 0.15, 0.17, 0.19, 0.21, 0.23, 0.25, 0.27, 0.29, 0.31, 0.33,
   0.35, 0.37, 0.39, 0.41, 0.43, 0.45, 0.47, 0.49, 0.51, 0.53, 0.55, 0.57, 0.59, 0.61, 0.63, 0.65,
   0.67, 0.69, 0.71, 0.73, 0.75, 0.77, 0.79, 0.81, 0.83, 0.85, 0.87, 0.89, 0.91, 0.93, 0.95, 0.97,
   0.99 };
   Double_t Graph_from_VH_tagFirst_Aplanarity_fy1091[50] = { 2258947, 325865.5, 83596.57, 27443.35, 8712.981, 4674.208, 2652.384, 991.0071, 1162.126, 264.8924, 246.9086, 391.2343, 145.8191, 39.41032, 51.66534, 7.678013, 16.32259,
   2.910606, 1.480312, 0.762363, 0.3863607, 0.1141517, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0 };
   Double_t Graph_from_VH_tagFirst_Aplanarity_fex1091[50] = { 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01 };
   Double_t Graph_from_VH_tagFirst_Aplanarity_fey1091[50] = { 28629.62, 17800.69, 4176.123, 2191.394, 862.4599, 661.7433, 461.8631, 93.84154, 343.7101, 39.01274, 43.68203, 219.3828, 37.93188, 11.50245, 17.68254, 0.8231532, 8.307562,
   0.5186571, 0.2870491, 0.3401634, 0.1596843, 0.08081149, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0 };
   TGraphErrors *gre = new TGraphErrors(50,Graph_from_VH_tagFirst_Aplanarity_fx1091,Graph_from_VH_tagFirst_Aplanarity_fy1091,Graph_from_VH_tagFirst_Aplanarity_fex1091,Graph_from_VH_tagFirst_Aplanarity_fey1091);
   gre->SetName("Graph_from_VH_tagFirst_Aplanarity");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VH_tagFirst_Aplanarity1091 = new TH1F("Graph_Graph_from_VH_tagFirst_Aplanarity1091","",100,0,1.1);
   Graph_Graph_from_VH_tagFirst_Aplanarity1091->SetMinimum(0);
   Graph_Graph_from_VH_tagFirst_Aplanarity1091->SetMaximum(2516334);
   Graph_Graph_from_VH_tagFirst_Aplanarity1091->SetDirectory(nullptr);
   Graph_Graph_from_VH_tagFirst_Aplanarity1091->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VH_tagFirst_Aplanarity1091->SetLineColor(ci);
   Graph_Graph_from_VH_tagFirst_Aplanarity1091->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VH_tagFirst_Aplanarity1091->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_from_VH_tagFirst_Aplanarity1091->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VH_tagFirst_Aplanarity1091->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VH_tagFirst_Aplanarity1091->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VH_tagFirst_Aplanarity1091->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VH_tagFirst_Aplanarity1091->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_from_VH_tagFirst_Aplanarity1091->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VH_tagFirst_Aplanarity1091);
   
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
   
   TH1D *data_mc_ratio__92 = new TH1D("data_mc_ratio__92","",50,0,1);
   data_mc_ratio__92->SetBinContent(1,1.114349);
   data_mc_ratio__92->SetBinContent(2,1.075993);
   data_mc_ratio__92->SetBinContent(3,1.066814);
   data_mc_ratio__92->SetBinContent(4,1.073994);
   data_mc_ratio__92->SetBinContent(5,1.31218);
   data_mc_ratio__92->SetBinContent(6,1.167043);
   data_mc_ratio__92->SetBinContent(7,1.103912);
   data_mc_ratio__92->SetBinContent(8,1.640755);
   data_mc_ratio__92->SetBinContent(9,0.8467239);
   data_mc_ratio__92->SetBinContent(10,2.178243);
   data_mc_ratio__92->SetBinContent(11,1.48233);
   data_mc_ratio__92->SetBinContent(12,0.5955511);
   data_mc_ratio__92->SetBinContent(13,1.110966);
   data_mc_ratio__92->SetBinContent(14,2.207544);
   data_mc_ratio__92->SetBinContent(15,1.393584);
   data_mc_ratio__92->SetBinContent(16,3.907261);
   data_mc_ratio__92->SetBinContent(17,1.041501);
   data_mc_ratio__92->SetBinContent(18,3.435711);
   data_mc_ratio__92->SetBinContent(19,4.728732);
   data_mc_ratio__92->SetBinContent(20,10.49369);
   data_mc_ratio__92->SetBinError(1,0.0007023564);
   data_mc_ratio__92->SetBinError(2,0.001817128);
   data_mc_ratio__92->SetBinError(3,0.003572318);
   data_mc_ratio__92->SetBinError(4,0.006255794);
   data_mc_ratio__92->SetBinError(5,0.01227194);
   data_mc_ratio__92->SetBinError(6,0.01580117);
   data_mc_ratio__92->SetBinError(7,0.02040089);
   data_mc_ratio__92->SetBinError(8,0.04068961);
   data_mc_ratio__92->SetBinError(9,0.02699257);
   data_mc_ratio__92->SetBinError(10,0.09068143);
   data_mc_ratio__92->SetBinError(11,0.07748263);
   data_mc_ratio__92->SetBinError(12,0.03901585);
   data_mc_ratio__92->SetBinError(13,0.08728572);
   data_mc_ratio__92->SetBinError(14,0.2366735);
   data_mc_ratio__92->SetBinError(15,0.1642355);
   data_mc_ratio__92->SetBinError(16,0.713365);
   data_mc_ratio__92->SetBinError(17,0.2526012);
   data_mc_ratio__92->SetBinError(18,1.086467);
   data_mc_ratio__92->SetBinError(19,1.787293);
   data_mc_ratio__92->SetBinError(20,3.710079);
   data_mc_ratio__92->SetMinimum(0.4);
   data_mc_ratio__92->SetMaximum(1.6);
   data_mc_ratio__92->SetEntries(42.35441);
   data_mc_ratio__92->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__92->SetLineColor(ci);
   data_mc_ratio__92->SetLineWidth(2);
   data_mc_ratio__92->SetMarkerStyle(20);
   data_mc_ratio__92->SetMarkerSize(1.2);
   data_mc_ratio__92->GetXaxis()->SetTitle("Aplanarity");
   data_mc_ratio__92->GetXaxis()->SetRange(1,50);
   data_mc_ratio__92->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__92->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__92->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__92->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__92->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__92->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__92->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__92->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__92->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__92->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__92->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__92->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__92->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__92->GetZaxis()->SetTitleOffset(1);
   data_mc_ratio__92->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__92->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1092[50] = { 0.01, 0.03, 0.05, 0.07, 0.09, 0.11, 0.13, 0.15, 0.17, 0.19, 0.21, 0.23, 0.25, 0.27, 0.29, 0.31, 0.33,
   0.35, 0.37, 0.39, 0.41, 0.43, 0.45, 0.47, 0.49, 0.51, 0.53, 0.55, 0.57, 0.59, 0.61, 0.63, 0.65,
   0.67, 0.69, 0.71, 0.73, 0.75, 0.77, 0.79, 0.81, 0.83, 0.85, 0.87, 0.89, 0.91, 0.93, 0.95, 0.97,
   0.99 };
   Double_t Graph_from_mc_statistical_error_fy1092[50] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1 };
   Double_t Graph_from_mc_statistical_error_fex1092[50] = { 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01 };
   Double_t Graph_from_mc_statistical_error_fey1092[50] = { 0.01267388, 0.05462586, 0.04995567, 0.07985155, 0.09898563, 0.1415734, 0.1741313, 0.0946931, 0.2957597, 0.1472777, 0.1769158, 0.5607454, 0.2601298, 0.2918639, 0.3422515, 0.1072091, 0.508961,
   0.1781956, 0.1939112, 0.4461962, 0.4133037, 0.7079305, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0 };
   gre = new TGraphErrors(50,Graph_from_mc_statistical_error_fx1092,Graph_from_mc_statistical_error_fy1092,Graph_from_mc_statistical_error_fex1092,Graph_from_mc_statistical_error_fey1092);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1092 = new TH1F("Graph_Graph_from_mc_statistical_error1092","",100,0,1.1);
   Graph_Graph_from_mc_statistical_error1092->SetMinimum(0.1504834);
   Graph_Graph_from_mc_statistical_error1092->SetMaximum(1.849517);
   Graph_Graph_from_mc_statistical_error1092->SetDirectory(nullptr);
   Graph_Graph_from_mc_statistical_error1092->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1092->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1092->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1092->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_from_mc_statistical_error1092->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1092->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1092->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1092->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1092->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_from_mc_statistical_error1092->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1092);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,1,1);
   line->Draw();
   bottomPad->Modified();
   Aplanarity_tagFirst_16->cd();
   Aplanarity_tagFirst_16->Modified();
   Aplanarity_tagFirst_16->cd();
   Aplanarity_tagFirst_16->SetSelected(Aplanarity_tagFirst_16);
}
