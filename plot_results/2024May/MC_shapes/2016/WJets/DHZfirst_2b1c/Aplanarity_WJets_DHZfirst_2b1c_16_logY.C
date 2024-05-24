#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Aplanarity_WJets_DHZfirst_2b1c_16_logY()
{
//=========Macro generated from canvas: Aplanarity_WJets_DHZfirst_2b1c_16/Aplanarity_WJets_DHZfirst_2b1c_16
//=========  (Thu May 23 20:49:25 2024) by ROOT version 6.28/10
   TCanvas *Aplanarity_WJets_DHZfirst_2b1c_16 = new TCanvas("Aplanarity_WJets_DHZfirst_2b1c_16", "Aplanarity_WJets_DHZfirst_2b1c_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Aplanarity_WJets_DHZfirst_2b1c_16->SetHighLightColor(2);
   Aplanarity_WJets_DHZfirst_2b1c_16->Range(-0.2,-2.442423,1.133333,4.628348);
   Aplanarity_WJets_DHZfirst_2b1c_16->SetFillColor(0);
   Aplanarity_WJets_DHZfirst_2b1c_16->SetFillStyle(4000);
   Aplanarity_WJets_DHZfirst_2b1c_16->SetBorderMode(0);
   Aplanarity_WJets_DHZfirst_2b1c_16->SetBorderSize(2);
   Aplanarity_WJets_DHZfirst_2b1c_16->SetLogy();
   Aplanarity_WJets_DHZfirst_2b1c_16->SetLeftMargin(0.15);
   Aplanarity_WJets_DHZfirst_2b1c_16->SetFrameFillStyle(1000);
   Aplanarity_WJets_DHZfirst_2b1c_16->SetFrameBorderMode(0);
   Aplanarity_WJets_DHZfirst_2b1c_16->SetFrameFillStyle(1000);
   Aplanarity_WJets_DHZfirst_2b1c_16->SetFrameBorderMode(0);
   
   TH1D *VH_DHZfirst_2b1c_Aplanarity__4060 = new TH1D("VH_DHZfirst_2b1c_Aplanarity__4060","",50,0,1);
   VH_DHZfirst_2b1c_Aplanarity__4060->SetBinContent(1,4402.732);
   VH_DHZfirst_2b1c_Aplanarity__4060->SetBinContent(2,488.2521);
   VH_DHZfirst_2b1c_Aplanarity__4060->SetBinContent(3,84.62839);
   VH_DHZfirst_2b1c_Aplanarity__4060->SetBinContent(4,16.36861);
   VH_DHZfirst_2b1c_Aplanarity__4060->SetBinContent(5,9.543956);
   VH_DHZfirst_2b1c_Aplanarity__4060->SetBinContent(6,5.209742);
   VH_DHZfirst_2b1c_Aplanarity__4060->SetBinContent(7,1.852349);
   VH_DHZfirst_2b1c_Aplanarity__4060->SetBinContent(8,0.03678616);
   VH_DHZfirst_2b1c_Aplanarity__4060->SetBinContent(9,0.05535315);
   VH_DHZfirst_2b1c_Aplanarity__4060->SetBinContent(11,0.1352765);
   VH_DHZfirst_2b1c_Aplanarity__4060->SetBinContent(16,0.04031336);
   VH_DHZfirst_2b1c_Aplanarity__4060->SetBinError(1,73.88133);
   VH_DHZfirst_2b1c_Aplanarity__4060->SetBinError(2,29.49188);
   VH_DHZfirst_2b1c_Aplanarity__4060->SetBinError(3,10.75);
   VH_DHZfirst_2b1c_Aplanarity__4060->SetBinError(4,5.711497);
   VH_DHZfirst_2b1c_Aplanarity__4060->SetBinError(5,4.48863);
   VH_DHZfirst_2b1c_Aplanarity__4060->SetBinError(6,4.272034);
   VH_DHZfirst_2b1c_Aplanarity__4060->SetBinError(7,0.9973132);
   VH_DHZfirst_2b1c_Aplanarity__4060->SetBinError(8,0.03678616);
   VH_DHZfirst_2b1c_Aplanarity__4060->SetBinError(9,0.05535315);
   VH_DHZfirst_2b1c_Aplanarity__4060->SetBinError(11,0.1352765);
   VH_DHZfirst_2b1c_Aplanarity__4060->SetBinError(16,0.04031336);
   VH_DHZfirst_2b1c_Aplanarity__4060->SetEntries(40091);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_DHZfirst_2b1c_Aplanarity__4060->SetLineColor(ci);
   VH_DHZfirst_2b1c_Aplanarity__4060->GetXaxis()->SetTitle("Aplanarity");
   VH_DHZfirst_2b1c_Aplanarity__4060->GetXaxis()->SetRange(1,50);
   VH_DHZfirst_2b1c_Aplanarity__4060->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_2b1c_Aplanarity__4060->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_2b1c_Aplanarity__4060->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_2b1c_Aplanarity__4060->GetYaxis()->SetTitle("Events/0.02");
   VH_DHZfirst_2b1c_Aplanarity__4060->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_2b1c_Aplanarity__4060->GetYaxis()->SetLabelSize(0.05);
   VH_DHZfirst_2b1c_Aplanarity__4060->GetYaxis()->SetTitleSize(0.057);
   VH_DHZfirst_2b1c_Aplanarity__4060->GetYaxis()->SetTitleOffset(1.2);
   VH_DHZfirst_2b1c_Aplanarity__4060->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_2b1c_Aplanarity__4060->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_2b1c_Aplanarity__4060->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_2b1c_Aplanarity__4060->GetZaxis()->SetTitleFont(42);
   VH_DHZfirst_2b1c_Aplanarity__4060->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Aplanarity_WJets_DHZfirst_2b1c_16->Modified();
   Aplanarity_WJets_DHZfirst_2b1c_16->cd();
   Aplanarity_WJets_DHZfirst_2b1c_16->SetSelected(Aplanarity_WJets_DHZfirst_2b1c_16);
}
