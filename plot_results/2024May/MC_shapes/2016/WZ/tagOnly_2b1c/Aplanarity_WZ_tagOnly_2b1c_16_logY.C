#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Aplanarity_WZ_tagOnly_2b1c_16_logY()
{
//=========Macro generated from canvas: Aplanarity_WZ_tagOnly_2b1c_16/Aplanarity_WZ_tagOnly_2b1c_16
//=========  (Thu May 23 20:49:13 2024) by ROOT version 6.28/10
   TCanvas *Aplanarity_WZ_tagOnly_2b1c_16 = new TCanvas("Aplanarity_WZ_tagOnly_2b1c_16", "Aplanarity_WZ_tagOnly_2b1c_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Aplanarity_WZ_tagOnly_2b1c_16->SetHighLightColor(2);
   Aplanarity_WZ_tagOnly_2b1c_16->Range(-0.2,-1.826885,1.133333,3.636399);
   Aplanarity_WZ_tagOnly_2b1c_16->SetFillColor(0);
   Aplanarity_WZ_tagOnly_2b1c_16->SetFillStyle(4000);
   Aplanarity_WZ_tagOnly_2b1c_16->SetBorderMode(0);
   Aplanarity_WZ_tagOnly_2b1c_16->SetBorderSize(2);
   Aplanarity_WZ_tagOnly_2b1c_16->SetLogy();
   Aplanarity_WZ_tagOnly_2b1c_16->SetLeftMargin(0.15);
   Aplanarity_WZ_tagOnly_2b1c_16->SetFrameFillStyle(1000);
   Aplanarity_WZ_tagOnly_2b1c_16->SetFrameBorderMode(0);
   Aplanarity_WZ_tagOnly_2b1c_16->SetFrameFillStyle(1000);
   Aplanarity_WZ_tagOnly_2b1c_16->SetFrameBorderMode(0);
   
   TH1D *VH_tagOnly_2b1c_Aplanarity__3355 = new TH1D("VH_tagOnly_2b1c_Aplanarity__3355","",50,0,1);
   VH_tagOnly_2b1c_Aplanarity__3355->SetBinContent(1,649.4143);
   VH_tagOnly_2b1c_Aplanarity__3355->SetBinContent(2,70.00128);
   VH_tagOnly_2b1c_Aplanarity__3355->SetBinContent(3,13.77068);
   VH_tagOnly_2b1c_Aplanarity__3355->SetBinContent(4,5.410571);
   VH_tagOnly_2b1c_Aplanarity__3355->SetBinContent(5,1.859818);
   VH_tagOnly_2b1c_Aplanarity__3355->SetBinContent(6,1.074986);
   VH_tagOnly_2b1c_Aplanarity__3355->SetBinContent(7,0.4012102);
   VH_tagOnly_2b1c_Aplanarity__3355->SetBinContent(8,0.2652039);
   VH_tagOnly_2b1c_Aplanarity__3355->SetBinContent(9,0.1048271);
   VH_tagOnly_2b1c_Aplanarity__3355->SetBinError(1,7.754617);
   VH_tagOnly_2b1c_Aplanarity__3355->SetBinError(2,2.511266);
   VH_tagOnly_2b1c_Aplanarity__3355->SetBinError(3,1.115243);
   VH_tagOnly_2b1c_Aplanarity__3355->SetBinError(4,0.7179131);
   VH_tagOnly_2b1c_Aplanarity__3355->SetBinError(5,0.4167538);
   VH_tagOnly_2b1c_Aplanarity__3355->SetBinError(6,0.328589);
   VH_tagOnly_2b1c_Aplanarity__3355->SetBinError(7,0.1837522);
   VH_tagOnly_2b1c_Aplanarity__3355->SetBinError(8,0.1569867);
   VH_tagOnly_2b1c_Aplanarity__3355->SetBinError(9,0.1048271);
   VH_tagOnly_2b1c_Aplanarity__3355->SetEntries(8370);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_tagOnly_2b1c_Aplanarity__3355->SetLineColor(ci);
   VH_tagOnly_2b1c_Aplanarity__3355->GetXaxis()->SetTitle("Aplanarity");
   VH_tagOnly_2b1c_Aplanarity__3355->GetXaxis()->SetRange(1,50);
   VH_tagOnly_2b1c_Aplanarity__3355->GetXaxis()->SetLabelFont(42);
   VH_tagOnly_2b1c_Aplanarity__3355->GetXaxis()->SetTitleOffset(1);
   VH_tagOnly_2b1c_Aplanarity__3355->GetXaxis()->SetTitleFont(42);
   VH_tagOnly_2b1c_Aplanarity__3355->GetYaxis()->SetTitle("Events/0.02");
   VH_tagOnly_2b1c_Aplanarity__3355->GetYaxis()->SetLabelFont(42);
   VH_tagOnly_2b1c_Aplanarity__3355->GetYaxis()->SetLabelSize(0.05);
   VH_tagOnly_2b1c_Aplanarity__3355->GetYaxis()->SetTitleSize(0.057);
   VH_tagOnly_2b1c_Aplanarity__3355->GetYaxis()->SetTitleOffset(1.2);
   VH_tagOnly_2b1c_Aplanarity__3355->GetYaxis()->SetTitleFont(42);
   VH_tagOnly_2b1c_Aplanarity__3355->GetZaxis()->SetLabelFont(42);
   VH_tagOnly_2b1c_Aplanarity__3355->GetZaxis()->SetTitleOffset(1);
   VH_tagOnly_2b1c_Aplanarity__3355->GetZaxis()->SetTitleFont(42);
   VH_tagOnly_2b1c_Aplanarity__3355->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Aplanarity_WZ_tagOnly_2b1c_16->Modified();
   Aplanarity_WZ_tagOnly_2b1c_16->cd();
   Aplanarity_WZ_tagOnly_2b1c_16->SetSelected(Aplanarity_WZ_tagOnly_2b1c_16);
}
