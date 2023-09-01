#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Aplanarity_algo_16()
{
//=========Macro generated from canvas: Aplanarity_algo_16/Aplanarity_algo_16
//=========  (Fri Sep  1 13:23:39 2023) by ROOT version 6.28/04
   TCanvas *Aplanarity_algo_16 = new TCanvas("Aplanarity_algo_16", "Aplanarity_algo_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Aplanarity_algo_16->SetHighLightColor(2);
   Aplanarity_algo_16->Range(-0.2,-0.09068798,1.133333,0.8161918);
   Aplanarity_algo_16->SetFillColor(0);
   Aplanarity_algo_16->SetBorderMode(0);
   Aplanarity_algo_16->SetBorderSize(2);
   Aplanarity_algo_16->SetLeftMargin(0.15);
   Aplanarity_algo_16->SetFrameBorderMode(0);
   Aplanarity_algo_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_algo_Aplanarity__599 = new TH1D("VbbHcc_algo_Aplanarity__599","",50,0,1);
   VbbHcc_algo_Aplanarity__599->SetBinContent(1,0.690956);
   VbbHcc_algo_Aplanarity__599->SetBinContent(2,0.04937799);
   VbbHcc_algo_Aplanarity__599->SetBinContent(3,0.01254755);
   VbbHcc_algo_Aplanarity__599->SetBinContent(4,0.004178867);
   VbbHcc_algo_Aplanarity__599->SetBinContent(6,0.002192605);
   VbbHcc_algo_Aplanarity__599->SetBinError(1,0.03927195);
   VbbHcc_algo_Aplanarity__599->SetBinError(2,0.01054777);
   VbbHcc_algo_Aplanarity__599->SetBinError(3,0.005160555);
   VbbHcc_algo_Aplanarity__599->SetBinError(4,0.002959077);
   VbbHcc_algo_Aplanarity__599->SetBinError(6,0.002192605);
   VbbHcc_algo_Aplanarity__599->SetEntries(376);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#cc0000");
   VbbHcc_algo_Aplanarity__599->SetFillColor(ci);
   VbbHcc_algo_Aplanarity__599->GetXaxis()->SetTitle("Aplanarity");
   VbbHcc_algo_Aplanarity__599->GetXaxis()->SetRange(1,50);
   VbbHcc_algo_Aplanarity__599->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity__599->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_Aplanarity__599->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity__599->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity__599->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity__599->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity__599->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_Aplanarity__599->GetZaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity__599->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Aplanarity_algo_16->Modified();
   Aplanarity_algo_16->cd();
   Aplanarity_algo_16->SetSelected(Aplanarity_algo_16);
}
