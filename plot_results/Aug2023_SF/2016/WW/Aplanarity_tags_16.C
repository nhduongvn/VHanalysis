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
   Aplanarity_tags_16->Range(-0.2,-0.1389547,1.133333,1.250592);
   Aplanarity_tags_16->SetFillColor(0);
   Aplanarity_tags_16->SetBorderMode(0);
   Aplanarity_tags_16->SetBorderSize(2);
   Aplanarity_tags_16->SetLeftMargin(0.15);
   Aplanarity_tags_16->SetFrameBorderMode(0);
   Aplanarity_tags_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_Aplanarity__234 = new TH1D("VbbHcc_tags_Aplanarity__234","",50,0,1);
   VbbHcc_tags_Aplanarity__234->SetBinContent(1,1.058703);
   VbbHcc_tags_Aplanarity__234->SetBinContent(2,0.1974948);
   VbbHcc_tags_Aplanarity__234->SetBinError(1,0.3553509);
   VbbHcc_tags_Aplanarity__234->SetBinError(2,0.1396731);
   VbbHcc_tags_Aplanarity__234->SetEntries(11);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#9933ff");
   VbbHcc_tags_Aplanarity__234->SetFillColor(ci);
   VbbHcc_tags_Aplanarity__234->GetXaxis()->SetTitle("Aplanarity");
   VbbHcc_tags_Aplanarity__234->GetXaxis()->SetRange(1,50);
   VbbHcc_tags_Aplanarity__234->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity__234->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_Aplanarity__234->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity__234->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity__234->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity__234->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity__234->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_Aplanarity__234->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity__234->Draw("HIST");
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
