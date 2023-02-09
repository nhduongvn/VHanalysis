void Z_pt_both_16_logY()
{
//=========Macro generated from canvas: Z_pt_both_16/Z_pt_both_16
//=========  (Thu Feb  9 09:44:34 2023) by ROOT version 6.14/09
   TCanvas *Z_pt_both_16 = new TCanvas("Z_pt_both_16", "Z_pt_both_16",0,0,600,600);
   Z_pt_both_16->SetHighLightColor(2);
   Z_pt_both_16->Range(37.97653,0.4189536,1705.96,3.061831);
   Z_pt_both_16->SetFillColor(0);
   Z_pt_both_16->SetFillStyle(4000);
   Z_pt_both_16->SetBorderMode(0);
   Z_pt_both_16->SetBorderSize(2);
   Z_pt_both_16->SetLogy();
   Z_pt_both_16->SetLeftMargin(0.15709);
   Z_pt_both_16->SetRightMargin(0.1234783);
   Z_pt_both_16->SetBottomMargin(0.12);
   Z_pt_both_16->SetFrameFillStyle(1000);
   Z_pt_both_16->SetFrameBorderMode(0);
   Z_pt_both_16->SetFrameFillStyle(1000);
   Z_pt_both_16->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(10);
   st->SetMaximum(470.1551);
   
   TH1F *st_stack_137 = new TH1F("st_stack_137","",40,0,2000);
   st_stack_137->SetMinimum(5.446265);
   st_stack_137->SetMaximum(627.3976);
   st_stack_137->SetDirectory(0);
   st_stack_137->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_137->SetLineColor(ci);
   st_stack_137->GetXaxis()->SetTitle("Z p_{T} [GeV]");
   st_stack_137->GetXaxis()->SetRange(7,30);
   st_stack_137->GetXaxis()->SetLabelFont(42);
   st_stack_137->GetXaxis()->SetLabelSize(0.035);
   st_stack_137->GetXaxis()->SetTitleSize(0.035);
   st_stack_137->GetXaxis()->SetTitleFont(42);
   st_stack_137->GetYaxis()->SetTitle("Events/50.0");
   st_stack_137->GetYaxis()->SetLabelFont(42);
   st_stack_137->GetYaxis()->SetLabelSize(0.035);
   st_stack_137->GetYaxis()->SetTitleSize(0.037);
   st_stack_137->GetYaxis()->SetTitleOffset(0);
   st_stack_137->GetYaxis()->SetTitleFont(42);
   st_stack_137->GetZaxis()->SetLabelFont(42);
   st_stack_137->GetZaxis()->SetLabelSize(0.035);
   st_stack_137->GetZaxis()->SetTitleSize(0.035);
   st_stack_137->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_137);
   
   
   TH1D *VbbHcc_both_Z_pt_stack_1 = new TH1D("VbbHcc_both_Z_pt_stack_1","",40,0,2000);
   VbbHcc_both_Z_pt_stack_1->SetBinContent(1,1.96053);
   VbbHcc_both_Z_pt_stack_1->SetBinContent(2,3.853741);
   VbbHcc_both_Z_pt_stack_1->SetBinContent(3,2.59385);
   VbbHcc_both_Z_pt_stack_1->SetBinContent(4,1.315953);
   VbbHcc_both_Z_pt_stack_1->SetBinContent(5,0.679816);
   VbbHcc_both_Z_pt_stack_1->SetBinContent(6,0.3613409);
   VbbHcc_both_Z_pt_stack_1->SetBinContent(7,0.2350389);
   VbbHcc_both_Z_pt_stack_1->SetBinContent(8,0.1249509);
   VbbHcc_both_Z_pt_stack_1->SetBinContent(9,0.04500338);
   VbbHcc_both_Z_pt_stack_1->SetBinContent(10,0.01475387);
   VbbHcc_both_Z_pt_stack_1->SetBinContent(11,0.03872352);
   VbbHcc_both_Z_pt_stack_1->SetBinContent(12,0.01107179);
   VbbHcc_both_Z_pt_stack_1->SetBinContent(13,0.01138089);
   VbbHcc_both_Z_pt_stack_1->SetBinContent(14,0.0008391366);
   VbbHcc_both_Z_pt_stack_1->SetBinError(1,0.07678213);
   VbbHcc_both_Z_pt_stack_1->SetBinError(2,0.1076114);
   VbbHcc_both_Z_pt_stack_1->SetBinError(3,0.08838562);
   VbbHcc_both_Z_pt_stack_1->SetBinError(4,0.06256678);
   VbbHcc_both_Z_pt_stack_1->SetBinError(5,0.04441092);
   VbbHcc_both_Z_pt_stack_1->SetBinError(6,0.03336623);
   VbbHcc_both_Z_pt_stack_1->SetBinError(7,0.02616924);
   VbbHcc_both_Z_pt_stack_1->SetBinError(8,0.01934951);
   VbbHcc_both_Z_pt_stack_1->SetBinError(9,0.01131477);
   VbbHcc_both_Z_pt_stack_1->SetBinError(10,0.006610586);
   VbbHcc_both_Z_pt_stack_1->SetBinError(11,0.010777);
   VbbHcc_both_Z_pt_stack_1->SetBinError(12,0.005497724);
   VbbHcc_both_Z_pt_stack_1->SetBinError(13,0.005697621);
   VbbHcc_both_Z_pt_stack_1->SetBinError(14,0.0008391366);
   VbbHcc_both_Z_pt_stack_1->SetEntries(3959);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_both_Z_pt_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_pt_stack_1->SetLineColor(ci);
   VbbHcc_both_Z_pt_stack_1->GetXaxis()->SetRange(1,2000);
   VbbHcc_both_Z_pt_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_pt_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_pt_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_pt_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_pt_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_pt_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_pt_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_pt_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_pt_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_pt_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_pt_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_pt_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_pt_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_pt_stack_1,"");
   
   TH1D *VbbHcc_both_Z_pt_stack_2 = new TH1D("VbbHcc_both_Z_pt_stack_2","",40,0,2000);
   VbbHcc_both_Z_pt_stack_2->SetBinContent(1,0.3231187);
   VbbHcc_both_Z_pt_stack_2->SetBinContent(2,0.8478099);
   VbbHcc_both_Z_pt_stack_2->SetBinContent(3,0.9756296);
   VbbHcc_both_Z_pt_stack_2->SetBinContent(4,0.6356021);
   VbbHcc_both_Z_pt_stack_2->SetBinContent(5,0.3624407);
   VbbHcc_both_Z_pt_stack_2->SetBinContent(6,0.1998722);
   VbbHcc_both_Z_pt_stack_2->SetBinContent(7,0.08987048);
   VbbHcc_both_Z_pt_stack_2->SetBinContent(8,0.04888078);
   VbbHcc_both_Z_pt_stack_2->SetBinContent(9,0.01252795);
   VbbHcc_both_Z_pt_stack_2->SetBinContent(10,0.008436663);
   VbbHcc_both_Z_pt_stack_2->SetBinContent(11,0.003501821);
   VbbHcc_both_Z_pt_stack_2->SetBinContent(12,0.002166779);
   VbbHcc_both_Z_pt_stack_2->SetBinContent(13,0.000546909);
   VbbHcc_both_Z_pt_stack_2->SetBinContent(14,0.0007648963);
   VbbHcc_both_Z_pt_stack_2->SetBinContent(15,0.0007582263);
   VbbHcc_both_Z_pt_stack_2->SetBinContent(16,0.0003105297);
   VbbHcc_both_Z_pt_stack_2->SetBinContent(17,0.0003720141);
   VbbHcc_both_Z_pt_stack_2->SetBinContent(19,0.0006520687);
   VbbHcc_both_Z_pt_stack_2->SetBinContent(21,0.000387588);
   VbbHcc_both_Z_pt_stack_2->SetBinContent(23,0.0003858223);
   VbbHcc_both_Z_pt_stack_2->SetBinError(1,0.01111725);
   VbbHcc_both_Z_pt_stack_2->SetBinError(2,0.01801815);
   VbbHcc_both_Z_pt_stack_2->SetBinError(3,0.01934045);
   VbbHcc_both_Z_pt_stack_2->SetBinError(4,0.01555932);
   VbbHcc_both_Z_pt_stack_2->SetBinError(5,0.01175781);
   VbbHcc_both_Z_pt_stack_2->SetBinError(6,0.008721244);
   VbbHcc_both_Z_pt_stack_2->SetBinError(7,0.005859302);
   VbbHcc_both_Z_pt_stack_2->SetBinError(8,0.004268993);
   VbbHcc_both_Z_pt_stack_2->SetBinError(9,0.002171695);
   VbbHcc_both_Z_pt_stack_2->SetBinError(10,0.001802404);
   VbbHcc_both_Z_pt_stack_2->SetBinError(11,0.001168417);
   VbbHcc_both_Z_pt_stack_2->SetBinError(12,0.0008870468);
   VbbHcc_both_Z_pt_stack_2->SetBinError(13,0.0004286971);
   VbbHcc_both_Z_pt_stack_2->SetBinError(14,0.0005439174);
   VbbHcc_both_Z_pt_stack_2->SetBinError(15,0.0005361485);
   VbbHcc_both_Z_pt_stack_2->SetBinError(16,0.0003105297);
   VbbHcc_both_Z_pt_stack_2->SetBinError(17,0.0003720141);
   VbbHcc_both_Z_pt_stack_2->SetBinError(19,0.0004643069);
   VbbHcc_both_Z_pt_stack_2->SetBinError(21,0.000387588);
   VbbHcc_both_Z_pt_stack_2->SetBinError(23,0.0003858223);
   VbbHcc_both_Z_pt_stack_2->SetEntries(9371);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_both_Z_pt_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_pt_stack_2->SetLineColor(ci);
   VbbHcc_both_Z_pt_stack_2->GetXaxis()->SetRange(1,2000);
   VbbHcc_both_Z_pt_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_pt_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_pt_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_pt_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_pt_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_pt_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_pt_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_pt_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_pt_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_pt_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_pt_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_pt_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_pt_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_pt_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_both_Z_pt_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_pt_stack_1","ZHcc","F");

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_pt_both_16->Modified();
   Z_pt_both_16->cd();
   Z_pt_both_16->SetSelected(Z_pt_both_16);
}
