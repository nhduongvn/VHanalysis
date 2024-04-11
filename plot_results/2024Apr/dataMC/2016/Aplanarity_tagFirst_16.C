#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Aplanarity_tagFirst_16()
{
//=========Macro generated from canvas: Aplanarity_tagFirst_16/Aplanarity_tagFirst_16
//=========  (Thu Apr 11 14:06:25 2024) by ROOT version 6.28/10
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
   topPad->Range(-0.1532254,-7408.375,1.052419,7400976);
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
   st->SetMaximum(6660138);
   
   TH1F *st_stack_46 = new TH1F("st_stack_46","",50,0,1);
   st_stack_46->SetMinimum(0.01);
   st_stack_46->SetMaximum(6660138);
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
   VH_tagFirst_Aplanarity_stack_1->SetBinContent(1,1881287);
   VH_tagFirst_Aplanarity_stack_1->SetBinContent(2,273763.3);
   VH_tagFirst_Aplanarity_stack_1->SetBinContent(3,69780.64);
   VH_tagFirst_Aplanarity_stack_1->SetBinContent(4,22353.49);
   VH_tagFirst_Aplanarity_stack_1->SetBinContent(5,6559.909);
   VH_tagFirst_Aplanarity_stack_1->SetBinContent(6,3568.526);
   VH_tagFirst_Aplanarity_stack_1->SetBinContent(7,2048.103);
   VH_tagFirst_Aplanarity_stack_1->SetBinContent(8,641.0516);
   VH_tagFirst_Aplanarity_stack_1->SetBinContent(9,955.01);
   VH_tagFirst_Aplanarity_stack_1->SetBinContent(10,132.8657);
   VH_tagFirst_Aplanarity_stack_1->SetBinContent(11,163.2106);
   VH_tagFirst_Aplanarity_stack_1->SetBinContent(12,340.8074);
   VH_tagFirst_Aplanarity_stack_1->SetBinContent(13,111.7845);
   VH_tagFirst_Aplanarity_stack_1->SetBinContent(14,18.50079);
   VH_tagFirst_Aplanarity_stack_1->SetBinContent(15,36.8523);
   VH_tagFirst_Aplanarity_stack_1->SetBinContent(16,0.4282265);
   VH_tagFirst_Aplanarity_stack_1->SetBinContent(17,12.01046);
   VH_tagFirst_Aplanarity_stack_1->SetBinError(1,29638.63);
   VH_tagFirst_Aplanarity_stack_1->SetBinError(2,18692.11);
   VH_tagFirst_Aplanarity_stack_1->SetBinError(3,4176.759);
   VH_tagFirst_Aplanarity_stack_1->SetBinError(4,2191.259);
   VH_tagFirst_Aplanarity_stack_1->SetBinError(5,862.9395);
   VH_tagFirst_Aplanarity_stack_1->SetBinError(6,661.967);
   VH_tagFirst_Aplanarity_stack_1->SetBinError(7,462.1046);
   VH_tagFirst_Aplanarity_stack_1->SetBinError(8,93.80055);
   VH_tagFirst_Aplanarity_stack_1->SetBinError(9,343.8416);
   VH_tagFirst_Aplanarity_stack_1->SetBinError(10,39.41878);
   VH_tagFirst_Aplanarity_stack_1->SetBinError(11,44.16628);
   VH_tagFirst_Aplanarity_stack_1->SetBinError(12,219.5203);
   VH_tagFirst_Aplanarity_stack_1->SetBinError(13,38.40728);
   VH_tagFirst_Aplanarity_stack_1->SetBinError(14,11.44162);
   VH_tagFirst_Aplanarity_stack_1->SetBinError(15,17.74135);
   VH_tagFirst_Aplanarity_stack_1->SetBinError(16,0.4282265);
   VH_tagFirst_Aplanarity_stack_1->SetBinError(17,8.2926);
   VH_tagFirst_Aplanarity_stack_1->SetEntries(191309);

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
   VH_tagFirst_Aplanarity_stack_2->SetBinContent(1,20659.96);
   VH_tagFirst_Aplanarity_stack_2->SetBinContent(2,2975.332);
   VH_tagFirst_Aplanarity_stack_2->SetBinContent(3,768.7249);
   VH_tagFirst_Aplanarity_stack_2->SetBinContent(4,259.5233);
   VH_tagFirst_Aplanarity_stack_2->SetBinContent(5,98.55517);
   VH_tagFirst_Aplanarity_stack_2->SetBinContent(6,50.00342);
   VH_tagFirst_Aplanarity_stack_2->SetBinContent(7,28.46797);
   VH_tagFirst_Aplanarity_stack_2->SetBinContent(8,14.13194);
   VH_tagFirst_Aplanarity_stack_2->SetBinContent(9,10.32761);
   VH_tagFirst_Aplanarity_stack_2->SetBinContent(10,7.355471);
   VH_tagFirst_Aplanarity_stack_2->SetBinContent(11,3.896237);
   VH_tagFirst_Aplanarity_stack_2->SetBinContent(12,1.313494);
   VH_tagFirst_Aplanarity_stack_2->SetBinContent(13,1.862809);
   VH_tagFirst_Aplanarity_stack_2->SetBinContent(14,1.006652);
   VH_tagFirst_Aplanarity_stack_2->SetBinContent(15,0.912934);
   VH_tagFirst_Aplanarity_stack_2->SetBinContent(16,0.3780799);
   VH_tagFirst_Aplanarity_stack_2->SetBinContent(17,0.1128299);
   VH_tagFirst_Aplanarity_stack_2->SetBinContent(18,0.4999683);
   VH_tagFirst_Aplanarity_stack_2->SetBinContent(19,0.07149317);
   VH_tagFirst_Aplanarity_stack_2->SetBinContent(20,0.3785931);
   VH_tagFirst_Aplanarity_stack_2->SetBinError(1,53.46621);
   VH_tagFirst_Aplanarity_stack_2->SetBinError(2,20.02794);
   VH_tagFirst_Aplanarity_stack_2->SetBinError(3,10.29452);
   VH_tagFirst_Aplanarity_stack_2->SetBinError(4,6.001693);
   VH_tagFirst_Aplanarity_stack_2->SetBinError(5,3.653303);
   VH_tagFirst_Aplanarity_stack_2->SetBinError(6,2.789793);
   VH_tagFirst_Aplanarity_stack_2->SetBinError(7,2.103745);
   VH_tagFirst_Aplanarity_stack_2->SetBinError(8,1.406817);
   VH_tagFirst_Aplanarity_stack_2->SetBinError(9,1.256449);
   VH_tagFirst_Aplanarity_stack_2->SetBinError(10,1.125575);
   VH_tagFirst_Aplanarity_stack_2->SetBinError(11,0.7386551);
   VH_tagFirst_Aplanarity_stack_2->SetBinError(12,0.3269225);
   VH_tagFirst_Aplanarity_stack_2->SetBinError(13,0.4920812);
   VH_tagFirst_Aplanarity_stack_2->SetBinError(14,0.3981865);
   VH_tagFirst_Aplanarity_stack_2->SetBinError(15,0.4458178);
   VH_tagFirst_Aplanarity_stack_2->SetBinError(16,0.2216235);
   VH_tagFirst_Aplanarity_stack_2->SetBinError(17,0.06623067);
   VH_tagFirst_Aplanarity_stack_2->SetBinError(18,0.3567136);
   VH_tagFirst_Aplanarity_stack_2->SetBinError(19,0.05078551);
   VH_tagFirst_Aplanarity_stack_2->SetBinError(20,0.308545);
   VH_tagFirst_Aplanarity_stack_2->SetEntries(394851);

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
   VH_tagFirst_Aplanarity_stack_3->SetBinContent(1,334026.4);
   VH_tagFirst_Aplanarity_stack_3->SetBinContent(2,47488.49);
   VH_tagFirst_Aplanarity_stack_3->SetBinContent(3,12454.9);
   VH_tagFirst_Aplanarity_stack_3->SetBinContent(4,4491.536);
   VH_tagFirst_Aplanarity_stack_3->SetBinContent(5,1986.449);
   VH_tagFirst_Aplanarity_stack_3->SetBinContent(6,1006.15);
   VH_tagFirst_Aplanarity_stack_3->SetBinContent(7,543.4795);
   VH_tagFirst_Aplanarity_stack_3->SetBinContent(8,314.8269);
   VH_tagFirst_Aplanarity_stack_3->SetBinContent(9,195.7268);
   VH_tagFirst_Aplanarity_stack_3->SetBinContent(10,116.9691);
   VH_tagFirst_Aplanarity_stack_3->SetBinContent(11,76.67529);
   VH_tagFirst_Aplanarity_stack_3->SetBinContent(12,47.90038);
   VH_tagFirst_Aplanarity_stack_3->SetBinContent(13,31.59776);
   VH_tagFirst_Aplanarity_stack_3->SetBinContent(14,19.47147);
   VH_tagFirst_Aplanarity_stack_3->SetBinContent(15,12.46485);
   VH_tagFirst_Aplanarity_stack_3->SetBinContent(16,6.40603);
   VH_tagFirst_Aplanarity_stack_3->SetBinContent(17,4.202817);
   VH_tagFirst_Aplanarity_stack_3->SetBinContent(18,2.47197);
   VH_tagFirst_Aplanarity_stack_3->SetBinContent(19,1.382416);
   VH_tagFirst_Aplanarity_stack_3->SetBinContent(20,0.2631694);
   VH_tagFirst_Aplanarity_stack_3->SetBinContent(21,0.3964592);
   VH_tagFirst_Aplanarity_stack_3->SetBinContent(22,0.1179923);
   VH_tagFirst_Aplanarity_stack_3->SetBinError(1,139.8185);
   VH_tagFirst_Aplanarity_stack_3->SetBinError(2,52.10732);
   VH_tagFirst_Aplanarity_stack_3->SetBinError(3,26.69764);
   VH_tagFirst_Aplanarity_stack_3->SetBinError(4,16.05831);
   VH_tagFirst_Aplanarity_stack_3->SetBinError(5,10.69234);
   VH_tagFirst_Aplanarity_stack_3->SetBinError(6,7.640462);
   VH_tagFirst_Aplanarity_stack_3->SetBinError(7,5.618701);
   VH_tagFirst_Aplanarity_stack_3->SetBinError(8,4.282525);
   VH_tagFirst_Aplanarity_stack_3->SetBinError(9,3.384199);
   VH_tagFirst_Aplanarity_stack_3->SetBinError(10,2.610834);
   VH_tagFirst_Aplanarity_stack_3->SetBinError(11,2.126985);
   VH_tagFirst_Aplanarity_stack_3->SetBinError(12,1.698014);
   VH_tagFirst_Aplanarity_stack_3->SetBinError(13,1.379202);
   VH_tagFirst_Aplanarity_stack_3->SetBinError(14,1.079438);
   VH_tagFirst_Aplanarity_stack_3->SetBinError(15,0.8749747);
   VH_tagFirst_Aplanarity_stack_3->SetBinError(16,0.6154028);
   VH_tagFirst_Aplanarity_stack_3->SetBinError(17,0.4982304);
   VH_tagFirst_Aplanarity_stack_3->SetBinError(18,0.387453);
   VH_tagFirst_Aplanarity_stack_3->SetBinError(19,0.2837883);
   VH_tagFirst_Aplanarity_stack_3->SetBinError(20,0.1141793);
   VH_tagFirst_Aplanarity_stack_3->SetBinError(21,0.164243);
   VH_tagFirst_Aplanarity_stack_3->SetBinError(22,0.08353036);
   VH_tagFirst_Aplanarity_stack_3->SetEntries(7431374);

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
   VH_tagFirst_Aplanarity_stack_4->SetBinContent(1,15538.58);
   VH_tagFirst_Aplanarity_stack_4->SetBinContent(2,1780.207);
   VH_tagFirst_Aplanarity_stack_4->SetBinContent(3,460.9692);
   VH_tagFirst_Aplanarity_stack_4->SetBinContent(4,147.6394);
   VH_tagFirst_Aplanarity_stack_4->SetBinContent(5,58.69319);
   VH_tagFirst_Aplanarity_stack_4->SetBinContent(6,26.51817);
   VH_tagFirst_Aplanarity_stack_4->SetBinContent(7,16.53679);
   VH_tagFirst_Aplanarity_stack_4->SetBinContent(8,8.655044);
   VH_tagFirst_Aplanarity_stack_4->SetBinContent(9,3.380513);
   VH_tagFirst_Aplanarity_stack_4->SetBinContent(10,8.082173);
   VH_tagFirst_Aplanarity_stack_4->SetBinContent(11,2.112346);
   VH_tagFirst_Aplanarity_stack_4->SetBinContent(12,1.71535);
   VH_tagFirst_Aplanarity_stack_4->SetBinContent(13,0.6742787);
   VH_tagFirst_Aplanarity_stack_4->SetBinContent(14,0.7646806);
   VH_tagFirst_Aplanarity_stack_4->SetBinContent(15,0.1487957);
   VH_tagFirst_Aplanarity_stack_4->SetBinContent(16,0.3193688);
   VH_tagFirst_Aplanarity_stack_4->SetBinError(1,77.80205);
   VH_tagFirst_Aplanarity_stack_4->SetBinError(2,30.83717);
   VH_tagFirst_Aplanarity_stack_4->SetBinError(3,15.97814);
   VH_tagFirst_Aplanarity_stack_4->SetBinError(4,8.998456);
   VH_tagFirst_Aplanarity_stack_4->SetBinError(5,5.099746);
   VH_tagFirst_Aplanarity_stack_4->SetBinError(6,2.523599);
   VH_tagFirst_Aplanarity_stack_4->SetBinError(7,1.494657);
   VH_tagFirst_Aplanarity_stack_4->SetBinError(8,1.038903);
   VH_tagFirst_Aplanarity_stack_4->SetBinError(9,0.5524076);
   VH_tagFirst_Aplanarity_stack_4->SetBinError(10,3.106152);
   VH_tagFirst_Aplanarity_stack_4->SetBinError(11,0.4965345);
   VH_tagFirst_Aplanarity_stack_4->SetBinError(12,0.4631029);
   VH_tagFirst_Aplanarity_stack_4->SetBinError(13,0.2166474);
   VH_tagFirst_Aplanarity_stack_4->SetBinError(14,0.3453395);
   VH_tagFirst_Aplanarity_stack_4->SetBinError(15,0.1075292);
   VH_tagFirst_Aplanarity_stack_4->SetBinError(16,0.2608187);
   VH_tagFirst_Aplanarity_stack_4->SetEntries(169758);

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
   VH_tagFirst_Aplanarity_stack_5->SetBinContent(1,8988.276);
   VH_tagFirst_Aplanarity_stack_5->SetBinContent(2,954.9024);
   VH_tagFirst_Aplanarity_stack_5->SetBinContent(3,273.8539);
   VH_tagFirst_Aplanarity_stack_5->SetBinContent(4,88.6169);
   VH_tagFirst_Aplanarity_stack_5->SetBinContent(5,30.47329);
   VH_tagFirst_Aplanarity_stack_5->SetBinContent(6,25.98097);
   VH_tagFirst_Aplanarity_stack_5->SetBinContent(7,22.26574);
   VH_tagFirst_Aplanarity_stack_5->SetBinContent(8,5.379482);
   VH_tagFirst_Aplanarity_stack_5->SetBinContent(9,2.250581);
   VH_tagFirst_Aplanarity_stack_5->SetBinContent(10,2.939316);
   VH_tagFirst_Aplanarity_stack_5->SetBinContent(11,0.8732958);
   VH_tagFirst_Aplanarity_stack_5->SetBinContent(12,1.228128);
   VH_tagFirst_Aplanarity_stack_5->SetBinContent(13,0.3996579);
   VH_tagFirst_Aplanarity_stack_5->SetBinContent(14,0.0002168231);
   VH_tagFirst_Aplanarity_stack_5->SetBinContent(15,0.1673636);
   VH_tagFirst_Aplanarity_stack_5->SetBinContent(20,0.1159399);
   VH_tagFirst_Aplanarity_stack_5->SetBinError(1,89.07578);
   VH_tagFirst_Aplanarity_stack_5->SetBinError(2,31.69602);
   VH_tagFirst_Aplanarity_stack_5->SetBinError(3,20.66759);
   VH_tagFirst_Aplanarity_stack_5->SetBinError(4,11.00534);
   VH_tagFirst_Aplanarity_stack_5->SetBinError(5,3.632006);
   VH_tagFirst_Aplanarity_stack_5->SetBinError(6,6.580717);
   VH_tagFirst_Aplanarity_stack_5->SetBinError(7,8.405091);
   VH_tagFirst_Aplanarity_stack_5->SetBinError(8,1.284945);
   VH_tagFirst_Aplanarity_stack_5->SetBinError(9,0.6056856);
   VH_tagFirst_Aplanarity_stack_5->SetBinError(10,1.505532);
   VH_tagFirst_Aplanarity_stack_5->SetBinError(11,0.2651954);
   VH_tagFirst_Aplanarity_stack_5->SetBinError(12,0.5345362);
   VH_tagFirst_Aplanarity_stack_5->SetBinError(13,0.1872653);
   VH_tagFirst_Aplanarity_stack_5->SetBinError(14,0.0002168231);
   VH_tagFirst_Aplanarity_stack_5->SetBinError(15,0.1673636);
   VH_tagFirst_Aplanarity_stack_5->SetBinError(20,0.08831863);
   VH_tagFirst_Aplanarity_stack_5->SetEntries(116584);

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
   VH_tagFirst_Aplanarity_stack_9->SetBinContent(1,69.85773);
   VH_tagFirst_Aplanarity_stack_9->SetBinContent(2,7.146504);
   VH_tagFirst_Aplanarity_stack_9->SetBinContent(3,1.688369);
   VH_tagFirst_Aplanarity_stack_9->SetBinContent(4,0.5122376);
   VH_tagFirst_Aplanarity_stack_9->SetBinContent(5,0.2282071);
   VH_tagFirst_Aplanarity_stack_9->SetBinContent(6,0.1125207);
   VH_tagFirst_Aplanarity_stack_9->SetBinContent(7,0.06742396);
   VH_tagFirst_Aplanarity_stack_9->SetBinContent(8,0.03142835);
   VH_tagFirst_Aplanarity_stack_9->SetBinContent(9,0.02287266);
   VH_tagFirst_Aplanarity_stack_9->SetBinContent(10,0.016422);
   VH_tagFirst_Aplanarity_stack_9->SetBinContent(11,0.004245127);
   VH_tagFirst_Aplanarity_stack_9->SetBinContent(12,0.005362263);
   VH_tagFirst_Aplanarity_stack_9->SetBinContent(13,0.004412011);
   VH_tagFirst_Aplanarity_stack_9->SetBinContent(15,0.002452767);
   VH_tagFirst_Aplanarity_stack_9->SetBinContent(17,0.0009458249);
   VH_tagFirst_Aplanarity_stack_9->SetBinContent(20,0.001580253);
   VH_tagFirst_Aplanarity_stack_9->SetBinError(1,0.2922506);
   VH_tagFirst_Aplanarity_stack_9->SetBinError(2,0.09266672);
   VH_tagFirst_Aplanarity_stack_9->SetBinError(3,0.04588475);
   VH_tagFirst_Aplanarity_stack_9->SetBinError(4,0.02528407);
   VH_tagFirst_Aplanarity_stack_9->SetBinError(5,0.01666976);
   VH_tagFirst_Aplanarity_stack_9->SetBinError(6,0.01199846);
   VH_tagFirst_Aplanarity_stack_9->SetBinError(7,0.009375355);
   VH_tagFirst_Aplanarity_stack_9->SetBinError(8,0.006093134);
   VH_tagFirst_Aplanarity_stack_9->SetBinError(9,0.005322194);
   VH_tagFirst_Aplanarity_stack_9->SetBinError(10,0.004874946);
   VH_tagFirst_Aplanarity_stack_9->SetBinError(11,0.00212338);
   VH_tagFirst_Aplanarity_stack_9->SetBinError(12,0.002757974);
   VH_tagFirst_Aplanarity_stack_9->SetBinError(13,0.002580836);
   VH_tagFirst_Aplanarity_stack_9->SetBinError(15,0.001758046);
   VH_tagFirst_Aplanarity_stack_9->SetBinError(17,0.0009458249);
   VH_tagFirst_Aplanarity_stack_9->SetBinError(20,0.001580253);
   VH_tagFirst_Aplanarity_stack_9->SetEntries(68338);

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
   VH_tagFirst_Aplanarity_stack_10->SetBinContent(1,36.99347);
   VH_tagFirst_Aplanarity_stack_10->SetBinContent(2,4.151835);
   VH_tagFirst_Aplanarity_stack_10->SetBinContent(3,1.000331);
   VH_tagFirst_Aplanarity_stack_10->SetBinContent(4,0.3480935);
   VH_tagFirst_Aplanarity_stack_10->SetBinContent(5,0.1632612);
   VH_tagFirst_Aplanarity_stack_10->SetBinContent(6,0.06484445);
   VH_tagFirst_Aplanarity_stack_10->SetBinContent(7,0.04896505);
   VH_tagFirst_Aplanarity_stack_10->SetBinContent(8,0.02369271);
   VH_tagFirst_Aplanarity_stack_10->SetBinContent(9,0.01333775);
   VH_tagFirst_Aplanarity_stack_10->SetBinContent(10,0.008633158);
   VH_tagFirst_Aplanarity_stack_10->SetBinContent(11,0.005512174);
   VH_tagFirst_Aplanarity_stack_10->SetBinContent(12,0.002999376);
   VH_tagFirst_Aplanarity_stack_10->SetBinContent(13,0.002336068);
   VH_tagFirst_Aplanarity_stack_10->SetBinContent(14,0.001897456);
   VH_tagFirst_Aplanarity_stack_10->SetBinContent(16,0.0005613804);
   VH_tagFirst_Aplanarity_stack_10->SetBinContent(17,0.0003841282);
   VH_tagFirst_Aplanarity_stack_10->SetBinContent(19,0.000896777);
   VH_tagFirst_Aplanarity_stack_10->SetBinContent(21,0.0004081745);
   VH_tagFirst_Aplanarity_stack_10->SetBinError(1,0.1188792);
   VH_tagFirst_Aplanarity_stack_10->SetBinError(2,0.0392842);
   VH_tagFirst_Aplanarity_stack_10->SetBinError(3,0.01932456);
   VH_tagFirst_Aplanarity_stack_10->SetBinError(4,0.01158661);
   VH_tagFirst_Aplanarity_stack_10->SetBinError(5,0.007999665);
   VH_tagFirst_Aplanarity_stack_10->SetBinError(6,0.004943104);
   VH_tagFirst_Aplanarity_stack_10->SetBinError(7,0.004362953);
   VH_tagFirst_Aplanarity_stack_10->SetBinError(8,0.003016804);
   VH_tagFirst_Aplanarity_stack_10->SetBinError(9,0.00225302);
   VH_tagFirst_Aplanarity_stack_10->SetBinError(10,0.001744433);
   VH_tagFirst_Aplanarity_stack_10->SetBinError(11,0.001613661);
   VH_tagFirst_Aplanarity_stack_10->SetBinError(12,0.001053751);
   VH_tagFirst_Aplanarity_stack_10->SetBinError(13,0.0009631863);
   VH_tagFirst_Aplanarity_stack_10->SetBinError(14,0.0008530397);
   VH_tagFirst_Aplanarity_stack_10->SetBinError(16,0.0004081541);
   VH_tagFirst_Aplanarity_stack_10->SetBinError(17,0.0003841282);
   VH_tagFirst_Aplanarity_stack_10->SetBinError(19,0.0006375639);
   VH_tagFirst_Aplanarity_stack_10->SetBinError(21,0.0004081745);
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
   VH_tagFirst_Aplanarity_stack_11->SetBinContent(1,1.60758);
   VH_tagFirst_Aplanarity_stack_11->SetBinContent(2,0.1488455);
   VH_tagFirst_Aplanarity_stack_11->SetBinContent(3,0.03251455);
   VH_tagFirst_Aplanarity_stack_11->SetBinContent(4,0.01257971);
   VH_tagFirst_Aplanarity_stack_11->SetBinContent(6,0.001736123);
   VH_tagFirst_Aplanarity_stack_11->SetBinError(1,0.05763838);
   VH_tagFirst_Aplanarity_stack_11->SetBinError(2,0.01760932);
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
   VH_tagFirst_Aplanarity_stack_12->SetBinContent(1,0.7682424);
   VH_tagFirst_Aplanarity_stack_12->SetBinContent(2,0.08316655);
   VH_tagFirst_Aplanarity_stack_12->SetBinContent(3,0.02025888);
   VH_tagFirst_Aplanarity_stack_12->SetBinContent(4,0.007182694);
   VH_tagFirst_Aplanarity_stack_12->SetBinContent(5,0.002943678);
   VH_tagFirst_Aplanarity_stack_12->SetBinContent(6,0.0009468242);
   VH_tagFirst_Aplanarity_stack_12->SetBinContent(7,0.0006445096);
   VH_tagFirst_Aplanarity_stack_12->SetBinContent(8,0.001458604);
   VH_tagFirst_Aplanarity_stack_12->SetBinContent(9,0.0004297189);
   VH_tagFirst_Aplanarity_stack_12->SetBinContent(17,0.0002685819);
   VH_tagFirst_Aplanarity_stack_12->SetBinError(1,0.01493246);
   VH_tagFirst_Aplanarity_stack_12->SetBinError(2,0.00487946);
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
   VH_tagFirst_Aplanarity__91->SetBinContent(1,2997062);
   VH_tagFirst_Aplanarity__91->SetBinContent(2,418148);
   VH_tagFirst_Aplanarity__91->SetBinContent(3,106377);
   VH_tagFirst_Aplanarity__91->SetBinContent(4,35088);
   VH_tagFirst_Aplanarity__91->SetBinContent(5,13629);
   VH_tagFirst_Aplanarity__91->SetBinContent(6,6457);
   VH_tagFirst_Aplanarity__91->SetBinContent(7,3456);
   VH_tagFirst_Aplanarity__91->SetBinContent(8,1915);
   VH_tagFirst_Aplanarity__91->SetBinContent(9,1164);
   VH_tagFirst_Aplanarity__91->SetBinContent(10,706);
   VH_tagFirst_Aplanarity__91->SetBinContent(11,417);
   VH_tagFirst_Aplanarity__91->SetBinContent(12,279);
   VH_tagFirst_Aplanarity__91->SetBinContent(13,192);
   VH_tagFirst_Aplanarity__91->SetBinContent(14,105);
   VH_tagFirst_Aplanarity__91->SetBinContent(15,83);
   VH_tagFirst_Aplanarity__91->SetBinContent(16,33);
   VH_tagFirst_Aplanarity__91->SetBinContent(17,19);
   VH_tagFirst_Aplanarity__91->SetBinContent(18,10);
   VH_tagFirst_Aplanarity__91->SetBinContent(19,9);
   VH_tagFirst_Aplanarity__91->SetBinContent(20,8);
   VH_tagFirst_Aplanarity__91->SetEntries(3585207);

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
   Double_t Graph_from_VH_tagFirst_Aplanarity_fy1091[50] = { 2261043, 327021.9, 83751.71, 27346.13, 8736.955, 4678.778, 2659.379, 984.4091, 1166.732, 268.2369, 246.7775, 392.9731, 146.3258, 39.74571, 50.54869, 7.532267, 16.32771,
   2.971938, 1.454806, 0.7592826, 0.3968674, 0.1179923, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0 };
   Double_t Graph_from_VH_tagFirst_Aplanarity_fex1091[50] = { 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01 };
   Double_t Graph_from_VH_tagFirst_Aplanarity_fey1091[50] = { 29639.25, 18692.24, 4176.939, 2191.372, 863.0364, 662.0546, 462.2224, 93.92364, 343.8615, 39.67163, 44.22721, 219.5282, 38.43626, 11.50451, 17.76962, 0.8241614, 8.307817,
   0.526654, 0.2882973, 0.3406459, 0.1642435, 0.08353036, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
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
   Graph_Graph_from_VH_tagFirst_Aplanarity1091->SetMaximum(2519751);
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
   data_mc_ratio__92->SetBinContent(1,1.325522);
   data_mc_ratio__92->SetBinContent(2,1.278654);
   data_mc_ratio__92->SetBinContent(3,1.270147);
   data_mc_ratio__92->SetBinContent(4,1.283107);
   data_mc_ratio__92->SetBinContent(5,1.559926);
   data_mc_ratio__92->SetBinContent(6,1.380061);
   data_mc_ratio__92->SetBinContent(7,1.299552);
   data_mc_ratio__92->SetBinContent(8,1.945329);
   data_mc_ratio__92->SetBinContent(9,0.9976582);
   data_mc_ratio__92->SetBinContent(10,2.632002);
   data_mc_ratio__92->SetBinContent(11,1.689781);
   data_mc_ratio__92->SetBinContent(12,0.7099723);
   data_mc_ratio__92->SetBinContent(13,1.312141);
   data_mc_ratio__92->SetBinContent(14,2.641795);
   data_mc_ratio__92->SetBinContent(15,1.641981);
   data_mc_ratio__92->SetBinContent(16,4.381151);
   data_mc_ratio__92->SetBinContent(17,1.163666);
   data_mc_ratio__92->SetBinContent(18,3.364807);
   data_mc_ratio__92->SetBinContent(19,6.186391);
   data_mc_ratio__92->SetBinContent(20,10.53626);
   data_mc_ratio__92->SetBinError(1,0.0007656654);
   data_mc_ratio__92->SetBinError(2,0.001977371);
   data_mc_ratio__92->SetBinError(3,0.003894307);
   data_mc_ratio__92->SetBinError(4,0.006849888);
   data_mc_ratio__92->SetBinError(5,0.01336201);
   data_mc_ratio__92->SetBinError(6,0.01717445);
   data_mc_ratio__92->SetBinError(7,0.02210582);
   data_mc_ratio__92->SetBinError(8,0.04445379);
   data_mc_ratio__92->SetBinError(9,0.02924188);
   data_mc_ratio__92->SetBinError(10,0.09905671);
   data_mc_ratio__92->SetBinError(11,0.08274893);
   data_mc_ratio__92->SetBinError(12,0.04250493);
   data_mc_ratio__92->SetBinError(13,0.0946956);
   data_mc_ratio__92->SetBinError(14,0.2578128);
   data_mc_ratio__92->SetBinError(15,0.1802308);
   data_mc_ratio__92->SetBinError(16,0.7626605);
   data_mc_ratio__92->SetBinError(17,0.2669633);
   data_mc_ratio__92->SetBinError(18,1.064045);
   data_mc_ratio__92->SetBinError(19,2.06213);
   data_mc_ratio__92->SetBinError(20,3.725131);
   data_mc_ratio__92->SetMinimum(0.4);
   data_mc_ratio__92->SetMaximum(1.6);
   data_mc_ratio__92->SetEntries(50.77381);
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
   Double_t Graph_from_mc_statistical_error_fey1092[50] = { 0.01310866, 0.05715899, 0.04987288, 0.08013463, 0.09877999, 0.1415016, 0.1738084, 0.09541119, 0.2947219, 0.1478978, 0.179219, 0.5586343, 0.2626759, 0.2894529, 0.3515347, 0.1094174, 0.5088172,
   0.1772089, 0.1981689, 0.4486417, 0.4138497, 0.7079305, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
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
