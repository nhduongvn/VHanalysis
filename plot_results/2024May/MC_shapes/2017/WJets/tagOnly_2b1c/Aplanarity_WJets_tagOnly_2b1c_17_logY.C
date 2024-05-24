#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Aplanarity_WJets_tagOnly_2b1c_17_logY()
{
//=========Macro generated from canvas: Aplanarity_WJets_tagOnly_2b1c_17/Aplanarity_WJets_tagOnly_2b1c_17
//=========  (Thu May 23 20:49:13 2024) by ROOT version 6.28/10
   TCanvas *Aplanarity_WJets_tagOnly_2b1c_17 = new TCanvas("Aplanarity_WJets_tagOnly_2b1c_17", "Aplanarity_WJets_tagOnly_2b1c_17",0,0,600,600);
   gStyle->SetOptStat(0);
   Aplanarity_WJets_tagOnly_2b1c_17->SetHighLightColor(2);
   Aplanarity_WJets_tagOnly_2b1c_17->Range(-0.2,-1.984794,1.133333,5.109533);
   Aplanarity_WJets_tagOnly_2b1c_17->SetFillColor(0);
   Aplanarity_WJets_tagOnly_2b1c_17->SetFillStyle(4000);
   Aplanarity_WJets_tagOnly_2b1c_17->SetBorderMode(0);
   Aplanarity_WJets_tagOnly_2b1c_17->SetBorderSize(2);
   Aplanarity_WJets_tagOnly_2b1c_17->SetLogy();
   Aplanarity_WJets_tagOnly_2b1c_17->SetLeftMargin(0.15);
   Aplanarity_WJets_tagOnly_2b1c_17->SetFrameFillStyle(1000);
   Aplanarity_WJets_tagOnly_2b1c_17->SetFrameBorderMode(0);
   Aplanarity_WJets_tagOnly_2b1c_17->SetFrameFillStyle(1000);
   Aplanarity_WJets_tagOnly_2b1c_17->SetFrameBorderMode(0);
   
   TH1D *VH_tagOnly_2b1c_Aplanarity__3341 = new TH1D("VH_tagOnly_2b1c_Aplanarity__3341","",50,0,1);
   VH_tagOnly_2b1c_Aplanarity__3341->SetBinContent(1,13260.24);
   VH_tagOnly_2b1c_Aplanarity__3341->SetBinContent(2,1553.916);
   VH_tagOnly_2b1c_Aplanarity__3341->SetBinContent(3,328.1893);
   VH_tagOnly_2b1c_Aplanarity__3341->SetBinContent(4,118.0733);
   VH_tagOnly_2b1c_Aplanarity__3341->SetBinContent(5,43.15408);
   VH_tagOnly_2b1c_Aplanarity__3341->SetBinContent(6,24.88877);
   VH_tagOnly_2b1c_Aplanarity__3341->SetBinContent(7,17.48346);
   VH_tagOnly_2b1c_Aplanarity__3341->SetBinContent(8,10.21585);
   VH_tagOnly_2b1c_Aplanarity__3341->SetBinContent(9,2.841441);
   VH_tagOnly_2b1c_Aplanarity__3341->SetBinContent(10,2.017017);
   VH_tagOnly_2b1c_Aplanarity__3341->SetBinContent(11,0.9630718);
   VH_tagOnly_2b1c_Aplanarity__3341->SetBinContent(12,0.7409504);
   VH_tagOnly_2b1c_Aplanarity__3341->SetBinContent(13,0.2123043);
   VH_tagOnly_2b1c_Aplanarity__3341->SetBinContent(14,0.5829755);
   VH_tagOnly_2b1c_Aplanarity__3341->SetBinContent(15,0.1060887);
   VH_tagOnly_2b1c_Aplanarity__3341->SetBinContent(18,0.2801733);
   VH_tagOnly_2b1c_Aplanarity__3341->SetBinError(1,128.7916);
   VH_tagOnly_2b1c_Aplanarity__3341->SetBinError(2,50.81988);
   VH_tagOnly_2b1c_Aplanarity__3341->SetBinError(3,22.18277);
   VH_tagOnly_2b1c_Aplanarity__3341->SetBinError(4,12.76028);
   VH_tagOnly_2b1c_Aplanarity__3341->SetBinError(5,5.504206);
   VH_tagOnly_2b1c_Aplanarity__3341->SetBinError(6,5.649316);
   VH_tagOnly_2b1c_Aplanarity__3341->SetBinError(7,8.82409);
   VH_tagOnly_2b1c_Aplanarity__3341->SetBinError(8,3.152007);
   VH_tagOnly_2b1c_Aplanarity__3341->SetBinError(9,0.612391);
   VH_tagOnly_2b1c_Aplanarity__3341->SetBinError(10,0.7946394);
   VH_tagOnly_2b1c_Aplanarity__3341->SetBinError(11,0.2864614);
   VH_tagOnly_2b1c_Aplanarity__3341->SetBinError(12,0.3634056);
   VH_tagOnly_2b1c_Aplanarity__3341->SetBinError(13,0.1170185);
   VH_tagOnly_2b1c_Aplanarity__3341->SetBinError(14,0.3641113);
   VH_tagOnly_2b1c_Aplanarity__3341->SetBinError(15,0.06323193);
   VH_tagOnly_2b1c_Aplanarity__3341->SetBinError(18,0.2801733);
   VH_tagOnly_2b1c_Aplanarity__3341->SetEntries(96679);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_tagOnly_2b1c_Aplanarity__3341->SetLineColor(ci);
   VH_tagOnly_2b1c_Aplanarity__3341->GetXaxis()->SetTitle("Aplanarity");
   VH_tagOnly_2b1c_Aplanarity__3341->GetXaxis()->SetRange(1,50);
   VH_tagOnly_2b1c_Aplanarity__3341->GetXaxis()->SetLabelFont(42);
   VH_tagOnly_2b1c_Aplanarity__3341->GetXaxis()->SetTitleOffset(1);
   VH_tagOnly_2b1c_Aplanarity__3341->GetXaxis()->SetTitleFont(42);
   VH_tagOnly_2b1c_Aplanarity__3341->GetYaxis()->SetTitle("Events/0.02");
   VH_tagOnly_2b1c_Aplanarity__3341->GetYaxis()->SetLabelFont(42);
   VH_tagOnly_2b1c_Aplanarity__3341->GetYaxis()->SetLabelSize(0.05);
   VH_tagOnly_2b1c_Aplanarity__3341->GetYaxis()->SetTitleSize(0.057);
   VH_tagOnly_2b1c_Aplanarity__3341->GetYaxis()->SetTitleOffset(1.2);
   VH_tagOnly_2b1c_Aplanarity__3341->GetYaxis()->SetTitleFont(42);
   VH_tagOnly_2b1c_Aplanarity__3341->GetZaxis()->SetLabelFont(42);
   VH_tagOnly_2b1c_Aplanarity__3341->GetZaxis()->SetTitleOffset(1);
   VH_tagOnly_2b1c_Aplanarity__3341->GetZaxis()->SetTitleFont(42);
   VH_tagOnly_2b1c_Aplanarity__3341->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 36.8 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Aplanarity_WJets_tagOnly_2b1c_17->Modified();
   Aplanarity_WJets_tagOnly_2b1c_17->cd();
   Aplanarity_WJets_tagOnly_2b1c_17->SetSelected(Aplanarity_WJets_tagOnly_2b1c_17);
}
