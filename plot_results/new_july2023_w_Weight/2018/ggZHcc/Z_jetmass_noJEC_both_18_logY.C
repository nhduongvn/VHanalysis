void Z_jetmass_noJEC_both_18_logY()
{
//=========Macro generated from canvas: Z_jetmass_noJEC_both_18/Z_jetmass_noJEC_both_18
//=========  (Thu Aug 10 12:22:08 2023) by ROOT version 6.14/09
   TCanvas *Z_jetmass_noJEC_both_18 = new TCanvas("Z_jetmass_noJEC_both_18", "Z_jetmass_noJEC_both_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_jetmass_noJEC_both_18->SetHighLightColor(2);
   Z_jetmass_noJEC_both_18->Range(-60,-4.088438,340,-1.13679);
   Z_jetmass_noJEC_both_18->SetFillColor(0);
   Z_jetmass_noJEC_both_18->SetBorderMode(0);
   Z_jetmass_noJEC_both_18->SetBorderSize(2);
   Z_jetmass_noJEC_both_18->SetLogy();
   Z_jetmass_noJEC_both_18->SetLeftMargin(0.15);
   Z_jetmass_noJEC_both_18->SetFrameBorderMode(0);
   Z_jetmass_noJEC_both_18->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_Z_jetmass_noJEC_stack_12 = new TH1D("VbbHcc_both_Z_jetmass_noJEC_stack_12","",150,0,300);
   VbbHcc_both_Z_jetmass_noJEC_stack_12->SetBinContent(3,0.00120796);
   VbbHcc_both_Z_jetmass_noJEC_stack_12->SetBinContent(4,0.008033658);
   VbbHcc_both_Z_jetmass_noJEC_stack_12->SetBinContent(5,0.01653468);
   VbbHcc_both_Z_jetmass_noJEC_stack_12->SetBinContent(6,0.01952075);
   VbbHcc_both_Z_jetmass_noJEC_stack_12->SetBinContent(7,0.01791816);
   VbbHcc_both_Z_jetmass_noJEC_stack_12->SetBinContent(8,0.01193439);
   VbbHcc_both_Z_jetmass_noJEC_stack_12->SetBinContent(9,0.01035477);
   VbbHcc_both_Z_jetmass_noJEC_stack_12->SetBinContent(10,0.0102096);
   VbbHcc_both_Z_jetmass_noJEC_stack_12->SetBinContent(11,0.003273314);
   VbbHcc_both_Z_jetmass_noJEC_stack_12->SetBinContent(12,0.003594931);
   VbbHcc_both_Z_jetmass_noJEC_stack_12->SetBinContent(13,0.001240449);
   VbbHcc_both_Z_jetmass_noJEC_stack_12->SetBinContent(14,0.001750903);
   VbbHcc_both_Z_jetmass_noJEC_stack_12->SetBinContent(15,0.001280565);
   VbbHcc_both_Z_jetmass_noJEC_stack_12->SetBinContent(16,0.0004389172);
   VbbHcc_both_Z_jetmass_noJEC_stack_12->SetBinContent(17,0.0008718009);
   VbbHcc_both_Z_jetmass_noJEC_stack_12->SetBinContent(18,0.0003219266);
   VbbHcc_both_Z_jetmass_noJEC_stack_12->SetBinContent(19,0.0007571959);
   VbbHcc_both_Z_jetmass_noJEC_stack_12->SetBinContent(20,0.0003895316);
   VbbHcc_both_Z_jetmass_noJEC_stack_12->SetBinContent(22,0.0005466954);
   VbbHcc_both_Z_jetmass_noJEC_stack_12->SetBinContent(24,0.0003400733);
   VbbHcc_both_Z_jetmass_noJEC_stack_12->SetBinContent(27,0.0003219266);
   VbbHcc_both_Z_jetmass_noJEC_stack_12->SetBinError(3,0.0007050354);
   VbbHcc_both_Z_jetmass_noJEC_stack_12->SetBinError(4,0.00168872);
   VbbHcc_both_Z_jetmass_noJEC_stack_12->SetBinError(5,0.002461436);
   VbbHcc_both_Z_jetmass_noJEC_stack_12->SetBinError(6,0.002579611);
   VbbHcc_both_Z_jetmass_noJEC_stack_12->SetBinError(7,0.002518829);
   VbbHcc_both_Z_jetmass_noJEC_stack_12->SetBinError(8,0.002010638);
   VbbHcc_both_Z_jetmass_noJEC_stack_12->SetBinError(9,0.001923393);
   VbbHcc_both_Z_jetmass_noJEC_stack_12->SetBinError(10,0.001885392);
   VbbHcc_both_Z_jetmass_noJEC_stack_12->SetBinError(11,0.00105486);
   VbbHcc_both_Z_jetmass_noJEC_stack_12->SetBinError(12,0.001110377);
   VbbHcc_both_Z_jetmass_noJEC_stack_12->SetBinError(13,0.0006213751);
   VbbHcc_both_Z_jetmass_noJEC_stack_12->SetBinError(14,0.0007902143);
   VbbHcc_both_Z_jetmass_noJEC_stack_12->SetBinError(15,0.0006448408);
   VbbHcc_both_Z_jetmass_noJEC_stack_12->SetBinError(16,0.0004389172);
   VbbHcc_both_Z_jetmass_noJEC_stack_12->SetBinError(17,0.0006164587);
   VbbHcc_both_Z_jetmass_noJEC_stack_12->SetBinError(18,0.0003219266);
   VbbHcc_both_Z_jetmass_noJEC_stack_12->SetBinError(19,0.0005405127);
   VbbHcc_both_Z_jetmass_noJEC_stack_12->SetBinError(20,0.0003895316);
   VbbHcc_both_Z_jetmass_noJEC_stack_12->SetBinError(22,0.000391856);
   VbbHcc_both_Z_jetmass_noJEC_stack_12->SetBinError(24,0.0003400733);
   VbbHcc_both_Z_jetmass_noJEC_stack_12->SetBinError(27,0.0003219266);
   VbbHcc_both_Z_jetmass_noJEC_stack_12->SetEntries(330);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#00cc00");
   VbbHcc_both_Z_jetmass_noJEC_stack_12->SetFillColor(ci);
   VbbHcc_both_Z_jetmass_noJEC_stack_12->GetXaxis()->SetTitle("b-jet mass [GeV]");
   VbbHcc_both_Z_jetmass_noJEC_stack_12->GetXaxis()->SetRange(1,150);
   VbbHcc_both_Z_jetmass_noJEC_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_jetmass_noJEC_stack_12->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_jetmass_noJEC_stack_12->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_jetmass_noJEC_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_jetmass_noJEC_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_jetmass_noJEC_stack_12->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_jetmass_noJEC_stack_12->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_jetmass_noJEC_stack_12->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_jetmass_noJEC_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_jetmass_noJEC_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_jetmass_noJEC_stack_12->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_jetmass_noJEC_stack_12->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_jetmass_noJEC_stack_12->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_Z_jetmass_noJEC_stack_12->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_jetmass_noJEC_both_18->Modified();
   Z_jetmass_noJEC_both_18->cd();
   Z_jetmass_noJEC_both_18->SetSelected(Z_jetmass_noJEC_both_18);
}
