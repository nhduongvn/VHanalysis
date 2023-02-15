#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_pt_both_16_logY()
{
//=========Macro generated from canvas: H_pt_both_16/H_pt_both_16
//=========  (Tue Feb 14 16:07:56 2023) by ROOT version 6.26/06
   TCanvas *H_pt_both_16 = new TCanvas("H_pt_both_16", "H_pt_both_16",0,0,600,600);
   H_pt_both_16->SetHighLightColor(2);
   H_pt_both_16->Range(37.97653,0.4450144,1705.96,2.956775);
   H_pt_both_16->SetFillColor(0);
   H_pt_both_16->SetFillStyle(4000);
   H_pt_both_16->SetBorderMode(0);
   H_pt_both_16->SetBorderSize(2);
   H_pt_both_16->SetLogy();
   H_pt_both_16->SetLeftMargin(0.15709);
   H_pt_both_16->SetRightMargin(0.1234783);
   H_pt_both_16->SetBottomMargin(0.12);
   H_pt_both_16->SetFrameFillStyle(1000);
   H_pt_both_16->SetFrameBorderMode(0);
   H_pt_both_16->SetFrameFillStyle(1000);
   H_pt_both_16->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(10);
   st->SetMaximum(385.4344);
   
   TH1F *st_stack_141 = new TH1F("st_stack_141","",40,0,2000);
   st_stack_141->SetMinimum(5.577322);
   st_stack_141->SetMaximum(507.6904);
   st_stack_141->SetDirectory(0);
   st_stack_141->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_141->SetLineColor(ci);
   st_stack_141->GetXaxis()->SetTitle("H p_{T} [GeV]");
   st_stack_141->GetXaxis()->SetRange(7,30);
   st_stack_141->GetXaxis()->SetLabelFont(42);
   st_stack_141->GetXaxis()->SetTitleOffset(1);
   st_stack_141->GetXaxis()->SetTitleFont(42);
   st_stack_141->GetYaxis()->SetTitle("Events/50.0");
   st_stack_141->GetYaxis()->SetLabelFont(42);
   st_stack_141->GetYaxis()->SetTitleSize(0.037);
   st_stack_141->GetYaxis()->SetTitleFont(42);
   st_stack_141->GetZaxis()->SetLabelFont(42);
   st_stack_141->GetZaxis()->SetTitleOffset(1);
   st_stack_141->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_141);
   
   
   TH1D *VbbHcc_both_H_pt_stack_1 = new TH1D("VbbHcc_both_H_pt_stack_1","",40,0,2000);
   VbbHcc_both_H_pt_stack_1->SetBinContent(1,2.021614);
   VbbHcc_both_H_pt_stack_1->SetBinContent(2,3.854344);
   VbbHcc_both_H_pt_stack_1->SetBinContent(3,2.425632);
   VbbHcc_both_H_pt_stack_1->SetBinContent(4,1.192004);
   VbbHcc_both_H_pt_stack_1->SetBinContent(5,0.6498643);
   VbbHcc_both_H_pt_stack_1->SetBinContent(6,0.3895512);
   VbbHcc_both_H_pt_stack_1->SetBinContent(7,0.2115001);
   VbbHcc_both_H_pt_stack_1->SetBinContent(8,0.0872712);
   VbbHcc_both_H_pt_stack_1->SetBinContent(9,0.07758712);
   VbbHcc_both_H_pt_stack_1->SetBinContent(10,0.03707131);
   VbbHcc_both_H_pt_stack_1->SetBinContent(11,0.006169218);
   VbbHcc_both_H_pt_stack_1->SetBinContent(12,0.01454476);
   VbbHcc_both_H_pt_stack_1->SetBinContent(13,0.01180459);
   VbbHcc_both_H_pt_stack_1->SetBinContent(14,0.005775356);
   VbbHcc_both_H_pt_stack_1->SetBinContent(15,0.006831356);
   VbbHcc_both_H_pt_stack_1->SetBinContent(19,0.003064584);
   VbbHcc_both_H_pt_stack_1->SetBinContent(23,0.002930821);
   VbbHcc_both_H_pt_stack_1->SetBinError(1,0.07815489);
   VbbHcc_both_H_pt_stack_1->SetBinError(2,0.1074015);
   VbbHcc_both_H_pt_stack_1->SetBinError(3,0.08551033);
   VbbHcc_both_H_pt_stack_1->SetBinError(4,0.05949497);
   VbbHcc_both_H_pt_stack_1->SetBinError(5,0.04393057);
   VbbHcc_both_H_pt_stack_1->SetBinError(6,0.03392021);
   VbbHcc_both_H_pt_stack_1->SetBinError(7,0.02479761);
   VbbHcc_both_H_pt_stack_1->SetBinError(8,0.01609647);
   VbbHcc_both_H_pt_stack_1->SetBinError(9,0.01553446);
   VbbHcc_both_H_pt_stack_1->SetBinError(10,0.01033642);
   VbbHcc_both_H_pt_stack_1->SetBinError(11,0.003922096);
   VbbHcc_both_H_pt_stack_1->SetBinError(12,0.006522754);
   VbbHcc_both_H_pt_stack_1->SetBinError(13,0.005903424);
   VbbHcc_both_H_pt_stack_1->SetBinError(14,0.004083907);
   VbbHcc_both_H_pt_stack_1->SetBinError(15,0.004323348);
   VbbHcc_both_H_pt_stack_1->SetBinError(19,0.003064584);
   VbbHcc_both_H_pt_stack_1->SetBinError(23,0.002930821);
   VbbHcc_both_H_pt_stack_1->SetEntries(3861);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_both_H_pt_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_pt_stack_1->SetLineColor(ci);
   VbbHcc_both_H_pt_stack_1->GetXaxis()->SetRange(1,2000);
   VbbHcc_both_H_pt_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_pt_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_H_pt_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_pt_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_pt_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_pt_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_pt_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_H_pt_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_pt_stack_1,"");
   
   TH1D *VbbHcc_both_H_pt_stack_2 = new TH1D("VbbHcc_both_H_pt_stack_2","",40,0,2000);
   VbbHcc_both_H_pt_stack_2->SetBinContent(1,0.3762788);
   VbbHcc_both_H_pt_stack_2->SetBinContent(2,0.8891861);
   VbbHcc_both_H_pt_stack_2->SetBinContent(3,0.9135682);
   VbbHcc_both_H_pt_stack_2->SetBinContent(4,0.6267377);
   VbbHcc_both_H_pt_stack_2->SetBinContent(5,0.3299462);
   VbbHcc_both_H_pt_stack_2->SetBinContent(6,0.159654);
   VbbHcc_both_H_pt_stack_2->SetBinContent(7,0.08246567);
   VbbHcc_both_H_pt_stack_2->SetBinContent(8,0.03639414);
   VbbHcc_both_H_pt_stack_2->SetBinContent(9,0.01780866);
   VbbHcc_both_H_pt_stack_2->SetBinContent(10,0.011508);
   VbbHcc_both_H_pt_stack_2->SetBinContent(11,0.004196518);
   VbbHcc_both_H_pt_stack_2->SetBinContent(12,0.00271947);
   VbbHcc_both_H_pt_stack_2->SetBinContent(13,0.001131906);
   VbbHcc_both_H_pt_stack_2->SetBinContent(15,0.0001561895);
   VbbHcc_both_H_pt_stack_2->SetBinContent(17,0.0003704445);
   VbbHcc_both_H_pt_stack_2->SetBinContent(19,0.000387588);
   VbbHcc_both_H_pt_stack_2->SetBinError(1,0.0120126);
   VbbHcc_both_H_pt_stack_2->SetBinError(2,0.01846684);
   VbbHcc_both_H_pt_stack_2->SetBinError(3,0.01870134);
   VbbHcc_both_H_pt_stack_2->SetBinError(4,0.01546303);
   VbbHcc_both_H_pt_stack_2->SetBinError(5,0.01120347);
   VbbHcc_both_H_pt_stack_2->SetBinError(6,0.007782176);
   VbbHcc_both_H_pt_stack_2->SetBinError(7,0.00559129);
   VbbHcc_both_H_pt_stack_2->SetBinError(8,0.003713999);
   VbbHcc_both_H_pt_stack_2->SetBinError(9,0.002576386);
   VbbHcc_both_H_pt_stack_2->SetBinError(10,0.002075994);
   VbbHcc_both_H_pt_stack_2->SetBinError(11,0.00126672);
   VbbHcc_both_H_pt_stack_2->SetBinError(12,0.001030348);
   VbbHcc_both_H_pt_stack_2->SetBinError(13,0.0006540547);
   VbbHcc_both_H_pt_stack_2->SetBinError(15,0.0001561895);
   VbbHcc_both_H_pt_stack_2->SetBinError(17,0.0003704445);
   VbbHcc_both_H_pt_stack_2->SetBinError(19,0.000387588);
   VbbHcc_both_H_pt_stack_2->SetEntries(9203);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_both_H_pt_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_pt_stack_2->SetLineColor(ci);
   VbbHcc_both_H_pt_stack_2->GetXaxis()->SetRange(1,2000);
   VbbHcc_both_H_pt_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_pt_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_H_pt_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_pt_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_pt_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_pt_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_pt_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_H_pt_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_pt_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_both_H_pt_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_pt_stack_1","ZHcc","F");

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
   H_pt_both_16->Modified();
   H_pt_both_16->cd();
   H_pt_both_16->SetSelected(H_pt_both_16);
}
