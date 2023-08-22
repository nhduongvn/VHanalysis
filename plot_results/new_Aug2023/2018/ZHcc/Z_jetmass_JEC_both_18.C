void Z_jetmass_JEC_both_18()
{
//=========Macro generated from canvas: Z_jetmass_JEC_both_18/Z_jetmass_JEC_both_18
//=========  (Tue Aug 22 09:23:50 2023) by ROOT version 6.14/09
   TCanvas *Z_jetmass_JEC_both_18 = new TCanvas("Z_jetmass_JEC_both_18", "Z_jetmass_JEC_both_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_jetmass_JEC_both_18->SetHighLightColor(2);
   Z_jetmass_JEC_both_18->Range(-60,-0.006103615,340,0.05493253);
   Z_jetmass_JEC_both_18->SetFillColor(0);
   Z_jetmass_JEC_both_18->SetBorderMode(0);
   Z_jetmass_JEC_both_18->SetBorderSize(2);
   Z_jetmass_JEC_both_18->SetLeftMargin(0.15);
   Z_jetmass_JEC_both_18->SetFrameBorderMode(0);
   Z_jetmass_JEC_both_18->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_Z_jetmass_JEC_stack_11 = new TH1D("VbbHcc_both_Z_jetmass_JEC_stack_11","",150,0,300);
   VbbHcc_both_Z_jetmass_JEC_stack_11->SetBinContent(4,0.004621395);
   VbbHcc_both_Z_jetmass_JEC_stack_11->SetBinContent(5,0.01661431);
   VbbHcc_both_Z_jetmass_JEC_stack_11->SetBinContent(6,0.04650373);
   VbbHcc_both_Z_jetmass_JEC_stack_11->SetBinContent(7,0.02888308);
   VbbHcc_both_Z_jetmass_JEC_stack_11->SetBinContent(8,0.02321176);
   VbbHcc_both_Z_jetmass_JEC_stack_11->SetBinContent(9,0.02891759);
   VbbHcc_both_Z_jetmass_JEC_stack_11->SetBinContent(10,0.008397157);
   VbbHcc_both_Z_jetmass_JEC_stack_11->SetBinContent(11,0.01250207);
   VbbHcc_both_Z_jetmass_JEC_stack_11->SetBinContent(12,0.003964936);
   VbbHcc_both_Z_jetmass_JEC_stack_11->SetBinContent(13,0.004253991);
   VbbHcc_both_Z_jetmass_JEC_stack_11->SetBinContent(14,0.004428071);
   VbbHcc_both_Z_jetmass_JEC_stack_11->SetBinContent(15,0.002190433);
   VbbHcc_both_Z_jetmass_JEC_stack_11->SetBinContent(16,0.00129919);
   VbbHcc_both_Z_jetmass_JEC_stack_11->SetBinContent(17,0.002227489);
   VbbHcc_both_Z_jetmass_JEC_stack_11->SetBinContent(27,0.002259486);
   VbbHcc_both_Z_jetmass_JEC_stack_11->SetBinError(4,0.003268035);
   VbbHcc_both_Z_jetmass_JEC_stack_11->SetBinError(5,0.006344613);
   VbbHcc_both_Z_jetmass_JEC_stack_11->SetBinError(6,0.01049704);
   VbbHcc_both_Z_jetmass_JEC_stack_11->SetBinError(7,0.008414643);
   VbbHcc_both_Z_jetmass_JEC_stack_11->SetBinError(8,0.007801849);
   VbbHcc_both_Z_jetmass_JEC_stack_11->SetBinError(9,0.008253711);
   VbbHcc_both_Z_jetmass_JEC_stack_11->SetBinError(10,0.00424609);
   VbbHcc_both_Z_jetmass_JEC_stack_11->SetBinError(11,0.005297181);
   VbbHcc_both_Z_jetmass_JEC_stack_11->SetBinError(12,0.002830872);
   VbbHcc_both_Z_jetmass_JEC_stack_11->SetBinError(13,0.003011875);
   VbbHcc_both_Z_jetmass_JEC_stack_11->SetBinError(14,0.003131177);
   VbbHcc_both_Z_jetmass_JEC_stack_11->SetBinError(15,0.002190433);
   VbbHcc_both_Z_jetmass_JEC_stack_11->SetBinError(16,0.00129919);
   VbbHcc_both_Z_jetmass_JEC_stack_11->SetBinError(17,0.002227489);
   VbbHcc_both_Z_jetmass_JEC_stack_11->SetBinError(27,0.002259486);
   VbbHcc_both_Z_jetmass_JEC_stack_11->SetEntries(84);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#cc0000");
   VbbHcc_both_Z_jetmass_JEC_stack_11->SetFillColor(ci);
   VbbHcc_both_Z_jetmass_JEC_stack_11->GetXaxis()->SetTitle("b-jet mass (w/ JEC) [GeV]");
   VbbHcc_both_Z_jetmass_JEC_stack_11->GetXaxis()->SetRange(1,150);
   VbbHcc_both_Z_jetmass_JEC_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_jetmass_JEC_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_jetmass_JEC_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_jetmass_JEC_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_jetmass_JEC_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_jetmass_JEC_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_jetmass_JEC_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_jetmass_JEC_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_jetmass_JEC_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_jetmass_JEC_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_jetmass_JEC_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_jetmass_JEC_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_jetmass_JEC_stack_11->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_Z_jetmass_JEC_stack_11->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_jetmass_JEC_both_18->Modified();
   Z_jetmass_JEC_both_18->cd();
   Z_jetmass_JEC_both_18->SetSelected(Z_jetmass_JEC_both_18);
}
