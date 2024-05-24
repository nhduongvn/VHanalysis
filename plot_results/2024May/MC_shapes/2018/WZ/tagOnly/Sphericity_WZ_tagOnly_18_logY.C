#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Sphericity_WZ_tagOnly_18_logY()
{
//=========Macro generated from canvas: Sphericity_WZ_tagOnly_18/Sphericity_WZ_tagOnly_18
//=========  (Thu May 23 20:48:41 2024) by ROOT version 6.28/10
   TCanvas *Sphericity_WZ_tagOnly_18 = new TCanvas("Sphericity_WZ_tagOnly_18", "Sphericity_WZ_tagOnly_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_WZ_tagOnly_18->SetHighLightColor(2);
   Sphericity_WZ_tagOnly_18->Range(-0.2,-1.10693,1.133333,2.678515);
   Sphericity_WZ_tagOnly_18->SetFillColor(0);
   Sphericity_WZ_tagOnly_18->SetFillStyle(4000);
   Sphericity_WZ_tagOnly_18->SetBorderMode(0);
   Sphericity_WZ_tagOnly_18->SetBorderSize(2);
   Sphericity_WZ_tagOnly_18->SetLogy();
   Sphericity_WZ_tagOnly_18->SetLeftMargin(0.15);
   Sphericity_WZ_tagOnly_18->SetFrameFillStyle(1000);
   Sphericity_WZ_tagOnly_18->SetFrameBorderMode(0);
   Sphericity_WZ_tagOnly_18->SetFrameFillStyle(1000);
   Sphericity_WZ_tagOnly_18->SetFrameBorderMode(0);
   
   TH1D *VH_tagOnly_Sphericity__1167 = new TH1D("VH_tagOnly_Sphericity__1167","",25,0,1);
   VH_tagOnly_Sphericity__1167->SetBinContent(1,105.2983);
   VH_tagOnly_Sphericity__1167->SetBinContent(2,81.77263);
   VH_tagOnly_Sphericity__1167->SetBinContent(3,43.39221);
   VH_tagOnly_Sphericity__1167->SetBinContent(4,30.62672);
   VH_tagOnly_Sphericity__1167->SetBinContent(5,23.06046);
   VH_tagOnly_Sphericity__1167->SetBinContent(6,11.5553);
   VH_tagOnly_Sphericity__1167->SetBinContent(7,6.616306);
   VH_tagOnly_Sphericity__1167->SetBinContent(8,2.435477);
   VH_tagOnly_Sphericity__1167->SetBinContent(9,1.87125);
   VH_tagOnly_Sphericity__1167->SetBinContent(10,3.418008);
   VH_tagOnly_Sphericity__1167->SetBinContent(11,2.299802);
   VH_tagOnly_Sphericity__1167->SetBinContent(12,0.3738044);
   VH_tagOnly_Sphericity__1167->SetBinContent(14,0.9534691);
   VH_tagOnly_Sphericity__1167->SetBinContent(15,0.585561);
   VH_tagOnly_Sphericity__1167->SetBinError(1,8.660555);
   VH_tagOnly_Sphericity__1167->SetBinError(2,8.061186);
   VH_tagOnly_Sphericity__1167->SetBinError(3,5.804087);
   VH_tagOnly_Sphericity__1167->SetBinError(4,4.587156);
   VH_tagOnly_Sphericity__1167->SetBinError(5,6.370261);
   VH_tagOnly_Sphericity__1167->SetBinError(6,3.390414);
   VH_tagOnly_Sphericity__1167->SetBinError(7,2.024816);
   VH_tagOnly_Sphericity__1167->SetBinError(8,1.291996);
   VH_tagOnly_Sphericity__1167->SetBinError(9,1.147991);
   VH_tagOnly_Sphericity__1167->SetBinError(10,1.81036);
   VH_tagOnly_Sphericity__1167->SetBinError(11,1.451651);
   VH_tagOnly_Sphericity__1167->SetBinError(12,0.3738044);
   VH_tagOnly_Sphericity__1167->SetBinError(14,0.9534691);
   VH_tagOnly_Sphericity__1167->SetBinError(15,0.585561);
   VH_tagOnly_Sphericity__1167->SetEntries(512);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_tagOnly_Sphericity__1167->SetLineColor(ci);
   VH_tagOnly_Sphericity__1167->GetXaxis()->SetTitle("Sphericity");
   VH_tagOnly_Sphericity__1167->GetXaxis()->SetRange(1,25);
   VH_tagOnly_Sphericity__1167->GetXaxis()->SetLabelFont(42);
   VH_tagOnly_Sphericity__1167->GetXaxis()->SetTitleOffset(1);
   VH_tagOnly_Sphericity__1167->GetXaxis()->SetTitleFont(42);
   VH_tagOnly_Sphericity__1167->GetYaxis()->SetTitle("Events/0.04");
   VH_tagOnly_Sphericity__1167->GetYaxis()->SetLabelFont(42);
   VH_tagOnly_Sphericity__1167->GetYaxis()->SetLabelSize(0.05);
   VH_tagOnly_Sphericity__1167->GetYaxis()->SetTitleSize(0.057);
   VH_tagOnly_Sphericity__1167->GetYaxis()->SetTitleOffset(1.2);
   VH_tagOnly_Sphericity__1167->GetYaxis()->SetTitleFont(42);
   VH_tagOnly_Sphericity__1167->GetZaxis()->SetLabelFont(42);
   VH_tagOnly_Sphericity__1167->GetZaxis()->SetTitleOffset(1);
   VH_tagOnly_Sphericity__1167->GetZaxis()->SetTitleFont(42);
   VH_tagOnly_Sphericity__1167->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Sphericity_WZ_tagOnly_18->Modified();
   Sphericity_WZ_tagOnly_18->cd();
   Sphericity_WZ_tagOnly_18->SetSelected(Sphericity_WZ_tagOnly_18);
}
