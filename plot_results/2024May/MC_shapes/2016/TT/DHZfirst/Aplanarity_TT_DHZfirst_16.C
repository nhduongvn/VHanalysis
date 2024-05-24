#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Aplanarity_TT_DHZfirst_16()
{
//=========Macro generated from canvas: Aplanarity_TT_DHZfirst_16/Aplanarity_TT_DHZfirst_16
//=========  (Fri May 24 12:42:32 2024) by ROOT version 6.28/10
   TCanvas *Aplanarity_TT_DHZfirst_16 = new TCanvas("Aplanarity_TT_DHZfirst_16", "Aplanarity_TT_DHZfirst_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Aplanarity_TT_DHZfirst_16->SetHighLightColor(2);
   Aplanarity_TT_DHZfirst_16->Range(-0.2,-2415.564,1.133333,21740.08);
   Aplanarity_TT_DHZfirst_16->SetFillColor(0);
   Aplanarity_TT_DHZfirst_16->SetFillStyle(4000);
   Aplanarity_TT_DHZfirst_16->SetBorderMode(0);
   Aplanarity_TT_DHZfirst_16->SetBorderSize(2);
   Aplanarity_TT_DHZfirst_16->SetLeftMargin(0.15);
   Aplanarity_TT_DHZfirst_16->SetFrameFillStyle(1000);
   Aplanarity_TT_DHZfirst_16->SetFrameBorderMode(0);
   Aplanarity_TT_DHZfirst_16->SetFrameFillStyle(1000);
   Aplanarity_TT_DHZfirst_16->SetFrameBorderMode(0);
   
   TH1D *VH_DHZfirst_Aplanarity__1906 = new TH1D("VH_DHZfirst_Aplanarity__1906","",50,0,1);
   VH_DHZfirst_Aplanarity__1906->SetBinContent(1,18404.3);
   VH_DHZfirst_Aplanarity__1906->SetBinContent(2,2659.659);
   VH_DHZfirst_Aplanarity__1906->SetBinContent(3,603.9956);
   VH_DHZfirst_Aplanarity__1906->SetBinContent(4,185.3817);
   VH_DHZfirst_Aplanarity__1906->SetBinContent(5,66.06923);
   VH_DHZfirst_Aplanarity__1906->SetBinContent(6,26.17719);
   VH_DHZfirst_Aplanarity__1906->SetBinContent(7,11.07212);
   VH_DHZfirst_Aplanarity__1906->SetBinContent(8,5.010404);
   VH_DHZfirst_Aplanarity__1906->SetBinContent(9,2.322559);
   VH_DHZfirst_Aplanarity__1906->SetBinContent(10,1.88355);
   VH_DHZfirst_Aplanarity__1906->SetBinContent(11,1.114626);
   VH_DHZfirst_Aplanarity__1906->SetBinContent(12,0.5759612);
   VH_DHZfirst_Aplanarity__1906->SetBinContent(13,0.479037);
   VH_DHZfirst_Aplanarity__1906->SetBinContent(14,0.2042448);
   VH_DHZfirst_Aplanarity__1906->SetBinContent(15,0.09836129);
   VH_DHZfirst_Aplanarity__1906->SetBinContent(16,0.05700534);
   VH_DHZfirst_Aplanarity__1906->SetBinError(1,33.2999);
   VH_DHZfirst_Aplanarity__1906->SetBinError(2,12.46111);
   VH_DHZfirst_Aplanarity__1906->SetBinError(3,5.871696);
   VH_DHZfirst_Aplanarity__1906->SetBinError(4,3.250589);
   VH_DHZfirst_Aplanarity__1906->SetBinError(5,1.905983);
   VH_DHZfirst_Aplanarity__1906->SetBinError(6,1.185054);
   VH_DHZfirst_Aplanarity__1906->SetBinError(7,0.7640619);
   VH_DHZfirst_Aplanarity__1906->SetBinError(8,0.5109518);
   VH_DHZfirst_Aplanarity__1906->SetBinError(9,0.3391363);
   VH_DHZfirst_Aplanarity__1906->SetBinError(10,0.3005055);
   VH_DHZfirst_Aplanarity__1906->SetBinError(11,0.2490208);
   VH_DHZfirst_Aplanarity__1906->SetBinError(12,0.1703888);
   VH_DHZfirst_Aplanarity__1906->SetBinError(13,0.1584667);
   VH_DHZfirst_Aplanarity__1906->SetBinError(14,0.1124069);
   VH_DHZfirst_Aplanarity__1906->SetBinError(15,0.05693891);
   VH_DHZfirst_Aplanarity__1906->SetBinError(16,0.05700534);
   VH_DHZfirst_Aplanarity__1906->SetEntries(408287);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_DHZfirst_Aplanarity__1906->SetLineColor(ci);
   VH_DHZfirst_Aplanarity__1906->GetXaxis()->SetTitle("Aplanarity");
   VH_DHZfirst_Aplanarity__1906->GetXaxis()->SetRange(1,50);
   VH_DHZfirst_Aplanarity__1906->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_Aplanarity__1906->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_Aplanarity__1906->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_Aplanarity__1906->GetYaxis()->SetTitle("Events/0.02");
   VH_DHZfirst_Aplanarity__1906->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_Aplanarity__1906->GetYaxis()->SetLabelSize(0.05);
   VH_DHZfirst_Aplanarity__1906->GetYaxis()->SetTitleSize(0.057);
   VH_DHZfirst_Aplanarity__1906->GetYaxis()->SetTitleOffset(1.2);
   VH_DHZfirst_Aplanarity__1906->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_Aplanarity__1906->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_Aplanarity__1906->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_Aplanarity__1906->GetZaxis()->SetTitleFont(42);
   VH_DHZfirst_Aplanarity__1906->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Aplanarity_TT_DHZfirst_16->Modified();
   Aplanarity_TT_DHZfirst_16->cd();
   Aplanarity_TT_DHZfirst_16->SetSelected(Aplanarity_TT_DHZfirst_16);
}
