#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Aplanarity_seljet_17()
{
//=========Macro generated from canvas: Aplanarity_seljet_17/Aplanarity_seljet_17
//=========  (Wed Jan 18 11:43:16 2023) by ROOT version 6.26/06
   TCanvas *Aplanarity_seljet_17 = new TCanvas("Aplanarity_seljet_17", "Aplanarity_seljet_17",0,0,600,600);
   Aplanarity_seljet_17->SetHighLightColor(2);
   Aplanarity_seljet_17->Range(-0.2183529,-2.241792e+09,1.171633,1.64398e+10);
   Aplanarity_seljet_17->SetFillColor(0);
   Aplanarity_seljet_17->SetFillStyle(4000);
   Aplanarity_seljet_17->SetBorderMode(0);
   Aplanarity_seljet_17->SetBorderSize(2);
   Aplanarity_seljet_17->SetLeftMargin(0.15709);
   Aplanarity_seljet_17->SetRightMargin(0.1234783);
   Aplanarity_seljet_17->SetBottomMargin(0.12);
   Aplanarity_seljet_17->SetFrameFillStyle(1000);
   Aplanarity_seljet_17->SetFrameBorderMode(0);
   Aplanarity_seljet_17->SetFrameFillStyle(1000);
   Aplanarity_seljet_17->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(1.457164e+10);
   
   TH1F *st_stack_318 = new TH1F("st_stack_318","",50,0,1);
   st_stack_318->SetMinimum(0);
   st_stack_318->SetMaximum(1.457164e+10);
   st_stack_318->SetDirectory(0);
   st_stack_318->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_318->SetLineColor(ci);
   st_stack_318->GetXaxis()->SetTitle("Aplanarity");
   st_stack_318->GetXaxis()->SetRange(1,50);
   st_stack_318->GetXaxis()->SetLabelFont(42);
   st_stack_318->GetXaxis()->SetTitleOffset(1);
   st_stack_318->GetXaxis()->SetTitleFont(42);
   st_stack_318->GetYaxis()->SetTitle("Events/0.02");
   st_stack_318->GetYaxis()->SetLabelFont(42);
   st_stack_318->GetYaxis()->SetTitleSize(0.037);
   st_stack_318->GetYaxis()->SetTitleFont(42);
   st_stack_318->GetZaxis()->SetLabelFont(42);
   st_stack_318->GetZaxis()->SetTitleOffset(1);
   st_stack_318->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_318);
   
   
   TH1D *VbbHcc_seljet_Aplanarity_stack_1 = new TH1D("VbbHcc_seljet_Aplanarity_stack_1","",50,0,1);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinContent(0,91.89644);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinContent(1,9.708138e+09);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinContent(2,4.978181e+09);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinContent(3,2.644861e+09);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinContent(4,1.504131e+09);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinContent(5,9.087636e+08);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinContent(6,5.651523e+08);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinContent(7,3.662625e+08);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinContent(8,2.417898e+08);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinContent(9,1.609972e+08);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinContent(10,1.069295e+08);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinContent(11,7.314058e+07);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinContent(12,4.832018e+07);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinContent(13,3.263523e+07);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinContent(14,2.150401e+07);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinContent(15,1.268889e+07);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinContent(16,8376726);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinContent(17,5237061);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinContent(18,2804989);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinContent(19,1666067);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinContent(20,743908.4);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinContent(21,260905.7);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinContent(22,143587.3);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinContent(23,35669.66);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinContent(24,4890.186);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinError(0,32.95268);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinError(1,8179617);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinError(2,6325919);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinError(3,4732556);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinError(4,3597897);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinError(5,2814083);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinError(6,2218036);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinError(7,1795488);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinError(8,1463731);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinError(9,1203591);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinError(10,971666.8);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinError(11,813177.9);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinError(12,660864);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinError(13,547389.4);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinError(14,444961.2);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinError(15,336086.7);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinError(16,277860.2);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinError(17,224376.9);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinError(18,160621.6);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinError(19,127519.2);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinError(20,82692.65);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinError(21,40067.39);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinError(22,37894.4);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinError(23,18728.82);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinError(24,2567.126);
   VbbHcc_seljet_Aplanarity_stack_1->SetEntries(7.110996e+07);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_seljet_Aplanarity_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_seljet_Aplanarity_stack_1->SetLineColor(ci);
   VbbHcc_seljet_Aplanarity_stack_1->GetXaxis()->SetRange(1,100);
   VbbHcc_seljet_Aplanarity_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_seljet_Aplanarity_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_seljet_Aplanarity_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_seljet_Aplanarity_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_seljet_Aplanarity_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_seljet_Aplanarity_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_seljet_Aplanarity_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_seljet_Aplanarity_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_seljet_Aplanarity_stack_1,"");
   
   TH1D *VbbHcc_seljet_Aplanarity_stack_2 = new TH1D("VbbHcc_seljet_Aplanarity_stack_2","",50,0,1);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinContent(0,1.304433);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinContent(1,6291486);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinContent(2,4919235);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinContent(3,3348294);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinContent(4,2301472);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinContent(5,1615517);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinContent(6,1151386);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinContent(7,829713.6);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinContent(8,599814.7);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinContent(9,434375.6);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinContent(10,313263.2);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinContent(11,224513.1);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinContent(12,158903.2);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinContent(13,111049.4);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinContent(14,75995.9);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinContent(15,50626.51);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinContent(16,32841.19);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinContent(17,20414.55);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinContent(18,11997.03);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinContent(19,6650.881);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinContent(20,3365.667);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinContent(21,1489.852);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinContent(22,542.5518);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinContent(23,148.5453);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinContent(24,24.47411);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinContent(25,0.9510885);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinError(0,0.291404);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinError(1,667.9097);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinError(2,596.4896);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinError(3,493.8396);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinError(4,410.0588);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinError(5,343.8444);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinError(6,290.4566);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinError(7,246.6859);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinError(8,209.8166);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinError(9,178.6395);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinError(10,151.737);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinError(11,128.5162);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinError(12,108.1221);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinError(13,90.4308);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinError(14,74.80652);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinError(15,61.08148);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinError(16,49.23098);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinError(17,38.79661);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinError(18,29.74922);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinError(19,22.15765);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinError(20,15.75917);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinError(21,10.4849);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinError(22,6.320209);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinError(23,3.308611);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinError(24,1.376319);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinError(25,0.2572806);
   VbbHcc_seljet_Aplanarity_stack_2->SetEntries(3.452711e+08);

   ci = TColor::GetColor("#990099");
   VbbHcc_seljet_Aplanarity_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_seljet_Aplanarity_stack_2->SetLineColor(ci);
   VbbHcc_seljet_Aplanarity_stack_2->GetXaxis()->SetRange(1,100);
   VbbHcc_seljet_Aplanarity_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_seljet_Aplanarity_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_seljet_Aplanarity_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_seljet_Aplanarity_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_seljet_Aplanarity_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_seljet_Aplanarity_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_seljet_Aplanarity_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_seljet_Aplanarity_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_seljet_Aplanarity_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_seljet_Aplanarity_stack_2","t#bar{t}","F");

   ci = TColor::GetColor("#990099");
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
   entry=leg->AddEntry("VbbHcc_seljet_Aplanarity_stack_1","QCD","F");

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
   leg->Draw();
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Aplanarity_seljet_17->Modified();
   Aplanarity_seljet_17->cd();
   Aplanarity_seljet_17->SetSelected(Aplanarity_seljet_17);
}
