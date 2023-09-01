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
   Sphericity_tags_18->Range(-0.2,-214.6858,1.133333,1932.172);
   Sphericity_tags_18->SetFillColor(0);
   Sphericity_tags_18->SetBorderMode(0);
   Sphericity_tags_18->SetBorderSize(2);
   Sphericity_tags_18->SetLeftMargin(0.15);
   Sphericity_tags_18->SetFrameBorderMode(0);
   Sphericity_tags_18->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_Sphericity__217 = new TH1D("VbbHcc_tags_Sphericity__217","",25,0,1);
   VbbHcc_tags_Sphericity__217->SetBinContent(1,1635.701);
   VbbHcc_tags_Sphericity__217->SetBinContent(2,1242.779);
   VbbHcc_tags_Sphericity__217->SetBinContent(3,687.8275);
   VbbHcc_tags_Sphericity__217->SetBinContent(4,412.1026);
   VbbHcc_tags_Sphericity__217->SetBinContent(5,246.7436);
   VbbHcc_tags_Sphericity__217->SetBinContent(6,132.2918);
   VbbHcc_tags_Sphericity__217->SetBinContent(7,76.91081);
   VbbHcc_tags_Sphericity__217->SetBinContent(8,43.77385);
   VbbHcc_tags_Sphericity__217->SetBinContent(9,28.41316);
   VbbHcc_tags_Sphericity__217->SetBinContent(10,18.98185);
   VbbHcc_tags_Sphericity__217->SetBinContent(11,15.42168);
   VbbHcc_tags_Sphericity__217->SetBinContent(12,11.53364);
   VbbHcc_tags_Sphericity__217->SetBinContent(13,9.10899);
   VbbHcc_tags_Sphericity__217->SetBinContent(14,8.892115);
   VbbHcc_tags_Sphericity__217->SetBinContent(15,5.543162);
   VbbHcc_tags_Sphericity__217->SetBinContent(16,4.072411);
   VbbHcc_tags_Sphericity__217->SetBinContent(17,2.80259);
   VbbHcc_tags_Sphericity__217->SetBinContent(18,1.05135);
   VbbHcc_tags_Sphericity__217->SetBinContent(19,1.343184);
   VbbHcc_tags_Sphericity__217->SetBinContent(20,0.5316888);
   VbbHcc_tags_Sphericity__217->SetBinContent(21,0.1110073);
   VbbHcc_tags_Sphericity__217->SetBinError(1,42.61624);
   VbbHcc_tags_Sphericity__217->SetBinError(2,45.55391);
   VbbHcc_tags_Sphericity__217->SetBinError(3,21.34754);
   VbbHcc_tags_Sphericity__217->SetBinError(4,16.74531);
   VbbHcc_tags_Sphericity__217->SetBinError(5,12.74326);
   VbbHcc_tags_Sphericity__217->SetBinError(6,8.798767);
   VbbHcc_tags_Sphericity__217->SetBinError(7,6.811229);
   VbbHcc_tags_Sphericity__217->SetBinError(8,4.737178);
   VbbHcc_tags_Sphericity__217->SetBinError(9,4.089776);
   VbbHcc_tags_Sphericity__217->SetBinError(10,2.531125);
   VbbHcc_tags_Sphericity__217->SetBinError(11,3.637079);
   VbbHcc_tags_Sphericity__217->SetBinError(12,1.84427);
   VbbHcc_tags_Sphericity__217->SetBinError(13,1.519003);
   VbbHcc_tags_Sphericity__217->SetBinError(14,1.916475);
   VbbHcc_tags_Sphericity__217->SetBinError(15,1.227535);
   VbbHcc_tags_Sphericity__217->SetBinError(16,1.032894);
   VbbHcc_tags_Sphericity__217->SetBinError(17,0.9280469);
   VbbHcc_tags_Sphericity__217->SetBinError(18,0.4953229);
   VbbHcc_tags_Sphericity__217->SetBinError(19,0.9661166);
   VbbHcc_tags_Sphericity__217->SetBinError(20,0.2583509);
   VbbHcc_tags_Sphericity__217->SetBinError(21,0.1110073);
   VbbHcc_tags_Sphericity__217->SetEntries(18512);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#00cccc");
   VbbHcc_tags_Sphericity__217->SetFillColor(ci);
   VbbHcc_tags_Sphericity__217->GetXaxis()->SetTitle("Sphericity");
   VbbHcc_tags_Sphericity__217->GetXaxis()->SetRange(1,25);
   VbbHcc_tags_Sphericity__217->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity__217->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_Sphericity__217->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity__217->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity__217->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity__217->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity__217->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_Sphericity__217->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity__217->Draw("HIST");
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
