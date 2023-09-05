#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Aplanarity_algo_18()
{
//=========Macro generated from canvas: Aplanarity_algo_18/Aplanarity_algo_18
//=========  (Tue Sep  5 11:02:15 2023) by ROOT version 6.28/04
   TCanvas *Aplanarity_algo_18 = new TCanvas("Aplanarity_algo_18", "Aplanarity_algo_18",0,0,600,600);
   Aplanarity_algo_18->SetHighLightColor(2);
   Aplanarity_algo_18->Range(0,0,1,1);
   Aplanarity_algo_18->SetFillColor(0);
   Aplanarity_algo_18->SetFillStyle(4000);
   Aplanarity_algo_18->SetBorderMode(0);
   Aplanarity_algo_18->SetBorderSize(2);
   Aplanarity_algo_18->SetFrameFillStyle(1000);
   Aplanarity_algo_18->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.1532254,-5578.744,1.052419,5573175);
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
   st->SetMaximum(5015299);
   
   TH1F *st_stack_120 = new TH1F("st_stack_120","",50,0,1);
   st_stack_120->SetMinimum(0.01);
   st_stack_120->SetMaximum(5015299);
   st_stack_120->SetDirectory(nullptr);
   st_stack_120->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_120->SetLineColor(ci);
   st_stack_120->SetLineWidth(0);
   st_stack_120->GetXaxis()->SetRange(1,50);
   st_stack_120->GetXaxis()->SetLabelFont(42);
   st_stack_120->GetXaxis()->SetTitleOffset(1);
   st_stack_120->GetXaxis()->SetTitleFont(42);
   st_stack_120->GetYaxis()->SetTitle("Events/0.02");
   st_stack_120->GetYaxis()->SetLabelFont(42);
   st_stack_120->GetYaxis()->SetLabelSize(0.05);
   st_stack_120->GetYaxis()->SetTitleSize(0.057);
   st_stack_120->GetYaxis()->SetTitleOffset(1.2);
   st_stack_120->GetYaxis()->SetTitleFont(42);
   st_stack_120->GetZaxis()->SetLabelFont(42);
   st_stack_120->GetZaxis()->SetTitleOffset(1);
   st_stack_120->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_120);
   
   
   TH1D *VbbHcc_algo_Aplanarity_stack_1 = new TH1D("VbbHcc_algo_Aplanarity_stack_1","",50,0,1);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(1,1960405);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(2,250674.2);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(3,51041.01);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(4,17834.5);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(5,3530.33);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(6,744.3239);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(7,214.0008);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(8,126.0823);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(9,13.76463);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(12,5.607634);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(13,6.811125);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(15,3.229871);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(1,76777.4);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(2,10451.7);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(3,4659.531);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(4,3683.525);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(5,1213.705);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(6,527.1146);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(7,88.34981);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(8,85.26882);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(9,9.901194);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(12,5.607634);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(13,6.811125);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(15,3.229871);
   VbbHcc_algo_Aplanarity_stack_1->SetEntries(112946);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_algo_Aplanarity_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Aplanarity_stack_1->SetLineColor(ci);
   VbbHcc_algo_Aplanarity_stack_1->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Aplanarity_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_Aplanarity_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_Aplanarity_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Aplanarity_stack_1,"");
   
   TH1D *VbbHcc_algo_Aplanarity_stack_2 = new TH1D("VbbHcc_algo_Aplanarity_stack_2","",50,0,1);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(1,13715.22);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(2,1780.504);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(3,405.4493);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(4,111.1658);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(5,41.62199);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(6,14.34002);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(7,4.336177);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(8,1.139442);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(9,2.612947);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(10,1.211114);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(11,1.656529);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(12,0.2789421);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(14,0.09389282);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(15,0.07570244);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(1,73.29652);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(2,24.8039);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(3,11.40249);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(4,6.246834);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(5,7.628921);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(6,2.496529);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(7,1.048816);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(8,0.5546237);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(9,1.14451);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(10,0.560953);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(11,0.9894121);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(12,0.1552783);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(14,0.09389282);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(15,0.146011);
   VbbHcc_algo_Aplanarity_stack_2->SetEntries(159826);

   ci = TColor::GetColor("#660066");
   VbbHcc_algo_Aplanarity_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Aplanarity_stack_2->SetLineColor(ci);
   VbbHcc_algo_Aplanarity_stack_2->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Aplanarity_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_Aplanarity_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_Aplanarity_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Aplanarity_stack_2,"");
   
   TH1D *VbbHcc_algo_Aplanarity_stack_3 = new TH1D("VbbHcc_algo_Aplanarity_stack_3","",50,0,1);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(1,264699.2);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(2,32793.43);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(3,6621.014);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(4,1763.323);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(5,575.0062);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(6,226.8076);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(7,102.09);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(8,48.57461);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(9,26.78305);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(10,12.07158);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(11,9.138319);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(12,5.13932);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(13,2.326262);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(14,1.882556);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(15,0.7598002);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(16,0.2645346);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(17,0.1604176);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(18,0.3362246);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(19,0.3160264);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(20,0.119769);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(21,0.1019673);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(1,182.8755);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(2,63.60715);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(3,30.18782);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(4,14.42303);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(5,7.919155);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(6,5.024958);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(7,3.631306);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(8,2.332391);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(9,1.634501);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(10,1.077476);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(11,1.001849);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(12,0.7986472);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(13,0.4347043);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(14,0.4310442);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(15,0.2307661);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(16,0.1326635);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(17,0.1200262);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(18,0.1646941);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(19,0.1432434);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(20,0.119769);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(21,0.1019673);
   VbbHcc_algo_Aplanarity_stack_3->SetEntries(3867844);

   ci = TColor::GetColor("#cc00cc");
   VbbHcc_algo_Aplanarity_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Aplanarity_stack_3->SetLineColor(ci);
   VbbHcc_algo_Aplanarity_stack_3->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Aplanarity_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_3->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_Aplanarity_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_3->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_Aplanarity_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Aplanarity_stack_3,"");
   
   TH1D *VbbHcc_algo_Aplanarity_stack_4 = new TH1D("VbbHcc_algo_Aplanarity_stack_4","",50,0,1);
   VbbHcc_algo_Aplanarity_stack_4->SetBinContent(1,13266.06);
   VbbHcc_algo_Aplanarity_stack_4->SetBinContent(2,1521.667);
   VbbHcc_algo_Aplanarity_stack_4->SetBinContent(3,354.1687);
   VbbHcc_algo_Aplanarity_stack_4->SetBinContent(4,80.77434);
   VbbHcc_algo_Aplanarity_stack_4->SetBinContent(5,18.02622);
   VbbHcc_algo_Aplanarity_stack_4->SetBinContent(6,6.823573);
   VbbHcc_algo_Aplanarity_stack_4->SetBinContent(7,0.509892);
   VbbHcc_algo_Aplanarity_stack_4->SetBinContent(8,0.07895178);
   VbbHcc_algo_Aplanarity_stack_4->SetBinContent(9,0.1124263);
   VbbHcc_algo_Aplanarity_stack_4->SetBinContent(10,0.11337);
   VbbHcc_algo_Aplanarity_stack_4->SetBinContent(11,0.6429665);
   VbbHcc_algo_Aplanarity_stack_4->SetBinError(1,118.9587);
   VbbHcc_algo_Aplanarity_stack_4->SetBinError(2,43.11898);
   VbbHcc_algo_Aplanarity_stack_4->SetBinError(3,27.43992);
   VbbHcc_algo_Aplanarity_stack_4->SetBinError(4,11.09474);
   VbbHcc_algo_Aplanarity_stack_4->SetBinError(5,6.028452);
   VbbHcc_algo_Aplanarity_stack_4->SetBinError(6,2.252708);
   VbbHcc_algo_Aplanarity_stack_4->SetBinError(7,0.3195115);
   VbbHcc_algo_Aplanarity_stack_4->SetBinError(8,0.07895178);
   VbbHcc_algo_Aplanarity_stack_4->SetBinError(9,0.1124263);
   VbbHcc_algo_Aplanarity_stack_4->SetBinError(10,0.11337);
   VbbHcc_algo_Aplanarity_stack_4->SetBinError(11,0.3408626);
   VbbHcc_algo_Aplanarity_stack_4->SetEntries(56053);

   ci = TColor::GetColor("#00cccc");
   VbbHcc_algo_Aplanarity_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Aplanarity_stack_4->SetLineColor(ci);
   VbbHcc_algo_Aplanarity_stack_4->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Aplanarity_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_4->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_Aplanarity_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_4->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_Aplanarity_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Aplanarity_stack_4,"");
   
   TH1D *VbbHcc_algo_Aplanarity_stack_5 = new TH1D("VbbHcc_algo_Aplanarity_stack_5","",50,0,1);
   VbbHcc_algo_Aplanarity_stack_5->SetBinContent(1,4291.753);
   VbbHcc_algo_Aplanarity_stack_5->SetBinContent(2,511.1383);
   VbbHcc_algo_Aplanarity_stack_5->SetBinContent(3,69.03842);
   VbbHcc_algo_Aplanarity_stack_5->SetBinContent(4,26.53554);
   VbbHcc_algo_Aplanarity_stack_5->SetBinContent(5,1.989147);
   VbbHcc_algo_Aplanarity_stack_5->SetBinContent(6,1.079912);
   VbbHcc_algo_Aplanarity_stack_5->SetBinContent(7,1.194893);
   VbbHcc_algo_Aplanarity_stack_5->SetBinContent(8,0.3029225);
   VbbHcc_algo_Aplanarity_stack_5->SetBinError(1,125.546);
   VbbHcc_algo_Aplanarity_stack_5->SetBinError(2,46.66192);
   VbbHcc_algo_Aplanarity_stack_5->SetBinError(3,8.981523);
   VbbHcc_algo_Aplanarity_stack_5->SetBinError(4,6.899491);
   VbbHcc_algo_Aplanarity_stack_5->SetBinError(5,0.7619475);
   VbbHcc_algo_Aplanarity_stack_5->SetBinError(6,0.6513203);
   VbbHcc_algo_Aplanarity_stack_5->SetBinError(7,0.6578667);
   VbbHcc_algo_Aplanarity_stack_5->SetBinError(8,0.2563232);
   VbbHcc_algo_Aplanarity_stack_5->SetEntries(14668);

   ci = TColor::GetColor("#ff99cc");
   VbbHcc_algo_Aplanarity_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Aplanarity_stack_5->SetLineColor(ci);
   VbbHcc_algo_Aplanarity_stack_5->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Aplanarity_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_5->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_Aplanarity_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_5->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_Aplanarity_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Aplanarity_stack_5,"");
   
   TH1D *VbbHcc_algo_Aplanarity_stack_6 = new TH1D("VbbHcc_algo_Aplanarity_stack_6","",50,0,1);
   VbbHcc_algo_Aplanarity_stack_6->SetBinContent(1,43.36868);
   VbbHcc_algo_Aplanarity_stack_6->SetBinContent(2,6.131885);
   VbbHcc_algo_Aplanarity_stack_6->SetBinContent(3,3.613125);
   VbbHcc_algo_Aplanarity_stack_6->SetBinContent(4,0.7751888);
   VbbHcc_algo_Aplanarity_stack_6->SetBinError(1,6.425072);
   VbbHcc_algo_Aplanarity_stack_6->SetBinError(2,1.95596);
   VbbHcc_algo_Aplanarity_stack_6->SetBinError(3,2.525716);
   VbbHcc_algo_Aplanarity_stack_6->SetBinError(4,0.7751888);
   VbbHcc_algo_Aplanarity_stack_6->SetEntries(77);

   ci = TColor::GetColor("#9933ff");
   VbbHcc_algo_Aplanarity_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Aplanarity_stack_6->SetLineColor(ci);
   VbbHcc_algo_Aplanarity_stack_6->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Aplanarity_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_6->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_Aplanarity_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_6->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_Aplanarity_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Aplanarity_stack_6,"");
   
   TH1D *VbbHcc_algo_Aplanarity_stack_7 = new TH1D("VbbHcc_algo_Aplanarity_stack_7","",50,0,1);
   VbbHcc_algo_Aplanarity_stack_7->SetBinContent(1,104.4034);
   VbbHcc_algo_Aplanarity_stack_7->SetBinContent(2,9.731783);
   VbbHcc_algo_Aplanarity_stack_7->SetBinContent(3,2.747726);
   VbbHcc_algo_Aplanarity_stack_7->SetBinContent(8,0.4924692);
   VbbHcc_algo_Aplanarity_stack_7->SetBinError(1,8.737838);
   VbbHcc_algo_Aplanarity_stack_7->SetBinError(2,2.759602);
   VbbHcc_algo_Aplanarity_stack_7->SetBinError(3,1.481531);
   VbbHcc_algo_Aplanarity_stack_7->SetBinError(8,0.4924692);
   VbbHcc_algo_Aplanarity_stack_7->SetEntries(193);

   ci = TColor::GetColor("#3399ff");
   VbbHcc_algo_Aplanarity_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Aplanarity_stack_7->SetLineColor(ci);
   VbbHcc_algo_Aplanarity_stack_7->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Aplanarity_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_7->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_Aplanarity_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_7->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_Aplanarity_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Aplanarity_stack_7,"");
   
   TH1D *VbbHcc_algo_Aplanarity_stack_8 = new TH1D("VbbHcc_algo_Aplanarity_stack_8","",50,0,1);
   VbbHcc_algo_Aplanarity_stack_8->SetBinContent(1,177.7447);
   VbbHcc_algo_Aplanarity_stack_8->SetBinContent(2,13.79779);
   VbbHcc_algo_Aplanarity_stack_8->SetBinContent(3,3.120868);
   VbbHcc_algo_Aplanarity_stack_8->SetBinContent(4,0.6700941);
   VbbHcc_algo_Aplanarity_stack_8->SetBinContent(5,0.2462776);
   VbbHcc_algo_Aplanarity_stack_8->SetBinError(1,8.703147);
   VbbHcc_algo_Aplanarity_stack_8->SetBinError(2,2.722982);
   VbbHcc_algo_Aplanarity_stack_8->SetBinError(3,1.306623);
   VbbHcc_algo_Aplanarity_stack_8->SetBinError(4,0.4948273);
   VbbHcc_algo_Aplanarity_stack_8->SetBinError(5,0.2462776);
   VbbHcc_algo_Aplanarity_stack_8->SetEntries(543);

   ci = TColor::GetColor("#33ff99");
   VbbHcc_algo_Aplanarity_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Aplanarity_stack_8->SetLineColor(ci);
   VbbHcc_algo_Aplanarity_stack_8->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Aplanarity_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_8->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_Aplanarity_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_8->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_Aplanarity_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Aplanarity_stack_8,"");
   
   TH1D *VbbHcc_algo_Aplanarity_stack_9 = new TH1D("VbbHcc_algo_Aplanarity_stack_9","",50,0,1);
   VbbHcc_algo_Aplanarity_stack_9->SetBinContent(1,131.0843);
   VbbHcc_algo_Aplanarity_stack_9->SetBinContent(2,9.485072);
   VbbHcc_algo_Aplanarity_stack_9->SetBinContent(3,1.424271);
   VbbHcc_algo_Aplanarity_stack_9->SetBinContent(4,0.2819611);
   VbbHcc_algo_Aplanarity_stack_9->SetBinContent(5,0.1196615);
   VbbHcc_algo_Aplanarity_stack_9->SetBinContent(6,0.01880879);
   VbbHcc_algo_Aplanarity_stack_9->SetBinContent(7,0.006850399);
   VbbHcc_algo_Aplanarity_stack_9->SetBinContent(12,0.003071643);
   VbbHcc_algo_Aplanarity_stack_9->SetBinContent(13,0.002206836);
   VbbHcc_algo_Aplanarity_stack_9->SetBinError(1,0.7505643);
   VbbHcc_algo_Aplanarity_stack_9->SetBinError(2,0.1932067);
   VbbHcc_algo_Aplanarity_stack_9->SetBinError(3,0.07477442);
   VbbHcc_algo_Aplanarity_stack_9->SetBinError(4,0.03637482);
   VbbHcc_algo_Aplanarity_stack_9->SetBinError(5,0.0211734);
   VbbHcc_algo_Aplanarity_stack_9->SetBinError(6,0.007366015);
   VbbHcc_algo_Aplanarity_stack_9->SetBinError(7,0.004000268);
   VbbHcc_algo_Aplanarity_stack_9->SetBinError(12,0.003071643);
   VbbHcc_algo_Aplanarity_stack_9->SetBinError(13,0.002206836);
   VbbHcc_algo_Aplanarity_stack_9->SetEntries(47604);

   ci = TColor::GetColor("#cccc00");
   VbbHcc_algo_Aplanarity_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Aplanarity_stack_9->SetLineColor(ci);
   VbbHcc_algo_Aplanarity_stack_9->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Aplanarity_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_9->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_Aplanarity_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_9->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_Aplanarity_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Aplanarity_stack_9,"");
   
   TH1D *VbbHcc_algo_Aplanarity_stack_10 = new TH1D("VbbHcc_algo_Aplanarity_stack_10","",50,0,1);
   VbbHcc_algo_Aplanarity_stack_10->SetBinContent(1,50.01962);
   VbbHcc_algo_Aplanarity_stack_10->SetBinContent(2,5.576965);
   VbbHcc_algo_Aplanarity_stack_10->SetBinContent(3,1.069372);
   VbbHcc_algo_Aplanarity_stack_10->SetBinContent(4,0.2319227);
   VbbHcc_algo_Aplanarity_stack_10->SetBinContent(5,0.07561017);
   VbbHcc_algo_Aplanarity_stack_10->SetBinContent(6,0.02420991);
   VbbHcc_algo_Aplanarity_stack_10->SetBinContent(7,0.007892846);
   VbbHcc_algo_Aplanarity_stack_10->SetBinContent(8,0.004391822);
   VbbHcc_algo_Aplanarity_stack_10->SetBinContent(9,0.00244096);
   VbbHcc_algo_Aplanarity_stack_10->SetBinContent(10,0.0009464364);
   VbbHcc_algo_Aplanarity_stack_10->SetBinContent(11,0.0004016157);
   VbbHcc_algo_Aplanarity_stack_10->SetBinContent(12,0.0001598786);
   VbbHcc_algo_Aplanarity_stack_10->SetBinError(1,0.1628563);
   VbbHcc_algo_Aplanarity_stack_10->SetBinError(2,0.05383928);
   VbbHcc_algo_Aplanarity_stack_10->SetBinError(3,0.02351846);
   VbbHcc_algo_Aplanarity_stack_10->SetBinError(4,0.01092837);
   VbbHcc_algo_Aplanarity_stack_10->SetBinError(5,0.006072379);
   VbbHcc_algo_Aplanarity_stack_10->SetBinError(6,0.003544763);
   VbbHcc_algo_Aplanarity_stack_10->SetBinError(7,0.001968232);
   VbbHcc_algo_Aplanarity_stack_10->SetBinError(8,0.001506731);
   VbbHcc_algo_Aplanarity_stack_10->SetBinError(9,0.001108604);
   VbbHcc_algo_Aplanarity_stack_10->SetBinError(10,0.0006123907);
   VbbHcc_algo_Aplanarity_stack_10->SetBinError(11,0.0004016157);
   VbbHcc_algo_Aplanarity_stack_10->SetBinError(12,0.0001598786);
   VbbHcc_algo_Aplanarity_stack_10->SetEntries(112352);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_algo_Aplanarity_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Aplanarity_stack_10->SetLineColor(ci);
   VbbHcc_algo_Aplanarity_stack_10->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Aplanarity_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_10->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_Aplanarity_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_10->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_Aplanarity_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Aplanarity_stack_10,"");
   
   TH1D *VbbHcc_algo_Aplanarity_stack_11 = new TH1D("VbbHcc_algo_Aplanarity_stack_11","",50,0,1);
   VbbHcc_algo_Aplanarity_stack_11->SetBinContent(1,0.7698212);
   VbbHcc_algo_Aplanarity_stack_11->SetBinContent(2,0.07742784);
   VbbHcc_algo_Aplanarity_stack_11->SetBinContent(3,0.01031976);
   VbbHcc_algo_Aplanarity_stack_11->SetBinContent(4,0.004685718);
   VbbHcc_algo_Aplanarity_stack_11->SetBinError(1,0.04818396);
   VbbHcc_algo_Aplanarity_stack_11->SetBinError(2,0.01612605);
   VbbHcc_algo_Aplanarity_stack_11->SetBinError(3,0.004897843);
   VbbHcc_algo_Aplanarity_stack_11->SetBinError(4,0.004685718);
   VbbHcc_algo_Aplanarity_stack_11->SetEntries(352);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_algo_Aplanarity_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Aplanarity_stack_11->SetLineColor(ci);
   VbbHcc_algo_Aplanarity_stack_11->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Aplanarity_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_11->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_Aplanarity_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_11->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_Aplanarity_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Aplanarity_stack_11,"");
   
   TH1D *VbbHcc_algo_Aplanarity_stack_12 = new TH1D("VbbHcc_algo_Aplanarity_stack_12","",50,0,1);
   VbbHcc_algo_Aplanarity_stack_12->SetBinContent(1,0.3967983);
   VbbHcc_algo_Aplanarity_stack_12->SetBinContent(2,0.03588177);
   VbbHcc_algo_Aplanarity_stack_12->SetBinContent(3,0.006189865);
   VbbHcc_algo_Aplanarity_stack_12->SetBinContent(4,0.004012898);
   VbbHcc_algo_Aplanarity_stack_12->SetBinContent(5,0.000691165);
   VbbHcc_algo_Aplanarity_stack_12->SetBinError(1,0.01336286);
   VbbHcc_algo_Aplanarity_stack_12->SetBinError(2,0.003848784);
   VbbHcc_algo_Aplanarity_stack_12->SetBinError(3,0.001563893);
   VbbHcc_algo_Aplanarity_stack_12->SetBinError(4,0.001284829);
   VbbHcc_algo_Aplanarity_stack_12->SetBinError(5,0.000691165);
   VbbHcc_algo_Aplanarity_stack_12->SetEntries(1270);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_algo_Aplanarity_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Aplanarity_stack_12->SetLineColor(ci);
   VbbHcc_algo_Aplanarity_stack_12->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Aplanarity_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_12->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_Aplanarity_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_12->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_Aplanarity_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Aplanarity_stack_12,"");
   st->Draw("hist");
   
   TH1D *VbbHcc_algo_Aplanarity__239 = new TH1D("VbbHcc_algo_Aplanarity__239","",50,0,1);
   VbbHcc_algo_Aplanarity__239->SetBinContent(0,1);
   VbbHcc_algo_Aplanarity__239->SetBinContent(1,1782165);
   VbbHcc_algo_Aplanarity__239->SetBinContent(2,244724);
   VbbHcc_algo_Aplanarity__239->SetBinContent(3,52859);
   VbbHcc_algo_Aplanarity__239->SetBinContent(4,12975);
   VbbHcc_algo_Aplanarity__239->SetBinContent(5,3403);
   VbbHcc_algo_Aplanarity__239->SetBinContent(6,1037);
   VbbHcc_algo_Aplanarity__239->SetBinContent(7,404);
   VbbHcc_algo_Aplanarity__239->SetBinContent(8,176);
   VbbHcc_algo_Aplanarity__239->SetBinContent(9,88);
   VbbHcc_algo_Aplanarity__239->SetBinContent(10,51);
   VbbHcc_algo_Aplanarity__239->SetBinContent(11,29);
   VbbHcc_algo_Aplanarity__239->SetBinContent(12,18);
   VbbHcc_algo_Aplanarity__239->SetBinContent(13,15);
   VbbHcc_algo_Aplanarity__239->SetBinContent(14,10);
   VbbHcc_algo_Aplanarity__239->SetBinContent(15,7);
   VbbHcc_algo_Aplanarity__239->SetBinContent(16,1);
   VbbHcc_algo_Aplanarity__239->SetEntries(2098012);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Aplanarity__239->SetLineColor(ci);
   VbbHcc_algo_Aplanarity__239->SetLineWidth(2);
   VbbHcc_algo_Aplanarity__239->SetMarkerStyle(20);
   VbbHcc_algo_Aplanarity__239->SetMarkerSize(1.2);
   VbbHcc_algo_Aplanarity__239->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Aplanarity__239->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity__239->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_Aplanarity__239->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity__239->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity__239->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity__239->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity__239->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_Aplanarity__239->GetZaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity__239->Draw("same E");
   
   Double_t Graph_from_VbbHcc_algo_Aplanarity_fx1239[50] = { 0.01, 0.03, 0.05, 0.07, 0.09, 0.11, 0.13, 0.15, 0.17, 0.19, 0.21, 0.23, 0.25, 0.27, 0.29, 0.31, 0.33,
   0.35, 0.37, 0.39, 0.41, 0.43, 0.45, 0.47, 0.49, 0.51, 0.53, 0.55, 0.57, 0.59, 0.61, 0.63, 0.65,
   0.67, 0.69, 0.71, 0.73, 0.75, 0.77, 0.79, 0.81, 0.83, 0.85, 0.87, 0.89, 0.91, 0.93, 0.95, 0.97,
   0.99 };
   Double_t Graph_from_VbbHcc_algo_Aplanarity_fy1239[50] = { 2256885, 287325.8, 58502.68, 19818.27, 4167.415, 993.418, 322.1465, 176.675, 43.27549, 13.39701, 11.43822, 11.02913, 9.139594, 1.976449, 4.065374, 0.2645346, 0.1604176,
   0.3362246, 0.3160264, 0.119769, 0.1019673, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0 };
   Double_t Graph_from_VbbHcc_algo_Aplanarity_fex1239[50] = { 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01 };
   Double_t Graph_from_VbbHcc_algo_Aplanarity_fey1239[50] = { 76777.85, 10452.11, 4659.733, 3683.582, 1213.77, 527.1497, 88.43365, 85.30436, 10.10088, 1.220031, 1.448732, 5.66635, 6.824983, 0.4411519, 3.241395, 0.1326635, 0.1200262,
   0.1646941, 0.1432434, 0.119769, 0.1019673, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0 };
   TGraphErrors *gre = new TGraphErrors(50,Graph_from_VbbHcc_algo_Aplanarity_fx1239,Graph_from_VbbHcc_algo_Aplanarity_fy1239,Graph_from_VbbHcc_algo_Aplanarity_fex1239,Graph_from_VbbHcc_algo_Aplanarity_fey1239);
   gre->SetName("Graph_from_VbbHcc_algo_Aplanarity");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_algo_Aplanarity1239 = new TH1F("Graph_Graph_from_VbbHcc_algo_Aplanarity1239","",100,0,1.1);
   Graph_Graph_from_VbbHcc_algo_Aplanarity1239->SetMinimum(0);
   Graph_Graph_from_VbbHcc_algo_Aplanarity1239->SetMaximum(2567029);
   Graph_Graph_from_VbbHcc_algo_Aplanarity1239->SetDirectory(nullptr);
   Graph_Graph_from_VbbHcc_algo_Aplanarity1239->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_algo_Aplanarity1239->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_algo_Aplanarity1239->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_algo_Aplanarity1239->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_from_VbbHcc_algo_Aplanarity1239->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_algo_Aplanarity1239->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_algo_Aplanarity1239->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_algo_Aplanarity1239->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_algo_Aplanarity1239->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_from_VbbHcc_algo_Aplanarity1239->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_algo_Aplanarity1239);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_algo_Aplanarity","Data (JetHT, 2018)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_algo_Aplanarity","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Aplanarity","ZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Aplanarity","ggZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Aplanarity","ZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Aplanarity","ZZ","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Aplanarity","WZ","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Aplanarity","WW","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Aplanarity","W + jets","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Aplanarity","Z + jets","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Aplanarity","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Aplanarity","Single top","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Aplanarity","QCD","F");

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetLineWidth(2);
   tex->Draw();
   topPad->Modified();
   Aplanarity_algo_18->cd();
  
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
   
   TH1D *data_mc_ratio__240 = new TH1D("data_mc_ratio__240","",50,0,1);
   data_mc_ratio__240->SetBinContent(1,0.7896571);
   data_mc_ratio__240->SetBinContent(2,0.85173);
   data_mc_ratio__240->SetBinContent(3,0.9035313);
   data_mc_ratio__240->SetBinContent(4,0.654699);
   data_mc_ratio__240->SetBinContent(5,0.8165733);
   data_mc_ratio__240->SetBinContent(6,1.043871);
   data_mc_ratio__240->SetBinContent(7,1.254088);
   data_mc_ratio__240->SetBinContent(8,0.9961792);
   data_mc_ratio__240->SetBinContent(9,2.033484);
   data_mc_ratio__240->SetBinContent(10,3.806819);
   data_mc_ratio__240->SetBinContent(11,2.53536);
   data_mc_ratio__240->SetBinContent(12,1.632042);
   data_mc_ratio__240->SetBinContent(13,1.641211);
   data_mc_ratio__240->SetBinContent(14,5.059579);
   data_mc_ratio__240->SetBinContent(15,1.721859);
   data_mc_ratio__240->SetBinContent(16,3.780224);
   data_mc_ratio__240->SetBinError(1,0.0005915134);
   data_mc_ratio__240->SetBinError(2,0.001721724);
   data_mc_ratio__240->SetBinError(3,0.00392992);
   data_mc_ratio__240->SetBinError(4,0.005747619);
   data_mc_ratio__240->SetBinError(5,0.01399794);
   data_mc_ratio__240->SetBinError(6,0.03241584);
   data_mc_ratio__240->SetBinError(7,0.06239321);
   data_mc_ratio__240->SetBinError(8,0.07508983);
   data_mc_ratio__240->SetBinError(9,0.2167701);
   data_mc_ratio__240->SetBinError(10,0.5330613);
   data_mc_ratio__240->SetBinError(11,0.4708046);
   data_mc_ratio__240->SetBinError(12,0.384676);
   data_mc_ratio__240->SetBinError(13,0.4237588);
   data_mc_ratio__240->SetBinError(14,1.599979);
   data_mc_ratio__240->SetBinError(15,0.6508015);
   data_mc_ratio__240->SetBinError(16,3.780224);
   data_mc_ratio__240->SetMinimum(0.4);
   data_mc_ratio__240->SetMaximum(1.6);
   data_mc_ratio__240->SetEntries(30.78641);
   data_mc_ratio__240->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__240->SetLineColor(ci);
   data_mc_ratio__240->SetLineWidth(2);
   data_mc_ratio__240->SetMarkerStyle(20);
   data_mc_ratio__240->SetMarkerSize(1.2);
   data_mc_ratio__240->GetXaxis()->SetTitle("Aplanarity");
   data_mc_ratio__240->GetXaxis()->SetRange(1,50);
   data_mc_ratio__240->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__240->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__240->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__240->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__240->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__240->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__240->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__240->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__240->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__240->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__240->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__240->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__240->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__240->GetZaxis()->SetTitleOffset(1);
   data_mc_ratio__240->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__240->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1240[50] = { 0.01, 0.03, 0.05, 0.07, 0.09, 0.11, 0.13, 0.15, 0.17, 0.19, 0.21, 0.23, 0.25, 0.27, 0.29, 0.31, 0.33,
   0.35, 0.37, 0.39, 0.41, 0.43, 0.45, 0.47, 0.49, 0.51, 0.53, 0.55, 0.57, 0.59, 0.61, 0.63, 0.65,
   0.67, 0.69, 0.71, 0.73, 0.75, 0.77, 0.79, 0.81, 0.83, 0.85, 0.87, 0.89, 0.91, 0.93, 0.95, 0.97,
   0.99 };
   Double_t Graph_from_mc_statistical_error_fy1240[50] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1 };
   Double_t Graph_from_mc_statistical_error_fex1240[50] = { 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01 };
   Double_t Graph_from_mc_statistical_error_fey1240[50] = { 0.03401939, 0.03637722, 0.07964992, 0.185868, 0.2912524, 0.5306423, 0.2745138, 0.482832, 0.2334088, 0.09106743, 0.1266572, 0.5137623, 0.7467491, 0.2232043, 0.7973178, 0.5014977, 0.7482108,
   0.4898335, 0.4532642, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0 };
   gre = new TGraphErrors(50,Graph_from_mc_statistical_error_fx1240,Graph_from_mc_statistical_error_fy1240,Graph_from_mc_statistical_error_fex1240,Graph_from_mc_statistical_error_fey1240);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1240 = new TH1F("Graph_Graph_from_mc_statistical_error1240","",100,0,1.1);
   Graph_Graph_from_mc_statistical_error1240->SetMinimum(0);
   Graph_Graph_from_mc_statistical_error1240->SetMaximum(2.2);
   Graph_Graph_from_mc_statistical_error1240->SetDirectory(nullptr);
   Graph_Graph_from_mc_statistical_error1240->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1240->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1240->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1240->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_from_mc_statistical_error1240->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1240->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1240->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1240->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1240->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_from_mc_statistical_error1240->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1240);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,1,1);
   line->Draw();
   bottomPad->Modified();
   Aplanarity_algo_18->cd();
   Aplanarity_algo_18->Modified();
   Aplanarity_algo_18->cd();
   Aplanarity_algo_18->SetSelected(Aplanarity_algo_18);
}
