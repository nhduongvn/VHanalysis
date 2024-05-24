#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Aplanarity_WW_tagOnly_2b1c_18()
{
//=========Macro generated from canvas: Aplanarity_WW_tagOnly_2b1c_18/Aplanarity_WW_tagOnly_2b1c_18
//=========  (Fri May 24 12:42:55 2024) by ROOT version 6.28/10
   TCanvas *Aplanarity_WW_tagOnly_2b1c_18 = new TCanvas("Aplanarity_WW_tagOnly_2b1c_18", "Aplanarity_WW_tagOnly_2b1c_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Aplanarity_WW_tagOnly_2b1c_18->SetHighLightColor(2);
   Aplanarity_WW_tagOnly_2b1c_18->Range(-0.2,-28.17452,1.133333,253.5707);
   Aplanarity_WW_tagOnly_2b1c_18->SetFillColor(0);
   Aplanarity_WW_tagOnly_2b1c_18->SetFillStyle(4000);
   Aplanarity_WW_tagOnly_2b1c_18->SetBorderMode(0);
   Aplanarity_WW_tagOnly_2b1c_18->SetBorderSize(2);
   Aplanarity_WW_tagOnly_2b1c_18->SetLeftMargin(0.15);
   Aplanarity_WW_tagOnly_2b1c_18->SetFrameFillStyle(1000);
   Aplanarity_WW_tagOnly_2b1c_18->SetFrameBorderMode(0);
   Aplanarity_WW_tagOnly_2b1c_18->SetFrameFillStyle(1000);
   Aplanarity_WW_tagOnly_2b1c_18->SetFrameBorderMode(0);
   
   TH1D *VH_tagOnly_2b1c_Aplanarity__3354 = new TH1D("VH_tagOnly_2b1c_Aplanarity__3354","",50,0,1);
   VH_tagOnly_2b1c_Aplanarity__3354->SetBinContent(1,214.663);
   VH_tagOnly_2b1c_Aplanarity__3354->SetBinContent(2,27.69001);
   VH_tagOnly_2b1c_Aplanarity__3354->SetBinContent(3,8.206449);
   VH_tagOnly_2b1c_Aplanarity__3354->SetBinContent(4,0.4638177);
   VH_tagOnly_2b1c_Aplanarity__3354->SetBinContent(5,4.52183);
   VH_tagOnly_2b1c_Aplanarity__3354->SetBinContent(7,0.5430295);
   VH_tagOnly_2b1c_Aplanarity__3354->SetBinError(1,14.09028);
   VH_tagOnly_2b1c_Aplanarity__3354->SetBinError(2,4.562106);
   VH_tagOnly_2b1c_Aplanarity__3354->SetBinError(3,3.113036);
   VH_tagOnly_2b1c_Aplanarity__3354->SetBinError(4,0.4638177);
   VH_tagOnly_2b1c_Aplanarity__3354->SetBinError(5,2.329734);
   VH_tagOnly_2b1c_Aplanarity__3354->SetBinError(7,0.5430295);
   VH_tagOnly_2b1c_Aplanarity__3354->SetEntries(357);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_tagOnly_2b1c_Aplanarity__3354->SetLineColor(ci);
   VH_tagOnly_2b1c_Aplanarity__3354->GetXaxis()->SetTitle("Aplanarity");
   VH_tagOnly_2b1c_Aplanarity__3354->GetXaxis()->SetRange(1,50);
   VH_tagOnly_2b1c_Aplanarity__3354->GetXaxis()->SetLabelFont(42);
   VH_tagOnly_2b1c_Aplanarity__3354->GetXaxis()->SetTitleOffset(1);
   VH_tagOnly_2b1c_Aplanarity__3354->GetXaxis()->SetTitleFont(42);
   VH_tagOnly_2b1c_Aplanarity__3354->GetYaxis()->SetTitle("Events/0.02");
   VH_tagOnly_2b1c_Aplanarity__3354->GetYaxis()->SetLabelFont(42);
   VH_tagOnly_2b1c_Aplanarity__3354->GetYaxis()->SetLabelSize(0.05);
   VH_tagOnly_2b1c_Aplanarity__3354->GetYaxis()->SetTitleSize(0.057);
   VH_tagOnly_2b1c_Aplanarity__3354->GetYaxis()->SetTitleOffset(1.2);
   VH_tagOnly_2b1c_Aplanarity__3354->GetYaxis()->SetTitleFont(42);
   VH_tagOnly_2b1c_Aplanarity__3354->GetZaxis()->SetLabelFont(42);
   VH_tagOnly_2b1c_Aplanarity__3354->GetZaxis()->SetTitleOffset(1);
   VH_tagOnly_2b1c_Aplanarity__3354->GetZaxis()->SetTitleFont(42);
   VH_tagOnly_2b1c_Aplanarity__3354->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Aplanarity_WW_tagOnly_2b1c_18->Modified();
   Aplanarity_WW_tagOnly_2b1c_18->cd();
   Aplanarity_WW_tagOnly_2b1c_18->SetSelected(Aplanarity_WW_tagOnly_2b1c_18);
}
