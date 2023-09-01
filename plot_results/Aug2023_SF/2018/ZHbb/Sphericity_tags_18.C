#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Sphericity_tags_18()
{
//=========Macro generated from canvas: Sphericity_tags_18/Sphericity_tags_18
//=========  (Fri Sep  1 13:34:45 2023) by ROOT version 6.28/04
   TCanvas *Sphericity_tags_18 = new TCanvas("Sphericity_tags_18", "Sphericity_tags_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_tags_18->SetHighLightColor(2);
   Sphericity_tags_18->Range(-0.2,-3.528109,1.133333,31.75298);
   Sphericity_tags_18->SetFillColor(0);
   Sphericity_tags_18->SetBorderMode(0);
   Sphericity_tags_18->SetBorderSize(2);
   Sphericity_tags_18->SetLeftMargin(0.15);
   Sphericity_tags_18->SetFrameBorderMode(0);
   Sphericity_tags_18->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_Sphericity__222 = new TH1D("VbbHcc_tags_Sphericity__222","",25,0,1);
   VbbHcc_tags_Sphericity__222->SetBinContent(1,26.88083);
   VbbHcc_tags_Sphericity__222->SetBinContent(2,22.06614);
   VbbHcc_tags_Sphericity__222->SetBinContent(3,11.95804);
   VbbHcc_tags_Sphericity__222->SetBinContent(4,8.531049);
   VbbHcc_tags_Sphericity__222->SetBinContent(5,5.952359);
   VbbHcc_tags_Sphericity__222->SetBinContent(6,3.217828);
   VbbHcc_tags_Sphericity__222->SetBinContent(7,1.221392);
   VbbHcc_tags_Sphericity__222->SetBinContent(8,0.6678631);
   VbbHcc_tags_Sphericity__222->SetBinContent(9,0.3247034);
   VbbHcc_tags_Sphericity__222->SetBinContent(10,0.2697212);
   VbbHcc_tags_Sphericity__222->SetBinContent(11,0.1835076);
   VbbHcc_tags_Sphericity__222->SetBinContent(12,0.1606074);
   VbbHcc_tags_Sphericity__222->SetBinContent(13,0.09660397);
   VbbHcc_tags_Sphericity__222->SetBinContent(14,0.104402);
   VbbHcc_tags_Sphericity__222->SetBinContent(15,0.05949383);
   VbbHcc_tags_Sphericity__222->SetBinContent(16,0.04243537);
   VbbHcc_tags_Sphericity__222->SetBinContent(17,0.02236889);
   VbbHcc_tags_Sphericity__222->SetBinContent(18,0.01494674);
   VbbHcc_tags_Sphericity__222->SetBinContent(19,0.02702868);
   VbbHcc_tags_Sphericity__222->SetBinContent(20,0.009147466);
   VbbHcc_tags_Sphericity__222->SetBinContent(21,0.002853897);
   VbbHcc_tags_Sphericity__222->SetBinError(1,0.3380787);
   VbbHcc_tags_Sphericity__222->SetBinError(2,0.3573404);
   VbbHcc_tags_Sphericity__222->SetBinError(3,0.2207869);
   VbbHcc_tags_Sphericity__222->SetBinError(4,0.1907067);
   VbbHcc_tags_Sphericity__222->SetBinError(5,0.1601046);
   VbbHcc_tags_Sphericity__222->SetBinError(6,0.1107974);
   VbbHcc_tags_Sphericity__222->SetBinError(7,0.06910714);
   VbbHcc_tags_Sphericity__222->SetBinError(8,0.08297004);
   VbbHcc_tags_Sphericity__222->SetBinError(9,0.03403808);
   VbbHcc_tags_Sphericity__222->SetBinError(10,0.03357211);
   VbbHcc_tags_Sphericity__222->SetBinError(11,0.02564867);
   VbbHcc_tags_Sphericity__222->SetBinError(12,0.02644138);
   VbbHcc_tags_Sphericity__222->SetBinError(13,0.01940769);
   VbbHcc_tags_Sphericity__222->SetBinError(14,0.02301915);
   VbbHcc_tags_Sphericity__222->SetBinError(15,0.01416731);
   VbbHcc_tags_Sphericity__222->SetBinError(16,0.01197359);
   VbbHcc_tags_Sphericity__222->SetBinError(17,0.008261175);
   VbbHcc_tags_Sphericity__222->SetBinError(18,0.007495513);
   VbbHcc_tags_Sphericity__222->SetBinError(19,0.009870563);
   VbbHcc_tags_Sphericity__222->SetBinError(20,0.009147466);
   VbbHcc_tags_Sphericity__222->SetBinError(21,0.002853897);
   VbbHcc_tags_Sphericity__222->SetEntries(27254);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#cccc00");
   VbbHcc_tags_Sphericity__222->SetFillColor(ci);
   VbbHcc_tags_Sphericity__222->GetXaxis()->SetTitle("Sphericity");
   VbbHcc_tags_Sphericity__222->GetXaxis()->SetRange(1,25);
   VbbHcc_tags_Sphericity__222->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity__222->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_Sphericity__222->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity__222->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity__222->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity__222->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity__222->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_Sphericity__222->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity__222->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Sphericity_tags_18->Modified();
   Sphericity_tags_18->cd();
   Sphericity_tags_18->SetSelected(Sphericity_tags_18);
}
