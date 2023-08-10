void H_jetmass_noJEC_tags_18_logY()
{
//=========Macro generated from canvas: H_jetmass_noJEC_tags_18/H_jetmass_noJEC_tags_18
//=========  (Thu Aug 10 12:20:23 2023) by ROOT version 6.14/09
   TCanvas *H_jetmass_noJEC_tags_18 = new TCanvas("H_jetmass_noJEC_tags_18", "H_jetmass_noJEC_tags_18",0,0,600,600);
   gStyle->SetOptStat(0);
   H_jetmass_noJEC_tags_18->SetHighLightColor(2);
   H_jetmass_noJEC_tags_18->Range(-60,-1.227683,340,1.681965);
   H_jetmass_noJEC_tags_18->SetFillColor(0);
   H_jetmass_noJEC_tags_18->SetBorderMode(0);
   H_jetmass_noJEC_tags_18->SetBorderSize(2);
   H_jetmass_noJEC_tags_18->SetLogy();
   H_jetmass_noJEC_tags_18->SetLeftMargin(0.15);
   H_jetmass_noJEC_tags_18->SetFrameBorderMode(0);
   H_jetmass_noJEC_tags_18->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_H_jetmass_noJEC_stack_8 = new TH1D("VbbHcc_tags_H_jetmass_noJEC_stack_8","",150,0,300);
   VbbHcc_tags_H_jetmass_noJEC_stack_8->SetBinContent(3,0.650994);
   VbbHcc_tags_H_jetmass_noJEC_stack_8->SetBinContent(4,7.198946);
   VbbHcc_tags_H_jetmass_noJEC_stack_8->SetBinContent(5,12.91363);
   VbbHcc_tags_H_jetmass_noJEC_stack_8->SetBinContent(6,12.98527);
   VbbHcc_tags_H_jetmass_noJEC_stack_8->SetBinContent(7,12.16028);
   VbbHcc_tags_H_jetmass_noJEC_stack_8->SetBinContent(8,8.275145);
   VbbHcc_tags_H_jetmass_noJEC_stack_8->SetBinContent(9,4.387097);
   VbbHcc_tags_H_jetmass_noJEC_stack_8->SetBinContent(10,4.023198);
   VbbHcc_tags_H_jetmass_noJEC_stack_8->SetBinContent(11,2.870397);
   VbbHcc_tags_H_jetmass_noJEC_stack_8->SetBinContent(12,2.380353);
   VbbHcc_tags_H_jetmass_noJEC_stack_8->SetBinContent(13,1.035423);
   VbbHcc_tags_H_jetmass_noJEC_stack_8->SetBinContent(14,0.4058303);
   VbbHcc_tags_H_jetmass_noJEC_stack_8->SetBinContent(15,1.189186);
   VbbHcc_tags_H_jetmass_noJEC_stack_8->SetBinContent(17,0.2313727);
   VbbHcc_tags_H_jetmass_noJEC_stack_8->SetBinContent(19,0.5944977);
   VbbHcc_tags_H_jetmass_noJEC_stack_8->SetBinContent(21,0.2479135);
   VbbHcc_tags_H_jetmass_noJEC_stack_8->SetBinContent(24,0.3915493);
   VbbHcc_tags_H_jetmass_noJEC_stack_8->SetBinContent(28,0.2830566);
   VbbHcc_tags_H_jetmass_noJEC_stack_8->SetBinContent(29,0.3010719);
   VbbHcc_tags_H_jetmass_noJEC_stack_8->SetBinError(3,0.4615002);
   VbbHcc_tags_H_jetmass_noJEC_stack_8->SetBinError(4,1.590989);
   VbbHcc_tags_H_jetmass_noJEC_stack_8->SetBinError(5,2.143844);
   VbbHcc_tags_H_jetmass_noJEC_stack_8->SetBinError(6,2.061117);
   VbbHcc_tags_H_jetmass_noJEC_stack_8->SetBinError(7,1.965565);
   VbbHcc_tags_H_jetmass_noJEC_stack_8->SetBinError(8,1.63179);
   VbbHcc_tags_H_jetmass_noJEC_stack_8->SetBinError(9,1.190919);
   VbbHcc_tags_H_jetmass_noJEC_stack_8->SetBinError(10,1.10344);
   VbbHcc_tags_H_jetmass_noJEC_stack_8->SetBinError(11,0.9698774);
   VbbHcc_tags_H_jetmass_noJEC_stack_8->SetBinError(12,0.8692424);
   VbbHcc_tags_H_jetmass_noJEC_stack_8->SetBinError(13,0.602591);
   VbbHcc_tags_H_jetmass_noJEC_stack_8->SetBinError(14,0.4058303);
   VbbHcc_tags_H_jetmass_noJEC_stack_8->SetBinError(15,0.6126409);
   VbbHcc_tags_H_jetmass_noJEC_stack_8->SetBinError(17,0.2313727);
   VbbHcc_tags_H_jetmass_noJEC_stack_8->SetBinError(19,0.4203938);
   VbbHcc_tags_H_jetmass_noJEC_stack_8->SetBinError(21,0.2479135);
   VbbHcc_tags_H_jetmass_noJEC_stack_8->SetBinError(24,0.3915493);
   VbbHcc_tags_H_jetmass_noJEC_stack_8->SetBinError(28,0.2830566);
   VbbHcc_tags_H_jetmass_noJEC_stack_8->SetBinError(29,0.3010719);
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
