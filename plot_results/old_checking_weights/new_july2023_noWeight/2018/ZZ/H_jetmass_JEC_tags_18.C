void H_jetmass_JEC_tags_18()
{
//=========Macro generated from canvas: H_jetmass_JEC_tags_18/H_jetmass_JEC_tags_18
//=========  (Thu Aug  3 12:23:50 2023) by ROOT version 6.14/09
   TCanvas *H_jetmass_JEC_tags_18 = new TCanvas("H_jetmass_JEC_tags_18", "H_jetmass_JEC_tags_18",0,0,600,600);
   gStyle->SetOptStat(0);
   H_jetmass_JEC_tags_18->SetHighLightColor(2);
   H_jetmass_JEC_tags_18->Range(-60,-1.576945,340,14.1925);
   H_jetmass_JEC_tags_18->SetFillColor(0);
   H_jetmass_JEC_tags_18->SetBorderMode(0);
   H_jetmass_JEC_tags_18->SetBorderSize(2);
   H_jetmass_JEC_tags_18->SetLeftMargin(0.15);
   H_jetmass_JEC_tags_18->SetFrameBorderMode(0);
   H_jetmass_JEC_tags_18->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_H_jetmass_JEC_stack_8 = new TH1D("VbbHcc_tags_H_jetmass_JEC_stack_8","",150,0,300);
   VbbHcc_tags_H_jetmass_JEC_stack_8->SetBinContent(3,0.5588287);
   VbbHcc_tags_H_jetmass_JEC_stack_8->SetBinContent(4,6.42653);
   VbbHcc_tags_H_jetmass_JEC_stack_8->SetBinContent(5,11.17657);
   VbbHcc_tags_H_jetmass_JEC_stack_8->SetBinContent(6,12.01482);
   VbbHcc_tags_H_jetmass_JEC_stack_8->SetBinContent(7,9.220674);
   VbbHcc_tags_H_jetmass_JEC_stack_8->SetBinContent(8,6.985359);
   VbbHcc_tags_H_jetmass_JEC_stack_8->SetBinContent(9,6.42653);
   VbbHcc_tags_H_jetmass_JEC_stack_8->SetBinContent(10,3.632387);
   VbbHcc_tags_H_jetmass_JEC_stack_8->SetBinContent(11,2.235315);
   VbbHcc_tags_H_jetmass_JEC_stack_8->SetBinContent(12,1.676486);
   VbbHcc_tags_H_jetmass_JEC_stack_8->SetBinContent(13,0.5588287);
   VbbHcc_tags_H_jetmass_JEC_stack_8->SetBinContent(14,0.5588287);
   VbbHcc_tags_H_jetmass_JEC_stack_8->SetBinContent(15,0.5588287);
   VbbHcc_tags_H_jetmass_JEC_stack_8->SetBinContent(16,0.2794144);
   VbbHcc_tags_H_jetmass_JEC_stack_8->SetBinContent(17,0.2794144);
   VbbHcc_tags_H_jetmass_JEC_stack_8->SetBinContent(18,0.2794144);
   VbbHcc_tags_H_jetmass_JEC_stack_8->SetBinContent(19,0.2794144);
   VbbHcc_tags_H_jetmass_JEC_stack_8->SetBinContent(21,0.2794144);
   VbbHcc_tags_H_jetmass_JEC_stack_8->SetBinContent(25,0.2794144);
   VbbHcc_tags_H_jetmass_JEC_stack_8->SetBinContent(27,0.2794144);
   VbbHcc_tags_H_jetmass_JEC_stack_8->SetBinContent(30,0.2794144);
   VbbHcc_tags_H_jetmass_JEC_stack_8->SetBinError(3,0.3951516);
   VbbHcc_tags_H_jetmass_JEC_stack_8->SetBinError(4,1.340024);
   VbbHcc_tags_H_jetmass_JEC_stack_8->SetBinError(5,1.767172);
   VbbHcc_tags_H_jetmass_JEC_stack_8->SetBinError(6,1.832242);
   VbbHcc_tags_H_jetmass_JEC_stack_8->SetBinError(7,1.605113);
   VbbHcc_tags_H_jetmass_JEC_stack_8->SetBinError(8,1.397072);
   VbbHcc_tags_H_jetmass_JEC_stack_8->SetBinError(9,1.340024);
   VbbHcc_tags_H_jetmass_JEC_stack_8->SetBinError(10,1.007443);
   VbbHcc_tags_H_jetmass_JEC_stack_8->SetBinError(11,0.7903031);
   VbbHcc_tags_H_jetmass_JEC_stack_8->SetBinError(12,0.6844226);
   VbbHcc_tags_H_jetmass_JEC_stack_8->SetBinError(13,0.3951516);
   VbbHcc_tags_H_jetmass_JEC_stack_8->SetBinError(14,0.3951516);
   VbbHcc_tags_H_jetmass_JEC_stack_8->SetBinError(15,0.3951516);
   VbbHcc_tags_H_jetmass_JEC_stack_8->SetBinError(16,0.2794144);
   VbbHcc_tags_H_jetmass_JEC_stack_8->SetBinError(17,0.2794144);
   VbbHcc_tags_H_jetmass_JEC_stack_8->SetBinError(18,0.2794144);
   VbbHcc_tags_H_jetmass_JEC_stack_8->SetBinError(19,0.2794144);
   VbbHcc_tags_H_jetmass_JEC_stack_8->SetBinError(21,0.2794144);
   VbbHcc_tags_H_jetmass_JEC_stack_8->SetBinError(25,0.2794144);
   VbbHcc_tags_H_jetmass_JEC_stack_8->SetBinError(27,0.2794144);
   VbbHcc_tags_H_jetmass_JEC_stack_8->SetBinError(30,0.2794144);
   VbbHcc_tags_H_jetmass_JEC_stack_8->SetEntries(230);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#33ff99");
   VbbHcc_tags_H_jetmass_JEC_stack_8->SetFillColor(ci);
   VbbHcc_tags_H_jetmass_JEC_stack_8->GetXaxis()->SetTitle("c-jet mass (w/ JEC) [GeV]");
   VbbHcc_tags_H_jetmass_JEC_stack_8->GetXaxis()->SetRange(1,150);
   VbbHcc_tags_H_jetmass_JEC_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_jetmass_JEC_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_jetmass_JEC_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_jetmass_JEC_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_jetmass_JEC_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_jetmass_JEC_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_jetmass_JEC_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_jetmass_JEC_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_jetmass_JEC_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_jetmass_JEC_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_jetmass_JEC_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_jetmass_JEC_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_jetmass_JEC_stack_8->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_H_jetmass_JEC_stack_8->Draw("HIST");
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
