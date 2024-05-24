#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Aplanarity_ZHcc_tagFirst_16_logY()
{
//=========Macro generated from canvas: Aplanarity_ZHcc_tagFirst_16/Aplanarity_ZHcc_tagFirst_16
//=========  (Thu May 23 20:48:32 2024) by ROOT version 6.28/10
   TCanvas *Aplanarity_ZHcc_tagFirst_16 = new TCanvas("Aplanarity_ZHcc_tagFirst_16", "Aplanarity_ZHcc_tagFirst_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Aplanarity_ZHcc_tagFirst_16->SetHighLightColor(2);
   Aplanarity_ZHcc_tagFirst_16->Range(-0.2,-4.437655,1.133333,1.21936);
   Aplanarity_ZHcc_tagFirst_16->SetFillColor(0);
   Aplanarity_ZHcc_tagFirst_16->SetFillStyle(4000);
   Aplanarity_ZHcc_tagFirst_16->SetBorderMode(0);
   Aplanarity_ZHcc_tagFirst_16->SetBorderSize(2);
   Aplanarity_ZHcc_tagFirst_16->SetLogy();
   Aplanarity_ZHcc_tagFirst_16->SetLeftMargin(0.15);
   Aplanarity_ZHcc_tagFirst_16->SetFrameFillStyle(1000);
   Aplanarity_ZHcc_tagFirst_16->SetFrameBorderMode(0);
   Aplanarity_ZHcc_tagFirst_16->SetFrameFillStyle(1000);
   Aplanarity_ZHcc_tagFirst_16->SetFrameBorderMode(0);
   
   TH1D *VH_tagFirst_Aplanarity__451 = new TH1D("VH_tagFirst_Aplanarity__451","",50,0,1);
   VH_tagFirst_Aplanarity__451->SetBinContent(1,2.377438);
   VH_tagFirst_Aplanarity__451->SetBinContent(2,0.230397);
   VH_tagFirst_Aplanarity__451->SetBinContent(3,0.05277344);
   VH_tagFirst_Aplanarity__451->SetBinContent(4,0.0197624);
   VH_tagFirst_Aplanarity__451->SetBinContent(5,0.002943678);
   VH_tagFirst_Aplanarity__451->SetBinContent(6,0.002682947);
   VH_tagFirst_Aplanarity__451->SetBinContent(7,0.0006445096);
   VH_tagFirst_Aplanarity__451->SetBinContent(8,0.001458604);
   VH_tagFirst_Aplanarity__451->SetBinContent(9,0.0004297189);
   VH_tagFirst_Aplanarity__451->SetBinContent(17,0.0002685819);
   VH_tagFirst_Aplanarity__451->SetBinError(1,0.0595697);
   VH_tagFirst_Aplanarity__451->SetBinError(2,0.01817992);
   VH_tagFirst_Aplanarity__451->SetBinError(3,0.008363501);
   VH_tagFirst_Aplanarity__451->SetBinError(4,0.005436698);
   VH_tagFirst_Aplanarity__451->SetBinError(5,0.0009436653);
   VH_tagFirst_Aplanarity__451->SetBinError(6,0.00180278);
   VH_tagFirst_Aplanarity__451->SetBinError(7,0.0004612644);
   VH_tagFirst_Aplanarity__451->SetBinError(8,0.0006179336);
   VH_tagFirst_Aplanarity__451->SetBinError(9,0.0004297189);
   VH_tagFirst_Aplanarity__451->SetBinError(17,0.0002685819);
   VH_tagFirst_Aplanarity__451->SetEntries(4073);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_tagFirst_Aplanarity__451->SetLineColor(ci);
   VH_tagFirst_Aplanarity__451->GetXaxis()->SetTitle("Aplanarity");
   VH_tagFirst_Aplanarity__451->GetXaxis()->SetRange(1,50);
   VH_tagFirst_Aplanarity__451->GetXaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity__451->GetXaxis()->SetTitleOffset(1);
   VH_tagFirst_Aplanarity__451->GetXaxis()->SetTitleFont(42);
   VH_tagFirst_Aplanarity__451->GetYaxis()->SetTitle("Events/0.02");
   VH_tagFirst_Aplanarity__451->GetYaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity__451->GetYaxis()->SetLabelSize(0.05);
   VH_tagFirst_Aplanarity__451->GetYaxis()->SetTitleSize(0.057);
   VH_tagFirst_Aplanarity__451->GetYaxis()->SetTitleOffset(1.2);
   VH_tagFirst_Aplanarity__451->GetYaxis()->SetTitleFont(42);
   VH_tagFirst_Aplanarity__451->GetZaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity__451->GetZaxis()->SetTitleOffset(1);
   VH_tagFirst_Aplanarity__451->GetZaxis()->SetTitleFont(42);
   VH_tagFirst_Aplanarity__451->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Aplanarity_ZHcc_tagFirst_16->Modified();
   Aplanarity_ZHcc_tagFirst_16->cd();
   Aplanarity_ZHcc_tagFirst_16->SetSelected(Aplanarity_ZHcc_tagFirst_16);
}
