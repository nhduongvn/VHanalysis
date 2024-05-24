#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Sphericity_WJets_DHZfirst_2b1c_16()
{
//=========Macro generated from canvas: Sphericity_WJets_DHZfirst_2b1c_16/Sphericity_WJets_DHZfirst_2b1c_16
//=========  (Fri May 24 12:43:07 2024) by ROOT version 6.28/10
   TCanvas *Sphericity_WJets_DHZfirst_2b1c_16 = new TCanvas("Sphericity_WJets_DHZfirst_2b1c_16", "Sphericity_WJets_DHZfirst_2b1c_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_WJets_DHZfirst_2b1c_16->SetHighLightColor(2);
   Sphericity_WJets_DHZfirst_2b1c_16->Range(-0.2,-221.2858,1.133333,1991.572);
   Sphericity_WJets_DHZfirst_2b1c_16->SetFillColor(0);
   Sphericity_WJets_DHZfirst_2b1c_16->SetFillStyle(4000);
   Sphericity_WJets_DHZfirst_2b1c_16->SetBorderMode(0);
   Sphericity_WJets_DHZfirst_2b1c_16->SetBorderSize(2);
   Sphericity_WJets_DHZfirst_2b1c_16->SetLeftMargin(0.15);
   Sphericity_WJets_DHZfirst_2b1c_16->SetFrameFillStyle(1000);
   Sphericity_WJets_DHZfirst_2b1c_16->SetFrameBorderMode(0);
   Sphericity_WJets_DHZfirst_2b1c_16->SetFrameFillStyle(1000);
   Sphericity_WJets_DHZfirst_2b1c_16->SetFrameBorderMode(0);
   
   TH1D *VH_DHZfirst_2b1c_Sphericity__4030 = new TH1D("VH_DHZfirst_2b1c_Sphericity__4030","",25,0,1);
   VH_DHZfirst_2b1c_Sphericity__4030->SetBinContent(1,1685.987);
   VH_DHZfirst_2b1c_Sphericity__4030->SetBinContent(2,1528.324);
   VH_DHZfirst_2b1c_Sphericity__4030->SetBinContent(3,855.3843);
   VH_DHZfirst_2b1c_Sphericity__4030->SetBinContent(4,506.5818);
   VH_DHZfirst_2b1c_Sphericity__4030->SetBinContent(5,240.7419);
   VH_DHZfirst_2b1c_Sphericity__4030->SetBinContent(6,124.1261);
   VH_DHZfirst_2b1c_Sphericity__4030->SetBinContent(7,38.42736);
   VH_DHZfirst_2b1c_Sphericity__4030->SetBinContent(8,16.76702);
   VH_DHZfirst_2b1c_Sphericity__4030->SetBinContent(9,6.914622);
   VH_DHZfirst_2b1c_Sphericity__4030->SetBinContent(10,1.411698);
   VH_DHZfirst_2b1c_Sphericity__4030->SetBinContent(11,1.605475);
   VH_DHZfirst_2b1c_Sphericity__4030->SetBinContent(12,0.3722653);
   VH_DHZfirst_2b1c_Sphericity__4030->SetBinContent(13,1.148883);
   VH_DHZfirst_2b1c_Sphericity__4030->SetBinContent(14,0.8022252);
   VH_DHZfirst_2b1c_Sphericity__4030->SetBinContent(15,0.04778172);
   VH_DHZfirst_2b1c_Sphericity__4030->SetBinContent(16,0.0002950033);
   VH_DHZfirst_2b1c_Sphericity__4030->SetBinContent(17,0.1352765);
   VH_DHZfirst_2b1c_Sphericity__4030->SetBinContent(18,0.03678616);
   VH_DHZfirst_2b1c_Sphericity__4030->SetBinContent(20,0.04031336);
   VH_DHZfirst_2b1c_Sphericity__4030->SetBinError(1,44.1991);
   VH_DHZfirst_2b1c_Sphericity__4030->SetBinError(2,46.8356);
   VH_DHZfirst_2b1c_Sphericity__4030->SetBinError(3,34.91724);
   VH_DHZfirst_2b1c_Sphericity__4030->SetBinError(4,26.32988);
   VH_DHZfirst_2b1c_Sphericity__4030->SetBinError(5,14.91036);
   VH_DHZfirst_2b1c_Sphericity__4030->SetBinError(6,11.6549);
   VH_DHZfirst_2b1c_Sphericity__4030->SetBinError(7,6.893468);
   VH_DHZfirst_2b1c_Sphericity__4030->SetBinError(8,6.600423);
   VH_DHZfirst_2b1c_Sphericity__4030->SetBinError(9,2.144695);
   VH_DHZfirst_2b1c_Sphericity__4030->SetBinError(10,0.5426587);
   VH_DHZfirst_2b1c_Sphericity__4030->SetBinError(11,0.9589217);
   VH_DHZfirst_2b1c_Sphericity__4030->SetBinError(12,0.3314242);
   VH_DHZfirst_2b1c_Sphericity__4030->SetBinError(13,0.7330871);
   VH_DHZfirst_2b1c_Sphericity__4030->SetBinError(14,0.6977377);
   VH_DHZfirst_2b1c_Sphericity__4030->SetBinError(15,0.04778172);
   VH_DHZfirst_2b1c_Sphericity__4030->SetBinError(16,0.0002950033);
   VH_DHZfirst_2b1c_Sphericity__4030->SetBinError(17,0.1352765);
   VH_DHZfirst_2b1c_Sphericity__4030->SetBinError(18,0.03678616);
   VH_DHZfirst_2b1c_Sphericity__4030->SetBinError(20,0.04031336);
   VH_DHZfirst_2b1c_Sphericity__4030->SetEntries(40091);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_DHZfirst_2b1c_Sphericity__4030->SetLineColor(ci);
   VH_DHZfirst_2b1c_Sphericity__4030->GetXaxis()->SetTitle("Sphericity");
   VH_DHZfirst_2b1c_Sphericity__4030->GetXaxis()->SetRange(1,25);
   VH_DHZfirst_2b1c_Sphericity__4030->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_2b1c_Sphericity__4030->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_2b1c_Sphericity__4030->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_2b1c_Sphericity__4030->GetYaxis()->SetTitle("Events/0.04");
   VH_DHZfirst_2b1c_Sphericity__4030->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_2b1c_Sphericity__4030->GetYaxis()->SetLabelSize(0.05);
   VH_DHZfirst_2b1c_Sphericity__4030->GetYaxis()->SetTitleSize(0.057);
   VH_DHZfirst_2b1c_Sphericity__4030->GetYaxis()->SetTitleOffset(1.2);
   VH_DHZfirst_2b1c_Sphericity__4030->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_2b1c_Sphericity__4030->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_2b1c_Sphericity__4030->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_2b1c_Sphericity__4030->GetZaxis()->SetTitleFont(42);
   VH_DHZfirst_2b1c_Sphericity__4030->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Sphericity_WJets_DHZfirst_2b1c_16->Modified();
   Sphericity_WJets_DHZfirst_2b1c_16->cd();
   Sphericity_WJets_DHZfirst_2b1c_16->SetSelected(Sphericity_WJets_DHZfirst_2b1c_16);
}
