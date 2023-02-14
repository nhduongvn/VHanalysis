#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_pt_tags_16_logY()
{
//=========Macro generated from canvas: H_pt_tags_16/H_pt_tags_16
//=========  (Tue Feb 14 10:43:05 2023) by ROOT version 6.26/06
   TCanvas *H_pt_tags_16 = new TCanvas("H_pt_tags_16", "H_pt_tags_16",0,0,600,600);
   H_pt_tags_16->SetHighLightColor(2);
   H_pt_tags_16->Range(37.97653,0.4481074,1705.96,2.944378);
   H_pt_tags_16->SetFillColor(0);
   H_pt_tags_16->SetFillStyle(4000);
   H_pt_tags_16->SetBorderMode(0);
   H_pt_tags_16->SetBorderSize(2);
   H_pt_tags_16->SetLogy();
   H_pt_tags_16->SetLeftMargin(0.15709);
   H_pt_tags_16->SetRightMargin(0.1234783);
   H_pt_tags_16->SetBottomMargin(0.12);
   H_pt_tags_16->SetFrameFillStyle(1000);
   H_pt_tags_16->SetFrameBorderMode(0);
   H_pt_tags_16->SetFrameFillStyle(1000);
   H_pt_tags_16->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(10);
   st->SetMaximum(376.5079);
   
   TH1F *st_stack_13 = new TH1F("st_stack_13","",40,0,2000);
   st_stack_13->SetMinimum(5.593194);
   st_stack_13->SetMaximum(495.1662);
   st_stack_13->SetDirectory(0);
   st_stack_13->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_13->SetLineColor(ci);
   st_stack_13->GetXaxis()->SetTitle("H p_{T} [GeV]");
   st_stack_13->GetXaxis()->SetRange(7,30);
   st_stack_13->GetXaxis()->SetLabelFont(42);
   st_stack_13->GetXaxis()->SetTitleOffset(1);
   st_stack_13->GetXaxis()->SetTitleFont(42);
   st_stack_13->GetYaxis()->SetTitle("Events/50.0");
   st_stack_13->GetYaxis()->SetLabelFont(42);
   st_stack_13->GetYaxis()->SetTitleSize(0.037);
   st_stack_13->GetYaxis()->SetTitleFont(42);
   st_stack_13->GetZaxis()->SetLabelFont(42);
   st_stack_13->GetZaxis()->SetTitleOffset(1);
   st_stack_13->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_13);
   
   
   TH1D *VbbHcc_tags_H_pt_stack_1 = new TH1D("VbbHcc_tags_H_pt_stack_1","",40,0,2000);
   VbbHcc_tags_H_pt_stack_1->SetBinContent(1,2.009524);
   VbbHcc_tags_H_pt_stack_1->SetBinContent(2,3.765079);
   VbbHcc_tags_H_pt_stack_1->SetBinContent(3,2.333809);
   VbbHcc_tags_H_pt_stack_1->SetBinContent(4,1.162771);
   VbbHcc_tags_H_pt_stack_1->SetBinContent(5,0.6482982);
   VbbHcc_tags_H_pt_stack_1->SetBinContent(6,0.3749198);
   VbbHcc_tags_H_pt_stack_1->SetBinContent(7,0.2022608);
   VbbHcc_tags_H_pt_stack_1->SetBinContent(8,0.08137988);
   VbbHcc_tags_H_pt_stack_1->SetBinContent(9,0.07237838);
   VbbHcc_tags_H_pt_stack_1->SetBinContent(10,0.03707131);
   VbbHcc_tags_H_pt_stack_1->SetBinContent(11,0.006169218);
   VbbHcc_tags_H_pt_stack_1->SetBinContent(12,0.01454476);
   VbbHcc_tags_H_pt_stack_1->SetBinContent(13,0.008930011);
   VbbHcc_tags_H_pt_stack_1->SetBinContent(14,0.005775356);
   VbbHcc_tags_H_pt_stack_1->SetBinContent(15,0.003705162);
   VbbHcc_tags_H_pt_stack_1->SetBinContent(19,0.003064584);
   VbbHcc_tags_H_pt_stack_1->SetBinContent(23,0.002930821);
   VbbHcc_tags_H_pt_stack_1->SetBinError(1,0.07784421);
   VbbHcc_tags_H_pt_stack_1->SetBinError(2,0.1061891);
   VbbHcc_tags_H_pt_stack_1->SetBinError(3,0.08389671);
   VbbHcc_tags_H_pt_stack_1->SetBinError(4,0.05876018);
   VbbHcc_tags_H_pt_stack_1->SetBinError(5,0.04372777);
   VbbHcc_tags_H_pt_stack_1->SetBinError(6,0.03326247);
   VbbHcc_tags_H_pt_stack_1->SetBinError(7,0.02421581);
   VbbHcc_tags_H_pt_stack_1->SetBinError(8,0.01554792);
   VbbHcc_tags_H_pt_stack_1->SetBinError(9,0.01508832);
   VbbHcc_tags_H_pt_stack_1->SetBinError(10,0.01033642);
   VbbHcc_tags_H_pt_stack_1->SetBinError(11,0.003922096);
   VbbHcc_tags_H_pt_stack_1->SetBinError(12,0.006522754);
   VbbHcc_tags_H_pt_stack_1->SetBinError(13,0.005156277);
   VbbHcc_tags_H_pt_stack_1->SetBinError(14,0.004083907);
   VbbHcc_tags_H_pt_stack_1->SetBinError(15,0.002986344);
   VbbHcc_tags_H_pt_stack_1->SetBinError(19,0.003064584);
   VbbHcc_tags_H_pt_stack_1->SetBinError(23,0.002930821);
   VbbHcc_tags_H_pt_stack_1->SetEntries(3765);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_tags_H_pt_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_pt_stack_1->SetLineColor(ci);
   VbbHcc_tags_H_pt_stack_1->GetXaxis()->SetRange(1,2000);
   VbbHcc_tags_H_pt_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_pt_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_H_pt_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_pt_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_pt_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_pt_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_pt_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_H_pt_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_pt_stack_1,"");
   
   TH1D *VbbHcc_tags_H_pt_stack_2 = new TH1D("VbbHcc_tags_H_pt_stack_2","",40,0,2000);
   VbbHcc_tags_H_pt_stack_2->SetBinContent(1,0.3701002);
   VbbHcc_tags_H_pt_stack_2->SetBinContent(2,0.8687432);
   VbbHcc_tags_H_pt_stack_2->SetBinContent(3,0.8847494);
   VbbHcc_tags_H_pt_stack_2->SetBinContent(4,0.60976);
   VbbHcc_tags_H_pt_stack_2->SetBinContent(5,0.3164372);
   VbbHcc_tags_H_pt_stack_2->SetBinContent(6,0.1542766);
   VbbHcc_tags_H_pt_stack_2->SetBinContent(7,0.07924799);
   VbbHcc_tags_H_pt_stack_2->SetBinContent(8,0.03475851);
   VbbHcc_tags_H_pt_stack_2->SetBinContent(9,0.01743316);
   VbbHcc_tags_H_pt_stack_2->SetBinContent(10,0.01114808);
   VbbHcc_tags_H_pt_stack_2->SetBinContent(11,0.00382157);
   VbbHcc_tags_H_pt_stack_2->SetBinContent(12,0.00271947);
   VbbHcc_tags_H_pt_stack_2->SetBinContent(13,0.001131906);
   VbbHcc_tags_H_pt_stack_2->SetBinContent(15,0.0001561895);
   VbbHcc_tags_H_pt_stack_2->SetBinContent(17,0.0003704445);
   VbbHcc_tags_H_pt_stack_2->SetBinContent(19,0.000387588);
   VbbHcc_tags_H_pt_stack_2->SetBinError(1,0.01191108);
   VbbHcc_tags_H_pt_stack_2->SetBinError(2,0.01825258);
   VbbHcc_tags_H_pt_stack_2->SetBinError(3,0.01840701);
   VbbHcc_tags_H_pt_stack_2->SetBinError(4,0.01525259);
   VbbHcc_tags_H_pt_stack_2->SetBinError(5,0.0109658);
   VbbHcc_tags_H_pt_stack_2->SetBinError(6,0.007651619);
   VbbHcc_tags_H_pt_stack_2->SetBinError(7,0.005485698);
   VbbHcc_tags_H_pt_stack_2->SetBinError(8,0.003623213);
   VbbHcc_tags_H_pt_stack_2->SetBinError(9,0.002548876);
   VbbHcc_tags_H_pt_stack_2->SetBinError(10,0.002044557);
   VbbHcc_tags_H_pt_stack_2->SetBinError(11,0.001209956);
   VbbHcc_tags_H_pt_stack_2->SetBinError(12,0.001030348);
   VbbHcc_tags_H_pt_stack_2->SetBinError(13,0.0006540547);
   VbbHcc_tags_H_pt_stack_2->SetBinError(15,0.0001561895);
   VbbHcc_tags_H_pt_stack_2->SetBinError(17,0.0003704445);
   VbbHcc_tags_H_pt_stack_2->SetBinError(19,0.000387588);
   VbbHcc_tags_H_pt_stack_2->SetEntries(8944);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_tags_H_pt_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_pt_stack_2->SetLineColor(ci);
   VbbHcc_tags_H_pt_stack_2->GetXaxis()->SetRange(1,2000);
   VbbHcc_tags_H_pt_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_pt_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_H_pt_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_pt_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_pt_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_pt_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_pt_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_H_pt_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_pt_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_tags_H_pt_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_pt_stack_1","ZHcc","F");

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
   H_pt_tags_16->Modified();
   H_pt_tags_16->cd();
   H_pt_tags_16->SetSelected(H_pt_tags_16);
}
