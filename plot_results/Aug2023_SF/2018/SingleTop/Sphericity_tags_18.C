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
   Sphericity_tags_18->Range(-0.2,-112.0205,1.133333,709.3782);
   Sphericity_tags_18->SetFillColor(0);
   Sphericity_tags_18->SetBorderMode(0);
   Sphericity_tags_18->SetBorderSize(2);
   Sphericity_tags_18->SetLeftMargin(0.15);
   Sphericity_tags_18->SetFrameBorderMode(0);
   Sphericity_tags_18->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_Sphericity__215 = new TH1D("VbbHcc_tags_Sphericity__215","",25,0,1);
   VbbHcc_tags_Sphericity__215->SetBinContent(1,595.9469);
   VbbHcc_tags_Sphericity__215->SetBinContent(2,453.4523);
   VbbHcc_tags_Sphericity__215->SetBinContent(3,260.0046);
   VbbHcc_tags_Sphericity__215->SetBinContent(4,169.6298);
   VbbHcc_tags_Sphericity__215->SetBinContent(5,97.77107);
   VbbHcc_tags_Sphericity__215->SetBinContent(6,54.92744);
   VbbHcc_tags_Sphericity__215->SetBinContent(7,32.80707);
   VbbHcc_tags_Sphericity__215->SetBinContent(8,16.21377);
   VbbHcc_tags_Sphericity__215->SetBinContent(9,15.74811);
   VbbHcc_tags_Sphericity__215->SetBinContent(10,9.996756);
   VbbHcc_tags_Sphericity__215->SetBinContent(11,9.020318);
   VbbHcc_tags_Sphericity__215->SetBinContent(12,8.557227);
   VbbHcc_tags_Sphericity__215->SetBinContent(13,5.119429);
   VbbHcc_tags_Sphericity__215->SetBinContent(14,3.21878);
   VbbHcc_tags_Sphericity__215->SetBinContent(15,2.24391);
   VbbHcc_tags_Sphericity__215->SetBinContent(16,2.186547);
   VbbHcc_tags_Sphericity__215->SetBinContent(17,1.815054);
   VbbHcc_tags_Sphericity__215->SetBinContent(18,1.006967);
   VbbHcc_tags_Sphericity__215->SetBinContent(19,0.3376801);
   VbbHcc_tags_Sphericity__215->SetBinContent(20,-0.07936056);
   VbbHcc_tags_Sphericity__215->SetBinError(1,15.29351);
   VbbHcc_tags_Sphericity__215->SetBinError(2,14.4917);
   VbbHcc_tags_Sphericity__215->SetBinError(3,9.854423);
   VbbHcc_tags_Sphericity__215->SetBinError(4,9.130541);
   VbbHcc_tags_Sphericity__215->SetBinError(5,6.049919);
   VbbHcc_tags_Sphericity__215->SetBinError(6,5.20695);
   VbbHcc_tags_Sphericity__215->SetBinError(7,3.751555);
   VbbHcc_tags_Sphericity__215->SetBinError(8,2.649428);
   VbbHcc_tags_Sphericity__215->SetBinError(9,2.577085);
   VbbHcc_tags_Sphericity__215->SetBinError(10,2.199648);
   VbbHcc_tags_Sphericity__215->SetBinError(11,1.92725);
   VbbHcc_tags_Sphericity__215->SetBinError(12,3.46134);
   VbbHcc_tags_Sphericity__215->SetBinError(13,1.427575);
   VbbHcc_tags_Sphericity__215->SetBinError(14,1.043181);
   VbbHcc_tags_Sphericity__215->SetBinError(15,0.7520064);
   VbbHcc_tags_Sphericity__215->SetBinError(16,0.9903239);
   VbbHcc_tags_Sphericity__215->SetBinError(17,0.9584723);
   VbbHcc_tags_Sphericity__215->SetBinError(18,0.5960164);
   VbbHcc_tags_Sphericity__215->SetBinError(19,0.3031783);
   VbbHcc_tags_Sphericity__215->SetBinError(20,0.07936056);
   VbbHcc_tags_Sphericity__215->SetEntries(13198);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#660066");
   VbbHcc_tags_Sphericity__215->SetFillColor(ci);
   VbbHcc_tags_Sphericity__215->GetXaxis()->SetTitle("Sphericity");
   VbbHcc_tags_Sphericity__215->GetXaxis()->SetRange(1,25);
   VbbHcc_tags_Sphericity__215->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity__215->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_Sphericity__215->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity__215->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity__215->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity__215->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity__215->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_Sphericity__215->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity__215->Draw("HIST");
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
