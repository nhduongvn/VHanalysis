#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Aplanarity_tags_16()
{
//=========Macro generated from canvas: Aplanarity_tags_16/Aplanarity_tags_16
//=========  (Fri Sep  1 13:23:33 2023) by ROOT version 6.28/04
   TCanvas *Aplanarity_tags_16 = new TCanvas("Aplanarity_tags_16", "Aplanarity_tags_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Aplanarity_tags_16->SetHighLightColor(2);
   Aplanarity_tags_16->Range(-0.2,-1244.062,1.133333,11196.56);
   Aplanarity_tags_16->SetFillColor(0);
   Aplanarity_tags_16->SetBorderMode(0);
   Aplanarity_tags_16->SetBorderSize(2);
   Aplanarity_tags_16->SetLeftMargin(0.15);
   Aplanarity_tags_16->SetFrameBorderMode(0);
   Aplanarity_tags_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_Aplanarity__231 = new TH1D("VbbHcc_tags_Aplanarity__231","",50,0,1);
   VbbHcc_tags_Aplanarity__231->SetBinContent(1,9478.567);
   VbbHcc_tags_Aplanarity__231->SetBinContent(2,1393.382);
   VbbHcc_tags_Aplanarity__231->SetBinContent(3,381.5413);
   VbbHcc_tags_Aplanarity__231->SetBinContent(4,138.5655);
   VbbHcc_tags_Aplanarity__231->SetBinContent(5,65.52467);
   VbbHcc_tags_Aplanarity__231->SetBinContent(6,32.02238);
   VbbHcc_tags_Aplanarity__231->SetBinContent(7,19.48227);
   VbbHcc_tags_Aplanarity__231->SetBinContent(8,9.256405);
   VbbHcc_tags_Aplanarity__231->SetBinContent(9,6.399098);
   VbbHcc_tags_Aplanarity__231->SetBinContent(10,3.321801);
   VbbHcc_tags_Aplanarity__231->SetBinContent(11,2.859423);
   VbbHcc_tags_Aplanarity__231->SetBinContent(12,1.217478);
   VbbHcc_tags_Aplanarity__231->SetBinContent(13,1.019301);
   VbbHcc_tags_Aplanarity__231->SetBinContent(14,0.6924587);
   VbbHcc_tags_Aplanarity__231->SetBinContent(15,0.6654767);
   VbbHcc_tags_Aplanarity__231->SetBinContent(16,0.183793);
   VbbHcc_tags_Aplanarity__231->SetBinContent(17,0.08751212);
   VbbHcc_tags_Aplanarity__231->SetBinContent(18,0.1454104);
   VbbHcc_tags_Aplanarity__231->SetBinContent(19,0.0550937);
   VbbHcc_tags_Aplanarity__231->SetBinError(1,23.03355);
   VbbHcc_tags_Aplanarity__231->SetBinError(2,8.720084);
   VbbHcc_tags_Aplanarity__231->SetBinError(3,4.573787);
   VbbHcc_tags_Aplanarity__231->SetBinError(4,2.756035);
   VbbHcc_tags_Aplanarity__231->SetBinError(5,1.899669);
   VbbHcc_tags_Aplanarity__231->SetBinError(6,1.3216);
   VbbHcc_tags_Aplanarity__231->SetBinError(7,1.04507);
   VbbHcc_tags_Aplanarity__231->SetBinError(8,0.7122506);
   VbbHcc_tags_Aplanarity__231->SetBinError(9,0.5998707);
   VbbHcc_tags_Aplanarity__231->SetBinError(10,0.4370859);
   VbbHcc_tags_Aplanarity__231->SetBinError(11,0.4062478);
   VbbHcc_tags_Aplanarity__231->SetBinError(12,0.2582168);
   VbbHcc_tags_Aplanarity__231->SetBinError(13,0.2399642);
   VbbHcc_tags_Aplanarity__231->SetBinError(14,0.1873286);
   VbbHcc_tags_Aplanarity__231->SetBinError(15,0.1908418);
   VbbHcc_tags_Aplanarity__231->SetBinError(16,0.1066443);
   VbbHcc_tags_Aplanarity__231->SetBinError(17,0.06228583);
   VbbHcc_tags_Aplanarity__231->SetBinError(18,0.08489424);
   VbbHcc_tags_Aplanarity__231->SetBinError(19,0.0550937);
   VbbHcc_tags_Aplanarity__231->SetEntries(226633);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#cc00cc");
   VbbHcc_tags_Aplanarity__231->SetFillColor(ci);
   VbbHcc_tags_Aplanarity__231->GetXaxis()->SetTitle("Aplanarity");
   VbbHcc_tags_Aplanarity__231->GetXaxis()->SetRange(1,50);
   VbbHcc_tags_Aplanarity__231->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity__231->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_Aplanarity__231->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity__231->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity__231->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity__231->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity__231->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_Aplanarity__231->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity__231->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Aplanarity_tags_16->Modified();
   Aplanarity_tags_16->cd();
   Aplanarity_tags_16->SetSelected(Aplanarity_tags_16);
}
