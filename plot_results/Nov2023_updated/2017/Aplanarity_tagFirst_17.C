#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Aplanarity_tagFirst_17()
{
//=========Macro generated from canvas: Aplanarity_tagFirst_17/Aplanarity_tagFirst_17
//=========  (Wed Jan 10 10:25:34 2024) by ROOT version 6.28/10
   TCanvas *Aplanarity_tagFirst_17 = new TCanvas("Aplanarity_tagFirst_17", "Aplanarity_tagFirst_17",0,0,600,600);
   Aplanarity_tagFirst_17->SetHighLightColor(2);
   Aplanarity_tagFirst_17->Range(0,0,1,1);
   Aplanarity_tagFirst_17->SetFillColor(0);
   Aplanarity_tagFirst_17->SetFillStyle(4000);
   Aplanarity_tagFirst_17->SetBorderMode(0);
   Aplanarity_tagFirst_17->SetBorderSize(2);
   Aplanarity_tagFirst_17->SetFrameFillStyle(1000);
   Aplanarity_tagFirst_17->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.1532254,-3911.888,1.052419,3907985);
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
   st->SetMaximum(3516796);
   
   TH1F *st_stack_191 = new TH1F("st_stack_191","",50,0,1);
   st_stack_191->SetMinimum(0.01);
   st_stack_191->SetMaximum(3516796);
   st_stack_191->SetDirectory(nullptr);
   st_stack_191->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_191->SetLineColor(ci);
   st_stack_191->SetLineWidth(0);
   st_stack_191->GetXaxis()->SetRange(1,50);
   st_stack_191->GetXaxis()->SetLabelFont(42);
   st_stack_191->GetXaxis()->SetTitleOffset(1);
   st_stack_191->GetXaxis()->SetTitleFont(42);
   st_stack_191->GetYaxis()->SetTitle("Events/0.02");
   st_stack_191->GetYaxis()->SetLabelFont(42);
   st_stack_191->GetYaxis()->SetLabelSize(0.05);
   st_stack_191->GetYaxis()->SetTitleSize(0.057);
   st_stack_191->GetYaxis()->SetTitleOffset(1.2);
   st_stack_191->GetYaxis()->SetTitleFont(42);
   st_stack_191->GetZaxis()->SetLabelFont(42);
   st_stack_191->GetZaxis()->SetTitleOffset(1);
   st_stack_191->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_191);
   
   
   TH1D *VH_tagFirst_Aplanarity_stack_1 = new TH1D("VH_tagFirst_Aplanarity_stack_1","",50,0,1);
   VH_tagFirst_Aplanarity_stack_1->SetBinContent(1,1306705);
   VH_tagFirst_Aplanarity_stack_1->SetBinContent(2,161236.8);
   VH_tagFirst_Aplanarity_stack_1->SetBinContent(3,39714.23);
   VH_tagFirst_Aplanarity_stack_1->SetBinContent(4,14563.6);
   VH_tagFirst_Aplanarity_stack_1->SetBinContent(5,7045.985);
   VH_tagFirst_Aplanarity_stack_1->SetBinContent(6,2787.426);
   VH_tagFirst_Aplanarity_stack_1->SetBinContent(7,1037.097);
   VH_tagFirst_Aplanarity_stack_1->SetBinContent(8,1033.693);
   VH_tagFirst_Aplanarity_stack_1->SetBinContent(9,537.1626);
   VH_tagFirst_Aplanarity_stack_1->SetBinContent(10,445.4658);
   VH_tagFirst_Aplanarity_stack_1->SetBinContent(11,181.82);
   VH_tagFirst_Aplanarity_stack_1->SetBinContent(12,94.36569);
   VH_tagFirst_Aplanarity_stack_1->SetBinContent(13,40.48653);
   VH_tagFirst_Aplanarity_stack_1->SetBinContent(14,47.63889);
   VH_tagFirst_Aplanarity_stack_1->SetBinContent(15,15.3141);
   VH_tagFirst_Aplanarity_stack_1->SetBinContent(16,0.5149894);
   VH_tagFirst_Aplanarity_stack_1->SetBinContent(17,40.39595);
   VH_tagFirst_Aplanarity_stack_1->SetBinContent(18,26.31802);
   VH_tagFirst_Aplanarity_stack_1->SetBinError(1,30504.87);
   VH_tagFirst_Aplanarity_stack_1->SetBinError(2,5935.606);
   VH_tagFirst_Aplanarity_stack_1->SetBinError(3,3151.601);
   VH_tagFirst_Aplanarity_stack_1->SetBinError(4,1620.443);
   VH_tagFirst_Aplanarity_stack_1->SetBinError(5,1599.056);
   VH_tagFirst_Aplanarity_stack_1->SetBinError(6,594.368);
   VH_tagFirst_Aplanarity_stack_1->SetBinError(7,243.1818);
   VH_tagFirst_Aplanarity_stack_1->SetBinError(8,331.845);
   VH_tagFirst_Aplanarity_stack_1->SetBinError(9,191.907);
   VH_tagFirst_Aplanarity_stack_1->SetBinError(10,287.6893);
   VH_tagFirst_Aplanarity_stack_1->SetBinError(11,55.70542);
   VH_tagFirst_Aplanarity_stack_1->SetBinError(12,33.37916);
   VH_tagFirst_Aplanarity_stack_1->SetBinError(13,14.55749);
   VH_tagFirst_Aplanarity_stack_1->SetBinError(14,28.52361);
   VH_tagFirst_Aplanarity_stack_1->SetBinError(15,8.633355);
   VH_tagFirst_Aplanarity_stack_1->SetBinError(16,0.5149894);
   VH_tagFirst_Aplanarity_stack_1->SetBinError(17,28.55672);
   VH_tagFirst_Aplanarity_stack_1->SetBinError(18,25.89342);
   VH_tagFirst_Aplanarity_stack_1->SetEntries(173057);

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
   VH_tagFirst_Aplanarity_stack_2->SetBinContent(1,14029.95);
   VH_tagFirst_Aplanarity_stack_2->SetBinContent(2,2001.035);
   VH_tagFirst_Aplanarity_stack_2->SetBinContent(3,522.1738);
   VH_tagFirst_Aplanarity_stack_2->SetBinContent(4,175.5042);
   VH_tagFirst_Aplanarity_stack_2->SetBinContent(5,77.15388);
   VH_tagFirst_Aplanarity_stack_2->SetBinContent(6,37.54459);
   VH_tagFirst_Aplanarity_stack_2->SetBinContent(7,21.45394);
   VH_tagFirst_Aplanarity_stack_2->SetBinContent(8,11.44286);
   VH_tagFirst_Aplanarity_stack_2->SetBinContent(9,6.00296);
   VH_tagFirst_Aplanarity_stack_2->SetBinContent(10,4.518297);
   VH_tagFirst_Aplanarity_stack_2->SetBinContent(11,2.957268);
   VH_tagFirst_Aplanarity_stack_2->SetBinContent(12,2.368763);
   VH_tagFirst_Aplanarity_stack_2->SetBinContent(13,0.8590996);
   VH_tagFirst_Aplanarity_stack_2->SetBinContent(14,1.68764);
   VH_tagFirst_Aplanarity_stack_2->SetBinContent(15,1.10446);
   VH_tagFirst_Aplanarity_stack_2->SetBinContent(16,0.2458645);
   VH_tagFirst_Aplanarity_stack_2->SetBinContent(17,0.0155317);
   VH_tagFirst_Aplanarity_stack_2->SetBinContent(18,0.3631022);
   VH_tagFirst_Aplanarity_stack_2->SetBinContent(19,0.09576161);
   VH_tagFirst_Aplanarity_stack_2->SetBinError(1,48.64108);
   VH_tagFirst_Aplanarity_stack_2->SetBinError(2,18.38682);
   VH_tagFirst_Aplanarity_stack_2->SetBinError(3,9.398211);
   VH_tagFirst_Aplanarity_stack_2->SetBinError(4,5.477622);
   VH_tagFirst_Aplanarity_stack_2->SetBinError(5,3.563297);
   VH_tagFirst_Aplanarity_stack_2->SetBinError(6,2.505629);
   VH_tagFirst_Aplanarity_stack_2->SetBinError(7,1.980421);
   VH_tagFirst_Aplanarity_stack_2->SetBinError(8,1.332083);
   VH_tagFirst_Aplanarity_stack_2->SetBinError(9,0.9838925);
   VH_tagFirst_Aplanarity_stack_2->SetBinError(10,0.9464409);
   VH_tagFirst_Aplanarity_stack_2->SetBinError(11,0.6772705);
   VH_tagFirst_Aplanarity_stack_2->SetBinError(12,0.6989935);
   VH_tagFirst_Aplanarity_stack_2->SetBinError(13,0.3191737);
   VH_tagFirst_Aplanarity_stack_2->SetBinError(14,0.6724886);
   VH_tagFirst_Aplanarity_stack_2->SetBinError(15,0.5324258);
   VH_tagFirst_Aplanarity_stack_2->SetBinError(16,0.1045544);
   VH_tagFirst_Aplanarity_stack_2->SetBinError(17,0.0155317);
   VH_tagFirst_Aplanarity_stack_2->SetBinError(18,0.2665937);
   VH_tagFirst_Aplanarity_stack_2->SetBinError(19,0.06772152);
   VH_tagFirst_Aplanarity_stack_2->SetEntries(217592);

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
   VH_tagFirst_Aplanarity_stack_3->SetBinContent(0,0.04818465);
   VH_tagFirst_Aplanarity_stack_3->SetBinContent(1,245870.7);
   VH_tagFirst_Aplanarity_stack_3->SetBinContent(2,34349.65);
   VH_tagFirst_Aplanarity_stack_3->SetBinContent(3,9073.412);
   VH_tagFirst_Aplanarity_stack_3->SetBinContent(4,3323.279);
   VH_tagFirst_Aplanarity_stack_3->SetBinContent(5,1487.84);
   VH_tagFirst_Aplanarity_stack_3->SetBinContent(6,757.7502);
   VH_tagFirst_Aplanarity_stack_3->SetBinContent(7,431.3482);
   VH_tagFirst_Aplanarity_stack_3->SetBinContent(8,251.3);
   VH_tagFirst_Aplanarity_stack_3->SetBinContent(9,153.5338);
   VH_tagFirst_Aplanarity_stack_3->SetBinContent(10,94.51691);
   VH_tagFirst_Aplanarity_stack_3->SetBinContent(11,64.3028);
   VH_tagFirst_Aplanarity_stack_3->SetBinContent(12,44.04446);
   VH_tagFirst_Aplanarity_stack_3->SetBinContent(13,26.32005);
   VH_tagFirst_Aplanarity_stack_3->SetBinContent(14,17.66748);
   VH_tagFirst_Aplanarity_stack_3->SetBinContent(15,10.77441);
   VH_tagFirst_Aplanarity_stack_3->SetBinContent(16,6.180757);
   VH_tagFirst_Aplanarity_stack_3->SetBinContent(17,3.455713);
   VH_tagFirst_Aplanarity_stack_3->SetBinContent(18,1.631306);
   VH_tagFirst_Aplanarity_stack_3->SetBinContent(19,0.9605683);
   VH_tagFirst_Aplanarity_stack_3->SetBinContent(20,0.8539524);
   VH_tagFirst_Aplanarity_stack_3->SetBinContent(21,0.200304);
   VH_tagFirst_Aplanarity_stack_3->SetBinContent(22,0.1236564);
   VH_tagFirst_Aplanarity_stack_3->SetBinContent(23,0.07809907);
   VH_tagFirst_Aplanarity_stack_3->SetBinError(0,0.04818465);
   VH_tagFirst_Aplanarity_stack_3->SetBinError(1,126.5245);
   VH_tagFirst_Aplanarity_stack_3->SetBinError(2,47.20808);
   VH_tagFirst_Aplanarity_stack_3->SetBinError(3,24.18782);
   VH_tagFirst_Aplanarity_stack_3->SetBinError(4,14.59788);
   VH_tagFirst_Aplanarity_stack_3->SetBinError(5,9.752026);
   VH_tagFirst_Aplanarity_stack_3->SetBinError(6,6.950958);
   VH_tagFirst_Aplanarity_stack_3->SetBinError(7,5.252221);
   VH_tagFirst_Aplanarity_stack_3->SetBinError(8,3.997351);
   VH_tagFirst_Aplanarity_stack_3->SetBinError(9,3.12191);
   VH_tagFirst_Aplanarity_stack_3->SetBinError(10,2.443888);
   VH_tagFirst_Aplanarity_stack_3->SetBinError(11,2.025063);
   VH_tagFirst_Aplanarity_stack_3->SetBinError(12,1.676038);
   VH_tagFirst_Aplanarity_stack_3->SetBinError(13,1.294675);
   VH_tagFirst_Aplanarity_stack_3->SetBinError(14,1.067847);
   VH_tagFirst_Aplanarity_stack_3->SetBinError(15,0.8443061);
   VH_tagFirst_Aplanarity_stack_3->SetBinError(16,0.6198667);
   VH_tagFirst_Aplanarity_stack_3->SetBinError(17,0.475365);
   VH_tagFirst_Aplanarity_stack_3->SetBinError(18,0.3182399);
   VH_tagFirst_Aplanarity_stack_3->SetBinError(19,0.239451);
   VH_tagFirst_Aplanarity_stack_3->SetBinError(20,0.2295716);
   VH_tagFirst_Aplanarity_stack_3->SetBinError(21,0.1039918);
   VH_tagFirst_Aplanarity_stack_3->SetBinError(22,0.09034689);
   VH_tagFirst_Aplanarity_stack_3->SetBinError(23,0.07809907);
   VH_tagFirst_Aplanarity_stack_3->SetEntries(4962574);

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
   VH_tagFirst_Aplanarity_stack_4->SetBinContent(1,10026.56);
   VH_tagFirst_Aplanarity_stack_4->SetBinContent(2,1119.721);
   VH_tagFirst_Aplanarity_stack_4->SetBinContent(3,295.4728);
   VH_tagFirst_Aplanarity_stack_4->SetBinContent(4,118.281);
   VH_tagFirst_Aplanarity_stack_4->SetBinContent(5,41.24626);
   VH_tagFirst_Aplanarity_stack_4->SetBinContent(6,17.67647);
   VH_tagFirst_Aplanarity_stack_4->SetBinContent(7,9.917906);
   VH_tagFirst_Aplanarity_stack_4->SetBinContent(8,7.667433);
   VH_tagFirst_Aplanarity_stack_4->SetBinContent(9,3.814803);
   VH_tagFirst_Aplanarity_stack_4->SetBinContent(10,2.635627);
   VH_tagFirst_Aplanarity_stack_4->SetBinContent(11,2.026535);
   VH_tagFirst_Aplanarity_stack_4->SetBinContent(12,1.031646);
   VH_tagFirst_Aplanarity_stack_4->SetBinContent(13,0.2679701);
   VH_tagFirst_Aplanarity_stack_4->SetBinContent(14,0.4211975);
   VH_tagFirst_Aplanarity_stack_4->SetBinContent(15,0.1734388);
   VH_tagFirst_Aplanarity_stack_4->SetBinContent(16,0.1111432);
   VH_tagFirst_Aplanarity_stack_4->SetBinContent(17,0.07273951);
   VH_tagFirst_Aplanarity_stack_4->SetBinContent(18,0.07188352);
   VH_tagFirst_Aplanarity_stack_4->SetBinError(1,64.77903);
   VH_tagFirst_Aplanarity_stack_4->SetBinError(2,23.59769);
   VH_tagFirst_Aplanarity_stack_4->SetBinError(3,13.56912);
   VH_tagFirst_Aplanarity_stack_4->SetBinError(4,9.83151);
   VH_tagFirst_Aplanarity_stack_4->SetBinError(5,2.984938);
   VH_tagFirst_Aplanarity_stack_4->SetBinError(6,1.820373);
   VH_tagFirst_Aplanarity_stack_4->SetBinError(7,1.358016);
   VH_tagFirst_Aplanarity_stack_4->SetBinError(8,3.31183);
   VH_tagFirst_Aplanarity_stack_4->SetBinError(9,0.8959431);
   VH_tagFirst_Aplanarity_stack_4->SetBinError(10,0.7499786);
   VH_tagFirst_Aplanarity_stack_4->SetBinError(11,0.6807653);
   VH_tagFirst_Aplanarity_stack_4->SetBinError(12,0.4135576);
   VH_tagFirst_Aplanarity_stack_4->SetBinError(13,0.1361009);
   VH_tagFirst_Aplanarity_stack_4->SetBinError(14,0.1956345);
   VH_tagFirst_Aplanarity_stack_4->SetBinError(15,0.1113334);
   VH_tagFirst_Aplanarity_stack_4->SetBinError(16,0.1111432);
   VH_tagFirst_Aplanarity_stack_4->SetBinError(17,0.07273951);
   VH_tagFirst_Aplanarity_stack_4->SetBinError(18,0.07188352);
   VH_tagFirst_Aplanarity_stack_4->SetEntries(91824);

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
   VH_tagFirst_Aplanarity_stack_5->SetBinContent(1,5541.331);
   VH_tagFirst_Aplanarity_stack_5->SetBinContent(2,610.2401);
   VH_tagFirst_Aplanarity_stack_5->SetBinContent(3,151.903);
   VH_tagFirst_Aplanarity_stack_5->SetBinContent(4,61.46439);
   VH_tagFirst_Aplanarity_stack_5->SetBinContent(5,17.20217);
   VH_tagFirst_Aplanarity_stack_5->SetBinContent(6,12.15325);
   VH_tagFirst_Aplanarity_stack_5->SetBinContent(7,6.675537);
   VH_tagFirst_Aplanarity_stack_5->SetBinContent(8,3.742564);
   VH_tagFirst_Aplanarity_stack_5->SetBinContent(9,1.97282);
   VH_tagFirst_Aplanarity_stack_5->SetBinContent(10,0.5337917);
   VH_tagFirst_Aplanarity_stack_5->SetBinContent(11,0.9969628);
   VH_tagFirst_Aplanarity_stack_5->SetBinContent(12,0.1931603);
   VH_tagFirst_Aplanarity_stack_5->SetBinContent(13,0.1177054);
   VH_tagFirst_Aplanarity_stack_5->SetBinContent(14,0.09636034);
   VH_tagFirst_Aplanarity_stack_5->SetBinContent(16,0.0117125);
   VH_tagFirst_Aplanarity_stack_5->SetBinError(1,79.43491);
   VH_tagFirst_Aplanarity_stack_5->SetBinError(2,30.19577);
   VH_tagFirst_Aplanarity_stack_5->SetBinError(3,17.23057);
   VH_tagFirst_Aplanarity_stack_5->SetBinError(4,8.736284);
   VH_tagFirst_Aplanarity_stack_5->SetBinError(5,2.749047);
   VH_tagFirst_Aplanarity_stack_5->SetBinError(6,2.656719);
   VH_tagFirst_Aplanarity_stack_5->SetBinError(7,2.103148);
   VH_tagFirst_Aplanarity_stack_5->SetBinError(8,1.579629);
   VH_tagFirst_Aplanarity_stack_5->SetBinError(9,0.4905187);
   VH_tagFirst_Aplanarity_stack_5->SetBinError(10,0.2514399);
   VH_tagFirst_Aplanarity_stack_5->SetBinError(11,0.3296736);
   VH_tagFirst_Aplanarity_stack_5->SetBinError(12,0.1368562);
   VH_tagFirst_Aplanarity_stack_5->SetBinError(13,0.103482);
   VH_tagFirst_Aplanarity_stack_5->SetBinError(14,0.09162424);
   VH_tagFirst_Aplanarity_stack_5->SetBinError(16,0.0117125);
   VH_tagFirst_Aplanarity_stack_5->SetEntries(45580);

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
   VH_tagFirst_Aplanarity_stack_6->SetBinContent(1,50.55152);
   VH_tagFirst_Aplanarity_stack_6->SetBinContent(2,7.101166);
   VH_tagFirst_Aplanarity_stack_6->SetBinContent(3,1.716041);
   VH_tagFirst_Aplanarity_stack_6->SetBinContent(4,0.9593334);
   VH_tagFirst_Aplanarity_stack_6->SetBinContent(7,0.3426317);
   VH_tagFirst_Aplanarity_stack_6->SetBinContent(8,0.2092542);
   VH_tagFirst_Aplanarity_stack_6->SetBinError(1,4.003092);
   VH_tagFirst_Aplanarity_stack_6->SetBinError(2,1.495206);
   VH_tagFirst_Aplanarity_stack_6->SetBinError(3,0.7358646);
   VH_tagFirst_Aplanarity_stack_6->SetBinError(4,0.4906721);
   VH_tagFirst_Aplanarity_stack_6->SetBinError(7,0.3426317);
   VH_tagFirst_Aplanarity_stack_6->SetBinError(8,0.2092542);
   VH_tagFirst_Aplanarity_stack_6->SetEntries(204);

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
   VH_tagFirst_Aplanarity_stack_7->SetBinContent(1,130.557);
   VH_tagFirst_Aplanarity_stack_7->SetBinContent(2,15.22579);
   VH_tagFirst_Aplanarity_stack_7->SetBinContent(3,2.786728);
   VH_tagFirst_Aplanarity_stack_7->SetBinContent(4,1.187326);
   VH_tagFirst_Aplanarity_stack_7->SetBinContent(5,0.5463156);
   VH_tagFirst_Aplanarity_stack_7->SetBinContent(6,0.5333056);
   VH_tagFirst_Aplanarity_stack_7->SetBinContent(8,0.1663628);
   VH_tagFirst_Aplanarity_stack_7->SetBinContent(11,0.266122);
   VH_tagFirst_Aplanarity_stack_7->SetBinError(1,5.795052);
   VH_tagFirst_Aplanarity_stack_7->SetBinError(2,1.954502);
   VH_tagFirst_Aplanarity_stack_7->SetBinError(3,0.8491152);
   VH_tagFirst_Aplanarity_stack_7->SetBinError(4,0.5106958);
   VH_tagFirst_Aplanarity_stack_7->SetBinError(5,0.3863606);
   VH_tagFirst_Aplanarity_stack_7->SetBinError(6,0.377497);
   VH_tagFirst_Aplanarity_stack_7->SetBinError(8,0.1663628);
   VH_tagFirst_Aplanarity_stack_7->SetBinError(11,0.266122);
   VH_tagFirst_Aplanarity_stack_7->SetEntries(620);

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
   VH_tagFirst_Aplanarity_stack_8->SetBinContent(1,104.2425);
   VH_tagFirst_Aplanarity_stack_8->SetBinContent(2,12.006);
   VH_tagFirst_Aplanarity_stack_8->SetBinContent(3,3.937343);
   VH_tagFirst_Aplanarity_stack_8->SetBinContent(4,0.5157984);
   VH_tagFirst_Aplanarity_stack_8->SetBinContent(6,0.2834293);
   VH_tagFirst_Aplanarity_stack_8->SetBinError(1,5.237468);
   VH_tagFirst_Aplanarity_stack_8->SetBinError(2,1.761419);
   VH_tagFirst_Aplanarity_stack_8->SetBinError(3,1.008131);
   VH_tagFirst_Aplanarity_stack_8->SetBinError(4,0.3654249);
   VH_tagFirst_Aplanarity_stack_8->SetBinError(6,0.2834293);
   VH_tagFirst_Aplanarity_stack_8->SetEntries(481);

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
   VH_tagFirst_Aplanarity_stack_9->SetBinContent(1,51.54992);
   VH_tagFirst_Aplanarity_stack_9->SetBinContent(2,5.088079);
   VH_tagFirst_Aplanarity_stack_9->SetBinContent(3,1.231668);
   VH_tagFirst_Aplanarity_stack_9->SetBinContent(4,0.3702883);
   VH_tagFirst_Aplanarity_stack_9->SetBinContent(5,0.1888784);
   VH_tagFirst_Aplanarity_stack_9->SetBinContent(6,0.07007484);
   VH_tagFirst_Aplanarity_stack_9->SetBinContent(7,0.05644292);
   VH_tagFirst_Aplanarity_stack_9->SetBinContent(8,0.01251943);
   VH_tagFirst_Aplanarity_stack_9->SetBinContent(9,0.01143165);
   VH_tagFirst_Aplanarity_stack_9->SetBinContent(10,0.01105308);
   VH_tagFirst_Aplanarity_stack_9->SetBinContent(11,0.006937755);
   VH_tagFirst_Aplanarity_stack_9->SetBinContent(12,0.003747739);
   VH_tagFirst_Aplanarity_stack_9->SetBinContent(13,0.006066779);
   VH_tagFirst_Aplanarity_stack_9->SetBinContent(18,0.002157047);
   VH_tagFirst_Aplanarity_stack_9->SetBinContent(19,0.001498742);
   VH_tagFirst_Aplanarity_stack_9->SetBinError(1,0.2829103);
   VH_tagFirst_Aplanarity_stack_9->SetBinError(2,0.08903691);
   VH_tagFirst_Aplanarity_stack_9->SetBinError(3,0.04410092);
   VH_tagFirst_Aplanarity_stack_9->SetBinError(4,0.02400446);
   VH_tagFirst_Aplanarity_stack_9->SetBinError(5,0.01698453);
   VH_tagFirst_Aplanarity_stack_9->SetBinError(6,0.0104547);
   VH_tagFirst_Aplanarity_stack_9->SetBinError(7,0.009193678);
   VH_tagFirst_Aplanarity_stack_9->SetBinError(8,0.004492759);
   VH_tagFirst_Aplanarity_stack_9->SetBinError(9,0.004292647);
   VH_tagFirst_Aplanarity_stack_9->SetBinError(10,0.004138921);
   VH_tagFirst_Aplanarity_stack_9->SetBinError(11,0.003126783);
   VH_tagFirst_Aplanarity_stack_9->SetBinError(12,0.002182429);
   VH_tagFirst_Aplanarity_stack_9->SetBinError(13,0.003115847);
   VH_tagFirst_Aplanarity_stack_9->SetBinError(18,0.001526444);
   VH_tagFirst_Aplanarity_stack_9->SetBinError(19,0.001498742);
   VH_tagFirst_Aplanarity_stack_9->SetEntries(39482);

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
   VH_tagFirst_Aplanarity_stack_10->SetBinContent(1,45.30511);
   VH_tagFirst_Aplanarity_stack_10->SetBinContent(2,5.220709);
   VH_tagFirst_Aplanarity_stack_10->SetBinContent(3,1.256152);
   VH_tagFirst_Aplanarity_stack_10->SetBinContent(4,0.4200705);
   VH_tagFirst_Aplanarity_stack_10->SetBinContent(5,0.1974152);
   VH_tagFirst_Aplanarity_stack_10->SetBinContent(6,0.0828963);
   VH_tagFirst_Aplanarity_stack_10->SetBinContent(7,0.05448834);
   VH_tagFirst_Aplanarity_stack_10->SetBinContent(8,0.03043078);
   VH_tagFirst_Aplanarity_stack_10->SetBinContent(9,0.01730887);
   VH_tagFirst_Aplanarity_stack_10->SetBinContent(10,0.01133018);
   VH_tagFirst_Aplanarity_stack_10->SetBinContent(11,0.004562386);
   VH_tagFirst_Aplanarity_stack_10->SetBinContent(12,0.00369554);
   VH_tagFirst_Aplanarity_stack_10->SetBinContent(13,0.002699345);
   VH_tagFirst_Aplanarity_stack_10->SetBinContent(14,0.000978052);
   VH_tagFirst_Aplanarity_stack_10->SetBinContent(15,0.0004972478);
   VH_tagFirst_Aplanarity_stack_10->SetBinContent(16,0.0009250044);
   VH_tagFirst_Aplanarity_stack_10->SetBinContent(17,0.0002128679);
   VH_tagFirst_Aplanarity_stack_10->SetBinContent(18,0.0009351205);
   VH_tagFirst_Aplanarity_stack_10->SetBinContent(19,0.000447686);
   VH_tagFirst_Aplanarity_stack_10->SetBinContent(21,0.0004399667);
   VH_tagFirst_Aplanarity_stack_10->SetBinError(1,0.1430457);
   VH_tagFirst_Aplanarity_stack_10->SetBinError(2,0.04853967);
   VH_tagFirst_Aplanarity_stack_10->SetBinError(3,0.02378638);
   VH_tagFirst_Aplanarity_stack_10->SetBinError(4,0.01375466);
   VH_tagFirst_Aplanarity_stack_10->SetBinError(5,0.009417342);
   VH_tagFirst_Aplanarity_stack_10->SetBinError(6,0.006092885);
   VH_tagFirst_Aplanarity_stack_10->SetBinError(7,0.004919951);
   VH_tagFirst_Aplanarity_stack_10->SetBinError(8,0.003707712);
   VH_tagFirst_Aplanarity_stack_10->SetBinError(9,0.002776365);
   VH_tagFirst_Aplanarity_stack_10->SetBinError(10,0.002230054);
   VH_tagFirst_Aplanarity_stack_10->SetBinError(11,0.001427573);
   VH_tagFirst_Aplanarity_stack_10->SetBinError(12,0.001263136);
   VH_tagFirst_Aplanarity_stack_10->SetBinError(13,0.001102702);
   VH_tagFirst_Aplanarity_stack_10->SetBinError(14,0.0006916385);
   VH_tagFirst_Aplanarity_stack_10->SetBinError(15,0.0004972478);
   VH_tagFirst_Aplanarity_stack_10->SetBinError(16,0.0006547231);
   VH_tagFirst_Aplanarity_stack_10->SetBinError(17,0.0002128679);
   VH_tagFirst_Aplanarity_stack_10->SetBinError(18,0.0006615936);
   VH_tagFirst_Aplanarity_stack_10->SetBinError(19,0.000447686);
   VH_tagFirst_Aplanarity_stack_10->SetBinError(21,0.0004399667);
   VH_tagFirst_Aplanarity_stack_10->SetEntries(118631);

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
   VH_tagFirst_Aplanarity_stack_11->SetBinContent(1,1.457573);
   VH_tagFirst_Aplanarity_stack_11->SetBinContent(2,0.1302036);
   VH_tagFirst_Aplanarity_stack_11->SetBinContent(3,0.02776109);
   VH_tagFirst_Aplanarity_stack_11->SetBinContent(4,0.01446052);
   VH_tagFirst_Aplanarity_stack_11->SetBinContent(5,0.006088393);
   VH_tagFirst_Aplanarity_stack_11->SetBinContent(7,0.001950104);
   VH_tagFirst_Aplanarity_stack_11->SetBinContent(9,0.00162201);
   VH_tagFirst_Aplanarity_stack_11->SetBinContent(11,0.001095761);
   VH_tagFirst_Aplanarity_stack_11->SetBinError(1,0.04718685);
   VH_tagFirst_Aplanarity_stack_11->SetBinError(2,0.01412934);
   VH_tagFirst_Aplanarity_stack_11->SetBinError(3,0.006585936);
   VH_tagFirst_Aplanarity_stack_11->SetBinError(4,0.004653885);
   VH_tagFirst_Aplanarity_stack_11->SetBinError(5,0.002772775);
   VH_tagFirst_Aplanarity_stack_11->SetBinError(7,0.001778617);
   VH_tagFirst_Aplanarity_stack_11->SetBinError(9,0.00162201);
   VH_tagFirst_Aplanarity_stack_11->SetBinError(11,0.001095761);
   VH_tagFirst_Aplanarity_stack_11->SetEntries(1123);

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
   VH_tagFirst_Aplanarity_stack_12->SetBinContent(1,0.7384305);
   VH_tagFirst_Aplanarity_stack_12->SetBinContent(2,0.08634616);
   VH_tagFirst_Aplanarity_stack_12->SetBinContent(3,0.02054269);
   VH_tagFirst_Aplanarity_stack_12->SetBinContent(4,0.00597758);
   VH_tagFirst_Aplanarity_stack_12->SetBinContent(5,0.002564773);
   VH_tagFirst_Aplanarity_stack_12->SetBinContent(6,0.0007769837);
   VH_tagFirst_Aplanarity_stack_12->SetBinContent(7,0.0009924255);
   VH_tagFirst_Aplanarity_stack_12->SetBinContent(8,0.0009994616);
   VH_tagFirst_Aplanarity_stack_12->SetBinContent(10,0.0001593712);
   VH_tagFirst_Aplanarity_stack_12->SetBinContent(11,0.0008521064);
   VH_tagFirst_Aplanarity_stack_12->SetBinError(1,0.01252389);
   VH_tagFirst_Aplanarity_stack_12->SetBinError(2,0.004284205);
   VH_tagFirst_Aplanarity_stack_12->SetBinError(3,0.002078724);
   VH_tagFirst_Aplanarity_stack_12->SetBinError(4,0.001124728);
   VH_tagFirst_Aplanarity_stack_12->SetBinError(5,0.000746872);
   VH_tagFirst_Aplanarity_stack_12->SetBinError(6,0.0004021919);
   VH_tagFirst_Aplanarity_stack_12->SetBinError(7,0.0004502604);
   VH_tagFirst_Aplanarity_stack_12->SetBinError(8,0.0004527457);
   VH_tagFirst_Aplanarity_stack_12->SetBinError(10,0.0001593712);
   VH_tagFirst_Aplanarity_stack_12->SetBinError(11,0.0004298179);
   VH_tagFirst_Aplanarity_stack_12->SetEntries(4223);

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
   
   TH1D *VH_tagFirst_Aplanarity__381 = new TH1D("VH_tagFirst_Aplanarity__381","",50,0,1);
   VH_tagFirst_Aplanarity__381->SetBinContent(1,1138555);
   VH_tagFirst_Aplanarity__381->SetBinContent(2,150730);
   VH_tagFirst_Aplanarity__381->SetBinContent(3,39317);
   VH_tagFirst_Aplanarity__381->SetBinContent(4,13657);
   VH_tagFirst_Aplanarity__381->SetBinContent(5,5645);
   VH_tagFirst_Aplanarity__381->SetBinContent(6,2742);
   VH_tagFirst_Aplanarity__381->SetBinContent(7,1495);
   VH_tagFirst_Aplanarity__381->SetBinContent(8,863);
   VH_tagFirst_Aplanarity__381->SetBinContent(9,493);
   VH_tagFirst_Aplanarity__381->SetBinContent(10,327);
   VH_tagFirst_Aplanarity__381->SetBinContent(11,202);
   VH_tagFirst_Aplanarity__381->SetBinContent(12,123);
   VH_tagFirst_Aplanarity__381->SetBinContent(13,102);
   VH_tagFirst_Aplanarity__381->SetBinContent(14,38);
   VH_tagFirst_Aplanarity__381->SetBinContent(15,43);
   VH_tagFirst_Aplanarity__381->SetBinContent(16,20);
   VH_tagFirst_Aplanarity__381->SetBinContent(17,6);
   VH_tagFirst_Aplanarity__381->SetBinContent(18,9);
   VH_tagFirst_Aplanarity__381->SetBinContent(19,2);
   VH_tagFirst_Aplanarity__381->SetBinContent(20,1);
   VH_tagFirst_Aplanarity__381->SetEntries(1354419);

   ci = TColor::GetColor("#000099");
   VH_tagFirst_Aplanarity__381->SetLineColor(ci);
   VH_tagFirst_Aplanarity__381->SetLineWidth(2);
   VH_tagFirst_Aplanarity__381->SetMarkerStyle(20);
   VH_tagFirst_Aplanarity__381->SetMarkerSize(1.2);
   VH_tagFirst_Aplanarity__381->GetXaxis()->SetRange(1,100);
   VH_tagFirst_Aplanarity__381->GetXaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity__381->GetXaxis()->SetTitleOffset(1);
   VH_tagFirst_Aplanarity__381->GetXaxis()->SetTitleFont(42);
   VH_tagFirst_Aplanarity__381->GetYaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity__381->GetYaxis()->SetTitleFont(42);
   VH_tagFirst_Aplanarity__381->GetZaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity__381->GetZaxis()->SetTitleOffset(1);
   VH_tagFirst_Aplanarity__381->GetZaxis()->SetTitleFont(42);
   VH_tagFirst_Aplanarity__381->Draw("same E");
   
   Double_t Graph_from_VH_tagFirst_Aplanarity_fx1381[50] = { 0.01, 0.03, 0.05, 0.07, 0.09, 0.11, 0.13, 0.15, 0.17, 0.19, 0.21, 0.23, 0.25, 0.27, 0.29, 0.31, 0.33,
   0.35, 0.37, 0.39, 0.41, 0.43, 0.45, 0.47, 0.49, 0.51, 0.53, 0.55, 0.57, 0.59, 0.61, 0.63, 0.65,
   0.67, 0.69, 0.71, 0.73, 0.75, 0.77, 0.79, 0.81, 0.83, 0.85, 0.87, 0.89, 0.91, 0.93, 0.95, 0.97,
   0.99 };
   Double_t Graph_from_VH_tagFirst_Aplanarity_fy1381[50] = { 1582558, 199362.3, 49768.17, 18245.6, 8670.369, 3613.521, 1506.949, 1308.265, 702.5174, 547.6929, 252.3831, 142.0112, 68.06012, 67.51255, 27.36691, 7.065392, 43.94014,
   28.3874, 1.058276, 0.8539524, 0.200744, 0.1236564, 0.07809907, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0 };
   Double_t Graph_from_VH_tagFirst_Aplanarity_fex1381[50] = { 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01 };
   Double_t Graph_from_VH_tagFirst_Aplanarity_fey1381[50] = { 30505.35, 5935.947, 3151.785, 1620.571, 1599.095, 594.4228, 243.2597, 331.8921, 191.9376, 287.7023, 55.7521, 33.43136, 14.61943, 28.55233, 8.691579, 0.8202871, 28.56077,
   25.89685, 0.2488482, 0.2295716, 0.1039928, 0.09034689, 0.07809907, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0 };
   TGraphErrors *gre = new TGraphErrors(50,Graph_from_VH_tagFirst_Aplanarity_fx1381,Graph_from_VH_tagFirst_Aplanarity_fy1381,Graph_from_VH_tagFirst_Aplanarity_fex1381,Graph_from_VH_tagFirst_Aplanarity_fey1381);
   gre->SetName("Graph_from_VH_tagFirst_Aplanarity");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VH_tagFirst_Aplanarity1381 = new TH1F("Graph_Graph_from_VH_tagFirst_Aplanarity1381","",100,0,1.1);
   Graph_Graph_from_VH_tagFirst_Aplanarity1381->SetMinimum(0);
   Graph_Graph_from_VH_tagFirst_Aplanarity1381->SetMaximum(1774370);
   Graph_Graph_from_VH_tagFirst_Aplanarity1381->SetDirectory(nullptr);
   Graph_Graph_from_VH_tagFirst_Aplanarity1381->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VH_tagFirst_Aplanarity1381->SetLineColor(ci);
   Graph_Graph_from_VH_tagFirst_Aplanarity1381->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VH_tagFirst_Aplanarity1381->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_from_VH_tagFirst_Aplanarity1381->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VH_tagFirst_Aplanarity1381->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VH_tagFirst_Aplanarity1381->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VH_tagFirst_Aplanarity1381->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VH_tagFirst_Aplanarity1381->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_from_VH_tagFirst_Aplanarity1381->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VH_tagFirst_Aplanarity1381);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VH_tagFirst_Aplanarity","Data (BTagCSV, 2017)","p");
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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 36.8 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetLineWidth(2);
   tex->Draw();
   topPad->Modified();
   Aplanarity_tagFirst_17->cd();
  
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
   
   TH1D *data_mc_ratio__382 = new TH1D("data_mc_ratio__382","",50,0,1);
   data_mc_ratio__382->SetBinContent(1,0.7194396);
   data_mc_ratio__382->SetBinContent(2,0.7560607);
   data_mc_ratio__382->SetBinContent(3,0.790003);
   data_mc_ratio__382->SetBinContent(4,0.7485091);
   data_mc_ratio__382->SetBinContent(5,0.651068);
   data_mc_ratio__382->SetBinContent(6,0.7588166);
   data_mc_ratio__382->SetBinContent(7,0.992071);
   data_mc_ratio__382->SetBinContent(8,0.6596523);
   data_mc_ratio__382->SetBinContent(9,0.7017619);
   data_mc_ratio__382->SetBinContent(10,0.5970499);
   data_mc_ratio__382->SetBinContent(11,0.8003705);
   data_mc_ratio__382->SetBinContent(12,0.8661291);
   data_mc_ratio__382->SetBinContent(13,1.498675);
   data_mc_ratio__382->SetBinContent(14,0.5628583);
   data_mc_ratio__382->SetBinContent(15,1.571241);
   data_mc_ratio__382->SetBinContent(16,2.830699);
   data_mc_ratio__382->SetBinContent(17,0.1365494);
   data_mc_ratio__382->SetBinContent(18,0.3170421);
   data_mc_ratio__382->SetBinContent(19,1.889866);
   data_mc_ratio__382->SetBinContent(20,1.171025);
   data_mc_ratio__382->SetBinError(1,0.0006742444);
   data_mc_ratio__382->SetBinError(2,0.001947407);
   data_mc_ratio__382->SetBinError(3,0.003984176);
   data_mc_ratio__382->SetBinError(4,0.006405004);
   data_mc_ratio__382->SetBinError(5,0.008665516);
   data_mc_ratio__382->SetBinError(6,0.01449116);
   data_mc_ratio__382->SetBinError(7,0.02565796);
   data_mc_ratio__382->SetBinError(8,0.02245483);
   data_mc_ratio__382->SetBinError(9,0.03160577);
   data_mc_ratio__382->SetBinError(10,0.03301693);
   data_mc_ratio__382->SetBinError(11,0.05631387);
   data_mc_ratio__382->SetBinError(12,0.07809623);
   data_mc_ratio__382->SetBinError(13,0.1483909);
   data_mc_ratio__382->SetBinError(14,0.09130768);
   data_mc_ratio__382->SetBinError(15,0.239612);
   data_mc_ratio__382->SetBinError(16,0.6329636);
   data_mc_ratio__382->SetBinError(17,0.05574606);
   data_mc_ratio__382->SetBinError(18,0.1056807);
   data_mc_ratio__382->SetBinError(19,1.336337);
   data_mc_ratio__382->SetBinError(20,1.171025);
   data_mc_ratio__382->SetMinimum(0.4);
   data_mc_ratio__382->SetMaximum(1.6);
   data_mc_ratio__382->SetEntries(74.16319);
   data_mc_ratio__382->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__382->SetLineColor(ci);
   data_mc_ratio__382->SetLineWidth(2);
   data_mc_ratio__382->SetMarkerStyle(20);
   data_mc_ratio__382->SetMarkerSize(1.2);
   data_mc_ratio__382->GetXaxis()->SetTitle("Aplanarity");
   data_mc_ratio__382->GetXaxis()->SetRange(1,50);
   data_mc_ratio__382->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__382->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__382->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__382->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__382->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__382->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__382->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__382->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__382->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__382->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__382->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__382->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__382->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__382->GetZaxis()->SetTitleOffset(1);
   data_mc_ratio__382->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__382->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1382[50] = { 0.01, 0.03, 0.05, 0.07, 0.09, 0.11, 0.13, 0.15, 0.17, 0.19, 0.21, 0.23, 0.25, 0.27, 0.29, 0.31, 0.33,
   0.35, 0.37, 0.39, 0.41, 0.43, 0.45, 0.47, 0.49, 0.51, 0.53, 0.55, 0.57, 0.59, 0.61, 0.63, 0.65,
   0.67, 0.69, 0.71, 0.73, 0.75, 0.77, 0.79, 0.81, 0.83, 0.85, 0.87, 0.89, 0.91, 0.93, 0.95, 0.97,
   0.99 };
   Double_t Graph_from_mc_statistical_error_fy1382[50] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1 };
   Double_t Graph_from_mc_statistical_error_fex1382[50] = { 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01 };
   Double_t Graph_from_mc_statistical_error_fey1382[50] = { 0.01927597, 0.02977467, 0.06332933, 0.08881983, 0.1844321, 0.1644996, 0.1614253, 0.2536887, 0.273214, 0.5252985, 0.2209027, 0.2354136, 0.2148017, 0.4229188, 0.3175945, 0.1160993, 0.6499927,
   0.9122656, 0.2351448, 0.2688342, 0.5180367, 0.7306288, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0 };
   gre = new TGraphErrors(50,Graph_from_mc_statistical_error_fx1382,Graph_from_mc_statistical_error_fy1382,Graph_from_mc_statistical_error_fex1382,Graph_from_mc_statistical_error_fey1382);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1382 = new TH1F("Graph_Graph_from_mc_statistical_error1382","",100,0,1.1);
   Graph_Graph_from_mc_statistical_error1382->SetMinimum(0);
   Graph_Graph_from_mc_statistical_error1382->SetMaximum(2.2);
   Graph_Graph_from_mc_statistical_error1382->SetDirectory(nullptr);
   Graph_Graph_from_mc_statistical_error1382->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1382->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1382->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1382->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_from_mc_statistical_error1382->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1382->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1382->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1382->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1382->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_from_mc_statistical_error1382->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1382);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,1,1);
   line->Draw();
   bottomPad->Modified();
   Aplanarity_tagFirst_17->cd();
   Aplanarity_tagFirst_17->Modified();
   Aplanarity_tagFirst_17->cd();
   Aplanarity_tagFirst_17->SetSelected(Aplanarity_tagFirst_17);
}
