#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Aplanarity_QCD_DHZfirst_2b1c_17_logY()
{
//=========Macro generated from canvas: Aplanarity_QCD_DHZfirst_2b1c_17/Aplanarity_QCD_DHZfirst_2b1c_17
//=========  (Thu May 23 20:49:25 2024) by ROOT version 6.28/10
   TCanvas *Aplanarity_QCD_DHZfirst_2b1c_17 = new TCanvas("Aplanarity_QCD_DHZfirst_2b1c_17", "Aplanarity_QCD_DHZfirst_2b1c_17",0,0,600,600);
   gStyle->SetOptStat(0);
   Aplanarity_QCD_DHZfirst_2b1c_17->SetHighLightColor(2);
   Aplanarity_QCD_DHZfirst_2b1c_17->Range(-0.2,0.2238546,1.133333,6.820654);
   Aplanarity_QCD_DHZfirst_2b1c_17->SetFillColor(0);
   Aplanarity_QCD_DHZfirst_2b1c_17->SetFillStyle(4000);
   Aplanarity_QCD_DHZfirst_2b1c_17->SetBorderMode(0);
   Aplanarity_QCD_DHZfirst_2b1c_17->SetBorderSize(2);
   Aplanarity_QCD_DHZfirst_2b1c_17->SetLogy();
   Aplanarity_QCD_DHZfirst_2b1c_17->SetLeftMargin(0.15);
   Aplanarity_QCD_DHZfirst_2b1c_17->SetFrameFillStyle(1000);
   Aplanarity_QCD_DHZfirst_2b1c_17->SetFrameBorderMode(0);
   Aplanarity_QCD_DHZfirst_2b1c_17->SetFrameFillStyle(1000);
   Aplanarity_QCD_DHZfirst_2b1c_17->SetFrameBorderMode(0);
   
   TH1D *VH_DHZfirst_2b1c_Aplanarity__4058 = new TH1D("VH_DHZfirst_2b1c_Aplanarity__4058","",50,0,1);
   VH_DHZfirst_2b1c_Aplanarity__4058->SetBinContent(1,764583.1);
   VH_DHZfirst_2b1c_Aplanarity__4058->SetBinContent(2,85053.32);
   VH_DHZfirst_2b1c_Aplanarity__4058->SetBinContent(3,14522.6);
   VH_DHZfirst_2b1c_Aplanarity__4058->SetBinContent(4,3366.17);
   VH_DHZfirst_2b1c_Aplanarity__4058->SetBinContent(5,673.1858);
   VH_DHZfirst_2b1c_Aplanarity__4058->SetBinContent(6,80.32675);
   VH_DHZfirst_2b1c_Aplanarity__4058->SetBinContent(7,161.279);
   VH_DHZfirst_2b1c_Aplanarity__4058->SetBinContent(10,15.29553);
   VH_DHZfirst_2b1c_Aplanarity__4058->SetBinError(1,39332.88);
   VH_DHZfirst_2b1c_Aplanarity__4058->SetBinError(2,5405.424);
   VH_DHZfirst_2b1c_Aplanarity__4058->SetBinError(3,1484.126);
   VH_DHZfirst_2b1c_Aplanarity__4058->SetBinError(4,740.6128);
   VH_DHZfirst_2b1c_Aplanarity__4058->SetBinError(5,307.3192);
   VH_DHZfirst_2b1c_Aplanarity__4058->SetBinError(6,49.35589);
   VH_DHZfirst_2b1c_Aplanarity__4058->SetBinError(7,139.3617);
   VH_DHZfirst_2b1c_Aplanarity__4058->SetBinError(10,15.29553);
   VH_DHZfirst_2b1c_Aplanarity__4058->SetEntries(46934);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_DHZfirst_2b1c_Aplanarity__4058->SetLineColor(ci);
   VH_DHZfirst_2b1c_Aplanarity__4058->GetXaxis()->SetTitle("Aplanarity");
   VH_DHZfirst_2b1c_Aplanarity__4058->GetXaxis()->SetRange(1,50);
   VH_DHZfirst_2b1c_Aplanarity__4058->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_2b1c_Aplanarity__4058->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_2b1c_Aplanarity__4058->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_2b1c_Aplanarity__4058->GetYaxis()->SetTitle("Events/0.02");
   VH_DHZfirst_2b1c_Aplanarity__4058->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_2b1c_Aplanarity__4058->GetYaxis()->SetLabelSize(0.05);
   VH_DHZfirst_2b1c_Aplanarity__4058->GetYaxis()->SetTitleSize(0.057);
   VH_DHZfirst_2b1c_Aplanarity__4058->GetYaxis()->SetTitleOffset(1.2);
   VH_DHZfirst_2b1c_Aplanarity__4058->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_2b1c_Aplanarity__4058->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_2b1c_Aplanarity__4058->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_2b1c_Aplanarity__4058->GetZaxis()->SetTitleFont(42);
   VH_DHZfirst_2b1c_Aplanarity__4058->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 36.8 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Aplanarity_QCD_DHZfirst_2b1c_17->Modified();
   Aplanarity_QCD_DHZfirst_2b1c_17->cd();
   Aplanarity_QCD_DHZfirst_2b1c_17->SetSelected(Aplanarity_QCD_DHZfirst_2b1c_17);
}
