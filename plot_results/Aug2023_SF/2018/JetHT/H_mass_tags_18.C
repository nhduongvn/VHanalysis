#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_mass_tags_18()
{
//=========Macro generated from canvas: H_mass_tags_18/H_mass_tags_18
//=========  (Tue Sep  5 10:48:05 2023) by ROOT version 6.28/04
   TCanvas *H_mass_tags_18 = new TCanvas("H_mass_tags_18", "H_mass_tags_18",0,0,600,600);
   gStyle->SetOptStat(0);
   H_mass_tags_18->SetHighLightColor(2);
   H_mass_tags_18->Range(-80,-1046.85,453.3333,9421.65);
   H_mass_tags_18->SetFillColor(0);
   H_mass_tags_18->SetBorderMode(0);
   H_mass_tags_18->SetBorderSize(2);
   H_mass_tags_18->SetLeftMargin(0.15);
   H_mass_tags_18->SetFrameBorderMode(0);
   H_mass_tags_18->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_H_mass__18 = new TH1D("VbbHcc_tags_H_mass__18","",40,0,400);
   VbbHcc_tags_H_mass__18->SetBinContent(3,124);
   VbbHcc_tags_H_mass__18->SetBinContent(4,1785);
   VbbHcc_tags_H_mass__18->SetBinContent(5,4645);
   VbbHcc_tags_H_mass__18->SetBinContent(6,7017);
   VbbHcc_tags_H_mass__18->SetBinContent(7,7942);
   VbbHcc_tags_H_mass__18->SetBinContent(8,7976);
   VbbHcc_tags_H_mass__18->SetBinContent(9,7841);
   VbbHcc_tags_H_mass__18->SetBinContent(10,7304);
   VbbHcc_tags_H_mass__18->SetBinContent(11,7168);
   VbbHcc_tags_H_mass__18->SetBinContent(12,6876);
   VbbHcc_tags_H_mass__18->SetBinContent(13,6560);
   VbbHcc_tags_H_mass__18->SetBinContent(14,6361);
   VbbHcc_tags_H_mass__18->SetBinContent(15,6129);
   VbbHcc_tags_H_mass__18->SetBinContent(16,6098);
   VbbHcc_tags_H_mass__18->SetBinContent(17,5677);
   VbbHcc_tags_H_mass__18->SetBinContent(18,5674);
   VbbHcc_tags_H_mass__18->SetBinContent(19,5345);
   VbbHcc_tags_H_mass__18->SetBinContent(20,5009);
   VbbHcc_tags_H_mass__18->SetBinContent(21,4924);
   VbbHcc_tags_H_mass__18->SetBinContent(22,4704);
   VbbHcc_tags_H_mass__18->SetBinContent(23,4687);
   VbbHcc_tags_H_mass__18->SetBinContent(24,4392);
   VbbHcc_tags_H_mass__18->SetBinContent(25,4210);
   VbbHcc_tags_H_mass__18->SetBinContent(26,4274);
   VbbHcc_tags_H_mass__18->SetBinContent(27,4006);
   VbbHcc_tags_H_mass__18->SetBinContent(28,3968);
   VbbHcc_tags_H_mass__18->SetBinContent(29,3935);
   VbbHcc_tags_H_mass__18->SetBinContent(30,3766);
   VbbHcc_tags_H_mass__18->SetBinContent(31,3665);
   VbbHcc_tags_H_mass__18->SetBinContent(32,3684);
   VbbHcc_tags_H_mass__18->SetBinContent(33,3593);
   VbbHcc_tags_H_mass__18->SetBinContent(34,3564);
   VbbHcc_tags_H_mass__18->SetBinContent(35,3489);
   VbbHcc_tags_H_mass__18->SetBinContent(36,3379);
   VbbHcc_tags_H_mass__18->SetBinContent(37,3262);
   VbbHcc_tags_H_mass__18->SetBinContent(38,3224);
   VbbHcc_tags_H_mass__18->SetBinContent(39,3278);
   VbbHcc_tags_H_mass__18->SetBinContent(40,3080);
   VbbHcc_tags_H_mass__18->SetBinContent(41,124959);
   VbbHcc_tags_H_mass__18->SetEntries(307574);
   VbbHcc_tags_H_mass__18->GetXaxis()->SetTitle("M_{H} [GeV]");
   VbbHcc_tags_H_mass__18->GetXaxis()->SetRange(1,40);
   VbbHcc_tags_H_mass__18->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_mass__18->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_H_mass__18->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_mass__18->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_mass__18->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_mass__18->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_mass__18->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_H_mass__18->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_H_mass__18->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_mass_tags_18->Modified();
   H_mass_tags_18->cd();
   H_mass_tags_18->SetSelected(H_mass_tags_18);
}
