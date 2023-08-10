void H_jetmass_JEC_both_18_logY()
{
//=========Macro generated from canvas: H_jetmass_JEC_both_18/H_jetmass_JEC_both_18
//=========  (Thu Aug 10 12:33:14 2023) by ROOT version 6.14/09
   TCanvas *H_jetmass_JEC_both_18 = new TCanvas("H_jetmass_JEC_both_18", "H_jetmass_JEC_both_18",0,0,600,600);
   gStyle->SetOptStat(0);
   H_jetmass_JEC_both_18->SetHighLightColor(2);
   H_jetmass_JEC_both_18->Range(-60,0.03489689,340,6.218053);
   H_jetmass_JEC_both_18->SetFillColor(0);
   H_jetmass_JEC_both_18->SetBorderMode(0);
   H_jetmass_JEC_both_18->SetBorderSize(2);
   H_jetmass_JEC_both_18->SetLogy();
   H_jetmass_JEC_both_18->SetLeftMargin(0.15);
   H_jetmass_JEC_both_18->SetFrameBorderMode(0);
   H_jetmass_JEC_both_18->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_H_jetmass_JEC__746 = new TH1D("VbbHcc_both_H_jetmass_JEC__746","",150,0,300);
   VbbHcc_both_H_jetmass_JEC__746->SetBinContent(1,9);
   VbbHcc_both_H_jetmass_JEC__746->SetBinContent(2,116374);
   VbbHcc_both_H_jetmass_JEC__746->SetBinContent(3,209985);
   VbbHcc_both_H_jetmass_JEC__746->SetEntries(326368);
   VbbHcc_both_H_jetmass_JEC__746->GetXaxis()->SetTitle("c-jet mass (w/ JEC) [GeV]");
   VbbHcc_both_H_jetmass_JEC__746->GetXaxis()->SetRange(1,150);
   VbbHcc_both_H_jetmass_JEC__746->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_jetmass_JEC__746->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_jetmass_JEC__746->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_jetmass_JEC__746->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_jetmass_JEC__746->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_jetmass_JEC__746->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_jetmass_JEC__746->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_jetmass_JEC__746->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_jetmass_JEC__746->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_jetmass_JEC__746->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_jetmass_JEC__746->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_jetmass_JEC__746->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_jetmass_JEC__746->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_H_jetmass_JEC__746->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_jetmass_JEC_both_18->Modified();
   H_jetmass_JEC_both_18->cd();
   H_jetmass_JEC_both_18->SetSelected(H_jetmass_JEC_both_18);
}
