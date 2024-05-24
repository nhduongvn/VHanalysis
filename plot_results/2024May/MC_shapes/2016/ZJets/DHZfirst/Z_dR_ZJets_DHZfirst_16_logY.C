#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_dR_ZJets_DHZfirst_16_logY()
{
//=========Macro generated from canvas: Z_dR_ZJets_DHZfirst_16/Z_dR_ZJets_DHZfirst_16
//=========  (Thu May 23 20:48:47 2024) by ROOT version 6.28/10
   TCanvas *Z_dR_ZJets_DHZfirst_16 = new TCanvas("Z_dR_ZJets_DHZfirst_16", "Z_dR_ZJets_DHZfirst_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_dR_ZJets_DHZfirst_16->SetHighLightColor(2);
   Z_dR_ZJets_DHZfirst_16->Range(-1.2,-1.386396,6.8,3.229734);
   Z_dR_ZJets_DHZfirst_16->SetFillColor(0);
   Z_dR_ZJets_DHZfirst_16->SetFillStyle(4000);
   Z_dR_ZJets_DHZfirst_16->SetBorderMode(0);
   Z_dR_ZJets_DHZfirst_16->SetBorderSize(2);
   Z_dR_ZJets_DHZfirst_16->SetLogy();
   Z_dR_ZJets_DHZfirst_16->SetLeftMargin(0.15);
   Z_dR_ZJets_DHZfirst_16->SetFrameFillStyle(1000);
   Z_dR_ZJets_DHZfirst_16->SetFrameBorderMode(0);
   Z_dR_ZJets_DHZfirst_16->SetFrameFillStyle(1000);
   Z_dR_ZJets_DHZfirst_16->SetFrameBorderMode(0);
   
   TH1D *VH_DHZfirst_Z_dR__1573 = new TH1D("VH_DHZfirst_Z_dR__1573","",30,0,6);
   VH_DHZfirst_Z_dR__1573->SetBinContent(2,0.2378193);
   VH_DHZfirst_Z_dR__1573->SetBinContent(3,231.4147);
   VH_DHZfirst_Z_dR__1573->SetBinContent(4,309.437);
   VH_DHZfirst_Z_dR__1573->SetBinContent(5,254.6264);
   VH_DHZfirst_Z_dR__1573->SetBinContent(6,221.1984);
   VH_DHZfirst_Z_dR__1573->SetBinContent(7,145.3902);
   VH_DHZfirst_Z_dR__1573->SetBinContent(8,95.93433);
   VH_DHZfirst_Z_dR__1573->SetBinContent(9,74.08448);
   VH_DHZfirst_Z_dR__1573->SetBinContent(10,78.5129);
   VH_DHZfirst_Z_dR__1573->SetBinContent(11,53.39353);
   VH_DHZfirst_Z_dR__1573->SetBinContent(12,54.70902);
   VH_DHZfirst_Z_dR__1573->SetBinContent(13,36.48458);
   VH_DHZfirst_Z_dR__1573->SetBinContent(14,40.47252);
   VH_DHZfirst_Z_dR__1573->SetBinContent(15,38.45715);
   VH_DHZfirst_Z_dR__1573->SetBinContent(16,36.31352);
   VH_DHZfirst_Z_dR__1573->SetBinContent(17,20.11761);
   VH_DHZfirst_Z_dR__1573->SetBinContent(18,12.82124);
   VH_DHZfirst_Z_dR__1573->SetBinContent(19,18.92034);
   VH_DHZfirst_Z_dR__1573->SetBinContent(20,16.33291);
   VH_DHZfirst_Z_dR__1573->SetBinContent(21,21.60677);
   VH_DHZfirst_Z_dR__1573->SetBinContent(22,16.42288);
   VH_DHZfirst_Z_dR__1573->SetBinContent(23,21.52129);
   VH_DHZfirst_Z_dR__1573->SetBinContent(24,30.66586);
   VH_DHZfirst_Z_dR__1573->SetBinContent(25,21.82608);
   VH_DHZfirst_Z_dR__1573->SetBinContent(26,28.39511);
   VH_DHZfirst_Z_dR__1573->SetBinContent(27,31.90733);
   VH_DHZfirst_Z_dR__1573->SetBinContent(28,32.50676);
   VH_DHZfirst_Z_dR__1573->SetBinContent(29,26.27381);
   VH_DHZfirst_Z_dR__1573->SetBinContent(30,17.04279);
   VH_DHZfirst_Z_dR__1573->SetBinContent(31,11.29872);
   VH_DHZfirst_Z_dR__1573->SetBinError(2,0.1398772);
   VH_DHZfirst_Z_dR__1573->SetBinError(3,7.456034);
   VH_DHZfirst_Z_dR__1573->SetBinError(4,8.271071);
   VH_DHZfirst_Z_dR__1573->SetBinError(5,9.997367);
   VH_DHZfirst_Z_dR__1573->SetBinError(6,14.22158);
   VH_DHZfirst_Z_dR__1573->SetBinError(7,11.67677);
   VH_DHZfirst_Z_dR__1573->SetBinError(8,8.760469);
   VH_DHZfirst_Z_dR__1573->SetBinError(9,7.449612);
   VH_DHZfirst_Z_dR__1573->SetBinError(10,7.887559);
   VH_DHZfirst_Z_dR__1573->SetBinError(11,4.613175);
   VH_DHZfirst_Z_dR__1573->SetBinError(12,6.442816);
   VH_DHZfirst_Z_dR__1573->SetBinError(13,3.249172);
   VH_DHZfirst_Z_dR__1573->SetBinError(14,4.953461);
   VH_DHZfirst_Z_dR__1573->SetBinError(15,5.245284);
   VH_DHZfirst_Z_dR__1573->SetBinError(16,5.045414);
   VH_DHZfirst_Z_dR__1573->SetBinError(17,3.28139);
   VH_DHZfirst_Z_dR__1573->SetBinError(18,1.344895);
   VH_DHZfirst_Z_dR__1573->SetBinError(19,3.466538);
   VH_DHZfirst_Z_dR__1573->SetBinError(20,2.337019);
   VH_DHZfirst_Z_dR__1573->SetBinError(21,4.088673);
   VH_DHZfirst_Z_dR__1573->SetBinError(22,2.484752);
   VH_DHZfirst_Z_dR__1573->SetBinError(23,3.712553);
   VH_DHZfirst_Z_dR__1573->SetBinError(24,5.59698);
   VH_DHZfirst_Z_dR__1573->SetBinError(25,3.493856);
   VH_DHZfirst_Z_dR__1573->SetBinError(26,4.947049);
   VH_DHZfirst_Z_dR__1573->SetBinError(27,5.683032);
   VH_DHZfirst_Z_dR__1573->SetBinError(28,4.685374);
   VH_DHZfirst_Z_dR__1573->SetBinError(29,2.91847);
   VH_DHZfirst_Z_dR__1573->SetBinError(30,1.532937);
   VH_DHZfirst_Z_dR__1573->SetBinError(31,1.222002);
   VH_DHZfirst_Z_dR__1573->SetEntries(15554);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_DHZfirst_Z_dR__1573->SetLineColor(ci);
   VH_DHZfirst_Z_dR__1573->GetXaxis()->SetTitle("#DeltaR(b,b)");
   VH_DHZfirst_Z_dR__1573->GetXaxis()->SetRange(1,30);
   VH_DHZfirst_Z_dR__1573->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_Z_dR__1573->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_Z_dR__1573->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_Z_dR__1573->GetYaxis()->SetTitle("Events/0.2");
   VH_DHZfirst_Z_dR__1573->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_Z_dR__1573->GetYaxis()->SetLabelSize(0.05);
   VH_DHZfirst_Z_dR__1573->GetYaxis()->SetTitleSize(0.057);
   VH_DHZfirst_Z_dR__1573->GetYaxis()->SetTitleOffset(1.2);
   VH_DHZfirst_Z_dR__1573->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_Z_dR__1573->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_Z_dR__1573->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_Z_dR__1573->GetZaxis()->SetTitleFont(42);
   VH_DHZfirst_Z_dR__1573->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_dR_ZJets_DHZfirst_16->Modified();
   Z_dR_ZJets_DHZfirst_16->cd();
   Z_dR_ZJets_DHZfirst_16->SetSelected(Z_dR_ZJets_DHZfirst_16);
}
