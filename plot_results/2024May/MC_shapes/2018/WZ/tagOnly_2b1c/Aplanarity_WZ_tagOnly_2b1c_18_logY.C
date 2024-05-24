#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Aplanarity_WZ_tagOnly_2b1c_18_logY()
{
//=========Macro generated from canvas: Aplanarity_WZ_tagOnly_2b1c_18/Aplanarity_WZ_tagOnly_2b1c_18
//=========  (Thu May 23 20:49:13 2024) by ROOT version 6.28/10
   TCanvas *Aplanarity_WZ_tagOnly_2b1c_18 = new TCanvas("Aplanarity_WZ_tagOnly_2b1c_18", "Aplanarity_WZ_tagOnly_2b1c_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Aplanarity_WZ_tagOnly_2b1c_18->SetHighLightColor(2);
   Aplanarity_WZ_tagOnly_2b1c_18->Range(-0.2,-1.588981,1.133333,3.648593);
   Aplanarity_WZ_tagOnly_2b1c_18->SetFillColor(0);
   Aplanarity_WZ_tagOnly_2b1c_18->SetFillStyle(4000);
   Aplanarity_WZ_tagOnly_2b1c_18->SetBorderMode(0);
   Aplanarity_WZ_tagOnly_2b1c_18->SetBorderSize(2);
   Aplanarity_WZ_tagOnly_2b1c_18->SetLogy();
   Aplanarity_WZ_tagOnly_2b1c_18->SetLeftMargin(0.15);
   Aplanarity_WZ_tagOnly_2b1c_18->SetFrameFillStyle(1000);
   Aplanarity_WZ_tagOnly_2b1c_18->SetFrameBorderMode(0);
   Aplanarity_WZ_tagOnly_2b1c_18->SetFrameFillStyle(1000);
   Aplanarity_WZ_tagOnly_2b1c_18->SetFrameBorderMode(0);
   
   TH1D *VH_tagOnly_2b1c_Aplanarity__3357 = new TH1D("VH_tagOnly_2b1c_Aplanarity__3357","",50,0,1);
   VH_tagOnly_2b1c_Aplanarity__3357->SetBinContent(1,703.5362);
   VH_tagOnly_2b1c_Aplanarity__3357->SetBinContent(2,70.00711);
   VH_tagOnly_2b1c_Aplanarity__3357->SetBinContent(3,13.36989);
   VH_tagOnly_2b1c_Aplanarity__3357->SetBinContent(4,12.77026);
   VH_tagOnly_2b1c_Aplanarity__3357->SetBinContent(5,1.319165);
   VH_tagOnly_2b1c_Aplanarity__3357->SetBinContent(6,0.332058);
   VH_tagOnly_2b1c_Aplanarity__3357->SetBinContent(7,0.8810911);
   VH_tagOnly_2b1c_Aplanarity__3357->SetBinContent(9,1.218712);
   VH_tagOnly_2b1c_Aplanarity__3357->SetBinContent(10,0.1721101);
   VH_tagOnly_2b1c_Aplanarity__3357->SetBinError(1,22.70175);
   VH_tagOnly_2b1c_Aplanarity__3357->SetBinError(2,7.8722);
   VH_tagOnly_2b1c_Aplanarity__3357->SetBinError(3,2.948545);
   VH_tagOnly_2b1c_Aplanarity__3357->SetBinError(4,3.921965);
   VH_tagOnly_2b1c_Aplanarity__3357->SetBinError(5,0.7620544);
   VH_tagOnly_2b1c_Aplanarity__3357->SetBinError(6,0.332058);
   VH_tagOnly_2b1c_Aplanarity__3357->SetBinError(7,0.6279972);
   VH_tagOnly_2b1c_Aplanarity__3357->SetBinError(9,0.8710133);
   VH_tagOnly_2b1c_Aplanarity__3357->SetBinError(10,0.1721101);
   VH_tagOnly_2b1c_Aplanarity__3357->SetEntries(1432);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_tagOnly_2b1c_Aplanarity__3357->SetLineColor(ci);
   VH_tagOnly_2b1c_Aplanarity__3357->GetXaxis()->SetTitle("Aplanarity");
   VH_tagOnly_2b1c_Aplanarity__3357->GetXaxis()->SetRange(1,50);
   VH_tagOnly_2b1c_Aplanarity__3357->GetXaxis()->SetLabelFont(42);
   VH_tagOnly_2b1c_Aplanarity__3357->GetXaxis()->SetTitleOffset(1);
   VH_tagOnly_2b1c_Aplanarity__3357->GetXaxis()->SetTitleFont(42);
   VH_tagOnly_2b1c_Aplanarity__3357->GetYaxis()->SetTitle("Events/0.02");
   VH_tagOnly_2b1c_Aplanarity__3357->GetYaxis()->SetLabelFont(42);
   VH_tagOnly_2b1c_Aplanarity__3357->GetYaxis()->SetLabelSize(0.05);
   VH_tagOnly_2b1c_Aplanarity__3357->GetYaxis()->SetTitleSize(0.057);
   VH_tagOnly_2b1c_Aplanarity__3357->GetYaxis()->SetTitleOffset(1.2);
   VH_tagOnly_2b1c_Aplanarity__3357->GetYaxis()->SetTitleFont(42);
   VH_tagOnly_2b1c_Aplanarity__3357->GetZaxis()->SetLabelFont(42);
   VH_tagOnly_2b1c_Aplanarity__3357->GetZaxis()->SetTitleOffset(1);
   VH_tagOnly_2b1c_Aplanarity__3357->GetZaxis()->SetTitleFont(42);
   VH_tagOnly_2b1c_Aplanarity__3357->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Aplanarity_WZ_tagOnly_2b1c_18->Modified();
   Aplanarity_WZ_tagOnly_2b1c_18->cd();
   Aplanarity_WZ_tagOnly_2b1c_18->SetSelected(Aplanarity_WZ_tagOnly_2b1c_18);
}
