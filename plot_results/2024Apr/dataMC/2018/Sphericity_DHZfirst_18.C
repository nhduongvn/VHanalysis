#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Sphericity_DHZfirst_18()
{
//=========Macro generated from canvas: Sphericity_DHZfirst_18/Sphericity_DHZfirst_18
//=========  (Mon Apr  8 11:54:17 2024) by ROOT version 6.28/10
   TCanvas *Sphericity_DHZfirst_18 = new TCanvas("Sphericity_DHZfirst_18", "Sphericity_DHZfirst_18",0,0,600,600);
   Sphericity_DHZfirst_18->SetHighLightColor(2);
   Sphericity_DHZfirst_18->Range(0,0,1,1);
   Sphericity_DHZfirst_18->SetFillColor(0);
   Sphericity_DHZfirst_18->SetFillStyle(4000);
   Sphericity_DHZfirst_18->SetBorderMode(0);
   Sphericity_DHZfirst_18->SetBorderSize(2);
   Sphericity_DHZfirst_18->SetFrameFillStyle(1000);
   Sphericity_DHZfirst_18->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.1532254,-256.3668,1.052419,256120.4);
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
   st->SetMaximum(230482.8);
   
   TH1F *st_stack_117 = new TH1F("st_stack_117","",25,0,1);
   st_stack_117->SetMinimum(0.01);
   st_stack_117->SetMaximum(230482.8);
   st_stack_117->SetDirectory(nullptr);
   st_stack_117->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_117->SetLineColor(ci);
   st_stack_117->SetLineWidth(0);
   st_stack_117->GetXaxis()->SetRange(1,25);
   st_stack_117->GetXaxis()->SetLabelFont(42);
   st_stack_117->GetXaxis()->SetTitleOffset(1);
   st_stack_117->GetXaxis()->SetTitleFont(42);
   st_stack_117->GetYaxis()->SetTitle("Events/0.04");
   st_stack_117->GetYaxis()->SetLabelFont(42);
   st_stack_117->GetYaxis()->SetLabelSize(0.05);
   st_stack_117->GetYaxis()->SetTitleSize(0.057);
   st_stack_117->GetYaxis()->SetTitleOffset(1.2);
   st_stack_117->GetYaxis()->SetTitleFont(42);
   st_stack_117->GetZaxis()->SetLabelFont(42);
   st_stack_117->GetZaxis()->SetTitleOffset(1);
   st_stack_117->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_117);
   
   
   TH1D *VH_DHZfirst_Sphericity_stack_1 = new TH1D("VH_DHZfirst_Sphericity_stack_1","",25,0,1);
   VH_DHZfirst_Sphericity_stack_1->SetBinContent(1,92222.29);
   VH_DHZfirst_Sphericity_stack_1->SetBinContent(2,89528.46);
   VH_DHZfirst_Sphericity_stack_1->SetBinContent(3,36755.56);
   VH_DHZfirst_Sphericity_stack_1->SetBinContent(4,38459.94);
   VH_DHZfirst_Sphericity_stack_1->SetBinContent(5,10806.74);
   VH_DHZfirst_Sphericity_stack_1->SetBinContent(6,2458.453);
   VH_DHZfirst_Sphericity_stack_1->SetBinContent(7,2085.682);
   VH_DHZfirst_Sphericity_stack_1->SetBinContent(8,340.2633);
   VH_DHZfirst_Sphericity_stack_1->SetBinContent(9,28.97646);
   VH_DHZfirst_Sphericity_stack_1->SetBinContent(10,5.102354);
   VH_DHZfirst_Sphericity_stack_1->SetBinContent(11,159.9125);
   VH_DHZfirst_Sphericity_stack_1->SetBinContent(12,6.196547);
   VH_DHZfirst_Sphericity_stack_1->SetBinContent(13,10.15735);
   VH_DHZfirst_Sphericity_stack_1->SetBinContent(14,3.080381);
   VH_DHZfirst_Sphericity_stack_1->SetBinContent(15,0.286344);
   VH_DHZfirst_Sphericity_stack_1->SetBinContent(16,87.86509);
   VH_DHZfirst_Sphericity_stack_1->SetBinContent(17,3.142729);
   VH_DHZfirst_Sphericity_stack_1->SetBinError(1,6764.993);
   VH_DHZfirst_Sphericity_stack_1->SetBinError(2,7432.203);
   VH_DHZfirst_Sphericity_stack_1->SetBinError(3,4194.921);
   VH_DHZfirst_Sphericity_stack_1->SetBinError(4,7142.846);
   VH_DHZfirst_Sphericity_stack_1->SetBinError(5,2455.813);
   VH_DHZfirst_Sphericity_stack_1->SetBinError(6,302.1493);
   VH_DHZfirst_Sphericity_stack_1->SetBinError(7,1211.246);
   VH_DHZfirst_Sphericity_stack_1->SetBinError(8,158.5409);
   VH_DHZfirst_Sphericity_stack_1->SetBinError(9,12.86261);
   VH_DHZfirst_Sphericity_stack_1->SetBinError(10,5.102354);
   VH_DHZfirst_Sphericity_stack_1->SetBinError(11,86.82257);
   VH_DHZfirst_Sphericity_stack_1->SetBinError(12,6.196547);
   VH_DHZfirst_Sphericity_stack_1->SetBinError(13,9.634049);
   VH_DHZfirst_Sphericity_stack_1->SetBinError(14,3.080381);
   VH_DHZfirst_Sphericity_stack_1->SetBinError(15,0.286344);
   VH_DHZfirst_Sphericity_stack_1->SetBinError(16,87.86509);
   VH_DHZfirst_Sphericity_stack_1->SetBinError(17,3.142729);
   VH_DHZfirst_Sphericity_stack_1->SetEntries(11420);

   ci = TColor::GetColor("#ff6600");
   VH_DHZfirst_Sphericity_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VH_DHZfirst_Sphericity_stack_1->SetLineColor(ci);
   VH_DHZfirst_Sphericity_stack_1->GetXaxis()->SetRange(1,100);
   VH_DHZfirst_Sphericity_stack_1->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_Sphericity_stack_1->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_Sphericity_stack_1->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_Sphericity_stack_1->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_Sphericity_stack_1->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_Sphericity_stack_1->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_Sphericity_stack_1->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_Sphericity_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VH_DHZfirst_Sphericity_stack_1,"");
   
   TH1D *VH_DHZfirst_Sphericity_stack_2 = new TH1D("VH_DHZfirst_Sphericity_stack_2","",25,0,1);
   VH_DHZfirst_Sphericity_stack_2->SetBinContent(1,925.9815);
   VH_DHZfirst_Sphericity_stack_2->SetBinContent(2,839.1948);
   VH_DHZfirst_Sphericity_stack_2->SetBinContent(3,473.271);
   VH_DHZfirst_Sphericity_stack_2->SetBinContent(4,250.3575);
   VH_DHZfirst_Sphericity_stack_2->SetBinContent(5,140.4181);
   VH_DHZfirst_Sphericity_stack_2->SetBinContent(6,64.3331);
   VH_DHZfirst_Sphericity_stack_2->SetBinContent(7,21.95607);
   VH_DHZfirst_Sphericity_stack_2->SetBinContent(8,10.41338);
   VH_DHZfirst_Sphericity_stack_2->SetBinContent(9,5.34202);
   VH_DHZfirst_Sphericity_stack_2->SetBinContent(10,2.332569);
   VH_DHZfirst_Sphericity_stack_2->SetBinContent(11,3.042203);
   VH_DHZfirst_Sphericity_stack_2->SetBinContent(12,1.132018);
   VH_DHZfirst_Sphericity_stack_2->SetBinContent(13,0.8664858);
   VH_DHZfirst_Sphericity_stack_2->SetBinContent(14,0.5632044);
   VH_DHZfirst_Sphericity_stack_2->SetBinContent(15,0.5717596);
   VH_DHZfirst_Sphericity_stack_2->SetBinContent(16,0.06666336);
   VH_DHZfirst_Sphericity_stack_2->SetBinContent(17,0.2569811);
   VH_DHZfirst_Sphericity_stack_2->SetBinContent(18,0.04207395);
   VH_DHZfirst_Sphericity_stack_2->SetBinContent(19,0.1473337);
   VH_DHZfirst_Sphericity_stack_2->SetBinError(1,20.27099);
   VH_DHZfirst_Sphericity_stack_2->SetBinError(2,19.33855);
   VH_DHZfirst_Sphericity_stack_2->SetBinError(3,13.30317);
   VH_DHZfirst_Sphericity_stack_2->SetBinError(4,9.992731);
   VH_DHZfirst_Sphericity_stack_2->SetBinError(5,7.711439);
   VH_DHZfirst_Sphericity_stack_2->SetBinError(6,5.117903);
   VH_DHZfirst_Sphericity_stack_2->SetBinError(7,3.311733);
   VH_DHZfirst_Sphericity_stack_2->SetBinError(8,1.777671);
   VH_DHZfirst_Sphericity_stack_2->SetBinError(9,2.379621);
   VH_DHZfirst_Sphericity_stack_2->SetBinError(10,0.7370489);
   VH_DHZfirst_Sphericity_stack_2->SetBinError(11,1.659868);
   VH_DHZfirst_Sphericity_stack_2->SetBinError(12,0.5260204);
   VH_DHZfirst_Sphericity_stack_2->SetBinError(13,0.4921679);
   VH_DHZfirst_Sphericity_stack_2->SetBinError(14,0.5013921);
   VH_DHZfirst_Sphericity_stack_2->SetBinError(15,0.2892362);
   VH_DHZfirst_Sphericity_stack_2->SetBinError(16,0.06666336);
   VH_DHZfirst_Sphericity_stack_2->SetBinError(17,0.2145988);
   VH_DHZfirst_Sphericity_stack_2->SetBinError(18,0.04207395);
   VH_DHZfirst_Sphericity_stack_2->SetBinError(19,0.1473337);
   VH_DHZfirst_Sphericity_stack_2->SetEntries(18627);

   ci = TColor::GetColor("#660066");
   VH_DHZfirst_Sphericity_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VH_DHZfirst_Sphericity_stack_2->SetLineColor(ci);
   VH_DHZfirst_Sphericity_stack_2->GetXaxis()->SetRange(1,100);
   VH_DHZfirst_Sphericity_stack_2->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_Sphericity_stack_2->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_Sphericity_stack_2->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_Sphericity_stack_2->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_Sphericity_stack_2->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_Sphericity_stack_2->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_Sphericity_stack_2->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_Sphericity_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VH_DHZfirst_Sphericity_stack_2,"");
   
   TH1D *VH_DHZfirst_Sphericity_stack_3 = new TH1D("VH_DHZfirst_Sphericity_stack_3","",25,0,1);
   VH_DHZfirst_Sphericity_stack_3->SetBinContent(1,9442.525);
   VH_DHZfirst_Sphericity_stack_3->SetBinContent(2,9358.296);
   VH_DHZfirst_Sphericity_stack_3->SetBinContent(3,5127.978);
   VH_DHZfirst_Sphericity_stack_3->SetBinContent(4,2757.498);
   VH_DHZfirst_Sphericity_stack_3->SetBinContent(5,1434.282);
   VH_DHZfirst_Sphericity_stack_3->SetBinContent(6,695.0494);
   VH_DHZfirst_Sphericity_stack_3->SetBinContent(7,334.08);
   VH_DHZfirst_Sphericity_stack_3->SetBinContent(8,141.2495);
   VH_DHZfirst_Sphericity_stack_3->SetBinContent(9,70.7719);
   VH_DHZfirst_Sphericity_stack_3->SetBinContent(10,42.52601);
   VH_DHZfirst_Sphericity_stack_3->SetBinContent(11,22.23399);
   VH_DHZfirst_Sphericity_stack_3->SetBinContent(12,14.27869);
   VH_DHZfirst_Sphericity_stack_3->SetBinContent(13,12.02144);
   VH_DHZfirst_Sphericity_stack_3->SetBinContent(14,6.455158);
   VH_DHZfirst_Sphericity_stack_3->SetBinContent(15,5.039429);
   VH_DHZfirst_Sphericity_stack_3->SetBinContent(16,2.946452);
   VH_DHZfirst_Sphericity_stack_3->SetBinContent(17,3.552286);
   VH_DHZfirst_Sphericity_stack_3->SetBinContent(18,1.500268);
   VH_DHZfirst_Sphericity_stack_3->SetBinContent(19,1.51488);
   VH_DHZfirst_Sphericity_stack_3->SetBinContent(21,0.215015);
   VH_DHZfirst_Sphericity_stack_3->SetBinContent(23,0.05258055);
   VH_DHZfirst_Sphericity_stack_3->SetBinError(1,41.36689);
   VH_DHZfirst_Sphericity_stack_3->SetBinError(2,44.09566);
   VH_DHZfirst_Sphericity_stack_3->SetBinError(3,30.27992);
   VH_DHZfirst_Sphericity_stack_3->SetBinError(4,21.99638);
   VH_DHZfirst_Sphericity_stack_3->SetBinError(5,15.46982);
   VH_DHZfirst_Sphericity_stack_3->SetBinError(6,10.83292);
   VH_DHZfirst_Sphericity_stack_3->SetBinError(7,8.145551);
   VH_DHZfirst_Sphericity_stack_3->SetBinError(8,4.806105);
   VH_DHZfirst_Sphericity_stack_3->SetBinError(9,3.333443);
   VH_DHZfirst_Sphericity_stack_3->SetBinError(10,2.947081);
   VH_DHZfirst_Sphericity_stack_3->SetBinError(11,1.816533);
   VH_DHZfirst_Sphericity_stack_3->SetBinError(12,1.403669);
   VH_DHZfirst_Sphericity_stack_3->SetBinError(13,1.852204);
   VH_DHZfirst_Sphericity_stack_3->SetBinError(14,0.913602);
   VH_DHZfirst_Sphericity_stack_3->SetBinError(15,0.8131693);
   VH_DHZfirst_Sphericity_stack_3->SetBinError(16,0.5941674);
   VH_DHZfirst_Sphericity_stack_3->SetBinError(17,0.9260629);
   VH_DHZfirst_Sphericity_stack_3->SetBinError(18,0.4022362);
   VH_DHZfirst_Sphericity_stack_3->SetBinError(19,0.5881182);
   VH_DHZfirst_Sphericity_stack_3->SetBinError(21,0.1746932);
   VH_DHZfirst_Sphericity_stack_3->SetBinError(23,0.05258055);
   VH_DHZfirst_Sphericity_stack_3->SetEntries(265964);

   ci = TColor::GetColor("#cc00cc");
   VH_DHZfirst_Sphericity_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VH_DHZfirst_Sphericity_stack_3->SetLineColor(ci);
   VH_DHZfirst_Sphericity_stack_3->GetXaxis()->SetRange(1,100);
   VH_DHZfirst_Sphericity_stack_3->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_Sphericity_stack_3->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_Sphericity_stack_3->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_Sphericity_stack_3->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_Sphericity_stack_3->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_Sphericity_stack_3->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_Sphericity_stack_3->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_Sphericity_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VH_DHZfirst_Sphericity_stack_3,"");
   
   TH1D *VH_DHZfirst_Sphericity_stack_4 = new TH1D("VH_DHZfirst_Sphericity_stack_4","",25,0,1);
   VH_DHZfirst_Sphericity_stack_4->SetBinContent(1,745.3338);
   VH_DHZfirst_Sphericity_stack_4->SetBinContent(2,637.2787);
   VH_DHZfirst_Sphericity_stack_4->SetBinContent(3,366.8844);
   VH_DHZfirst_Sphericity_stack_4->SetBinContent(4,220.6946);
   VH_DHZfirst_Sphericity_stack_4->SetBinContent(5,120.4712);
   VH_DHZfirst_Sphericity_stack_4->SetBinContent(6,46.07103);
   VH_DHZfirst_Sphericity_stack_4->SetBinContent(7,17.2342);
   VH_DHZfirst_Sphericity_stack_4->SetBinContent(8,3.964627);
   VH_DHZfirst_Sphericity_stack_4->SetBinContent(9,2.027408);
   VH_DHZfirst_Sphericity_stack_4->SetBinContent(10,1.735215);
   VH_DHZfirst_Sphericity_stack_4->SetBinContent(11,0.7136071);
   VH_DHZfirst_Sphericity_stack_4->SetBinContent(12,0.7144917);
   VH_DHZfirst_Sphericity_stack_4->SetBinContent(13,0.09267492);
   VH_DHZfirst_Sphericity_stack_4->SetBinError(1,26.32828);
   VH_DHZfirst_Sphericity_stack_4->SetBinError(2,25.90438);
   VH_DHZfirst_Sphericity_stack_4->SetBinError(3,21.02972);
   VH_DHZfirst_Sphericity_stack_4->SetBinError(4,14.00337);
   VH_DHZfirst_Sphericity_stack_4->SetBinError(5,9.948001);
   VH_DHZfirst_Sphericity_stack_4->SetBinError(6,5.051766);
   VH_DHZfirst_Sphericity_stack_4->SetBinError(7,5.559424);
   VH_DHZfirst_Sphericity_stack_4->SetBinError(8,1.319167);
   VH_DHZfirst_Sphericity_stack_4->SetBinError(9,0.8136497);
   VH_DHZfirst_Sphericity_stack_4->SetBinError(10,1.347803);
   VH_DHZfirst_Sphericity_stack_4->SetBinError(11,0.493178);
   VH_DHZfirst_Sphericity_stack_4->SetBinError(12,0.392806);
   VH_DHZfirst_Sphericity_stack_4->SetBinError(13,0.09267492);
   VH_DHZfirst_Sphericity_stack_4->SetEntries(6415);

   ci = TColor::GetColor("#00cccc");
   VH_DHZfirst_Sphericity_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VH_DHZfirst_Sphericity_stack_4->SetLineColor(ci);
   VH_DHZfirst_Sphericity_stack_4->GetXaxis()->SetRange(1,100);
   VH_DHZfirst_Sphericity_stack_4->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_Sphericity_stack_4->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_Sphericity_stack_4->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_Sphericity_stack_4->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_Sphericity_stack_4->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_Sphericity_stack_4->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_Sphericity_stack_4->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_Sphericity_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VH_DHZfirst_Sphericity_stack_4,"");
   
   TH1D *VH_DHZfirst_Sphericity_stack_5 = new TH1D("VH_DHZfirst_Sphericity_stack_5","",25,0,1);
   VH_DHZfirst_Sphericity_stack_5->SetBinContent(1,347.7048);
   VH_DHZfirst_Sphericity_stack_5->SetBinContent(2,286.6067);
   VH_DHZfirst_Sphericity_stack_5->SetBinContent(3,147.0291);
   VH_DHZfirst_Sphericity_stack_5->SetBinContent(4,145.3489);
   VH_DHZfirst_Sphericity_stack_5->SetBinContent(5,76.39348);
   VH_DHZfirst_Sphericity_stack_5->SetBinContent(6,15.56643);
   VH_DHZfirst_Sphericity_stack_5->SetBinContent(7,3.346462);
   VH_DHZfirst_Sphericity_stack_5->SetBinContent(8,3.433506);
   VH_DHZfirst_Sphericity_stack_5->SetBinContent(9,0.1806074);
   VH_DHZfirst_Sphericity_stack_5->SetBinContent(10,4.104139);
   VH_DHZfirst_Sphericity_stack_5->SetBinContent(12,0.03799243);
   VH_DHZfirst_Sphericity_stack_5->SetBinContent(15,0.04589133);
   VH_DHZfirst_Sphericity_stack_5->SetBinError(1,26.19223);
   VH_DHZfirst_Sphericity_stack_5->SetBinError(2,24.82634);
   VH_DHZfirst_Sphericity_stack_5->SetBinError(3,19.73357);
   VH_DHZfirst_Sphericity_stack_5->SetBinError(4,26.12857);
   VH_DHZfirst_Sphericity_stack_5->SetBinError(5,21.91384);
   VH_DHZfirst_Sphericity_stack_5->SetBinError(6,5.058471);
   VH_DHZfirst_Sphericity_stack_5->SetBinError(7,1.117951);
   VH_DHZfirst_Sphericity_stack_5->SetBinError(8,1.650421);
   VH_DHZfirst_Sphericity_stack_5->SetBinError(9,0.1806074);
   VH_DHZfirst_Sphericity_stack_5->SetBinError(10,4.076063);
   VH_DHZfirst_Sphericity_stack_5->SetBinError(12,0.03799243);
   VH_DHZfirst_Sphericity_stack_5->SetBinError(15,0.04589133);
   VH_DHZfirst_Sphericity_stack_5->SetEntries(2664);

   ci = TColor::GetColor("#ff99cc");
   VH_DHZfirst_Sphericity_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VH_DHZfirst_Sphericity_stack_5->SetLineColor(ci);
   VH_DHZfirst_Sphericity_stack_5->GetXaxis()->SetRange(1,100);
   VH_DHZfirst_Sphericity_stack_5->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_Sphericity_stack_5->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_Sphericity_stack_5->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_Sphericity_stack_5->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_Sphericity_stack_5->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_Sphericity_stack_5->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_Sphericity_stack_5->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_Sphericity_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VH_DHZfirst_Sphericity_stack_5,"");
   
   TH1D *VH_DHZfirst_Sphericity_stack_6 = new TH1D("VH_DHZfirst_Sphericity_stack_6","",25,0,1);
   VH_DHZfirst_Sphericity_stack_6->SetBinContent(1,2.487421);
   VH_DHZfirst_Sphericity_stack_6->SetBinContent(2,0.7985593);
   VH_DHZfirst_Sphericity_stack_6->SetBinContent(3,0.6406623);
   VH_DHZfirst_Sphericity_stack_6->SetBinContent(7,1.575423);
   VH_DHZfirst_Sphericity_stack_6->SetBinError(1,1.295458);
   VH_DHZfirst_Sphericity_stack_6->SetBinError(2,0.7985593);
   VH_DHZfirst_Sphericity_stack_6->SetBinError(3,0.6406623);
   VH_DHZfirst_Sphericity_stack_6->SetBinError(7,1.575423);
   VH_DHZfirst_Sphericity_stack_6->SetEntries(7);

   ci = TColor::GetColor("#9933ff");
   VH_DHZfirst_Sphericity_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VH_DHZfirst_Sphericity_stack_6->SetLineColor(ci);
   VH_DHZfirst_Sphericity_stack_6->GetXaxis()->SetRange(1,100);
   VH_DHZfirst_Sphericity_stack_6->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_Sphericity_stack_6->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_Sphericity_stack_6->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_Sphericity_stack_6->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_Sphericity_stack_6->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_Sphericity_stack_6->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_Sphericity_stack_6->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_Sphericity_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VH_DHZfirst_Sphericity_stack_6,"");
   
   TH1D *VH_DHZfirst_Sphericity_stack_7 = new TH1D("VH_DHZfirst_Sphericity_stack_7","",25,0,1);
   VH_DHZfirst_Sphericity_stack_7->SetBinContent(1,13.48288);
   VH_DHZfirst_Sphericity_stack_7->SetBinContent(2,12.62152);
   VH_DHZfirst_Sphericity_stack_7->SetBinContent(3,3.572951);
   VH_DHZfirst_Sphericity_stack_7->SetBinContent(4,2.480573);
   VH_DHZfirst_Sphericity_stack_7->SetBinContent(5,0.8422943);
   VH_DHZfirst_Sphericity_stack_7->SetBinContent(6,0.4027821);
   VH_DHZfirst_Sphericity_stack_7->SetBinContent(7,0.4039418);
   VH_DHZfirst_Sphericity_stack_7->SetBinError(1,3.065581);
   VH_DHZfirst_Sphericity_stack_7->SetBinError(2,2.779843);
   VH_DHZfirst_Sphericity_stack_7->SetBinError(3,1.308274);
   VH_DHZfirst_Sphericity_stack_7->SetBinError(4,1.604349);
   VH_DHZfirst_Sphericity_stack_7->SetBinError(5,0.8422943);
   VH_DHZfirst_Sphericity_stack_7->SetBinError(6,0.4027821);
   VH_DHZfirst_Sphericity_stack_7->SetBinError(7,0.4039418);
   VH_DHZfirst_Sphericity_stack_7->SetEntries(61);

   ci = TColor::GetColor("#3399ff");
   VH_DHZfirst_Sphericity_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VH_DHZfirst_Sphericity_stack_7->SetLineColor(ci);
   VH_DHZfirst_Sphericity_stack_7->GetXaxis()->SetRange(1,100);
   VH_DHZfirst_Sphericity_stack_7->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_Sphericity_stack_7->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_Sphericity_stack_7->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_Sphericity_stack_7->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_Sphericity_stack_7->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_Sphericity_stack_7->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_Sphericity_stack_7->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_Sphericity_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VH_DHZfirst_Sphericity_stack_7,"");
   
   TH1D *VH_DHZfirst_Sphericity_stack_8 = new TH1D("VH_DHZfirst_Sphericity_stack_8","",25,0,1);
   VH_DHZfirst_Sphericity_stack_8->SetBinContent(1,9.040301);
   VH_DHZfirst_Sphericity_stack_8->SetBinContent(2,8.433092);
   VH_DHZfirst_Sphericity_stack_8->SetBinContent(3,3.481726);
   VH_DHZfirst_Sphericity_stack_8->SetBinContent(4,2.187396);
   VH_DHZfirst_Sphericity_stack_8->SetBinContent(5,1.832163);
   VH_DHZfirst_Sphericity_stack_8->SetBinContent(6,1.195858);
   VH_DHZfirst_Sphericity_stack_8->SetBinContent(7,0.9503607);
   VH_DHZfirst_Sphericity_stack_8->SetBinError(1,2.242441);
   VH_DHZfirst_Sphericity_stack_8->SetBinError(2,1.956108);
   VH_DHZfirst_Sphericity_stack_8->SetBinError(3,1.215312);
   VH_DHZfirst_Sphericity_stack_8->SetBinError(4,1.342451);
   VH_DHZfirst_Sphericity_stack_8->SetBinError(5,0.8419822);
   VH_DHZfirst_Sphericity_stack_8->SetBinError(6,0.5981169);
   VH_DHZfirst_Sphericity_stack_8->SetBinError(7,0.6768087);
   VH_DHZfirst_Sphericity_stack_8->SetEntries(67);

   ci = TColor::GetColor("#33ff99");
   VH_DHZfirst_Sphericity_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VH_DHZfirst_Sphericity_stack_8->SetLineColor(ci);
   VH_DHZfirst_Sphericity_stack_8->GetXaxis()->SetRange(1,100);
   VH_DHZfirst_Sphericity_stack_8->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_Sphericity_stack_8->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_Sphericity_stack_8->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_Sphericity_stack_8->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_Sphericity_stack_8->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_Sphericity_stack_8->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_Sphericity_stack_8->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_Sphericity_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VH_DHZfirst_Sphericity_stack_8,"");
   
   TH1D *VH_DHZfirst_Sphericity_stack_9 = new TH1D("VH_DHZfirst_Sphericity_stack_9","",25,0,1);
   VH_DHZfirst_Sphericity_stack_9->SetBinContent(1,5.800856);
   VH_DHZfirst_Sphericity_stack_9->SetBinContent(2,4.830027);
   VH_DHZfirst_Sphericity_stack_9->SetBinContent(3,2.597569);
   VH_DHZfirst_Sphericity_stack_9->SetBinContent(4,1.709993);
   VH_DHZfirst_Sphericity_stack_9->SetBinContent(5,1.317043);
   VH_DHZfirst_Sphericity_stack_9->SetBinContent(6,0.5959404);
   VH_DHZfirst_Sphericity_stack_9->SetBinContent(7,0.1678951);
   VH_DHZfirst_Sphericity_stack_9->SetBinContent(8,0.05735066);
   VH_DHZfirst_Sphericity_stack_9->SetBinContent(9,0.01679649);
   VH_DHZfirst_Sphericity_stack_9->SetBinContent(11,0.005787191);
   VH_DHZfirst_Sphericity_stack_9->SetBinError(1,0.3082185);
   VH_DHZfirst_Sphericity_stack_9->SetBinError(2,0.152513);
   VH_DHZfirst_Sphericity_stack_9->SetBinError(3,0.106403);
   VH_DHZfirst_Sphericity_stack_9->SetBinError(4,0.08264709);
   VH_DHZfirst_Sphericity_stack_9->SetBinError(5,0.08037444);
   VH_DHZfirst_Sphericity_stack_9->SetBinError(6,0.05024661);
   VH_DHZfirst_Sphericity_stack_9->SetBinError(7,0.0275568);
   VH_DHZfirst_Sphericity_stack_9->SetBinError(8,0.01898332);
   VH_DHZfirst_Sphericity_stack_9->SetBinError(9,0.009060415);
   VH_DHZfirst_Sphericity_stack_9->SetBinError(11,0.004134646);
   VH_DHZfirst_Sphericity_stack_9->SetEntries(4955);

   ci = TColor::GetColor("#cccc00");
   VH_DHZfirst_Sphericity_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VH_DHZfirst_Sphericity_stack_9->SetLineColor(ci);
   VH_DHZfirst_Sphericity_stack_9->GetXaxis()->SetRange(1,100);
   VH_DHZfirst_Sphericity_stack_9->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_Sphericity_stack_9->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_Sphericity_stack_9->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_Sphericity_stack_9->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_Sphericity_stack_9->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_Sphericity_stack_9->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_Sphericity_stack_9->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_Sphericity_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VH_DHZfirst_Sphericity_stack_9,"");
   
   TH1D *VH_DHZfirst_Sphericity_stack_10 = new TH1D("VH_DHZfirst_Sphericity_stack_10","",25,0,1);
   VH_DHZfirst_Sphericity_stack_10->SetBinContent(1,2.361972);
   VH_DHZfirst_Sphericity_stack_10->SetBinContent(2,2.370014);
   VH_DHZfirst_Sphericity_stack_10->SetBinContent(3,1.337002);
   VH_DHZfirst_Sphericity_stack_10->SetBinContent(4,0.8440003);
   VH_DHZfirst_Sphericity_stack_10->SetBinContent(5,0.4944437);
   VH_DHZfirst_Sphericity_stack_10->SetBinContent(6,0.2342954);
   VH_DHZfirst_Sphericity_stack_10->SetBinContent(7,0.07201872);
   VH_DHZfirst_Sphericity_stack_10->SetBinContent(8,0.02928479);
   VH_DHZfirst_Sphericity_stack_10->SetBinContent(9,0.01053388);
   VH_DHZfirst_Sphericity_stack_10->SetBinContent(10,0.003939906);
   VH_DHZfirst_Sphericity_stack_10->SetBinContent(11,0.001792081);
   VH_DHZfirst_Sphericity_stack_10->SetBinContent(12,0.001526812);
   VH_DHZfirst_Sphericity_stack_10->SetBinContent(13,0.0007598943);
   VH_DHZfirst_Sphericity_stack_10->SetBinContent(14,0.0007709959);
   VH_DHZfirst_Sphericity_stack_10->SetBinContent(15,0.0006079393);
   VH_DHZfirst_Sphericity_stack_10->SetBinError(1,0.03761503);
   VH_DHZfirst_Sphericity_stack_10->SetBinError(2,0.03741399);
   VH_DHZfirst_Sphericity_stack_10->SetBinError(3,0.02794375);
   VH_DHZfirst_Sphericity_stack_10->SetBinError(4,0.02232085);
   VH_DHZfirst_Sphericity_stack_10->SetBinError(5,0.01711269);
   VH_DHZfirst_Sphericity_stack_10->SetBinError(6,0.01186099);
   VH_DHZfirst_Sphericity_stack_10->SetBinError(7,0.006524228);
   VH_DHZfirst_Sphericity_stack_10->SetBinError(8,0.004121376);
   VH_DHZfirst_Sphericity_stack_10->SetBinError(9,0.002450976);
   VH_DHZfirst_Sphericity_stack_10->SetBinError(10,0.00144244);
   VH_DHZfirst_Sphericity_stack_10->SetBinError(11,0.001036645);
   VH_DHZfirst_Sphericity_stack_10->SetBinError(12,0.0008714083);
   VH_DHZfirst_Sphericity_stack_10->SetBinError(13,0.0006100312);
   VH_DHZfirst_Sphericity_stack_10->SetBinError(14,0.0007709959);
   VH_DHZfirst_Sphericity_stack_10->SetBinError(15,0.0006079393);
   VH_DHZfirst_Sphericity_stack_10->SetEntries(13681);

   ci = TColor::GetColor("#0000cc");
   VH_DHZfirst_Sphericity_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VH_DHZfirst_Sphericity_stack_10->SetLineColor(ci);
   VH_DHZfirst_Sphericity_stack_10->GetXaxis()->SetRange(1,100);
   VH_DHZfirst_Sphericity_stack_10->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_Sphericity_stack_10->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_Sphericity_stack_10->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_Sphericity_stack_10->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_Sphericity_stack_10->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_Sphericity_stack_10->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_Sphericity_stack_10->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_Sphericity_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VH_DHZfirst_Sphericity_stack_10,"");
   
   TH1D *VH_DHZfirst_Sphericity_stack_11 = new TH1D("VH_DHZfirst_Sphericity_stack_11","",25,0,1);
   VH_DHZfirst_Sphericity_stack_11->SetBinContent(1,0.1665599);
   VH_DHZfirst_Sphericity_stack_11->SetBinContent(2,0.1280091);
   VH_DHZfirst_Sphericity_stack_11->SetBinContent(3,0.06336201);
   VH_DHZfirst_Sphericity_stack_11->SetBinContent(4,0.0833091);
   VH_DHZfirst_Sphericity_stack_11->SetBinContent(5,0.04631361);
   VH_DHZfirst_Sphericity_stack_11->SetBinContent(6,0.006272886);
   VH_DHZfirst_Sphericity_stack_11->SetBinContent(7,0.003359014);
   VH_DHZfirst_Sphericity_stack_11->SetBinContent(8,0.002127519);
   VH_DHZfirst_Sphericity_stack_11->SetBinError(1,0.03273192);
   VH_DHZfirst_Sphericity_stack_11->SetBinError(2,0.02082627);
   VH_DHZfirst_Sphericity_stack_11->SetBinError(3,0.01307674);
   VH_DHZfirst_Sphericity_stack_11->SetBinError(4,0.01602744);
   VH_DHZfirst_Sphericity_stack_11->SetBinError(5,0.01286938);
   VH_DHZfirst_Sphericity_stack_11->SetBinError(6,0.003898418);
   VH_DHZfirst_Sphericity_stack_11->SetBinError(7,0.003359014);
   VH_DHZfirst_Sphericity_stack_11->SetBinError(8,0.002127519);
   VH_DHZfirst_Sphericity_stack_11->SetEntries(172);

   ci = TColor::GetColor("#cc0000");
   VH_DHZfirst_Sphericity_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VH_DHZfirst_Sphericity_stack_11->SetLineColor(ci);
   VH_DHZfirst_Sphericity_stack_11->GetXaxis()->SetRange(1,100);
   VH_DHZfirst_Sphericity_stack_11->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_Sphericity_stack_11->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_Sphericity_stack_11->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_Sphericity_stack_11->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_Sphericity_stack_11->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_Sphericity_stack_11->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_Sphericity_stack_11->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_Sphericity_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VH_DHZfirst_Sphericity_stack_11,"");
   
   TH1D *VH_DHZfirst_Sphericity_stack_12 = new TH1D("VH_DHZfirst_Sphericity_stack_12","",25,0,1);
   VH_DHZfirst_Sphericity_stack_12->SetBinContent(1,0.05918);
   VH_DHZfirst_Sphericity_stack_12->SetBinContent(2,0.05811197);
   VH_DHZfirst_Sphericity_stack_12->SetBinContent(3,0.02701294);
   VH_DHZfirst_Sphericity_stack_12->SetBinContent(4,0.02121853);
   VH_DHZfirst_Sphericity_stack_12->SetBinContent(5,0.008925518);
   VH_DHZfirst_Sphericity_stack_12->SetBinContent(6,0.005195041);
   VH_DHZfirst_Sphericity_stack_12->SetBinContent(7,0.002351311);
   VH_DHZfirst_Sphericity_stack_12->SetBinContent(8,0.001313168);
   VH_DHZfirst_Sphericity_stack_12->SetBinContent(9,0.0004298028);
   VH_DHZfirst_Sphericity_stack_12->SetBinContent(10,0.0003221536);
   VH_DHZfirst_Sphericity_stack_12->SetBinError(1,0.005421394);
   VH_DHZfirst_Sphericity_stack_12->SetBinError(2,0.005379641);
   VH_DHZfirst_Sphericity_stack_12->SetBinError(3,0.003449365);
   VH_DHZfirst_Sphericity_stack_12->SetBinError(4,0.003039704);
   VH_DHZfirst_Sphericity_stack_12->SetBinError(5,0.001974997);
   VH_DHZfirst_Sphericity_stack_12->SetBinError(6,0.001635727);
   VH_DHZfirst_Sphericity_stack_12->SetBinError(7,0.0009938885);
   VH_DHZfirst_Sphericity_stack_12->SetBinError(8,0.0006575951);
   VH_DHZfirst_Sphericity_stack_12->SetBinError(9,0.0004298028);
   VH_DHZfirst_Sphericity_stack_12->SetBinError(10,0.0003221536);
   VH_DHZfirst_Sphericity_stack_12->SetEntries(453);

   ci = TColor::GetColor("#00cc00");
   VH_DHZfirst_Sphericity_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VH_DHZfirst_Sphericity_stack_12->SetLineColor(ci);
   VH_DHZfirst_Sphericity_stack_12->GetXaxis()->SetRange(1,100);
   VH_DHZfirst_Sphericity_stack_12->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_Sphericity_stack_12->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_Sphericity_stack_12->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_Sphericity_stack_12->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_Sphericity_stack_12->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_Sphericity_stack_12->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_Sphericity_stack_12->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_Sphericity_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VH_DHZfirst_Sphericity_stack_12,"");
   st->Draw("hist");
   
   TH1D *VH_DHZfirst_Sphericity__233 = new TH1D("VH_DHZfirst_Sphericity__233","",25,0,1);
   VH_DHZfirst_Sphericity__233->SetBinContent(1,86917);
   VH_DHZfirst_Sphericity__233->SetBinContent(2,76849);
   VH_DHZfirst_Sphericity__233->SetBinContent(3,43275);
   VH_DHZfirst_Sphericity__233->SetBinContent(4,23498);
   VH_DHZfirst_Sphericity__233->SetBinContent(5,11829);
   VH_DHZfirst_Sphericity__233->SetBinContent(6,5058);
   VH_DHZfirst_Sphericity__233->SetBinContent(7,1750);
   VH_DHZfirst_Sphericity__233->SetBinContent(8,609);
   VH_DHZfirst_Sphericity__233->SetBinContent(9,262);
   VH_DHZfirst_Sphericity__233->SetBinContent(10,132);
   VH_DHZfirst_Sphericity__233->SetBinContent(11,79);
   VH_DHZfirst_Sphericity__233->SetBinContent(12,49);
   VH_DHZfirst_Sphericity__233->SetBinContent(13,27);
   VH_DHZfirst_Sphericity__233->SetBinContent(14,27);
   VH_DHZfirst_Sphericity__233->SetBinContent(15,16);
   VH_DHZfirst_Sphericity__233->SetBinContent(16,9);
   VH_DHZfirst_Sphericity__233->SetBinContent(17,6);
   VH_DHZfirst_Sphericity__233->SetBinContent(18,3);
   VH_DHZfirst_Sphericity__233->SetBinContent(19,5);
   VH_DHZfirst_Sphericity__233->SetBinContent(20,5);
   VH_DHZfirst_Sphericity__233->SetEntries(250429);

   ci = TColor::GetColor("#000099");
   VH_DHZfirst_Sphericity__233->SetLineColor(ci);
   VH_DHZfirst_Sphericity__233->SetLineWidth(2);
   VH_DHZfirst_Sphericity__233->SetMarkerStyle(20);
   VH_DHZfirst_Sphericity__233->SetMarkerSize(1.2);
   VH_DHZfirst_Sphericity__233->GetXaxis()->SetRange(1,100);
   VH_DHZfirst_Sphericity__233->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_Sphericity__233->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_Sphericity__233->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_Sphericity__233->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_Sphericity__233->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_Sphericity__233->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_Sphericity__233->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_Sphericity__233->GetZaxis()->SetTitleFont(42);
   VH_DHZfirst_Sphericity__233->Draw("same E");
   
   Double_t Graph_from_VH_DHZfirst_Sphericity_fx1233[25] = { 0.02, 0.06, 0.1, 0.14, 0.18, 0.22, 0.26, 0.3, 0.34, 0.38, 0.42, 0.46, 0.5, 0.54, 0.58, 0.62, 0.66,
   0.7, 0.74, 0.78, 0.82, 0.86, 0.9, 0.94, 0.98 };
   Double_t Graph_from_VH_DHZfirst_Sphericity_fy1233[25] = { 103717.2, 100679.1, 42882.44, 41841.17, 12582.85, 3281.913, 2465.474, 499.4143, 107.3262, 55.80455, 185.9098, 22.36127, 23.13871, 10.09951, 5.944032, 90.87821, 6.951996,
   1.542342, 1.662214, 0, 0.215015, 0, 0.05258055, 0, 0 };
   Double_t Graph_from_VH_DHZfirst_Sphericity_fex1233[25] = { 0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02,
   0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02 };
   Double_t Graph_from_VH_DHZfirst_Sphericity_fey1233[25] = { 6765.253, 7432.446, 4195.151, 7142.949, 2455.992, 302.4721, 1211.293, 158.6377, 13.52464, 7.327579, 86.85883, 6.387482, 9.823256, 3.251893, 0.910495, 87.86712, 3.283351,
   0.4044307, 0.6062922, 0, 0.1746932, 0, 0.05258055, 0, 0 };
   TGraphErrors *gre = new TGraphErrors(25,Graph_from_VH_DHZfirst_Sphericity_fx1233,Graph_from_VH_DHZfirst_Sphericity_fy1233,Graph_from_VH_DHZfirst_Sphericity_fex1233,Graph_from_VH_DHZfirst_Sphericity_fey1233);
   gre->SetName("Graph_from_VH_DHZfirst_Sphericity");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VH_DHZfirst_Sphericity1233 = new TH1F("Graph_Graph_from_VH_DHZfirst_Sphericity1233","",100,0,1.1);
   Graph_Graph_from_VH_DHZfirst_Sphericity1233->SetMinimum(0);
   Graph_Graph_from_VH_DHZfirst_Sphericity1233->SetMaximum(121530.7);
   Graph_Graph_from_VH_DHZfirst_Sphericity1233->SetDirectory(nullptr);
   Graph_Graph_from_VH_DHZfirst_Sphericity1233->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VH_DHZfirst_Sphericity1233->SetLineColor(ci);
   Graph_Graph_from_VH_DHZfirst_Sphericity1233->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VH_DHZfirst_Sphericity1233->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_from_VH_DHZfirst_Sphericity1233->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VH_DHZfirst_Sphericity1233->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VH_DHZfirst_Sphericity1233->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VH_DHZfirst_Sphericity1233->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VH_DHZfirst_Sphericity1233->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_from_VH_DHZfirst_Sphericity1233->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VH_DHZfirst_Sphericity1233);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VH_DHZfirst_Sphericity","Data (JetHT, 2018)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VH_DHZfirst_Sphericity","ggZHcc","F");

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
   entry=leg->AddEntry("VH_DHZfirst_Sphericity","ZHcc","F");

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
   entry=leg->AddEntry("VH_DHZfirst_Sphericity","ggZHbb","F");

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
   entry=leg->AddEntry("VH_DHZfirst_Sphericity","ZHbb","F");

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
   entry=leg->AddEntry("VH_DHZfirst_Sphericity","ZZ","F");

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
   entry=leg->AddEntry("VH_DHZfirst_Sphericity","WZ","F");

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
   entry=leg->AddEntry("VH_DHZfirst_Sphericity","WW","F");

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
   entry=leg->AddEntry("VH_DHZfirst_Sphericity","W + jets","F");

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
   entry=leg->AddEntry("VH_DHZfirst_Sphericity","Z + jets","F");

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
   entry=leg->AddEntry("VH_DHZfirst_Sphericity","t#bar{t}","F");

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
   entry=leg->AddEntry("VH_DHZfirst_Sphericity","Single top","F");

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
   entry=leg->AddEntry("VH_DHZfirst_Sphericity","QCD","F");

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
   entry=leg->AddEntry("Graph_from_VH_DHZfirst_Sphericity","MC unc. (stat.)","fl");

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
   Sphericity_DHZfirst_18->cd();
  
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
   
   TH1D *data_mc_ratio__234 = new TH1D("data_mc_ratio__234","",25,0,1);
   data_mc_ratio__234->SetBinContent(1,0.8380188);
   data_mc_ratio__234->SetBinContent(2,0.7633066);
   data_mc_ratio__234->SetBinContent(3,1.009154);
   data_mc_ratio__234->SetBinContent(4,0.5616);
   data_mc_ratio__234->SetBinContent(5,0.9400892);
   data_mc_ratio__234->SetBinContent(6,1.541174);
   data_mc_ratio__234->SetBinContent(7,0.7098027);
   data_mc_ratio__234->SetBinContent(8,1.219428);
   data_mc_ratio__234->SetBinContent(9,2.441157);
   data_mc_ratio__234->SetBinContent(10,2.365399);
   data_mc_ratio__234->SetBinContent(11,0.4249372);
   data_mc_ratio__234->SetBinContent(12,2.191289);
   data_mc_ratio__234->SetBinContent(13,1.166876);
   data_mc_ratio__234->SetBinContent(14,2.673396);
   data_mc_ratio__234->SetBinContent(15,2.691776);
   data_mc_ratio__234->SetBinContent(16,0.09903364);
   data_mc_ratio__234->SetBinContent(17,0.8630614);
   data_mc_ratio__234->SetBinContent(18,1.945094);
   data_mc_ratio__234->SetBinContent(19,3.008036);
   data_mc_ratio__234->SetBinError(1,0.002842506);
   data_mc_ratio__234->SetBinError(2,0.002753467);
   data_mc_ratio__234->SetBinError(3,0.004851087);
   data_mc_ratio__234->SetBinError(4,0.00366363);
   data_mc_ratio__234->SetBinError(5,0.008643608);
   data_mc_ratio__234->SetBinError(6,0.02167017);
   data_mc_ratio__234->SetBinError(7,0.01696753);
   data_mc_ratio__234->SetBinError(8,0.04941373);
   data_mc_ratio__234->SetBinError(9,0.1508152);
   data_mc_ratio__234->SetBinError(10,0.2058815);
   data_mc_ratio__234->SetBinError(11,0.04780917);
   data_mc_ratio__234->SetBinError(12,0.3130413);
   data_mc_ratio__234->SetBinError(13,0.2245654);
   data_mc_ratio__234->SetBinError(14,0.5144953);
   data_mc_ratio__234->SetBinError(15,0.6729439);
   data_mc_ratio__234->SetBinError(16,0.03301121);
   data_mc_ratio__234->SetBinError(17,0.3523434);
   data_mc_ratio__234->SetBinError(18,1.123001);
   data_mc_ratio__234->SetBinError(19,1.345235);
   data_mc_ratio__234->SetMinimum(0.4);
   data_mc_ratio__234->SetMaximum(1.6);
   data_mc_ratio__234->SetEntries(95.38256);
   data_mc_ratio__234->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__234->SetLineColor(ci);
   data_mc_ratio__234->SetLineWidth(2);
   data_mc_ratio__234->SetMarkerStyle(20);
   data_mc_ratio__234->SetMarkerSize(1.2);
   data_mc_ratio__234->GetXaxis()->SetTitle("Sphericity");
   data_mc_ratio__234->GetXaxis()->SetRange(1,25);
   data_mc_ratio__234->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__234->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__234->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__234->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__234->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__234->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__234->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__234->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__234->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__234->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__234->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__234->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__234->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__234->GetZaxis()->SetTitleOffset(1);
   data_mc_ratio__234->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__234->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1234[25] = { 0.02, 0.06, 0.1, 0.14, 0.18, 0.22, 0.26, 0.3, 0.34, 0.38, 0.42, 0.46, 0.5, 0.54, 0.58, 0.62, 0.66,
   0.7, 0.74, 0.78, 0.82, 0.86, 0.9, 0.94, 0.98 };
   Double_t Graph_from_mc_statistical_error_fy1234[25] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1 };
   Double_t Graph_from_mc_statistical_error_fex1234[25] = { 0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02,
   0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02 };
   Double_t Graph_from_mc_statistical_error_fey1234[25] = { 0.06522786, 0.07382315, 0.09782911, 0.1707158, 0.1951857, 0.09216336, 0.4913022, 0.3176475, 0.1260144, 0.1313079, 0.4672095, 0.2856494, 0.4245378, 0.3219851, 0.153178, 0.9668668, 0.4722889,
   0.2622186, 0.3647498, 0, 0.8124698, 0, 1, 0, 0 };
   gre = new TGraphErrors(25,Graph_from_mc_statistical_error_fx1234,Graph_from_mc_statistical_error_fy1234,Graph_from_mc_statistical_error_fex1234,Graph_from_mc_statistical_error_fey1234);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1234 = new TH1F("Graph_Graph_from_mc_statistical_error1234","",100,0,1.1);
   Graph_Graph_from_mc_statistical_error1234->SetMinimum(0);
   Graph_Graph_from_mc_statistical_error1234->SetMaximum(2.2);
   Graph_Graph_from_mc_statistical_error1234->SetDirectory(nullptr);
   Graph_Graph_from_mc_statistical_error1234->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1234->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1234->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1234->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_from_mc_statistical_error1234->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1234->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1234->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1234->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1234->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_from_mc_statistical_error1234->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1234);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,1,1);
   line->Draw();
   bottomPad->Modified();
   Sphericity_DHZfirst_18->cd();
   Sphericity_DHZfirst_18->Modified();
   Sphericity_DHZfirst_18->cd();
   Sphericity_DHZfirst_18->SetSelected(Sphericity_DHZfirst_18);
}
