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
   Aplanarity_tags_16->Range(-0.2,-0.5412158,1.133333,4.870942);
   Aplanarity_tags_16->SetFillColor(0);
   Aplanarity_tags_16->SetBorderMode(0);
   Aplanarity_tags_16->SetBorderSize(2);
   Aplanarity_tags_16->SetLeftMargin(0.15);
   Aplanarity_tags_16->SetFrameBorderMode(0);
   Aplanarity_tags_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_Aplanarity__235 = new TH1D("VbbHcc_tags_Aplanarity__235","",50,0,1);
   VbbHcc_tags_Aplanarity__235->SetBinContent(1,4.123549);
   VbbHcc_tags_Aplanarity__235->SetBinContent(2,0.2809519);
   VbbHcc_tags_Aplanarity__235->SetBinContent(3,0.1159892);
   VbbHcc_tags_Aplanarity__235->SetBinContent(8,0.07500666);
   VbbHcc_tags_Aplanarity__235->SetBinError(1,0.642969);
   VbbHcc_tags_Aplanarity__235->SetBinError(2,0.1634505);
   VbbHcc_tags_Aplanarity__235->SetBinError(3,0.1159892);
   VbbHcc_tags_Aplanarity__235->SetBinError(8,0.07500666);
   VbbHcc_tags_Aplanarity__235->SetEntries(48);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#3399ff");
   VbbHcc_tags_Aplanarity__235->SetFillColor(ci);
   VbbHcc_tags_Aplanarity__235->GetXaxis()->SetTitle("Aplanarity");
   VbbHcc_tags_Aplanarity__235->GetXaxis()->SetRange(1,50);
   VbbHcc_tags_Aplanarity__235->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity__235->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_Aplanarity__235->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity__235->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity__235->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity__235->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity__235->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_Aplanarity__235->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity__235->Draw("HIST");
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
