#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Aplanarity_ZHcc_tagOnly_2b1c_17_logY()
{
//=========Macro generated from canvas: Aplanarity_ZHcc_tagOnly_2b1c_17/Aplanarity_ZHcc_tagOnly_2b1c_17
//=========  (Thu May 23 20:49:13 2024) by ROOT version 6.28/10
   TCanvas *Aplanarity_ZHcc_tagOnly_2b1c_17 = new TCanvas("Aplanarity_ZHcc_tagOnly_2b1c_17", "Aplanarity_ZHcc_tagOnly_2b1c_17",0,0,600,600);
   gStyle->SetOptStat(0);
   Aplanarity_ZHcc_tagOnly_2b1c_17->SetHighLightColor(2);
   Aplanarity_ZHcc_tagOnly_2b1c_17->Range(-0.2,-4.671615,1.133333,1.43158);
   Aplanarity_ZHcc_tagOnly_2b1c_17->SetFillColor(0);
   Aplanarity_ZHcc_tagOnly_2b1c_17->SetFillStyle(4000);
   Aplanarity_ZHcc_tagOnly_2b1c_17->SetBorderMode(0);
   Aplanarity_ZHcc_tagOnly_2b1c_17->SetBorderSize(2);
   Aplanarity_ZHcc_tagOnly_2b1c_17->SetLogy();
   Aplanarity_ZHcc_tagOnly_2b1c_17->SetLeftMargin(0.15);
   Aplanarity_ZHcc_tagOnly_2b1c_17->SetFrameFillStyle(1000);
   Aplanarity_ZHcc_tagOnly_2b1c_17->SetFrameBorderMode(0);
   Aplanarity_ZHcc_tagOnly_2b1c_17->SetFrameFillStyle(1000);
   Aplanarity_ZHcc_tagOnly_2b1c_17->SetFrameBorderMode(0);
   
   TH1D *VH_tagOnly_2b1c_Aplanarity__3332 = new TH1D("VH_tagOnly_2b1c_Aplanarity__3332","",50,0,1);
   VH_tagOnly_2b1c_Aplanarity__3332->SetBinContent(1,3.497127);
   VH_tagOnly_2b1c_Aplanarity__3332->SetBinContent(2,0.3280815);
   VH_tagOnly_2b1c_Aplanarity__3332->SetBinContent(3,0.07833981);
   VH_tagOnly_2b1c_Aplanarity__3332->SetBinContent(4,0.02670829);
   VH_tagOnly_2b1c_Aplanarity__3332->SetBinContent(5,0.009114337);
   VH_tagOnly_2b1c_Aplanarity__3332->SetBinContent(6,0.007637142);
   VH_tagOnly_2b1c_Aplanarity__3332->SetBinContent(7,0.001153476);
   VH_tagOnly_2b1c_Aplanarity__3332->SetBinContent(8,0.001344319);
   VH_tagOnly_2b1c_Aplanarity__3332->SetBinContent(9,0.0012572);
   VH_tagOnly_2b1c_Aplanarity__3332->SetBinContent(10,0.001674582);
   VH_tagOnly_2b1c_Aplanarity__3332->SetBinContent(11,0.001758706);
   VH_tagOnly_2b1c_Aplanarity__3332->SetBinContent(12,0.0001736739);
   VH_tagOnly_2b1c_Aplanarity__3332->SetBinError(1,0.06119408);
   VH_tagOnly_2b1c_Aplanarity__3332->SetBinError(2,0.01777619);
   VH_tagOnly_2b1c_Aplanarity__3332->SetBinError(3,0.009593703);
   VH_tagOnly_2b1c_Aplanarity__3332->SetBinError(4,0.005003992);
   VH_tagOnly_2b1c_Aplanarity__3332->SetBinError(5,0.00277215);
   VH_tagOnly_2b1c_Aplanarity__3332->SetBinError(6,0.003635091);
   VH_tagOnly_2b1c_Aplanarity__3332->SetBinError(7,0.0004465504);
   VH_tagOnly_2b1c_Aplanarity__3332->SetBinError(8,0.0006373595);
   VH_tagOnly_2b1c_Aplanarity__3332->SetBinError(9,0.00108211);
   VH_tagOnly_2b1c_Aplanarity__3332->SetBinError(10,0.001533512);
   VH_tagOnly_2b1c_Aplanarity__3332->SetBinError(11,0.001011927);
   VH_tagOnly_2b1c_Aplanarity__3332->SetBinError(12,0.0001736739);
   VH_tagOnly_2b1c_Aplanarity__3332->SetEntries(9705);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_tagOnly_2b1c_Aplanarity__3332->SetLineColor(ci);
   VH_tagOnly_2b1c_Aplanarity__3332->GetXaxis()->SetTitle("Aplanarity");
   VH_tagOnly_2b1c_Aplanarity__3332->GetXaxis()->SetRange(1,50);
   VH_tagOnly_2b1c_Aplanarity__3332->GetXaxis()->SetLabelFont(42);
   VH_tagOnly_2b1c_Aplanarity__3332->GetXaxis()->SetTitleOffset(1);
   VH_tagOnly_2b1c_Aplanarity__3332->GetXaxis()->SetTitleFont(42);
   VH_tagOnly_2b1c_Aplanarity__3332->GetYaxis()->SetTitle("Events/0.02");
   VH_tagOnly_2b1c_Aplanarity__3332->GetYaxis()->SetLabelFont(42);
   VH_tagOnly_2b1c_Aplanarity__3332->GetYaxis()->SetLabelSize(0.05);
   VH_tagOnly_2b1c_Aplanarity__3332->GetYaxis()->SetTitleSize(0.057);
   VH_tagOnly_2b1c_Aplanarity__3332->GetYaxis()->SetTitleOffset(1.2);
   VH_tagOnly_2b1c_Aplanarity__3332->GetYaxis()->SetTitleFont(42);
   VH_tagOnly_2b1c_Aplanarity__3332->GetZaxis()->SetLabelFont(42);
   VH_tagOnly_2b1c_Aplanarity__3332->GetZaxis()->SetTitleOffset(1);
   VH_tagOnly_2b1c_Aplanarity__3332->GetZaxis()->SetTitleFont(42);
   VH_tagOnly_2b1c_Aplanarity__3332->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 36.8 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Aplanarity_ZHcc_tagOnly_2b1c_17->Modified();
   Aplanarity_ZHcc_tagOnly_2b1c_17->cd();
   Aplanarity_ZHcc_tagOnly_2b1c_17->SetSelected(Aplanarity_ZHcc_tagOnly_2b1c_17);
}
