#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_pt_tags_16_logY()
{
//=========Macro generated from canvas: H_pt_tags_16/H_pt_tags_16
//=========  (Thu Mar  9 12:19:49 2023) by ROOT version 6.26/06
   TCanvas *H_pt_tags_16 = new TCanvas("H_pt_tags_16", "H_pt_tags_16",0,0,600,600);
   H_pt_tags_16->SetHighLightColor(2);
   H_pt_tags_16->Range(-436.7058,-0.154832,2343.266,1.135434);
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
   st->SetMinimum(1e+10);
   
   TH1F *st_stack_13 = new TH1F("st_stack_13","",40,0,2000);
   st_stack_13->SetMinimum(-2.272848e+09);
   st_stack_13->SetMaximum(-0.1840304);
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
   st_stack_13->GetYaxis()->SetTitle("Event/50.0");
   st_stack_13->GetYaxis()->SetLabelFont(42);
   st_stack_13->GetYaxis()->SetTitleSize(0.037);
   st_stack_13->GetYaxis()->SetTitleFont(42);
   st_stack_13->GetZaxis()->SetLabelFont(42);
   st_stack_13->GetZaxis()->SetTitleOffset(1);
   st_stack_13->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_13);
   
   
   TH1D *VbbHcc_tags_H_pt_stack_1 = new TH1D("VbbHcc_tags_H_pt_stack_1","",40,0,2000);
   VbbHcc_tags_H_pt_stack_1->SetBinContent(1,0.2966894);
   VbbHcc_tags_H_pt_stack_1->SetBinContent(2,0.5685945);
   VbbHcc_tags_H_pt_stack_1->SetBinContent(3,0.665079);
   VbbHcc_tags_H_pt_stack_1->SetBinContent(4,0.4504971);
   VbbHcc_tags_H_pt_stack_1->SetBinContent(5,0.2595886);
   VbbHcc_tags_H_pt_stack_1->SetBinContent(6,0.1944113);
   VbbHcc_tags_H_pt_stack_1->SetBinContent(7,0.1202078);
   VbbHcc_tags_H_pt_stack_1->SetBinContent(8,0.04601033);
   VbbHcc_tags_H_pt_stack_1->SetBinContent(9,0.04575531);
   VbbHcc_tags_H_pt_stack_1->SetBinContent(10,0.02194895);
   VbbHcc_tags_H_pt_stack_1->SetBinContent(11,0.001960819);
   VbbHcc_tags_H_pt_stack_1->SetBinContent(12,0.006338669);
   VbbHcc_tags_H_pt_stack_1->SetBinContent(13,0.0062773);
   VbbHcc_tags_H_pt_stack_1->SetBinContent(14,0.004059754);
   VbbHcc_tags_H_pt_stack_1->SetBinContent(19,0.002154232);
   VbbHcc_tags_H_pt_stack_1->SetBinContent(23,0.002060204);
   VbbHcc_tags_H_pt_stack_1->SetBinError(1,0.02528546);
   VbbHcc_tags_H_pt_stack_1->SetBinError(2,0.03448039);
   VbbHcc_tags_H_pt_stack_1->SetBinError(3,0.03727461);
   VbbHcc_tags_H_pt_stack_1->SetBinError(4,0.03058041);
   VbbHcc_tags_H_pt_stack_1->SetBinError(5,0.02318972);
   VbbHcc_tags_H_pt_stack_1->SetBinError(6,0.01999425);
   VbbHcc_tags_H_pt_stack_1->SetBinError(7,0.01568469);
   VbbHcc_tags_H_pt_stack_1->SetBinError(8,0.009760716);
   VbbHcc_tags_H_pt_stack_1->SetBinError(9,0.01000047);
   VbbHcc_tags_H_pt_stack_1->SetBinError(10,0.006657657);
   VbbHcc_tags_H_pt_stack_1->SetBinError(11,0.001960819);
   VbbHcc_tags_H_pt_stack_1->SetBinError(12,0.003668627);
   VbbHcc_tags_H_pt_stack_1->SetBinError(13,0.003624576);
   VbbHcc_tags_H_pt_stack_1->SetBinError(14,0.002870759);
   VbbHcc_tags_H_pt_stack_1->SetBinError(19,0.002154232);
   VbbHcc_tags_H_pt_stack_1->SetBinError(23,0.002060204);
   VbbHcc_tags_H_pt_stack_1->SetEntries(1354);

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
   VbbHcc_tags_H_pt_stack_2->SetBinContent(1,0.08825721);
   VbbHcc_tags_H_pt_stack_2->SetBinContent(2,0.2056584);
   VbbHcc_tags_H_pt_stack_2->SetBinContent(3,0.2934045);
   VbbHcc_tags_H_pt_stack_2->SetBinContent(4,0.2523659);
   VbbHcc_tags_H_pt_stack_2->SetBinContent(5,0.1434607);
   VbbHcc_tags_H_pt_stack_2->SetBinContent(6,0.07523665);
   VbbHcc_tags_H_pt_stack_2->SetBinContent(7,0.03845182);
   VbbHcc_tags_H_pt_stack_2->SetBinContent(8,0.01889132);
   VbbHcc_tags_H_pt_stack_2->SetBinContent(9,0.009491678);
   VbbHcc_tags_H_pt_stack_2->SetBinContent(10,0.006459671);
   VbbHcc_tags_H_pt_stack_2->SetBinContent(11,0.003199175);
   VbbHcc_tags_H_pt_stack_2->SetBinContent(12,0.001396176);
   VbbHcc_tags_H_pt_stack_2->SetBinContent(13,0.0009054592);
   VbbHcc_tags_H_pt_stack_2->SetBinContent(19,0.0002724528);
   VbbHcc_tags_H_pt_stack_2->SetBinError(1,0.004872307);
   VbbHcc_tags_H_pt_stack_2->SetBinError(2,0.007428769);
   VbbHcc_tags_H_pt_stack_2->SetBinError(3,0.008882028);
   VbbHcc_tags_H_pt_stack_2->SetBinError(4,0.008227429);
   VbbHcc_tags_H_pt_stack_2->SetBinError(5,0.006194348);
   VbbHcc_tags_H_pt_stack_2->SetBinError(6,0.004483292);
   VbbHcc_tags_H_pt_stack_2->SetBinError(7,0.003206318);
   VbbHcc_tags_H_pt_stack_2->SetBinError(8,0.002233305);
   VbbHcc_tags_H_pt_stack_2->SetBinError(9,0.001577822);
   VbbHcc_tags_H_pt_stack_2->SetBinError(10,0.001295295);
   VbbHcc_tags_H_pt_stack_2->SetBinError(11,0.0009244983);
   VbbHcc_tags_H_pt_stack_2->SetBinError(12,0.0006253921);
   VbbHcc_tags_H_pt_stack_2->SetBinError(13,0.0004726916);
   VbbHcc_tags_H_pt_stack_2->SetBinError(19,0.0002724528);
   VbbHcc_tags_H_pt_stack_2->SetEntries(4322);

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
