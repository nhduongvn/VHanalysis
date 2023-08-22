void H_jetmass_JEC_tags_16_logY()
{
//=========Macro generated from canvas: H_jetmass_JEC_tags_16/H_jetmass_JEC_tags_16
//=========  (Tue Aug 22 09:16:39 2023) by ROOT version 6.14/09
   TCanvas *H_jetmass_JEC_tags_16 = new TCanvas("H_jetmass_JEC_tags_16", "H_jetmass_JEC_tags_16",0,0,600,600);
   gStyle->SetOptStat(0);
   H_jetmass_JEC_tags_16->SetHighLightColor(2);
   H_jetmass_JEC_tags_16->Range(-60,-1.226264,340,1.431487);
   H_jetmass_JEC_tags_16->SetFillColor(0);
   H_jetmass_JEC_tags_16->SetBorderMode(0);
   H_jetmass_JEC_tags_16->SetBorderSize(2);
   H_jetmass_JEC_tags_16->SetLogy();
   H_jetmass_JEC_tags_16->SetLeftMargin(0.15);
   H_jetmass_JEC_tags_16->SetFrameBorderMode(0);
   H_jetmass_JEC_tags_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_H_jetmass_JEC_stack_8 = new TH1D("VbbHcc_tags_H_jetmass_JEC_stack_8","",150,0,300);
   VbbHcc_tags_H_jetmass_JEC_stack_8->SetBinContent(3,0.6311788);
   VbbHcc_tags_H_jetmass_JEC_stack_8->SetBinContent(4,4.255026);
   VbbHcc_tags_H_jetmass_JEC_stack_8->SetBinContent(5,4.704161);
   VbbHcc_tags_H_jetmass_JEC_stack_8->SetBinContent(6,7.729699);
   VbbHcc_tags_H_jetmass_JEC_stack_8->SetBinContent(7,4.439308);
   VbbHcc_tags_H_jetmass_JEC_stack_8->SetBinContent(8,1.651688);
   VbbHcc_tags_H_jetmass_JEC_stack_8->SetBinContent(9,1.810375);
   VbbHcc_tags_H_jetmass_JEC_stack_8->SetBinContent(10,2.405233);
   VbbHcc_tags_H_jetmass_JEC_stack_8->SetBinContent(11,0.4324883);
   VbbHcc_tags_H_jetmass_JEC_stack_8->SetBinContent(12,1.303485);
   VbbHcc_tags_H_jetmass_JEC_stack_8->SetBinContent(13,0.4150033);
   VbbHcc_tags_H_jetmass_JEC_stack_8->SetBinContent(14,1.128055);
   VbbHcc_tags_H_jetmass_JEC_stack_8->SetBinContent(15,0.2190491);
   VbbHcc_tags_H_jetmass_JEC_stack_8->SetBinContent(19,0.2387884);
   VbbHcc_tags_H_jetmass_JEC_stack_8->SetBinContent(20,0.2385445);
   VbbHcc_tags_H_jetmass_JEC_stack_8->SetBinContent(51,0.2289552);
   VbbHcc_tags_H_jetmass_JEC_stack_8->SetBinError(3,0.3650225);
   VbbHcc_tags_H_jetmass_JEC_stack_8->SetBinError(4,0.938904);
   VbbHcc_tags_H_jetmass_JEC_stack_8->SetBinError(5,1.014338);
   VbbHcc_tags_H_jetmass_JEC_stack_8->SetBinError(6,1.236732);
   VbbHcc_tags_H_jetmass_JEC_stack_8->SetBinError(7,0.9567206);
   VbbHcc_tags_H_jetmass_JEC_stack_8->SetBinError(8,0.573698);
   VbbHcc_tags_H_jetmass_JEC_stack_8->SetBinError(9,0.6113403);
   VbbHcc_tags_H_jetmass_JEC_stack_8->SetBinError(10,0.7269894);
   VbbHcc_tags_H_jetmass_JEC_stack_8->SetBinError(11,0.3060339);
   VbbHcc_tags_H_jetmass_JEC_stack_8->SetBinError(12,0.5330446);
   VbbHcc_tags_H_jetmass_JEC_stack_8->SetBinError(13,0.2966439);
   VbbHcc_tags_H_jetmass_JEC_stack_8->SetBinError(14,0.5049808);
   VbbHcc_tags_H_jetmass_JEC_stack_8->SetBinError(15,0.2190491);
   VbbHcc_tags_H_jetmass_JEC_stack_8->SetBinError(19,0.2387884);
   VbbHcc_tags_H_jetmass_JEC_stack_8->SetBinError(20,0.2385445);
   VbbHcc_tags_H_jetmass_JEC_stack_8->SetBinError(51,0.2289552);
   VbbHcc_tags_H_jetmass_JEC_stack_8->SetEntries(156);

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
