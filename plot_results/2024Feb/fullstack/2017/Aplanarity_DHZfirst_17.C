#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Aplanarity_DHZfirst_17()
{
//=========Macro generated from canvas: Aplanarity_DHZfirst_17/Aplanarity_DHZfirst_17
//=========  (Wed Feb 14 12:33:03 2024) by ROOT version 6.28/10
   TCanvas *Aplanarity_DHZfirst_17 = new TCanvas("Aplanarity_DHZfirst_17", "Aplanarity_DHZfirst_17",0,0,600,600);
   Aplanarity_DHZfirst_17->SetHighLightColor(2);
   Aplanarity_DHZfirst_17->Range(0,0,1,1);
   Aplanarity_DHZfirst_17->SetFillColor(0);
   Aplanarity_DHZfirst_17->SetFillStyle(4000);
   Aplanarity_DHZfirst_17->SetBorderMode(0);
   Aplanarity_DHZfirst_17->SetBorderSize(2);
   Aplanarity_DHZfirst_17->SetFrameFillStyle(1000);
   Aplanarity_DHZfirst_17->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.1532254,-380.27,1.052419,379899.7);
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
   st->SetMaximum(341871.7);
   
   TH1F *st_stack_119 = new TH1F("st_stack_119","",50,0,1);
   st_stack_119->SetMinimum(0.01);
   st_stack_119->SetMaximum(341871.7);
   st_stack_119->SetDirectory(nullptr);
   st_stack_119->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_119->SetLineColor(ci);
   st_stack_119->SetLineWidth(0);
   st_stack_119->GetXaxis()->SetRange(1,50);
   st_stack_119->GetXaxis()->SetLabelFont(42);
   st_stack_119->GetXaxis()->SetTitleOffset(1);
   st_stack_119->GetXaxis()->SetTitleFont(42);
   st_stack_119->GetYaxis()->SetTitle("Events/0.02");
   st_stack_119->GetYaxis()->SetLabelFont(42);
   st_stack_119->GetYaxis()->SetLabelSize(0.05);
   st_stack_119->GetYaxis()->SetTitleSize(0.057);
   st_stack_119->GetYaxis()->SetTitleOffset(1.2);
   st_stack_119->GetYaxis()->SetTitleFont(42);
   st_stack_119->GetZaxis()->SetLabelFont(42);
   st_stack_119->GetZaxis()->SetTitleOffset(1);
   st_stack_119->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_119);
   
   
   TH1D *VH_DHZfirst_Aplanarity_stack_1 = new TH1D("VH_DHZfirst_Aplanarity_stack_1","",50,0,1);
   VH_DHZfirst_Aplanarity_stack_1->SetBinContent(1,139989);
   VH_DHZfirst_Aplanarity_stack_1->SetBinContent(2,14060.01);
   VH_DHZfirst_Aplanarity_stack_1->SetBinContent(3,2640.005);
   VH_DHZfirst_Aplanarity_stack_1->SetBinContent(4,851.8394);
   VH_DHZfirst_Aplanarity_stack_1->SetBinContent(5,3237.393);
   VH_DHZfirst_Aplanarity_stack_1->SetBinContent(6,34.10851);
   VH_DHZfirst_Aplanarity_stack_1->SetBinContent(9,6.119104);
   VH_DHZfirst_Aplanarity_stack_1->SetBinContent(14,1.999241);
   VH_DHZfirst_Aplanarity_stack_1->SetBinError(1,24136.62);
   VH_DHZfirst_Aplanarity_stack_1->SetBinError(2,1983.404);
   VH_DHZfirst_Aplanarity_stack_1->SetBinError(3,915.4766);
   VH_DHZfirst_Aplanarity_stack_1->SetBinError(4,446.233);
   VH_DHZfirst_Aplanarity_stack_1->SetBinError(5,2928.543);
   VH_DHZfirst_Aplanarity_stack_1->SetBinError(6,17.5304);
   VH_DHZfirst_Aplanarity_stack_1->SetBinError(9,6.119104);
   VH_DHZfirst_Aplanarity_stack_1->SetBinError(14,1.999241);
   VH_DHZfirst_Aplanarity_stack_1->SetEntries(11551);

   ci = TColor::GetColor("#ff6600");
   VH_DHZfirst_Aplanarity_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VH_DHZfirst_Aplanarity_stack_1->SetLineColor(ci);
   VH_DHZfirst_Aplanarity_stack_1->GetXaxis()->SetRange(1,100);
   VH_DHZfirst_Aplanarity_stack_1->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_Aplanarity_stack_1->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_Aplanarity_stack_1->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_Aplanarity_stack_1->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_Aplanarity_stack_1->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_Aplanarity_stack_1->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_Aplanarity_stack_1->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_Aplanarity_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VH_DHZfirst_Aplanarity_stack_1,"");
   
   TH1D *VH_DHZfirst_Aplanarity_stack_2 = new TH1D("VH_DHZfirst_Aplanarity_stack_2","",50,0,1);
   VH_DHZfirst_Aplanarity_stack_2->SetBinContent(1,1080.613);
   VH_DHZfirst_Aplanarity_stack_2->SetBinContent(2,150.1493);
   VH_DHZfirst_Aplanarity_stack_2->SetBinContent(3,29.44053);
   VH_DHZfirst_Aplanarity_stack_2->SetBinContent(4,8.204215);
   VH_DHZfirst_Aplanarity_stack_2->SetBinContent(5,2.46161);
   VH_DHZfirst_Aplanarity_stack_2->SetBinContent(6,2.375617);
   VH_DHZfirst_Aplanarity_stack_2->SetBinContent(7,0.249659);
   VH_DHZfirst_Aplanarity_stack_2->SetBinContent(8,0.176934);
   VH_DHZfirst_Aplanarity_stack_2->SetBinContent(9,0.1118884);
   VH_DHZfirst_Aplanarity_stack_2->SetBinContent(12,0.01233761);
   VH_DHZfirst_Aplanarity_stack_2->SetBinError(1,14.88123);
   VH_DHZfirst_Aplanarity_stack_2->SetBinError(2,5.473594);
   VH_DHZfirst_Aplanarity_stack_2->SetBinError(3,2.118111);
   VH_DHZfirst_Aplanarity_stack_2->SetBinError(4,1.303761);
   VH_DHZfirst_Aplanarity_stack_2->SetBinError(5,0.7485774);
   VH_DHZfirst_Aplanarity_stack_2->SetBinError(6,0.7591164);
   VH_DHZfirst_Aplanarity_stack_2->SetBinError(7,0.09972507);
   VH_DHZfirst_Aplanarity_stack_2->SetBinError(8,0.09868169);
   VH_DHZfirst_Aplanarity_stack_2->SetBinError(9,0.1037468);
   VH_DHZfirst_Aplanarity_stack_2->SetBinError(12,0.01233761);
   VH_DHZfirst_Aplanarity_stack_2->SetEntries(17936);

   ci = TColor::GetColor("#660066");
   VH_DHZfirst_Aplanarity_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VH_DHZfirst_Aplanarity_stack_2->SetLineColor(ci);
   VH_DHZfirst_Aplanarity_stack_2->GetXaxis()->SetRange(1,100);
   VH_DHZfirst_Aplanarity_stack_2->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_Aplanarity_stack_2->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_Aplanarity_stack_2->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_Aplanarity_stack_2->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_Aplanarity_stack_2->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_Aplanarity_stack_2->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_Aplanarity_stack_2->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_Aplanarity_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VH_DHZfirst_Aplanarity_stack_2,"");
   
   TH1D *VH_DHZfirst_Aplanarity_stack_3 = new TH1D("VH_DHZfirst_Aplanarity_stack_3","",50,0,1);
   VH_DHZfirst_Aplanarity_stack_3->SetBinContent(1,11418.67);
   VH_DHZfirst_Aplanarity_stack_3->SetBinContent(2,1550.219);
   VH_DHZfirst_Aplanarity_stack_3->SetBinContent(3,331.9958);
   VH_DHZfirst_Aplanarity_stack_3->SetBinContent(4,95.62917);
   VH_DHZfirst_Aplanarity_stack_3->SetBinContent(5,33.17668);
   VH_DHZfirst_Aplanarity_stack_3->SetBinContent(6,11.2634);
   VH_DHZfirst_Aplanarity_stack_3->SetBinContent(7,5.188173);
   VH_DHZfirst_Aplanarity_stack_3->SetBinContent(8,1.985043);
   VH_DHZfirst_Aplanarity_stack_3->SetBinContent(9,1.349628);
   VH_DHZfirst_Aplanarity_stack_3->SetBinContent(10,1.508313);
   VH_DHZfirst_Aplanarity_stack_3->SetBinContent(11,0.1382009);
   VH_DHZfirst_Aplanarity_stack_3->SetBinContent(12,0.1041476);
   VH_DHZfirst_Aplanarity_stack_3->SetBinContent(13,0.1740578);
   VH_DHZfirst_Aplanarity_stack_3->SetBinContent(15,0.08148121);
   VH_DHZfirst_Aplanarity_stack_3->SetBinContent(17,0.06014702);
   VH_DHZfirst_Aplanarity_stack_3->SetBinError(1,29.79826);
   VH_DHZfirst_Aplanarity_stack_3->SetBinError(2,10.81486);
   VH_DHZfirst_Aplanarity_stack_3->SetBinError(3,4.944431);
   VH_DHZfirst_Aplanarity_stack_3->SetBinError(4,2.661528);
   VH_DHZfirst_Aplanarity_stack_3->SetBinError(5,1.597544);
   VH_DHZfirst_Aplanarity_stack_3->SetBinError(6,0.9427265);
   VH_DHZfirst_Aplanarity_stack_3->SetBinError(7,0.6078022);
   VH_DHZfirst_Aplanarity_stack_3->SetBinError(8,0.3062237);
   VH_DHZfirst_Aplanarity_stack_3->SetBinError(9,0.3588907);
   VH_DHZfirst_Aplanarity_stack_3->SetBinError(10,0.3191533);
   VH_DHZfirst_Aplanarity_stack_3->SetBinError(11,0.06651905);
   VH_DHZfirst_Aplanarity_stack_3->SetBinError(12,0.05382693);
   VH_DHZfirst_Aplanarity_stack_3->SetBinError(13,0.09186124);
   VH_DHZfirst_Aplanarity_stack_3->SetBinError(15,0.05795493);
   VH_DHZfirst_Aplanarity_stack_3->SetBinError(17,0.04441518);
   VH_DHZfirst_Aplanarity_stack_3->SetEntries(239044);

   ci = TColor::GetColor("#cc00cc");
   VH_DHZfirst_Aplanarity_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VH_DHZfirst_Aplanarity_stack_3->SetLineColor(ci);
   VH_DHZfirst_Aplanarity_stack_3->GetXaxis()->SetRange(1,100);
   VH_DHZfirst_Aplanarity_stack_3->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_Aplanarity_stack_3->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_Aplanarity_stack_3->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_Aplanarity_stack_3->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_Aplanarity_stack_3->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_Aplanarity_stack_3->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_Aplanarity_stack_3->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_Aplanarity_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VH_DHZfirst_Aplanarity_stack_3,"");
   
   TH1D *VH_DHZfirst_Aplanarity_stack_4 = new TH1D("VH_DHZfirst_Aplanarity_stack_4","",50,0,1);
   VH_DHZfirst_Aplanarity_stack_4->SetBinContent(1,864.7148);
   VH_DHZfirst_Aplanarity_stack_4->SetBinContent(2,84.28272);
   VH_DHZfirst_Aplanarity_stack_4->SetBinContent(3,16.48828);
   VH_DHZfirst_Aplanarity_stack_4->SetBinContent(4,1.759984);
   VH_DHZfirst_Aplanarity_stack_4->SetBinContent(5,1.482568);
   VH_DHZfirst_Aplanarity_stack_4->SetBinContent(6,0.6784652);
   VH_DHZfirst_Aplanarity_stack_4->SetBinContent(7,0.1075587);
   VH_DHZfirst_Aplanarity_stack_4->SetBinError(1,19.77941);
   VH_DHZfirst_Aplanarity_stack_4->SetBinError(2,6.6483);
   VH_DHZfirst_Aplanarity_stack_4->SetBinError(3,5.807442);
   VH_DHZfirst_Aplanarity_stack_4->SetBinError(4,0.5303221);
   VH_DHZfirst_Aplanarity_stack_4->SetBinError(5,0.5773501);
   VH_DHZfirst_Aplanarity_stack_4->SetBinError(6,0.4173082);
   VH_DHZfirst_Aplanarity_stack_4->SetBinError(7,0.1075587);
   VH_DHZfirst_Aplanarity_stack_4->SetEntries(6404);

   ci = TColor::GetColor("#00cccc");
   VH_DHZfirst_Aplanarity_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VH_DHZfirst_Aplanarity_stack_4->SetLineColor(ci);
   VH_DHZfirst_Aplanarity_stack_4->GetXaxis()->SetRange(1,100);
   VH_DHZfirst_Aplanarity_stack_4->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_Aplanarity_stack_4->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_Aplanarity_stack_4->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_Aplanarity_stack_4->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_Aplanarity_stack_4->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_Aplanarity_stack_4->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_Aplanarity_stack_4->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_Aplanarity_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VH_DHZfirst_Aplanarity_stack_4,"");
   
   TH1D *VH_DHZfirst_Aplanarity_stack_5 = new TH1D("VH_DHZfirst_Aplanarity_stack_5","",50,0,1);
   VH_DHZfirst_Aplanarity_stack_5->SetBinContent(1,441.2717);
   VH_DHZfirst_Aplanarity_stack_5->SetBinContent(2,41.9952);
   VH_DHZfirst_Aplanarity_stack_5->SetBinContent(3,5.292814);
   VH_DHZfirst_Aplanarity_stack_5->SetBinContent(4,0.9232638);
   VH_DHZfirst_Aplanarity_stack_5->SetBinContent(5,0.2232203);
   VH_DHZfirst_Aplanarity_stack_5->SetBinContent(7,0.09978241);
   VH_DHZfirst_Aplanarity_stack_5->SetBinError(1,21.03992);
   VH_DHZfirst_Aplanarity_stack_5->SetBinError(2,5.282357);
   VH_DHZfirst_Aplanarity_stack_5->SetBinError(3,2.105179);
   VH_DHZfirst_Aplanarity_stack_5->SetBinError(4,0.6514668);
   VH_DHZfirst_Aplanarity_stack_5->SetBinError(5,0.2232203);
   VH_DHZfirst_Aplanarity_stack_5->SetBinError(7,0.09978241);
   VH_DHZfirst_Aplanarity_stack_5->SetEntries(2842);

   ci = TColor::GetColor("#ff99cc");
   VH_DHZfirst_Aplanarity_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VH_DHZfirst_Aplanarity_stack_5->SetLineColor(ci);
   VH_DHZfirst_Aplanarity_stack_5->GetXaxis()->SetRange(1,100);
   VH_DHZfirst_Aplanarity_stack_5->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_Aplanarity_stack_5->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_Aplanarity_stack_5->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_Aplanarity_stack_5->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_Aplanarity_stack_5->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_Aplanarity_stack_5->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_Aplanarity_stack_5->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_Aplanarity_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VH_DHZfirst_Aplanarity_stack_5,"");
   
   TH1D *VH_DHZfirst_Aplanarity_stack_6 = new TH1D("VH_DHZfirst_Aplanarity_stack_6","",50,0,1);
   VH_DHZfirst_Aplanarity_stack_6->SetBinContent(1,5.189796);
   VH_DHZfirst_Aplanarity_stack_6->SetBinContent(2,0.3303855);
   VH_DHZfirst_Aplanarity_stack_6->SetBinError(1,1.341732);
   VH_DHZfirst_Aplanarity_stack_6->SetBinError(2,0.3303855);
   VH_DHZfirst_Aplanarity_stack_6->SetEntries(19);

   ci = TColor::GetColor("#9933ff");
   VH_DHZfirst_Aplanarity_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VH_DHZfirst_Aplanarity_stack_6->SetLineColor(ci);
   VH_DHZfirst_Aplanarity_stack_6->GetXaxis()->SetRange(1,100);
   VH_DHZfirst_Aplanarity_stack_6->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_Aplanarity_stack_6->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_Aplanarity_stack_6->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_Aplanarity_stack_6->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_Aplanarity_stack_6->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_Aplanarity_stack_6->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_Aplanarity_stack_6->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_Aplanarity_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VH_DHZfirst_Aplanarity_stack_6,"");
   
   TH1D *VH_DHZfirst_Aplanarity_stack_7 = new TH1D("VH_DHZfirst_Aplanarity_stack_7","",50,0,1);
   VH_DHZfirst_Aplanarity_stack_7->SetBinContent(1,15.4707);
   VH_DHZfirst_Aplanarity_stack_7->SetBinContent(2,1.584108);
   VH_DHZfirst_Aplanarity_stack_7->SetBinError(1,2.204549);
   VH_DHZfirst_Aplanarity_stack_7->SetBinError(2,0.6191396);
   VH_DHZfirst_Aplanarity_stack_7->SetEntries(72);

   ci = TColor::GetColor("#3399ff");
   VH_DHZfirst_Aplanarity_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VH_DHZfirst_Aplanarity_stack_7->SetLineColor(ci);
   VH_DHZfirst_Aplanarity_stack_7->GetXaxis()->SetRange(1,100);
   VH_DHZfirst_Aplanarity_stack_7->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_Aplanarity_stack_7->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_Aplanarity_stack_7->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_Aplanarity_stack_7->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_Aplanarity_stack_7->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_Aplanarity_stack_7->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_Aplanarity_stack_7->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_Aplanarity_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VH_DHZfirst_Aplanarity_stack_7,"");
   
   TH1D *VH_DHZfirst_Aplanarity_stack_8 = new TH1D("VH_DHZfirst_Aplanarity_stack_8","",50,0,1);
   VH_DHZfirst_Aplanarity_stack_8->SetBinContent(1,15.06898);
   VH_DHZfirst_Aplanarity_stack_8->SetBinContent(2,0.5796002);
   VH_DHZfirst_Aplanarity_stack_8->SetBinContent(3,0.2957681);
   VH_DHZfirst_Aplanarity_stack_8->SetBinError(1,2.397774);
   VH_DHZfirst_Aplanarity_stack_8->SetBinError(2,0.3401625);
   VH_DHZfirst_Aplanarity_stack_8->SetBinError(3,0.2957681);
   VH_DHZfirst_Aplanarity_stack_8->SetEntries(58);

   ci = TColor::GetColor("#33ff99");
   VH_DHZfirst_Aplanarity_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VH_DHZfirst_Aplanarity_stack_8->SetLineColor(ci);
   VH_DHZfirst_Aplanarity_stack_8->GetXaxis()->SetRange(1,100);
   VH_DHZfirst_Aplanarity_stack_8->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_Aplanarity_stack_8->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_Aplanarity_stack_8->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_Aplanarity_stack_8->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_Aplanarity_stack_8->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_Aplanarity_stack_8->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_Aplanarity_stack_8->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_Aplanarity_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VH_DHZfirst_Aplanarity_stack_8,"");
   
   TH1D *VH_DHZfirst_Aplanarity_stack_9 = new TH1D("VH_DHZfirst_Aplanarity_stack_9","",50,0,1);
   VH_DHZfirst_Aplanarity_stack_9->SetBinContent(1,7.687546);
   VH_DHZfirst_Aplanarity_stack_9->SetBinContent(2,0.5070513);
   VH_DHZfirst_Aplanarity_stack_9->SetBinContent(3,0.08986491);
   VH_DHZfirst_Aplanarity_stack_9->SetBinContent(4,0.008014545);
   VH_DHZfirst_Aplanarity_stack_9->SetBinContent(5,0.002477835);
   VH_DHZfirst_Aplanarity_stack_9->SetBinError(1,0.1216796);
   VH_DHZfirst_Aplanarity_stack_9->SetBinError(2,0.02852407);
   VH_DHZfirst_Aplanarity_stack_9->SetBinError(3,0.01351974);
   VH_DHZfirst_Aplanarity_stack_9->SetBinError(4,0.003477683);
   VH_DHZfirst_Aplanarity_stack_9->SetBinError(5,0.001809458);
   VH_DHZfirst_Aplanarity_stack_9->SetEntries(5676);

   ci = TColor::GetColor("#cccc00");
   VH_DHZfirst_Aplanarity_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VH_DHZfirst_Aplanarity_stack_9->SetLineColor(ci);
   VH_DHZfirst_Aplanarity_stack_9->GetXaxis()->SetRange(1,100);
   VH_DHZfirst_Aplanarity_stack_9->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_Aplanarity_stack_9->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_Aplanarity_stack_9->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_Aplanarity_stack_9->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_Aplanarity_stack_9->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_Aplanarity_stack_9->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_Aplanarity_stack_9->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_Aplanarity_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VH_DHZfirst_Aplanarity_stack_9,"");
   
   TH1D *VH_DHZfirst_Aplanarity_stack_10 = new TH1D("VH_DHZfirst_Aplanarity_stack_10","",50,0,1);
   VH_DHZfirst_Aplanarity_stack_10->SetBinContent(1,4.28682);
   VH_DHZfirst_Aplanarity_stack_10->SetBinContent(2,0.4065454);
   VH_DHZfirst_Aplanarity_stack_10->SetBinContent(3,0.07714874);
   VH_DHZfirst_Aplanarity_stack_10->SetBinContent(4,0.01410673);
   VH_DHZfirst_Aplanarity_stack_10->SetBinContent(5,0.004503965);
   VH_DHZfirst_Aplanarity_stack_10->SetBinContent(6,0.0007001501);
   VH_DHZfirst_Aplanarity_stack_10->SetBinContent(7,0.0004963216);
   VH_DHZfirst_Aplanarity_stack_10->SetBinContent(8,0.0002303919);
   VH_DHZfirst_Aplanarity_stack_10->SetBinError(1,0.03685398);
   VH_DHZfirst_Aplanarity_stack_10->SetBinError(2,0.01119907);
   VH_DHZfirst_Aplanarity_stack_10->SetBinError(3,0.00482007);
   VH_DHZfirst_Aplanarity_stack_10->SetBinError(4,0.00210207);
   VH_DHZfirst_Aplanarity_stack_10->SetBinError(5,0.00118436);
   VH_DHZfirst_Aplanarity_stack_10->SetBinError(6,0.000432637);
   VH_DHZfirst_Aplanarity_stack_10->SetBinError(7,0.0003633683);
   VH_DHZfirst_Aplanarity_stack_10->SetBinError(8,0.0002303919);
   VH_DHZfirst_Aplanarity_stack_10->SetEntries(15848);

   ci = TColor::GetColor("#0000cc");
   VH_DHZfirst_Aplanarity_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VH_DHZfirst_Aplanarity_stack_10->SetLineColor(ci);
   VH_DHZfirst_Aplanarity_stack_10->GetXaxis()->SetRange(1,100);
   VH_DHZfirst_Aplanarity_stack_10->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_Aplanarity_stack_10->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_Aplanarity_stack_10->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_Aplanarity_stack_10->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_Aplanarity_stack_10->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_Aplanarity_stack_10->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_Aplanarity_stack_10->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_Aplanarity_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VH_DHZfirst_Aplanarity_stack_10,"");
   
   TH1D *VH_DHZfirst_Aplanarity_stack_11 = new TH1D("VH_DHZfirst_Aplanarity_stack_11","",50,0,1);
   VH_DHZfirst_Aplanarity_stack_11->SetBinContent(1,0.238401);
   VH_DHZfirst_Aplanarity_stack_11->SetBinContent(2,0.01389255);
   VH_DHZfirst_Aplanarity_stack_11->SetBinContent(3,0.001448007);
   VH_DHZfirst_Aplanarity_stack_11->SetBinError(1,0.01876611);
   VH_DHZfirst_Aplanarity_stack_11->SetBinError(2,0.004597516);
   VH_DHZfirst_Aplanarity_stack_11->SetBinError(3,0.001448007);
   VH_DHZfirst_Aplanarity_stack_11->SetEntries(199);

   ci = TColor::GetColor("#cc0000");
   VH_DHZfirst_Aplanarity_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VH_DHZfirst_Aplanarity_stack_11->SetLineColor(ci);
   VH_DHZfirst_Aplanarity_stack_11->GetXaxis()->SetRange(1,100);
   VH_DHZfirst_Aplanarity_stack_11->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_Aplanarity_stack_11->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_Aplanarity_stack_11->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_Aplanarity_stack_11->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_Aplanarity_stack_11->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_Aplanarity_stack_11->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_Aplanarity_stack_11->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_Aplanarity_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VH_DHZfirst_Aplanarity_stack_11,"");
   
   TH1D *VH_DHZfirst_Aplanarity_stack_12 = new TH1D("VH_DHZfirst_Aplanarity_stack_12","",50,0,1);
   VH_DHZfirst_Aplanarity_stack_12->SetBinContent(1,0.08907579);
   VH_DHZfirst_Aplanarity_stack_12->SetBinContent(2,0.009232537);
   VH_DHZfirst_Aplanarity_stack_12->SetBinContent(3,0.0004824945);
   VH_DHZfirst_Aplanarity_stack_12->SetBinContent(5,0.0001482086);
   VH_DHZfirst_Aplanarity_stack_12->SetBinError(1,0.004327346);
   VH_DHZfirst_Aplanarity_stack_12->SetBinError(2,0.001533063);
   VH_DHZfirst_Aplanarity_stack_12->SetBinError(3,0.0002815988);
   VH_DHZfirst_Aplanarity_stack_12->SetBinError(5,0.0001482086);
   VH_DHZfirst_Aplanarity_stack_12->SetEntries(559);

   ci = TColor::GetColor("#00cc00");
   VH_DHZfirst_Aplanarity_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VH_DHZfirst_Aplanarity_stack_12->SetLineColor(ci);
   VH_DHZfirst_Aplanarity_stack_12->GetXaxis()->SetRange(1,100);
   VH_DHZfirst_Aplanarity_stack_12->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_Aplanarity_stack_12->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_Aplanarity_stack_12->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_Aplanarity_stack_12->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_Aplanarity_stack_12->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_Aplanarity_stack_12->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_Aplanarity_stack_12->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_Aplanarity_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VH_DHZfirst_Aplanarity_stack_12,"");
   st->Draw("hist");
   
   TH1D *VH_DHZfirst_Aplanarity__237 = new TH1D("VH_DHZfirst_Aplanarity__237","",50,0,1);
   VH_DHZfirst_Aplanarity__237->SetBinContent(1,102261);
   VH_DHZfirst_Aplanarity__237->SetBinContent(2,12859);
   VH_DHZfirst_Aplanarity__237->SetBinContent(3,2632);
   VH_DHZfirst_Aplanarity__237->SetBinContent(4,595);
   VH_DHZfirst_Aplanarity__237->SetBinContent(5,164);
   VH_DHZfirst_Aplanarity__237->SetBinContent(6,53);
   VH_DHZfirst_Aplanarity__237->SetBinContent(7,18);
   VH_DHZfirst_Aplanarity__237->SetBinContent(8,6);
   VH_DHZfirst_Aplanarity__237->SetBinContent(9,3);
   VH_DHZfirst_Aplanarity__237->SetBinContent(10,1);
   VH_DHZfirst_Aplanarity__237->SetBinContent(12,1);
   VH_DHZfirst_Aplanarity__237->SetBinContent(14,1);
   VH_DHZfirst_Aplanarity__237->SetBinContent(15,1);
   VH_DHZfirst_Aplanarity__237->SetEntries(118644);

   ci = TColor::GetColor("#000099");
   VH_DHZfirst_Aplanarity__237->SetLineColor(ci);
   VH_DHZfirst_Aplanarity__237->SetLineWidth(2);
   VH_DHZfirst_Aplanarity__237->SetMarkerStyle(20);
   VH_DHZfirst_Aplanarity__237->SetMarkerSize(1.2);
   VH_DHZfirst_Aplanarity__237->GetXaxis()->SetRange(1,100);
   VH_DHZfirst_Aplanarity__237->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_Aplanarity__237->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_Aplanarity__237->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_Aplanarity__237->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_Aplanarity__237->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_Aplanarity__237->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_Aplanarity__237->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_Aplanarity__237->GetZaxis()->SetTitleFont(42);
   VH_DHZfirst_Aplanarity__237->Draw("same E");
   
   Double_t Graph_from_VH_DHZfirst_Aplanarity_fx1237[50] = { 0.01, 0.03, 0.05, 0.07, 0.09, 0.11, 0.13, 0.15, 0.17, 0.19, 0.21, 0.23, 0.25, 0.27, 0.29, 0.31, 0.33,
   0.35, 0.37, 0.39, 0.41, 0.43, 0.45, 0.47, 0.49, 0.51, 0.53, 0.55, 0.57, 0.59, 0.61, 0.63, 0.65,
   0.67, 0.69, 0.71, 0.73, 0.75, 0.77, 0.79, 0.81, 0.83, 0.85, 0.87, 0.89, 0.91, 0.93, 0.95, 0.97,
   0.99 };
   Double_t Graph_from_VH_DHZfirst_Aplanarity_fy1237[50] = { 153842.3, 15890.09, 3023.688, 958.3782, 3274.744, 48.42669, 5.645669, 2.162208, 7.58062, 1.508313, 0.1382009, 0.1164852, 0.1740578, 1.999241, 0.08148121, 0, 0.06014702,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0 };
   Double_t Graph_from_VH_DHZfirst_Aplanarity_fex1237[50] = { 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01 };
   Double_t Graph_from_VH_DHZfirst_Aplanarity_fey1237[50] = { 24136.66, 1983.459, 915.5133, 446.2437, 2928.544, 17.57708, 0.633162, 0.3217314, 6.130497, 0.3191533, 0.06651905, 0.05522277, 0.09186124, 1.999241, 0.05795493, 0, 0.04441518,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0 };
   TGraphErrors *gre = new TGraphErrors(50,Graph_from_VH_DHZfirst_Aplanarity_fx1237,Graph_from_VH_DHZfirst_Aplanarity_fy1237,Graph_from_VH_DHZfirst_Aplanarity_fex1237,Graph_from_VH_DHZfirst_Aplanarity_fey1237);
   gre->SetName("Graph_from_VH_DHZfirst_Aplanarity");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VH_DHZfirst_Aplanarity1237 = new TH1F("Graph_Graph_from_VH_DHZfirst_Aplanarity1237","",100,0,1.1);
   Graph_Graph_from_VH_DHZfirst_Aplanarity1237->SetMinimum(-17797.89);
   Graph_Graph_from_VH_DHZfirst_Aplanarity1237->SetMaximum(195776.8);
   Graph_Graph_from_VH_DHZfirst_Aplanarity1237->SetDirectory(nullptr);
   Graph_Graph_from_VH_DHZfirst_Aplanarity1237->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VH_DHZfirst_Aplanarity1237->SetLineColor(ci);
   Graph_Graph_from_VH_DHZfirst_Aplanarity1237->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VH_DHZfirst_Aplanarity1237->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_from_VH_DHZfirst_Aplanarity1237->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VH_DHZfirst_Aplanarity1237->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VH_DHZfirst_Aplanarity1237->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VH_DHZfirst_Aplanarity1237->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VH_DHZfirst_Aplanarity1237->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_from_VH_DHZfirst_Aplanarity1237->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VH_DHZfirst_Aplanarity1237);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VH_DHZfirst_Aplanarity","Data (BTagCSV, 2017)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VH_DHZfirst_Aplanarity","ggZHcc","F");

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
   entry=leg->AddEntry("VH_DHZfirst_Aplanarity","ZHcc","F");

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
   entry=leg->AddEntry("VH_DHZfirst_Aplanarity","ggZHbb","F");

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
   entry=leg->AddEntry("VH_DHZfirst_Aplanarity","ZHbb","F");

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
   entry=leg->AddEntry("VH_DHZfirst_Aplanarity","ZZ","F");

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
   entry=leg->AddEntry("VH_DHZfirst_Aplanarity","WZ","F");

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
   entry=leg->AddEntry("VH_DHZfirst_Aplanarity","WW","F");

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
   entry=leg->AddEntry("VH_DHZfirst_Aplanarity","W + jets","F");

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
   entry=leg->AddEntry("VH_DHZfirst_Aplanarity","Z + jets","F");

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
   entry=leg->AddEntry("VH_DHZfirst_Aplanarity","t#bar{t}","F");

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
   entry=leg->AddEntry("VH_DHZfirst_Aplanarity","Single top","F");

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
   entry=leg->AddEntry("VH_DHZfirst_Aplanarity","QCD","F");

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
   entry=leg->AddEntry("Graph_from_VH_DHZfirst_Aplanarity","MC unc. (stat.)","fl");

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
   Aplanarity_DHZfirst_17->cd();
  
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
   
   TH1D *data_mc_ratio__238 = new TH1D("data_mc_ratio__238","",50,0,1);
   data_mc_ratio__238->SetBinContent(1,0.6647133);
   data_mc_ratio__238->SetBinContent(2,0.8092465);
   data_mc_ratio__238->SetBinContent(3,0.8704603);
   data_mc_ratio__238->SetBinContent(4,0.6208405);
   data_mc_ratio__238->SetBinContent(5,0.05008025);
   data_mc_ratio__238->SetBinContent(6,1.094438);
   data_mc_ratio__238->SetBinContent(7,3.188285);
   data_mc_ratio__238->SetBinContent(8,2.774942);
   data_mc_ratio__238->SetBinContent(9,0.395746);
   data_mc_ratio__238->SetBinContent(10,0.6629924);
   data_mc_ratio__238->SetBinContent(12,8.584781);
   data_mc_ratio__238->SetBinContent(14,0.5001899);
   data_mc_ratio__238->SetBinContent(15,12.27277);
   data_mc_ratio__238->SetBinError(1,0.00207864);
   data_mc_ratio__238->SetBinError(2,0.007136368);
   data_mc_ratio__238->SetBinError(3,0.01696704);
   data_mc_ratio__238->SetBinError(4,0.02545198);
   data_mc_ratio__238->SetBinError(5,0.003910611);
   data_mc_ratio__238->SetBinError(6,0.1503326);
   data_mc_ratio__238->SetBinError(7,0.7514859);
   data_mc_ratio__238->SetBinError(8,1.132865);
   data_mc_ratio__238->SetBinError(9,0.2284841);
   data_mc_ratio__238->SetBinError(10,0.6629924);
   data_mc_ratio__238->SetBinError(12,8.584781);
   data_mc_ratio__238->SetBinError(14,0.5001899);
   data_mc_ratio__238->SetBinError(15,12.27277);
   data_mc_ratio__238->SetMinimum(0.4);
   data_mc_ratio__238->SetMaximum(1.6);
   data_mc_ratio__238->SetEntries(3.291441);
   data_mc_ratio__238->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__238->SetLineColor(ci);
   data_mc_ratio__238->SetLineWidth(2);
   data_mc_ratio__238->SetMarkerStyle(20);
   data_mc_ratio__238->SetMarkerSize(1.2);
   data_mc_ratio__238->GetXaxis()->SetTitle("Aplanarity");
   data_mc_ratio__238->GetXaxis()->SetRange(1,50);
   data_mc_ratio__238->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__238->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__238->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__238->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__238->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__238->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__238->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__238->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__238->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__238->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__238->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__238->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__238->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__238->GetZaxis()->SetTitleOffset(1);
   data_mc_ratio__238->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__238->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1238[50] = { 0.01, 0.03, 0.05, 0.07, 0.09, 0.11, 0.13, 0.15, 0.17, 0.19, 0.21, 0.23, 0.25, 0.27, 0.29, 0.31, 0.33,
   0.35, 0.37, 0.39, 0.41, 0.43, 0.45, 0.47, 0.49, 0.51, 0.53, 0.55, 0.57, 0.59, 0.61, 0.63, 0.65,
   0.67, 0.69, 0.71, 0.73, 0.75, 0.77, 0.79, 0.81, 0.83, 0.85, 0.87, 0.89, 0.91, 0.93, 0.95, 0.97,
   0.99 };
   Double_t Graph_from_mc_statistical_error_fy1238[50] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1 };
   Double_t Graph_from_mc_statistical_error_fex1238[50] = { 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01 };
   Double_t Graph_from_mc_statistical_error_fey1238[50] = { 0.1568923, 0.1248237, 0.3027804, 0.4656238, 0.8942817, 0.3629627, 0.11215, 0.1487976, 0.8087066, 0.2115962, 0.4813216, 0.4740754, 0.5277628, 1, 0.7112675, 0, 0.7384436,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0 };
   gre = new TGraphErrors(50,Graph_from_mc_statistical_error_fx1238,Graph_from_mc_statistical_error_fy1238,Graph_from_mc_statistical_error_fex1238,Graph_from_mc_statistical_error_fey1238);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1238 = new TH1F("Graph_Graph_from_mc_statistical_error1238","",100,0,1.1);
   Graph_Graph_from_mc_statistical_error1238->SetMinimum(-0.2);
   Graph_Graph_from_mc_statistical_error1238->SetMaximum(2.2);
   Graph_Graph_from_mc_statistical_error1238->SetDirectory(nullptr);
   Graph_Graph_from_mc_statistical_error1238->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1238->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1238->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1238->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_from_mc_statistical_error1238->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1238->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1238->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1238->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1238->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_from_mc_statistical_error1238->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1238);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,1,1);
   line->Draw();
   bottomPad->Modified();
   Aplanarity_DHZfirst_17->cd();
   Aplanarity_DHZfirst_17->Modified();
   Aplanarity_DHZfirst_17->cd();
   Aplanarity_DHZfirst_17->SetSelected(Aplanarity_DHZfirst_17);
}
