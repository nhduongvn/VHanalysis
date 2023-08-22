void Z_jetmass_JEC_both_17()
{
//=========Macro generated from canvas: Z_jetmass_JEC_both_17/Z_jetmass_JEC_both_17
//=========  (Tue Aug 22 09:23:49 2023) by ROOT version 6.14/09
   TCanvas *Z_jetmass_JEC_both_17 = new TCanvas("Z_jetmass_JEC_both_17", "Z_jetmass_JEC_both_17",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_jetmass_JEC_both_17->SetHighLightColor(2);
   Z_jetmass_JEC_both_17->Range(-60,-0.002044689,340,0.0184022);
   Z_jetmass_JEC_both_17->SetFillColor(0);
   Z_jetmass_JEC_both_17->SetBorderMode(0);
   Z_jetmass_JEC_both_17->SetBorderSize(2);
   Z_jetmass_JEC_both_17->SetLeftMargin(0.15);
   Z_jetmass_JEC_both_17->SetFrameBorderMode(0);
   Z_jetmass_JEC_both_17->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_Z_jetmass_JEC_stack_12 = new TH1D("VbbHcc_both_Z_jetmass_JEC_stack_12","",150,0,300);
   VbbHcc_both_Z_jetmass_JEC_stack_12->SetBinContent(4,0.001118834);
   VbbHcc_both_Z_jetmass_JEC_stack_12->SetBinContent(5,0.009942293);
   VbbHcc_both_Z_jetmass_JEC_stack_12->SetBinContent(6,0.01557859);
   VbbHcc_both_Z_jetmass_JEC_stack_12->SetBinContent(7,0.01007282);
   VbbHcc_both_Z_jetmass_JEC_stack_12->SetBinContent(8,0.008042836);
   VbbHcc_both_Z_jetmass_JEC_stack_12->SetBinContent(9,0.005835953);
   VbbHcc_both_Z_jetmass_JEC_stack_12->SetBinContent(10,0.002504746);
   VbbHcc_both_Z_jetmass_JEC_stack_12->SetBinContent(11,0.002561447);
   VbbHcc_both_Z_jetmass_JEC_stack_12->SetBinContent(12,0.001677945);
   VbbHcc_both_Z_jetmass_JEC_stack_12->SetBinContent(13,0.001552271);
   VbbHcc_both_Z_jetmass_JEC_stack_12->SetBinContent(14,0.000924856);
   VbbHcc_both_Z_jetmass_JEC_stack_12->SetBinContent(15,0.0004311773);
   VbbHcc_both_Z_jetmass_JEC_stack_12->SetBinContent(16,0.0004721134);
   VbbHcc_both_Z_jetmass_JEC_stack_12->SetBinContent(17,0.0004780694);
   VbbHcc_both_Z_jetmass_JEC_stack_12->SetBinContent(21,0.0002598584);
   VbbHcc_both_Z_jetmass_JEC_stack_12->SetBinContent(23,0.0002262863);
   VbbHcc_both_Z_jetmass_JEC_stack_12->SetBinError(4,0.0004628436);
   VbbHcc_both_Z_jetmass_JEC_stack_12->SetBinError(5,0.001410286);
   VbbHcc_both_Z_jetmass_JEC_stack_12->SetBinError(6,0.001813473);
   VbbHcc_both_Z_jetmass_JEC_stack_12->SetBinError(7,0.001461269);
   VbbHcc_both_Z_jetmass_JEC_stack_12->SetBinError(8,0.001311415);
   VbbHcc_both_Z_jetmass_JEC_stack_12->SetBinError(9,0.001108082);
   VbbHcc_both_Z_jetmass_JEC_stack_12->SetBinError(10,0.0007313111);
   VbbHcc_both_Z_jetmass_JEC_stack_12->SetBinError(11,0.0006942403);
   VbbHcc_both_Z_jetmass_JEC_stack_12->SetBinError(12,0.0005747037);
   VbbHcc_both_Z_jetmass_JEC_stack_12->SetBinError(13,0.0006079103);
   VbbHcc_both_Z_jetmass_JEC_stack_12->SetBinError(14,0.0004374115);
   VbbHcc_both_Z_jetmass_JEC_stack_12->SetBinError(15,0.0003049522);
   VbbHcc_both_Z_jetmass_JEC_stack_12->SetBinError(16,0.0003340655);
   VbbHcc_both_Z_jetmass_JEC_stack_12->SetBinError(17,0.0003385394);
   VbbHcc_both_Z_jetmass_JEC_stack_12->SetBinError(21,0.0002598584);
   VbbHcc_both_Z_jetmass_JEC_stack_12->SetBinError(23,0.0002262863);
   VbbHcc_both_Z_jetmass_JEC_stack_12->SetEntries(308);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#00cc00");
   VbbHcc_both_Z_jetmass_JEC_stack_12->SetFillColor(ci);
   VbbHcc_both_Z_jetmass_JEC_stack_12->GetXaxis()->SetTitle("b-jet mass (w/ JEC) [GeV]");
   VbbHcc_both_Z_jetmass_JEC_stack_12->GetXaxis()->SetRange(1,150);
   VbbHcc_both_Z_jetmass_JEC_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_jetmass_JEC_stack_12->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_jetmass_JEC_stack_12->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_jetmass_JEC_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_jetmass_JEC_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_jetmass_JEC_stack_12->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_jetmass_JEC_stack_12->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_jetmass_JEC_stack_12->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_jetmass_JEC_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_jetmass_JEC_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_jetmass_JEC_stack_12->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_jetmass_JEC_stack_12->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_jetmass_JEC_stack_12->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_Z_jetmass_JEC_stack_12->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_jetmass_JEC_both_17->Modified();
   Z_jetmass_JEC_both_17->cd();
   Z_jetmass_JEC_both_17->SetSelected(Z_jetmass_JEC_both_17);
}
