void H_jetmass_JEC_tags_18()
{
//=========Macro generated from canvas: H_jetmass_JEC_tags_18/H_jetmass_JEC_tags_18
//=========  (Thu Aug 10 12:23:44 2023) by ROOT version 6.14/09
   TCanvas *H_jetmass_JEC_tags_18 = new TCanvas("H_jetmass_JEC_tags_18", "H_jetmass_JEC_tags_18",0,0,600,600);
   gStyle->SetOptStat(0);
   H_jetmass_JEC_tags_18->SetHighLightColor(2);
   H_jetmass_JEC_tags_18->Range(-60,-0.3436572,340,3.092914);
   H_jetmass_JEC_tags_18->SetFillColor(0);
   H_jetmass_JEC_tags_18->SetBorderMode(0);
   H_jetmass_JEC_tags_18->SetBorderSize(2);
   H_jetmass_JEC_tags_18->SetLeftMargin(0.15);
   H_jetmass_JEC_tags_18->SetFrameBorderMode(0);
   H_jetmass_JEC_tags_18->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_H_jetmass_JEC_stack_7 = new TH1D("VbbHcc_tags_H_jetmass_JEC_stack_7","",150,0,300);
   VbbHcc_tags_H_jetmass_JEC_stack_7->SetBinContent(3,0.6010888);
   VbbHcc_tags_H_jetmass_JEC_stack_7->SetBinContent(4,1.994125);
   VbbHcc_tags_H_jetmass_JEC_stack_7->SetBinContent(5,1.601674);
   VbbHcc_tags_H_jetmass_JEC_stack_7->SetBinContent(6,0.7621756);
   VbbHcc_tags_H_jetmass_JEC_stack_7->SetBinContent(7,0.8836883);
   VbbHcc_tags_H_jetmass_JEC_stack_7->SetBinContent(8,1.351504);
   VbbHcc_tags_H_jetmass_JEC_stack_7->SetBinContent(9,0.1101045);
   VbbHcc_tags_H_jetmass_JEC_stack_7->SetBinContent(10,2.61834);
   VbbHcc_tags_H_jetmass_JEC_stack_7->SetBinContent(12,1.031113);
   VbbHcc_tags_H_jetmass_JEC_stack_7->SetBinContent(13,0.3805224);
   VbbHcc_tags_H_jetmass_JEC_stack_7->SetBinContent(14,0.8933559);
   VbbHcc_tags_H_jetmass_JEC_stack_7->SetBinContent(17,0.2694972);
   VbbHcc_tags_H_jetmass_JEC_stack_7->SetBinContent(18,0.3805224);
   VbbHcc_tags_H_jetmass_JEC_stack_7->SetBinContent(30,0.4019721);
   VbbHcc_tags_H_jetmass_JEC_stack_7->SetBinContent(43,0.4786962);
   VbbHcc_tags_H_jetmass_JEC_stack_7->SetBinContent(46,0.6750199);
   VbbHcc_tags_H_jetmass_JEC_stack_7->SetBinError(3,0.6010888);
   VbbHcc_tags_H_jetmass_JEC_stack_7->SetBinError(4,1.215711);
   VbbHcc_tags_H_jetmass_JEC_stack_7->SetBinError(5,0.8038565);
   VbbHcc_tags_H_jetmass_JEC_stack_7->SetBinError(6,0.5389401);
   VbbHcc_tags_H_jetmass_JEC_stack_7->SetBinError(7,0.6337571);
   VbbHcc_tags_H_jetmass_JEC_stack_7->SetBinError(8,0.7833416);
   VbbHcc_tags_H_jetmass_JEC_stack_7->SetBinError(9,0.1101045);
   VbbHcc_tags_H_jetmass_JEC_stack_7->SetBinError(10,1.086979);
   VbbHcc_tags_H_jetmass_JEC_stack_7->SetBinError(12,0.7291084);
   VbbHcc_tags_H_jetmass_JEC_stack_7->SetBinError(13,0.3805224);
   VbbHcc_tags_H_jetmass_JEC_stack_7->SetBinError(14,0.6389277);
   VbbHcc_tags_H_jetmass_JEC_stack_7->SetBinError(17,0.2694972);
   VbbHcc_tags_H_jetmass_JEC_stack_7->SetBinError(18,0.3805224);
   VbbHcc_tags_H_jetmass_JEC_stack_7->SetBinError(30,0.4019721);
   VbbHcc_tags_H_jetmass_JEC_stack_7->SetBinError(43,0.4786962);
   VbbHcc_tags_H_jetmass_JEC_stack_7->SetBinError(46,0.6750199);
   VbbHcc_tags_H_jetmass_JEC_stack_7->SetEntries(32);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#3399ff");
   VbbHcc_tags_H_jetmass_JEC_stack_7->SetFillColor(ci);
   VbbHcc_tags_H_jetmass_JEC_stack_7->GetXaxis()->SetTitle("c-jet mass (w/ JEC) [GeV]");
   VbbHcc_tags_H_jetmass_JEC_stack_7->GetXaxis()->SetRange(1,150);
   VbbHcc_tags_H_jetmass_JEC_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_jetmass_JEC_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_jetmass_JEC_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_jetmass_JEC_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_jetmass_JEC_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_jetmass_JEC_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_jetmass_JEC_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_jetmass_JEC_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_jetmass_JEC_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_jetmass_JEC_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_jetmass_JEC_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_jetmass_JEC_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_jetmass_JEC_stack_7->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_H_jetmass_JEC_stack_7->Draw("HIST");
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
