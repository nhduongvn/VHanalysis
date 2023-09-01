#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Aplanarity_both_16()
{
//=========Macro generated from canvas: Aplanarity_both_16/Aplanarity_both_16
//=========  (Fri Sep  1 13:23:44 2023) by ROOT version 6.28/04
   TCanvas *Aplanarity_both_16 = new TCanvas("Aplanarity_both_16", "Aplanarity_both_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Aplanarity_both_16->SetHighLightColor(2);
   Aplanarity_both_16->Range(-0.2,-0.4050562,1.133333,3.645505);
   Aplanarity_both_16->SetFillColor(0);
   Aplanarity_both_16->SetBorderMode(0);
   Aplanarity_both_16->SetBorderSize(2);
   Aplanarity_both_16->SetLeftMargin(0.15);
   Aplanarity_both_16->SetFrameBorderMode(0);
   Aplanarity_both_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_Aplanarity__955 = new TH1D("VbbHcc_both_Aplanarity__955","",50,0,1);
   VbbHcc_both_Aplanarity__955->SetBinContent(1,3.086142);
   VbbHcc_both_Aplanarity__955->SetBinContent(2,0.7086981);
   VbbHcc_both_Aplanarity__955->SetBinContent(3,0.5346428);
   VbbHcc_both_Aplanarity__955->SetBinContent(4,0.2547367);
   VbbHcc_both_Aplanarity__955->SetBinContent(5,0.2287803);
   VbbHcc_both_Aplanarity__955->SetBinContent(10,0.07675085);
   VbbHcc_both_Aplanarity__955->SetBinError(1,0.5594552);
   VbbHcc_both_Aplanarity__955->SetBinError(2,0.2552747);
   VbbHcc_both_Aplanarity__955->SetBinError(3,0.2184857);
   VbbHcc_both_Aplanarity__955->SetBinError(4,0.1543793);
   VbbHcc_both_Aplanarity__955->SetBinError(5,0.1618284);
   VbbHcc_both_Aplanarity__955->SetBinError(10,0.07675085);
   VbbHcc_both_Aplanarity__955->SetEntries(52);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#3399ff");
   VbbHcc_both_Aplanarity__955->SetFillColor(ci);
   VbbHcc_both_Aplanarity__955->GetXaxis()->SetTitle("Aplanarity");
   VbbHcc_both_Aplanarity__955->GetXaxis()->SetRange(1,50);
   VbbHcc_both_Aplanarity__955->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity__955->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_Aplanarity__955->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity__955->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity__955->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity__955->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity__955->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_Aplanarity__955->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity__955->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Aplanarity_both_16->Modified();
   Aplanarity_both_16->cd();
   Aplanarity_both_16->SetSelected(Aplanarity_both_16);
}
