#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Aplanarity_seljet_18_logY()
{
//=========Macro generated from canvas: Aplanarity_seljet_18/Aplanarity_seljet_18
//=========  (Wed Jan 18 11:42:57 2023) by ROOT version 6.26/06
   TCanvas *Aplanarity_seljet_18 = new TCanvas("Aplanarity_seljet_18", "Aplanarity_seljet_18",0,0,600,600);
   Aplanarity_seljet_18->SetHighLightColor(2);
   Aplanarity_seljet_18->Range(-0.2183529,-1.733625,1.171633,14.23615);
   Aplanarity_seljet_18->SetFillColor(0);
   Aplanarity_seljet_18->SetFillStyle(4000);
   Aplanarity_seljet_18->SetBorderMode(0);
   Aplanarity_seljet_18->SetBorderSize(2);
   Aplanarity_seljet_18->SetLogy();
   Aplanarity_seljet_18->SetLeftMargin(0.15709);
   Aplanarity_seljet_18->SetRightMargin(0.1234783);
   Aplanarity_seljet_18->SetBottomMargin(0.12);
   Aplanarity_seljet_18->SetFrameFillStyle(1000);
   Aplanarity_seljet_18->SetFrameBorderMode(0);
   Aplanarity_seljet_18->SetFrameFillStyle(1000);
   Aplanarity_seljet_18->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(10);
   st->SetMaximum(1.350511e+12);
   
   TH1F *st_stack_319 = new TH1F("st_stack_319","",50,0,1);
   st_stack_319->SetMinimum(1.523171);
   st_stack_319->SetMaximum(4.356883e+12);
   st_stack_319->SetDirectory(0);
   st_stack_319->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_319->SetLineColor(ci);
   st_stack_319->GetXaxis()->SetTitle("Aplanarity");
   st_stack_319->GetXaxis()->SetRange(1,50);
   st_stack_319->GetXaxis()->SetLabelFont(42);
   st_stack_319->GetXaxis()->SetTitleOffset(1);
   st_stack_319->GetXaxis()->SetTitleFont(42);
   st_stack_319->GetYaxis()->SetTitle("Events/0.02");
   st_stack_319->GetYaxis()->SetLabelFont(42);
   st_stack_319->GetYaxis()->SetTitleSize(0.037);
   st_stack_319->GetYaxis()->SetTitleFont(42);
   st_stack_319->GetZaxis()->SetLabelFont(42);
   st_stack_319->GetZaxis()->SetTitleOffset(1);
   st_stack_319->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_319);
   
   
   TH1D *VbbHcc_seljet_Aplanarity_stack_1 = new TH1D("VbbHcc_seljet_Aplanarity_stack_1","",50,0,1);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinContent(0,598.6345);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinContent(1,1.349569e+10);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinContent(2,6.787528e+09);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinContent(3,3.604201e+09);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinContent(4,2.053074e+09);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinContent(5,1.238527e+09);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinContent(6,7.760115e+08);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinContent(7,5.015613e+08);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinContent(8,3.333809e+08);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinContent(9,2.183557e+08);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinContent(10,1.518202e+08);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinContent(11,9.811782e+07);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinContent(12,6.642815e+07);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinContent(13,4.410315e+07);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinContent(14,2.958781e+07);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinContent(15,1.974255e+07);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinContent(16,1.10048e+07);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinContent(17,6987461);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinContent(18,4469212);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinContent(19,2031289);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinContent(20,1106580);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinContent(21,433817.2);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinContent(22,143517.8);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinContent(23,69241.89);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinContent(24,2316.099);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinContent(25,39.05318);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinError(0,399.7313);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinError(1,1.195097e+07);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinError(2,9035515);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinError(3,6847567);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinError(4,5210408);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinError(5,4128552);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinError(6,3138505);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinError(7,2628323);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinError(8,2116173);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinError(9,1671303);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinError(10,1415663);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinError(11,1100765);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinError(12,924250.6);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinError(13,744638.2);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinError(14,614066.8);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinError(15,515416.9);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinError(16,366318);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinError(17,323943.3);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinError(18,257506);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinError(19,156536.4);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinError(20,124110);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinError(21,76498.28);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinError(22,41348.39);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinError(23,34260.27);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinError(24,1883.98);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinError(25,39.05318);
   VbbHcc_seljet_Aplanarity_stack_1->SetEntries(6.913018e+07);

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
   VbbHcc_seljet_Aplanarity_stack_2->SetBinContent(0,1.818657);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinContent(1,9418123);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinContent(2,7239365);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinContent(3,4890537);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinContent(4,3350554);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinContent(5,2346862);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinContent(6,1670493);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinContent(7,1202527);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinContent(8,869439);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinContent(9,629515.1);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinContent(10,453642.1);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinContent(11,324795.3);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinContent(12,230074.2);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinContent(13,160436.5);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinContent(14,109843.2);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinContent(15,73375.04);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinContent(16,47521.03);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinContent(17,29580.06);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinContent(18,17431.75);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinContent(19,9670.349);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinContent(20,4833.05);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinContent(21,2174.332);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinContent(22,797.641);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinContent(23,222.2448);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinContent(24,29.3449);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinContent(25,0.833844);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinError(0,0.3967789);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinError(1,969.7449);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinError(2,853.3722);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinError(3,700.9626);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinError(4,580.7257);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinError(5,486.4084);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinError(6,410.7162);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinError(7,348.2316);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinError(8,296.0764);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinError(9,252.5787);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinError(10,213.3241);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinError(11,180.7492);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinError(12,153.5395);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinError(13,127.1338);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinError(14,105.1448);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinError(15,86.31969);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinError(16,69.30168);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinError(17,54.46344);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinError(18,42.22414);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinError(19,31.48057);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinError(20,21.65885);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinError(21,14.57104);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinError(22,8.801025);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinError(23,5.937967);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinError(24,1.590337);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinError(25,0.2618005);
   VbbHcc_seljet_Aplanarity_stack_2->SetEntries(4.141391e+08);

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Aplanarity_seljet_18->Modified();
   Aplanarity_seljet_18->cd();
   Aplanarity_seljet_18->SetSelected(Aplanarity_seljet_18);
}
