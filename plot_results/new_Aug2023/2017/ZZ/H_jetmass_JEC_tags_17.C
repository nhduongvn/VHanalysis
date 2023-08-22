void H_jetmass_JEC_tags_17()
{
//=========Macro generated from canvas: H_jetmass_JEC_tags_17/H_jetmass_JEC_tags_17
//=========  (Tue Aug 22 09:20:57 2023) by ROOT version 6.14/09
   TCanvas *H_jetmass_JEC_tags_17 = new TCanvas("H_jetmass_JEC_tags_17", "H_jetmass_JEC_tags_17",0,0,600,600);
   gStyle->SetOptStat(0);
   H_jetmass_JEC_tags_17->SetHighLightColor(2);
   H_jetmass_JEC_tags_17->Range(-60,-1.046986,340,9.422871);
   H_jetmass_JEC_tags_17->SetFillColor(0);
   H_jetmass_JEC_tags_17->SetBorderMode(0);
   H_jetmass_JEC_tags_17->SetBorderSize(2);
   H_jetmass_JEC_tags_17->SetLeftMargin(0.15);
   H_jetmass_JEC_tags_17->SetFrameBorderMode(0);
   H_jetmass_JEC_tags_17->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_H_jetmass_JEC_stack_8 = new TH1D("VbbHcc_tags_H_jetmass_JEC_stack_8","",150,0,300);
   VbbHcc_tags_H_jetmass_JEC_stack_8->SetBinContent(4,3.008172);
   VbbHcc_tags_H_jetmass_JEC_stack_8->SetBinContent(5,6.626366);
   VbbHcc_tags_H_jetmass_JEC_stack_8->SetBinContent(6,7.977033);
   VbbHcc_tags_H_jetmass_JEC_stack_8->SetBinContent(7,5.670968);
   VbbHcc_tags_H_jetmass_JEC_stack_8->SetBinContent(8,6.905469);
   VbbHcc_tags_H_jetmass_JEC_stack_8->SetBinContent(9,2.647489);
   VbbHcc_tags_H_jetmass_JEC_stack_8->SetBinContent(10,1.631442);
   VbbHcc_tags_H_jetmass_JEC_stack_8->SetBinContent(11,2.164313);
   VbbHcc_tags_H_jetmass_JEC_stack_8->SetBinContent(12,0.7197302);
   VbbHcc_tags_H_jetmass_JEC_stack_8->SetBinContent(13,1.063629);
   VbbHcc_tags_H_jetmass_JEC_stack_8->SetBinContent(14,0.9269028);
   VbbHcc_tags_H_jetmass_JEC_stack_8->SetBinContent(15,0.7974349);
   VbbHcc_tags_H_jetmass_JEC_stack_8->SetBinContent(16,0.5139184);
   VbbHcc_tags_H_jetmass_JEC_stack_8->SetBinContent(17,0.2828563);
   VbbHcc_tags_H_jetmass_JEC_stack_8->SetBinContent(26,0.2175282);
   VbbHcc_tags_H_jetmass_JEC_stack_8->SetBinError(4,0.85533);
   VbbHcc_tags_H_jetmass_JEC_stack_8->SetBinError(5,1.249823);
   VbbHcc_tags_H_jetmass_JEC_stack_8->SetBinError(6,1.381928);
   VbbHcc_tags_H_jetmass_JEC_stack_8->SetBinError(7,1.164278);
   VbbHcc_tags_H_jetmass_JEC_stack_8->SetBinError(8,1.343075);
   VbbHcc_tags_H_jetmass_JEC_stack_8->SetBinError(9,0.8068522);
   VbbHcc_tags_H_jetmass_JEC_stack_8->SetBinError(10,0.6293326);
   VbbHcc_tags_H_jetmass_JEC_stack_8->SetBinError(11,0.69284);
   VbbHcc_tags_H_jetmass_JEC_stack_8->SetBinError(12,0.4215787);
   VbbHcc_tags_H_jetmass_JEC_stack_8->SetBinError(13,0.5156383);
   VbbHcc_tags_H_jetmass_JEC_stack_8->SetBinError(14,0.5176563);
   VbbHcc_tags_H_jetmass_JEC_stack_8->SetBinError(15,0.4676359);
   VbbHcc_tags_H_jetmass_JEC_stack_8->SetBinError(16,0.3637848);
   VbbHcc_tags_H_jetmass_JEC_stack_8->SetBinError(17,0.2828563);
   VbbHcc_tags_H_jetmass_JEC_stack_8->SetBinError(26,0.2175282);
   VbbHcc_tags_H_jetmass_JEC_stack_8->SetEntries(178);

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_jetmass_JEC_tags_17->Modified();
   H_jetmass_JEC_tags_17->cd();
   H_jetmass_JEC_tags_17->SetSelected(H_jetmass_JEC_tags_17);
}
