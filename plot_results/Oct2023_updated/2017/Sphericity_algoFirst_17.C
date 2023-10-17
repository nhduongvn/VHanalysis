#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Sphericity_algoFirst_17()
{
//=========Macro generated from canvas: Sphericity_algoFirst_17/Sphericity_algoFirst_17
//=========  (Tue Oct 17 10:19:57 2023) by ROOT version 6.28/04
   TCanvas *Sphericity_algoFirst_17 = new TCanvas("Sphericity_algoFirst_17", "Sphericity_algoFirst_17",0,0,600,600);
   Sphericity_algoFirst_17->SetHighLightColor(2);
   Sphericity_algoFirst_17->Range(0,0,1,1);
   Sphericity_algoFirst_17->SetFillColor(0);
   Sphericity_algoFirst_17->SetFillStyle(4000);
   Sphericity_algoFirst_17->SetBorderMode(0);
   Sphericity_algoFirst_17->SetBorderSize(2);
   Sphericity_algoFirst_17->SetFrameFillStyle(1000);
   Sphericity_algoFirst_17->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.1532254,-169.4853,1.052419,169325.9);
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
   st->SetMaximum(152376.3);
   
   TH1F *st_stack_116 = new TH1F("st_stack_116","",25,0,1);
   st_stack_116->SetMinimum(0.01);
   st_stack_116->SetMaximum(152376.3);
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
   
   
   TH1D *VbbHcc_algoFirst_Sphericity_stack_1 = new TH1D("VbbHcc_algoFirst_Sphericity_stack_1","",25,0,1);
   VbbHcc_algoFirst_Sphericity_stack_1->SetBinContent(1,62167.57);
   VbbHcc_algoFirst_Sphericity_stack_1->SetBinContent(2,54147.12);
   VbbHcc_algoFirst_Sphericity_stack_1->SetBinContent(3,29700.9);
   VbbHcc_algoFirst_Sphericity_stack_1->SetBinContent(4,15219.77);
   VbbHcc_algoFirst_Sphericity_stack_1->SetBinContent(5,9672.971);
   VbbHcc_algoFirst_Sphericity_stack_1->SetBinContent(6,3244.965);
   VbbHcc_algoFirst_Sphericity_stack_1->SetBinContent(7,3503.99);
   VbbHcc_algoFirst_Sphericity_stack_1->SetBinContent(8,106.9124);
   VbbHcc_algoFirst_Sphericity_stack_1->SetBinContent(9,44.32673);
   VbbHcc_algoFirst_Sphericity_stack_1->SetBinContent(10,18.28164);
   VbbHcc_algoFirst_Sphericity_stack_1->SetBinContent(11,14.53668);
   VbbHcc_algoFirst_Sphericity_stack_1->SetBinContent(12,26.59214);
   VbbHcc_algoFirst_Sphericity_stack_1->SetBinContent(13,13.23923);
   VbbHcc_algoFirst_Sphericity_stack_1->SetBinContent(14,3.059515);
   VbbHcc_algoFirst_Sphericity_stack_1->SetBinContent(17,1.154934);
   VbbHcc_algoFirst_Sphericity_stack_1->SetBinError(1,3107.513);
   VbbHcc_algoFirst_Sphericity_stack_1->SetBinError(2,3055.221);
   VbbHcc_algoFirst_Sphericity_stack_1->SetBinError(3,2688.29);
   VbbHcc_algoFirst_Sphericity_stack_1->SetBinError(4,1635.398);
   VbbHcc_algoFirst_Sphericity_stack_1->SetBinError(5,1875.354);
   VbbHcc_algoFirst_Sphericity_stack_1->SetBinError(6,793.8079);
   VbbHcc_algoFirst_Sphericity_stack_1->SetBinError(7,3197.038);
   VbbHcc_algoFirst_Sphericity_stack_1->SetBinError(8,30.5579);
   VbbHcc_algoFirst_Sphericity_stack_1->SetBinError(9,31.63519);
   VbbHcc_algoFirst_Sphericity_stack_1->SetBinError(10,15.57339);
   VbbHcc_algoFirst_Sphericity_stack_1->SetBinError(11,7.514683);
   VbbHcc_algoFirst_Sphericity_stack_1->SetBinError(12,22.70688);
   VbbHcc_algoFirst_Sphericity_stack_1->SetBinError(13,9.422785);
   VbbHcc_algoFirst_Sphericity_stack_1->SetBinError(14,3.059515);
   VbbHcc_algoFirst_Sphericity_stack_1->SetBinError(17,1.154934);
   VbbHcc_algoFirst_Sphericity_stack_1->SetEntries(13967);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_algoFirst_Sphericity_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algoFirst_Sphericity_stack_1->SetLineColor(ci);
   VbbHcc_algoFirst_Sphericity_stack_1->GetXaxis()->SetRange(1,100);
   VbbHcc_algoFirst_Sphericity_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_algoFirst_Sphericity_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algoFirst_Sphericity_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_algoFirst_Sphericity_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_algoFirst_Sphericity_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_algoFirst_Sphericity_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_algoFirst_Sphericity_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algoFirst_Sphericity_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algoFirst_Sphericity_stack_1,"");
   
   TH1D *VbbHcc_algoFirst_Sphericity_stack_2 = new TH1D("VbbHcc_algoFirst_Sphericity_stack_2","",25,0,1);
   VbbHcc_algoFirst_Sphericity_stack_2->SetBinContent(1,459.7709);
   VbbHcc_algoFirst_Sphericity_stack_2->SetBinContent(2,409.1478);
   VbbHcc_algoFirst_Sphericity_stack_2->SetBinContent(3,241.6629);
   VbbHcc_algoFirst_Sphericity_stack_2->SetBinContent(4,132.0371);
   VbbHcc_algoFirst_Sphericity_stack_2->SetBinContent(5,55.80606);
   VbbHcc_algoFirst_Sphericity_stack_2->SetBinContent(6,29.70662);
   VbbHcc_algoFirst_Sphericity_stack_2->SetBinContent(7,9.688984);
   VbbHcc_algoFirst_Sphericity_stack_2->SetBinContent(8,4.073832);
   VbbHcc_algoFirst_Sphericity_stack_2->SetBinContent(9,1.688071);
   VbbHcc_algoFirst_Sphericity_stack_2->SetBinContent(10,0.4726122);
   VbbHcc_algoFirst_Sphericity_stack_2->SetBinContent(11,0.1439858);
   VbbHcc_algoFirst_Sphericity_stack_2->SetBinContent(12,0.2860634);
   VbbHcc_algoFirst_Sphericity_stack_2->SetBinContent(13,0.5022168);
   VbbHcc_algoFirst_Sphericity_stack_2->SetBinContent(14,0.5190454);
   VbbHcc_algoFirst_Sphericity_stack_2->SetBinContent(15,0.07617754);
   VbbHcc_algoFirst_Sphericity_stack_2->SetBinContent(16,0.1078098);
   VbbHcc_algoFirst_Sphericity_stack_2->SetBinContent(19,0.03331548);
   VbbHcc_algoFirst_Sphericity_stack_2->SetBinError(1,9.896228);
   VbbHcc_algoFirst_Sphericity_stack_2->SetBinError(2,8.991814);
   VbbHcc_algoFirst_Sphericity_stack_2->SetBinError(3,7.412607);
   VbbHcc_algoFirst_Sphericity_stack_2->SetBinError(4,5.504058);
   VbbHcc_algoFirst_Sphericity_stack_2->SetBinError(5,3.65639);
   VbbHcc_algoFirst_Sphericity_stack_2->SetBinError(6,3.075431);
   VbbHcc_algoFirst_Sphericity_stack_2->SetBinError(7,1.668343);
   VbbHcc_algoFirst_Sphericity_stack_2->SetBinError(8,0.8975571);
   VbbHcc_algoFirst_Sphericity_stack_2->SetBinError(9,0.6342375);
   VbbHcc_algoFirst_Sphericity_stack_2->SetBinError(10,0.1873758);
   VbbHcc_algoFirst_Sphericity_stack_2->SetBinError(11,0.1039184);
   VbbHcc_algoFirst_Sphericity_stack_2->SetBinError(12,0.2447587);
   VbbHcc_algoFirst_Sphericity_stack_2->SetBinError(13,0.4242784);
   VbbHcc_algoFirst_Sphericity_stack_2->SetBinError(14,0.3409678);
   VbbHcc_algoFirst_Sphericity_stack_2->SetBinError(15,0.0540827);
   VbbHcc_algoFirst_Sphericity_stack_2->SetBinError(16,0.06294492);
   VbbHcc_algoFirst_Sphericity_stack_2->SetBinError(19,0.05004884);
   VbbHcc_algoFirst_Sphericity_stack_2->SetEntries(19516);

   ci = TColor::GetColor("#660066");
   VbbHcc_algoFirst_Sphericity_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algoFirst_Sphericity_stack_2->SetLineColor(ci);
   VbbHcc_algoFirst_Sphericity_stack_2->GetXaxis()->SetRange(1,100);
   VbbHcc_algoFirst_Sphericity_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_algoFirst_Sphericity_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algoFirst_Sphericity_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_algoFirst_Sphericity_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_algoFirst_Sphericity_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_algoFirst_Sphericity_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_algoFirst_Sphericity_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algoFirst_Sphericity_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algoFirst_Sphericity_stack_2,"");
   
   TH1D *VbbHcc_algoFirst_Sphericity_stack_3 = new TH1D("VbbHcc_algoFirst_Sphericity_stack_3","",25,0,1);
   VbbHcc_algoFirst_Sphericity_stack_3->SetBinContent(1,5212.529);
   VbbHcc_algoFirst_Sphericity_stack_3->SetBinContent(2,4916.973);
   VbbHcc_algoFirst_Sphericity_stack_3->SetBinContent(3,2781.484);
   VbbHcc_algoFirst_Sphericity_stack_3->SetBinContent(4,1477.059);
   VbbHcc_algoFirst_Sphericity_stack_3->SetBinContent(5,773.4388);
   VbbHcc_algoFirst_Sphericity_stack_3->SetBinContent(6,367.9861);
   VbbHcc_algoFirst_Sphericity_stack_3->SetBinContent(7,163.9765);
   VbbHcc_algoFirst_Sphericity_stack_3->SetBinContent(8,78.46218);
   VbbHcc_algoFirst_Sphericity_stack_3->SetBinContent(9,37.17943);
   VbbHcc_algoFirst_Sphericity_stack_3->SetBinContent(10,23.64915);
   VbbHcc_algoFirst_Sphericity_stack_3->SetBinContent(11,12.86797);
   VbbHcc_algoFirst_Sphericity_stack_3->SetBinContent(12,8.483893);
   VbbHcc_algoFirst_Sphericity_stack_3->SetBinContent(13,4.720158);
   VbbHcc_algoFirst_Sphericity_stack_3->SetBinContent(14,3.158519);
   VbbHcc_algoFirst_Sphericity_stack_3->SetBinContent(15,2.151148);
   VbbHcc_algoFirst_Sphericity_stack_3->SetBinContent(16,1.170201);
   VbbHcc_algoFirst_Sphericity_stack_3->SetBinContent(17,0.9691985);
   VbbHcc_algoFirst_Sphericity_stack_3->SetBinContent(18,0.6831405);
   VbbHcc_algoFirst_Sphericity_stack_3->SetBinContent(19,0.2795107);
   VbbHcc_algoFirst_Sphericity_stack_3->SetBinContent(20,0.1590136);
   VbbHcc_algoFirst_Sphericity_stack_3->SetBinContent(21,0.09101785);
   VbbHcc_algoFirst_Sphericity_stack_3->SetBinContent(22,0.02524937);
   VbbHcc_algoFirst_Sphericity_stack_3->SetBinContent(23,0.02320079);
   VbbHcc_algoFirst_Sphericity_stack_3->SetBinError(1,21.05883);
   VbbHcc_algoFirst_Sphericity_stack_3->SetBinError(2,20.27283);
   VbbHcc_algoFirst_Sphericity_stack_3->SetBinError(3,15.38562);
   VbbHcc_algoFirst_Sphericity_stack_3->SetBinError(4,11.09819);
   VbbHcc_algoFirst_Sphericity_stack_3->SetBinError(5,8.181706);
   VbbHcc_algoFirst_Sphericity_stack_3->SetBinError(6,5.59249);
   VbbHcc_algoFirst_Sphericity_stack_3->SetBinError(7,3.618632);
   VbbHcc_algoFirst_Sphericity_stack_3->SetBinError(8,2.493631);
   VbbHcc_algoFirst_Sphericity_stack_3->SetBinError(9,1.726948);
   VbbHcc_algoFirst_Sphericity_stack_3->SetBinError(10,1.315454);
   VbbHcc_algoFirst_Sphericity_stack_3->SetBinError(11,0.9899324);
   VbbHcc_algoFirst_Sphericity_stack_3->SetBinError(12,0.7565225);
   VbbHcc_algoFirst_Sphericity_stack_3->SetBinError(13,0.5242446);
   VbbHcc_algoFirst_Sphericity_stack_3->SetBinError(14,0.4195962);
   VbbHcc_algoFirst_Sphericity_stack_3->SetBinError(15,0.3611579);
   VbbHcc_algoFirst_Sphericity_stack_3->SetBinError(16,0.2529447);
   VbbHcc_algoFirst_Sphericity_stack_3->SetBinError(17,0.2553282);
   VbbHcc_algoFirst_Sphericity_stack_3->SetBinError(18,0.1926453);
   VbbHcc_algoFirst_Sphericity_stack_3->SetBinError(19,0.1138257);
   VbbHcc_algoFirst_Sphericity_stack_3->SetBinError(20,0.09565528);
   VbbHcc_algoFirst_Sphericity_stack_3->SetBinError(21,0.07113878);
   VbbHcc_algoFirst_Sphericity_stack_3->SetBinError(22,0.02524937);
   VbbHcc_algoFirst_Sphericity_stack_3->SetBinError(23,0.02320079);
   VbbHcc_algoFirst_Sphericity_stack_3->SetEntries(264355);

   ci = TColor::GetColor("#cc00cc");
   VbbHcc_algoFirst_Sphericity_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algoFirst_Sphericity_stack_3->SetLineColor(ci);
   VbbHcc_algoFirst_Sphericity_stack_3->GetXaxis()->SetRange(1,100);
   VbbHcc_algoFirst_Sphericity_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_algoFirst_Sphericity_stack_3->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algoFirst_Sphericity_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_algoFirst_Sphericity_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_algoFirst_Sphericity_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_algoFirst_Sphericity_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_algoFirst_Sphericity_stack_3->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algoFirst_Sphericity_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algoFirst_Sphericity_stack_3,"");
   
   TH1D *VbbHcc_algoFirst_Sphericity_stack_4 = new TH1D("VbbHcc_algoFirst_Sphericity_stack_4","",25,0,1);
   VbbHcc_algoFirst_Sphericity_stack_4->SetBinContent(1,475.6415);
   VbbHcc_algoFirst_Sphericity_stack_4->SetBinContent(2,387.2643);
   VbbHcc_algoFirst_Sphericity_stack_4->SetBinContent(3,233.5701);
   VbbHcc_algoFirst_Sphericity_stack_4->SetBinContent(4,140.837);
   VbbHcc_algoFirst_Sphericity_stack_4->SetBinContent(5,75.11785);
   VbbHcc_algoFirst_Sphericity_stack_4->SetBinContent(6,29.33195);
   VbbHcc_algoFirst_Sphericity_stack_4->SetBinContent(7,10.50148);
   VbbHcc_algoFirst_Sphericity_stack_4->SetBinContent(8,2.601243);
   VbbHcc_algoFirst_Sphericity_stack_4->SetBinContent(9,0.4002567);
   VbbHcc_algoFirst_Sphericity_stack_4->SetBinContent(10,0.5197297);
   VbbHcc_algoFirst_Sphericity_stack_4->SetBinContent(14,0.1192083);
   VbbHcc_algoFirst_Sphericity_stack_4->SetBinContent(17,0.05375204);
   VbbHcc_algoFirst_Sphericity_stack_4->SetBinError(1,15.79925);
   VbbHcc_algoFirst_Sphericity_stack_4->SetBinError(2,16.49988);
   VbbHcc_algoFirst_Sphericity_stack_4->SetBinError(3,10.64599);
   VbbHcc_algoFirst_Sphericity_stack_4->SetBinError(4,9.808159);
   VbbHcc_algoFirst_Sphericity_stack_4->SetBinError(5,6.467346);
   VbbHcc_algoFirst_Sphericity_stack_4->SetBinError(6,3.112148);
   VbbHcc_algoFirst_Sphericity_stack_4->SetBinError(7,1.762219);
   VbbHcc_algoFirst_Sphericity_stack_4->SetBinError(8,0.8363352);
   VbbHcc_algoFirst_Sphericity_stack_4->SetBinError(9,0.1805768);
   VbbHcc_algoFirst_Sphericity_stack_4->SetBinError(10,0.377619);
   VbbHcc_algoFirst_Sphericity_stack_4->SetBinError(14,0.1192083);
   VbbHcc_algoFirst_Sphericity_stack_4->SetBinError(17,0.05375204);
   VbbHcc_algoFirst_Sphericity_stack_4->SetEntries(8145);

   ci = TColor::GetColor("#00cccc");
   VbbHcc_algoFirst_Sphericity_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algoFirst_Sphericity_stack_4->SetLineColor(ci);
   VbbHcc_algoFirst_Sphericity_stack_4->GetXaxis()->SetRange(1,100);
   VbbHcc_algoFirst_Sphericity_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_algoFirst_Sphericity_stack_4->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algoFirst_Sphericity_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_algoFirst_Sphericity_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_algoFirst_Sphericity_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_algoFirst_Sphericity_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_algoFirst_Sphericity_stack_4->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algoFirst_Sphericity_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algoFirst_Sphericity_stack_4,"");
   
   TH1D *VbbHcc_algoFirst_Sphericity_stack_5 = new TH1D("VbbHcc_algoFirst_Sphericity_stack_5","",25,0,1);
   VbbHcc_algoFirst_Sphericity_stack_5->SetBinContent(1,226.6715);
   VbbHcc_algoFirst_Sphericity_stack_5->SetBinContent(2,189.7545);
   VbbHcc_algoFirst_Sphericity_stack_5->SetBinContent(3,105.6929);
   VbbHcc_algoFirst_Sphericity_stack_5->SetBinContent(4,57.7349);
   VbbHcc_algoFirst_Sphericity_stack_5->SetBinContent(5,33.78787);
   VbbHcc_algoFirst_Sphericity_stack_5->SetBinContent(6,20.21418);
   VbbHcc_algoFirst_Sphericity_stack_5->SetBinContent(7,8.387104);
   VbbHcc_algoFirst_Sphericity_stack_5->SetBinContent(8,0.6165139);
   VbbHcc_algoFirst_Sphericity_stack_5->SetBinContent(9,0.1226338);
   VbbHcc_algoFirst_Sphericity_stack_5->SetBinContent(10,0.1715454);
   VbbHcc_algoFirst_Sphericity_stack_5->SetBinContent(12,0.1173065);
   VbbHcc_algoFirst_Sphericity_stack_5->SetBinContent(13,0.02133993);
   VbbHcc_algoFirst_Sphericity_stack_5->SetBinContent(14,0.0008275027);
   VbbHcc_algoFirst_Sphericity_stack_5->SetBinContent(15,0.04901188);
   VbbHcc_algoFirst_Sphericity_stack_5->SetBinError(1,12.59644);
   VbbHcc_algoFirst_Sphericity_stack_5->SetBinError(2,14.73786);
   VbbHcc_algoFirst_Sphericity_stack_5->SetBinError(3,10.02157);
   VbbHcc_algoFirst_Sphericity_stack_5->SetBinError(4,6.193975);
   VbbHcc_algoFirst_Sphericity_stack_5->SetBinError(5,5.458085);
   VbbHcc_algoFirst_Sphericity_stack_5->SetBinError(6,5.594079);
   VbbHcc_algoFirst_Sphericity_stack_5->SetBinError(7,4.337383);
   VbbHcc_algoFirst_Sphericity_stack_5->SetBinError(8,0.2844599);
   VbbHcc_algoFirst_Sphericity_stack_5->SetBinError(9,0.1214085);
   VbbHcc_algoFirst_Sphericity_stack_5->SetBinError(10,0.1715454);
   VbbHcc_algoFirst_Sphericity_stack_5->SetBinError(12,0.1173065);
   VbbHcc_algoFirst_Sphericity_stack_5->SetBinError(13,0.02133993);
   VbbHcc_algoFirst_Sphericity_stack_5->SetBinError(14,0.0008275027);
   VbbHcc_algoFirst_Sphericity_stack_5->SetBinError(15,0.04901188);
   VbbHcc_algoFirst_Sphericity_stack_5->SetEntries(3610);

   ci = TColor::GetColor("#ff99cc");
   VbbHcc_algoFirst_Sphericity_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algoFirst_Sphericity_stack_5->SetLineColor(ci);
   VbbHcc_algoFirst_Sphericity_stack_5->GetXaxis()->SetRange(1,100);
   VbbHcc_algoFirst_Sphericity_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_algoFirst_Sphericity_stack_5->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algoFirst_Sphericity_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_algoFirst_Sphericity_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_algoFirst_Sphericity_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_algoFirst_Sphericity_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_algoFirst_Sphericity_stack_5->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algoFirst_Sphericity_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algoFirst_Sphericity_stack_5,"");
   
   TH1D *VbbHcc_algoFirst_Sphericity_stack_6 = new TH1D("VbbHcc_algoFirst_Sphericity_stack_6","",25,0,1);
   VbbHcc_algoFirst_Sphericity_stack_6->SetBinContent(1,5.271152);
   VbbHcc_algoFirst_Sphericity_stack_6->SetBinContent(2,1.233868);
   VbbHcc_algoFirst_Sphericity_stack_6->SetBinContent(3,0.5527475);
   VbbHcc_algoFirst_Sphericity_stack_6->SetBinError(1,1.407464);
   VbbHcc_algoFirst_Sphericity_stack_6->SetBinError(2,0.6441244);
   VbbHcc_algoFirst_Sphericity_stack_6->SetBinError(3,0.3976066);
   VbbHcc_algoFirst_Sphericity_stack_6->SetEntries(22);

   ci = TColor::GetColor("#9933ff");
   VbbHcc_algoFirst_Sphericity_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algoFirst_Sphericity_stack_6->SetLineColor(ci);
   VbbHcc_algoFirst_Sphericity_stack_6->GetXaxis()->SetRange(1,100);
   VbbHcc_algoFirst_Sphericity_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_algoFirst_Sphericity_stack_6->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algoFirst_Sphericity_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_algoFirst_Sphericity_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_algoFirst_Sphericity_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_algoFirst_Sphericity_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_algoFirst_Sphericity_stack_6->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algoFirst_Sphericity_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algoFirst_Sphericity_stack_6,"");
   
   TH1D *VbbHcc_algoFirst_Sphericity_stack_7 = new TH1D("VbbHcc_algoFirst_Sphericity_stack_7","",25,0,1);
   VbbHcc_algoFirst_Sphericity_stack_7->SetBinContent(1,9.960923);
   VbbHcc_algoFirst_Sphericity_stack_7->SetBinContent(2,8.890362);
   VbbHcc_algoFirst_Sphericity_stack_7->SetBinContent(3,3.801409);
   VbbHcc_algoFirst_Sphericity_stack_7->SetBinContent(4,2.647066);
   VbbHcc_algoFirst_Sphericity_stack_7->SetBinContent(5,2.361088);
   VbbHcc_algoFirst_Sphericity_stack_7->SetBinContent(6,1.563376);
   VbbHcc_algoFirst_Sphericity_stack_7->SetBinContent(7,0.3812585);
   VbbHcc_algoFirst_Sphericity_stack_7->SetBinError(1,2.219123);
   VbbHcc_algoFirst_Sphericity_stack_7->SetBinError(2,1.710624);
   VbbHcc_algoFirst_Sphericity_stack_7->SetBinError(3,1.133637);
   VbbHcc_algoFirst_Sphericity_stack_7->SetBinError(4,1.091525);
   VbbHcc_algoFirst_Sphericity_stack_7->SetBinError(5,0.8364992);
   VbbHcc_algoFirst_Sphericity_stack_7->SetBinError(6,0.7006574);
   VbbHcc_algoFirst_Sphericity_stack_7->SetBinError(7,0.3812585);
   VbbHcc_algoFirst_Sphericity_stack_7->SetEntries(106);

   ci = TColor::GetColor("#3399ff");
   VbbHcc_algoFirst_Sphericity_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algoFirst_Sphericity_stack_7->SetLineColor(ci);
   VbbHcc_algoFirst_Sphericity_stack_7->GetXaxis()->SetRange(1,100);
   VbbHcc_algoFirst_Sphericity_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_algoFirst_Sphericity_stack_7->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algoFirst_Sphericity_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_algoFirst_Sphericity_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_algoFirst_Sphericity_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_algoFirst_Sphericity_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_algoFirst_Sphericity_stack_7->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algoFirst_Sphericity_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algoFirst_Sphericity_stack_7,"");
   
   TH1D *VbbHcc_algoFirst_Sphericity_stack_8 = new TH1D("VbbHcc_algoFirst_Sphericity_stack_8","",25,0,1);
   VbbHcc_algoFirst_Sphericity_stack_8->SetBinContent(1,6.900242);
   VbbHcc_algoFirst_Sphericity_stack_8->SetBinContent(2,5.887916);
   VbbHcc_algoFirst_Sphericity_stack_8->SetBinContent(3,2.790833);
   VbbHcc_algoFirst_Sphericity_stack_8->SetBinContent(4,4.131587);
   VbbHcc_algoFirst_Sphericity_stack_8->SetBinContent(5,1.909999);
   VbbHcc_algoFirst_Sphericity_stack_8->SetBinContent(6,0.6510844);
   VbbHcc_algoFirst_Sphericity_stack_8->SetBinError(1,2.070702);
   VbbHcc_algoFirst_Sphericity_stack_8->SetBinError(2,1.997523);
   VbbHcc_algoFirst_Sphericity_stack_8->SetBinError(3,1.290398);
   VbbHcc_algoFirst_Sphericity_stack_8->SetBinError(4,2.202695);
   VbbHcc_algoFirst_Sphericity_stack_8->SetBinError(5,0.959284);
   VbbHcc_algoFirst_Sphericity_stack_8->SetBinError(6,0.6510844);
   VbbHcc_algoFirst_Sphericity_stack_8->SetEntries(40);

   ci = TColor::GetColor("#33ff99");
   VbbHcc_algoFirst_Sphericity_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algoFirst_Sphericity_stack_8->SetLineColor(ci);
   VbbHcc_algoFirst_Sphericity_stack_8->GetXaxis()->SetRange(1,100);
   VbbHcc_algoFirst_Sphericity_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_algoFirst_Sphericity_stack_8->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algoFirst_Sphericity_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_algoFirst_Sphericity_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_algoFirst_Sphericity_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_algoFirst_Sphericity_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_algoFirst_Sphericity_stack_8->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algoFirst_Sphericity_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algoFirst_Sphericity_stack_8,"");
   
   TH1D *VbbHcc_algoFirst_Sphericity_stack_9 = new TH1D("VbbHcc_algoFirst_Sphericity_stack_9","",25,0,1);
   VbbHcc_algoFirst_Sphericity_stack_9->SetBinContent(1,3.027673);
   VbbHcc_algoFirst_Sphericity_stack_9->SetBinContent(2,2.637292);
   VbbHcc_algoFirst_Sphericity_stack_9->SetBinContent(3,1.478633);
   VbbHcc_algoFirst_Sphericity_stack_9->SetBinContent(4,1.001933);
   VbbHcc_algoFirst_Sphericity_stack_9->SetBinContent(5,0.7392188);
   VbbHcc_algoFirst_Sphericity_stack_9->SetBinContent(6,0.3162555);
   VbbHcc_algoFirst_Sphericity_stack_9->SetBinContent(7,0.1039204);
   VbbHcc_algoFirst_Sphericity_stack_9->SetBinContent(8,0.009060017);
   VbbHcc_algoFirst_Sphericity_stack_9->SetBinContent(9,0.00453838);
   VbbHcc_algoFirst_Sphericity_stack_9->SetBinContent(11,0.003595219);
   VbbHcc_algoFirst_Sphericity_stack_9->SetBinError(1,0.08585549);
   VbbHcc_algoFirst_Sphericity_stack_9->SetBinError(2,0.07728048);
   VbbHcc_algoFirst_Sphericity_stack_9->SetBinError(3,0.0588965);
   VbbHcc_algoFirst_Sphericity_stack_9->SetBinError(4,0.04753909);
   VbbHcc_algoFirst_Sphericity_stack_9->SetBinError(5,0.04313457);
   VbbHcc_algoFirst_Sphericity_stack_9->SetBinError(6,0.02848847);
   VbbHcc_algoFirst_Sphericity_stack_9->SetBinError(7,0.01673376);
   VbbHcc_algoFirst_Sphericity_stack_9->SetBinError(8,0.0038761);
   VbbHcc_algoFirst_Sphericity_stack_9->SetBinError(9,0.003224413);
   VbbHcc_algoFirst_Sphericity_stack_9->SetBinError(11,0.002864283);
   VbbHcc_algoFirst_Sphericity_stack_9->SetEntries(5585);

   ci = TColor::GetColor("#cccc00");
   VbbHcc_algoFirst_Sphericity_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algoFirst_Sphericity_stack_9->SetLineColor(ci);
   VbbHcc_algoFirst_Sphericity_stack_9->GetXaxis()->SetRange(1,100);
   VbbHcc_algoFirst_Sphericity_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_algoFirst_Sphericity_stack_9->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algoFirst_Sphericity_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_algoFirst_Sphericity_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_algoFirst_Sphericity_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_algoFirst_Sphericity_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_algoFirst_Sphericity_stack_9->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algoFirst_Sphericity_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algoFirst_Sphericity_stack_9,"");
   
   TH1D *VbbHcc_algoFirst_Sphericity_stack_10 = new TH1D("VbbHcc_algoFirst_Sphericity_stack_10","",25,0,1);
   VbbHcc_algoFirst_Sphericity_stack_10->SetBinContent(1,1.813763);
   VbbHcc_algoFirst_Sphericity_stack_10->SetBinContent(2,1.725958);
   VbbHcc_algoFirst_Sphericity_stack_10->SetBinContent(3,0.9981015);
   VbbHcc_algoFirst_Sphericity_stack_10->SetBinContent(4,0.6071419);
   VbbHcc_algoFirst_Sphericity_stack_10->SetBinContent(5,0.345985);
   VbbHcc_algoFirst_Sphericity_stack_10->SetBinContent(6,0.1680057);
   VbbHcc_algoFirst_Sphericity_stack_10->SetBinContent(7,0.05204085);
   VbbHcc_algoFirst_Sphericity_stack_10->SetBinContent(8,0.01505307);
   VbbHcc_algoFirst_Sphericity_stack_10->SetBinContent(9,0.003612821);
   VbbHcc_algoFirst_Sphericity_stack_10->SetBinContent(10,0.002130972);
   VbbHcc_algoFirst_Sphericity_stack_10->SetBinContent(11,0.001189987);
   VbbHcc_algoFirst_Sphericity_stack_10->SetBinContent(12,0.001080968);
   VbbHcc_algoFirst_Sphericity_stack_10->SetBinContent(13,0.001178798);
   VbbHcc_algoFirst_Sphericity_stack_10->SetBinContent(14,0.0004499704);
   VbbHcc_algoFirst_Sphericity_stack_10->SetBinContent(16,0.0002855692);
   VbbHcc_algoFirst_Sphericity_stack_10->SetBinContent(18,0.0003545441);
   VbbHcc_algoFirst_Sphericity_stack_10->SetBinError(1,0.02606992);
   VbbHcc_algoFirst_Sphericity_stack_10->SetBinError(2,0.02522688);
   VbbHcc_algoFirst_Sphericity_stack_10->SetBinError(3,0.01930598);
   VbbHcc_algoFirst_Sphericity_stack_10->SetBinError(4,0.01509346);
   VbbHcc_algoFirst_Sphericity_stack_10->SetBinError(5,0.01133568);
   VbbHcc_algoFirst_Sphericity_stack_10->SetBinError(6,0.007973843);
   VbbHcc_algoFirst_Sphericity_stack_10->SetBinError(7,0.004420516);
   VbbHcc_algoFirst_Sphericity_stack_10->SetBinError(8,0.002293057);
   VbbHcc_algoFirst_Sphericity_stack_10->SetBinError(9,0.001167986);
   VbbHcc_algoFirst_Sphericity_stack_10->SetBinError(10,0.0008960202);
   VbbHcc_algoFirst_Sphericity_stack_10->SetBinError(11,0.0007016547);
   VbbHcc_algoFirst_Sphericity_stack_10->SetBinError(12,0.000544703);
   VbbHcc_algoFirst_Sphericity_stack_10->SetBinError(13,0.0005908353);
   VbbHcc_algoFirst_Sphericity_stack_10->SetBinError(14,0.0004499704);
   VbbHcc_algoFirst_Sphericity_stack_10->SetBinError(16,0.0002855692);
   VbbHcc_algoFirst_Sphericity_stack_10->SetBinError(18,0.0003545441);
   VbbHcc_algoFirst_Sphericity_stack_10->SetEntries(16167);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_algoFirst_Sphericity_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algoFirst_Sphericity_stack_10->SetLineColor(ci);
   VbbHcc_algoFirst_Sphericity_stack_10->GetXaxis()->SetRange(1,100);
   VbbHcc_algoFirst_Sphericity_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_algoFirst_Sphericity_stack_10->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algoFirst_Sphericity_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_algoFirst_Sphericity_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_algoFirst_Sphericity_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_algoFirst_Sphericity_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_algoFirst_Sphericity_stack_10->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algoFirst_Sphericity_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algoFirst_Sphericity_stack_10,"");
   
   TH1D *VbbHcc_algoFirst_Sphericity_stack_11 = new TH1D("VbbHcc_algoFirst_Sphericity_stack_11","",25,0,1);
   VbbHcc_algoFirst_Sphericity_stack_11->SetBinContent(1,0.1446991);
   VbbHcc_algoFirst_Sphericity_stack_11->SetBinContent(2,0.09102403);
   VbbHcc_algoFirst_Sphericity_stack_11->SetBinContent(3,0.0663015);
   VbbHcc_algoFirst_Sphericity_stack_11->SetBinContent(4,0.03542863);
   VbbHcc_algoFirst_Sphericity_stack_11->SetBinContent(5,0.03164847);
   VbbHcc_algoFirst_Sphericity_stack_11->SetBinContent(6,0.01275209);
   VbbHcc_algoFirst_Sphericity_stack_11->SetBinContent(9,0.002732593);
   VbbHcc_algoFirst_Sphericity_stack_11->SetBinError(1,0.01594711);
   VbbHcc_algoFirst_Sphericity_stack_11->SetBinError(2,0.01318334);
   VbbHcc_algoFirst_Sphericity_stack_11->SetBinError(3,0.01161366);
   VbbHcc_algoFirst_Sphericity_stack_11->SetBinError(4,0.008048887);
   VbbHcc_algoFirst_Sphericity_stack_11->SetBinError(5,0.008380477);
   VbbHcc_algoFirst_Sphericity_stack_11->SetBinError(6,0.004359807);
   VbbHcc_algoFirst_Sphericity_stack_11->SetBinError(9,0.001934563);
   VbbHcc_algoFirst_Sphericity_stack_11->SetEntries(279);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_algoFirst_Sphericity_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algoFirst_Sphericity_stack_11->SetLineColor(ci);
   VbbHcc_algoFirst_Sphericity_stack_11->GetXaxis()->SetRange(1,100);
   VbbHcc_algoFirst_Sphericity_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_algoFirst_Sphericity_stack_11->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algoFirst_Sphericity_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_algoFirst_Sphericity_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_algoFirst_Sphericity_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_algoFirst_Sphericity_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_algoFirst_Sphericity_stack_11->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algoFirst_Sphericity_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algoFirst_Sphericity_stack_11,"");
   
   TH1D *VbbHcc_algoFirst_Sphericity_stack_12 = new TH1D("VbbHcc_algoFirst_Sphericity_stack_12","",25,0,1);
   VbbHcc_algoFirst_Sphericity_stack_12->SetBinContent(1,0.04649333);
   VbbHcc_algoFirst_Sphericity_stack_12->SetBinContent(2,0.05073887);
   VbbHcc_algoFirst_Sphericity_stack_12->SetBinContent(3,0.02321372);
   VbbHcc_algoFirst_Sphericity_stack_12->SetBinContent(4,0.01383632);
   VbbHcc_algoFirst_Sphericity_stack_12->SetBinContent(5,0.01054499);
   VbbHcc_algoFirst_Sphericity_stack_12->SetBinContent(6,0.003726699);
   VbbHcc_algoFirst_Sphericity_stack_12->SetBinContent(7,0.002042038);
   VbbHcc_algoFirst_Sphericity_stack_12->SetBinContent(8,0.001090193);
   VbbHcc_algoFirst_Sphericity_stack_12->SetBinContent(10,0.0002682382);
   VbbHcc_algoFirst_Sphericity_stack_12->SetBinContent(11,0.0002015578);
   VbbHcc_algoFirst_Sphericity_stack_12->SetBinError(1,0.00318616);
   VbbHcc_algoFirst_Sphericity_stack_12->SetBinError(2,0.003300256);
   VbbHcc_algoFirst_Sphericity_stack_12->SetBinError(3,0.002189293);
   VbbHcc_algoFirst_Sphericity_stack_12->SetBinError(4,0.001722008);
   VbbHcc_algoFirst_Sphericity_stack_12->SetBinError(5,0.00145336);
   VbbHcc_algoFirst_Sphericity_stack_12->SetBinError(6,0.0008821391);
   VbbHcc_algoFirst_Sphericity_stack_12->SetBinError(7,0.0007099149);
   VbbHcc_algoFirst_Sphericity_stack_12->SetBinError(8,0.0004596499);
   VbbHcc_algoFirst_Sphericity_stack_12->SetBinError(10,0.0002682382);
   VbbHcc_algoFirst_Sphericity_stack_12->SetBinError(11,0.0002015578);
   VbbHcc_algoFirst_Sphericity_stack_12->SetEntries(816);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_algoFirst_Sphericity_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algoFirst_Sphericity_stack_12->SetLineColor(ci);
   VbbHcc_algoFirst_Sphericity_stack_12->GetXaxis()->SetRange(1,100);
   VbbHcc_algoFirst_Sphericity_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_algoFirst_Sphericity_stack_12->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algoFirst_Sphericity_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_algoFirst_Sphericity_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_algoFirst_Sphericity_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_algoFirst_Sphericity_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_algoFirst_Sphericity_stack_12->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algoFirst_Sphericity_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algoFirst_Sphericity_stack_12,"");
   st->Draw("hist");
   
   TH1D *VbbHcc_algoFirst_Sphericity__231 = new TH1D("VbbHcc_algoFirst_Sphericity__231","",25,0,1);
   VbbHcc_algoFirst_Sphericity__231->SetBinContent(1,10179);
   VbbHcc_algoFirst_Sphericity__231->SetBinContent(2,7969);
   VbbHcc_algoFirst_Sphericity__231->SetBinContent(3,4555);
   VbbHcc_algoFirst_Sphericity__231->SetBinContent(4,2596);
   VbbHcc_algoFirst_Sphericity__231->SetBinContent(5,1425);
   VbbHcc_algoFirst_Sphericity__231->SetBinContent(6,597);
   VbbHcc_algoFirst_Sphericity__231->SetBinContent(7,219);
   VbbHcc_algoFirst_Sphericity__231->SetBinContent(8,82);
   VbbHcc_algoFirst_Sphericity__231->SetBinContent(9,36);
   VbbHcc_algoFirst_Sphericity__231->SetBinContent(10,26);
   VbbHcc_algoFirst_Sphericity__231->SetBinContent(11,8);
   VbbHcc_algoFirst_Sphericity__231->SetBinContent(12,8);
   VbbHcc_algoFirst_Sphericity__231->SetBinContent(13,2);
   VbbHcc_algoFirst_Sphericity__231->SetBinContent(14,3);
   VbbHcc_algoFirst_Sphericity__231->SetBinContent(15,3);
   VbbHcc_algoFirst_Sphericity__231->SetBinContent(16,2);
   VbbHcc_algoFirst_Sphericity__231->SetBinContent(17,1);
   VbbHcc_algoFirst_Sphericity__231->SetBinContent(18,1);
   VbbHcc_algoFirst_Sphericity__231->SetEntries(27736);

   ci = TColor::GetColor("#000099");
   VbbHcc_algoFirst_Sphericity__231->SetLineColor(ci);
   VbbHcc_algoFirst_Sphericity__231->SetLineWidth(2);
   VbbHcc_algoFirst_Sphericity__231->SetMarkerStyle(20);
   VbbHcc_algoFirst_Sphericity__231->SetMarkerSize(1.2);
   VbbHcc_algoFirst_Sphericity__231->GetXaxis()->SetRange(1,100);
   VbbHcc_algoFirst_Sphericity__231->GetXaxis()->SetLabelFont(42);
   VbbHcc_algoFirst_Sphericity__231->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algoFirst_Sphericity__231->GetXaxis()->SetTitleFont(42);
   VbbHcc_algoFirst_Sphericity__231->GetYaxis()->SetLabelFont(42);
   VbbHcc_algoFirst_Sphericity__231->GetYaxis()->SetTitleFont(42);
   VbbHcc_algoFirst_Sphericity__231->GetZaxis()->SetLabelFont(42);
   VbbHcc_algoFirst_Sphericity__231->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algoFirst_Sphericity__231->GetZaxis()->SetTitleFont(42);
   VbbHcc_algoFirst_Sphericity__231->Draw("same E");
   
   Double_t Graph_from_VbbHcc_algoFirst_Sphericity_fx1231[25] = { 0.02, 0.06, 0.1, 0.14, 0.18, 0.22, 0.26, 0.3, 0.34, 0.38, 0.42, 0.46, 0.5, 0.54, 0.58, 0.62, 0.66,
   0.7, 0.74, 0.78, 0.82, 0.86, 0.9, 0.94, 0.98 };
   Double_t Graph_from_VbbHcc_algoFirst_Sphericity_fy1231[25] = { 68569.34, 60070.78, 33073.03, 17035.88, 10616.52, 3694.919, 3697.084, 192.6914, 83.728, 43.09707, 27.55362, 35.48048, 18.48412, 6.857565, 2.276338, 1.278296, 2.177885,
   0.683495, 0.3128262, 0.1590136, 0.09101785, 0.02524937, 0.02320079, 0, 0 };
   Double_t Graph_from_VbbHcc_algoFirst_Sphericity_fex1231[25] = { 0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02,
   0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02 };
   Double_t Graph_from_VbbHcc_algoFirst_Sphericity_fey1231[25] = { 3107.668, 3055.383, 2688.384, 1635.488, 1875.395, 793.86, 3197.044, 30.68533, 31.68939, 15.63547, 7.580319, 22.7211, 9.446914, 3.109206, 0.3684592, 0.2606591, 1.184042,
   0.1926457, 0.124343, 0.09565528, 0.07113878, 0.02524937, 0.02320079, 0, 0 };
   TGraphErrors *gre = new TGraphErrors(25,Graph_from_VbbHcc_algoFirst_Sphericity_fx1231,Graph_from_VbbHcc_algoFirst_Sphericity_fy1231,Graph_from_VbbHcc_algoFirst_Sphericity_fex1231,Graph_from_VbbHcc_algoFirst_Sphericity_fey1231);
   gre->SetName("Graph_from_VbbHcc_algoFirst_Sphericity");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_algoFirst_Sphericity1231 = new TH1F("Graph_Graph_from_VbbHcc_algoFirst_Sphericity1231","",100,0,1.1);
   Graph_Graph_from_VbbHcc_algoFirst_Sphericity1231->SetMinimum(-7167.701);
   Graph_Graph_from_VbbHcc_algoFirst_Sphericity1231->SetMaximum(78844.71);
   Graph_Graph_from_VbbHcc_algoFirst_Sphericity1231->SetDirectory(nullptr);
   Graph_Graph_from_VbbHcc_algoFirst_Sphericity1231->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_algoFirst_Sphericity1231->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_algoFirst_Sphericity1231->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_algoFirst_Sphericity1231->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_from_VbbHcc_algoFirst_Sphericity1231->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_algoFirst_Sphericity1231->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_algoFirst_Sphericity1231->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_algoFirst_Sphericity1231->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_algoFirst_Sphericity1231->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_from_VbbHcc_algoFirst_Sphericity1231->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_algoFirst_Sphericity1231);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_algoFirst_Sphericity","Data (JetHT, 2017)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_algoFirst_Sphericity","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_algoFirst_Sphericity","ZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_algoFirst_Sphericity","ggZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_algoFirst_Sphericity","ZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_algoFirst_Sphericity","ZZ","F");

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
   entry=leg->AddEntry("VbbHcc_algoFirst_Sphericity","WZ","F");

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
   entry=leg->AddEntry("VbbHcc_algoFirst_Sphericity","WW","F");

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
   entry=leg->AddEntry("VbbHcc_algoFirst_Sphericity","W + jets","F");

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
   entry=leg->AddEntry("VbbHcc_algoFirst_Sphericity","Z + jets","F");

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
   entry=leg->AddEntry("VbbHcc_algoFirst_Sphericity","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_algoFirst_Sphericity","Single top","F");

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
   entry=leg->AddEntry("VbbHcc_algoFirst_Sphericity","QCD","F");

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
   entry=leg->AddEntry("Graph_from_VbbHcc_algoFirst_Sphericity","MC unc. (stat.)","fl");

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetLineWidth(2);
   tex->Draw();
   topPad->Modified();
   Sphericity_algoFirst_17->cd();
  
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
   data_mc_ratio__232->SetBinContent(1,0.1484483);
   data_mc_ratio__232->SetBinContent(2,0.1326602);
   data_mc_ratio__232->SetBinContent(3,0.1377255);
   data_mc_ratio__232->SetBinContent(4,0.1523843);
   data_mc_ratio__232->SetBinContent(5,0.1342248);
   data_mc_ratio__232->SetBinContent(6,0.1615732);
   data_mc_ratio__232->SetBinContent(7,0.05923588);
   data_mc_ratio__232->SetBinContent(8,0.4255509);
   data_mc_ratio__232->SetBinContent(9,0.4299637);
   data_mc_ratio__232->SetBinContent(10,0.6032892);
   data_mc_ratio__232->SetBinContent(11,0.2903429);
   data_mc_ratio__232->SetBinContent(12,0.2254761);
   data_mc_ratio__232->SetBinContent(13,0.108201);
   data_mc_ratio__232->SetBinContent(14,0.4374731);
   data_mc_ratio__232->SetBinContent(15,1.317906);
   data_mc_ratio__232->SetBinContent(16,1.564582);
   data_mc_ratio__232->SetBinContent(17,0.4591611);
   data_mc_ratio__232->SetBinContent(18,1.463068);
   data_mc_ratio__232->SetBinError(1,0.001471372);
   data_mc_ratio__232->SetBinError(2,0.001486068);
   data_mc_ratio__232->SetBinError(3,0.002040658);
   data_mc_ratio__232->SetBinError(4,0.002990803);
   data_mc_ratio__232->SetBinError(5,0.003555701);
   data_mc_ratio__232->SetBinError(6,0.006612753);
   data_mc_ratio__232->SetBinError(7,0.00400279);
   data_mc_ratio__232->SetBinError(8,0.04699423);
   data_mc_ratio__232->SetBinError(9,0.07166061);
   data_mc_ratio__232->SetBinError(10,0.1183147);
   data_mc_ratio__232->SetBinError(11,0.1026517);
   data_mc_ratio__232->SetBinError(12,0.07971783);
   data_mc_ratio__232->SetBinError(13,0.07650965);
   data_mc_ratio__232->SetBinError(14,0.2525752);
   data_mc_ratio__232->SetBinError(15,0.7608935);
   data_mc_ratio__232->SetBinError(16,1.106327);
   data_mc_ratio__232->SetBinError(17,0.4591611);
   data_mc_ratio__232->SetBinError(18,1.463068);
   data_mc_ratio__232->SetMinimum(0.4);
   data_mc_ratio__232->SetMaximum(1.6);
   data_mc_ratio__232->SetEntries(14.19773);
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
   Double_t Graph_from_mc_statistical_error_fey1232[25] = { 0.04532153, 0.05086304, 0.08128632, 0.09600258, 0.1766488, 0.2148518, 0.8647475, 0.159246, 0.3784801, 0.3627967, 0.2751115, 0.6403831, 0.5110827, 0.4533979, 0.1618649, 0.2039113, 0.5436659,
   0.2818538, 0.3974825, 0.601554, 0.7815915, 1, 1, 0, 0 };
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
   Sphericity_algoFirst_17->cd();
   Sphericity_algoFirst_17->Modified();
   Sphericity_algoFirst_17->cd();
   Sphericity_algoFirst_17->SetSelected(Sphericity_algoFirst_17);
}
