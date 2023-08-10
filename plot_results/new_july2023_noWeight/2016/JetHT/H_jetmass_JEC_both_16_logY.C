void H_jetmass_JEC_both_16_logY()
{
//=========Macro generated from canvas: H_jetmass_JEC_both_16/H_jetmass_JEC_both_16
//=========  (Thu Aug 10 12:33:13 2023) by ROOT version 6.14/09
   TCanvas *H_jetmass_JEC_both_16 = new TCanvas("H_jetmass_JEC_both_16", "H_jetmass_JEC_both_16",0,0,600,600);
   gStyle->SetOptStat(0);
   H_jetmass_JEC_both_16->SetHighLightColor(2);
   H_jetmass_JEC_both_16->Range(-60,-0.978971,340,5.800439);
   H_jetmass_JEC_both_16->SetFillColor(0);
   H_jetmass_JEC_both_16->SetBorderMode(0);
   H_jetmass_JEC_both_16->SetBorderSize(2);
   H_jetmass_JEC_both_16->SetLogy();
   H_jetmass_JEC_both_16->SetLeftMargin(0.15);
   H_jetmass_JEC_both_16->SetFrameBorderMode(0);
   H_jetmass_JEC_both_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_H_jetmass_JEC__740 = new TH1D("VbbHcc_both_H_jetmass_JEC__740","",150,0,300);
   VbbHcc_both_H_jetmass_JEC__740->SetBinContent(1,1);
   VbbHcc_both_H_jetmass_JEC__740->SetBinContent(2,32041);
   VbbHcc_both_H_jetmass_JEC__740->SetBinContent(3,69976);
   VbbHcc_both_H_jetmass_JEC__740->SetEntries(102018);
   VbbHcc_both_H_jetmass_JEC__740->GetXaxis()->SetTitle("c-jet mass (w/ JEC) [GeV]");
   VbbHcc_both_H_jetmass_JEC__740->GetXaxis()->SetRange(1,150);
   VbbHcc_both_H_jetmass_JEC__740->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_jetmass_JEC__740->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_jetmass_JEC__740->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_jetmass_JEC__740->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_jetmass_JEC__740->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_jetmass_JEC__740->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_jetmass_JEC__740->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_jetmass_JEC__740->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_jetmass_JEC__740->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_jetmass_JEC__740->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_jetmass_JEC__740->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_jetmass_JEC__740->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_jetmass_JEC__740->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_H_jetmass_JEC__740->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_jetmass_JEC_both_16->Modified();
   H_jetmass_JEC_both_16->cd();
   H_jetmass_JEC_both_16->SetSelected(H_jetmass_JEC_both_16);
}
