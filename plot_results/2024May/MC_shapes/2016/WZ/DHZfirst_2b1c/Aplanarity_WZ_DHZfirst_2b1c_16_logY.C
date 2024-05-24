#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Aplanarity_WZ_DHZfirst_2b1c_16_logY()
{
//=========Macro generated from canvas: Aplanarity_WZ_DHZfirst_2b1c_16/Aplanarity_WZ_DHZfirst_2b1c_16
//=========  (Thu May 23 20:49:25 2024) by ROOT version 6.28/10
   TCanvas *Aplanarity_WZ_DHZfirst_2b1c_16 = new TCanvas("Aplanarity_WZ_DHZfirst_2b1c_16", "Aplanarity_WZ_DHZfirst_2b1c_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Aplanarity_WZ_DHZfirst_2b1c_16->SetHighLightColor(2);
   Aplanarity_WZ_DHZfirst_2b1c_16->Range(-0.2,-1.947782,1.133333,3.028373);
   Aplanarity_WZ_DHZfirst_2b1c_16->SetFillColor(0);
   Aplanarity_WZ_DHZfirst_2b1c_16->SetFillStyle(4000);
   Aplanarity_WZ_DHZfirst_2b1c_16->SetBorderMode(0);
   Aplanarity_WZ_DHZfirst_2b1c_16->SetBorderSize(2);
   Aplanarity_WZ_DHZfirst_2b1c_16->SetLogy();
   Aplanarity_WZ_DHZfirst_2b1c_16->SetLeftMargin(0.15);
   Aplanarity_WZ_DHZfirst_2b1c_16->SetFrameFillStyle(1000);
   Aplanarity_WZ_DHZfirst_2b1c_16->SetFrameBorderMode(0);
   Aplanarity_WZ_DHZfirst_2b1c_16->SetFrameFillStyle(1000);
   Aplanarity_WZ_DHZfirst_2b1c_16->SetFrameBorderMode(0);
   
   TH1D *VH_DHZfirst_2b1c_Aplanarity__4075 = new TH1D("VH_DHZfirst_2b1c_Aplanarity__4075","",50,0,1);
   VH_DHZfirst_2b1c_Aplanarity__4075->SetBinContent(1,179.1467);
   VH_DHZfirst_2b1c_Aplanarity__4075->SetBinContent(2,10.8287);
   VH_DHZfirst_2b1c_Aplanarity__4075->SetBinContent(3,1.617042);
   VH_DHZfirst_2b1c_Aplanarity__4075->SetBinContent(4,0.07093548);
   VH_DHZfirst_2b1c_Aplanarity__4075->SetBinContent(5,0.1556572);
   VH_DHZfirst_2b1c_Aplanarity__4075->SetBinContent(6,0.07623354);
   VH_DHZfirst_2b1c_Aplanarity__4075->SetBinError(1,4.040285);
   VH_DHZfirst_2b1c_Aplanarity__4075->SetBinError(2,0.9738245);
   VH_DHZfirst_2b1c_Aplanarity__4075->SetBinError(3,0.3701539);
   VH_DHZfirst_2b1c_Aplanarity__4075->SetBinError(4,0.07093548);
   VH_DHZfirst_2b1c_Aplanarity__4075->SetBinError(5,0.1100721);
   VH_DHZfirst_2b1c_Aplanarity__4075->SetBinError(6,0.07623354);
   VH_DHZfirst_2b1c_Aplanarity__4075->SetEntries(2193);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_DHZfirst_2b1c_Aplanarity__4075->SetLineColor(ci);
   VH_DHZfirst_2b1c_Aplanarity__4075->GetXaxis()->SetTitle("Aplanarity");
   VH_DHZfirst_2b1c_Aplanarity__4075->GetXaxis()->SetRange(1,50);
   VH_DHZfirst_2b1c_Aplanarity__4075->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_2b1c_Aplanarity__4075->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_2b1c_Aplanarity__4075->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_2b1c_Aplanarity__4075->GetYaxis()->SetTitle("Events/0.02");
   VH_DHZfirst_2b1c_Aplanarity__4075->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_2b1c_Aplanarity__4075->GetYaxis()->SetLabelSize(0.05);
   VH_DHZfirst_2b1c_Aplanarity__4075->GetYaxis()->SetTitleSize(0.057);
   VH_DHZfirst_2b1c_Aplanarity__4075->GetYaxis()->SetTitleOffset(1.2);
   VH_DHZfirst_2b1c_Aplanarity__4075->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_2b1c_Aplanarity__4075->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_2b1c_Aplanarity__4075->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_2b1c_Aplanarity__4075->GetZaxis()->SetTitleFont(42);
   VH_DHZfirst_2b1c_Aplanarity__4075->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Aplanarity_WZ_DHZfirst_2b1c_16->Modified();
   Aplanarity_WZ_DHZfirst_2b1c_16->cd();
   Aplanarity_WZ_DHZfirst_2b1c_16->SetSelected(Aplanarity_WZ_DHZfirst_2b1c_16);
}
