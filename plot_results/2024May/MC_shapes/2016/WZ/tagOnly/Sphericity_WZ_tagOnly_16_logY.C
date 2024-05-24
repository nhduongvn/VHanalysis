#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Sphericity_WZ_tagOnly_16_logY()
{
//=========Macro generated from canvas: Sphericity_WZ_tagOnly_16/Sphericity_WZ_tagOnly_16
//=========  (Thu May 23 20:48:41 2024) by ROOT version 6.28/10
   TCanvas *Sphericity_WZ_tagOnly_16 = new TCanvas("Sphericity_WZ_tagOnly_16", "Sphericity_WZ_tagOnly_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_WZ_tagOnly_16->SetHighLightColor(2);
   Sphericity_WZ_tagOnly_16->Range(-0.2,-1.737582,1.133333,2.612429);
   Sphericity_WZ_tagOnly_16->SetFillColor(0);
   Sphericity_WZ_tagOnly_16->SetFillStyle(4000);
   Sphericity_WZ_tagOnly_16->SetBorderMode(0);
   Sphericity_WZ_tagOnly_16->SetBorderSize(2);
   Sphericity_WZ_tagOnly_16->SetLogy();
   Sphericity_WZ_tagOnly_16->SetLeftMargin(0.15);
   Sphericity_WZ_tagOnly_16->SetFrameFillStyle(1000);
   Sphericity_WZ_tagOnly_16->SetFrameBorderMode(0);
   Sphericity_WZ_tagOnly_16->SetFrameFillStyle(1000);
   Sphericity_WZ_tagOnly_16->SetFrameBorderMode(0);
   
   TH1D *VH_tagOnly_Sphericity__1165 = new TH1D("VH_tagOnly_Sphericity__1165","",25,0,1);
   VH_tagOnly_Sphericity__1165->SetBinContent(1,79.41072);
   VH_tagOnly_Sphericity__1165->SetBinContent(2,63.04301);
   VH_tagOnly_Sphericity__1165->SetBinContent(3,37.88854);
   VH_tagOnly_Sphericity__1165->SetBinContent(4,21.42355);
   VH_tagOnly_Sphericity__1165->SetBinContent(5,12.34102);
   VH_tagOnly_Sphericity__1165->SetBinContent(6,7.388788);
   VH_tagOnly_Sphericity__1165->SetBinContent(7,3.093682);
   VH_tagOnly_Sphericity__1165->SetBinContent(8,1.951933);
   VH_tagOnly_Sphericity__1165->SetBinContent(9,0.5530986);
   VH_tagOnly_Sphericity__1165->SetBinContent(10,1.507659);
   VH_tagOnly_Sphericity__1165->SetBinContent(11,0.5438525);
   VH_tagOnly_Sphericity__1165->SetBinContent(12,0.1605975);
   VH_tagOnly_Sphericity__1165->SetBinContent(13,0.5953706);
   VH_tagOnly_Sphericity__1165->SetBinContent(14,0.1351943);
   VH_tagOnly_Sphericity__1165->SetBinContent(16,0.0996435);
   VH_tagOnly_Sphericity__1165->SetBinContent(17,0.443291);
   VH_tagOnly_Sphericity__1165->SetBinContent(20,0.1340675);
   VH_tagOnly_Sphericity__1165->SetBinError(1,2.780597);
   VH_tagOnly_Sphericity__1165->SetBinError(2,2.451039);
   VH_tagOnly_Sphericity__1165->SetBinError(3,1.906841);
   VH_tagOnly_Sphericity__1165->SetBinError(4,1.447071);
   VH_tagOnly_Sphericity__1165->SetBinError(5,1.088501);
   VH_tagOnly_Sphericity__1165->SetBinError(6,0.8524842);
   VH_tagOnly_Sphericity__1165->SetBinError(7,0.5500068);
   VH_tagOnly_Sphericity__1165->SetBinError(8,0.4474669);
   VH_tagOnly_Sphericity__1165->SetBinError(9,0.2275818);
   VH_tagOnly_Sphericity__1165->SetBinError(10,0.4060029);
   VH_tagOnly_Sphericity__1165->SetBinError(11,0.2435878);
   VH_tagOnly_Sphericity__1165->SetBinError(12,0.1137207);
   VH_tagOnly_Sphericity__1165->SetBinError(13,0.2452595);
   VH_tagOnly_Sphericity__1165->SetBinError(14,0.09559681);
   VH_tagOnly_Sphericity__1165->SetBinError(16,0.0996435);
   VH_tagOnly_Sphericity__1165->SetBinError(17,0.2276518);
   VH_tagOnly_Sphericity__1165->SetBinError(20,0.1340675);
   VH_tagOnly_Sphericity__1165->SetEntries(2496);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_tagOnly_Sphericity__1165->SetLineColor(ci);
   VH_tagOnly_Sphericity__1165->GetXaxis()->SetTitle("Sphericity");
   VH_tagOnly_Sphericity__1165->GetXaxis()->SetRange(1,25);
   VH_tagOnly_Sphericity__1165->GetXaxis()->SetLabelFont(42);
   VH_tagOnly_Sphericity__1165->GetXaxis()->SetTitleOffset(1);
   VH_tagOnly_Sphericity__1165->GetXaxis()->SetTitleFont(42);
   VH_tagOnly_Sphericity__1165->GetYaxis()->SetTitle("Events/0.04");
   VH_tagOnly_Sphericity__1165->GetYaxis()->SetLabelFont(42);
   VH_tagOnly_Sphericity__1165->GetYaxis()->SetLabelSize(0.05);
   VH_tagOnly_Sphericity__1165->GetYaxis()->SetTitleSize(0.057);
   VH_tagOnly_Sphericity__1165->GetYaxis()->SetTitleOffset(1.2);
   VH_tagOnly_Sphericity__1165->GetYaxis()->SetTitleFont(42);
   VH_tagOnly_Sphericity__1165->GetZaxis()->SetLabelFont(42);
   VH_tagOnly_Sphericity__1165->GetZaxis()->SetTitleOffset(1);
   VH_tagOnly_Sphericity__1165->GetZaxis()->SetTitleFont(42);
   VH_tagOnly_Sphericity__1165->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Sphericity_WZ_tagOnly_16->Modified();
   Sphericity_WZ_tagOnly_16->cd();
   Sphericity_WZ_tagOnly_16->SetSelected(Sphericity_WZ_tagOnly_16);
}
