#ifdef __CLING__
#pragma cling optimize(0)
#endif
void GenJet_VbbHcc_nGenL_signal_18_logY()
{
//=========Macro generated from canvas: GenJet_VbbHcc_nGenL_signal_18/GenJet_VbbHcc_nGenL_signal_18
//=========  (Fri Mar 10 12:49:24 2023) by ROOT version 6.26/06
   TCanvas *GenJet_VbbHcc_nGenL_signal_18 = new TCanvas("GenJet_VbbHcc_nGenL_signal_18", "GenJet_VbbHcc_nGenL_signal_18",0,0,600,600);
   GenJet_VbbHcc_nGenL_signal_18->SetHighLightColor(2);
   GenJet_VbbHcc_nGenL_signal_18->Range(-4.867058,-0.7454855,22.93266,2.748657);
   GenJet_VbbHcc_nGenL_signal_18->SetFillColor(0);
   GenJet_VbbHcc_nGenL_signal_18->SetFillStyle(4000);
   GenJet_VbbHcc_nGenL_signal_18->SetBorderMode(0);
   GenJet_VbbHcc_nGenL_signal_18->SetBorderSize(2);
   GenJet_VbbHcc_nGenL_signal_18->SetLogy();
   GenJet_VbbHcc_nGenL_signal_18->SetLeftMargin(0.15709);
   GenJet_VbbHcc_nGenL_signal_18->SetRightMargin(0.1234783);
   GenJet_VbbHcc_nGenL_signal_18->SetBottomMargin(0.12);
   GenJet_VbbHcc_nGenL_signal_18->SetFrameFillStyle(1000);
   GenJet_VbbHcc_nGenL_signal_18->SetFrameBorderMode(0);
   GenJet_VbbHcc_nGenL_signal_18->SetFrameFillStyle(1000);
   GenJet_VbbHcc_nGenL_signal_18->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(1);
   st->SetMaximum(173.2051);
   
   TH1F *st_stack_155 = new TH1F("st_stack_155","",20,-0.5,19.5);
   st_stack_155->SetMinimum(0.4718583);
   st_stack_155->SetMaximum(250.7511);
   st_stack_155->SetDirectory(0);
   st_stack_155->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_155->SetLineColor(ci);
   st_stack_155->GetXaxis()->SetTitle("Gen l-jet multiplicity");
   st_stack_155->GetXaxis()->SetLabelFont(42);
   st_stack_155->GetXaxis()->SetTitleOffset(1);
   st_stack_155->GetXaxis()->SetTitleFont(42);
   st_stack_155->GetYaxis()->SetTitle("Event/1.0");
   st_stack_155->GetYaxis()->SetLabelFont(42);
   st_stack_155->GetYaxis()->SetTitleSize(0.037);
   st_stack_155->GetYaxis()->SetTitleFont(42);
   st_stack_155->GetZaxis()->SetLabelFont(42);
   st_stack_155->GetZaxis()->SetTitleOffset(1);
   st_stack_155->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_155);
   
   
   TH1D *GenJet_VbbHcc_nGenL_stack_1 = new TH1D("GenJet_VbbHcc_nGenL_stack_1","",20,-0.5,19.5);
   GenJet_VbbHcc_nGenL_stack_1->SetBinContent(1,129.7162);
   GenJet_VbbHcc_nGenL_stack_1->SetBinContent(2,82.60407);
   GenJet_VbbHcc_nGenL_stack_1->SetBinContent(3,35.21254);
   GenJet_VbbHcc_nGenL_stack_1->SetBinContent(4,12.01217);
   GenJet_VbbHcc_nGenL_stack_1->SetBinContent(5,3.643518);
   GenJet_VbbHcc_nGenL_stack_1->SetBinContent(6,1.003168);
   GenJet_VbbHcc_nGenL_stack_1->SetBinContent(7,0.3067885);
   GenJet_VbbHcc_nGenL_stack_1->SetBinContent(8,0.08161193);
   GenJet_VbbHcc_nGenL_stack_1->SetBinContent(9,0.01846319);
   GenJet_VbbHcc_nGenL_stack_1->SetBinContent(10,0.008136622);
   GenJet_VbbHcc_nGenL_stack_1->SetBinContent(11,0.002452157);
   GenJet_VbbHcc_nGenL_stack_1->SetBinError(1,0.6512122);
   GenJet_VbbHcc_nGenL_stack_1->SetBinError(2,0.5084003);
   GenJet_VbbHcc_nGenL_stack_1->SetBinError(3,0.3488967);
   GenJet_VbbHcc_nGenL_stack_1->SetBinError(4,0.1900137);
   GenJet_VbbHcc_nGenL_stack_1->SetBinError(5,0.103357);
   GenJet_VbbHcc_nGenL_stack_1->SetBinError(6,0.05355194);
   GenJet_VbbHcc_nGenL_stack_1->SetBinError(7,0.04807363);
   GenJet_VbbHcc_nGenL_stack_1->SetBinError(8,0.01607834);
   GenJet_VbbHcc_nGenL_stack_1->SetBinError(9,0.007065476);
   GenJet_VbbHcc_nGenL_stack_1->SetBinError(10,0.004763272);
   GenJet_VbbHcc_nGenL_stack_1->SetBinError(11,0.002452157);
   GenJet_VbbHcc_nGenL_stack_1->SetEntries(108766);

   ci = TColor::GetColor("#cc0000");
   GenJet_VbbHcc_nGenL_stack_1->SetFillColor(ci);
   GenJet_VbbHcc_nGenL_stack_1->GetXaxis()->SetRange(1,20);
   GenJet_VbbHcc_nGenL_stack_1->GetXaxis()->SetLabelFont(42);
   GenJet_VbbHcc_nGenL_stack_1->GetXaxis()->SetTitleOffset(1);
   GenJet_VbbHcc_nGenL_stack_1->GetXaxis()->SetTitleFont(42);
   GenJet_VbbHcc_nGenL_stack_1->GetYaxis()->SetLabelFont(42);
   GenJet_VbbHcc_nGenL_stack_1->GetYaxis()->SetTitleFont(42);
   GenJet_VbbHcc_nGenL_stack_1->GetZaxis()->SetLabelFont(42);
   GenJet_VbbHcc_nGenL_stack_1->GetZaxis()->SetTitleOffset(1);
   GenJet_VbbHcc_nGenL_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(GenJet_VbbHcc_nGenL_stack_1,"");
   
   TH1D *GenJet_VbbHcc_nGenL_stack_2 = new TH1D("GenJet_VbbHcc_nGenL_stack_2","",20,-0.5,19.5);
   GenJet_VbbHcc_nGenL_stack_2->SetBinContent(1,14.04401);
   GenJet_VbbHcc_nGenL_stack_2->SetBinContent(2,12.93118);
   GenJet_VbbHcc_nGenL_stack_2->SetBinContent(3,6.421697);
   GenJet_VbbHcc_nGenL_stack_2->SetBinContent(4,2.419338);
   GenJet_VbbHcc_nGenL_stack_2->SetBinContent(5,0.7475933);
   GenJet_VbbHcc_nGenL_stack_2->SetBinContent(6,0.2188238);
   GenJet_VbbHcc_nGenL_stack_2->SetBinContent(7,0.06304392);
   GenJet_VbbHcc_nGenL_stack_2->SetBinContent(8,0.01518086);
   GenJet_VbbHcc_nGenL_stack_2->SetBinContent(9,0.004039657);
   GenJet_VbbHcc_nGenL_stack_2->SetBinContent(10,0.0005883572);
   GenJet_VbbHcc_nGenL_stack_2->SetBinError(1,0.07766041);
   GenJet_VbbHcc_nGenL_stack_2->SetBinError(2,0.07118856);
   GenJet_VbbHcc_nGenL_stack_2->SetBinError(3,0.05193448);
   GenJet_VbbHcc_nGenL_stack_2->SetBinError(4,0.03382964);
   GenJet_VbbHcc_nGenL_stack_2->SetBinError(5,0.01660156);
   GenJet_VbbHcc_nGenL_stack_2->SetBinError(6,0.009400559);
   GenJet_VbbHcc_nGenL_stack_2->SetBinError(7,0.004824499);
   GenJet_VbbHcc_nGenL_stack_2->SetBinError(8,0.002381322);
   GenJet_VbbHcc_nGenL_stack_2->SetBinError(9,0.001188048);
   GenJet_VbbHcc_nGenL_stack_2->SetBinError(10,0.0004264292);
   GenJet_VbbHcc_nGenL_stack_2->SetEntries(108071);

   ci = TColor::GetColor("#00cc00");
   GenJet_VbbHcc_nGenL_stack_2->SetFillColor(ci);
   GenJet_VbbHcc_nGenL_stack_2->GetXaxis()->SetRange(1,20);
   GenJet_VbbHcc_nGenL_stack_2->GetXaxis()->SetLabelFont(42);
   GenJet_VbbHcc_nGenL_stack_2->GetXaxis()->SetTitleOffset(1);
   GenJet_VbbHcc_nGenL_stack_2->GetXaxis()->SetTitleFont(42);
   GenJet_VbbHcc_nGenL_stack_2->GetYaxis()->SetLabelFont(42);
   GenJet_VbbHcc_nGenL_stack_2->GetYaxis()->SetTitleFont(42);
   GenJet_VbbHcc_nGenL_stack_2->GetZaxis()->SetLabelFont(42);
   GenJet_VbbHcc_nGenL_stack_2->GetZaxis()->SetTitleOffset(1);
   GenJet_VbbHcc_nGenL_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(GenJet_VbbHcc_nGenL_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("GenJet_VbbHcc_nGenL_stack_2","ggZHcc","F");

   ci = TColor::GetColor("#00cc00");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("GenJet_VbbHcc_nGenL_stack_1","ZHcc","F");

   ci = TColor::GetColor("#cc0000");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
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
   tex->SetTextSize(0.035);
   tex->SetLineWidth(2);
   tex->Draw();
   GenJet_VbbHcc_nGenL_signal_18->Modified();
   GenJet_VbbHcc_nGenL_signal_18->cd();
   GenJet_VbbHcc_nGenL_signal_18->SetSelected(GenJet_VbbHcc_nGenL_signal_18);
}
