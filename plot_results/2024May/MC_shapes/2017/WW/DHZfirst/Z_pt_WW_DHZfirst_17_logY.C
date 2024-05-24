#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_pt_WW_DHZfirst_17_logY()
{
//=========Macro generated from canvas: Z_pt_WW_DHZfirst_17/Z_pt_WW_DHZfirst_17
//=========  (Fri May 24 12:42:26 2024) by ROOT version 6.28/10
   TCanvas *Z_pt_WW_DHZfirst_17 = new TCanvas("Z_pt_WW_DHZfirst_17", "Z_pt_WW_DHZfirst_17",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_pt_WW_DHZfirst_17->SetHighLightColor(2);
   Z_pt_WW_DHZfirst_17->Range(59.99999,-1.550719,1660,-0.1376443);
   Z_pt_WW_DHZfirst_17->SetFillColor(0);
   Z_pt_WW_DHZfirst_17->SetFillStyle(4000);
   Z_pt_WW_DHZfirst_17->SetBorderMode(0);
   Z_pt_WW_DHZfirst_17->SetBorderSize(2);
   Z_pt_WW_DHZfirst_17->SetLogy();
   Z_pt_WW_DHZfirst_17->SetLeftMargin(0.15);
   Z_pt_WW_DHZfirst_17->SetFrameFillStyle(1000);
   Z_pt_WW_DHZfirst_17->SetFrameBorderMode(0);
   Z_pt_WW_DHZfirst_17->SetFrameFillStyle(1000);
   Z_pt_WW_DHZfirst_17->SetFrameBorderMode(0);
   
   TH1D *VH_DHZfirst_Z_pt__1523 = new TH1D("VH_DHZfirst_Z_pt__1523","",500,0,2000);
   VH_DHZfirst_Z_pt__1523->SetBinContent(23,0.1947795);
   VH_DHZfirst_Z_pt__1523->SetBinContent(26,0.152338);
   VH_DHZfirst_Z_pt__1523->SetBinContent(29,0.4956396);
   VH_DHZfirst_Z_pt__1523->SetBinContent(32,0.4893481);
   VH_DHZfirst_Z_pt__1523->SetBinContent(35,0.2290723);
   VH_DHZfirst_Z_pt__1523->SetBinContent(40,0.1674855);
   VH_DHZfirst_Z_pt__1523->SetBinContent(42,0.4922072);
   VH_DHZfirst_Z_pt__1523->SetBinContent(46,0.490694);
   VH_DHZfirst_Z_pt__1523->SetBinContent(50,0.3529121);
   VH_DHZfirst_Z_pt__1523->SetBinContent(56,0.2028034);
   VH_DHZfirst_Z_pt__1523->SetBinContent(58,0.2037551);
   VH_DHZfirst_Z_pt__1523->SetBinContent(79,0.2776511);
   VH_DHZfirst_Z_pt__1523->SetBinContent(134,0.07791458);
   VH_DHZfirst_Z_pt__1523->SetBinContent(165,0.2128171);
   VH_DHZfirst_Z_pt__1523->SetBinError(23,0.1947795);
   VH_DHZfirst_Z_pt__1523->SetBinError(26,0.152338);
   VH_DHZfirst_Z_pt__1523->SetBinError(29,0.4956396);
   VH_DHZfirst_Z_pt__1523->SetBinError(32,0.4893481);
   VH_DHZfirst_Z_pt__1523->SetBinError(35,0.2290723);
   VH_DHZfirst_Z_pt__1523->SetBinError(40,0.1674855);
   VH_DHZfirst_Z_pt__1523->SetBinError(42,0.4922072);
   VH_DHZfirst_Z_pt__1523->SetBinError(46,0.3472622);
   VH_DHZfirst_Z_pt__1523->SetBinError(50,0.3529121);
   VH_DHZfirst_Z_pt__1523->SetBinError(56,0.2028034);
   VH_DHZfirst_Z_pt__1523->SetBinError(58,0.2037551);
   VH_DHZfirst_Z_pt__1523->SetBinError(79,0.2776511);
   VH_DHZfirst_Z_pt__1523->SetBinError(134,0.07791458);
   VH_DHZfirst_Z_pt__1523->SetBinError(165,0.2128171);
   VH_DHZfirst_Z_pt__1523->SetEntries(15);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_DHZfirst_Z_pt__1523->SetLineColor(ci);
   VH_DHZfirst_Z_pt__1523->GetXaxis()->SetTitle("Z p_{T} [GeV]");
   VH_DHZfirst_Z_pt__1523->GetXaxis()->SetRange(76,375);
   VH_DHZfirst_Z_pt__1523->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_Z_pt__1523->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_Z_pt__1523->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_Z_pt__1523->GetYaxis()->SetTitle("Events/4.0 GeV");
   VH_DHZfirst_Z_pt__1523->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_Z_pt__1523->GetYaxis()->SetLabelSize(0.05);
   VH_DHZfirst_Z_pt__1523->GetYaxis()->SetTitleSize(0.057);
   VH_DHZfirst_Z_pt__1523->GetYaxis()->SetTitleOffset(1.2);
   VH_DHZfirst_Z_pt__1523->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_Z_pt__1523->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_Z_pt__1523->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_Z_pt__1523->GetZaxis()->SetTitleFont(42);
   VH_DHZfirst_Z_pt__1523->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 36.8 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_pt_WW_DHZfirst_17->Modified();
   Z_pt_WW_DHZfirst_17->cd();
   Z_pt_WW_DHZfirst_17->SetSelected(Z_pt_WW_DHZfirst_17);
}
