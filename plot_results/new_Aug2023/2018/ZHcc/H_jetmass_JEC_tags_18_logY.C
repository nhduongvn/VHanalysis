void H_jetmass_JEC_tags_18_logY()
{
//=========Macro generated from canvas: H_jetmass_JEC_tags_18/H_jetmass_JEC_tags_18
//=========  (Tue Aug 22 09:16:40 2023) by ROOT version 6.14/09
   TCanvas *H_jetmass_JEC_tags_18 = new TCanvas("H_jetmass_JEC_tags_18", "H_jetmass_JEC_tags_18",0,0,600,600);
   gStyle->SetOptStat(0);
   H_jetmass_JEC_tags_18->SetHighLightColor(2);
   H_jetmass_JEC_tags_18->Range(-60,-3.189929,340,-0.9231332);
   H_jetmass_JEC_tags_18->SetFillColor(0);
   H_jetmass_JEC_tags_18->SetBorderMode(0);
   H_jetmass_JEC_tags_18->SetBorderSize(2);
   H_jetmass_JEC_tags_18->SetLogy();
   H_jetmass_JEC_tags_18->SetLeftMargin(0.15);
   H_jetmass_JEC_tags_18->SetFrameBorderMode(0);
   H_jetmass_JEC_tags_18->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_H_jetmass_JEC_stack_11 = new TH1D("VbbHcc_tags_H_jetmass_JEC_stack_11","",150,0,300);
   VbbHcc_tags_H_jetmass_JEC_stack_11->SetBinContent(4,0.009543421);
   VbbHcc_tags_H_jetmass_JEC_stack_11->SetBinContent(5,0.02031365);
   VbbHcc_tags_H_jetmass_JEC_stack_11->SetBinContent(6,0.03737992);
   VbbHcc_tags_H_jetmass_JEC_stack_11->SetBinContent(7,0.03396471);
   VbbHcc_tags_H_jetmass_JEC_stack_11->SetBinContent(8,0.01760184);
   VbbHcc_tags_H_jetmass_JEC_stack_11->SetBinContent(9,0.007300825);
   VbbHcc_tags_H_jetmass_JEC_stack_11->SetBinContent(10,0.01701085);
   VbbHcc_tags_H_jetmass_JEC_stack_11->SetBinContent(11,0.008614853);
   VbbHcc_tags_H_jetmass_JEC_stack_11->SetBinContent(12,0.005131277);
   VbbHcc_tags_H_jetmass_JEC_stack_11->SetBinContent(14,0.005011742);
   VbbHcc_tags_H_jetmass_JEC_stack_11->SetBinContent(15,0.002190433);
   VbbHcc_tags_H_jetmass_JEC_stack_11->SetBinContent(16,0.00292757);
   VbbHcc_tags_H_jetmass_JEC_stack_11->SetBinContent(18,0.002176611);
   VbbHcc_tags_H_jetmass_JEC_stack_11->SetBinContent(19,0.002234631);
   VbbHcc_tags_H_jetmass_JEC_stack_11->SetBinContent(21,0.002360595);
   VbbHcc_tags_H_jetmass_JEC_stack_11->SetBinContent(27,0.002284175);
   VbbHcc_tags_H_jetmass_JEC_stack_11->SetBinError(4,0.004808485);
   VbbHcc_tags_H_jetmass_JEC_stack_11->SetBinError(5,0.006569028);
   VbbHcc_tags_H_jetmass_JEC_stack_11->SetBinError(6,0.009718778);
   VbbHcc_tags_H_jetmass_JEC_stack_11->SetBinError(7,0.008865136);
   VbbHcc_tags_H_jetmass_JEC_stack_11->SetBinError(8,0.006732385);
   VbbHcc_tags_H_jetmass_JEC_stack_11->SetBinError(9,0.004223535);
   VbbHcc_tags_H_jetmass_JEC_stack_11->SetBinError(10,0.006448897);
   VbbHcc_tags_H_jetmass_JEC_stack_11->SetBinError(11,0.004473894);
   VbbHcc_tags_H_jetmass_JEC_stack_11->SetBinError(12,0.003121522);
   VbbHcc_tags_H_jetmass_JEC_stack_11->SetBinError(14,0.003570039);
   VbbHcc_tags_H_jetmass_JEC_stack_11->SetBinError(15,0.002190433);
   VbbHcc_tags_H_jetmass_JEC_stack_11->SetBinError(16,0.00292757);
   VbbHcc_tags_H_jetmass_JEC_stack_11->SetBinError(18,0.002176611);
   VbbHcc_tags_H_jetmass_JEC_stack_11->SetBinError(19,0.002234631);
   VbbHcc_tags_H_jetmass_JEC_stack_11->SetBinError(21,0.002360595);
   VbbHcc_tags_H_jetmass_JEC_stack_11->SetBinError(27,0.002284175);
   VbbHcc_tags_H_jetmass_JEC_stack_11->SetEntries(77);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#cc0000");
   VbbHcc_tags_H_jetmass_JEC_stack_11->SetFillColor(ci);
   VbbHcc_tags_H_jetmass_JEC_stack_11->GetXaxis()->SetTitle("c-jet mass (w/ JEC) [GeV]");
   VbbHcc_tags_H_jetmass_JEC_stack_11->GetXaxis()->SetRange(1,150);
   VbbHcc_tags_H_jetmass_JEC_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_jetmass_JEC_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_jetmass_JEC_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_jetmass_JEC_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_jetmass_JEC_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_jetmass_JEC_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_jetmass_JEC_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_jetmass_JEC_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_jetmass_JEC_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_jetmass_JEC_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_jetmass_JEC_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_jetmass_JEC_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_jetmass_JEC_stack_11->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_H_jetmass_JEC_stack_11->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_jetmass_JEC_tags_18->Modified();
   H_jetmass_JEC_tags_18->cd();
   H_jetmass_JEC_tags_18->SetSelected(H_jetmass_JEC_tags_18);
}
