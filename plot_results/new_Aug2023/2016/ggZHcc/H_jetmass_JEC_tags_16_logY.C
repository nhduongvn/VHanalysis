void H_jetmass_JEC_tags_16_logY()
{
//=========Macro generated from canvas: H_jetmass_JEC_tags_16/H_jetmass_JEC_tags_16
//=========  (Tue Aug 22 09:16:39 2023) by ROOT version 6.14/09
   TCanvas *H_jetmass_JEC_tags_16 = new TCanvas("H_jetmass_JEC_tags_16", "H_jetmass_JEC_tags_16",0,0,600,600);
   gStyle->SetOptStat(0);
   H_jetmass_JEC_tags_16->SetHighLightColor(2);
   H_jetmass_JEC_tags_16->Range(-60,-4.220162,340,-1.64968);
   H_jetmass_JEC_tags_16->SetFillColor(0);
   H_jetmass_JEC_tags_16->SetBorderMode(0);
   H_jetmass_JEC_tags_16->SetBorderSize(2);
   H_jetmass_JEC_tags_16->SetLogy();
   H_jetmass_JEC_tags_16->SetLeftMargin(0.15);
   H_jetmass_JEC_tags_16->SetFrameBorderMode(0);
   H_jetmass_JEC_tags_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_H_jetmass_JEC_stack_12 = new TH1D("VbbHcc_tags_H_jetmass_JEC_stack_12","",150,0,300);
   VbbHcc_tags_H_jetmass_JEC_stack_12->SetBinContent(3,0.001531371);
   VbbHcc_tags_H_jetmass_JEC_stack_12->SetBinContent(4,0.002898178);
   VbbHcc_tags_H_jetmass_JEC_stack_12->SetBinContent(5,0.005470259);
   VbbHcc_tags_H_jetmass_JEC_stack_12->SetBinContent(6,0.006542182);
   VbbHcc_tags_H_jetmass_JEC_stack_12->SetBinContent(7,0.005866686);
   VbbHcc_tags_H_jetmass_JEC_stack_12->SetBinContent(8,0.002580706);
   VbbHcc_tags_H_jetmass_JEC_stack_12->SetBinContent(9,0.003471927);
   VbbHcc_tags_H_jetmass_JEC_stack_12->SetBinContent(10,0.00113883);
   VbbHcc_tags_H_jetmass_JEC_stack_12->SetBinContent(11,0.001969902);
   VbbHcc_tags_H_jetmass_JEC_stack_12->SetBinContent(13,0.002083985);
   VbbHcc_tags_H_jetmass_JEC_stack_12->SetBinContent(14,0.000280686);
   VbbHcc_tags_H_jetmass_JEC_stack_12->SetBinContent(15,0.000217729);
   VbbHcc_tags_H_jetmass_JEC_stack_12->SetBinContent(17,0.0003018979);
   VbbHcc_tags_H_jetmass_JEC_stack_12->SetBinContent(18,0.0003106139);
   VbbHcc_tags_H_jetmass_JEC_stack_12->SetBinContent(21,0.0003214624);
   VbbHcc_tags_H_jetmass_JEC_stack_12->SetBinContent(28,0.0003371612);
   VbbHcc_tags_H_jetmass_JEC_stack_12->SetBinContent(58,0.0003051279);
   VbbHcc_tags_H_jetmass_JEC_stack_12->SetBinError(3,0.0006360449);
   VbbHcc_tags_H_jetmass_JEC_stack_12->SetBinError(4,0.0009175627);
   VbbHcc_tags_H_jetmass_JEC_stack_12->SetBinError(5,0.00122501);
   VbbHcc_tags_H_jetmass_JEC_stack_12->SetBinError(6,0.001353386);
   VbbHcc_tags_H_jetmass_JEC_stack_12->SetBinError(7,0.001286672);
   VbbHcc_tags_H_jetmass_JEC_stack_12->SetBinError(8,0.0008641336);
   VbbHcc_tags_H_jetmass_JEC_stack_12->SetBinError(9,0.001006389);
   VbbHcc_tags_H_jetmass_JEC_stack_12->SetBinError(10,0.0005695405);
   VbbHcc_tags_H_jetmass_JEC_stack_12->SetBinError(11,0.0007455811);
   VbbHcc_tags_H_jetmass_JEC_stack_12->SetBinError(13,0.0007884869);
   VbbHcc_tags_H_jetmass_JEC_stack_12->SetBinError(14,0.000280686);
   VbbHcc_tags_H_jetmass_JEC_stack_12->SetBinError(15,0.000217729);
   VbbHcc_tags_H_jetmass_JEC_stack_12->SetBinError(17,0.0003018979);
   VbbHcc_tags_H_jetmass_JEC_stack_12->SetBinError(18,0.0003106139);
   VbbHcc_tags_H_jetmass_JEC_stack_12->SetBinError(21,0.0003214624);
   VbbHcc_tags_H_jetmass_JEC_stack_12->SetBinError(28,0.0003371612);
   VbbHcc_tags_H_jetmass_JEC_stack_12->SetBinError(58,0.0003051279);
   VbbHcc_tags_H_jetmass_JEC_stack_12->SetEntries(127);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#00cc00");
   VbbHcc_tags_H_jetmass_JEC_stack_12->SetFillColor(ci);
   VbbHcc_tags_H_jetmass_JEC_stack_12->GetXaxis()->SetTitle("c-jet mass (w/ JEC) [GeV]");
   VbbHcc_tags_H_jetmass_JEC_stack_12->GetXaxis()->SetRange(1,150);
   VbbHcc_tags_H_jetmass_JEC_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_jetmass_JEC_stack_12->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_jetmass_JEC_stack_12->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_jetmass_JEC_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_jetmass_JEC_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_jetmass_JEC_stack_12->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_jetmass_JEC_stack_12->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_jetmass_JEC_stack_12->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_jetmass_JEC_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_jetmass_JEC_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_jetmass_JEC_stack_12->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_jetmass_JEC_stack_12->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_jetmass_JEC_stack_12->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_H_jetmass_JEC_stack_12->Draw("HIST");
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
