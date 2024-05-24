#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Aplanarity_WZ_tagOnly_16_logY()
{
//=========Macro generated from canvas: Aplanarity_WZ_tagOnly_16/Aplanarity_WZ_tagOnly_16
//=========  (Thu May 23 20:48:42 2024) by ROOT version 6.28/10
   TCanvas *Aplanarity_WZ_tagOnly_16 = new TCanvas("Aplanarity_WZ_tagOnly_16", "Aplanarity_WZ_tagOnly_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Aplanarity_WZ_tagOnly_16->SetHighLightColor(2);
   Aplanarity_WZ_tagOnly_16->Range(-0.2,-1.920481,1.133333,3.083298);
   Aplanarity_WZ_tagOnly_16->SetFillColor(0);
   Aplanarity_WZ_tagOnly_16->SetFillStyle(4000);
   Aplanarity_WZ_tagOnly_16->SetBorderMode(0);
   Aplanarity_WZ_tagOnly_16->SetBorderSize(2);
   Aplanarity_WZ_tagOnly_16->SetLogy();
   Aplanarity_WZ_tagOnly_16->SetLeftMargin(0.15);
   Aplanarity_WZ_tagOnly_16->SetFrameFillStyle(1000);
   Aplanarity_WZ_tagOnly_16->SetFrameBorderMode(0);
   Aplanarity_WZ_tagOnly_16->SetFrameFillStyle(1000);
   Aplanarity_WZ_tagOnly_16->SetFrameBorderMode(0);
   
   TH1D *VH_tagOnly_Aplanarity__1195 = new TH1D("VH_tagOnly_Aplanarity__1195","",50,0,1);
   VH_tagOnly_Aplanarity__1195->SetBinContent(1,202.0091);
   VH_tagOnly_Aplanarity__1195->SetBinContent(2,21.22948);
   VH_tagOnly_Aplanarity__1195->SetBinContent(3,3.728733);
   VH_tagOnly_Aplanarity__1195->SetBinContent(4,2.38568);
   VH_tagOnly_Aplanarity__1195->SetBinContent(5,0.5809405);
   VH_tagOnly_Aplanarity__1195->SetBinContent(6,0.6044059);
   VH_tagOnly_Aplanarity__1195->SetBinContent(7,0.0996435);
   VH_tagOnly_Aplanarity__1195->SetBinContent(8,0.07601985);
   VH_tagOnly_Aplanarity__1195->SetBinError(1,4.425148);
   VH_tagOnly_Aplanarity__1195->SetBinError(2,1.417969);
   VH_tagOnly_Aplanarity__1195->SetBinError(3,0.5966815);
   VH_tagOnly_Aplanarity__1195->SetBinError(4,0.4862976);
   VH_tagOnly_Aplanarity__1195->SetBinError(5,0.2413274);
   VH_tagOnly_Aplanarity__1195->SetBinError(6,0.250102);
   VH_tagOnly_Aplanarity__1195->SetBinError(7,0.0996435);
   VH_tagOnly_Aplanarity__1195->SetBinError(8,0.07601985);
   VH_tagOnly_Aplanarity__1195->SetEntries(2496);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_tagOnly_Aplanarity__1195->SetLineColor(ci);
   VH_tagOnly_Aplanarity__1195->GetXaxis()->SetTitle("Aplanarity");
   VH_tagOnly_Aplanarity__1195->GetXaxis()->SetRange(1,50);
   VH_tagOnly_Aplanarity__1195->GetXaxis()->SetLabelFont(42);
   VH_tagOnly_Aplanarity__1195->GetXaxis()->SetTitleOffset(1);
   VH_tagOnly_Aplanarity__1195->GetXaxis()->SetTitleFont(42);
   VH_tagOnly_Aplanarity__1195->GetYaxis()->SetTitle("Events/0.02");
   VH_tagOnly_Aplanarity__1195->GetYaxis()->SetLabelFont(42);
   VH_tagOnly_Aplanarity__1195->GetYaxis()->SetLabelSize(0.05);
   VH_tagOnly_Aplanarity__1195->GetYaxis()->SetTitleSize(0.057);
   VH_tagOnly_Aplanarity__1195->GetYaxis()->SetTitleOffset(1.2);
   VH_tagOnly_Aplanarity__1195->GetYaxis()->SetTitleFont(42);
   VH_tagOnly_Aplanarity__1195->GetZaxis()->SetLabelFont(42);
   VH_tagOnly_Aplanarity__1195->GetZaxis()->SetTitleOffset(1);
   VH_tagOnly_Aplanarity__1195->GetZaxis()->SetTitleFont(42);
   VH_tagOnly_Aplanarity__1195->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Aplanarity_WZ_tagOnly_16->Modified();
   Aplanarity_WZ_tagOnly_16->cd();
   Aplanarity_WZ_tagOnly_16->SetSelected(Aplanarity_WZ_tagOnly_16);
}
