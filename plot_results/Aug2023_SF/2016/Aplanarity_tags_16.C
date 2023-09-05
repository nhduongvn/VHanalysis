#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Aplanarity_tags_16()
{
//=========Macro generated from canvas: Aplanarity_tags_16/Aplanarity_tags_16
//=========  (Tue Sep  5 11:02:10 2023) by ROOT version 6.28/04
   TCanvas *Aplanarity_tags_16 = new TCanvas("Aplanarity_tags_16", "Aplanarity_tags_16",0,0,600,600);
   Aplanarity_tags_16->SetHighLightColor(2);
   Aplanarity_tags_16->Range(0,0,1,1);
   Aplanarity_tags_16->SetFillColor(0);
   Aplanarity_tags_16->SetFillStyle(4000);
   Aplanarity_tags_16->SetBorderMode(0);
   Aplanarity_tags_16->SetBorderSize(2);
   Aplanarity_tags_16->SetFrameFillStyle(1000);
   Aplanarity_tags_16->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.1532254,-323.9596,1.052419,323645.7);
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
   st->SetMaximum(291248.7);
   
   TH1F *st_stack_46 = new TH1F("st_stack_46","",50,0,1);
   st_stack_46->SetMinimum(0.01);
   st_stack_46->SetMaximum(291248.7);
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
   
   
   TH1D *VbbHcc_tags_Aplanarity_stack_1 = new TH1D("VbbHcc_tags_Aplanarity_stack_1","",50,0,1);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(1,119395.3);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(2,20038.89);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(3,3035.857);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(4,709.8607);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(5,150.9505);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(6,99.16248);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(7,86.27657);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(8,37.51264);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(9,53.89228);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(10,5.444134);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(11,28.11715);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(15,19.05954);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(1,5255.153);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(2,3020.534);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(3,684.6264);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(4,206.068);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(5,40.40415);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(6,33.15594);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(7,31.51676);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(8,17.74727);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(9,34.15415);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(10,4.297516);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(11,23.90067);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(15,19.05954);
   VbbHcc_tags_Aplanarity_stack_1->SetEntries(9563);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_tags_Aplanarity_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Aplanarity_stack_1->SetLineColor(ci);
   VbbHcc_tags_Aplanarity_stack_1->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Aplanarity_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_Aplanarity_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_Aplanarity_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Aplanarity_stack_1,"");
   
   TH1D *VbbHcc_tags_Aplanarity_stack_2 = new TH1D("VbbHcc_tags_Aplanarity_stack_2","",50,0,1);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(1,485.1246);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(2,60.18868);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(3,17.56347);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(4,7.766754);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(5,2.864469);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(6,1.403567);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(7,1.796624);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(8,0.3953237);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(9,0.331839);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(10,0.04637281);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(11,0.0917128);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(13,0.04566795);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(1,8.73481);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(2,2.909862);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(3,1.545647);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(4,1.109675);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(5,0.6521773);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(6,0.4001679);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(7,0.5593713);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(8,0.1341264);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(9,0.1998015);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(10,0.04637281);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(11,0.06512927);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(13,0.04566795);
   VbbHcc_tags_Aplanarity_stack_2->SetEntries(9408);

   ci = TColor::GetColor("#660066");
   VbbHcc_tags_Aplanarity_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Aplanarity_stack_2->SetLineColor(ci);
   VbbHcc_tags_Aplanarity_stack_2->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Aplanarity_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_Aplanarity_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_Aplanarity_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Aplanarity_stack_2,"");
   
   TH1D *VbbHcc_tags_Aplanarity_stack_3 = new TH1D("VbbHcc_tags_Aplanarity_stack_3","",50,0,1);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(1,9478.567);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(2,1393.382);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(3,381.5413);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(4,138.5655);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(5,65.52467);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(6,32.02238);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(7,19.48227);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(8,9.256405);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(9,6.399098);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(10,3.321801);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(11,2.859423);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(12,1.217478);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(13,1.019301);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(14,0.6924587);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(15,0.6654767);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(16,0.183793);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(17,0.08751212);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(18,0.1454104);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(19,0.0550937);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(1,23.03355);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(2,8.720084);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(3,4.573787);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(4,2.756035);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(5,1.899669);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(6,1.3216);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(7,1.04507);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(8,0.7122506);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(9,0.5998707);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(10,0.4370859);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(11,0.4062478);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(12,0.2582168);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(13,0.2399642);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(14,0.1873286);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(15,0.1908418);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(16,0.1066443);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(17,0.06228583);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(18,0.08489424);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(19,0.0550937);
   VbbHcc_tags_Aplanarity_stack_3->SetEntries(226633);

   ci = TColor::GetColor("#cc00cc");
   VbbHcc_tags_Aplanarity_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Aplanarity_stack_3->SetLineColor(ci);
   VbbHcc_tags_Aplanarity_stack_3->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Aplanarity_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_3->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_Aplanarity_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_3->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_Aplanarity_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Aplanarity_stack_3,"");
   
   TH1D *VbbHcc_tags_Aplanarity_stack_4 = new TH1D("VbbHcc_tags_Aplanarity_stack_4","",50,0,1);
   VbbHcc_tags_Aplanarity_stack_4->SetBinContent(1,1475.041);
   VbbHcc_tags_Aplanarity_stack_4->SetBinContent(2,182.9714);
   VbbHcc_tags_Aplanarity_stack_4->SetBinContent(3,46.68298);
   VbbHcc_tags_Aplanarity_stack_4->SetBinContent(4,12.66879);
   VbbHcc_tags_Aplanarity_stack_4->SetBinContent(5,6.201868);
   VbbHcc_tags_Aplanarity_stack_4->SetBinContent(6,2.549732);
   VbbHcc_tags_Aplanarity_stack_4->SetBinContent(7,2.074416);
   VbbHcc_tags_Aplanarity_stack_4->SetBinContent(8,1.277468);
   VbbHcc_tags_Aplanarity_stack_4->SetBinContent(9,0.4172411);
   VbbHcc_tags_Aplanarity_stack_4->SetBinContent(10,0.3613191);
   VbbHcc_tags_Aplanarity_stack_4->SetBinContent(11,0.06761808);
   VbbHcc_tags_Aplanarity_stack_4->SetBinContent(12,0.155417);
   VbbHcc_tags_Aplanarity_stack_4->SetBinContent(13,0.08552109);
   VbbHcc_tags_Aplanarity_stack_4->SetBinContent(14,0.06897277);
   VbbHcc_tags_Aplanarity_stack_4->SetBinError(1,25.6978);
   VbbHcc_tags_Aplanarity_stack_4->SetBinError(2,11.38595);
   VbbHcc_tags_Aplanarity_stack_4->SetBinError(3,6.359365);
   VbbHcc_tags_Aplanarity_stack_4->SetBinError(4,1.321448);
   VbbHcc_tags_Aplanarity_stack_4->SetBinError(5,1.056216);
   VbbHcc_tags_Aplanarity_stack_4->SetBinError(6,0.5359);
   VbbHcc_tags_Aplanarity_stack_4->SetBinError(7,0.5324983);
   VbbHcc_tags_Aplanarity_stack_4->SetBinError(8,0.4838824);
   VbbHcc_tags_Aplanarity_stack_4->SetBinError(9,0.158349);
   VbbHcc_tags_Aplanarity_stack_4->SetBinError(10,0.1671229);
   VbbHcc_tags_Aplanarity_stack_4->SetBinError(11,0.06761808);
   VbbHcc_tags_Aplanarity_stack_4->SetBinError(12,0.1105825);
   VbbHcc_tags_Aplanarity_stack_4->SetBinError(13,0.08552109);
   VbbHcc_tags_Aplanarity_stack_4->SetBinError(14,0.06897277);
   VbbHcc_tags_Aplanarity_stack_4->SetEntries(14937);

   ci = TColor::GetColor("#00cccc");
   VbbHcc_tags_Aplanarity_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Aplanarity_stack_4->SetLineColor(ci);
   VbbHcc_tags_Aplanarity_stack_4->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Aplanarity_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_4->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_Aplanarity_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_4->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_Aplanarity_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Aplanarity_stack_4,"");
   
   TH1D *VbbHcc_tags_Aplanarity_stack_5 = new TH1D("VbbHcc_tags_Aplanarity_stack_5","",50,0,1);
   VbbHcc_tags_Aplanarity_stack_5->SetBinContent(1,148.4472);
   VbbHcc_tags_Aplanarity_stack_5->SetBinContent(2,13.81111);
   VbbHcc_tags_Aplanarity_stack_5->SetBinContent(3,3.296742);
   VbbHcc_tags_Aplanarity_stack_5->SetBinContent(4,0.938832);
   VbbHcc_tags_Aplanarity_stack_5->SetBinContent(5,0.7807204);
   VbbHcc_tags_Aplanarity_stack_5->SetBinContent(6,0.8929356);
   VbbHcc_tags_Aplanarity_stack_5->SetBinContent(7,0.1801195);
   VbbHcc_tags_Aplanarity_stack_5->SetBinContent(11,0.01206878);
   VbbHcc_tags_Aplanarity_stack_5->SetBinError(1,8.632949);
   VbbHcc_tags_Aplanarity_stack_5->SetBinError(2,1.97133);
   VbbHcc_tags_Aplanarity_stack_5->SetBinError(3,1.204792);
   VbbHcc_tags_Aplanarity_stack_5->SetBinError(4,0.2478868);
   VbbHcc_tags_Aplanarity_stack_5->SetBinError(5,0.3172303);
   VbbHcc_tags_Aplanarity_stack_5->SetBinError(6,0.6295834);
   VbbHcc_tags_Aplanarity_stack_5->SetBinError(7,0.1308148);
   VbbHcc_tags_Aplanarity_stack_5->SetBinError(11,0.008551371);
   VbbHcc_tags_Aplanarity_stack_5->SetEntries(3416);

   ci = TColor::GetColor("#ff99cc");
   VbbHcc_tags_Aplanarity_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Aplanarity_stack_5->SetLineColor(ci);
   VbbHcc_tags_Aplanarity_stack_5->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Aplanarity_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_5->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_Aplanarity_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_5->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_Aplanarity_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Aplanarity_stack_5,"");
   
   TH1D *VbbHcc_tags_Aplanarity_stack_6 = new TH1D("VbbHcc_tags_Aplanarity_stack_6","",50,0,1);
   VbbHcc_tags_Aplanarity_stack_6->SetBinContent(1,1.058703);
   VbbHcc_tags_Aplanarity_stack_6->SetBinContent(2,0.1974948);
   VbbHcc_tags_Aplanarity_stack_6->SetBinError(1,0.3553509);
   VbbHcc_tags_Aplanarity_stack_6->SetBinError(2,0.1396731);
   VbbHcc_tags_Aplanarity_stack_6->SetEntries(11);

   ci = TColor::GetColor("#9933ff");
   VbbHcc_tags_Aplanarity_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Aplanarity_stack_6->SetLineColor(ci);
   VbbHcc_tags_Aplanarity_stack_6->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Aplanarity_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_6->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_Aplanarity_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_6->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_Aplanarity_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Aplanarity_stack_6,"");
   
   TH1D *VbbHcc_tags_Aplanarity_stack_7 = new TH1D("VbbHcc_tags_Aplanarity_stack_7","",50,0,1);
   VbbHcc_tags_Aplanarity_stack_7->SetBinContent(1,4.123549);
   VbbHcc_tags_Aplanarity_stack_7->SetBinContent(2,0.2809519);
   VbbHcc_tags_Aplanarity_stack_7->SetBinContent(3,0.1159892);
   VbbHcc_tags_Aplanarity_stack_7->SetBinContent(8,0.07500666);
   VbbHcc_tags_Aplanarity_stack_7->SetBinError(1,0.642969);
   VbbHcc_tags_Aplanarity_stack_7->SetBinError(2,0.1634505);
   VbbHcc_tags_Aplanarity_stack_7->SetBinError(3,0.1159892);
   VbbHcc_tags_Aplanarity_stack_7->SetBinError(8,0.07500666);
   VbbHcc_tags_Aplanarity_stack_7->SetEntries(48);

   ci = TColor::GetColor("#3399ff");
   VbbHcc_tags_Aplanarity_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Aplanarity_stack_7->SetLineColor(ci);
   VbbHcc_tags_Aplanarity_stack_7->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Aplanarity_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_7->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_Aplanarity_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_7->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_Aplanarity_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Aplanarity_stack_7,"");
   
   TH1D *VbbHcc_tags_Aplanarity_stack_8 = new TH1D("VbbHcc_tags_Aplanarity_stack_8","",50,0,1);
   VbbHcc_tags_Aplanarity_stack_8->SetBinContent(1,31.59975);
   VbbHcc_tags_Aplanarity_stack_8->SetBinContent(2,3.207193);
   VbbHcc_tags_Aplanarity_stack_8->SetBinContent(3,0.738604);
   VbbHcc_tags_Aplanarity_stack_8->SetBinContent(4,1.101915);
   VbbHcc_tags_Aplanarity_stack_8->SetBinError(1,2.652908);
   VbbHcc_tags_Aplanarity_stack_8->SetBinError(2,0.8410352);
   VbbHcc_tags_Aplanarity_stack_8->SetBinError(3,0.3746407);
   VbbHcc_tags_Aplanarity_stack_8->SetBinError(4,0.4989701);
   VbbHcc_tags_Aplanarity_stack_8->SetEntries(173);

   ci = TColor::GetColor("#33ff99");
   VbbHcc_tags_Aplanarity_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Aplanarity_stack_8->SetLineColor(ci);
   VbbHcc_tags_Aplanarity_stack_8->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Aplanarity_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_8->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_Aplanarity_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_8->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_Aplanarity_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Aplanarity_stack_8,"");
   
   TH1D *VbbHcc_tags_Aplanarity_stack_9 = new TH1D("VbbHcc_tags_Aplanarity_stack_9","",50,0,1);
   VbbHcc_tags_Aplanarity_stack_9->SetBinContent(1,29.19039);
   VbbHcc_tags_Aplanarity_stack_9->SetBinContent(2,2.399755);
   VbbHcc_tags_Aplanarity_stack_9->SetBinContent(3,0.4291549);
   VbbHcc_tags_Aplanarity_stack_9->SetBinContent(4,0.1402821);
   VbbHcc_tags_Aplanarity_stack_9->SetBinContent(5,0.05575735);
   VbbHcc_tags_Aplanarity_stack_9->SetBinContent(6,0.03784431);
   VbbHcc_tags_Aplanarity_stack_9->SetBinContent(7,0.01936552);
   VbbHcc_tags_Aplanarity_stack_9->SetBinContent(8,0.01559951);
   VbbHcc_tags_Aplanarity_stack_9->SetBinContent(9,0.01084379);
   VbbHcc_tags_Aplanarity_stack_9->SetBinContent(10,0.002152102);
   VbbHcc_tags_Aplanarity_stack_9->SetBinContent(11,0.004201055);
   VbbHcc_tags_Aplanarity_stack_9->SetBinContent(17,0.001922685);
   VbbHcc_tags_Aplanarity_stack_9->SetBinError(1,0.1924889);
   VbbHcc_tags_Aplanarity_stack_9->SetBinError(2,0.05472926);
   VbbHcc_tags_Aplanarity_stack_9->SetBinError(3,0.02305301);
   VbbHcc_tags_Aplanarity_stack_9->SetBinError(4,0.01341152);
   VbbHcc_tags_Aplanarity_stack_9->SetBinError(5,0.008478718);
   VbbHcc_tags_Aplanarity_stack_9->SetBinError(6,0.006763452);
   VbbHcc_tags_Aplanarity_stack_9->SetBinError(7,0.005028655);
   VbbHcc_tags_Aplanarity_stack_9->SetBinError(8,0.00444694);
   VbbHcc_tags_Aplanarity_stack_9->SetBinError(9,0.003935284);
   VbbHcc_tags_Aplanarity_stack_9->SetBinError(10,0.001530796);
   VbbHcc_tags_Aplanarity_stack_9->SetBinError(11,0.002502522);
   VbbHcc_tags_Aplanarity_stack_9->SetBinError(17,0.001360416);
   VbbHcc_tags_Aplanarity_stack_9->SetEntries(28391);

   ci = TColor::GetColor("#cccc00");
   VbbHcc_tags_Aplanarity_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Aplanarity_stack_9->SetLineColor(ci);
   VbbHcc_tags_Aplanarity_stack_9->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Aplanarity_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_9->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_Aplanarity_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_9->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_Aplanarity_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Aplanarity_stack_9,"");
   
   TH1D *VbbHcc_tags_Aplanarity_stack_10 = new TH1D("VbbHcc_tags_Aplanarity_stack_10","",50,0,1);
   VbbHcc_tags_Aplanarity_stack_10->SetBinContent(1,13.33082);
   VbbHcc_tags_Aplanarity_stack_10->SetBinContent(2,1.380757);
   VbbHcc_tags_Aplanarity_stack_10->SetBinContent(3,0.3294793);
   VbbHcc_tags_Aplanarity_stack_10->SetBinContent(4,0.1228604);
   VbbHcc_tags_Aplanarity_stack_10->SetBinContent(5,0.04684423);
   VbbHcc_tags_Aplanarity_stack_10->SetBinContent(6,0.02517205);
   VbbHcc_tags_Aplanarity_stack_10->SetBinContent(7,0.01543465);
   VbbHcc_tags_Aplanarity_stack_10->SetBinContent(8,0.007889658);
   VbbHcc_tags_Aplanarity_stack_10->SetBinContent(9,0.007614537);
   VbbHcc_tags_Aplanarity_stack_10->SetBinContent(10,0.004593698);
   VbbHcc_tags_Aplanarity_stack_10->SetBinContent(11,0.001680128);
   VbbHcc_tags_Aplanarity_stack_10->SetBinContent(12,0.001384499);
   VbbHcc_tags_Aplanarity_stack_10->SetBinContent(13,0.001436173);
   VbbHcc_tags_Aplanarity_stack_10->SetBinContent(14,0.0006675882);
   VbbHcc_tags_Aplanarity_stack_10->SetBinContent(15,0.0003587362);
   VbbHcc_tags_Aplanarity_stack_10->SetBinContent(16,0.0003837043);
   VbbHcc_tags_Aplanarity_stack_10->SetBinContent(17,0.0002641559);
   VbbHcc_tags_Aplanarity_stack_10->SetBinContent(18,0.001185943);
   VbbHcc_tags_Aplanarity_stack_10->SetBinError(1,0.06594415);
   VbbHcc_tags_Aplanarity_stack_10->SetBinError(2,0.02102431);
   VbbHcc_tags_Aplanarity_stack_10->SetBinError(3,0.01045365);
   VbbHcc_tags_Aplanarity_stack_10->SetBinError(4,0.006351264);
   VbbHcc_tags_Aplanarity_stack_10->SetBinError(5,0.003971436);
   VbbHcc_tags_Aplanarity_stack_10->SetBinError(6,0.002917085);
   VbbHcc_tags_Aplanarity_stack_10->SetBinError(7,0.002196658);
   VbbHcc_tags_Aplanarity_stack_10->SetBinError(8,0.001608292);
   VbbHcc_tags_Aplanarity_stack_10->SetBinError(9,0.001616632);
   VbbHcc_tags_Aplanarity_stack_10->SetBinError(10,0.001268466);
   VbbHcc_tags_Aplanarity_stack_10->SetBinError(11,0.0007756935);
   VbbHcc_tags_Aplanarity_stack_10->SetBinError(12,0.0007051914);
   VbbHcc_tags_Aplanarity_stack_10->SetBinError(13,0.000650668);
   VbbHcc_tags_Aplanarity_stack_10->SetBinError(14,0.0004740903);
   VbbHcc_tags_Aplanarity_stack_10->SetBinError(15,0.0003587362);
   VbbHcc_tags_Aplanarity_stack_10->SetBinError(16,0.0003837043);
   VbbHcc_tags_Aplanarity_stack_10->SetBinError(17,0.0002641559);
   VbbHcc_tags_Aplanarity_stack_10->SetBinError(18,0.0006989771);
   VbbHcc_tags_Aplanarity_stack_10->SetEntries(49090);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_tags_Aplanarity_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Aplanarity_stack_10->SetLineColor(ci);
   VbbHcc_tags_Aplanarity_stack_10->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Aplanarity_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_10->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_Aplanarity_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_10->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_Aplanarity_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Aplanarity_stack_10,"");
   
   TH1D *VbbHcc_tags_Aplanarity_stack_11 = new TH1D("VbbHcc_tags_Aplanarity_stack_11","",50,0,1);
   VbbHcc_tags_Aplanarity_stack_11->SetBinContent(1,0.0736171);
   VbbHcc_tags_Aplanarity_stack_11->SetBinContent(2,0.003814334);
   VbbHcc_tags_Aplanarity_stack_11->SetBinContent(3,0.001929603);
   VbbHcc_tags_Aplanarity_stack_11->SetBinError(1,0.0130501);
   VbbHcc_tags_Aplanarity_stack_11->SetBinError(2,0.002697153);
   VbbHcc_tags_Aplanarity_stack_11->SetBinError(3,0.001929603);
   VbbHcc_tags_Aplanarity_stack_11->SetEntries(36);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_tags_Aplanarity_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Aplanarity_stack_11->SetLineColor(ci);
   VbbHcc_tags_Aplanarity_stack_11->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Aplanarity_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_11->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_Aplanarity_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_11->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_Aplanarity_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Aplanarity_stack_11,"");
   
   TH1D *VbbHcc_tags_Aplanarity_stack_12 = new TH1D("VbbHcc_tags_Aplanarity_stack_12","",50,0,1);
   VbbHcc_tags_Aplanarity_stack_12->SetBinContent(1,0.03130194);
   VbbHcc_tags_Aplanarity_stack_12->SetBinContent(2,0.002834715);
   VbbHcc_tags_Aplanarity_stack_12->SetBinContent(3,0.0008295756);
   VbbHcc_tags_Aplanarity_stack_12->SetBinContent(4,0.0005827289);
   VbbHcc_tags_Aplanarity_stack_12->SetBinContent(5,0.0002016328);
   VbbHcc_tags_Aplanarity_stack_12->SetBinContent(8,9.942088e-05);
   VbbHcc_tags_Aplanarity_stack_12->SetBinError(1,0.003015065);
   VbbHcc_tags_Aplanarity_stack_12->SetBinError(2,0.0009184804);
   VbbHcc_tags_Aplanarity_stack_12->SetBinError(3,0.0004795644);
   VbbHcc_tags_Aplanarity_stack_12->SetBinError(4,0.0004122316);
   VbbHcc_tags_Aplanarity_stack_12->SetBinError(5,0.0002016328);
   VbbHcc_tags_Aplanarity_stack_12->SetBinError(8,9.942088e-05);
   VbbHcc_tags_Aplanarity_stack_12->SetEntries(127);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_tags_Aplanarity_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Aplanarity_stack_12->SetLineColor(ci);
   VbbHcc_tags_Aplanarity_stack_12->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Aplanarity_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_12->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_Aplanarity_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_12->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_Aplanarity_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Aplanarity_stack_12,"");
   st->Draw("hist");
   
   TH1D *VbbHcc_tags_Aplanarity__91 = new TH1D("VbbHcc_tags_Aplanarity__91","",50,0,1);
   VbbHcc_tags_Aplanarity__91->SetBinContent(1,79242);
   VbbHcc_tags_Aplanarity__91->SetBinContent(2,9878);
   VbbHcc_tags_Aplanarity__91->SetBinContent(3,2843);
   VbbHcc_tags_Aplanarity__91->SetBinContent(4,1062);
   VbbHcc_tags_Aplanarity__91->SetBinContent(5,516);
   VbbHcc_tags_Aplanarity__91->SetBinContent(6,246);
   VbbHcc_tags_Aplanarity__91->SetBinContent(7,150);
   VbbHcc_tags_Aplanarity__91->SetBinContent(8,78);
   VbbHcc_tags_Aplanarity__91->SetBinContent(9,69);
   VbbHcc_tags_Aplanarity__91->SetBinContent(10,32);
   VbbHcc_tags_Aplanarity__91->SetBinContent(11,19);
   VbbHcc_tags_Aplanarity__91->SetBinContent(12,19);
   VbbHcc_tags_Aplanarity__91->SetBinContent(13,9);
   VbbHcc_tags_Aplanarity__91->SetBinContent(14,4);
   VbbHcc_tags_Aplanarity__91->SetBinContent(15,4);
   VbbHcc_tags_Aplanarity__91->SetBinContent(16,1);
   VbbHcc_tags_Aplanarity__91->SetBinContent(17,2);
   VbbHcc_tags_Aplanarity__91->SetEntries(94223);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Aplanarity__91->SetLineColor(ci);
   VbbHcc_tags_Aplanarity__91->SetLineWidth(2);
   VbbHcc_tags_Aplanarity__91->SetMarkerStyle(20);
   VbbHcc_tags_Aplanarity__91->SetMarkerSize(1.2);
   VbbHcc_tags_Aplanarity__91->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Aplanarity__91->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity__91->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_Aplanarity__91->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity__91->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity__91->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity__91->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity__91->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_Aplanarity__91->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity__91->Draw("same E");
   
   Double_t Graph_from_VbbHcc_tags_Aplanarity_fx1091[50] = { 0.01, 0.03, 0.05, 0.07, 0.09, 0.11, 0.13, 0.15, 0.17, 0.19, 0.21, 0.23, 0.25, 0.27, 0.29, 0.31, 0.33,
   0.35, 0.37, 0.39, 0.41, 0.43, 0.45, 0.47, 0.49, 0.51, 0.53, 0.55, 0.57, 0.59, 0.61, 0.63, 0.65,
   0.67, 0.69, 0.71, 0.73, 0.75, 0.77, 0.79, 0.81, 0.83, 0.85, 0.87, 0.89, 0.91, 0.93, 0.95, 0.97,
   0.99 };
   Double_t Graph_from_VbbHcc_tags_Aplanarity_fy1091[50] = { 131061.9, 21696.71, 3486.557, 871.1662, 226.4251, 136.0941, 109.8448, 48.54043, 61.05892, 9.180373, 31.15385, 1.37428, 1.151926, 0.7620991, 19.72537, 0.1841767, 0.08969896,
   0.1465963, 0.0550937, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0 };
   Double_t Graph_from_VbbHcc_tags_Aplanarity_fex1091[50] = { 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01 };
   Double_t Graph_from_VbbHcc_tags_Aplanarity_fey1091[50] = { 5255.281, 3020.57, 684.6741, 206.0944, 40.46907, 33.19498, 31.5438, 17.76881, 34.16037, 4.323167, 23.9043, 0.2809002, 0.2588101, 0.1996233, 19.06049, 0.106645, 0.06230124,
   0.08489711, 0.0550937, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0 };
   TGraphErrors *gre = new TGraphErrors(50,Graph_from_VbbHcc_tags_Aplanarity_fx1091,Graph_from_VbbHcc_tags_Aplanarity_fy1091,Graph_from_VbbHcc_tags_Aplanarity_fex1091,Graph_from_VbbHcc_tags_Aplanarity_fey1091);
   gre->SetName("Graph_from_VbbHcc_tags_Aplanarity");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_tags_Aplanarity1091 = new TH1F("Graph_Graph_from_VbbHcc_tags_Aplanarity1091","",100,0,1.1);
   Graph_Graph_from_VbbHcc_tags_Aplanarity1091->SetMinimum(0);
   Graph_Graph_from_VbbHcc_tags_Aplanarity1091->SetMaximum(149948.9);
   Graph_Graph_from_VbbHcc_tags_Aplanarity1091->SetDirectory(nullptr);
   Graph_Graph_from_VbbHcc_tags_Aplanarity1091->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_tags_Aplanarity1091->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_tags_Aplanarity1091->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_Aplanarity1091->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_from_VbbHcc_tags_Aplanarity1091->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_tags_Aplanarity1091->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_Aplanarity1091->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_tags_Aplanarity1091->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_Aplanarity1091->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_from_VbbHcc_tags_Aplanarity1091->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_tags_Aplanarity1091);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_tags_Aplanarity","Data (JetHT, 2016)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_tags_Aplanarity","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Aplanarity","ZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Aplanarity","ggZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Aplanarity","ZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Aplanarity","ZZ","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Aplanarity","WZ","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Aplanarity","WW","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Aplanarity","W + jets","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Aplanarity","Z + jets","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Aplanarity","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Aplanarity","Single top","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Aplanarity","QCD","F");

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
   entry=leg->AddEntry("Graph_from_VbbHcc_tags_Aplanarity","MC unc. (stat.)","fl");

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
   Aplanarity_tags_16->cd();
  
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
   data_mc_ratio__92->SetBinContent(1,0.604615);
   data_mc_ratio__92->SetBinContent(2,0.4552764);
   data_mc_ratio__92->SetBinContent(3,0.8154176);
   data_mc_ratio__92->SetBinContent(4,1.219056);
   data_mc_ratio__92->SetBinContent(5,2.278899);
   data_mc_ratio__92->SetBinContent(6,1.807573);
   data_mc_ratio__92->SetBinContent(7,1.365563);
   data_mc_ratio__92->SetBinContent(8,1.606908);
   data_mc_ratio__92->SetBinContent(9,1.130056);
   data_mc_ratio__92->SetBinContent(10,3.485697);
   data_mc_ratio__92->SetBinContent(11,0.6098764);
   data_mc_ratio__92->SetBinContent(12,13.82542);
   data_mc_ratio__92->SetBinContent(13,7.813001);
   data_mc_ratio__92->SetBinContent(14,5.248661);
   data_mc_ratio__92->SetBinContent(15,0.2027845);
   data_mc_ratio__92->SetBinContent(16,5.429568);
   data_mc_ratio__92->SetBinContent(17,22.2968);
   data_mc_ratio__92->SetBinError(1,0.002147836);
   data_mc_ratio__92->SetBinError(2,0.004580792);
   data_mc_ratio__92->SetBinError(3,0.01529296);
   data_mc_ratio__92->SetBinError(4,0.03740772);
   data_mc_ratio__92->SetBinError(5,0.100323);
   data_mc_ratio__92->SetBinError(6,0.1152466);
   data_mc_ratio__92->SetBinError(7,0.1114978);
   data_mc_ratio__92->SetBinError(8,0.1819465);
   data_mc_ratio__92->SetBinError(9,0.1360428);
   data_mc_ratio__92->SetBinError(10,0.61619);
   data_mc_ratio__92->SetBinError(11,0.1399152);
   data_mc_ratio__92->SetBinError(12,3.171769);
   data_mc_ratio__92->SetBinError(13,2.604334);
   data_mc_ratio__92->SetBinError(14,2.624331);
   data_mc_ratio__92->SetBinError(15,0.1013923);
   data_mc_ratio__92->SetBinError(16,5.429568);
   data_mc_ratio__92->SetBinError(17,15.76622);
   data_mc_ratio__92->SetMinimum(0.4);
   data_mc_ratio__92->SetMaximum(1.6);
   data_mc_ratio__92->SetEntries(8.655447);
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
   Double_t Graph_from_mc_statistical_error_fey1092[50] = { 0.0400977, 0.1392179, 0.1963754, 0.236573, 0.1787305, 0.2439119, 0.287167, 0.366062, 0.5594657, 0.4709141, 0.7672985, 0.2043981, 0.224676, 0.2619388, 0.9662932, 0.5790365, 0.6945592,
   0.5791217, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
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
   Graph_Graph_from_mc_statistical_error1092->SetMinimum(9.992007e-17);
   Graph_Graph_from_mc_statistical_error1092->SetMaximum(2.2);
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
   Aplanarity_tags_16->cd();
   Aplanarity_tags_16->Modified();
   Aplanarity_tags_16->cd();
   Aplanarity_tags_16->SetSelected(Aplanarity_tags_16);
}
