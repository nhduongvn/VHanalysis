#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Sphericity_WJets_DHZfirst_16_logY()
{
//=========Macro generated from canvas: Sphericity_WJets_DHZfirst_16/Sphericity_WJets_DHZfirst_16
//=========  (Thu May 23 20:48:51 2024) by ROOT version 6.28/10
   TCanvas *Sphericity_WJets_DHZfirst_16 = new TCanvas("Sphericity_WJets_DHZfirst_16", "Sphericity_WJets_DHZfirst_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_WJets_DHZfirst_16->SetHighLightColor(2);
   Sphericity_WJets_DHZfirst_16->Range(-0.2,-4.670053,1.133333,3.718442);
   Sphericity_WJets_DHZfirst_16->SetFillColor(0);
   Sphericity_WJets_DHZfirst_16->SetFillStyle(4000);
   Sphericity_WJets_DHZfirst_16->SetBorderMode(0);
   Sphericity_WJets_DHZfirst_16->SetBorderSize(2);
   Sphericity_WJets_DHZfirst_16->SetLogy();
   Sphericity_WJets_DHZfirst_16->SetLeftMargin(0.15);
   Sphericity_WJets_DHZfirst_16->SetFrameFillStyle(1000);
   Sphericity_WJets_DHZfirst_16->SetFrameBorderMode(0);
   Sphericity_WJets_DHZfirst_16->SetFrameFillStyle(1000);
   Sphericity_WJets_DHZfirst_16->SetFrameBorderMode(0);
   
   TH1D *VH_DHZfirst_Sphericity__1870 = new TH1D("VH_DHZfirst_Sphericity__1870","",25,0,1);
   VH_DHZfirst_Sphericity__1870->SetBinContent(1,399.9845);
   VH_DHZfirst_Sphericity__1870->SetBinContent(2,378.8293);
   VH_DHZfirst_Sphericity__1870->SetBinContent(3,181.3864);
   VH_DHZfirst_Sphericity__1870->SetBinContent(4,114.3275);
   VH_DHZfirst_Sphericity__1870->SetBinContent(5,53.1867);
   VH_DHZfirst_Sphericity__1870->SetBinContent(6,26.13059);
   VH_DHZfirst_Sphericity__1870->SetBinContent(7,7.454525);
   VH_DHZfirst_Sphericity__1870->SetBinContent(8,2.929384);
   VH_DHZfirst_Sphericity__1870->SetBinContent(9,1.509787);
   VH_DHZfirst_Sphericity__1870->SetBinContent(10,0.2172731);
   VH_DHZfirst_Sphericity__1870->SetBinContent(11,0.8676831);
   VH_DHZfirst_Sphericity__1870->SetBinContent(13,0.2789971);
   VH_DHZfirst_Sphericity__1870->SetBinContent(14,0.03170269);
   VH_DHZfirst_Sphericity__1870->SetBinContent(16,0.0002950033);
   VH_DHZfirst_Sphericity__1870->SetBinContent(17,0.1352765);
   VH_DHZfirst_Sphericity__1870->SetBinError(1,22.61552);
   VH_DHZfirst_Sphericity__1870->SetBinError(2,24.84495);
   VH_DHZfirst_Sphericity__1870->SetBinError(3,15.97645);
   VH_DHZfirst_Sphericity__1870->SetBinError(4,11.27755);
   VH_DHZfirst_Sphericity__1870->SetBinError(5,6.834737);
   VH_DHZfirst_Sphericity__1870->SetBinError(6,3.378081);
   VH_DHZfirst_Sphericity__1870->SetBinError(7,1.897468);
   VH_DHZfirst_Sphericity__1870->SetBinError(8,1.46511);
   VH_DHZfirst_Sphericity__1870->SetBinError(9,1.224522);
   VH_DHZfirst_Sphericity__1870->SetBinError(10,0.1408445);
   VH_DHZfirst_Sphericity__1870->SetBinError(11,0.8566116);
   VH_DHZfirst_Sphericity__1870->SetBinError(13,0.2789971);
   VH_DHZfirst_Sphericity__1870->SetBinError(14,0.03170269);
   VH_DHZfirst_Sphericity__1870->SetBinError(16,0.0002950033);
   VH_DHZfirst_Sphericity__1870->SetBinError(17,0.1352765);
   VH_DHZfirst_Sphericity__1870->SetEntries(9167);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_DHZfirst_Sphericity__1870->SetLineColor(ci);
   VH_DHZfirst_Sphericity__1870->GetXaxis()->SetTitle("Sphericity");
   VH_DHZfirst_Sphericity__1870->GetXaxis()->SetRange(1,25);
   VH_DHZfirst_Sphericity__1870->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_Sphericity__1870->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_Sphericity__1870->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_Sphericity__1870->GetYaxis()->SetTitle("Events/0.04");
   VH_DHZfirst_Sphericity__1870->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_Sphericity__1870->GetYaxis()->SetLabelSize(0.05);
   VH_DHZfirst_Sphericity__1870->GetYaxis()->SetTitleSize(0.057);
   VH_DHZfirst_Sphericity__1870->GetYaxis()->SetTitleOffset(1.2);
   VH_DHZfirst_Sphericity__1870->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_Sphericity__1870->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_Sphericity__1870->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_Sphericity__1870->GetZaxis()->SetTitleFont(42);
   VH_DHZfirst_Sphericity__1870->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Sphericity_WJets_DHZfirst_16->Modified();
   Sphericity_WJets_DHZfirst_16->cd();
   Sphericity_WJets_DHZfirst_16->SetSelected(Sphericity_WJets_DHZfirst_16);
}
