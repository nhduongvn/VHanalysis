#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_dPhi_WW_DHZfirst_17_logY()
{
//=========Macro generated from canvas: Z_dPhi_WW_DHZfirst_17/Z_dPhi_WW_DHZfirst_17
//=========  (Thu May 23 20:48:48 2024) by ROOT version 6.28/10
   TCanvas *Z_dPhi_WW_DHZfirst_17 = new TCanvas("Z_dPhi_WW_DHZfirst_17", "Z_dPhi_WW_DHZfirst_17",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_dPhi_WW_DHZfirst_17->SetHighLightColor(2);
   Z_dPhi_WW_DHZfirst_17->Range(-0.8,-1.207896,4.533333,0.1005406);
   Z_dPhi_WW_DHZfirst_17->SetFillColor(0);
   Z_dPhi_WW_DHZfirst_17->SetFillStyle(4000);
   Z_dPhi_WW_DHZfirst_17->SetBorderMode(0);
   Z_dPhi_WW_DHZfirst_17->SetBorderSize(2);
   Z_dPhi_WW_DHZfirst_17->SetLogy();
   Z_dPhi_WW_DHZfirst_17->SetLeftMargin(0.15);
   Z_dPhi_WW_DHZfirst_17->SetFrameFillStyle(1000);
   Z_dPhi_WW_DHZfirst_17->SetFrameBorderMode(0);
   Z_dPhi_WW_DHZfirst_17->SetFrameFillStyle(1000);
   Z_dPhi_WW_DHZfirst_17->SetFrameBorderMode(0);
   
   TH1D *VH_DHZfirst_Z_dPhi__1643 = new TH1D("VH_DHZfirst_Z_dPhi__1643","",120,0,4);
   VH_DHZfirst_Z_dPhi__1643->SetBinContent(0,1.494425);
   VH_DHZfirst_Z_dPhi__1643->SetBinContent(21,0.1674855);
   VH_DHZfirst_Z_dPhi__1643->SetBinContent(22,0.2553652);
   VH_DHZfirst_Z_dPhi__1643->SetBinContent(35,0.2353289);
   VH_DHZfirst_Z_dPhi__1643->SetBinContent(39,0.2776511);
   VH_DHZfirst_Z_dPhi__1643->SetBinContent(58,0.4922072);
   VH_DHZfirst_Z_dPhi__1643->SetBinContent(64,0.1947795);
   VH_DHZfirst_Z_dPhi__1643->SetBinContent(68,0.2037551);
   VH_DHZfirst_Z_dPhi__1643->SetBinContent(75,0.2290723);
   VH_DHZfirst_Z_dPhi__1643->SetBinContent(81,0.4893481);
   VH_DHZfirst_Z_dPhi__1643->SetBinError(0,0.6970678);
   VH_DHZfirst_Z_dPhi__1643->SetBinError(21,0.1674855);
   VH_DHZfirst_Z_dPhi__1643->SetBinError(22,0.2553652);
   VH_DHZfirst_Z_dPhi__1643->SetBinError(35,0.2353289);
   VH_DHZfirst_Z_dPhi__1643->SetBinError(39,0.2776511);
   VH_DHZfirst_Z_dPhi__1643->SetBinError(58,0.4922072);
   VH_DHZfirst_Z_dPhi__1643->SetBinError(64,0.1947795);
   VH_DHZfirst_Z_dPhi__1643->SetBinError(68,0.2037551);
   VH_DHZfirst_Z_dPhi__1643->SetBinError(75,0.2290723);
   VH_DHZfirst_Z_dPhi__1643->SetBinError(81,0.4893481);
   VH_DHZfirst_Z_dPhi__1643->SetEntries(15);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_DHZfirst_Z_dPhi__1643->SetLineColor(ci);
   VH_DHZfirst_Z_dPhi__1643->GetXaxis()->SetTitle("#Delta#phi(b,b)");
   VH_DHZfirst_Z_dPhi__1643->GetXaxis()->SetRange(1,120);
   VH_DHZfirst_Z_dPhi__1643->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_Z_dPhi__1643->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_Z_dPhi__1643->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_Z_dPhi__1643->GetYaxis()->SetTitle("Events/0.033");
   VH_DHZfirst_Z_dPhi__1643->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_Z_dPhi__1643->GetYaxis()->SetLabelSize(0.05);
   VH_DHZfirst_Z_dPhi__1643->GetYaxis()->SetTitleSize(0.057);
   VH_DHZfirst_Z_dPhi__1643->GetYaxis()->SetTitleOffset(1.2);
   VH_DHZfirst_Z_dPhi__1643->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_Z_dPhi__1643->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_Z_dPhi__1643->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_Z_dPhi__1643->GetZaxis()->SetTitleFont(42);
   VH_DHZfirst_Z_dPhi__1643->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 36.8 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_dPhi_WW_DHZfirst_17->Modified();
   Z_dPhi_WW_DHZfirst_17->cd();
   Z_dPhi_WW_DHZfirst_17->SetSelected(Z_dPhi_WW_DHZfirst_17);
}
