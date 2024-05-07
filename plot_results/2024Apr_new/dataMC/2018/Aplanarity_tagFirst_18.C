#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Aplanarity_tagFirst_18()
{
//=========Macro generated from canvas: Aplanarity_tagFirst_18/Aplanarity_tagFirst_18
//=========  (Wed Apr 24 14:26:52 2024) by ROOT version 6.28/10
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
   topPad->Range(-0.1532254,-7159.957,1.052419,7152807);
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
   st->SetMaximum(6436810);
   
   TH1F *st_stack_48 = new TH1F("st_stack_48","",50,0,1);
   st_stack_48->SetMinimum(0.01);
   st_stack_48->SetMaximum(6436810);
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
   VH_tagFirst_Aplanarity_stack_1->SetBinContent(1,2283215);
   VH_tagFirst_Aplanarity_stack_1->SetBinContent(2,292049.1);
   VH_tagFirst_Aplanarity_stack_1->SetBinContent(3,71328.35);
   VH_tagFirst_Aplanarity_stack_1->SetBinContent(4,26590.57);
   VH_tagFirst_Aplanarity_stack_1->SetBinContent(5,10004.31);
   VH_tagFirst_Aplanarity_stack_1->SetBinContent(6,4376.896);
   VH_tagFirst_Aplanarity_stack_1->SetBinContent(7,1297.033);
   VH_tagFirst_Aplanarity_stack_1->SetBinContent(8,5654.639);
   VH_tagFirst_Aplanarity_stack_1->SetBinContent(9,1057.769);
   VH_tagFirst_Aplanarity_stack_1->SetBinContent(10,445.1744);
   VH_tagFirst_Aplanarity_stack_1->SetBinContent(11,102.1047);
   VH_tagFirst_Aplanarity_stack_1->SetBinContent(12,95.3977);
   VH_tagFirst_Aplanarity_stack_1->SetBinContent(13,874.3776);
   VH_tagFirst_Aplanarity_stack_1->SetBinContent(14,66.70402);
   VH_tagFirst_Aplanarity_stack_1->SetBinContent(15,14.53589);
   VH_tagFirst_Aplanarity_stack_1->SetBinContent(16,9.352993);
   VH_tagFirst_Aplanarity_stack_1->SetBinContent(17,54.67183);
   VH_tagFirst_Aplanarity_stack_1->SetBinContent(19,23.60995);
   VH_tagFirst_Aplanarity_stack_1->SetBinError(1,43087.39);
   VH_tagFirst_Aplanarity_stack_1->SetBinError(2,12816.34);
   VH_tagFirst_Aplanarity_stack_1->SetBinError(3,6222.536);
   VH_tagFirst_Aplanarity_stack_1->SetBinError(4,4940.773);
   VH_tagFirst_Aplanarity_stack_1->SetBinError(5,2472.746);
   VH_tagFirst_Aplanarity_stack_1->SetBinError(6,1030.214);
   VH_tagFirst_Aplanarity_stack_1->SetBinError(7,249.5997);
   VH_tagFirst_Aplanarity_stack_1->SetBinError(8,3793.485);
   VH_tagFirst_Aplanarity_stack_1->SetBinError(9,468.6245);
   VH_tagFirst_Aplanarity_stack_1->SetBinError(10,167.3506);
   VH_tagFirst_Aplanarity_stack_1->SetBinError(11,48.68152);
   VH_tagFirst_Aplanarity_stack_1->SetBinError(12,39.66694);
   VH_tagFirst_Aplanarity_stack_1->SetBinError(13,734.499);
   VH_tagFirst_Aplanarity_stack_1->SetBinError(14,37.3035);
   VH_tagFirst_Aplanarity_stack_1->SetBinError(15,14.53589);
   VH_tagFirst_Aplanarity_stack_1->SetBinError(16,8.634457);
   VH_tagFirst_Aplanarity_stack_1->SetBinError(17,54.67183);
   VH_tagFirst_Aplanarity_stack_1->SetBinError(19,23.60995);
   VH_tagFirst_Aplanarity_stack_1->SetEntries(99922);

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
   VH_tagFirst_Aplanarity_stack_2->SetBinContent(1,31382.36);
   VH_tagFirst_Aplanarity_stack_2->SetBinContent(2,4186.129);
   VH_tagFirst_Aplanarity_stack_2->SetBinContent(3,1082.606);
   VH_tagFirst_Aplanarity_stack_2->SetBinContent(4,411.1533);
   VH_tagFirst_Aplanarity_stack_2->SetBinContent(5,164.7865);
   VH_tagFirst_Aplanarity_stack_2->SetBinContent(6,73.94765);
   VH_tagFirst_Aplanarity_stack_2->SetBinContent(7,46.81568);
   VH_tagFirst_Aplanarity_stack_2->SetBinContent(8,31.79466);
   VH_tagFirst_Aplanarity_stack_2->SetBinContent(9,13.3756);
   VH_tagFirst_Aplanarity_stack_2->SetBinContent(10,5.540788);
   VH_tagFirst_Aplanarity_stack_2->SetBinContent(11,3.451524);
   VH_tagFirst_Aplanarity_stack_2->SetBinContent(12,4.188484);
   VH_tagFirst_Aplanarity_stack_2->SetBinContent(13,2.616428);
   VH_tagFirst_Aplanarity_stack_2->SetBinContent(14,1.555934);
   VH_tagFirst_Aplanarity_stack_2->SetBinContent(15,0.5042971);
   VH_tagFirst_Aplanarity_stack_2->SetBinContent(16,0.4561827);
   VH_tagFirst_Aplanarity_stack_2->SetBinContent(17,0.6062688);
   VH_tagFirst_Aplanarity_stack_2->SetBinContent(18,0.1417236);
   VH_tagFirst_Aplanarity_stack_2->SetBinError(1,121.0714);
   VH_tagFirst_Aplanarity_stack_2->SetBinError(2,42.85235);
   VH_tagFirst_Aplanarity_stack_2->SetBinError(3,22.3033);
   VH_tagFirst_Aplanarity_stack_2->SetBinError(4,13.15135);
   VH_tagFirst_Aplanarity_stack_2->SetBinError(5,8.752178);
   VH_tagFirst_Aplanarity_stack_2->SetBinError(6,5.315086);
   VH_tagFirst_Aplanarity_stack_2->SetBinError(7,7.839496);
   VH_tagFirst_Aplanarity_stack_2->SetBinError(8,4.65712);
   VH_tagFirst_Aplanarity_stack_2->SetBinError(9,2.272604);
   VH_tagFirst_Aplanarity_stack_2->SetBinError(10,1.030087);
   VH_tagFirst_Aplanarity_stack_2->SetBinError(11,0.9560823);
   VH_tagFirst_Aplanarity_stack_2->SetBinError(12,1.317715);
   VH_tagFirst_Aplanarity_stack_2->SetBinError(13,0.8847027);
   VH_tagFirst_Aplanarity_stack_2->SetBinError(14,0.6745052);
   VH_tagFirst_Aplanarity_stack_2->SetBinError(15,0.3444484);
   VH_tagFirst_Aplanarity_stack_2->SetBinError(16,0.3213701);
   VH_tagFirst_Aplanarity_stack_2->SetBinError(17,0.3530333);
   VH_tagFirst_Aplanarity_stack_2->SetBinError(18,0.09191481);
   VH_tagFirst_Aplanarity_stack_2->SetEntries(244054);

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
   VH_tagFirst_Aplanarity_stack_3->SetBinContent(1,546800.7);
   VH_tagFirst_Aplanarity_stack_3->SetBinContent(2,73143.96);
   VH_tagFirst_Aplanarity_stack_3->SetBinContent(3,19204.95);
   VH_tagFirst_Aplanarity_stack_3->SetBinContent(4,6931.279);
   VH_tagFirst_Aplanarity_stack_3->SetBinContent(5,3213.186);
   VH_tagFirst_Aplanarity_stack_3->SetBinContent(6,1612.313);
   VH_tagFirst_Aplanarity_stack_3->SetBinContent(7,913.6659);
   VH_tagFirst_Aplanarity_stack_3->SetBinContent(8,535.5618);
   VH_tagFirst_Aplanarity_stack_3->SetBinContent(9,315.5428);
   VH_tagFirst_Aplanarity_stack_3->SetBinContent(10,214.2938);
   VH_tagFirst_Aplanarity_stack_3->SetBinContent(11,130.4047);
   VH_tagFirst_Aplanarity_stack_3->SetBinContent(12,86.71106);
   VH_tagFirst_Aplanarity_stack_3->SetBinContent(13,50.57825);
   VH_tagFirst_Aplanarity_stack_3->SetBinContent(14,33.27934);
   VH_tagFirst_Aplanarity_stack_3->SetBinContent(15,18.83315);
   VH_tagFirst_Aplanarity_stack_3->SetBinContent(16,10.89482);
   VH_tagFirst_Aplanarity_stack_3->SetBinContent(17,9.510355);
   VH_tagFirst_Aplanarity_stack_3->SetBinContent(18,4.121238);
   VH_tagFirst_Aplanarity_stack_3->SetBinContent(19,2.207561);
   VH_tagFirst_Aplanarity_stack_3->SetBinContent(20,0.4585358);
   VH_tagFirst_Aplanarity_stack_3->SetBinContent(21,0.9793631);
   VH_tagFirst_Aplanarity_stack_3->SetBinContent(22,0.08172746);
   VH_tagFirst_Aplanarity_stack_3->SetBinError(1,318.3232);
   VH_tagFirst_Aplanarity_stack_3->SetBinError(2,116.1173);
   VH_tagFirst_Aplanarity_stack_3->SetBinError(3,60.60351);
   VH_tagFirst_Aplanarity_stack_3->SetBinError(4,35.14907);
   VH_tagFirst_Aplanarity_stack_3->SetBinError(5,26.43532);
   VH_tagFirst_Aplanarity_stack_3->SetBinError(6,16.78789);
   VH_tagFirst_Aplanarity_stack_3->SetBinError(7,13.23322);
   VH_tagFirst_Aplanarity_stack_3->SetBinError(8,9.665862);
   VH_tagFirst_Aplanarity_stack_3->SetBinError(9,7.414688);
   VH_tagFirst_Aplanarity_stack_3->SetBinError(10,6.27015);
   VH_tagFirst_Aplanarity_stack_3->SetBinError(11,4.662498);
   VH_tagFirst_Aplanarity_stack_3->SetBinError(12,4.275025);
   VH_tagFirst_Aplanarity_stack_3->SetBinError(13,2.825175);
   VH_tagFirst_Aplanarity_stack_3->SetBinError(14,3.982158);
   VH_tagFirst_Aplanarity_stack_3->SetBinError(15,1.820462);
   VH_tagFirst_Aplanarity_stack_3->SetBinError(16,1.414485);
   VH_tagFirst_Aplanarity_stack_3->SetBinError(17,2.631616);
   VH_tagFirst_Aplanarity_stack_3->SetBinError(18,0.8397491);
   VH_tagFirst_Aplanarity_stack_3->SetBinError(19,0.5230721);
   VH_tagFirst_Aplanarity_stack_3->SetBinError(20,0.2174182);
   VH_tagFirst_Aplanarity_stack_3->SetBinError(21,0.5102297);
   VH_tagFirst_Aplanarity_stack_3->SetBinError(22,0.08172746);
   VH_tagFirst_Aplanarity_stack_3->SetEntries(5829680);

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
   VH_tagFirst_Aplanarity_stack_4->SetBinContent(1,22562.96);
   VH_tagFirst_Aplanarity_stack_4->SetBinContent(2,2474.838);
   VH_tagFirst_Aplanarity_stack_4->SetBinContent(3,616.2813);
   VH_tagFirst_Aplanarity_stack_4->SetBinContent(4,202.8176);
   VH_tagFirst_Aplanarity_stack_4->SetBinContent(5,98.60177);
   VH_tagFirst_Aplanarity_stack_4->SetBinContent(6,47.74311);
   VH_tagFirst_Aplanarity_stack_4->SetBinContent(7,32.52737);
   VH_tagFirst_Aplanarity_stack_4->SetBinContent(8,14.04815);
   VH_tagFirst_Aplanarity_stack_4->SetBinContent(9,11.95511);
   VH_tagFirst_Aplanarity_stack_4->SetBinContent(10,6.974853);
   VH_tagFirst_Aplanarity_stack_4->SetBinContent(11,3.276391);
   VH_tagFirst_Aplanarity_stack_4->SetBinContent(12,3.192022);
   VH_tagFirst_Aplanarity_stack_4->SetBinContent(13,0.4844841);
   VH_tagFirst_Aplanarity_stack_4->SetBinContent(14,0.802373);
   VH_tagFirst_Aplanarity_stack_4->SetBinContent(15,0.7463937);
   VH_tagFirst_Aplanarity_stack_4->SetBinContent(16,0.1035803);
   VH_tagFirst_Aplanarity_stack_4->SetBinContent(17,0.02098532);
   VH_tagFirst_Aplanarity_stack_4->SetBinContent(18,1.523737);
   VH_tagFirst_Aplanarity_stack_4->SetBinContent(19,0.1315472);
   VH_tagFirst_Aplanarity_stack_4->SetBinError(1,144.9558);
   VH_tagFirst_Aplanarity_stack_4->SetBinError(2,52.41249);
   VH_tagFirst_Aplanarity_stack_4->SetBinError(3,22.48686);
   VH_tagFirst_Aplanarity_stack_4->SetBinError(4,11.5026);
   VH_tagFirst_Aplanarity_stack_4->SetBinError(5,7.824825);
   VH_tagFirst_Aplanarity_stack_4->SetBinError(6,5.670092);
   VH_tagFirst_Aplanarity_stack_4->SetBinError(7,13.61754);
   VH_tagFirst_Aplanarity_stack_4->SetBinError(8,2.545819);
   VH_tagFirst_Aplanarity_stack_4->SetBinError(9,2.429633);
   VH_tagFirst_Aplanarity_stack_4->SetBinError(10,3.927318);
   VH_tagFirst_Aplanarity_stack_4->SetBinError(11,1.245901);
   VH_tagFirst_Aplanarity_stack_4->SetBinError(12,1.541792);
   VH_tagFirst_Aplanarity_stack_4->SetBinError(13,0.2850772);
   VH_tagFirst_Aplanarity_stack_4->SetBinError(14,0.4599632);
   VH_tagFirst_Aplanarity_stack_4->SetBinError(15,0.456806);
   VH_tagFirst_Aplanarity_stack_4->SetBinError(16,0.1035803);
   VH_tagFirst_Aplanarity_stack_4->SetBinError(17,0.02098532);
   VH_tagFirst_Aplanarity_stack_4->SetBinError(18,1.373786);
   VH_tagFirst_Aplanarity_stack_4->SetBinError(19,0.1315472);
   VH_tagFirst_Aplanarity_stack_4->SetEntries(90848);

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
   VH_tagFirst_Aplanarity_stack_5->SetBinContent(1,11833.7);
   VH_tagFirst_Aplanarity_stack_5->SetBinContent(2,1256.531);
   VH_tagFirst_Aplanarity_stack_5->SetBinContent(3,362.6564);
   VH_tagFirst_Aplanarity_stack_5->SetBinContent(4,126.5783);
   VH_tagFirst_Aplanarity_stack_5->SetBinContent(5,53.7026);
   VH_tagFirst_Aplanarity_stack_5->SetBinContent(6,41.03137);
   VH_tagFirst_Aplanarity_stack_5->SetBinContent(7,14.33187);
   VH_tagFirst_Aplanarity_stack_5->SetBinContent(8,17.49553);
   VH_tagFirst_Aplanarity_stack_5->SetBinContent(9,2.906254);
   VH_tagFirst_Aplanarity_stack_5->SetBinContent(10,1.450586);
   VH_tagFirst_Aplanarity_stack_5->SetBinContent(11,0.6275467);
   VH_tagFirst_Aplanarity_stack_5->SetBinContent(12,2.455302);
   VH_tagFirst_Aplanarity_stack_5->SetBinContent(14,0.1502154);
   VH_tagFirst_Aplanarity_stack_5->SetBinContent(16,0.4111188);
   VH_tagFirst_Aplanarity_stack_5->SetBinContent(17,0.1470552);
   VH_tagFirst_Aplanarity_stack_5->SetBinContent(18,2.31318);
   VH_tagFirst_Aplanarity_stack_5->SetBinError(1,197.5963);
   VH_tagFirst_Aplanarity_stack_5->SetBinError(2,63.47303);
   VH_tagFirst_Aplanarity_stack_5->SetBinError(3,35.29487);
   VH_tagFirst_Aplanarity_stack_5->SetBinError(4,24.41934);
   VH_tagFirst_Aplanarity_stack_5->SetBinError(5,12.51398);
   VH_tagFirst_Aplanarity_stack_5->SetBinError(6,14.37441);
   VH_tagFirst_Aplanarity_stack_5->SetBinError(7,3.974772);
   VH_tagFirst_Aplanarity_stack_5->SetBinError(8,7.17905);
   VH_tagFirst_Aplanarity_stack_5->SetBinError(9,1.479126);
   VH_tagFirst_Aplanarity_stack_5->SetBinError(10,0.478404);
   VH_tagFirst_Aplanarity_stack_5->SetBinError(11,0.3764284);
   VH_tagFirst_Aplanarity_stack_5->SetBinError(12,1.725288);
   VH_tagFirst_Aplanarity_stack_5->SetBinError(14,0.1291262);
   VH_tagFirst_Aplanarity_stack_5->SetBinError(16,0.4111188);
   VH_tagFirst_Aplanarity_stack_5->SetBinError(17,0.1470552);
   VH_tagFirst_Aplanarity_stack_5->SetBinError(18,2.31318);
   VH_tagFirst_Aplanarity_stack_5->SetEntries(42255);

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
   VH_tagFirst_Aplanarity_stack_9->SetBinContent(1,117.0836);
   VH_tagFirst_Aplanarity_stack_9->SetBinContent(2,10.88568);
   VH_tagFirst_Aplanarity_stack_9->SetBinContent(3,2.648896);
   VH_tagFirst_Aplanarity_stack_9->SetBinContent(4,0.8167307);
   VH_tagFirst_Aplanarity_stack_9->SetBinContent(5,0.4981356);
   VH_tagFirst_Aplanarity_stack_9->SetBinContent(6,0.1553173);
   VH_tagFirst_Aplanarity_stack_9->SetBinContent(7,0.08421433);
   VH_tagFirst_Aplanarity_stack_9->SetBinContent(8,0.09848896);
   VH_tagFirst_Aplanarity_stack_9->SetBinContent(9,0.007943305);
   VH_tagFirst_Aplanarity_stack_9->SetBinContent(10,0.03164769);
   VH_tagFirst_Aplanarity_stack_9->SetBinContent(11,0.05492162);
   VH_tagFirst_Aplanarity_stack_9->SetBinContent(14,0.006819449);
   VH_tagFirst_Aplanarity_stack_9->SetBinContent(15,0.00330621);
   VH_tagFirst_Aplanarity_stack_9->SetBinContent(16,0.005930946);
   VH_tagFirst_Aplanarity_stack_9->SetBinContent(18,0.002370285);
   VH_tagFirst_Aplanarity_stack_9->SetBinError(1,0.8715956);
   VH_tagFirst_Aplanarity_stack_9->SetBinError(2,0.2500141);
   VH_tagFirst_Aplanarity_stack_9->SetBinError(3,0.1252021);
   VH_tagFirst_Aplanarity_stack_9->SetBinError(4,0.06730064);
   VH_tagFirst_Aplanarity_stack_9->SetBinError(5,0.09946303);
   VH_tagFirst_Aplanarity_stack_9->SetBinError(6,0.02806709);
   VH_tagFirst_Aplanarity_stack_9->SetBinError(7,0.0193554);
   VH_tagFirst_Aplanarity_stack_9->SetBinError(8,0.02822098);
   VH_tagFirst_Aplanarity_stack_9->SetBinError(9,0.004600748);
   VH_tagFirst_Aplanarity_stack_9->SetBinError(10,0.01136179);
   VH_tagFirst_Aplanarity_stack_9->SetBinError(11,0.02075266);
   VH_tagFirst_Aplanarity_stack_9->SetBinError(14,0.004926827);
   VH_tagFirst_Aplanarity_stack_9->SetBinError(15,0.00330621);
   VH_tagFirst_Aplanarity_stack_9->SetBinError(16,0.004196243);
   VH_tagFirst_Aplanarity_stack_9->SetBinError(18,0.002370285);
   VH_tagFirst_Aplanarity_stack_9->SetEntries(33398);

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
   VH_tagFirst_Aplanarity_stack_10->SetBinContent(1,61.67928);
   VH_tagFirst_Aplanarity_stack_10->SetBinContent(2,6.916201);
   VH_tagFirst_Aplanarity_stack_10->SetBinContent(3,1.672489);
   VH_tagFirst_Aplanarity_stack_10->SetBinContent(4,0.5787757);
   VH_tagFirst_Aplanarity_stack_10->SetBinContent(5,0.2807677);
   VH_tagFirst_Aplanarity_stack_10->SetBinContent(6,0.1175221);
   VH_tagFirst_Aplanarity_stack_10->SetBinContent(7,0.08455484);
   VH_tagFirst_Aplanarity_stack_10->SetBinContent(8,0.0403483);
   VH_tagFirst_Aplanarity_stack_10->SetBinContent(9,0.02238461);
   VH_tagFirst_Aplanarity_stack_10->SetBinContent(10,0.01418203);
   VH_tagFirst_Aplanarity_stack_10->SetBinContent(11,0.00924074);
   VH_tagFirst_Aplanarity_stack_10->SetBinContent(12,0.005427752);
   VH_tagFirst_Aplanarity_stack_10->SetBinContent(13,0.003441387);
   VH_tagFirst_Aplanarity_stack_10->SetBinContent(14,0.00339993);
   VH_tagFirst_Aplanarity_stack_10->SetBinContent(15,0.0006951752);
   VH_tagFirst_Aplanarity_stack_10->SetBinContent(16,0.0008269996);
   VH_tagFirst_Aplanarity_stack_10->SetBinContent(17,0.0005658798);
   VH_tagFirst_Aplanarity_stack_10->SetBinContent(19,0.00132109);
   VH_tagFirst_Aplanarity_stack_10->SetBinContent(20,0.0006617458);
   VH_tagFirst_Aplanarity_stack_10->SetBinContent(21,0.0006013037);
   VH_tagFirst_Aplanarity_stack_10->SetBinError(1,0.1862039);
   VH_tagFirst_Aplanarity_stack_10->SetBinError(2,0.06152899);
   VH_tagFirst_Aplanarity_stack_10->SetBinError(3,0.03031334);
   VH_tagFirst_Aplanarity_stack_10->SetBinError(4,0.018121);
   VH_tagFirst_Aplanarity_stack_10->SetBinError(5,0.01271063);
   VH_tagFirst_Aplanarity_stack_10->SetBinError(6,0.008072554);
   VH_tagFirst_Aplanarity_stack_10->SetBinError(7,0.006988007);
   VH_tagFirst_Aplanarity_stack_10->SetBinError(8,0.004814465);
   VH_tagFirst_Aplanarity_stack_10->SetBinError(9,0.00358767);
   VH_tagFirst_Aplanarity_stack_10->SetBinError(10,0.00271205);
   VH_tagFirst_Aplanarity_stack_10->SetBinError(11,0.002505813);
   VH_tagFirst_Aplanarity_stack_10->SetBinError(12,0.00171059);
   VH_tagFirst_Aplanarity_stack_10->SetBinError(13,0.001418921);
   VH_tagFirst_Aplanarity_stack_10->SetBinError(14,0.001394574);
   VH_tagFirst_Aplanarity_stack_10->SetBinError(15,0.0006951752);
   VH_tagFirst_Aplanarity_stack_10->SetBinError(16,0.0006012738);
   VH_tagFirst_Aplanarity_stack_10->SetBinError(17,0.0005658798);
   VH_tagFirst_Aplanarity_stack_10->SetBinError(19,0.0009392297);
   VH_tagFirst_Aplanarity_stack_10->SetBinError(20,0.0006617458);
   VH_tagFirst_Aplanarity_stack_10->SetBinError(21,0.0006013037);
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
   VH_tagFirst_Aplanarity__95->SetBinContent(0,2);
   VH_tagFirst_Aplanarity__95->SetBinContent(1,2070737);
   VH_tagFirst_Aplanarity__95->SetBinContent(2,270920);
   VH_tagFirst_Aplanarity__95->SetBinContent(3,70232);
   VH_tagFirst_Aplanarity__95->SetBinContent(4,23795);
   VH_tagFirst_Aplanarity__95->SetBinContent(5,9984);
   VH_tagFirst_Aplanarity__95->SetBinContent(6,4904);
   VH_tagFirst_Aplanarity__95->SetBinContent(7,2591);
   VH_tagFirst_Aplanarity__95->SetBinContent(8,1500);
   VH_tagFirst_Aplanarity__95->SetBinContent(9,888);
   VH_tagFirst_Aplanarity__95->SetBinContent(10,592);
   VH_tagFirst_Aplanarity__95->SetBinContent(11,370);
   VH_tagFirst_Aplanarity__95->SetBinContent(12,237);
   VH_tagFirst_Aplanarity__95->SetBinContent(13,167);
   VH_tagFirst_Aplanarity__95->SetBinContent(14,64);
   VH_tagFirst_Aplanarity__95->SetBinContent(15,57);
   VH_tagFirst_Aplanarity__95->SetBinContent(16,33);
   VH_tagFirst_Aplanarity__95->SetBinContent(17,27);
   VH_tagFirst_Aplanarity__95->SetBinContent(18,11);
   VH_tagFirst_Aplanarity__95->SetBinContent(19,9);
   VH_tagFirst_Aplanarity__95->SetBinContent(20,1);
   VH_tagFirst_Aplanarity__95->SetBinContent(21,1);
   VH_tagFirst_Aplanarity__95->SetEntries(2457171);

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
   Double_t Graph_from_VH_tagFirst_Aplanarity_fy1095[50] = { 2896564, 373188.2, 92611.8, 34273.03, 13538.18, 6153.27, 2305.085, 6253.686, 1401.58, 673.4811, 239.929, 191.9507, 928.0602, 102.503, 34.62373, 21.22545, 64.95707,
   8.102249, 25.95038, 0.4591975, 0.9799644, 0.08172746, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0 };
   Double_t Graph_from_VH_tagFirst_Aplanarity_fex1095[50] = { 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01 };
   Double_t Graph_from_VH_tagFirst_Aplanarity_fey1095[50] = { 43089.44, 12817.21, 6223.013, 4940.99, 2472.948, 1030.481, 250.4758, 3793.508, 468.6973, 167.5179, 48.93095, 39.9854, 734.505, 37.52455, 14.66061, 8.765709, 54.73647,
   2.81988, 23.61611, 0.2174192, 0.51023, 0.08172746, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
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
   Graph_Graph_from_VH_tagFirst_Aplanarity1095->SetMaximum(3233619);
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
   data_mc_ratio__96->SetBinContent(1,0.7148942);
   data_mc_ratio__96->SetBinContent(2,0.7259607);
   data_mc_ratio__96->SetBinContent(3,0.7583483);
   data_mc_ratio__96->SetBinContent(4,0.6942777);
   data_mc_ratio__96->SetBinContent(5,0.73747);
   data_mc_ratio__96->SetBinContent(6,0.7969746);
   data_mc_ratio__96->SetBinContent(7,1.124037);
   data_mc_ratio__96->SetBinContent(8,0.2398586);
   data_mc_ratio__96->SetBinContent(9,0.6335707);
   data_mc_ratio__96->SetBinContent(10,0.8790151);
   data_mc_ratio__96->SetBinContent(11,1.542123);
   data_mc_ratio__96->SetBinContent(12,1.234692);
   data_mc_ratio__96->SetBinContent(13,0.1799452);
   data_mc_ratio__96->SetBinContent(14,0.6243721);
   data_mc_ratio__96->SetBinContent(15,1.64627);
   data_mc_ratio__96->SetBinContent(16,1.554737);
   data_mc_ratio__96->SetBinContent(17,0.4156592);
   data_mc_ratio__96->SetBinContent(18,1.357648);
   data_mc_ratio__96->SetBinContent(19,0.3468157);
   data_mc_ratio__96->SetBinContent(20,2.177712);
   data_mc_ratio__96->SetBinContent(21,1.020445);
   data_mc_ratio__96->SetBinError(1,0.0004967974);
   data_mc_ratio__96->SetBinError(2,0.001394738);
   data_mc_ratio__96->SetBinError(3,0.002861549);
   data_mc_ratio__96->SetBinError(4,0.004500807);
   data_mc_ratio__96->SetBinError(5,0.007380607);
   data_mc_ratio__96->SetBinError(6,0.01138071);
   data_mc_ratio__96->SetBinError(7,0.02208243);
   data_mc_ratio__96->SetBinError(8,0.006193121);
   data_mc_ratio__96->SetBinError(9,0.02126124);
   data_mc_ratio__96->SetBinError(10,0.0361273);
   data_mc_ratio__96->SetBinError(11,0.08017114);
   data_mc_ratio__96->SetBinError(12,0.08020187);
   data_mc_ratio__96->SetBinError(13,0.01392458);
   data_mc_ratio__96->SetBinError(14,0.07804652);
   data_mc_ratio__96->SetBinError(15,0.2180537);
   data_mc_ratio__96->SetBinError(16,0.270645);
   data_mc_ratio__96->SetBinError(17,0.07999364);
   data_mc_ratio__96->SetBinError(18,0.4093462);
   data_mc_ratio__96->SetBinError(19,0.1156052);
   data_mc_ratio__96->SetBinError(20,2.177712);
   data_mc_ratio__96->SetBinError(21,1.020445);
   data_mc_ratio__96->SetMinimum(0.4);
   data_mc_ratio__96->SetMaximum(1.6);
   data_mc_ratio__96->SetEntries(40.84749);
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
   Double_t Graph_from_mc_statistical_error_fey1096[50] = { 0.01487605, 0.03434516, 0.0671946, 0.1441656, 0.1826647, 0.1674688, 0.1086623, 0.6066035, 0.3344064, 0.2487344, 0.2039392, 0.2083108, 0.7914411, 0.3660825, 0.4234267, 0.4129811, 0.8426562,
   0.3480367, 0.9100487, 0.4734765, 0.5206618, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
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
