#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_pt_both_16()
{
//=========Macro generated from canvas: Z_pt_both_16/Z_pt_both_16
//=========  (Thu Mar  9 13:09:06 2023) by ROOT version 6.26/06
   TCanvas *Z_pt_both_16 = new TCanvas("Z_pt_both_16", "Z_pt_both_16",0,0,600,600);
   Z_pt_both_16->SetHighLightColor(2);
   Z_pt_both_16->Range(37.97653,-0.1847815,1705.96,1.355064);
   Z_pt_both_16->SetFillColor(0);
   Z_pt_both_16->SetFillStyle(4000);
   Z_pt_both_16->SetBorderMode(0);
   Z_pt_both_16->SetBorderSize(2);
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
   st->SetMaximum(1.20108);
   
   TH1F *st_stack_137 = new TH1F("st_stack_137","",40,0,2000);
   st_stack_137->SetMinimum(0);
   st_stack_137->SetMaximum(1.20108);
   st_stack_137->SetDirectory(0);
   st_stack_137->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_137->SetLineColor(ci);
   st_stack_137->GetXaxis()->SetTitle("Z p_{T} [GeV]");
   st_stack_137->GetXaxis()->SetRange(7,30);
   st_stack_137->GetXaxis()->SetLabelFont(42);
   st_stack_137->GetXaxis()->SetTitleOffset(1);
   st_stack_137->GetXaxis()->SetTitleFont(42);
   st_stack_137->GetYaxis()->SetTitle("Event/50.0 GeV");
   st_stack_137->GetYaxis()->SetLabelFont(42);
   st_stack_137->GetYaxis()->SetTitleSize(0.037);
   st_stack_137->GetYaxis()->SetTitleFont(42);
   st_stack_137->GetZaxis()->SetLabelFont(42);
   st_stack_137->GetZaxis()->SetTitleOffset(1);
   st_stack_137->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_137);
   
   
   TH1D *VbbHcc_both_Z_pt_stack_1 = new TH1D("VbbHcc_both_Z_pt_stack_1","",40,0,2000);
   VbbHcc_both_Z_pt_stack_1->SetBinContent(1,0.3712179);
   VbbHcc_both_Z_pt_stack_1->SetBinContent(2,0.7396459);
   VbbHcc_both_Z_pt_stack_1->SetBinContent(3,0.9968963);
   VbbHcc_both_Z_pt_stack_1->SetBinContent(4,0.7185058);
   VbbHcc_both_Z_pt_stack_1->SetBinContent(5,0.44559);
   VbbHcc_both_Z_pt_stack_1->SetBinContent(6,0.2761353);
   VbbHcc_both_Z_pt_stack_1->SetBinContent(7,0.1624404);
   VbbHcc_both_Z_pt_stack_1->SetBinContent(8,0.09785835);
   VbbHcc_both_Z_pt_stack_1->SetBinContent(9,0.03332985);
   VbbHcc_both_Z_pt_stack_1->SetBinContent(10,0.01192122);
   VbbHcc_both_Z_pt_stack_1->SetBinContent(11,0.02987711);
   VbbHcc_both_Z_pt_stack_1->SetBinContent(12,0.008197283);
   VbbHcc_both_Z_pt_stack_1->SetBinContent(13,0.005853435);
   VbbHcc_both_Z_pt_stack_1->SetBinError(1,0.0337526);
   VbbHcc_both_Z_pt_stack_1->SetBinError(2,0.04671925);
   VbbHcc_both_Z_pt_stack_1->SetBinError(3,0.05459125);
   VbbHcc_both_Z_pt_stack_1->SetBinError(4,0.04617893);
   VbbHcc_both_Z_pt_stack_1->SetBinError(5,0.03599554);
   VbbHcc_both_Z_pt_stack_1->SetBinError(6,0.02885184);
   VbbHcc_both_Z_pt_stack_1->SetBinError(7,0.02174646);
   VbbHcc_both_Z_pt_stack_1->SetBinError(8,0.0170961);
   VbbHcc_both_Z_pt_stack_1->SetBinError(9,0.00967433);
   VbbHcc_both_Z_pt_stack_1->SetBinError(10,0.005972937);
   VbbHcc_both_Z_pt_stack_1->SetBinError(11,0.009478916);
   VbbHcc_both_Z_pt_stack_1->SetBinError(12,0.004686382);
   VbbHcc_both_Z_pt_stack_1->SetBinError(13,0.004141732);
   VbbHcc_both_Z_pt_stack_1->SetEntries(1377);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_both_Z_pt_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_pt_stack_1->SetLineColor(ci);
   VbbHcc_both_Z_pt_stack_1->GetXaxis()->SetRange(1,2000);
   VbbHcc_both_Z_pt_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_pt_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_Z_pt_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_pt_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_pt_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_pt_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_pt_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_Z_pt_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_pt_stack_1,"");
   
   TH1D *VbbHcc_both_Z_pt_stack_2 = new TH1D("VbbHcc_both_Z_pt_stack_2","",40,0,2000);
   VbbHcc_both_Z_pt_stack_2->SetBinContent(1,0.1077079);
   VbbHcc_both_Z_pt_stack_2->SetBinContent(2,0.251019);
   VbbHcc_both_Z_pt_stack_2->SetBinContent(3,0.4436006);
   VbbHcc_both_Z_pt_stack_2->SetBinContent(4,0.3589339);
   VbbHcc_both_Z_pt_stack_2->SetBinContent(5,0.2300344);
   VbbHcc_both_Z_pt_stack_2->SetBinContent(6,0.1419446);
   VbbHcc_both_Z_pt_stack_2->SetBinContent(7,0.06403444);
   VbbHcc_both_Z_pt_stack_2->SetBinContent(8,0.03477726);
   VbbHcc_both_Z_pt_stack_2->SetBinContent(9,0.008912213);
   VbbHcc_both_Z_pt_stack_2->SetBinContent(10,0.003825305);
   VbbHcc_both_Z_pt_stack_2->SetBinContent(11,0.001220831);
   VbbHcc_both_Z_pt_stack_2->SetBinContent(12,0.001840419);
   VbbHcc_both_Z_pt_stack_2->SetBinContent(13,0.0001426368);
   VbbHcc_both_Z_pt_stack_2->SetBinContent(14,0.0004231482);
   VbbHcc_both_Z_pt_stack_2->SetBinContent(15,0.0007582263);
   VbbHcc_both_Z_pt_stack_2->SetBinContent(16,0.0003105297);
   VbbHcc_both_Z_pt_stack_2->SetBinContent(17,0.0003720141);
   VbbHcc_both_Z_pt_stack_2->SetBinContent(19,0.0006520687);
   VbbHcc_both_Z_pt_stack_2->SetBinContent(21,0.000387588);
   VbbHcc_both_Z_pt_stack_2->SetBinContent(23,0.0003858223);
   VbbHcc_both_Z_pt_stack_2->SetBinError(1,0.006415218);
   VbbHcc_both_Z_pt_stack_2->SetBinError(2,0.009789368);
   VbbHcc_both_Z_pt_stack_2->SetBinError(3,0.01303251);
   VbbHcc_both_Z_pt_stack_2->SetBinError(4,0.01169075);
   VbbHcc_both_Z_pt_stack_2->SetBinError(5,0.009357999);
   VbbHcc_both_Z_pt_stack_2->SetBinError(6,0.007349187);
   VbbHcc_both_Z_pt_stack_2->SetBinError(7,0.004943369);
   VbbHcc_both_Z_pt_stack_2->SetBinError(8,0.003598686);
   VbbHcc_both_Z_pt_stack_2->SetBinError(9,0.001838967);
   VbbHcc_both_Z_pt_stack_2->SetBinError(10,0.001210623);
   VbbHcc_both_Z_pt_stack_2->SetBinError(11,0.0007054963);
   VbbHcc_both_Z_pt_stack_2->SetBinError(12,0.0008248279);
   VbbHcc_both_Z_pt_stack_2->SetBinError(13,0.0001426368);
   VbbHcc_both_Z_pt_stack_2->SetBinError(14,0.0004231482);
   VbbHcc_both_Z_pt_stack_2->SetBinError(15,0.0005361485);
   VbbHcc_both_Z_pt_stack_2->SetBinError(16,0.0003105297);
   VbbHcc_both_Z_pt_stack_2->SetBinError(17,0.0003720141);
   VbbHcc_both_Z_pt_stack_2->SetBinError(19,0.0004643069);
   VbbHcc_both_Z_pt_stack_2->SetBinError(21,0.000387588);
   VbbHcc_both_Z_pt_stack_2->SetBinError(23,0.0003858223);
   VbbHcc_both_Z_pt_stack_2->SetEntries(4411);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_both_Z_pt_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_pt_stack_2->SetLineColor(ci);
   VbbHcc_both_Z_pt_stack_2->GetXaxis()->SetRange(1,2000);
   VbbHcc_both_Z_pt_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_pt_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_Z_pt_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_pt_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_pt_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_pt_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_pt_stack_2->GetZaxis()->SetTitleOffset(1);
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
   tex->SetTextSize(0.035);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_pt_both_16->Modified();
   Z_pt_both_16->cd();
   Z_pt_both_16->SetSelected(Z_pt_both_16);
}
