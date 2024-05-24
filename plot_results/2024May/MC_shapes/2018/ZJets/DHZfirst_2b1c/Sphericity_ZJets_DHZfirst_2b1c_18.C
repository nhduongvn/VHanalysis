#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Sphericity_ZJets_DHZfirst_2b1c_18()
{
//=========Macro generated from canvas: Sphericity_ZJets_DHZfirst_2b1c_18/Sphericity_ZJets_DHZfirst_2b1c_18
//=========  (Fri May 24 12:43:07 2024) by ROOT version 6.28/10
   TCanvas *Sphericity_ZJets_DHZfirst_2b1c_18 = new TCanvas("Sphericity_ZJets_DHZfirst_2b1c_18", "Sphericity_ZJets_DHZfirst_2b1c_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_ZJets_DHZfirst_2b1c_18->SetHighLightColor(2);
   Sphericity_ZJets_DHZfirst_2b1c_18->Range(-0.2,-597.0819,1.133333,5373.736);
   Sphericity_ZJets_DHZfirst_2b1c_18->SetFillColor(0);
   Sphericity_ZJets_DHZfirst_2b1c_18->SetFillStyle(4000);
   Sphericity_ZJets_DHZfirst_2b1c_18->SetBorderMode(0);
   Sphericity_ZJets_DHZfirst_2b1c_18->SetBorderSize(2);
   Sphericity_ZJets_DHZfirst_2b1c_18->SetLeftMargin(0.15);
   Sphericity_ZJets_DHZfirst_2b1c_18->SetFrameFillStyle(1000);
   Sphericity_ZJets_DHZfirst_2b1c_18->SetFrameBorderMode(0);
   Sphericity_ZJets_DHZfirst_2b1c_18->SetFrameFillStyle(1000);
   Sphericity_ZJets_DHZfirst_2b1c_18->SetFrameBorderMode(0);
   
   TH1D *VH_DHZfirst_2b1c_Sphericity__4035 = new TH1D("VH_DHZfirst_2b1c_Sphericity__4035","",25,0,1);
   VH_DHZfirst_2b1c_Sphericity__4035->SetBinContent(1,4549.195);
   VH_DHZfirst_2b1c_Sphericity__4035->SetBinContent(2,4112.106);
   VH_DHZfirst_2b1c_Sphericity__4035->SetBinContent(3,2255.296);
   VH_DHZfirst_2b1c_Sphericity__4035->SetBinContent(4,1353.468);
   VH_DHZfirst_2b1c_Sphericity__4035->SetBinContent(5,748.2187);
   VH_DHZfirst_2b1c_Sphericity__4035->SetBinContent(6,300.0219);
   VH_DHZfirst_2b1c_Sphericity__4035->SetBinContent(7,89.12818);
   VH_DHZfirst_2b1c_Sphericity__4035->SetBinContent(8,22.15239);
   VH_DHZfirst_2b1c_Sphericity__4035->SetBinContent(9,7.929055);
   VH_DHZfirst_2b1c_Sphericity__4035->SetBinContent(10,3.102032);
   VH_DHZfirst_2b1c_Sphericity__4035->SetBinContent(11,3.086069);
   VH_DHZfirst_2b1c_Sphericity__4035->SetBinContent(12,1.878258);
   VH_DHZfirst_2b1c_Sphericity__4035->SetBinContent(13,0.7790529);
   VH_DHZfirst_2b1c_Sphericity__4035->SetBinContent(15,0.1898332);
   VH_DHZfirst_2b1c_Sphericity__4035->SetBinContent(16,0.5732604);
   VH_DHZfirst_2b1c_Sphericity__4035->SetBinContent(17,0.1265579);
   VH_DHZfirst_2b1c_Sphericity__4035->SetBinContent(18,0.3423439);
   VH_DHZfirst_2b1c_Sphericity__4035->SetBinError(1,68.02074);
   VH_DHZfirst_2b1c_Sphericity__4035->SetBinError(2,68.30017);
   VH_DHZfirst_2b1c_Sphericity__4035->SetBinError(3,45.21717);
   VH_DHZfirst_2b1c_Sphericity__4035->SetBinError(4,37.60934);
   VH_DHZfirst_2b1c_Sphericity__4035->SetBinError(5,28.64514);
   VH_DHZfirst_2b1c_Sphericity__4035->SetBinError(6,15.50014);
   VH_DHZfirst_2b1c_Sphericity__4035->SetBinError(7,7.149235);
   VH_DHZfirst_2b1c_Sphericity__4035->SetBinError(8,3.693337);
   VH_DHZfirst_2b1c_Sphericity__4035->SetBinError(9,1.48711);
   VH_DHZfirst_2b1c_Sphericity__4035->SetBinError(10,0.9536196);
   VH_DHZfirst_2b1c_Sphericity__4035->SetBinError(11,0.9990731);
   VH_DHZfirst_2b1c_Sphericity__4035->SetBinError(12,0.6449082);
   VH_DHZfirst_2b1c_Sphericity__4035->SetBinError(13,0.545096);
   VH_DHZfirst_2b1c_Sphericity__4035->SetBinError(15,0.1898332);
   VH_DHZfirst_2b1c_Sphericity__4035->SetBinError(16,0.297488);
   VH_DHZfirst_2b1c_Sphericity__4035->SetBinError(17,0.1265579);
   VH_DHZfirst_2b1c_Sphericity__4035->SetBinError(18,0.3423439);
   VH_DHZfirst_2b1c_Sphericity__4035->SetEntries(43930);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_DHZfirst_2b1c_Sphericity__4035->SetLineColor(ci);
   VH_DHZfirst_2b1c_Sphericity__4035->GetXaxis()->SetTitle("Sphericity");
   VH_DHZfirst_2b1c_Sphericity__4035->GetXaxis()->SetRange(1,25);
   VH_DHZfirst_2b1c_Sphericity__4035->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_2b1c_Sphericity__4035->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_2b1c_Sphericity__4035->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_2b1c_Sphericity__4035->GetYaxis()->SetTitle("Events/0.04");
   VH_DHZfirst_2b1c_Sphericity__4035->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_2b1c_Sphericity__4035->GetYaxis()->SetLabelSize(0.05);
   VH_DHZfirst_2b1c_Sphericity__4035->GetYaxis()->SetTitleSize(0.057);
   VH_DHZfirst_2b1c_Sphericity__4035->GetYaxis()->SetTitleOffset(1.2);
   VH_DHZfirst_2b1c_Sphericity__4035->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_2b1c_Sphericity__4035->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_2b1c_Sphericity__4035->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_2b1c_Sphericity__4035->GetZaxis()->SetTitleFont(42);
   VH_DHZfirst_2b1c_Sphericity__4035->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Sphericity_ZJets_DHZfirst_2b1c_18->Modified();
   Sphericity_ZJets_DHZfirst_2b1c_18->cd();
   Sphericity_ZJets_DHZfirst_2b1c_18->SetSelected(Sphericity_ZJets_DHZfirst_2b1c_18);
}
