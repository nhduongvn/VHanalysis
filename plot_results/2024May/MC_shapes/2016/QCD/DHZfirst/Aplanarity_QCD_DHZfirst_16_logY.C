#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Aplanarity_QCD_DHZfirst_16_logY()
{
//=========Macro generated from canvas: Aplanarity_QCD_DHZfirst_16/Aplanarity_QCD_DHZfirst_16
//=========  (Thu May 23 20:48:51 2024) by ROOT version 6.28/10
   TCanvas *Aplanarity_QCD_DHZfirst_16 = new TCanvas("Aplanarity_QCD_DHZfirst_16", "Aplanarity_QCD_DHZfirst_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Aplanarity_QCD_DHZfirst_16->SetHighLightColor(2);
   Aplanarity_QCD_DHZfirst_16->Range(-0.2,-0.6383221,1.133333,6.405105);
   Aplanarity_QCD_DHZfirst_16->SetFillColor(0);
   Aplanarity_QCD_DHZfirst_16->SetFillStyle(4000);
   Aplanarity_QCD_DHZfirst_16->SetBorderMode(0);
   Aplanarity_QCD_DHZfirst_16->SetBorderSize(2);
   Aplanarity_QCD_DHZfirst_16->SetLogy();
   Aplanarity_QCD_DHZfirst_16->SetLeftMargin(0.15);
   Aplanarity_QCD_DHZfirst_16->SetFrameFillStyle(1000);
   Aplanarity_QCD_DHZfirst_16->SetFrameBorderMode(0);
   Aplanarity_QCD_DHZfirst_16->SetFrameFillStyle(1000);
   Aplanarity_QCD_DHZfirst_16->SetFrameBorderMode(0);
   
   TH1D *VH_DHZfirst_Aplanarity__1897 = new TH1D("VH_DHZfirst_Aplanarity__1897","",50,0,1);
   VH_DHZfirst_Aplanarity__1897->SetBinContent(1,264980.1);
   VH_DHZfirst_Aplanarity__1897->SetBinContent(2,33222.29);
   VH_DHZfirst_Aplanarity__1897->SetBinContent(3,8275.42);
   VH_DHZfirst_Aplanarity__1897->SetBinContent(4,1133.066);
   VH_DHZfirst_Aplanarity__1897->SetBinContent(5,58.20238);
   VH_DHZfirst_Aplanarity__1897->SetBinContent(6,2.435955);
   VH_DHZfirst_Aplanarity__1897->SetBinContent(7,2.328363);
   VH_DHZfirst_Aplanarity__1897->SetBinContent(8,15.74406);
   VH_DHZfirst_Aplanarity__1897->SetBinContent(9,6.578973);
   VH_DHZfirst_Aplanarity__1897->SetBinContent(13,20.07859);
   VH_DHZfirst_Aplanarity__1897->SetBinError(1,8123.369);
   VH_DHZfirst_Aplanarity__1897->SetBinError(2,3436.792);
   VH_DHZfirst_Aplanarity__1897->SetBinError(3,1900.003);
   VH_DHZfirst_Aplanarity__1897->SetBinError(4,414.335);
   VH_DHZfirst_Aplanarity__1897->SetBinError(5,24.23375);
   VH_DHZfirst_Aplanarity__1897->SetBinError(6,2.435955);
   VH_DHZfirst_Aplanarity__1897->SetBinError(7,2.328363);
   VH_DHZfirst_Aplanarity__1897->SetBinError(8,15.74406);
   VH_DHZfirst_Aplanarity__1897->SetBinError(9,6.578973);
   VH_DHZfirst_Aplanarity__1897->SetBinError(13,20.07859);
   VH_DHZfirst_Aplanarity__1897->SetEntries(16195);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_DHZfirst_Aplanarity__1897->SetLineColor(ci);
   VH_DHZfirst_Aplanarity__1897->GetXaxis()->SetTitle("Aplanarity");
   VH_DHZfirst_Aplanarity__1897->GetXaxis()->SetRange(1,50);
   VH_DHZfirst_Aplanarity__1897->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_Aplanarity__1897->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_Aplanarity__1897->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_Aplanarity__1897->GetYaxis()->SetTitle("Events/0.02");
   VH_DHZfirst_Aplanarity__1897->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_Aplanarity__1897->GetYaxis()->SetLabelSize(0.05);
   VH_DHZfirst_Aplanarity__1897->GetYaxis()->SetTitleSize(0.057);
   VH_DHZfirst_Aplanarity__1897->GetYaxis()->SetTitleOffset(1.2);
   VH_DHZfirst_Aplanarity__1897->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_Aplanarity__1897->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_Aplanarity__1897->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_Aplanarity__1897->GetZaxis()->SetTitleFont(42);
   VH_DHZfirst_Aplanarity__1897->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Aplanarity_QCD_DHZfirst_16->Modified();
   Aplanarity_QCD_DHZfirst_16->cd();
   Aplanarity_QCD_DHZfirst_16->SetSelected(Aplanarity_QCD_DHZfirst_16);
}
