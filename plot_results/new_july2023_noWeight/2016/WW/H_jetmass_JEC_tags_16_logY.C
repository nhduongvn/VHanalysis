void H_jetmass_JEC_tags_16_logY()
{
//=========Macro generated from canvas: H_jetmass_JEC_tags_16/H_jetmass_JEC_tags_16
//=========  (Thu Aug 10 12:31:40 2023) by ROOT version 6.14/09
   TCanvas *H_jetmass_JEC_tags_16 = new TCanvas("H_jetmass_JEC_tags_16", "H_jetmass_JEC_tags_16",0,0,600,600);
   gStyle->SetOptStat(0);
   H_jetmass_JEC_tags_16->SetHighLightColor(2);
   H_jetmass_JEC_tags_16->Range(-60,-1.304692,340,0.01493274);
   H_jetmass_JEC_tags_16->SetFillColor(0);
   H_jetmass_JEC_tags_16->SetBorderMode(0);
   H_jetmass_JEC_tags_16->SetBorderSize(2);
   H_jetmass_JEC_tags_16->SetLogy();
   H_jetmass_JEC_tags_16->SetLeftMargin(0.15);
   H_jetmass_JEC_tags_16->SetFrameBorderMode(0);
   H_jetmass_JEC_tags_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_H_jetmass_JEC_stack_6 = new TH1D("VbbHcc_tags_H_jetmass_JEC_stack_6","",150,0,300);
   VbbHcc_tags_H_jetmass_JEC_stack_6->SetBinContent(3,0.1343693);
   VbbHcc_tags_H_jetmass_JEC_stack_6->SetBinContent(5,0.4031079);
   VbbHcc_tags_H_jetmass_JEC_stack_6->SetBinContent(6,0.1343693);
   VbbHcc_tags_H_jetmass_JEC_stack_6->SetBinContent(7,0.2687386);
   VbbHcc_tags_H_jetmass_JEC_stack_6->SetBinContent(9,0.1343693);
   VbbHcc_tags_H_jetmass_JEC_stack_6->SetBinContent(14,0.1343693);
   VbbHcc_tags_H_jetmass_JEC_stack_6->SetBinContent(15,0.1343693);
   VbbHcc_tags_H_jetmass_JEC_stack_6->SetBinContent(16,0.1343693);
   VbbHcc_tags_H_jetmass_JEC_stack_6->SetBinError(3,0.1343693);
   VbbHcc_tags_H_jetmass_JEC_stack_6->SetBinError(5,0.2327345);
   VbbHcc_tags_H_jetmass_JEC_stack_6->SetBinError(6,0.1343693);
   VbbHcc_tags_H_jetmass_JEC_stack_6->SetBinError(7,0.1900269);
   VbbHcc_tags_H_jetmass_JEC_stack_6->SetBinError(9,0.1343693);
   VbbHcc_tags_H_jetmass_JEC_stack_6->SetBinError(14,0.1343693);
   VbbHcc_tags_H_jetmass_JEC_stack_6->SetBinError(15,0.1343693);
   VbbHcc_tags_H_jetmass_JEC_stack_6->SetBinError(16,0.1343693);
   VbbHcc_tags_H_jetmass_JEC_stack_6->SetEntries(11);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#9933ff");
   VbbHcc_tags_H_jetmass_JEC_stack_6->SetFillColor(ci);
   VbbHcc_tags_H_jetmass_JEC_stack_6->GetXaxis()->SetTitle("c-jet mass (w/ JEC) [GeV]");
   VbbHcc_tags_H_jetmass_JEC_stack_6->GetXaxis()->SetRange(1,150);
   VbbHcc_tags_H_jetmass_JEC_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_jetmass_JEC_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_jetmass_JEC_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_jetmass_JEC_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_jetmass_JEC_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_jetmass_JEC_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_jetmass_JEC_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_jetmass_JEC_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_jetmass_JEC_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_jetmass_JEC_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_jetmass_JEC_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_jetmass_JEC_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_jetmass_JEC_stack_6->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_H_jetmass_JEC_stack_6->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_jetmass_JEC_tags_16->Modified();
   H_jetmass_JEC_tags_16->cd();
   H_jetmass_JEC_tags_16->SetSelected(H_jetmass_JEC_tags_16);
}
