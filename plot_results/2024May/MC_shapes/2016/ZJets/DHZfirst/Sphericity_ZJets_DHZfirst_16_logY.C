#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Sphericity_ZJets_DHZfirst_16_logY()
{
//=========Macro generated from canvas: Sphericity_ZJets_DHZfirst_16/Sphericity_ZJets_DHZfirst_16
//=========  (Thu May 23 20:48:51 2024) by ROOT version 6.28/10
   TCanvas *Sphericity_ZJets_DHZfirst_16 = new TCanvas("Sphericity_ZJets_DHZfirst_16", "Sphericity_ZJets_DHZfirst_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_ZJets_DHZfirst_16->SetHighLightColor(2);
   Sphericity_ZJets_DHZfirst_16->Range(-0.2,-2.334287,1.133333,3.727049);
   Sphericity_ZJets_DHZfirst_16->SetFillColor(0);
   Sphericity_ZJets_DHZfirst_16->SetFillStyle(4000);
   Sphericity_ZJets_DHZfirst_16->SetBorderMode(0);
   Sphericity_ZJets_DHZfirst_16->SetBorderSize(2);
   Sphericity_ZJets_DHZfirst_16->SetLogy();
   Sphericity_ZJets_DHZfirst_16->SetLeftMargin(0.15);
   Sphericity_ZJets_DHZfirst_16->SetFrameFillStyle(1000);
   Sphericity_ZJets_DHZfirst_16->SetFrameBorderMode(0);
   Sphericity_ZJets_DHZfirst_16->SetFrameFillStyle(1000);
   Sphericity_ZJets_DHZfirst_16->SetFrameBorderMode(0);
   
   TH1D *VH_DHZfirst_Sphericity__1873 = new TH1D("VH_DHZfirst_Sphericity__1873","",25,0,1);
   VH_DHZfirst_Sphericity__1873->SetBinContent(1,697.2141);
   VH_DHZfirst_Sphericity__1873->SetBinContent(2,592.1898);
   VH_DHZfirst_Sphericity__1873->SetBinContent(3,342.5571);
   VH_DHZfirst_Sphericity__1873->SetBinContent(4,197.808);
   VH_DHZfirst_Sphericity__1873->SetBinContent(5,100.3164);
   VH_DHZfirst_Sphericity__1873->SetBinContent(6,49.05756);
   VH_DHZfirst_Sphericity__1873->SetBinContent(7,14.0361);
   VH_DHZfirst_Sphericity__1873->SetBinContent(8,2.617229);
   VH_DHZfirst_Sphericity__1873->SetBinContent(9,1.429405);
   VH_DHZfirst_Sphericity__1873->SetBinContent(10,0.265902);
   VH_DHZfirst_Sphericity__1873->SetBinContent(11,0.1104909);
   VH_DHZfirst_Sphericity__1873->SetBinContent(12,0.06789502);
   VH_DHZfirst_Sphericity__1873->SetBinContent(13,0.207778);
   VH_DHZfirst_Sphericity__1873->SetBinContent(14,0.4108835);
   VH_DHZfirst_Sphericity__1873->SetBinContent(15,0.03740041);
   VH_DHZfirst_Sphericity__1873->SetBinError(1,19.86842);
   VH_DHZfirst_Sphericity__1873->SetBinError(2,18.90725);
   VH_DHZfirst_Sphericity__1873->SetBinError(3,14.21946);
   VH_DHZfirst_Sphericity__1873->SetBinError(4,9.680031);
   VH_DHZfirst_Sphericity__1873->SetBinError(5,5.732567);
   VH_DHZfirst_Sphericity__1873->SetBinError(6,4.749151);
   VH_DHZfirst_Sphericity__1873->SetBinError(7,2.209955);
   VH_DHZfirst_Sphericity__1873->SetBinError(8,0.6819111);
   VH_DHZfirst_Sphericity__1873->SetBinError(9,0.4530526);
   VH_DHZfirst_Sphericity__1873->SetBinError(10,0.137511);
   VH_DHZfirst_Sphericity__1873->SetBinError(11,0.07844191);
   VH_DHZfirst_Sphericity__1873->SetBinError(12,0.06789502);
   VH_DHZfirst_Sphericity__1873->SetBinError(13,0.09379237);
   VH_DHZfirst_Sphericity__1873->SetBinError(14,0.2856213);
   VH_DHZfirst_Sphericity__1873->SetBinError(15,0.03740041);
   VH_DHZfirst_Sphericity__1873->SetEntries(15554);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_DHZfirst_Sphericity__1873->SetLineColor(ci);
   VH_DHZfirst_Sphericity__1873->GetXaxis()->SetTitle("Sphericity");
   VH_DHZfirst_Sphericity__1873->GetXaxis()->SetRange(1,25);
   VH_DHZfirst_Sphericity__1873->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_Sphericity__1873->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_Sphericity__1873->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_Sphericity__1873->GetYaxis()->SetTitle("Events/0.04");
   VH_DHZfirst_Sphericity__1873->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_Sphericity__1873->GetYaxis()->SetLabelSize(0.05);
   VH_DHZfirst_Sphericity__1873->GetYaxis()->SetTitleSize(0.057);
   VH_DHZfirst_Sphericity__1873->GetYaxis()->SetTitleOffset(1.2);
   VH_DHZfirst_Sphericity__1873->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_Sphericity__1873->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_Sphericity__1873->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_Sphericity__1873->GetZaxis()->SetTitleFont(42);
   VH_DHZfirst_Sphericity__1873->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Sphericity_ZJets_DHZfirst_16->Modified();
   Sphericity_ZJets_DHZfirst_16->cd();
   Sphericity_ZJets_DHZfirst_16->SetSelected(Sphericity_ZJets_DHZfirst_16);
}
