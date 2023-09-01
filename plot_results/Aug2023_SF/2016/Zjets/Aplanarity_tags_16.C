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
   Aplanarity_tags_16->Range(-0.2,-193.5991,1.133333,1742.392);
   Aplanarity_tags_16->SetFillColor(0);
   Aplanarity_tags_16->SetBorderMode(0);
   Aplanarity_tags_16->SetBorderSize(2);
   Aplanarity_tags_16->SetLeftMargin(0.15);
   Aplanarity_tags_16->SetFrameBorderMode(0);
   Aplanarity_tags_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_Aplanarity__232 = new TH1D("VbbHcc_tags_Aplanarity__232","",50,0,1);
   VbbHcc_tags_Aplanarity__232->SetBinContent(1,1475.041);
   VbbHcc_tags_Aplanarity__232->SetBinContent(2,182.9714);
   VbbHcc_tags_Aplanarity__232->SetBinContent(3,46.68298);
   VbbHcc_tags_Aplanarity__232->SetBinContent(4,12.66879);
   VbbHcc_tags_Aplanarity__232->SetBinContent(5,6.201868);
   VbbHcc_tags_Aplanarity__232->SetBinContent(6,2.549732);
   VbbHcc_tags_Aplanarity__232->SetBinContent(7,2.074416);
   VbbHcc_tags_Aplanarity__232->SetBinContent(8,1.277468);
   VbbHcc_tags_Aplanarity__232->SetBinContent(9,0.4172411);
   VbbHcc_tags_Aplanarity__232->SetBinContent(10,0.3613191);
   VbbHcc_tags_Aplanarity__232->SetBinContent(11,0.06761808);
   VbbHcc_tags_Aplanarity__232->SetBinContent(12,0.155417);
   VbbHcc_tags_Aplanarity__232->SetBinContent(13,0.08552109);
   VbbHcc_tags_Aplanarity__232->SetBinContent(14,0.06897277);
   VbbHcc_tags_Aplanarity__232->SetBinError(1,25.6978);
   VbbHcc_tags_Aplanarity__232->SetBinError(2,11.38595);
   VbbHcc_tags_Aplanarity__232->SetBinError(3,6.359365);
   VbbHcc_tags_Aplanarity__232->SetBinError(4,1.321448);
   VbbHcc_tags_Aplanarity__232->SetBinError(5,1.056216);
   VbbHcc_tags_Aplanarity__232->SetBinError(6,0.5359);
   VbbHcc_tags_Aplanarity__232->SetBinError(7,0.5324983);
   VbbHcc_tags_Aplanarity__232->SetBinError(8,0.4838824);
   VbbHcc_tags_Aplanarity__232->SetBinError(9,0.158349);
   VbbHcc_tags_Aplanarity__232->SetBinError(10,0.1671229);
   VbbHcc_tags_Aplanarity__232->SetBinError(11,0.06761808);
   VbbHcc_tags_Aplanarity__232->SetBinError(12,0.1105825);
   VbbHcc_tags_Aplanarity__232->SetBinError(13,0.08552109);
   VbbHcc_tags_Aplanarity__232->SetBinError(14,0.06897277);
   VbbHcc_tags_Aplanarity__232->SetEntries(14937);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#00cccc");
   VbbHcc_tags_Aplanarity__232->SetFillColor(ci);
   VbbHcc_tags_Aplanarity__232->GetXaxis()->SetTitle("Aplanarity");
   VbbHcc_tags_Aplanarity__232->GetXaxis()->SetRange(1,50);
   VbbHcc_tags_Aplanarity__232->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity__232->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_Aplanarity__232->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity__232->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity__232->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity__232->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity__232->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_Aplanarity__232->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity__232->Draw("HIST");
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
