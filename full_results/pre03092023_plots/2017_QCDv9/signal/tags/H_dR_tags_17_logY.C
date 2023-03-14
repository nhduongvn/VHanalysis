#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_dR_tags_17_logY()
{
//=========Macro generated from canvas: H_dR_tags_17/H_dR_tags_17
//=========  (Thu Mar  9 12:19:49 2023) by ROOT version 6.26/06
   TCanvas *H_dR_tags_17 = new TCanvas("H_dR_tags_17", "H_dR_tags_17",0,0,600,600);
   H_dR_tags_17->SetHighLightColor(2);
   H_dR_tags_17->Range(-1.310117,-0.09761538,7.029799,0.7158461);
   H_dR_tags_17->SetFillColor(0);
   H_dR_tags_17->SetFillStyle(4000);
   H_dR_tags_17->SetBorderMode(0);
   H_dR_tags_17->SetBorderSize(2);
   H_dR_tags_17->SetLogy();
   H_dR_tags_17->SetLeftMargin(0.15709);
   H_dR_tags_17->SetRightMargin(0.1234783);
   H_dR_tags_17->SetBottomMargin(0.12);
   H_dR_tags_17->SetFrameFillStyle(1000);
   H_dR_tags_17->SetFrameBorderMode(0);
   H_dR_tags_17->SetFrameFillStyle(1000);
   H_dR_tags_17->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(1e+10);
   
   TH1F *st_stack_22 = new TH1F("st_stack_22","",30,0,6);
   st_stack_22->SetMinimum(-2.433458e+09);
   st_stack_22->SetMaximum(-0.6307241);
   st_stack_22->SetDirectory(0);
   st_stack_22->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_22->SetLineColor(ci);
   st_stack_22->GetXaxis()->SetTitle("#DeltaR(c,c)");
   st_stack_22->GetXaxis()->SetRange(1,31);
   st_stack_22->GetXaxis()->SetLabelFont(42);
   st_stack_22->GetXaxis()->SetTitleOffset(1);
   st_stack_22->GetXaxis()->SetTitleFont(42);
   st_stack_22->GetYaxis()->SetTitle("Event/0.2");
   st_stack_22->GetYaxis()->SetLabelFont(42);
   st_stack_22->GetYaxis()->SetTitleSize(0.037);
   st_stack_22->GetYaxis()->SetTitleFont(42);
   st_stack_22->GetZaxis()->SetLabelFont(42);
   st_stack_22->GetZaxis()->SetTitleOffset(1);
   st_stack_22->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_22);
   
   
   TH1D *VbbHcc_tags_H_dR_stack_1 = new TH1D("VbbHcc_tags_H_dR_stack_1","",30,0,6);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(3,0.1223208);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(4,0.2817226);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(5,0.3548551);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(6,0.413077);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(7,0.4165094);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(8,0.3412452);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(9,0.2727712);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(10,0.2435259);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(11,0.2286077);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(12,0.1975428);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(13,0.2075112);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(14,0.2997494);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(15,0.2603345);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(16,0.2975137);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(17,0.1159079);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(18,0.06023741);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(19,0.04461703);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(20,0.02187954);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(21,0.01726027);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(22,0.01223447);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(23,0.005503446);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(24,0.00201839);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(25,0.0027815);
   VbbHcc_tags_H_dR_stack_1->SetBinError(3,0.01293394);
   VbbHcc_tags_H_dR_stack_1->SetBinError(4,0.01949642);
   VbbHcc_tags_H_dR_stack_1->SetBinError(5,0.02171847);
   VbbHcc_tags_H_dR_stack_1->SetBinError(6,0.0238113);
   VbbHcc_tags_H_dR_stack_1->SetBinError(7,0.02340952);
   VbbHcc_tags_H_dR_stack_1->SetBinError(8,0.0214214);
   VbbHcc_tags_H_dR_stack_1->SetBinError(9,0.01883797);
   VbbHcc_tags_H_dR_stack_1->SetBinError(10,0.01808314);
   VbbHcc_tags_H_dR_stack_1->SetBinError(11,0.0172055);
   VbbHcc_tags_H_dR_stack_1->SetBinError(12,0.01625358);
   VbbHcc_tags_H_dR_stack_1->SetBinError(13,0.01643657);
   VbbHcc_tags_H_dR_stack_1->SetBinError(14,0.01987197);
   VbbHcc_tags_H_dR_stack_1->SetBinError(15,0.01883769);
   VbbHcc_tags_H_dR_stack_1->SetBinError(16,0.01977331);
   VbbHcc_tags_H_dR_stack_1->SetBinError(17,0.01217778);
   VbbHcc_tags_H_dR_stack_1->SetBinError(18,0.009010277);
   VbbHcc_tags_H_dR_stack_1->SetBinError(19,0.007741672);
   VbbHcc_tags_H_dR_stack_1->SetBinError(20,0.005366219);
   VbbHcc_tags_H_dR_stack_1->SetBinError(21,0.004697468);
   VbbHcc_tags_H_dR_stack_1->SetBinError(22,0.003915606);
   VbbHcc_tags_H_dR_stack_1->SetBinError(23,0.002598973);
   VbbHcc_tags_H_dR_stack_1->SetBinError(24,0.001491047);
   VbbHcc_tags_H_dR_stack_1->SetBinError(25,0.001672013);
   VbbHcc_tags_H_dR_stack_1->SetEntries(3477);

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
   VbbHcc_tags_H_dR_stack_2->SetBinContent(3,0.0419459);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(4,0.08813294);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(5,0.1394072);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(6,0.1801897);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(7,0.1877762);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(8,0.1732265);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(9,0.131021);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(10,0.09516576);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(11,0.08814955);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(12,0.08932317);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(13,0.09644662);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(14,0.1016296);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(15,0.1100272);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(16,0.1172209);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(17,0.05567576);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(18,0.03263722);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(19,0.01996939);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(20,0.0152413);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(21,0.008746458);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(22,0.004533561);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(23,0.001974267);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(24,0.00197364);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(25,0.0007623054);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(26,0.0008476206);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(27,0.0001344889);
   VbbHcc_tags_H_dR_stack_2->SetBinError(3,0.002671193);
   VbbHcc_tags_H_dR_stack_2->SetBinError(4,0.00383919);
   VbbHcc_tags_H_dR_stack_2->SetBinError(5,0.004834237);
   VbbHcc_tags_H_dR_stack_2->SetBinError(6,0.005512434);
   VbbHcc_tags_H_dR_stack_2->SetBinError(7,0.005678184);
   VbbHcc_tags_H_dR_stack_2->SetBinError(8,0.005426319);
   VbbHcc_tags_H_dR_stack_2->SetBinError(9,0.004732835);
   VbbHcc_tags_H_dR_stack_2->SetBinError(10,0.004014553);
   VbbHcc_tags_H_dR_stack_2->SetBinError(11,0.003876945);
   VbbHcc_tags_H_dR_stack_2->SetBinError(12,0.003893627);
   VbbHcc_tags_H_dR_stack_2->SetBinError(13,0.004031852);
   VbbHcc_tags_H_dR_stack_2->SetBinError(14,0.004136993);
   VbbHcc_tags_H_dR_stack_2->SetBinError(15,0.004327761);
   VbbHcc_tags_H_dR_stack_2->SetBinError(16,0.00444184);
   VbbHcc_tags_H_dR_stack_2->SetBinError(17,0.003060598);
   VbbHcc_tags_H_dR_stack_2->SetBinError(18,0.002339882);
   VbbHcc_tags_H_dR_stack_2->SetBinError(19,0.00183955);
   VbbHcc_tags_H_dR_stack_2->SetBinError(20,0.001611568);
   VbbHcc_tags_H_dR_stack_2->SetBinError(21,0.001184181);
   VbbHcc_tags_H_dR_stack_2->SetBinError(22,0.0008634545);
   VbbHcc_tags_H_dR_stack_2->SetBinError(23,0.0005438391);
   VbbHcc_tags_H_dR_stack_2->SetBinError(24,0.0005619784);
   VbbHcc_tags_H_dR_stack_2->SetBinError(25,0.0003156014);
   VbbHcc_tags_H_dR_stack_2->SetBinError(26,0.0003806687);
   VbbHcc_tags_H_dR_stack_2->SetBinError(27,0.0001344889);
   VbbHcc_tags_H_dR_stack_2->SetEntries(11007);

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_dR_tags_17->Modified();
   H_dR_tags_17->cd();
   H_dR_tags_17->SetSelected(H_dR_tags_17);
}
