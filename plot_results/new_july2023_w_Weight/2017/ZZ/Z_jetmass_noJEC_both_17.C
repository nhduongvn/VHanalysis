void Z_jetmass_noJEC_both_17()
{
//=========Macro generated from canvas: Z_jetmass_noJEC_both_17/Z_jetmass_noJEC_both_17
//=========  (Thu Aug 10 12:25:21 2023) by ROOT version 6.14/09
   TCanvas *Z_jetmass_noJEC_both_17 = new TCanvas("Z_jetmass_noJEC_both_17", "Z_jetmass_noJEC_both_17",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_jetmass_noJEC_both_17->SetHighLightColor(2);
   Z_jetmass_noJEC_both_17->Range(-60,-1.263185,340,11.36866);
   Z_jetmass_noJEC_both_17->SetFillColor(0);
   Z_jetmass_noJEC_both_17->SetBorderMode(0);
   Z_jetmass_noJEC_both_17->SetBorderSize(2);
   Z_jetmass_noJEC_both_17->SetLeftMargin(0.15);
   Z_jetmass_noJEC_both_17->SetFrameBorderMode(0);
   Z_jetmass_noJEC_both_17->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_Z_jetmass_noJEC_stack_8 = new TH1D("VbbHcc_both_Z_jetmass_noJEC_stack_8","",150,0,300);
   VbbHcc_both_Z_jetmass_noJEC_stack_8->SetBinContent(3,0.2923745);
   VbbHcc_both_Z_jetmass_noJEC_stack_8->SetBinContent(4,2.508498);
   VbbHcc_both_Z_jetmass_noJEC_stack_8->SetBinContent(5,6.050075);
   VbbHcc_both_Z_jetmass_noJEC_stack_8->SetBinContent(6,8.232543);
   VbbHcc_both_Z_jetmass_noJEC_stack_8->SetBinContent(7,9.624265);
   VbbHcc_both_Z_jetmass_noJEC_stack_8->SetBinContent(8,6.842813);
   VbbHcc_both_Z_jetmass_noJEC_stack_8->SetBinContent(9,4.586483);
   VbbHcc_both_Z_jetmass_noJEC_stack_8->SetBinContent(10,5.094266);
   VbbHcc_both_Z_jetmass_noJEC_stack_8->SetBinContent(11,1.651637);
   VbbHcc_both_Z_jetmass_noJEC_stack_8->SetBinContent(12,0.9308408);
   VbbHcc_both_Z_jetmass_noJEC_stack_8->SetBinContent(13,1.397441);
   VbbHcc_both_Z_jetmass_noJEC_stack_8->SetBinContent(14,0.6389588);
   VbbHcc_both_Z_jetmass_noJEC_stack_8->SetBinContent(15,0.5641309);
   VbbHcc_both_Z_jetmass_noJEC_stack_8->SetBinContent(16,0.2407183);
   VbbHcc_both_Z_jetmass_noJEC_stack_8->SetBinContent(17,0.5110731);
   VbbHcc_both_Z_jetmass_noJEC_stack_8->SetBinContent(18,0.2854158);
   VbbHcc_both_Z_jetmass_noJEC_stack_8->SetBinContent(19,0.3843767);
   VbbHcc_both_Z_jetmass_noJEC_stack_8->SetBinContent(22,0.5126897);
   VbbHcc_both_Z_jetmass_noJEC_stack_8->SetBinContent(24,0.2111933);
   VbbHcc_both_Z_jetmass_noJEC_stack_8->SetBinContent(29,0.2188144);
   VbbHcc_both_Z_jetmass_noJEC_stack_8->SetBinContent(43,0.3669504);
   VbbHcc_both_Z_jetmass_noJEC_stack_8->SetBinError(3,0.2923745);
   VbbHcc_both_Z_jetmass_noJEC_stack_8->SetBinError(4,0.891278);
   VbbHcc_both_Z_jetmass_noJEC_stack_8->SetBinError(5,1.330379);
   VbbHcc_both_Z_jetmass_noJEC_stack_8->SetBinError(6,1.514885);
   VbbHcc_both_Z_jetmass_noJEC_stack_8->SetBinError(7,1.68136);
   VbbHcc_both_Z_jetmass_noJEC_stack_8->SetBinError(8,1.419885);
   VbbHcc_both_Z_jetmass_noJEC_stack_8->SetBinError(9,1.174325);
   VbbHcc_both_Z_jetmass_noJEC_stack_8->SetBinError(10,1.245143);
   VbbHcc_both_Z_jetmass_noJEC_stack_8->SetBinError(11,0.6902671);
   VbbHcc_both_Z_jetmass_noJEC_stack_8->SetBinError(12,0.4717114);
   VbbHcc_both_Z_jetmass_noJEC_stack_8->SetBinError(13,0.6280225);
   VbbHcc_both_Z_jetmass_noJEC_stack_8->SetBinError(14,0.451824);
   VbbHcc_both_Z_jetmass_noJEC_stack_8->SetBinError(15,0.3995429);
   VbbHcc_both_Z_jetmass_noJEC_stack_8->SetBinError(16,0.2407183);
   VbbHcc_both_Z_jetmass_noJEC_stack_8->SetBinError(17,0.3723855);
   VbbHcc_both_Z_jetmass_noJEC_stack_8->SetBinError(18,0.2854158);
   VbbHcc_both_Z_jetmass_noJEC_stack_8->SetBinError(19,0.3843767);
   VbbHcc_both_Z_jetmass_noJEC_stack_8->SetBinError(22,0.3666803);
   VbbHcc_both_Z_jetmass_noJEC_stack_8->SetBinError(24,0.2111933);
   VbbHcc_both_Z_jetmass_noJEC_stack_8->SetBinError(29,0.2188144);
   VbbHcc_both_Z_jetmass_noJEC_stack_8->SetBinError(43,0.3669504);
   VbbHcc_both_Z_jetmass_noJEC_stack_8->SetEntries(184);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#33ff99");
   VbbHcc_both_Z_jetmass_noJEC_stack_8->SetFillColor(ci);
   VbbHcc_both_Z_jetmass_noJEC_stack_8->GetXaxis()->SetTitle("b-jet mass [GeV]");
   VbbHcc_both_Z_jetmass_noJEC_stack_8->GetXaxis()->SetRange(1,150);
   VbbHcc_both_Z_jetmass_noJEC_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_jetmass_noJEC_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_jetmass_noJEC_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_jetmass_noJEC_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_jetmass_noJEC_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_jetmass_noJEC_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_jetmass_noJEC_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_jetmass_noJEC_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_jetmass_noJEC_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_jetmass_noJEC_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_jetmass_noJEC_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_jetmass_noJEC_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_jetmass_noJEC_stack_8->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_Z_jetmass_noJEC_stack_8->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_jetmass_noJEC_both_17->Modified();
   Z_jetmass_noJEC_both_17->cd();
   Z_jetmass_noJEC_both_17->SetSelected(Z_jetmass_noJEC_both_17);
}
