#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Aplanarity_algo_16()
{
//=========Macro generated from canvas: Aplanarity_algo_16/Aplanarity_algo_16
//=========  (Fri Sep  1 13:23:38 2023) by ROOT version 6.28/04
   TCanvas *Aplanarity_algo_16 = new TCanvas("Aplanarity_algo_16", "Aplanarity_algo_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Aplanarity_algo_16->SetHighLightColor(2);
   Aplanarity_algo_16->Range(-0.2,-737.3134,1.133333,6635.82);
   Aplanarity_algo_16->SetFillColor(0);
   Aplanarity_algo_16->SetBorderMode(0);
   Aplanarity_algo_16->SetBorderSize(2);
   Aplanarity_algo_16->SetLeftMargin(0.15);
   Aplanarity_algo_16->SetFrameBorderMode(0);
   Aplanarity_algo_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_algo_Aplanarity__593 = new TH1D("VbbHcc_algo_Aplanarity__593","",50,0,1);
   VbbHcc_algo_Aplanarity__593->SetBinContent(1,5617.626);
   VbbHcc_algo_Aplanarity__593->SetBinContent(2,634.1624);
   VbbHcc_algo_Aplanarity__593->SetBinContent(3,142.2546);
   VbbHcc_algo_Aplanarity__593->SetBinContent(4,26.6843);
   VbbHcc_algo_Aplanarity__593->SetBinContent(5,3.845076);
   VbbHcc_algo_Aplanarity__593->SetBinContent(6,7.357886);
   VbbHcc_algo_Aplanarity__593->SetBinContent(7,5.650766);
   VbbHcc_algo_Aplanarity__593->SetBinContent(8,0.3983807);
   VbbHcc_algo_Aplanarity__593->SetBinContent(9,0.3811393);
   VbbHcc_algo_Aplanarity__593->SetBinContent(10,0.2578444);
   VbbHcc_algo_Aplanarity__593->SetBinContent(11,0.02166571);
   VbbHcc_algo_Aplanarity__593->SetBinError(1,79.55161);
   VbbHcc_algo_Aplanarity__593->SetBinError(2,32.59022);
   VbbHcc_algo_Aplanarity__593->SetBinError(3,15.04362);
   VbbHcc_algo_Aplanarity__593->SetBinError(4,6.441144);
   VbbHcc_algo_Aplanarity__593->SetBinError(5,0.9770378);
   VbbHcc_algo_Aplanarity__593->SetBinError(6,4.992086);
   VbbHcc_algo_Aplanarity__593->SetBinError(7,4.987661);
   VbbHcc_algo_Aplanarity__593->SetBinError(8,0.2942605);
   VbbHcc_algo_Aplanarity__593->SetBinError(9,0.3513091);
   VbbHcc_algo_Aplanarity__593->SetBinError(10,0.2352612);
   VbbHcc_algo_Aplanarity__593->SetBinError(11,0.02166571);
   VbbHcc_algo_Aplanarity__593->SetEntries(71880);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff99cc");
   VbbHcc_algo_Aplanarity__593->SetFillColor(ci);
   VbbHcc_algo_Aplanarity__593->GetXaxis()->SetTitle("Aplanarity");
   VbbHcc_algo_Aplanarity__593->GetXaxis()->SetRange(1,50);
   VbbHcc_algo_Aplanarity__593->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity__593->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_Aplanarity__593->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity__593->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity__593->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity__593->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity__593->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_Aplanarity__593->GetZaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity__593->Draw("HIST");
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
