#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Aplanarity_WJets_tagFirst_2b1c_18_logY()
{
//=========Macro generated from canvas: Aplanarity_WJets_tagFirst_2b1c_18/Aplanarity_WJets_tagFirst_2b1c_18
//=========  (Thu May 23 20:49:02 2024) by ROOT version 6.28/10
   TCanvas *Aplanarity_WJets_tagFirst_2b1c_18 = new TCanvas("Aplanarity_WJets_tagFirst_2b1c_18", "Aplanarity_WJets_tagFirst_2b1c_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Aplanarity_WJets_tagFirst_2b1c_18->SetHighLightColor(2);
   Aplanarity_WJets_tagFirst_2b1c_18->Range(-0.2,-2.383296,1.133333,5.44115);
   Aplanarity_WJets_tagFirst_2b1c_18->SetFillColor(0);
   Aplanarity_WJets_tagFirst_2b1c_18->SetFillStyle(4000);
   Aplanarity_WJets_tagFirst_2b1c_18->SetBorderMode(0);
   Aplanarity_WJets_tagFirst_2b1c_18->SetBorderSize(2);
   Aplanarity_WJets_tagFirst_2b1c_18->SetLogy();
   Aplanarity_WJets_tagFirst_2b1c_18->SetLeftMargin(0.15);
   Aplanarity_WJets_tagFirst_2b1c_18->SetFrameFillStyle(1000);
   Aplanarity_WJets_tagFirst_2b1c_18->SetFrameBorderMode(0);
   Aplanarity_WJets_tagFirst_2b1c_18->SetFrameFillStyle(1000);
   Aplanarity_WJets_tagFirst_2b1c_18->SetFrameBorderMode(0);
   
   TH1D *VH_tagFirst_2b1c_Aplanarity__2622 = new TH1D("VH_tagFirst_2b1c_Aplanarity__2622","",50,0,1);
   VH_tagFirst_2b1c_Aplanarity__2622->SetBinContent(1,24052.27);
   VH_tagFirst_2b1c_Aplanarity__2622->SetBinContent(2,2559.375);
   VH_tagFirst_2b1c_Aplanarity__2622->SetBinContent(3,682.2633);
   VH_tagFirst_2b1c_Aplanarity__2622->SetBinContent(4,228.5225);
   VH_tagFirst_2b1c_Aplanarity__2622->SetBinContent(5,112.0757);
   VH_tagFirst_2b1c_Aplanarity__2622->SetBinContent(6,71.46205);
   VH_tagFirst_2b1c_Aplanarity__2622->SetBinContent(7,35.91269);
   VH_tagFirst_2b1c_Aplanarity__2622->SetBinContent(8,24.3001);
   VH_tagFirst_2b1c_Aplanarity__2622->SetBinContent(9,3.264295);
   VH_tagFirst_2b1c_Aplanarity__2622->SetBinContent(10,3.312384);
   VH_tagFirst_2b1c_Aplanarity__2622->SetBinContent(11,2.016156);
   VH_tagFirst_2b1c_Aplanarity__2622->SetBinContent(12,8.283273);
   VH_tagFirst_2b1c_Aplanarity__2622->SetBinContent(13,0.1757307);
   VH_tagFirst_2b1c_Aplanarity__2622->SetBinContent(14,0.4334072);
   VH_tagFirst_2b1c_Aplanarity__2622->SetBinContent(15,0.05013937);
   VH_tagFirst_2b1c_Aplanarity__2622->SetBinContent(16,0.4105738);
   VH_tagFirst_2b1c_Aplanarity__2622->SetBinContent(17,0.2821414);
   VH_tagFirst_2b1c_Aplanarity__2622->SetBinContent(18,2.31318);
   VH_tagFirst_2b1c_Aplanarity__2622->SetBinError(1,296.8095);
   VH_tagFirst_2b1c_Aplanarity__2622->SetBinError(2,88.47546);
   VH_tagFirst_2b1c_Aplanarity__2622->SetBinError(3,45.14801);
   VH_tagFirst_2b1c_Aplanarity__2622->SetBinError(4,27.40275);
   VH_tagFirst_2b1c_Aplanarity__2622->SetBinError(5,20.64201);
   VH_tagFirst_2b1c_Aplanarity__2622->SetBinError(6,19.40116);
   VH_tagFirst_2b1c_Aplanarity__2622->SetBinError(7,7.514063);
   VH_tagFirst_2b1c_Aplanarity__2622->SetBinError(8,8.059004);
   VH_tagFirst_2b1c_Aplanarity__2622->SetBinError(9,1.509576);
   VH_tagFirst_2b1c_Aplanarity__2622->SetBinError(10,0.9754908);
   VH_tagFirst_2b1c_Aplanarity__2622->SetBinError(11,0.7890962);
   VH_tagFirst_2b1c_Aplanarity__2622->SetBinError(12,3.881465);
   VH_tagFirst_2b1c_Aplanarity__2622->SetBinError(13,0.1757307);
   VH_tagFirst_2b1c_Aplanarity__2622->SetBinError(14,0.4330194);
   VH_tagFirst_2b1c_Aplanarity__2622->SetBinError(15,0.03637066);
   VH_tagFirst_2b1c_Aplanarity__2622->SetBinError(16,0.4105738);
   VH_tagFirst_2b1c_Aplanarity__2622->SetBinError(17,0.1996721);
   VH_tagFirst_2b1c_Aplanarity__2622->SetBinError(18,2.31318);
   VH_tagFirst_2b1c_Aplanarity__2622->SetEntries(84815);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_tagFirst_2b1c_Aplanarity__2622->SetLineColor(ci);
   VH_tagFirst_2b1c_Aplanarity__2622->GetXaxis()->SetTitle("Aplanarity");
   VH_tagFirst_2b1c_Aplanarity__2622->GetXaxis()->SetRange(1,50);
   VH_tagFirst_2b1c_Aplanarity__2622->GetXaxis()->SetLabelFont(42);
   VH_tagFirst_2b1c_Aplanarity__2622->GetXaxis()->SetTitleOffset(1);
   VH_tagFirst_2b1c_Aplanarity__2622->GetXaxis()->SetTitleFont(42);
   VH_tagFirst_2b1c_Aplanarity__2622->GetYaxis()->SetTitle("Events/0.02");
   VH_tagFirst_2b1c_Aplanarity__2622->GetYaxis()->SetLabelFont(42);
   VH_tagFirst_2b1c_Aplanarity__2622->GetYaxis()->SetLabelSize(0.05);
   VH_tagFirst_2b1c_Aplanarity__2622->GetYaxis()->SetTitleSize(0.057);
   VH_tagFirst_2b1c_Aplanarity__2622->GetYaxis()->SetTitleOffset(1.2);
   VH_tagFirst_2b1c_Aplanarity__2622->GetYaxis()->SetTitleFont(42);
   VH_tagFirst_2b1c_Aplanarity__2622->GetZaxis()->SetLabelFont(42);
   VH_tagFirst_2b1c_Aplanarity__2622->GetZaxis()->SetTitleOffset(1);
   VH_tagFirst_2b1c_Aplanarity__2622->GetZaxis()->SetTitleFont(42);
   VH_tagFirst_2b1c_Aplanarity__2622->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Aplanarity_WJets_tagFirst_2b1c_18->Modified();
   Aplanarity_WJets_tagFirst_2b1c_18->cd();
   Aplanarity_WJets_tagFirst_2b1c_18->SetSelected(Aplanarity_WJets_tagFirst_2b1c_18);
}
