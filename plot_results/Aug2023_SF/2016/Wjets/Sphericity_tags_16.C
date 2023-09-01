#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Sphericity_tags_16()
{
//=========Macro generated from canvas: Sphericity_tags_16/Sphericity_tags_16
//=========  (Fri Sep  1 13:23:33 2023) by ROOT version 6.28/04
   TCanvas *Sphericity_tags_16 = new TCanvas("Sphericity_tags_16", "Sphericity_tags_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_tags_16->SetHighLightColor(2);
   Sphericity_tags_16->Range(-0.2,-8.846916,1.133333,79.62224);
   Sphericity_tags_16->SetFillColor(0);
   Sphericity_tags_16->SetBorderMode(0);
   Sphericity_tags_16->SetBorderSize(2);
   Sphericity_tags_16->SetLeftMargin(0.15);
   Sphericity_tags_16->SetFrameBorderMode(0);
   Sphericity_tags_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_Sphericity__218 = new TH1D("VbbHcc_tags_Sphericity__218","",25,0,1);
   VbbHcc_tags_Sphericity__218->SetBinContent(1,67.40507);
   VbbHcc_tags_Sphericity__218->SetBinContent(2,34.15933);
   VbbHcc_tags_Sphericity__218->SetBinContent(3,27.40255);
   VbbHcc_tags_Sphericity__218->SetBinContent(4,13.94842);
   VbbHcc_tags_Sphericity__218->SetBinContent(5,11.03186);
   VbbHcc_tags_Sphericity__218->SetBinContent(6,4.106012);
   VbbHcc_tags_Sphericity__218->SetBinContent(7,3.272166);
   VbbHcc_tags_Sphericity__218->SetBinContent(8,0.8370272);
   VbbHcc_tags_Sphericity__218->SetBinContent(9,1.489521);
   VbbHcc_tags_Sphericity__218->SetBinContent(10,1.153388);
   VbbHcc_tags_Sphericity__218->SetBinContent(11,0.7453544);
   VbbHcc_tags_Sphericity__218->SetBinContent(12,0.5700456);
   VbbHcc_tags_Sphericity__218->SetBinContent(13,1.657616);
   VbbHcc_tags_Sphericity__218->SetBinContent(14,0.06854703);
   VbbHcc_tags_Sphericity__218->SetBinContent(15,0.07545019);
   VbbHcc_tags_Sphericity__218->SetBinContent(16,0.196665);
   VbbHcc_tags_Sphericity__218->SetBinContent(17,0.008316291);
   VbbHcc_tags_Sphericity__218->SetBinContent(18,0.0444344);
   VbbHcc_tags_Sphericity__218->SetBinContent(19,0.06656324);
   VbbHcc_tags_Sphericity__218->SetBinContent(20,0.1213968);
   VbbHcc_tags_Sphericity__218->SetBinError(1,5.995503);
   VbbHcc_tags_Sphericity__218->SetBinError(2,3.00106);
   VbbHcc_tags_Sphericity__218->SetBinError(3,5.05778);
   VbbHcc_tags_Sphericity__218->SetBinError(4,1.801123);
   VbbHcc_tags_Sphericity__218->SetBinError(5,1.943845);
   VbbHcc_tags_Sphericity__218->SetBinError(6,0.5695475);
   VbbHcc_tags_Sphericity__218->SetBinError(7,0.8312456);
   VbbHcc_tags_Sphericity__218->SetBinError(8,0.2374112);
   VbbHcc_tags_Sphericity__218->SetBinError(9,0.4657955);
   VbbHcc_tags_Sphericity__218->SetBinError(10,0.8574055);
   VbbHcc_tags_Sphericity__218->SetBinError(11,0.2299204);
   VbbHcc_tags_Sphericity__218->SetBinError(12,0.215232);
   VbbHcc_tags_Sphericity__218->SetBinError(13,0.851429);
   VbbHcc_tags_Sphericity__218->SetBinError(14,0.0531655);
   VbbHcc_tags_Sphericity__218->SetBinError(15,0.05490788);
   VbbHcc_tags_Sphericity__218->SetBinError(16,0.1034518);
   VbbHcc_tags_Sphericity__218->SetBinError(17,0.0078308);
   VbbHcc_tags_Sphericity__218->SetBinError(18,0.04422091);
   VbbHcc_tags_Sphericity__218->SetBinError(19,0.06117633);
   VbbHcc_tags_Sphericity__218->SetBinError(20,0.1213968);
   VbbHcc_tags_Sphericity__218->SetEntries(3416);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff99cc");
   VbbHcc_tags_Sphericity__218->SetFillColor(ci);
   VbbHcc_tags_Sphericity__218->GetXaxis()->SetTitle("Sphericity");
   VbbHcc_tags_Sphericity__218->GetXaxis()->SetRange(1,25);
   VbbHcc_tags_Sphericity__218->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity__218->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_Sphericity__218->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity__218->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity__218->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity__218->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity__218->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_Sphericity__218->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity__218->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Sphericity_tags_16->Modified();
   Sphericity_tags_16->cd();
   Sphericity_tags_16->SetSelected(Sphericity_tags_16);
}
