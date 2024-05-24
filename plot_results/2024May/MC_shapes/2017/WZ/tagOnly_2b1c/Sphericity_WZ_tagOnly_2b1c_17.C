#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Sphericity_WZ_tagOnly_2b1c_17()
{
//=========Macro generated from canvas: Sphericity_WZ_tagOnly_2b1c_17/Sphericity_WZ_tagOnly_2b1c_17
//=========  (Fri May 24 12:42:55 2024) by ROOT version 6.28/10
   TCanvas *Sphericity_WZ_tagOnly_2b1c_17 = new TCanvas("Sphericity_WZ_tagOnly_2b1c_17", "Sphericity_WZ_tagOnly_2b1c_17",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_WZ_tagOnly_2b1c_17->SetHighLightColor(2);
   Sphericity_WZ_tagOnly_2b1c_17->Range(-0.2,-17.08368,1.133333,153.7531);
   Sphericity_WZ_tagOnly_2b1c_17->SetFillColor(0);
   Sphericity_WZ_tagOnly_2b1c_17->SetFillStyle(4000);
   Sphericity_WZ_tagOnly_2b1c_17->SetBorderMode(0);
   Sphericity_WZ_tagOnly_2b1c_17->SetBorderSize(2);
   Sphericity_WZ_tagOnly_2b1c_17->SetLeftMargin(0.15);
   Sphericity_WZ_tagOnly_2b1c_17->SetFrameFillStyle(1000);
   Sphericity_WZ_tagOnly_2b1c_17->SetFrameBorderMode(0);
   Sphericity_WZ_tagOnly_2b1c_17->SetFrameFillStyle(1000);
   Sphericity_WZ_tagOnly_2b1c_17->SetFrameBorderMode(0);
   
   TH1D *VH_tagOnly_2b1c_Sphericity__3326 = new TH1D("VH_tagOnly_2b1c_Sphericity__3326","",25,0,1);
   VH_tagOnly_2b1c_Sphericity__3326->SetBinContent(1,130.1614);
   VH_tagOnly_2b1c_Sphericity__3326->SetBinContent(2,109.5757);
   VH_tagOnly_2b1c_Sphericity__3326->SetBinContent(3,65.85591);
   VH_tagOnly_2b1c_Sphericity__3326->SetBinContent(4,40.56198);
   VH_tagOnly_2b1c_Sphericity__3326->SetBinContent(5,20.70106);
   VH_tagOnly_2b1c_Sphericity__3326->SetBinContent(6,16.53346);
   VH_tagOnly_2b1c_Sphericity__3326->SetBinContent(7,3.637424);
   VH_tagOnly_2b1c_Sphericity__3326->SetBinContent(8,0.9272536);
   VH_tagOnly_2b1c_Sphericity__3326->SetBinContent(9,2.879347);
   VH_tagOnly_2b1c_Sphericity__3326->SetBinContent(10,0.948339);
   VH_tagOnly_2b1c_Sphericity__3326->SetBinContent(11,1.075425);
   VH_tagOnly_2b1c_Sphericity__3326->SetBinContent(12,0.08690921);
   VH_tagOnly_2b1c_Sphericity__3326->SetBinContent(13,0.162156);
   VH_tagOnly_2b1c_Sphericity__3326->SetBinContent(14,0.6807718);
   VH_tagOnly_2b1c_Sphericity__3326->SetBinContent(16,1.346641);
   VH_tagOnly_2b1c_Sphericity__3326->SetBinContent(17,0.3466645);
   VH_tagOnly_2b1c_Sphericity__3326->SetBinError(1,6.355696);
   VH_tagOnly_2b1c_Sphericity__3326->SetBinError(2,5.511114);
   VH_tagOnly_2b1c_Sphericity__3326->SetBinError(3,4.363915);
   VH_tagOnly_2b1c_Sphericity__3326->SetBinError(4,3.57465);
   VH_tagOnly_2b1c_Sphericity__3326->SetBinError(5,2.447785);
   VH_tagOnly_2b1c_Sphericity__3326->SetBinError(6,2.287578);
   VH_tagOnly_2b1c_Sphericity__3326->SetBinError(7,1.008103);
   VH_tagOnly_2b1c_Sphericity__3326->SetBinError(8,0.4415948);
   VH_tagOnly_2b1c_Sphericity__3326->SetBinError(9,1.154175);
   VH_tagOnly_2b1c_Sphericity__3326->SetBinError(10,0.5898926);
   VH_tagOnly_2b1c_Sphericity__3326->SetBinError(11,0.6866048);
   VH_tagOnly_2b1c_Sphericity__3326->SetBinError(12,0.08690921);
   VH_tagOnly_2b1c_Sphericity__3326->SetBinError(13,0.162156);
   VH_tagOnly_2b1c_Sphericity__3326->SetBinError(14,0.6807718);
   VH_tagOnly_2b1c_Sphericity__3326->SetBinError(16,0.7525052);
   VH_tagOnly_2b1c_Sphericity__3326->SetBinError(17,0.2557735);
   VH_tagOnly_2b1c_Sphericity__3326->SetEntries(1706);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_tagOnly_2b1c_Sphericity__3326->SetLineColor(ci);
   VH_tagOnly_2b1c_Sphericity__3326->GetXaxis()->SetTitle("Sphericity");
   VH_tagOnly_2b1c_Sphericity__3326->GetXaxis()->SetRange(1,25);
   VH_tagOnly_2b1c_Sphericity__3326->GetXaxis()->SetLabelFont(42);
   VH_tagOnly_2b1c_Sphericity__3326->GetXaxis()->SetTitleOffset(1);
   VH_tagOnly_2b1c_Sphericity__3326->GetXaxis()->SetTitleFont(42);
   VH_tagOnly_2b1c_Sphericity__3326->GetYaxis()->SetTitle("Events/0.04");
   VH_tagOnly_2b1c_Sphericity__3326->GetYaxis()->SetLabelFont(42);
   VH_tagOnly_2b1c_Sphericity__3326->GetYaxis()->SetLabelSize(0.05);
   VH_tagOnly_2b1c_Sphericity__3326->GetYaxis()->SetTitleSize(0.057);
   VH_tagOnly_2b1c_Sphericity__3326->GetYaxis()->SetTitleOffset(1.2);
   VH_tagOnly_2b1c_Sphericity__3326->GetYaxis()->SetTitleFont(42);
   VH_tagOnly_2b1c_Sphericity__3326->GetZaxis()->SetLabelFont(42);
   VH_tagOnly_2b1c_Sphericity__3326->GetZaxis()->SetTitleOffset(1);
   VH_tagOnly_2b1c_Sphericity__3326->GetZaxis()->SetTitleFont(42);
   VH_tagOnly_2b1c_Sphericity__3326->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 36.8 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Sphericity_WZ_tagOnly_2b1c_17->Modified();
   Sphericity_WZ_tagOnly_2b1c_17->cd();
   Sphericity_WZ_tagOnly_2b1c_17->SetSelected(Sphericity_WZ_tagOnly_2b1c_17);
}
