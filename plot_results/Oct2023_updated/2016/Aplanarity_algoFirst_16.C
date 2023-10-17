#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Aplanarity_algoFirst_16()
{
//=========Macro generated from canvas: Aplanarity_algoFirst_16/Aplanarity_algoFirst_16
//=========  (Tue Oct 17 10:19:57 2023) by ROOT version 6.28/04
   TCanvas *Aplanarity_algoFirst_16 = new TCanvas("Aplanarity_algoFirst_16", "Aplanarity_algoFirst_16",0,0,600,600);
   Aplanarity_algoFirst_16->SetHighLightColor(2);
   Aplanarity_algoFirst_16->Range(0,0,1,1);
   Aplanarity_algoFirst_16->SetFillColor(0);
   Aplanarity_algoFirst_16->SetFillStyle(4000);
   Aplanarity_algoFirst_16->SetBorderMode(0);
   Aplanarity_algoFirst_16->SetBorderSize(2);
   Aplanarity_algoFirst_16->SetFrameFillStyle(1000);
   Aplanarity_algoFirst_16->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.1532254,-722.5017,1.052419,721789.1);
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
   st->SetMaximum(649538);
   
   TH1F *st_stack_118 = new TH1F("st_stack_118","",50,0,1);
   st_stack_118->SetMinimum(0.01);
   st_stack_118->SetMaximum(649538);
   st_stack_118->SetDirectory(nullptr);
   st_stack_118->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_118->SetLineColor(ci);
   st_stack_118->SetLineWidth(0);
   st_stack_118->GetXaxis()->SetRange(1,50);
   st_stack_118->GetXaxis()->SetLabelFont(42);
   st_stack_118->GetXaxis()->SetTitleOffset(1);
   st_stack_118->GetXaxis()->SetTitleFont(42);
   st_stack_118->GetYaxis()->SetTitle("Events/0.02");
   st_stack_118->GetYaxis()->SetLabelFont(42);
   st_stack_118->GetYaxis()->SetLabelSize(0.05);
   st_stack_118->GetYaxis()->SetTitleSize(0.057);
   st_stack_118->GetYaxis()->SetTitleOffset(1.2);
   st_stack_118->GetYaxis()->SetTitleFont(42);
   st_stack_118->GetZaxis()->SetLabelFont(42);
   st_stack_118->GetZaxis()->SetTitleOffset(1);
   st_stack_118->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_118);
   
   
   TH1D *VbbHcc_algoFirst_Aplanarity_stack_1 = new TH1D("VbbHcc_algoFirst_Aplanarity_stack_1","",50,0,1);
   VbbHcc_algoFirst_Aplanarity_stack_1->SetBinContent(1,269664);
   VbbHcc_algoFirst_Aplanarity_stack_1->SetBinContent(2,45549.41);
   VbbHcc_algoFirst_Aplanarity_stack_1->SetBinContent(3,7355.327);
   VbbHcc_algoFirst_Aplanarity_stack_1->SetBinContent(4,1616.712);
   VbbHcc_algoFirst_Aplanarity_stack_1->SetBinContent(5,60.93);
   VbbHcc_algoFirst_Aplanarity_stack_1->SetBinContent(6,240.4466);
   VbbHcc_algoFirst_Aplanarity_stack_1->SetBinContent(8,14.62684);
   VbbHcc_algoFirst_Aplanarity_stack_1->SetBinError(1,8221.01);
   VbbHcc_algoFirst_Aplanarity_stack_1->SetBinError(2,15194.37);
   VbbHcc_algoFirst_Aplanarity_stack_1->SetBinError(3,1729.511);
   VbbHcc_algoFirst_Aplanarity_stack_1->SetBinError(4,517.3774);
   VbbHcc_algoFirst_Aplanarity_stack_1->SetBinError(5,31.51063);
   VbbHcc_algoFirst_Aplanarity_stack_1->SetBinError(6,240.4466);
   VbbHcc_algoFirst_Aplanarity_stack_1->SetBinError(8,14.62684);
   VbbHcc_algoFirst_Aplanarity_stack_1->SetEntries(16028);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_algoFirst_Aplanarity_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algoFirst_Aplanarity_stack_1->SetLineColor(ci);
   VbbHcc_algoFirst_Aplanarity_stack_1->GetXaxis()->SetRange(1,100);
   VbbHcc_algoFirst_Aplanarity_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_algoFirst_Aplanarity_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algoFirst_Aplanarity_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_algoFirst_Aplanarity_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_algoFirst_Aplanarity_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_algoFirst_Aplanarity_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_algoFirst_Aplanarity_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algoFirst_Aplanarity_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algoFirst_Aplanarity_stack_1,"");
   
   TH1D *VbbHcc_algoFirst_Aplanarity_stack_2 = new TH1D("VbbHcc_algoFirst_Aplanarity_stack_2","",50,0,1);
   VbbHcc_algoFirst_Aplanarity_stack_2->SetBinContent(1,1642.049);
   VbbHcc_algoFirst_Aplanarity_stack_2->SetBinContent(2,228.2777);
   VbbHcc_algoFirst_Aplanarity_stack_2->SetBinContent(3,49.61904);
   VbbHcc_algoFirst_Aplanarity_stack_2->SetBinContent(4,12.09069);
   VbbHcc_algoFirst_Aplanarity_stack_2->SetBinContent(5,3.262766);
   VbbHcc_algoFirst_Aplanarity_stack_2->SetBinContent(6,1.147527);
   VbbHcc_algoFirst_Aplanarity_stack_2->SetBinContent(7,0.4985567);
   VbbHcc_algoFirst_Aplanarity_stack_2->SetBinContent(8,0.3216827);
   VbbHcc_algoFirst_Aplanarity_stack_2->SetBinContent(9,0.1840233);
   VbbHcc_algoFirst_Aplanarity_stack_2->SetBinContent(10,0.0235035);
   VbbHcc_algoFirst_Aplanarity_stack_2->SetBinContent(11,0.06515135);
   VbbHcc_algoFirst_Aplanarity_stack_2->SetBinContent(12,0.0311978);
   VbbHcc_algoFirst_Aplanarity_stack_2->SetBinError(1,14.83487);
   VbbHcc_algoFirst_Aplanarity_stack_2->SetBinError(2,5.282527);
   VbbHcc_algoFirst_Aplanarity_stack_2->SetBinError(3,2.474185);
   VbbHcc_algoFirst_Aplanarity_stack_2->SetBinError(4,1.260054);
   VbbHcc_algoFirst_Aplanarity_stack_2->SetBinError(5,0.627265);
   VbbHcc_algoFirst_Aplanarity_stack_2->SetBinError(6,0.3595297);
   VbbHcc_algoFirst_Aplanarity_stack_2->SetBinError(7,0.2911661);
   VbbHcc_algoFirst_Aplanarity_stack_2->SetBinError(8,0.1915309);
   VbbHcc_algoFirst_Aplanarity_stack_2->SetBinError(9,0.08385999);
   VbbHcc_algoFirst_Aplanarity_stack_2->SetBinError(10,0.0235035);
   VbbHcc_algoFirst_Aplanarity_stack_2->SetBinError(11,0.04703175);
   VbbHcc_algoFirst_Aplanarity_stack_2->SetBinError(12,0.0311978);
   VbbHcc_algoFirst_Aplanarity_stack_2->SetEntries(39142);

   ci = TColor::GetColor("#660066");
   VbbHcc_algoFirst_Aplanarity_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algoFirst_Aplanarity_stack_2->SetLineColor(ci);
   VbbHcc_algoFirst_Aplanarity_stack_2->GetXaxis()->SetRange(1,100);
   VbbHcc_algoFirst_Aplanarity_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_algoFirst_Aplanarity_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algoFirst_Aplanarity_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_algoFirst_Aplanarity_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_algoFirst_Aplanarity_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_algoFirst_Aplanarity_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_algoFirst_Aplanarity_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algoFirst_Aplanarity_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algoFirst_Aplanarity_stack_2,"");
   
   TH1D *VbbHcc_algoFirst_Aplanarity_stack_3 = new TH1D("VbbHcc_algoFirst_Aplanarity_stack_3","",50,0,1);
   VbbHcc_algoFirst_Aplanarity_stack_3->SetBinContent(1,18019.89);
   VbbHcc_algoFirst_Aplanarity_stack_3->SetBinContent(2,2638.887);
   VbbHcc_algoFirst_Aplanarity_stack_3->SetBinContent(3,607.1206);
   VbbHcc_algoFirst_Aplanarity_stack_3->SetBinContent(4,177.6719);
   VbbHcc_algoFirst_Aplanarity_stack_3->SetBinContent(5,63.00097);
   VbbHcc_algoFirst_Aplanarity_stack_3->SetBinContent(6,24.9722);
   VbbHcc_algoFirst_Aplanarity_stack_3->SetBinContent(7,10.92402);
   VbbHcc_algoFirst_Aplanarity_stack_3->SetBinContent(8,4.330357);
   VbbHcc_algoFirst_Aplanarity_stack_3->SetBinContent(9,2.450181);
   VbbHcc_algoFirst_Aplanarity_stack_3->SetBinContent(10,1.38027);
   VbbHcc_algoFirst_Aplanarity_stack_3->SetBinContent(11,0.8241112);
   VbbHcc_algoFirst_Aplanarity_stack_3->SetBinContent(12,0.4701235);
   VbbHcc_algoFirst_Aplanarity_stack_3->SetBinContent(13,0.2760133);
   VbbHcc_algoFirst_Aplanarity_stack_3->SetBinContent(14,0.09497187);
   VbbHcc_algoFirst_Aplanarity_stack_3->SetBinContent(15,0.1758826);
   VbbHcc_algoFirst_Aplanarity_stack_3->SetBinError(1,30.87061);
   VbbHcc_algoFirst_Aplanarity_stack_3->SetBinError(2,11.66021);
   VbbHcc_algoFirst_Aplanarity_stack_3->SetBinError(3,5.545393);
   VbbHcc_algoFirst_Aplanarity_stack_3->SetBinError(4,2.9916);
   VbbHcc_algoFirst_Aplanarity_stack_3->SetBinError(5,1.767205);
   VbbHcc_algoFirst_Aplanarity_stack_3->SetBinError(6,1.088964);
   VbbHcc_algoFirst_Aplanarity_stack_3->SetBinError(7,0.7145132);
   VbbHcc_algoFirst_Aplanarity_stack_3->SetBinError(8,0.4360527);
   VbbHcc_algoFirst_Aplanarity_stack_3->SetBinError(9,0.3236825);
   VbbHcc_algoFirst_Aplanarity_stack_3->SetBinError(10,0.2468743);
   VbbHcc_algoFirst_Aplanarity_stack_3->SetBinError(11,0.1995436);
   VbbHcc_algoFirst_Aplanarity_stack_3->SetBinError(12,0.1468642);
   VbbHcc_algoFirst_Aplanarity_stack_3->SetBinError(13,0.1172286);
   VbbHcc_algoFirst_Aplanarity_stack_3->SetBinError(14,0.05516273);
   VbbHcc_algoFirst_Aplanarity_stack_3->SetBinError(15,0.09021371);
   VbbHcc_algoFirst_Aplanarity_stack_3->SetEntries(446959);

   ci = TColor::GetColor("#cc00cc");
   VbbHcc_algoFirst_Aplanarity_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algoFirst_Aplanarity_stack_3->SetLineColor(ci);
   VbbHcc_algoFirst_Aplanarity_stack_3->GetXaxis()->SetRange(1,100);
   VbbHcc_algoFirst_Aplanarity_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_algoFirst_Aplanarity_stack_3->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algoFirst_Aplanarity_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_algoFirst_Aplanarity_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_algoFirst_Aplanarity_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_algoFirst_Aplanarity_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_algoFirst_Aplanarity_stack_3->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algoFirst_Aplanarity_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algoFirst_Aplanarity_stack_3,"");
   
   TH1D *VbbHcc_algoFirst_Aplanarity_stack_4 = new TH1D("VbbHcc_algoFirst_Aplanarity_stack_4","",50,0,1);
   VbbHcc_algoFirst_Aplanarity_stack_4->SetBinContent(1,1868.05);
   VbbHcc_algoFirst_Aplanarity_stack_4->SetBinContent(2,172.3176);
   VbbHcc_algoFirst_Aplanarity_stack_4->SetBinContent(3,35.59537);
   VbbHcc_algoFirst_Aplanarity_stack_4->SetBinContent(4,5.864573);
   VbbHcc_algoFirst_Aplanarity_stack_4->SetBinContent(5,1.918619);
   VbbHcc_algoFirst_Aplanarity_stack_4->SetBinContent(6,0.1724388);
   VbbHcc_algoFirst_Aplanarity_stack_4->SetBinContent(7,0.08773462);
   VbbHcc_algoFirst_Aplanarity_stack_4->SetBinContent(11,0.05088052);
   VbbHcc_algoFirst_Aplanarity_stack_4->SetBinError(1,30.91016);
   VbbHcc_algoFirst_Aplanarity_stack_4->SetBinError(2,10.61645);
   VbbHcc_algoFirst_Aplanarity_stack_4->SetBinError(3,5.072953);
   VbbHcc_algoFirst_Aplanarity_stack_4->SetBinError(4,2.15729);
   VbbHcc_algoFirst_Aplanarity_stack_4->SetBinError(5,0.53361);
   VbbHcc_algoFirst_Aplanarity_stack_4->SetBinError(6,0.1230358);
   VbbHcc_algoFirst_Aplanarity_stack_4->SetBinError(7,0.07187431);
   VbbHcc_algoFirst_Aplanarity_stack_4->SetBinError(11,0.05088052);
   VbbHcc_algoFirst_Aplanarity_stack_4->SetEntries(15860);

   ci = TColor::GetColor("#00cccc");
   VbbHcc_algoFirst_Aplanarity_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algoFirst_Aplanarity_stack_4->SetLineColor(ci);
   VbbHcc_algoFirst_Aplanarity_stack_4->GetXaxis()->SetRange(1,100);
   VbbHcc_algoFirst_Aplanarity_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_algoFirst_Aplanarity_stack_4->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algoFirst_Aplanarity_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_algoFirst_Aplanarity_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_algoFirst_Aplanarity_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_algoFirst_Aplanarity_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_algoFirst_Aplanarity_stack_4->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algoFirst_Aplanarity_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algoFirst_Aplanarity_stack_4,"");
   
   TH1D *VbbHcc_algoFirst_Aplanarity_stack_5 = new TH1D("VbbHcc_algoFirst_Aplanarity_stack_5","",50,0,1);
   VbbHcc_algoFirst_Aplanarity_stack_5->SetBinContent(1,1009.582);
   VbbHcc_algoFirst_Aplanarity_stack_5->SetBinContent(2,99.23362);
   VbbHcc_algoFirst_Aplanarity_stack_5->SetBinContent(3,31.77187);
   VbbHcc_algoFirst_Aplanarity_stack_5->SetBinContent(4,1.872641);
   VbbHcc_algoFirst_Aplanarity_stack_5->SetBinContent(5,2.260919);
   VbbHcc_algoFirst_Aplanarity_stack_5->SetBinContent(6,0.1484934);
   VbbHcc_algoFirst_Aplanarity_stack_5->SetBinError(1,36.60547);
   VbbHcc_algoFirst_Aplanarity_stack_5->SetBinError(2,11.54603);
   VbbHcc_algoFirst_Aplanarity_stack_5->SetBinError(3,10.74232);
   VbbHcc_algoFirst_Aplanarity_stack_5->SetBinError(4,0.8268874);
   VbbHcc_algoFirst_Aplanarity_stack_5->SetBinError(5,1.460974);
   VbbHcc_algoFirst_Aplanarity_stack_5->SetBinError(6,0.1480974);
   VbbHcc_algoFirst_Aplanarity_stack_5->SetEntries(9388);

   ci = TColor::GetColor("#ff99cc");
   VbbHcc_algoFirst_Aplanarity_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algoFirst_Aplanarity_stack_5->SetLineColor(ci);
   VbbHcc_algoFirst_Aplanarity_stack_5->GetXaxis()->SetRange(1,100);
   VbbHcc_algoFirst_Aplanarity_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_algoFirst_Aplanarity_stack_5->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algoFirst_Aplanarity_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_algoFirst_Aplanarity_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_algoFirst_Aplanarity_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_algoFirst_Aplanarity_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_algoFirst_Aplanarity_stack_5->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algoFirst_Aplanarity_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algoFirst_Aplanarity_stack_5,"");
   
   TH1D *VbbHcc_algoFirst_Aplanarity_stack_6 = new TH1D("VbbHcc_algoFirst_Aplanarity_stack_6","",50,0,1);
   VbbHcc_algoFirst_Aplanarity_stack_6->SetBinContent(1,5.860264);
   VbbHcc_algoFirst_Aplanarity_stack_6->SetBinContent(2,0.5570441);
   VbbHcc_algoFirst_Aplanarity_stack_6->SetBinError(1,0.8240586);
   VbbHcc_algoFirst_Aplanarity_stack_6->SetBinError(2,0.2525802);
   VbbHcc_algoFirst_Aplanarity_stack_6->SetEntries(57);

   ci = TColor::GetColor("#9933ff");
   VbbHcc_algoFirst_Aplanarity_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algoFirst_Aplanarity_stack_6->SetLineColor(ci);
   VbbHcc_algoFirst_Aplanarity_stack_6->GetXaxis()->SetRange(1,100);
   VbbHcc_algoFirst_Aplanarity_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_algoFirst_Aplanarity_stack_6->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algoFirst_Aplanarity_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_algoFirst_Aplanarity_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_algoFirst_Aplanarity_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_algoFirst_Aplanarity_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_algoFirst_Aplanarity_stack_6->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algoFirst_Aplanarity_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algoFirst_Aplanarity_stack_6,"");
   
   TH1D *VbbHcc_algoFirst_Aplanarity_stack_7 = new TH1D("VbbHcc_algoFirst_Aplanarity_stack_7","",50,0,1);
   VbbHcc_algoFirst_Aplanarity_stack_7->SetBinContent(1,39.54751);
   VbbHcc_algoFirst_Aplanarity_stack_7->SetBinContent(2,2.601726);
   VbbHcc_algoFirst_Aplanarity_stack_7->SetBinContent(3,0.1567323);
   VbbHcc_algoFirst_Aplanarity_stack_7->SetBinContent(4,0.1732408);
   VbbHcc_algoFirst_Aplanarity_stack_7->SetBinContent(6,0.07703467);
   VbbHcc_algoFirst_Aplanarity_stack_7->SetBinError(1,1.958238);
   VbbHcc_algoFirst_Aplanarity_stack_7->SetBinError(2,0.4887074);
   VbbHcc_algoFirst_Aplanarity_stack_7->SetBinError(3,0.1115058);
   VbbHcc_algoFirst_Aplanarity_stack_7->SetBinError(4,0.1235578);
   VbbHcc_algoFirst_Aplanarity_stack_7->SetBinError(6,0.07703467);
   VbbHcc_algoFirst_Aplanarity_stack_7->SetEntries(458);

   ci = TColor::GetColor("#3399ff");
   VbbHcc_algoFirst_Aplanarity_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algoFirst_Aplanarity_stack_7->SetLineColor(ci);
   VbbHcc_algoFirst_Aplanarity_stack_7->GetXaxis()->SetRange(1,100);
   VbbHcc_algoFirst_Aplanarity_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_algoFirst_Aplanarity_stack_7->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algoFirst_Aplanarity_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_algoFirst_Aplanarity_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_algoFirst_Aplanarity_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_algoFirst_Aplanarity_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_algoFirst_Aplanarity_stack_7->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algoFirst_Aplanarity_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algoFirst_Aplanarity_stack_7,"");
   
   TH1D *VbbHcc_algoFirst_Aplanarity_stack_8 = new TH1D("VbbHcc_algoFirst_Aplanarity_stack_8","",50,0,1);
   VbbHcc_algoFirst_Aplanarity_stack_8->SetBinContent(1,27.32438);
   VbbHcc_algoFirst_Aplanarity_stack_8->SetBinContent(2,2.589931);
   VbbHcc_algoFirst_Aplanarity_stack_8->SetBinContent(3,0.7835316);
   VbbHcc_algoFirst_Aplanarity_stack_8->SetBinContent(4,0.1944335);
   VbbHcc_algoFirst_Aplanarity_stack_8->SetBinContent(6,0.2448065);
   VbbHcc_algoFirst_Aplanarity_stack_8->SetBinError(1,2.385042);
   VbbHcc_algoFirst_Aplanarity_stack_8->SetBinError(2,0.7326406);
   VbbHcc_algoFirst_Aplanarity_stack_8->SetBinError(3,0.4679798);
   VbbHcc_algoFirst_Aplanarity_stack_8->SetBinError(4,0.1944335);
   VbbHcc_algoFirst_Aplanarity_stack_8->SetBinError(6,0.2448065);
   VbbHcc_algoFirst_Aplanarity_stack_8->SetEntries(156);

   ci = TColor::GetColor("#33ff99");
   VbbHcc_algoFirst_Aplanarity_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algoFirst_Aplanarity_stack_8->SetLineColor(ci);
   VbbHcc_algoFirst_Aplanarity_stack_8->GetXaxis()->SetRange(1,100);
   VbbHcc_algoFirst_Aplanarity_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_algoFirst_Aplanarity_stack_8->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algoFirst_Aplanarity_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_algoFirst_Aplanarity_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_algoFirst_Aplanarity_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_algoFirst_Aplanarity_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_algoFirst_Aplanarity_stack_8->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algoFirst_Aplanarity_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algoFirst_Aplanarity_stack_8,"");
   
   TH1D *VbbHcc_algoFirst_Aplanarity_stack_9 = new TH1D("VbbHcc_algoFirst_Aplanarity_stack_9","",50,0,1);
   VbbHcc_algoFirst_Aplanarity_stack_9->SetBinContent(1,10.82892);
   VbbHcc_algoFirst_Aplanarity_stack_9->SetBinContent(2,0.8803272);
   VbbHcc_algoFirst_Aplanarity_stack_9->SetBinContent(3,0.1390507);
   VbbHcc_algoFirst_Aplanarity_stack_9->SetBinContent(4,0.03090753);
   VbbHcc_algoFirst_Aplanarity_stack_9->SetBinContent(5,0.008679934);
   VbbHcc_algoFirst_Aplanarity_stack_9->SetBinContent(6,0.001148691);
   VbbHcc_algoFirst_Aplanarity_stack_9->SetBinContent(8,0.002923076);
   VbbHcc_algoFirst_Aplanarity_stack_9->SetBinError(1,0.1159885);
   VbbHcc_algoFirst_Aplanarity_stack_9->SetBinError(2,0.03221736);
   VbbHcc_algoFirst_Aplanarity_stack_9->SetBinError(3,0.01285977);
   VbbHcc_algoFirst_Aplanarity_stack_9->SetBinError(4,0.006381356);
   VbbHcc_algoFirst_Aplanarity_stack_9->SetBinError(5,0.003104087);
   VbbHcc_algoFirst_Aplanarity_stack_9->SetBinError(6,0.001148691);
   VbbHcc_algoFirst_Aplanarity_stack_9->SetBinError(8,0.001696236);
   VbbHcc_algoFirst_Aplanarity_stack_9->SetEntries(10635);

   ci = TColor::GetColor("#cccc00");
   VbbHcc_algoFirst_Aplanarity_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algoFirst_Aplanarity_stack_9->SetLineColor(ci);
   VbbHcc_algoFirst_Aplanarity_stack_9->GetXaxis()->SetRange(1,100);
   VbbHcc_algoFirst_Aplanarity_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_algoFirst_Aplanarity_stack_9->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algoFirst_Aplanarity_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_algoFirst_Aplanarity_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_algoFirst_Aplanarity_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_algoFirst_Aplanarity_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_algoFirst_Aplanarity_stack_9->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algoFirst_Aplanarity_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algoFirst_Aplanarity_stack_9,"");
   
   TH1D *VbbHcc_algoFirst_Aplanarity_stack_10 = new TH1D("VbbHcc_algoFirst_Aplanarity_stack_10","",50,0,1);
   VbbHcc_algoFirst_Aplanarity_stack_10->SetBinContent(1,4.419808);
   VbbHcc_algoFirst_Aplanarity_stack_10->SetBinContent(2,0.4384077);
   VbbHcc_algoFirst_Aplanarity_stack_10->SetBinContent(3,0.07275477);
   VbbHcc_algoFirst_Aplanarity_stack_10->SetBinContent(4,0.01589699);
   VbbHcc_algoFirst_Aplanarity_stack_10->SetBinContent(5,0.003755249);
   VbbHcc_algoFirst_Aplanarity_stack_10->SetBinContent(6,0.001458589);
   VbbHcc_algoFirst_Aplanarity_stack_10->SetBinContent(7,0.0008156359);
   VbbHcc_algoFirst_Aplanarity_stack_10->SetBinContent(8,0.0003061634);
   VbbHcc_algoFirst_Aplanarity_stack_10->SetBinContent(9,0.0003562569);
   VbbHcc_algoFirst_Aplanarity_stack_10->SetBinError(1,0.03776222);
   VbbHcc_algoFirst_Aplanarity_stack_10->SetBinError(2,0.01176304);
   VbbHcc_algoFirst_Aplanarity_stack_10->SetBinError(3,0.004712758);
   VbbHcc_algoFirst_Aplanarity_stack_10->SetBinError(4,0.002245478);
   VbbHcc_algoFirst_Aplanarity_stack_10->SetBinError(5,0.001119182);
   VbbHcc_algoFirst_Aplanarity_stack_10->SetBinError(6,0.0006230525);
   VbbHcc_algoFirst_Aplanarity_stack_10->SetBinError(7,0.0004710047);
   VbbHcc_algoFirst_Aplanarity_stack_10->SetBinError(8,0.0003061634);
   VbbHcc_algoFirst_Aplanarity_stack_10->SetBinError(9,0.0003562569);
   VbbHcc_algoFirst_Aplanarity_stack_10->SetEntries(16167);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_algoFirst_Aplanarity_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algoFirst_Aplanarity_stack_10->SetLineColor(ci);
   VbbHcc_algoFirst_Aplanarity_stack_10->GetXaxis()->SetRange(1,100);
   VbbHcc_algoFirst_Aplanarity_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_algoFirst_Aplanarity_stack_10->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algoFirst_Aplanarity_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_algoFirst_Aplanarity_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_algoFirst_Aplanarity_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_algoFirst_Aplanarity_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_algoFirst_Aplanarity_stack_10->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algoFirst_Aplanarity_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algoFirst_Aplanarity_stack_10,"");
   
   TH1D *VbbHcc_algoFirst_Aplanarity_stack_11 = new TH1D("VbbHcc_algoFirst_Aplanarity_stack_11","",50,0,1);
   VbbHcc_algoFirst_Aplanarity_stack_11->SetBinContent(1,0.4359719);
   VbbHcc_algoFirst_Aplanarity_stack_11->SetBinContent(2,0.01888744);
   VbbHcc_algoFirst_Aplanarity_stack_11->SetBinContent(3,0.003046332);
   VbbHcc_algoFirst_Aplanarity_stack_11->SetBinError(1,0.03091333);
   VbbHcc_algoFirst_Aplanarity_stack_11->SetBinError(2,0.006104278);
   VbbHcc_algoFirst_Aplanarity_stack_11->SetBinError(3,0.002289888);
   VbbHcc_algoFirst_Aplanarity_stack_11->SetEntries(222);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_algoFirst_Aplanarity_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algoFirst_Aplanarity_stack_11->SetLineColor(ci);
   VbbHcc_algoFirst_Aplanarity_stack_11->GetXaxis()->SetRange(1,100);
   VbbHcc_algoFirst_Aplanarity_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_algoFirst_Aplanarity_stack_11->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algoFirst_Aplanarity_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_algoFirst_Aplanarity_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_algoFirst_Aplanarity_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_algoFirst_Aplanarity_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_algoFirst_Aplanarity_stack_11->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algoFirst_Aplanarity_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algoFirst_Aplanarity_stack_11,"");
   
   TH1D *VbbHcc_algoFirst_Aplanarity_stack_12 = new TH1D("VbbHcc_algoFirst_Aplanarity_stack_12","",50,0,1);
   VbbHcc_algoFirst_Aplanarity_stack_12->SetBinContent(1,0.1505543);
   VbbHcc_algoFirst_Aplanarity_stack_12->SetBinContent(2,0.01673917);
   VbbHcc_algoFirst_Aplanarity_stack_12->SetBinContent(3,0.001730014);
   VbbHcc_algoFirst_Aplanarity_stack_12->SetBinContent(4,0.0005086387);
   VbbHcc_algoFirst_Aplanarity_stack_12->SetBinError(1,0.006528398);
   VbbHcc_algoFirst_Aplanarity_stack_12->SetBinError(2,0.002140619);
   VbbHcc_algoFirst_Aplanarity_stack_12->SetBinError(3,0.0007110142);
   VbbHcc_algoFirst_Aplanarity_stack_12->SetBinError(4,0.0003617084);
   VbbHcc_algoFirst_Aplanarity_stack_12->SetEntries(620);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_algoFirst_Aplanarity_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algoFirst_Aplanarity_stack_12->SetLineColor(ci);
   VbbHcc_algoFirst_Aplanarity_stack_12->GetXaxis()->SetRange(1,100);
   VbbHcc_algoFirst_Aplanarity_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_algoFirst_Aplanarity_stack_12->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algoFirst_Aplanarity_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_algoFirst_Aplanarity_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_algoFirst_Aplanarity_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_algoFirst_Aplanarity_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_algoFirst_Aplanarity_stack_12->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algoFirst_Aplanarity_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algoFirst_Aplanarity_stack_12,"");
   st->Draw("hist");
   
   TH1D *VbbHcc_algoFirst_Aplanarity__235 = new TH1D("VbbHcc_algoFirst_Aplanarity__235","",50,0,1);
   VbbHcc_algoFirst_Aplanarity__235->SetBinContent(1,94642);
   VbbHcc_algoFirst_Aplanarity__235->SetBinContent(2,10037);
   VbbHcc_algoFirst_Aplanarity__235->SetBinContent(3,2118);
   VbbHcc_algoFirst_Aplanarity__235->SetBinContent(4,525);
   VbbHcc_algoFirst_Aplanarity__235->SetBinContent(5,134);
   VbbHcc_algoFirst_Aplanarity__235->SetBinContent(6,58);
   VbbHcc_algoFirst_Aplanarity__235->SetBinContent(7,23);
   VbbHcc_algoFirst_Aplanarity__235->SetBinContent(8,9);
   VbbHcc_algoFirst_Aplanarity__235->SetBinContent(9,9);
   VbbHcc_algoFirst_Aplanarity__235->SetBinContent(10,2);
   VbbHcc_algoFirst_Aplanarity__235->SetBinContent(11,2);
   VbbHcc_algoFirst_Aplanarity__235->SetBinContent(12,2);
   VbbHcc_algoFirst_Aplanarity__235->SetBinContent(13,1);
   VbbHcc_algoFirst_Aplanarity__235->SetEntries(107611);

   ci = TColor::GetColor("#000099");
   VbbHcc_algoFirst_Aplanarity__235->SetLineColor(ci);
   VbbHcc_algoFirst_Aplanarity__235->SetLineWidth(2);
   VbbHcc_algoFirst_Aplanarity__235->SetMarkerStyle(20);
   VbbHcc_algoFirst_Aplanarity__235->SetMarkerSize(1.2);
   VbbHcc_algoFirst_Aplanarity__235->GetXaxis()->SetRange(1,100);
   VbbHcc_algoFirst_Aplanarity__235->GetXaxis()->SetLabelFont(42);
   VbbHcc_algoFirst_Aplanarity__235->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algoFirst_Aplanarity__235->GetXaxis()->SetTitleFont(42);
   VbbHcc_algoFirst_Aplanarity__235->GetYaxis()->SetLabelFont(42);
   VbbHcc_algoFirst_Aplanarity__235->GetYaxis()->SetTitleFont(42);
   VbbHcc_algoFirst_Aplanarity__235->GetZaxis()->SetLabelFont(42);
   VbbHcc_algoFirst_Aplanarity__235->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algoFirst_Aplanarity__235->GetZaxis()->SetTitleFont(42);
   VbbHcc_algoFirst_Aplanarity__235->Draw("same E");
   
   Double_t Graph_from_VbbHcc_algoFirst_Aplanarity_fx1235[50] = { 0.01, 0.03, 0.05, 0.07, 0.09, 0.11, 0.13, 0.15, 0.17, 0.19, 0.21, 0.23, 0.25, 0.27, 0.29, 0.31, 0.33,
   0.35, 0.37, 0.39, 0.41, 0.43, 0.45, 0.47, 0.49, 0.51, 0.53, 0.55, 0.57, 0.59, 0.61, 0.63, 0.65,
   0.67, 0.69, 0.71, 0.73, 0.75, 0.77, 0.79, 0.81, 0.83, 0.85, 0.87, 0.89, 0.91, 0.93, 0.95, 0.97,
   0.99 };
   Double_t Graph_from_VbbHcc_algoFirst_Aplanarity_fy1235[50] = { 292292.1, 48695.23, 8080.591, 1814.627, 131.3857, 267.2118, 11.51112, 19.28211, 2.63456, 1.403774, 0.9401431, 0.5013213, 0.2760133, 0.09497187, 0.1758826, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0 };
   Double_t Graph_from_VbbHcc_algoFirst_Aplanarity_fex1235[50] = { 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01 };
   Double_t Graph_from_VbbHcc_algoFirst_Aplanarity_fey1235[50] = { 8221.221, 15194.38, 1729.562, 517.3928, 31.60468, 240.4496, 0.7749019, 14.63459, 0.3343696, 0.2479906, 0.2112308, 0.1501412, 0.1172286, 0.05516273, 0.09021371, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0 };
   TGraphErrors *gre = new TGraphErrors(50,Graph_from_VbbHcc_algoFirst_Aplanarity_fx1235,Graph_from_VbbHcc_algoFirst_Aplanarity_fy1235,Graph_from_VbbHcc_algoFirst_Aplanarity_fex1235,Graph_from_VbbHcc_algoFirst_Aplanarity_fey1235);
   gre->SetName("Graph_from_VbbHcc_algoFirst_Aplanarity");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_algoFirst_Aplanarity1235 = new TH1F("Graph_Graph_from_VbbHcc_algoFirst_Aplanarity1235","",100,0,1.1);
   Graph_Graph_from_VbbHcc_algoFirst_Aplanarity1235->SetMinimum(0);
   Graph_Graph_from_VbbHcc_algoFirst_Aplanarity1235->SetMaximum(330564.6);
   Graph_Graph_from_VbbHcc_algoFirst_Aplanarity1235->SetDirectory(nullptr);
   Graph_Graph_from_VbbHcc_algoFirst_Aplanarity1235->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_algoFirst_Aplanarity1235->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_algoFirst_Aplanarity1235->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_algoFirst_Aplanarity1235->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_from_VbbHcc_algoFirst_Aplanarity1235->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_algoFirst_Aplanarity1235->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_algoFirst_Aplanarity1235->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_algoFirst_Aplanarity1235->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_algoFirst_Aplanarity1235->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_from_VbbHcc_algoFirst_Aplanarity1235->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_algoFirst_Aplanarity1235);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_algoFirst_Aplanarity","Data (JetHT, 2016)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_algoFirst_Aplanarity","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_algoFirst_Aplanarity","ZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_algoFirst_Aplanarity","ggZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_algoFirst_Aplanarity","ZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_algoFirst_Aplanarity","ZZ","F");

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
   entry=leg->AddEntry("VbbHcc_algoFirst_Aplanarity","WZ","F");

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
   entry=leg->AddEntry("VbbHcc_algoFirst_Aplanarity","WW","F");

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
   entry=leg->AddEntry("VbbHcc_algoFirst_Aplanarity","W + jets","F");

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
   entry=leg->AddEntry("VbbHcc_algoFirst_Aplanarity","Z + jets","F");

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
   entry=leg->AddEntry("VbbHcc_algoFirst_Aplanarity","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_algoFirst_Aplanarity","Single top","F");

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
   entry=leg->AddEntry("VbbHcc_algoFirst_Aplanarity","QCD","F");

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
   entry=leg->AddEntry("Graph_from_VbbHcc_algoFirst_Aplanarity","MC unc. (stat.)","fl");

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
   Aplanarity_algoFirst_16->cd();
  
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
   
   TH1D *data_mc_ratio__236 = new TH1D("data_mc_ratio__236","",50,0,1);
   data_mc_ratio__236->SetBinContent(1,0.3237925);
   data_mc_ratio__236->SetBinContent(2,0.2061188);
   data_mc_ratio__236->SetBinContent(3,0.2621096);
   data_mc_ratio__236->SetBinContent(4,0.2893156);
   data_mc_ratio__236->SetBinContent(5,1.019898);
   data_mc_ratio__236->SetBinContent(6,0.2170563);
   data_mc_ratio__236->SetBinContent(7,1.998067);
   data_mc_ratio__236->SetBinContent(8,0.4667539);
   data_mc_ratio__236->SetBinContent(9,3.41613);
   data_mc_ratio__236->SetBinContent(10,1.424731);
   data_mc_ratio__236->SetBinContent(11,2.127336);
   data_mc_ratio__236->SetBinContent(12,3.989457);
   data_mc_ratio__236->SetBinContent(13,3.623014);
   data_mc_ratio__236->SetBinError(1,0.001052507);
   data_mc_ratio__236->SetBinError(2,0.002057385);
   data_mc_ratio__236->SetBinError(3,0.005695343);
   data_mc_ratio__236->SetBinError(4,0.01262677);
   data_mc_ratio__236->SetBinError(5,0.08810575);
   data_mc_ratio__236->SetBinError(6,0.02850089);
   data_mc_ratio__236->SetBinError(7,0.4166258);
   data_mc_ratio__236->SetBinError(8,0.1555846);
   data_mc_ratio__236->SetBinError(9,1.13871);
   data_mc_ratio__236->SetBinError(10,1.007437);
   data_mc_ratio__236->SetBinError(11,1.504254);
   data_mc_ratio__236->SetBinError(12,2.820972);
   data_mc_ratio__236->SetBinError(13,3.623014);
   data_mc_ratio__236->SetMinimum(0.4);
   data_mc_ratio__236->SetMaximum(1.6);
   data_mc_ratio__236->SetEntries(12.33558);
   data_mc_ratio__236->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__236->SetLineColor(ci);
   data_mc_ratio__236->SetLineWidth(2);
   data_mc_ratio__236->SetMarkerStyle(20);
   data_mc_ratio__236->SetMarkerSize(1.2);
   data_mc_ratio__236->GetXaxis()->SetTitle("Aplanarity");
   data_mc_ratio__236->GetXaxis()->SetRange(1,50);
   data_mc_ratio__236->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__236->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__236->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__236->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__236->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__236->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__236->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__236->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__236->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__236->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__236->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__236->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__236->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__236->GetZaxis()->SetTitleOffset(1);
   data_mc_ratio__236->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__236->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1236[50] = { 0.01, 0.03, 0.05, 0.07, 0.09, 0.11, 0.13, 0.15, 0.17, 0.19, 0.21, 0.23, 0.25, 0.27, 0.29, 0.31, 0.33,
   0.35, 0.37, 0.39, 0.41, 0.43, 0.45, 0.47, 0.49, 0.51, 0.53, 0.55, 0.57, 0.59, 0.61, 0.63, 0.65,
   0.67, 0.69, 0.71, 0.73, 0.75, 0.77, 0.79, 0.81, 0.83, 0.85, 0.87, 0.89, 0.91, 0.93, 0.95, 0.97,
   0.99 };
   Double_t Graph_from_mc_statistical_error_fy1236[50] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1 };
   Double_t Graph_from_mc_statistical_error_fex1236[50] = { 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01 };
   Double_t Graph_from_mc_statistical_error_fey1236[50] = { 0.02812673, 0.3120302, 0.2140391, 0.2851234, 0.2405488, 0.8998466, 0.06731765, 0.7589726, 0.1269167, 0.17666, 0.2246794, 0.299491, 0.4247208, 0.5808323, 0.51292, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0 };
   gre = new TGraphErrors(50,Graph_from_mc_statistical_error_fx1236,Graph_from_mc_statistical_error_fy1236,Graph_from_mc_statistical_error_fex1236,Graph_from_mc_statistical_error_fey1236);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1236 = new TH1F("Graph_Graph_from_mc_statistical_error1236","",100,0,1.1);
   Graph_Graph_from_mc_statistical_error1236->SetMinimum(0.09013803);
   Graph_Graph_from_mc_statistical_error1236->SetMaximum(2.079816);
   Graph_Graph_from_mc_statistical_error1236->SetDirectory(nullptr);
   Graph_Graph_from_mc_statistical_error1236->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1236->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1236->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1236->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_from_mc_statistical_error1236->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1236->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1236->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1236->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1236->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_from_mc_statistical_error1236->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1236);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,1,1);
   line->Draw();
   bottomPad->Modified();
   Aplanarity_algoFirst_16->cd();
   Aplanarity_algoFirst_16->Modified();
   Aplanarity_algoFirst_16->cd();
   Aplanarity_algoFirst_16->SetSelected(Aplanarity_algoFirst_16);
}
