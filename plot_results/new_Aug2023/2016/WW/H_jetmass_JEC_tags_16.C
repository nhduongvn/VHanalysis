void H_jetmass_JEC_tags_16()
{
//=========Macro generated from canvas: H_jetmass_JEC_tags_16/H_jetmass_JEC_tags_16
//=========  (Tue Aug 22 09:20:56 2023) by ROOT version 6.14/09
   TCanvas *H_jetmass_JEC_tags_16 = new TCanvas("H_jetmass_JEC_tags_16", "H_jetmass_JEC_tags_16",0,0,600,600);
   gStyle->SetOptStat(0);
   H_jetmass_JEC_tags_16->SetHighLightColor(2);
   H_jetmass_JEC_tags_16->Range(-60,-0.03211476,340,0.2890329);
   H_jetmass_JEC_tags_16->SetFillColor(0);
   H_jetmass_JEC_tags_16->SetBorderMode(0);
   H_jetmass_JEC_tags_16->SetBorderSize(2);
   H_jetmass_JEC_tags_16->SetLeftMargin(0.15);
   H_jetmass_JEC_tags_16->SetFrameBorderMode(0);
   H_jetmass_JEC_tags_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_H_jetmass_JEC_stack_6 = new TH1D("VbbHcc_tags_H_jetmass_JEC_stack_6","",150,0,300);
   VbbHcc_tags_H_jetmass_JEC_stack_6->SetBinContent(3,0.1142782);
   VbbHcc_tags_H_jetmass_JEC_stack_6->SetBinContent(5,0.1953458);
   VbbHcc_tags_H_jetmass_JEC_stack_6->SetBinContent(6,0.1243737);
   VbbHcc_tags_H_jetmass_JEC_stack_6->SetBinContent(7,0.2446839);
   VbbHcc_tags_H_jetmass_JEC_stack_6->SetBinContent(9,0.1234178);
   VbbHcc_tags_H_jetmass_JEC_stack_6->SetBinContent(14,0.1297649);
   VbbHcc_tags_H_jetmass_JEC_stack_6->SetBinContent(15,0.1335451);
   VbbHcc_tags_H_jetmass_JEC_stack_6->SetBinContent(16,0.1195687);
   VbbHcc_tags_H_jetmass_JEC_stack_6->SetBinError(3,0.1142782);
   VbbHcc_tags_H_jetmass_JEC_stack_6->SetBinError(5,0.1408959);
   VbbHcc_tags_H_jetmass_JEC_stack_6->SetBinError(6,0.1243737);
   VbbHcc_tags_H_jetmass_JEC_stack_6->SetBinError(7,0.1733081);
   VbbHcc_tags_H_jetmass_JEC_stack_6->SetBinError(9,0.1234178);
   VbbHcc_tags_H_jetmass_JEC_stack_6->SetBinError(14,0.1297649);
   VbbHcc_tags_H_jetmass_JEC_stack_6->SetBinError(15,0.1335451);
   VbbHcc_tags_H_jetmass_JEC_stack_6->SetBinError(16,0.1195687);
   VbbHcc_tags_H_jetmass_JEC_stack_6->SetEntries(10);

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
