#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_dPhi_WW_DHZfirst_18_logY()
{
//=========Macro generated from canvas: H_dPhi_WW_DHZfirst_18/H_dPhi_WW_DHZfirst_18
//=========  (Thu May 23 20:48:48 2024) by ROOT version 6.28/10
   TCanvas *H_dPhi_WW_DHZfirst_18 = new TCanvas("H_dPhi_WW_DHZfirst_18", "H_dPhi_WW_DHZfirst_18",0,0,600,600);
   gStyle->SetOptStat(0);
   H_dPhi_WW_DHZfirst_18->SetHighLightColor(2);
   H_dPhi_WW_DHZfirst_18->Range(-0.8,-0.7955806,4.533333,0.5551897);
   H_dPhi_WW_DHZfirst_18->SetFillColor(0);
   H_dPhi_WW_DHZfirst_18->SetFillStyle(4000);
   H_dPhi_WW_DHZfirst_18->SetBorderMode(0);
   H_dPhi_WW_DHZfirst_18->SetBorderSize(2);
   H_dPhi_WW_DHZfirst_18->SetLogy();
   H_dPhi_WW_DHZfirst_18->SetLeftMargin(0.15);
   H_dPhi_WW_DHZfirst_18->SetFrameFillStyle(1000);
   H_dPhi_WW_DHZfirst_18->SetFrameBorderMode(0);
   H_dPhi_WW_DHZfirst_18->SetFrameFillStyle(1000);
   H_dPhi_WW_DHZfirst_18->SetFrameBorderMode(0);
   
   TH1D *VH_DHZfirst_H_dPhi__1674 = new TH1D("VH_DHZfirst_H_dPhi__1674","",120,0,4);
   VH_DHZfirst_H_dPhi__1674->SetBinContent(0,2.430036);
   VH_DHZfirst_H_dPhi__1674->SetBinContent(20,1.388557);
   VH_DHZfirst_H_dPhi__1674->SetBinContent(26,0.4370453);
   VH_DHZfirst_H_dPhi__1674->SetBinContent(33,0.6487306);
   VH_DHZfirst_H_dPhi__1674->SetBinContent(40,0.5541235);
   VH_DHZfirst_H_dPhi__1674->SetBinError(0,1.232873);
   VH_DHZfirst_H_dPhi__1674->SetBinError(20,0.988387);
   VH_DHZfirst_H_dPhi__1674->SetBinError(26,0.4370453);
   VH_DHZfirst_H_dPhi__1674->SetBinError(33,0.6487306);
   VH_DHZfirst_H_dPhi__1674->SetBinError(40,0.5541235);
   VH_DHZfirst_H_dPhi__1674->SetEntries(9);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_DHZfirst_H_dPhi__1674->SetLineColor(ci);
   VH_DHZfirst_H_dPhi__1674->GetXaxis()->SetTitle("#Delta#phi(c,c)");
   VH_DHZfirst_H_dPhi__1674->GetXaxis()->SetRange(1,120);
   VH_DHZfirst_H_dPhi__1674->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_H_dPhi__1674->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_H_dPhi__1674->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_H_dPhi__1674->GetYaxis()->SetTitle("Events/0.033");
   VH_DHZfirst_H_dPhi__1674->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_H_dPhi__1674->GetYaxis()->SetLabelSize(0.05);
   VH_DHZfirst_H_dPhi__1674->GetYaxis()->SetTitleSize(0.057);
   VH_DHZfirst_H_dPhi__1674->GetYaxis()->SetTitleOffset(1.2);
   VH_DHZfirst_H_dPhi__1674->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_H_dPhi__1674->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_H_dPhi__1674->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_H_dPhi__1674->GetZaxis()->SetTitleFont(42);
   VH_DHZfirst_H_dPhi__1674->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_dPhi_WW_DHZfirst_18->Modified();
   H_dPhi_WW_DHZfirst_18->cd();
   H_dPhi_WW_DHZfirst_18->SetSelected(H_dPhi_WW_DHZfirst_18);
}
