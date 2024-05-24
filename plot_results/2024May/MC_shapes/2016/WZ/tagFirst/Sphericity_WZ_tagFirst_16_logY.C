#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Sphericity_WZ_tagFirst_16_logY()
{
//=========Macro generated from canvas: Sphericity_WZ_tagFirst_16/Sphericity_WZ_tagFirst_16
//=========  (Thu May 23 20:48:32 2024) by ROOT version 6.28/10
   TCanvas *Sphericity_WZ_tagFirst_16 = new TCanvas("Sphericity_WZ_tagFirst_16", "Sphericity_WZ_tagFirst_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_WZ_tagFirst_16->SetHighLightColor(2);
   Sphericity_WZ_tagFirst_16->Range(-0.2,-1.738808,1.133333,2.62346);
   Sphericity_WZ_tagFirst_16->SetFillColor(0);
   Sphericity_WZ_tagFirst_16->SetFillStyle(4000);
   Sphericity_WZ_tagFirst_16->SetBorderMode(0);
   Sphericity_WZ_tagFirst_16->SetBorderSize(2);
   Sphericity_WZ_tagFirst_16->SetLogy();
   Sphericity_WZ_tagFirst_16->SetLeftMargin(0.15);
   Sphericity_WZ_tagFirst_16->SetFrameFillStyle(1000);
   Sphericity_WZ_tagFirst_16->SetFrameBorderMode(0);
   Sphericity_WZ_tagFirst_16->SetFrameFillStyle(1000);
   Sphericity_WZ_tagFirst_16->SetFrameBorderMode(0);
   
   TH1D *VH_tagFirst_Sphericity__445 = new TH1D("VH_tagFirst_Sphericity__445","",25,0,1);
   VH_tagFirst_Sphericity__445->SetBinContent(1,81.22394);
   VH_tagFirst_Sphericity__445->SetBinContent(2,64.52844);
   VH_tagFirst_Sphericity__445->SetBinContent(3,38.62208);
   VH_tagFirst_Sphericity__445->SetBinContent(4,22.20621);
   VH_tagFirst_Sphericity__445->SetBinContent(5,12.54802);
   VH_tagFirst_Sphericity__445->SetBinContent(6,7.614201);
   VH_tagFirst_Sphericity__445->SetBinContent(7,3.093682);
   VH_tagFirst_Sphericity__445->SetBinContent(8,2.164956);
   VH_tagFirst_Sphericity__445->SetBinContent(9,0.7899386);
   VH_tagFirst_Sphericity__445->SetBinContent(10,1.507659);
   VH_tagFirst_Sphericity__445->SetBinContent(11,0.5438525);
   VH_tagFirst_Sphericity__445->SetBinContent(12,0.2543798);
   VH_tagFirst_Sphericity__445->SetBinContent(13,0.6549945);
   VH_tagFirst_Sphericity__445->SetBinContent(14,0.217373);
   VH_tagFirst_Sphericity__445->SetBinContent(16,0.0996435);
   VH_tagFirst_Sphericity__445->SetBinContent(17,0.443291);
   VH_tagFirst_Sphericity__445->SetBinContent(20,0.1340675);
   VH_tagFirst_Sphericity__445->SetBinError(1,2.814329);
   VH_tagFirst_Sphericity__445->SetBinError(2,2.481464);
   VH_tagFirst_Sphericity__445->SetBinError(3,1.923139);
   VH_tagFirst_Sphericity__445->SetBinError(4,1.473753);
   VH_tagFirst_Sphericity__445->SetBinError(5,1.09872);
   VH_tagFirst_Sphericity__445->SetBinError(6,0.8680161);
   VH_tagFirst_Sphericity__445->SetBinError(7,0.5500068);
   VH_tagFirst_Sphericity__445->SetBinError(8,0.4723561);
   VH_tagFirst_Sphericity__445->SetBinError(9,0.2831515);
   VH_tagFirst_Sphericity__445->SetBinError(10,0.4060029);
   VH_tagFirst_Sphericity__445->SetBinError(11,0.2435878);
   VH_tagFirst_Sphericity__445->SetBinError(12,0.1474026);
   VH_tagFirst_Sphericity__445->SetBinError(13,0.2524029);
   VH_tagFirst_Sphericity__445->SetBinError(14,0.1260639);
   VH_tagFirst_Sphericity__445->SetBinError(16,0.0996435);
   VH_tagFirst_Sphericity__445->SetBinError(17,0.2276518);
   VH_tagFirst_Sphericity__445->SetBinError(20,0.1340675);
   VH_tagFirst_Sphericity__445->SetEntries(2557);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_tagFirst_Sphericity__445->SetLineColor(ci);
   VH_tagFirst_Sphericity__445->GetXaxis()->SetTitle("Sphericity");
   VH_tagFirst_Sphericity__445->GetXaxis()->SetRange(1,25);
   VH_tagFirst_Sphericity__445->GetXaxis()->SetLabelFont(42);
   VH_tagFirst_Sphericity__445->GetXaxis()->SetTitleOffset(1);
   VH_tagFirst_Sphericity__445->GetXaxis()->SetTitleFont(42);
   VH_tagFirst_Sphericity__445->GetYaxis()->SetTitle("Events/0.04");
   VH_tagFirst_Sphericity__445->GetYaxis()->SetLabelFont(42);
   VH_tagFirst_Sphericity__445->GetYaxis()->SetLabelSize(0.05);
   VH_tagFirst_Sphericity__445->GetYaxis()->SetTitleSize(0.057);
   VH_tagFirst_Sphericity__445->GetYaxis()->SetTitleOffset(1.2);
   VH_tagFirst_Sphericity__445->GetYaxis()->SetTitleFont(42);
   VH_tagFirst_Sphericity__445->GetZaxis()->SetLabelFont(42);
   VH_tagFirst_Sphericity__445->GetZaxis()->SetTitleOffset(1);
   VH_tagFirst_Sphericity__445->GetZaxis()->SetTitleFont(42);
   VH_tagFirst_Sphericity__445->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Sphericity_WZ_tagFirst_16->Modified();
   Sphericity_WZ_tagFirst_16->cd();
   Sphericity_WZ_tagFirst_16->SetSelected(Sphericity_WZ_tagFirst_16);
}
