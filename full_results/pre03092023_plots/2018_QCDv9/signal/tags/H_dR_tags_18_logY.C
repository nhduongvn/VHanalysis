#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_dR_tags_18_logY()
{
//=========Macro generated from canvas: H_dR_tags_18/H_dR_tags_18
//=========  (Thu Mar  9 12:19:49 2023) by ROOT version 6.26/06
   TCanvas *H_dR_tags_18 = new TCanvas("H_dR_tags_18", "H_dR_tags_18",0,0,600,600);
   H_dR_tags_18->SetHighLightColor(2);
   H_dR_tags_18->Range(-1.310117,-0.1396908,7.029799,1.024399);
   H_dR_tags_18->SetFillColor(0);
   H_dR_tags_18->SetFillStyle(4000);
   H_dR_tags_18->SetBorderMode(0);
   H_dR_tags_18->SetBorderSize(2);
   H_dR_tags_18->SetLogy();
   H_dR_tags_18->SetLeftMargin(0.15709);
   H_dR_tags_18->SetRightMargin(0.1234783);
   H_dR_tags_18->SetBottomMargin(0.12);
   H_dR_tags_18->SetFrameFillStyle(1000);
   H_dR_tags_18->SetFrameBorderMode(0);
   H_dR_tags_18->SetFrameFillStyle(1000);
   H_dR_tags_18->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(1e+10);
   
   TH1F *st_stack_23 = new TH1F("st_stack_23","",30,0,6);
   st_stack_23->SetMinimum(-2.480433e+09);
   st_stack_23->SetMaximum(-0.8756671);
   st_stack_23->SetDirectory(0);
   st_stack_23->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_23->SetLineColor(ci);
   st_stack_23->GetXaxis()->SetTitle("#DeltaR(c,c)");
   st_stack_23->GetXaxis()->SetRange(1,31);
   st_stack_23->GetXaxis()->SetLabelFont(42);
   st_stack_23->GetXaxis()->SetTitleOffset(1);
   st_stack_23->GetXaxis()->SetTitleFont(42);
   st_stack_23->GetYaxis()->SetTitle("Event/0.2");
   st_stack_23->GetYaxis()->SetLabelFont(42);
   st_stack_23->GetYaxis()->SetTitleSize(0.037);
   st_stack_23->GetYaxis()->SetTitleFont(42);
   st_stack_23->GetZaxis()->SetLabelFont(42);
   st_stack_23->GetZaxis()->SetTitleOffset(1);
   st_stack_23->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_23);
   
   
   TH1D *VbbHcc_tags_H_dR_stack_1 = new TH1D("VbbHcc_tags_H_dR_stack_1","",30,0,6);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(3,0.1529194);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(4,0.334559);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(5,0.4412733);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(6,0.6122284);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(7,0.5530098);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(8,0.4415296);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(9,0.3863309);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(10,0.2812021);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(11,0.2946304);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(12,0.3119295);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(13,0.3092918);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(14,0.3513091);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(15,0.3759195);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(16,0.3903675);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(17,0.1315366);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(18,0.06676475);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(19,0.04491941);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(20,0.02666674);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(21,0.01282383);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(22,0.01578502);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(23,0.007031141);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(24,0.006015887);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(25,0.0035939);
   VbbHcc_tags_H_dR_stack_1->SetBinError(3,0.01736909);
   VbbHcc_tags_H_dR_stack_1->SetBinError(4,0.028896);
   VbbHcc_tags_H_dR_stack_1->SetBinError(5,0.02993724);
   VbbHcc_tags_H_dR_stack_1->SetBinError(6,0.04584706);
   VbbHcc_tags_H_dR_stack_1->SetBinError(7,0.0331846);
   VbbHcc_tags_H_dR_stack_1->SetBinError(8,0.03453071);
   VbbHcc_tags_H_dR_stack_1->SetBinError(9,0.02695887);
   VbbHcc_tags_H_dR_stack_1->SetBinError(10,0.02309337);
   VbbHcc_tags_H_dR_stack_1->SetBinError(11,0.02362487);
   VbbHcc_tags_H_dR_stack_1->SetBinError(12,0.02456617);
   VbbHcc_tags_H_dR_stack_1->SetBinError(13,0.02444254);
   VbbHcc_tags_H_dR_stack_1->SetBinError(14,0.02911784);
   VbbHcc_tags_H_dR_stack_1->SetBinError(15,0.02658346);
   VbbHcc_tags_H_dR_stack_1->SetBinError(16,0.02979272);
   VbbHcc_tags_H_dR_stack_1->SetBinError(17,0.01545352);
   VbbHcc_tags_H_dR_stack_1->SetBinError(18,0.01102694);
   VbbHcc_tags_H_dR_stack_1->SetBinError(19,0.009486824);
   VbbHcc_tags_H_dR_stack_1->SetBinError(20,0.006724098);
   VbbHcc_tags_H_dR_stack_1->SetBinError(21,0.00461827);
   VbbHcc_tags_H_dR_stack_1->SetBinError(22,0.005317439);
   VbbHcc_tags_H_dR_stack_1->SetBinError(23,0.003534154);
   VbbHcc_tags_H_dR_stack_1->SetBinError(24,0.003094372);
   VbbHcc_tags_H_dR_stack_1->SetBinError(25,0.002542365);
   VbbHcc_tags_H_dR_stack_1->SetEntries(3172);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_tags_H_dR_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_stack_1->SetLineColor(ci);
   VbbHcc_tags_H_dR_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_H_dR_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_H_dR_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_stack_1,"");
   
   TH1D *VbbHcc_tags_H_dR_stack_2 = new TH1D("VbbHcc_tags_H_dR_stack_2","",30,0,6);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(3,0.05924611);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(4,0.121332);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(5,0.1785466);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(6,0.252524);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(7,0.2669068);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(8,0.2205361);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(9,0.1754725);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(10,0.1356092);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(11,0.1126418);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(12,0.1197118);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(13,0.1208893);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(14,0.1373546);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(15,0.1550249);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(16,0.1525249);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(17,0.07357186);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(18,0.04587504);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(19,0.0276153);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(20,0.01550348);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(21,0.01407193);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(22,0.006496795);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(23,0.004967104);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(24,0.001679563);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(25,0.003169786);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(26,0.0005522882);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(27,0.0005103577);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(28,0.0003053464);
   VbbHcc_tags_H_dR_stack_2->SetBinError(3,0.003825107);
   VbbHcc_tags_H_dR_stack_2->SetBinError(4,0.005628298);
   VbbHcc_tags_H_dR_stack_2->SetBinError(5,0.006658369);
   VbbHcc_tags_H_dR_stack_2->SetBinError(6,0.009268577);
   VbbHcc_tags_H_dR_stack_2->SetBinError(7,0.008777857);
   VbbHcc_tags_H_dR_stack_2->SetBinError(8,0.007371805);
   VbbHcc_tags_H_dR_stack_2->SetBinError(9,0.006646841);
   VbbHcc_tags_H_dR_stack_2->SetBinError(10,0.006013212);
   VbbHcc_tags_H_dR_stack_2->SetBinError(11,0.005318257);
   VbbHcc_tags_H_dR_stack_2->SetBinError(12,0.005447643);
   VbbHcc_tags_H_dR_stack_2->SetBinError(13,0.005478573);
   VbbHcc_tags_H_dR_stack_2->SetBinError(14,0.005861307);
   VbbHcc_tags_H_dR_stack_2->SetBinError(15,0.006352337);
   VbbHcc_tags_H_dR_stack_2->SetBinError(16,0.006600263);
   VbbHcc_tags_H_dR_stack_2->SetBinError(17,0.00492166);
   VbbHcc_tags_H_dR_stack_2->SetBinError(18,0.003852988);
   VbbHcc_tags_H_dR_stack_2->SetBinError(19,0.002577941);
   VbbHcc_tags_H_dR_stack_2->SetBinError(20,0.001996321);
   VbbHcc_tags_H_dR_stack_2->SetBinError(21,0.001922096);
   VbbHcc_tags_H_dR_stack_2->SetBinError(22,0.001266723);
   VbbHcc_tags_H_dR_stack_2->SetBinError(23,0.001121847);
   VbbHcc_tags_H_dR_stack_2->SetBinError(24,0.0006052306);
   VbbHcc_tags_H_dR_stack_2->SetBinError(25,0.0009008344);
   VbbHcc_tags_H_dR_stack_2->SetBinError(26,0.0003920775);
   VbbHcc_tags_H_dR_stack_2->SetBinError(27,0.0003629633);
   VbbHcc_tags_H_dR_stack_2->SetBinError(28,0.0003053464);
   VbbHcc_tags_H_dR_stack_2->SetEntries(10130);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_tags_H_dR_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_stack_2->SetLineColor(ci);
   VbbHcc_tags_H_dR_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_H_dR_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_H_dR_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_tags_H_dR_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_stack_1","ZHcc","F");

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
   leg->Draw();
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_dR_tags_18->Modified();
   H_dR_tags_18->cd();
   H_dR_tags_18->SetSelected(H_dR_tags_18);
}
