#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_pt_tags_16_logY()
{
//=========Macro generated from canvas: Z_pt_tags_16/Z_pt_tags_16
//=========  (Thu Feb 16 10:37:18 2023) by ROOT version 6.26/06
   TCanvas *Z_pt_tags_16 = new TCanvas("Z_pt_tags_16", "Z_pt_tags_16",0,0,600,600);
   Z_pt_tags_16->SetHighLightColor(2);
   Z_pt_tags_16->Range(37.97653,0.6360947,1705.96,2.220511);
   Z_pt_tags_16->SetFillColor(0);
   Z_pt_tags_16->SetFillStyle(4000);
   Z_pt_tags_16->SetBorderMode(0);
   Z_pt_tags_16->SetBorderSize(2);
   Z_pt_tags_16->SetLogy();
   Z_pt_tags_16->SetLeftMargin(0.15709);
   Z_pt_tags_16->SetRightMargin(0.1234783);
   Z_pt_tags_16->SetBottomMargin(0.12);
   Z_pt_tags_16->SetFrameFillStyle(1000);
   Z_pt_tags_16->SetFrameBorderMode(0);
   Z_pt_tags_16->SetFrameFillStyle(1000);
   Z_pt_tags_16->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(10);
   st->SetMaximum(96.39279);
   
   TH1F *st_stack_9 = new TH1F("st_stack_9","",40,0,2000);
   st_stack_9->SetMinimum(6.702313);
   st_stack_9->SetMaximum(115.3637);
   st_stack_9->SetDirectory(0);
   st_stack_9->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_9->SetLineColor(ci);
   st_stack_9->GetXaxis()->SetTitle("Z p_{T} [GeV]");
   st_stack_9->GetXaxis()->SetRange(7,30);
   st_stack_9->GetXaxis()->SetLabelFont(42);
   st_stack_9->GetXaxis()->SetTitleOffset(1);
   st_stack_9->GetXaxis()->SetTitleFont(42);
   st_stack_9->GetYaxis()->SetTitle("Events/50.0");
   st_stack_9->GetYaxis()->SetLabelFont(42);
   st_stack_9->GetYaxis()->SetTitleSize(0.037);
   st_stack_9->GetYaxis()->SetTitleFont(42);
   st_stack_9->GetZaxis()->SetLabelFont(42);
   st_stack_9->GetZaxis()->SetTitleOffset(1);
   st_stack_9->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_9);
   
   
   TH1D *VbbHcc_tags_Z_pt_stack_1 = new TH1D("VbbHcc_tags_Z_pt_stack_1","",40,0,2000);
   VbbHcc_tags_Z_pt_stack_1->SetBinContent(1,0.3768436);
   VbbHcc_tags_Z_pt_stack_1->SetBinContent(2,0.7262637);
   VbbHcc_tags_Z_pt_stack_1->SetBinContent(3,0.9639279);
   VbbHcc_tags_Z_pt_stack_1->SetBinContent(4,0.7130423);
   VbbHcc_tags_Z_pt_stack_1->SetBinContent(5,0.432721);
   VbbHcc_tags_Z_pt_stack_1->SetBinContent(6,0.2699574);
   VbbHcc_tags_Z_pt_stack_1->SetBinContent(7,0.1595431);
   VbbHcc_tags_Z_pt_stack_1->SetBinContent(8,0.09785835);
   VbbHcc_tags_Z_pt_stack_1->SetBinContent(9,0.03332985);
   VbbHcc_tags_Z_pt_stack_1->SetBinContent(10,0.01479581);
   VbbHcc_tags_Z_pt_stack_1->SetBinContent(11,0.02675086);
   VbbHcc_tags_Z_pt_stack_1->SetBinContent(12,0.008197283);
   VbbHcc_tags_Z_pt_stack_1->SetBinContent(13,0.005853435);
   VbbHcc_tags_Z_pt_stack_1->SetBinError(1,0.03398477);
   VbbHcc_tags_Z_pt_stack_1->SetBinError(2,0.04632483);
   VbbHcc_tags_Z_pt_stack_1->SetBinError(3,0.05367668);
   VbbHcc_tags_Z_pt_stack_1->SetBinError(4,0.04600447);
   VbbHcc_tags_Z_pt_stack_1->SetBinError(5,0.03543051);
   VbbHcc_tags_Z_pt_stack_1->SetBinError(6,0.02851761);
   VbbHcc_tags_Z_pt_stack_1->SetBinError(7,0.02155259);
   VbbHcc_tags_Z_pt_stack_1->SetBinError(8,0.0170961);
   VbbHcc_tags_Z_pt_stack_1->SetBinError(9,0.00967433);
   VbbHcc_tags_Z_pt_stack_1->SetBinError(10,0.006628665);
   VbbHcc_tags_Z_pt_stack_1->SetBinError(11,0.008948544);
   VbbHcc_tags_Z_pt_stack_1->SetBinError(12,0.004686382);
   VbbHcc_tags_Z_pt_stack_1->SetBinError(13,0.004141732);
   VbbHcc_tags_Z_pt_stack_1->SetEntries(1354);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_tags_Z_pt_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_pt_stack_1->SetLineColor(ci);
   VbbHcc_tags_Z_pt_stack_1->GetXaxis()->SetRange(1,2000);
   VbbHcc_tags_Z_pt_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_pt_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_Z_pt_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_pt_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_pt_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_pt_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_pt_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_Z_pt_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_pt_stack_1,"");
   
   TH1D *VbbHcc_tags_Z_pt_stack_2 = new TH1D("VbbHcc_tags_Z_pt_stack_2","",40,0,2000);
   VbbHcc_tags_Z_pt_stack_2->SetBinContent(1,0.1058331);
   VbbHcc_tags_Z_pt_stack_2->SetBinContent(2,0.2475518);
   VbbHcc_tags_Z_pt_stack_2->SetBinContent(3,0.4354771);
   VbbHcc_tags_Z_pt_stack_2->SetBinContent(4,0.3514075);
   VbbHcc_tags_Z_pt_stack_2->SetBinContent(5,0.2244124);
   VbbHcc_tags_Z_pt_stack_2->SetBinContent(6,0.140799);
   VbbHcc_tags_Z_pt_stack_2->SetBinContent(7,0.06103793);
   VbbHcc_tags_Z_pt_stack_2->SetBinContent(8,0.03319376);
   VbbHcc_tags_Z_pt_stack_2->SetBinContent(9,0.008093051);
   VbbHcc_tags_Z_pt_stack_2->SetBinContent(10,0.003825305);
   VbbHcc_tags_Z_pt_stack_2->SetBinContent(11,0.001220831);
   VbbHcc_tags_Z_pt_stack_2->SetBinContent(12,0.001840419);
   VbbHcc_tags_Z_pt_stack_2->SetBinContent(13,0.0001426368);
   VbbHcc_tags_Z_pt_stack_2->SetBinContent(14,0.0004231482);
   VbbHcc_tags_Z_pt_stack_2->SetBinContent(15,0.0007582263);
   VbbHcc_tags_Z_pt_stack_2->SetBinContent(16,0.0003105297);
   VbbHcc_tags_Z_pt_stack_2->SetBinContent(17,0.0003720141);
   VbbHcc_tags_Z_pt_stack_2->SetBinContent(19,0.0006520687);
   VbbHcc_tags_Z_pt_stack_2->SetBinContent(21,0.000387588);
   VbbHcc_tags_Z_pt_stack_2->SetBinContent(23,0.0003858223);
   VbbHcc_tags_Z_pt_stack_2->SetBinError(1,0.00636016);
   VbbHcc_tags_Z_pt_stack_2->SetBinError(2,0.009727272);
   VbbHcc_tags_Z_pt_stack_2->SetBinError(3,0.01291297);
   VbbHcc_tags_Z_pt_stack_2->SetBinError(4,0.01156807);
   VbbHcc_tags_Z_pt_stack_2->SetBinError(5,0.009243287);
   VbbHcc_tags_Z_pt_stack_2->SetBinError(6,0.007318412);
   VbbHcc_tags_Z_pt_stack_2->SetBinError(7,0.004824443);
   VbbHcc_tags_Z_pt_stack_2->SetBinError(8,0.003510172);
   VbbHcc_tags_Z_pt_stack_2->SetBinError(9,0.001745086);
   VbbHcc_tags_Z_pt_stack_2->SetBinError(10,0.001210623);
   VbbHcc_tags_Z_pt_stack_2->SetBinError(11,0.0007054963);
   VbbHcc_tags_Z_pt_stack_2->SetBinError(12,0.0008248279);
   VbbHcc_tags_Z_pt_stack_2->SetBinError(13,0.0001426368);
   VbbHcc_tags_Z_pt_stack_2->SetBinError(14,0.0004231482);
   VbbHcc_tags_Z_pt_stack_2->SetBinError(15,0.0005361485);
   VbbHcc_tags_Z_pt_stack_2->SetBinError(16,0.0003105297);
   VbbHcc_tags_Z_pt_stack_2->SetBinError(17,0.0003720141);
   VbbHcc_tags_Z_pt_stack_2->SetBinError(19,0.0004643069);
   VbbHcc_tags_Z_pt_stack_2->SetBinError(21,0.000387588);
   VbbHcc_tags_Z_pt_stack_2->SetBinError(23,0.0003858223);
   VbbHcc_tags_Z_pt_stack_2->SetEntries(4322);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_tags_Z_pt_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_pt_stack_2->SetLineColor(ci);
   VbbHcc_tags_Z_pt_stack_2->GetXaxis()->SetRange(1,2000);
   VbbHcc_tags_Z_pt_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_pt_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_Z_pt_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_pt_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_pt_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_pt_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_pt_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_Z_pt_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_pt_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_tags_Z_pt_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_pt_stack_1","ZHcc","F");

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
   Z_pt_tags_16->Modified();
   Z_pt_tags_16->cd();
   Z_pt_tags_16->SetSelected(Z_pt_tags_16);
}
