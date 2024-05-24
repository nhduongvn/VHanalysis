#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Aplanarity_QCD_tagOnly_2b1c_17_logY()
{
//=========Macro generated from canvas: Aplanarity_QCD_tagOnly_2b1c_17/Aplanarity_QCD_tagOnly_2b1c_17
//=========  (Thu May 23 20:49:13 2024) by ROOT version 6.28/10
   TCanvas *Aplanarity_QCD_tagOnly_2b1c_17 = new TCanvas("Aplanarity_QCD_tagOnly_2b1c_17", "Aplanarity_QCD_tagOnly_2b1c_17",0,0,600,600);
   gStyle->SetOptStat(0);
   Aplanarity_QCD_tagOnly_2b1c_17->SetHighLightColor(2);
   Aplanarity_QCD_tagOnly_2b1c_17->Range(-0.2,-1.583739,1.133333,7.79175);
   Aplanarity_QCD_tagOnly_2b1c_17->SetFillColor(0);
   Aplanarity_QCD_tagOnly_2b1c_17->SetFillStyle(4000);
   Aplanarity_QCD_tagOnly_2b1c_17->SetBorderMode(0);
   Aplanarity_QCD_tagOnly_2b1c_17->SetBorderSize(2);
   Aplanarity_QCD_tagOnly_2b1c_17->SetLogy();
   Aplanarity_QCD_tagOnly_2b1c_17->SetLeftMargin(0.15);
   Aplanarity_QCD_tagOnly_2b1c_17->SetFrameFillStyle(1000);
   Aplanarity_QCD_tagOnly_2b1c_17->SetFrameBorderMode(0);
   Aplanarity_QCD_tagOnly_2b1c_17->SetFrameFillStyle(1000);
   Aplanarity_QCD_tagOnly_2b1c_17->SetFrameBorderMode(0);
   
   TH1D *VH_tagOnly_2b1c_Aplanarity__3338 = new TH1D("VH_tagOnly_2b1c_Aplanarity__3338","",50,0,1);
   VH_tagOnly_2b1c_Aplanarity__3338->SetBinContent(1,3772697);
   VH_tagOnly_2b1c_Aplanarity__3338->SetBinContent(2,554540.7);
   VH_tagOnly_2b1c_Aplanarity__3338->SetBinContent(3,130802.2);
   VH_tagOnly_2b1c_Aplanarity__3338->SetBinContent(4,36744.83);
   VH_tagOnly_2b1c_Aplanarity__3338->SetBinContent(5,15921.22);
   VH_tagOnly_2b1c_Aplanarity__3338->SetBinContent(6,5132.265);
   VH_tagOnly_2b1c_Aplanarity__3338->SetBinContent(7,3693.705);
   VH_tagOnly_2b1c_Aplanarity__3338->SetBinContent(8,1940.961);
   VH_tagOnly_2b1c_Aplanarity__3338->SetBinContent(9,983.187);
   VH_tagOnly_2b1c_Aplanarity__3338->SetBinContent(10,568.5468);
   VH_tagOnly_2b1c_Aplanarity__3338->SetBinContent(11,348.3082);
   VH_tagOnly_2b1c_Aplanarity__3338->SetBinContent(12,384.2938);
   VH_tagOnly_2b1c_Aplanarity__3338->SetBinContent(13,229.9069);
   VH_tagOnly_2b1c_Aplanarity__3338->SetBinContent(14,50.71744);
   VH_tagOnly_2b1c_Aplanarity__3338->SetBinContent(15,30.30174);
   VH_tagOnly_2b1c_Aplanarity__3338->SetBinContent(16,58.27657);
   VH_tagOnly_2b1c_Aplanarity__3338->SetBinContent(17,0.4516895);
   VH_tagOnly_2b1c_Aplanarity__3338->SetBinContent(18,43.63467);
   VH_tagOnly_2b1c_Aplanarity__3338->SetBinContent(19,39.23405);
   VH_tagOnly_2b1c_Aplanarity__3338->SetBinError(1,73216.22);
   VH_tagOnly_2b1c_Aplanarity__3338->SetBinError(2,50541.64);
   VH_tagOnly_2b1c_Aplanarity__3338->SetBinError(3,16486.93);
   VH_tagOnly_2b1c_Aplanarity__3338->SetBinError(4,3332.512);
   VH_tagOnly_2b1c_Aplanarity__3338->SetBinError(5,3406.553);
   VH_tagOnly_2b1c_Aplanarity__3338->SetBinError(6,1029.217);
   VH_tagOnly_2b1c_Aplanarity__3338->SetBinError(7,838.1351);
   VH_tagOnly_2b1c_Aplanarity__3338->SetBinError(8,628.1563);
   VH_tagOnly_2b1c_Aplanarity__3338->SetBinError(9,277.0834);
   VH_tagOnly_2b1c_Aplanarity__3338->SetBinError(10,224.4117);
   VH_tagOnly_2b1c_Aplanarity__3338->SetBinError(11,84.73736);
   VH_tagOnly_2b1c_Aplanarity__3338->SetBinError(12,221.1251);
   VH_tagOnly_2b1c_Aplanarity__3338->SetBinError(13,180.6362);
   VH_tagOnly_2b1c_Aplanarity__3338->SetBinError(14,24.65339);
   VH_tagOnly_2b1c_Aplanarity__3338->SetBinError(15,12.24241);
   VH_tagOnly_2b1c_Aplanarity__3338->SetBinError(16,31.25689);
   VH_tagOnly_2b1c_Aplanarity__3338->SetBinError(17,0.4516895);
   VH_tagOnly_2b1c_Aplanarity__3338->SetBinError(18,30.93528);
   VH_tagOnly_2b1c_Aplanarity__3338->SetBinError(19,39.23405);
   VH_tagOnly_2b1c_Aplanarity__3338->SetEntries(278833);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_tagOnly_2b1c_Aplanarity__3338->SetLineColor(ci);
   VH_tagOnly_2b1c_Aplanarity__3338->GetXaxis()->SetTitle("Aplanarity");
   VH_tagOnly_2b1c_Aplanarity__3338->GetXaxis()->SetRange(1,50);
   VH_tagOnly_2b1c_Aplanarity__3338->GetXaxis()->SetLabelFont(42);
   VH_tagOnly_2b1c_Aplanarity__3338->GetXaxis()->SetTitleOffset(1);
   VH_tagOnly_2b1c_Aplanarity__3338->GetXaxis()->SetTitleFont(42);
   VH_tagOnly_2b1c_Aplanarity__3338->GetYaxis()->SetTitle("Events/0.02");
   VH_tagOnly_2b1c_Aplanarity__3338->GetYaxis()->SetLabelFont(42);
   VH_tagOnly_2b1c_Aplanarity__3338->GetYaxis()->SetLabelSize(0.05);
   VH_tagOnly_2b1c_Aplanarity__3338->GetYaxis()->SetTitleSize(0.057);
   VH_tagOnly_2b1c_Aplanarity__3338->GetYaxis()->SetTitleOffset(1.2);
   VH_tagOnly_2b1c_Aplanarity__3338->GetYaxis()->SetTitleFont(42);
   VH_tagOnly_2b1c_Aplanarity__3338->GetZaxis()->SetLabelFont(42);
   VH_tagOnly_2b1c_Aplanarity__3338->GetZaxis()->SetTitleOffset(1);
   VH_tagOnly_2b1c_Aplanarity__3338->GetZaxis()->SetTitleFont(42);
   VH_tagOnly_2b1c_Aplanarity__3338->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 36.8 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Aplanarity_QCD_tagOnly_2b1c_17->Modified();
   Aplanarity_QCD_tagOnly_2b1c_17->cd();
   Aplanarity_QCD_tagOnly_2b1c_17->SetSelected(Aplanarity_QCD_tagOnly_2b1c_17);
}
