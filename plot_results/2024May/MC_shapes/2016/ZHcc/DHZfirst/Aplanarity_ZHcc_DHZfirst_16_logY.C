#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Aplanarity_ZHcc_DHZfirst_16_logY()
{
//=========Macro generated from canvas: Aplanarity_ZHcc_DHZfirst_16/Aplanarity_ZHcc_DHZfirst_16
//=========  (Thu May 23 20:48:51 2024) by ROOT version 6.28/10
   TCanvas *Aplanarity_ZHcc_DHZfirst_16 = new TCanvas("Aplanarity_ZHcc_DHZfirst_16", "Aplanarity_ZHcc_DHZfirst_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Aplanarity_ZHcc_DHZfirst_16->SetHighLightColor(2);
   Aplanarity_ZHcc_DHZfirst_16->Range(-0.2,-4.379166,1.133333,0.5021102);
   Aplanarity_ZHcc_DHZfirst_16->SetFillColor(0);
   Aplanarity_ZHcc_DHZfirst_16->SetFillStyle(4000);
   Aplanarity_ZHcc_DHZfirst_16->SetBorderMode(0);
   Aplanarity_ZHcc_DHZfirst_16->SetBorderSize(2);
   Aplanarity_ZHcc_DHZfirst_16->SetLogy();
   Aplanarity_ZHcc_DHZfirst_16->SetLeftMargin(0.15);
   Aplanarity_ZHcc_DHZfirst_16->SetFrameFillStyle(1000);
   Aplanarity_ZHcc_DHZfirst_16->SetFrameBorderMode(0);
   Aplanarity_ZHcc_DHZfirst_16->SetFrameFillStyle(1000);
   Aplanarity_ZHcc_DHZfirst_16->SetFrameBorderMode(0);
   
   TH1D *VH_DHZfirst_Aplanarity__1891 = new TH1D("VH_DHZfirst_Aplanarity__1891","",50,0,1);
   VH_DHZfirst_Aplanarity__1891->SetBinContent(1,0.5450467);
   VH_DHZfirst_Aplanarity__1891->SetBinContent(2,0.03674214);
   VH_DHZfirst_Aplanarity__1891->SetBinContent(3,0.001222259);
   VH_DHZfirst_Aplanarity__1891->SetBinContent(4,0.0007401707);
   VH_DHZfirst_Aplanarity__1891->SetBinContent(6,0.0002570347);
   VH_DHZfirst_Aplanarity__1891->SetBinError(1,0.02891262);
   VH_DHZfirst_Aplanarity__1891->SetBinError(2,0.007135947);
   VH_DHZfirst_Aplanarity__1891->SetBinError(3,0.000613679);
   VH_DHZfirst_Aplanarity__1891->SetBinError(4,0.0004284907);
   VH_DHZfirst_Aplanarity__1891->SetBinError(6,0.0002570347);
   VH_DHZfirst_Aplanarity__1891->SetEntries(813);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_DHZfirst_Aplanarity__1891->SetLineColor(ci);
   VH_DHZfirst_Aplanarity__1891->GetXaxis()->SetTitle("Aplanarity");
   VH_DHZfirst_Aplanarity__1891->GetXaxis()->SetRange(1,50);
   VH_DHZfirst_Aplanarity__1891->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_Aplanarity__1891->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_Aplanarity__1891->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_Aplanarity__1891->GetYaxis()->SetTitle("Events/0.02");
   VH_DHZfirst_Aplanarity__1891->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_Aplanarity__1891->GetYaxis()->SetLabelSize(0.05);
   VH_DHZfirst_Aplanarity__1891->GetYaxis()->SetTitleSize(0.057);
   VH_DHZfirst_Aplanarity__1891->GetYaxis()->SetTitleOffset(1.2);
   VH_DHZfirst_Aplanarity__1891->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_Aplanarity__1891->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_Aplanarity__1891->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_Aplanarity__1891->GetZaxis()->SetTitleFont(42);
   VH_DHZfirst_Aplanarity__1891->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Aplanarity_ZHcc_DHZfirst_16->Modified();
   Aplanarity_ZHcc_DHZfirst_16->cd();
   Aplanarity_ZHcc_DHZfirst_16->SetSelected(Aplanarity_ZHcc_DHZfirst_16);
}
