#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Sphericity_WJets_DHZfirst_2b1c_18()
{
//=========Macro generated from canvas: Sphericity_WJets_DHZfirst_2b1c_18/Sphericity_WJets_DHZfirst_2b1c_18
//=========  (Fri May 24 12:43:07 2024) by ROOT version 6.28/10
   TCanvas *Sphericity_WJets_DHZfirst_2b1c_18 = new TCanvas("Sphericity_WJets_DHZfirst_2b1c_18", "Sphericity_WJets_DHZfirst_2b1c_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_WJets_DHZfirst_2b1c_18->SetHighLightColor(2);
   Sphericity_WJets_DHZfirst_2b1c_18->Range(-0.2,-261.2249,1.133333,2351.024);
   Sphericity_WJets_DHZfirst_2b1c_18->SetFillColor(0);
   Sphericity_WJets_DHZfirst_2b1c_18->SetFillStyle(4000);
   Sphericity_WJets_DHZfirst_2b1c_18->SetBorderMode(0);
   Sphericity_WJets_DHZfirst_2b1c_18->SetBorderSize(2);
   Sphericity_WJets_DHZfirst_2b1c_18->SetLeftMargin(0.15);
   Sphericity_WJets_DHZfirst_2b1c_18->SetFrameFillStyle(1000);
   Sphericity_WJets_DHZfirst_2b1c_18->SetFrameBorderMode(0);
   Sphericity_WJets_DHZfirst_2b1c_18->SetFrameFillStyle(1000);
   Sphericity_WJets_DHZfirst_2b1c_18->SetFrameBorderMode(0);
   
   TH1D *VH_DHZfirst_2b1c_Sphericity__4032 = new TH1D("VH_DHZfirst_2b1c_Sphericity__4032","",25,0,1);
   VH_DHZfirst_2b1c_Sphericity__4032->SetBinContent(1,1990.285);
   VH_DHZfirst_2b1c_Sphericity__4032->SetBinContent(2,1702.088);
   VH_DHZfirst_2b1c_Sphericity__4032->SetBinContent(3,1004.141);
   VH_DHZfirst_2b1c_Sphericity__4032->SetBinContent(4,582.2753);
   VH_DHZfirst_2b1c_Sphericity__4032->SetBinContent(5,250.1338);
   VH_DHZfirst_2b1c_Sphericity__4032->SetBinContent(6,117.4326);
   VH_DHZfirst_2b1c_Sphericity__4032->SetBinContent(7,40.44904);
   VH_DHZfirst_2b1c_Sphericity__4032->SetBinContent(8,18.93);
   VH_DHZfirst_2b1c_Sphericity__4032->SetBinContent(9,2.52249);
   VH_DHZfirst_2b1c_Sphericity__4032->SetBinContent(10,7.61156);
   VH_DHZfirst_2b1c_Sphericity__4032->SetBinContent(11,2.935518);
   VH_DHZfirst_2b1c_Sphericity__4032->SetBinContent(12,7.149955);
   VH_DHZfirst_2b1c_Sphericity__4032->SetBinContent(13,1.302084);
   VH_DHZfirst_2b1c_Sphericity__4032->SetBinContent(14,0.2755806);
   VH_DHZfirst_2b1c_Sphericity__4032->SetBinContent(15,0.1108359);
   VH_DHZfirst_2b1c_Sphericity__4032->SetBinContent(17,0.6131666);
   VH_DHZfirst_2b1c_Sphericity__4032->SetBinError(1,89.21906);
   VH_DHZfirst_2b1c_Sphericity__4032->SetBinError(2,74.71757);
   VH_DHZfirst_2b1c_Sphericity__4032->SetBinError(3,57.92942);
   VH_DHZfirst_2b1c_Sphericity__4032->SetBinError(4,46.45495);
   VH_DHZfirst_2b1c_Sphericity__4032->SetBinError(5,18.4271);
   VH_DHZfirst_2b1c_Sphericity__4032->SetBinError(6,21.30503);
   VH_DHZfirst_2b1c_Sphericity__4032->SetBinError(7,10.90082);
   VH_DHZfirst_2b1c_Sphericity__4032->SetBinError(8,5.684386);
   VH_DHZfirst_2b1c_Sphericity__4032->SetBinError(9,0.878219);
   VH_DHZfirst_2b1c_Sphericity__4032->SetBinError(10,5.27269);
   VH_DHZfirst_2b1c_Sphericity__4032->SetBinError(11,1.806261);
   VH_DHZfirst_2b1c_Sphericity__4032->SetBinError(12,3.949081);
   VH_DHZfirst_2b1c_Sphericity__4032->SetBinError(13,0.9066994);
   VH_DHZfirst_2b1c_Sphericity__4032->SetBinError(14,0.1771431);
   VH_DHZfirst_2b1c_Sphericity__4032->SetBinError(15,0.09993002);
   VH_DHZfirst_2b1c_Sphericity__4032->SetBinError(17,0.6131666);
   VH_DHZfirst_2b1c_Sphericity__4032->SetEntries(14697);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_DHZfirst_2b1c_Sphericity__4032->SetLineColor(ci);
   VH_DHZfirst_2b1c_Sphericity__4032->GetXaxis()->SetTitle("Sphericity");
   VH_DHZfirst_2b1c_Sphericity__4032->GetXaxis()->SetRange(1,25);
   VH_DHZfirst_2b1c_Sphericity__4032->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_2b1c_Sphericity__4032->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_2b1c_Sphericity__4032->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_2b1c_Sphericity__4032->GetYaxis()->SetTitle("Events/0.04");
   VH_DHZfirst_2b1c_Sphericity__4032->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_2b1c_Sphericity__4032->GetYaxis()->SetLabelSize(0.05);
   VH_DHZfirst_2b1c_Sphericity__4032->GetYaxis()->SetTitleSize(0.057);
   VH_DHZfirst_2b1c_Sphericity__4032->GetYaxis()->SetTitleOffset(1.2);
   VH_DHZfirst_2b1c_Sphericity__4032->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_2b1c_Sphericity__4032->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_2b1c_Sphericity__4032->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_2b1c_Sphericity__4032->GetZaxis()->SetTitleFont(42);
   VH_DHZfirst_2b1c_Sphericity__4032->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Sphericity_WJets_DHZfirst_2b1c_18->Modified();
   Sphericity_WJets_DHZfirst_2b1c_18->cd();
   Sphericity_WJets_DHZfirst_2b1c_18->SetSelected(Sphericity_WJets_DHZfirst_2b1c_18);
}
