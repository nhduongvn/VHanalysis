void H_jetmass_noJEC_tags_18()
{
//=========Macro generated from canvas: H_jetmass_noJEC_tags_18/H_jetmass_noJEC_tags_18
//=========  (Tue Aug 22 09:20:55 2023) by ROOT version 6.14/09
   TCanvas *H_jetmass_noJEC_tags_18 = new TCanvas("H_jetmass_noJEC_tags_18", "H_jetmass_noJEC_tags_18",0,0,600,600);
   gStyle->SetOptStat(0);
   H_jetmass_noJEC_tags_18->SetHighLightColor(2);
   H_jetmass_noJEC_tags_18->Range(-60,-0.005244754,340,0.04720279);
   H_jetmass_noJEC_tags_18->SetFillColor(0);
   H_jetmass_noJEC_tags_18->SetBorderMode(0);
   H_jetmass_noJEC_tags_18->SetBorderSize(2);
   H_jetmass_noJEC_tags_18->SetLeftMargin(0.15);
   H_jetmass_noJEC_tags_18->SetFrameBorderMode(0);
   H_jetmass_noJEC_tags_18->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_H_jetmass_noJEC_stack_11 = new TH1D("VbbHcc_tags_H_jetmass_noJEC_stack_11","",150,0,300);
   VbbHcc_tags_H_jetmass_noJEC_stack_11->SetBinContent(4,0.01405977);
   VbbHcc_tags_H_jetmass_noJEC_stack_11->SetBinContent(5,0.01745575);
   VbbHcc_tags_H_jetmass_noJEC_stack_11->SetBinContent(6,0.03996003);
   VbbHcc_tags_H_jetmass_noJEC_stack_11->SetBinContent(7,0.02383807);
   VbbHcc_tags_H_jetmass_noJEC_stack_11->SetBinContent(8,0.01895448);
   VbbHcc_tags_H_jetmass_noJEC_stack_11->SetBinContent(9,0.0140709);
   VbbHcc_tags_H_jetmass_noJEC_stack_11->SetBinContent(10,0.01458859);
   VbbHcc_tags_H_jetmass_noJEC_stack_11->SetBinContent(11,0.005529983);
   VbbHcc_tags_H_jetmass_noJEC_stack_11->SetBinContent(12,0.006836727);
   VbbHcc_tags_H_jetmass_noJEC_stack_11->SetBinContent(13,0.001567047);
   VbbHcc_tags_H_jetmass_noJEC_stack_11->SetBinContent(14,0.007202174);
   VbbHcc_tags_H_jetmass_noJEC_stack_11->SetBinContent(16,0.00292757);
   VbbHcc_tags_H_jetmass_noJEC_stack_11->SetBinContent(18,0.002176611);
   VbbHcc_tags_H_jetmass_noJEC_stack_11->SetBinContent(19,0.002234631);
   VbbHcc_tags_H_jetmass_noJEC_stack_11->SetBinContent(22,0.002360595);
   VbbHcc_tags_H_jetmass_noJEC_stack_11->SetBinContent(29,0.002284175);
   VbbHcc_tags_H_jetmass_noJEC_stack_11->SetBinError(4,0.005773318);
   VbbHcc_tags_H_jetmass_noJEC_stack_11->SetBinError(5,0.006269696);
   VbbHcc_tags_H_jetmass_noJEC_stack_11->SetBinError(6,0.009853461);
   VbbHcc_tags_H_jetmass_noJEC_stack_11->SetBinError(7,0.007646309);
   VbbHcc_tags_H_jetmass_noJEC_stack_11->SetBinError(8,0.006794145);
   VbbHcc_tags_H_jetmass_noJEC_stack_11->SetBinError(9,0.005754854);
   VbbHcc_tags_H_jetmass_noJEC_stack_11->SetBinError(10,0.0059767);
   VbbHcc_tags_H_jetmass_noJEC_stack_11->SetBinError(11,0.003940214);
   VbbHcc_tags_H_jetmass_noJEC_stack_11->SetBinError(12,0.003557029);
   VbbHcc_tags_H_jetmass_noJEC_stack_11->SetBinError(13,0.001567047);
   VbbHcc_tags_H_jetmass_noJEC_stack_11->SetBinError(14,0.004188457);
   VbbHcc_tags_H_jetmass_noJEC_stack_11->SetBinError(16,0.00292757);
   VbbHcc_tags_H_jetmass_noJEC_stack_11->SetBinError(18,0.002176611);
   VbbHcc_tags_H_jetmass_noJEC_stack_11->SetBinError(19,0.002234631);
   VbbHcc_tags_H_jetmass_noJEC_stack_11->SetBinError(22,0.002360595);
   VbbHcc_tags_H_jetmass_noJEC_stack_11->SetBinError(29,0.002284175);
   VbbHcc_tags_H_jetmass_noJEC_stack_11->SetEntries(77);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#cc0000");
   VbbHcc_tags_H_jetmass_noJEC_stack_11->SetFillColor(ci);
   VbbHcc_tags_H_jetmass_noJEC_stack_11->GetXaxis()->SetTitle("c-jet mass [GeV]");
   VbbHcc_tags_H_jetmass_noJEC_stack_11->GetXaxis()->SetRange(1,150);
   VbbHcc_tags_H_jetmass_noJEC_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_jetmass_noJEC_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_jetmass_noJEC_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_jetmass_noJEC_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_jetmass_noJEC_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_jetmass_noJEC_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_jetmass_noJEC_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_jetmass_noJEC_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_jetmass_noJEC_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_jetmass_noJEC_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_jetmass_noJEC_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_jetmass_noJEC_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_jetmass_noJEC_stack_11->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_H_jetmass_noJEC_stack_11->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_jetmass_noJEC_tags_18->Modified();
   H_jetmass_noJEC_tags_18->cd();
   H_jetmass_noJEC_tags_18->SetSelected(H_jetmass_noJEC_tags_18);
}
