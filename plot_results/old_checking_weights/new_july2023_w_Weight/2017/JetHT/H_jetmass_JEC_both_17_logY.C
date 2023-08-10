void H_jetmass_JEC_both_17_logY()
{
//=========Macro generated from canvas: H_jetmass_JEC_both_17/H_jetmass_JEC_both_17
//=========  (Thu Aug 10 10:43:36 2023) by ROOT version 6.14/09
   TCanvas *H_jetmass_JEC_both_17 = new TCanvas("H_jetmass_JEC_both_17", "H_jetmass_JEC_both_17",0,0,600,600);
   gStyle->SetOptStat(0);
   H_jetmass_JEC_both_17->SetHighLightColor(2);
   H_jetmass_JEC_both_17->Range(-60,-0.416306,340,5.507666);
   H_jetmass_JEC_both_17->SetFillColor(0);
   H_jetmass_JEC_both_17->SetBorderMode(0);
   H_jetmass_JEC_both_17->SetBorderSize(2);
   H_jetmass_JEC_both_17->SetLogy();
   H_jetmass_JEC_both_17->SetLeftMargin(0.15);
   H_jetmass_JEC_both_17->SetFrameBorderMode(0);
   H_jetmass_JEC_both_17->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_H_jetmass_JEC__743 = new TH1D("VbbHcc_both_H_jetmass_JEC__743","",150,0,300);
   VbbHcc_both_H_jetmass_JEC__743->SetBinContent(1,3);
   VbbHcc_both_H_jetmass_JEC__743->SetBinContent(2,24258);
   VbbHcc_both_H_jetmass_JEC__743->SetBinContent(3,43423);
   VbbHcc_both_H_jetmass_JEC__743->SetEntries(67684);
   VbbHcc_both_H_jetmass_JEC__743->GetXaxis()->SetTitle("c-jet mass (w/ JEC) [GeV]");
   VbbHcc_both_H_jetmass_JEC__743->GetXaxis()->SetRange(1,150);
   VbbHcc_both_H_jetmass_JEC__743->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_jetmass_JEC__743->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_jetmass_JEC__743->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_jetmass_JEC__743->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_jetmass_JEC__743->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_jetmass_JEC__743->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_jetmass_JEC__743->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_jetmass_JEC__743->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_jetmass_JEC__743->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_jetmass_JEC__743->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_jetmass_JEC__743->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_jetmass_JEC__743->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_jetmass_JEC__743->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_H_jetmass_JEC__743->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_jetmass_JEC_both_17->Modified();
   H_jetmass_JEC_both_17->cd();
   H_jetmass_JEC_both_17->SetSelected(H_jetmass_JEC_both_17);
}
