void Z_jetmass_JEC_both_18()
{
//=========Macro generated from canvas: Z_jetmass_JEC_both_18/Z_jetmass_JEC_both_18
//=========  (Thu Aug 10 12:29:49 2023) by ROOT version 6.14/09
   TCanvas *Z_jetmass_JEC_both_18 = new TCanvas("Z_jetmass_JEC_both_18", "Z_jetmass_JEC_both_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_jetmass_JEC_both_18->SetHighLightColor(2);
   Z_jetmass_JEC_both_18->Range(-60,-1.907003,340,17.16303);
   Z_jetmass_JEC_both_18->SetFillColor(0);
   Z_jetmass_JEC_both_18->SetBorderMode(0);
   Z_jetmass_JEC_both_18->SetBorderSize(2);
   Z_jetmass_JEC_both_18->SetLeftMargin(0.15);
   Z_jetmass_JEC_both_18->SetFrameBorderMode(0);
   Z_jetmass_JEC_both_18->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_Z_jetmass_JEC_stack_8 = new TH1D("VbbHcc_both_Z_jetmass_JEC_stack_8","",150,0,300);
   VbbHcc_both_Z_jetmass_JEC_stack_8->SetBinContent(4,2.794144);
   VbbHcc_both_Z_jetmass_JEC_stack_8->SetBinContent(5,8.103016);
   VbbHcc_both_Z_jetmass_JEC_stack_8->SetBinContent(6,14.52955);
   VbbHcc_both_Z_jetmass_JEC_stack_8->SetBinContent(7,9.779502);
   VbbHcc_both_Z_jetmass_JEC_stack_8->SetBinContent(8,8.103016);
   VbbHcc_both_Z_jetmass_JEC_stack_8->SetBinContent(9,6.705944);
   VbbHcc_both_Z_jetmass_JEC_stack_8->SetBinContent(10,4.750044);
   VbbHcc_both_Z_jetmass_JEC_stack_8->SetBinContent(11,2.235315);
   VbbHcc_both_Z_jetmass_JEC_stack_8->SetBinContent(12,1.397072);
   VbbHcc_both_Z_jetmass_JEC_stack_8->SetBinContent(13,1.117657);
   VbbHcc_both_Z_jetmass_JEC_stack_8->SetBinContent(14,1.676486);
   VbbHcc_both_Z_jetmass_JEC_stack_8->SetBinContent(15,1.117657);
   VbbHcc_both_Z_jetmass_JEC_stack_8->SetBinContent(17,0.2794144);
   VbbHcc_both_Z_jetmass_JEC_stack_8->SetBinContent(18,0.2794144);
   VbbHcc_both_Z_jetmass_JEC_stack_8->SetBinContent(19,0.8382431);
   VbbHcc_both_Z_jetmass_JEC_stack_8->SetBinContent(20,0.2794144);
   VbbHcc_both_Z_jetmass_JEC_stack_8->SetBinContent(23,0.2794144);
   VbbHcc_both_Z_jetmass_JEC_stack_8->SetBinContent(24,0.2794144);
   VbbHcc_both_Z_jetmass_JEC_stack_8->SetBinContent(33,0.2794144);
   VbbHcc_both_Z_jetmass_JEC_stack_8->SetBinError(4,0.8835858);
   VbbHcc_both_Z_jetmass_JEC_stack_8->SetBinError(5,1.504692);
   VbbHcc_both_Z_jetmass_JEC_stack_8->SetBinError(6,2.014886);
   VbbHcc_both_Z_jetmass_JEC_stack_8->SetBinError(7,1.653038);
   VbbHcc_both_Z_jetmass_JEC_stack_8->SetBinError(8,1.504692);
   VbbHcc_both_Z_jetmass_JEC_stack_8->SetBinError(9,1.368845);
   VbbHcc_both_Z_jetmass_JEC_stack_8->SetBinError(10,1.152055);
   VbbHcc_both_Z_jetmass_JEC_stack_8->SetBinError(11,0.7903031);
   VbbHcc_both_Z_jetmass_JEC_stack_8->SetBinError(12,0.6247895);
   VbbHcc_both_Z_jetmass_JEC_stack_8->SetBinError(13,0.5588287);
   VbbHcc_both_Z_jetmass_JEC_stack_8->SetBinError(14,0.6844226);
   VbbHcc_both_Z_jetmass_JEC_stack_8->SetBinError(15,0.5588287);
   VbbHcc_both_Z_jetmass_JEC_stack_8->SetBinError(17,0.2794144);
   VbbHcc_both_Z_jetmass_JEC_stack_8->SetBinError(18,0.2794144);
   VbbHcc_both_Z_jetmass_JEC_stack_8->SetBinError(19,0.4839599);
   VbbHcc_both_Z_jetmass_JEC_stack_8->SetBinError(20,0.2794144);
   VbbHcc_both_Z_jetmass_JEC_stack_8->SetBinError(23,0.2794144);
   VbbHcc_both_Z_jetmass_JEC_stack_8->SetBinError(24,0.2794144);
   VbbHcc_both_Z_jetmass_JEC_stack_8->SetBinError(33,0.2794144);
   VbbHcc_both_Z_jetmass_JEC_stack_8->SetEntries(232);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#33ff99");
   VbbHcc_both_Z_jetmass_JEC_stack_8->SetFillColor(ci);
   VbbHcc_both_Z_jetmass_JEC_stack_8->GetXaxis()->SetTitle("b-jet mass (w/ JEC) [GeV]");
   VbbHcc_both_Z_jetmass_JEC_stack_8->GetXaxis()->SetRange(1,150);
   VbbHcc_both_Z_jetmass_JEC_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_jetmass_JEC_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_jetmass_JEC_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_jetmass_JEC_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_jetmass_JEC_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_jetmass_JEC_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_jetmass_JEC_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_jetmass_JEC_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_jetmass_JEC_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_jetmass_JEC_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_jetmass_JEC_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_jetmass_JEC_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_jetmass_JEC_stack_8->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_Z_jetmass_JEC_stack_8->Draw("HIST");
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
