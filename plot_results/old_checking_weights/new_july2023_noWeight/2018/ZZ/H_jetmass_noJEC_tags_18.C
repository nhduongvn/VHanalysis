void H_jetmass_noJEC_tags_18()
{
//=========Macro generated from canvas: H_jetmass_noJEC_tags_18/H_jetmass_noJEC_tags_18
//=========  (Thu Aug  3 12:23:47 2023) by ROOT version 6.14/09
   TCanvas *H_jetmass_noJEC_tags_18 = new TCanvas("H_jetmass_noJEC_tags_18", "H_jetmass_noJEC_tags_18",0,0,600,600);
   gStyle->SetOptStat(0);
   H_jetmass_noJEC_tags_18->SetHighLightColor(2);
   H_jetmass_noJEC_tags_18->Range(-60,-1.503599,340,13.53239);
   H_jetmass_noJEC_tags_18->SetFillColor(0);
   H_jetmass_noJEC_tags_18->SetBorderMode(0);
   H_jetmass_noJEC_tags_18->SetBorderSize(2);
   H_jetmass_noJEC_tags_18->SetLeftMargin(0.15);
   H_jetmass_noJEC_tags_18->SetFrameBorderMode(0);
   H_jetmass_noJEC_tags_18->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_H_jetmass_noJEC_stack_8 = new TH1D("VbbHcc_tags_H_jetmass_noJEC_stack_8","",150,0,300);
   VbbHcc_tags_H_jetmass_noJEC_stack_8->SetBinContent(3,0.5588287);
   VbbHcc_tags_H_jetmass_noJEC_stack_8->SetBinContent(4,5.867701);
   VbbHcc_tags_H_jetmass_noJEC_stack_8->SetBinContent(5,10.61775);
   VbbHcc_tags_H_jetmass_noJEC_stack_8->SetBinContent(6,11.45599);
   VbbHcc_tags_H_jetmass_noJEC_stack_8->SetBinContent(7,11.17657);
   VbbHcc_tags_H_jetmass_noJEC_stack_8->SetBinContent(8,7.544187);
   VbbHcc_tags_H_jetmass_noJEC_stack_8->SetBinContent(9,4.191215);
   VbbHcc_tags_H_jetmass_noJEC_stack_8->SetBinContent(10,3.911801);
   VbbHcc_tags_H_jetmass_noJEC_stack_8->SetBinContent(11,2.514729);
   VbbHcc_tags_H_jetmass_noJEC_stack_8->SetBinContent(12,2.235315);
   VbbHcc_tags_H_jetmass_noJEC_stack_8->SetBinContent(13,0.8382431);
   VbbHcc_tags_H_jetmass_noJEC_stack_8->SetBinContent(14,0.2794144);
   VbbHcc_tags_H_jetmass_noJEC_stack_8->SetBinContent(15,1.117657);
   VbbHcc_tags_H_jetmass_noJEC_stack_8->SetBinContent(17,0.2794144);
   VbbHcc_tags_H_jetmass_noJEC_stack_8->SetBinContent(19,0.5588287);
   VbbHcc_tags_H_jetmass_noJEC_stack_8->SetBinContent(21,0.2794144);
   VbbHcc_tags_H_jetmass_noJEC_stack_8->SetBinContent(24,0.2794144);
   VbbHcc_tags_H_jetmass_noJEC_stack_8->SetBinContent(28,0.2794144);
   VbbHcc_tags_H_jetmass_noJEC_stack_8->SetBinContent(29,0.2794144);
   VbbHcc_tags_H_jetmass_noJEC_stack_8->SetBinError(3,0.3951516);
   VbbHcc_tags_H_jetmass_noJEC_stack_8->SetBinError(4,1.280437);
   VbbHcc_tags_H_jetmass_noJEC_stack_8->SetBinError(5,1.722426);
   VbbHcc_tags_H_jetmass_noJEC_stack_8->SetBinError(6,1.789125);
   VbbHcc_tags_H_jetmass_noJEC_stack_8->SetBinError(7,1.767172);
   VbbHcc_tags_H_jetmass_noJEC_stack_8->SetBinError(8,1.45188);
   VbbHcc_tags_H_jetmass_noJEC_stack_8->SetBinError(9,1.082167);
   VbbHcc_tags_H_jetmass_noJEC_stack_8->SetBinError(10,1.045473);
   VbbHcc_tags_H_jetmass_noJEC_stack_8->SetBinError(11,0.8382431);
   VbbHcc_tags_H_jetmass_noJEC_stack_8->SetBinError(12,0.7903031);
   VbbHcc_tags_H_jetmass_noJEC_stack_8->SetBinError(13,0.4839599);
   VbbHcc_tags_H_jetmass_noJEC_stack_8->SetBinError(14,0.2794144);
   VbbHcc_tags_H_jetmass_noJEC_stack_8->SetBinError(15,0.5588287);
   VbbHcc_tags_H_jetmass_noJEC_stack_8->SetBinError(17,0.2794144);
   VbbHcc_tags_H_jetmass_noJEC_stack_8->SetBinError(19,0.3951516);
   VbbHcc_tags_H_jetmass_noJEC_stack_8->SetBinError(21,0.2794144);
   VbbHcc_tags_H_jetmass_noJEC_stack_8->SetBinError(24,0.2794144);
   VbbHcc_tags_H_jetmass_noJEC_stack_8->SetBinError(28,0.2794144);
   VbbHcc_tags_H_jetmass_noJEC_stack_8->SetBinError(29,0.2794144);
   VbbHcc_tags_H_jetmass_noJEC_stack_8->SetEntries(230);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#33ff99");
   VbbHcc_tags_H_jetmass_noJEC_stack_8->SetFillColor(ci);
   VbbHcc_tags_H_jetmass_noJEC_stack_8->GetXaxis()->SetTitle("c-jet mass [GeV]");
   VbbHcc_tags_H_jetmass_noJEC_stack_8->GetXaxis()->SetRange(1,150);
   VbbHcc_tags_H_jetmass_noJEC_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_jetmass_noJEC_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_jetmass_noJEC_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_jetmass_noJEC_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_jetmass_noJEC_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_jetmass_noJEC_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_jetmass_noJEC_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_jetmass_noJEC_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_jetmass_noJEC_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_jetmass_noJEC_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_jetmass_noJEC_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_jetmass_noJEC_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_jetmass_noJEC_stack_8->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_H_jetmass_noJEC_stack_8->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_jetmass_noJEC_tags_18->Modified();
   H_jetmass_noJEC_tags_18->cd();
   H_jetmass_noJEC_tags_18->SetSelected(H_jetmass_noJEC_tags_18);
}
