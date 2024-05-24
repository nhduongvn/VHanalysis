#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Aplanarity_QCD_tagOnly_16()
{
//=========Macro generated from canvas: Aplanarity_QCD_tagOnly_16/Aplanarity_QCD_tagOnly_16
//=========  (Fri May 24 12:42:21 2024) by ROOT version 6.28/10
   TCanvas *Aplanarity_QCD_tagOnly_16 = new TCanvas("Aplanarity_QCD_tagOnly_16", "Aplanarity_QCD_tagOnly_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Aplanarity_QCD_tagOnly_16->SetHighLightColor(2);
   Aplanarity_QCD_tagOnly_16->Range(-0.2,-240579.1,1.133333,2165212);
   Aplanarity_QCD_tagOnly_16->SetFillColor(0);
   Aplanarity_QCD_tagOnly_16->SetFillStyle(4000);
   Aplanarity_QCD_tagOnly_16->SetBorderMode(0);
   Aplanarity_QCD_tagOnly_16->SetBorderSize(2);
   Aplanarity_QCD_tagOnly_16->SetLeftMargin(0.15);
   Aplanarity_QCD_tagOnly_16->SetFrameFillStyle(1000);
   Aplanarity_QCD_tagOnly_16->SetFrameBorderMode(0);
   Aplanarity_QCD_tagOnly_16->SetFrameFillStyle(1000);
   Aplanarity_QCD_tagOnly_16->SetFrameBorderMode(0);
   
   TH1D *VH_tagOnly_Aplanarity__1177 = new TH1D("VH_tagOnly_Aplanarity__1177","",50,0,1);
   VH_tagOnly_Aplanarity__1177->SetBinContent(1,1832984);
   VH_tagOnly_Aplanarity__1177->SetBinContent(2,265472.1);
   VH_tagOnly_Aplanarity__1177->SetBinContent(3,66024.2);
   VH_tagOnly_Aplanarity__1177->SetBinContent(4,21842.97);
   VH_tagOnly_Aplanarity__1177->SetBinContent(5,6027.993);
   VH_tagOnly_Aplanarity__1177->SetBinContent(6,3152.806);
   VH_tagOnly_Aplanarity__1177->SetBinContent(7,2110.428);
   VH_tagOnly_Aplanarity__1177->SetBinContent(8,647.1312);
   VH_tagOnly_Aplanarity__1177->SetBinContent(9,1000.154);
   VH_tagOnly_Aplanarity__1177->SetBinContent(10,128.9899);
   VH_tagOnly_Aplanarity__1177->SetBinContent(11,170.8952);
   VH_tagOnly_Aplanarity__1177->SetBinContent(12,349.5123);
   VH_tagOnly_Aplanarity__1177->SetBinContent(13,97.29942);
   VH_tagOnly_Aplanarity__1177->SetBinContent(14,11.18534);
   VH_tagOnly_Aplanarity__1177->SetBinContent(15,38.4539);
   VH_tagOnly_Aplanarity__1177->SetBinContent(16,0.4282265);
   VH_tagOnly_Aplanarity__1177->SetBinContent(17,13.62232);
   VH_tagOnly_Aplanarity__1177->SetBinError(1,28678.74);
   VH_tagOnly_Aplanarity__1177->SetBinError(2,17762.46);
   VH_tagOnly_Aplanarity__1177->SetBinError(3,4151.444);
   VH_tagOnly_Aplanarity__1177->SetBinError(4,2219.393);
   VH_tagOnly_Aplanarity__1177->SetBinError(5,853.4622);
   VH_tagOnly_Aplanarity__1177->SetBinError(6,618.5111);
   VH_tagOnly_Aplanarity__1177->SetBinError(7,489.5344);
   VH_tagOnly_Aplanarity__1177->SetBinError(8,94.27131);
   VH_tagOnly_Aplanarity__1177->SetBinError(9,364.9482);
   VH_tagOnly_Aplanarity__1177->SetBinError(10,39.18975);
   VH_tagOnly_Aplanarity__1177->SetBinError(11,46.98071);
   VH_tagOnly_Aplanarity__1177->SetBinError(12,232.6575);
   VH_tagOnly_Aplanarity__1177->SetBinError(13,37.09874);
   VH_tagOnly_Aplanarity__1177->SetBinError(14,8.60168);
   VH_tagOnly_Aplanarity__1177->SetBinError(15,18.0459);
   VH_tagOnly_Aplanarity__1177->SetBinError(16,0.4282265);
   VH_tagOnly_Aplanarity__1177->SetBinError(17,9.441003);
   VH_tagOnly_Aplanarity__1177->SetEntries(176350);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_tagOnly_Aplanarity__1177->SetLineColor(ci);
   VH_tagOnly_Aplanarity__1177->GetXaxis()->SetTitle("Aplanarity");
   VH_tagOnly_Aplanarity__1177->GetXaxis()->SetRange(1,50);
   VH_tagOnly_Aplanarity__1177->GetXaxis()->SetLabelFont(42);
   VH_tagOnly_Aplanarity__1177->GetXaxis()->SetTitleOffset(1);
   VH_tagOnly_Aplanarity__1177->GetXaxis()->SetTitleFont(42);
   VH_tagOnly_Aplanarity__1177->GetYaxis()->SetTitle("Events/0.02");
   VH_tagOnly_Aplanarity__1177->GetYaxis()->SetLabelFont(42);
   VH_tagOnly_Aplanarity__1177->GetYaxis()->SetLabelSize(0.05);
   VH_tagOnly_Aplanarity__1177->GetYaxis()->SetTitleSize(0.057);
   VH_tagOnly_Aplanarity__1177->GetYaxis()->SetTitleOffset(1.2);
   VH_tagOnly_Aplanarity__1177->GetYaxis()->SetTitleFont(42);
   VH_tagOnly_Aplanarity__1177->GetZaxis()->SetLabelFont(42);
   VH_tagOnly_Aplanarity__1177->GetZaxis()->SetTitleOffset(1);
   VH_tagOnly_Aplanarity__1177->GetZaxis()->SetTitleFont(42);
   VH_tagOnly_Aplanarity__1177->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Aplanarity_QCD_tagOnly_16->Modified();
   Aplanarity_QCD_tagOnly_16->cd();
   Aplanarity_QCD_tagOnly_16->SetSelected(Aplanarity_QCD_tagOnly_16);
}
