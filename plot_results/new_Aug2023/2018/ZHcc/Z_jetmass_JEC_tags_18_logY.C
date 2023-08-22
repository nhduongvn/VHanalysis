void Z_jetmass_JEC_tags_18_logY()
{
//=========Macro generated from canvas: Z_jetmass_JEC_tags_18/Z_jetmass_JEC_tags_18
//=========  (Tue Aug 22 09:16:51 2023) by ROOT version 6.14/09
   TCanvas *Z_jetmass_JEC_tags_18 = new TCanvas("Z_jetmass_JEC_tags_18", "Z_jetmass_JEC_tags_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_jetmass_JEC_tags_18->SetHighLightColor(2);
   Z_jetmass_JEC_tags_18->Range(-60,-3.179327,340,-0.9182004);
   Z_jetmass_JEC_tags_18->SetFillColor(0);
   Z_jetmass_JEC_tags_18->SetBorderMode(0);
   Z_jetmass_JEC_tags_18->SetBorderSize(2);
   Z_jetmass_JEC_tags_18->SetLogy();
   Z_jetmass_JEC_tags_18->SetLeftMargin(0.15);
   Z_jetmass_JEC_tags_18->SetFrameBorderMode(0);
   Z_jetmass_JEC_tags_18->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_Z_jetmass_JEC_stack_11 = new TH1D("VbbHcc_tags_Z_jetmass_JEC_stack_11","",150,0,300);
   VbbHcc_tags_Z_jetmass_JEC_stack_11->SetBinContent(4,0.004621395);
   VbbHcc_tags_Z_jetmass_JEC_stack_11->SetBinContent(5,0.01661431);
   VbbHcc_tags_Z_jetmass_JEC_stack_11->SetBinContent(6,0.03785628);
   VbbHcc_tags_Z_jetmass_JEC_stack_11->SetBinContent(7,0.03219557);
   VbbHcc_tags_Z_jetmass_JEC_stack_11->SetBinContent(8,0.01753706);
   VbbHcc_tags_Z_jetmass_JEC_stack_11->SetBinContent(9,0.03331855);
   VbbHcc_tags_Z_jetmass_JEC_stack_11->SetBinContent(10,0.006148333);
   VbbHcc_tags_Z_jetmass_JEC_stack_11->SetBinContent(11,0.01048271);
   VbbHcc_tags_Z_jetmass_JEC_stack_11->SetBinContent(12,0.003906032);
   VbbHcc_tags_Z_jetmass_JEC_stack_11->SetBinContent(13,0.004253991);
   VbbHcc_tags_Z_jetmass_JEC_stack_11->SetBinContent(14,0.002227489);
   VbbHcc_tags_Z_jetmass_JEC_stack_11->SetBinContent(16,0.002398405);
   VbbHcc_tags_Z_jetmass_JEC_stack_11->SetBinContent(17,0.002227489);
   VbbHcc_tags_Z_jetmass_JEC_stack_11->SetBinContent(27,0.002259486);
   VbbHcc_tags_Z_jetmass_JEC_stack_11->SetBinError(4,0.003268035);
   VbbHcc_tags_Z_jetmass_JEC_stack_11->SetBinError(5,0.006344613);
   VbbHcc_tags_Z_jetmass_JEC_stack_11->SetBinError(6,0.009543611);
   VbbHcc_tags_Z_jetmass_JEC_stack_11->SetBinError(7,0.009043165);
   VbbHcc_tags_Z_jetmass_JEC_stack_11->SetBinError(8,0.006656399);
   VbbHcc_tags_Z_jetmass_JEC_stack_11->SetBinError(9,0.008820894);
   VbbHcc_tags_Z_jetmass_JEC_stack_11->SetBinError(10,0.003601362);
   VbbHcc_tags_Z_jetmass_JEC_stack_11->SetBinError(11,0.004897174);
   VbbHcc_tags_Z_jetmass_JEC_stack_11->SetBinError(12,0.002784083);
   VbbHcc_tags_Z_jetmass_JEC_stack_11->SetBinError(13,0.003011875);
   VbbHcc_tags_Z_jetmass_JEC_stack_11->SetBinError(14,0.002227489);
   VbbHcc_tags_Z_jetmass_JEC_stack_11->SetBinError(16,0.002398405);
   VbbHcc_tags_Z_jetmass_JEC_stack_11->SetBinError(17,0.002227489);
   VbbHcc_tags_Z_jetmass_JEC_stack_11->SetBinError(27,0.002259486);
   VbbHcc_tags_Z_jetmass_JEC_stack_11->SetEntries(77);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#cc0000");
   VbbHcc_tags_Z_jetmass_JEC_stack_11->SetFillColor(ci);
   VbbHcc_tags_Z_jetmass_JEC_stack_11->GetXaxis()->SetTitle("b-jet mass (w/ JEC) [GeV]");
   VbbHcc_tags_Z_jetmass_JEC_stack_11->GetXaxis()->SetRange(1,150);
   VbbHcc_tags_Z_jetmass_JEC_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_jetmass_JEC_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_jetmass_JEC_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_jetmass_JEC_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_jetmass_JEC_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_jetmass_JEC_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_jetmass_JEC_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_jetmass_JEC_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_jetmass_JEC_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_jetmass_JEC_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_jetmass_JEC_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_jetmass_JEC_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_jetmass_JEC_stack_11->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_jetmass_JEC_stack_11->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_jetmass_JEC_tags_18->Modified();
   Z_jetmass_JEC_tags_18->cd();
   Z_jetmass_JEC_tags_18->SetSelected(Z_jetmass_JEC_tags_18);
}
